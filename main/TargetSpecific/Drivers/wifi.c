/*******************************************************************************
*
*   W I F I   D R I V E R
*
*******************************************************************************/

#include "wifi.h"

#include <string.h>
#include <stdbool.h>

#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_netif.h"
#include "esp_err.h"
#include "esp_mac.h"
#include "nvs_flash.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


static const char* TAG = "wifi";

/* upper bound for the driver's internal IDF record buffer kept in BSS */
#define WIFI_INTERNAL_RECORDS  20


static volatile bool   s_initialized       = false;
static volatile bool   s_is_ready          = false;
static volatile bool   s_scan_in_progress  = false;
static volatile bool   s_has_scan_results  = false;

/* current radio mode: WIFI_MODE_STA or WIFI_MODE_AP */
static wifi_mode_t     s_current_mode      = WIFI_MODE_STA;

/* Reused across scans, lives in BSS instead of on the sys_evt task's stack. */
static wifi_ap_record_t s_idf_records[ WIFI_INTERNAL_RECORDS ];

/* netif handle for the STA - needed to read DHCP results */
static esp_netif_t*    s_sta_netif         = NULL;

/* Connection (link) state. Updated from event handlers (sys_evt task) and
   the periodic poll inside wifi_get_link_info (caller task). */
static volatile uint32_t       s_link_seq           = 0;
static uint32_t                s_link_last_popped   = 0;
static wifi_link_info_t        s_link_info          = { 0 };

/* Heatmap state */
static volatile bool           s_heatmap_active     = false;
static volatile uint8_t        s_heatmap_channel    = 1;
static uint16_t                s_heatmap_hits[ 14 ] = { 0 };
static uint16_t                s_heatmap_smoothed[ 14 ] = { 0 };
static volatile uint32_t       s_heatmap_seq        = 0;
static uint32_t                s_heatmap_last_pop   = 0;
static TaskHandle_t            s_heatmap_task       = NULL;


/*******************************************************************************
* FUNCTION:
*   on_wifi_event
*
* DESCRIPTION:
*   Internal handler that runs on the sys_evt task. Stack budget there is
*   small, so this function only flips flags - all heavy work (reading
*   records, formatting) is deferred to the caller's task via
*   wifi_fetch_scan_results().
*
*******************************************************************************/
static void on_wifi_event( void* arg, esp_event_base_t base, int32_t id, void* data )
{
  (void)arg;

  if ( base == WIFI_EVENT )
  {
    switch ( id )
    {
      case WIFI_EVENT_STA_START:
        s_is_ready = true;
        break;

      case WIFI_EVENT_SCAN_DONE:
        s_has_scan_results = true;
        break;

      case WIFI_EVENT_STA_DISCONNECTED:
      {
        wifi_event_sta_disconnected_t* e = (wifi_event_sta_disconnected_t*)data;
        s_link_info.state       = WIFI_LINK_FAILED;
        s_link_info.fail_reason = e ? e->reason : 0;
        s_link_info.ip          = 0;
        s_link_info.gateway     = 0;
        s_link_info.netmask     = 0;
        s_link_seq++;
        s_link_info.seq = s_link_seq;
        break;
      }

      case WIFI_EVENT_STA_CONNECTED:
      {
        /* Link layer associated; still waiting for DHCP. State stays
           CONNECTING until IP_EVENT_STA_GOT_IP arrives. */
        wifi_event_sta_connected_t* e = (wifi_event_sta_connected_t*)data;
        if ( e )
        {
          memcpy( s_link_info.bssid, e->bssid, 6 );
          s_link_info.channel = e->channel;
          memcpy( s_link_info.ssid, e->ssid, e->ssid_len < 32 ? e->ssid_len : 32 );
          s_link_info.ssid[ e->ssid_len < 32 ? e->ssid_len : 32 ] = '\0';
        }
        s_link_seq++;
        s_link_info.seq = s_link_seq;
        break;
      }

      default:
        break;
    }
  }
  else if ( base == IP_EVENT && id == IP_EVENT_STA_GOT_IP )
  {
    ip_event_got_ip_t* e = (ip_event_got_ip_t*)data;
    s_link_info.state       = WIFI_LINK_CONNECTED;
    s_link_info.fail_reason = 0;
    if ( e )
    {
      s_link_info.ip      = e->ip_info.ip.addr;
      s_link_info.gateway = e->ip_info.gw.addr;
      s_link_info.netmask = e->ip_info.netmask.addr;
    }
    s_link_seq++;
    s_link_info.seq = s_link_seq;
  }
}


/*******************************************************************************
* FUNCTION:
*   wifi_init
*
*******************************************************************************/
void wifi_init( void )
{
  if ( s_initialized )
    return;

  /* NVS is required by the Wi-Fi driver for storing PHY calibration data */
  esp_err_t err = nvs_flash_init();
  if (( err == ESP_ERR_NVS_NO_FREE_PAGES ) || ( err == ESP_ERR_NVS_NEW_VERSION_FOUND ))
  {
    ESP_ERROR_CHECK( nvs_flash_erase());
    ESP_ERROR_CHECK( nvs_flash_init());
  }
  else
  {
    ESP_ERROR_CHECK( err );
  }

  ESP_ERROR_CHECK( esp_netif_init());
  ESP_ERROR_CHECK( esp_event_loop_create_default());
  s_sta_netif = esp_netif_create_default_wifi_sta();

  wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
  ESP_ERROR_CHECK( esp_wifi_init( &cfg ));

  ESP_ERROR_CHECK( esp_event_handler_instance_register(
    WIFI_EVENT, ESP_EVENT_ANY_ID, &on_wifi_event, NULL, NULL ));

  /* IP events fire when DHCP succeeds - needed for the CONNECT mode flow */
  ESP_ERROR_CHECK( esp_event_handler_instance_register(
    IP_EVENT, ESP_EVENT_ANY_ID, &on_wifi_event, NULL, NULL ));

  /* never connect, so flash-backed credential storage is pointless */
  ESP_ERROR_CHECK( esp_wifi_set_storage( WIFI_STORAGE_RAM ));
  ESP_ERROR_CHECK( esp_wifi_set_mode( WIFI_MODE_STA ));
  s_current_mode = WIFI_MODE_STA;
  ESP_ERROR_CHECK( esp_wifi_start());

  s_initialized = true;
  ESP_LOGI( TAG, "Wi-Fi driver initialized" );
}


/*******************************************************************************
* FUNCTION:
*   wifi_set_mode_station
*
*******************************************************************************/
void wifi_set_mode_station( void )
{
  if ( !s_initialized || s_current_mode == WIFI_MODE_STA )
    return;

  /* abort any pending scan, otherwise the mode switch will fail */
  esp_wifi_scan_stop();

  ESP_ERROR_CHECK( esp_wifi_stop());
  ESP_ERROR_CHECK( esp_wifi_set_mode( WIFI_MODE_STA ));
  ESP_ERROR_CHECK( esp_wifi_start());

  s_current_mode     = WIFI_MODE_STA;
  s_scan_in_progress = false;
  s_has_scan_results = false;
  s_is_ready         = true;

  ESP_LOGI( TAG, "Switched to STA mode" );
}


/*******************************************************************************
* FUNCTION:
*   wifi_set_mode_softap
*
*******************************************************************************/
void wifi_set_mode_softap( const char* ssid, const char* password, int channel )
{
  if ( !s_initialized || !ssid )
    return;

  if ( channel < 1 || channel > 13 )
    channel = 6;

  /* abort any pending scan and stop the radio so the mode change is clean */
  esp_wifi_scan_stop();
  ESP_ERROR_CHECK( esp_wifi_stop());

  ESP_ERROR_CHECK( esp_wifi_set_mode( WIFI_MODE_AP ));

  wifi_config_t cfg;
  memset( &cfg, 0, sizeof( cfg ));

  size_t ssid_len = strlen( ssid );
  if ( ssid_len > 32 ) ssid_len = 32;
  memcpy( cfg.ap.ssid, ssid, ssid_len );
  cfg.ap.ssid_len        = (uint8_t)ssid_len;
  cfg.ap.channel         = (uint8_t)channel;
  cfg.ap.max_connection  = 4;
  cfg.ap.beacon_interval = 100;

  if ( password && strlen( password ) >= 8 )
  {
    size_t pw_len = strlen( password );
    if ( pw_len > 63 ) pw_len = 63;
    memcpy( cfg.ap.password, password, pw_len );
    cfg.ap.authmode = WIFI_AUTH_WPA2_PSK;
  }
  else
  {
    cfg.ap.authmode = WIFI_AUTH_OPEN;
  }

  ESP_ERROR_CHECK( esp_wifi_set_config( WIFI_IF_AP, &cfg ));
  ESP_ERROR_CHECK( esp_wifi_start());

  s_current_mode     = WIFI_MODE_AP;
  s_scan_in_progress = false;
  s_has_scan_results = false;
  /* the AP is up as soon as esp_wifi_start returns; no need to wait for
     a STA_START event - the GUI can call wifi_get_ap_client_count() now */
  s_is_ready = true;

  ESP_LOGI( TAG, "Switched to AP mode: ssid=\"%.*s\" channel=%d auth=%d",
    (int)ssid_len, ssid, channel, cfg.ap.authmode );
}


/*******************************************************************************
* FUNCTION:
*   wifi_get_ap_client_count
*
*******************************************************************************/
int wifi_get_ap_client_count( void )
{
  if ( !s_initialized || s_current_mode != WIFI_MODE_AP )
    return 0;

  wifi_sta_list_t list;
  if ( esp_wifi_ap_get_sta_list( &list ) != ESP_OK )
    return 0;

  return list.num;
}


/*******************************************************************************
* FUNCTION:
*   wifi_is_ready
*
*******************************************************************************/
int wifi_is_ready( void )
{
  return s_is_ready ? 1 : 0;
}


/*******************************************************************************
* FUNCTION:
*   wifi_start_scan
*
*******************************************************************************/
int wifi_start_scan( void )
{
  if ( !s_initialized || !s_is_ready || s_scan_in_progress )
    return 0;

  /* scanning only makes sense in STA mode */
  if ( s_current_mode != WIFI_MODE_STA )
    return 0;

  /* zeroed config = active scan, all channels, all SSIDs */
  wifi_scan_config_t cfg;
  memset( &cfg, 0, sizeof( cfg ));

  esp_err_t err = esp_wifi_scan_start( &cfg, false );
  if ( err != ESP_OK )
  {
    ESP_LOGW( TAG, "esp_wifi_scan_start failed: %s", esp_err_to_name( err ));
    return 0;
  }

  s_scan_in_progress = true;
  return 1;
}


/*******************************************************************************
* FUNCTION:
*   wifi_has_scan_results
*
*******************************************************************************/
int wifi_has_scan_results( void )
{
  return s_has_scan_results ? 1 : 0;
}


/*******************************************************************************
* FUNCTION:
*   wifi_fetch_scan_results
*
*******************************************************************************/
int wifi_fetch_scan_results( wifi_ap_info_t* records, int max_count )
{
  if ( !records || max_count <= 0 )
  {
    s_has_scan_results = false;
    s_scan_in_progress = false;
    return 0;
  }

  uint16_t ap_count = 0;

  if ( esp_wifi_scan_get_ap_num( &ap_count ) != ESP_OK )
  {
    ESP_LOGW( TAG, "esp_wifi_scan_get_ap_num failed" );
    s_has_scan_results = false;
    s_scan_in_progress = false;
    return 0;
  }

  if ( ap_count == 0 )
  {
    s_has_scan_results = false;
    s_scan_in_progress = false;
    return 0;
  }

  if ( ap_count > WIFI_INTERNAL_RECORDS )
    ap_count = WIFI_INTERNAL_RECORDS;

  if ( esp_wifi_scan_get_ap_records( &ap_count, s_idf_records ) != ESP_OK )
  {
    ESP_LOGW( TAG, "esp_wifi_scan_get_ap_records failed" );
    s_has_scan_results = false;
    s_scan_in_progress = false;
    return 0;
  }

  int out_count = ( ap_count > (uint16_t)max_count ) ? max_count : (int)ap_count;

  for ( int i = 0; i < out_count; i++ )
  {
    /* IDF guarantees the SSID buffer is 33 bytes and contains a terminator
       within those 33 bytes, but force NUL at position 32 to be robust */
    memcpy( records[ i ].ssid, s_idf_records[ i ].ssid, WIFI_SSID_MAX_LEN );
    records[ i ].ssid[ WIFI_SSID_MAX_LEN ] = '\0';

    memcpy( records[ i ].bssid, s_idf_records[ i ].bssid, 6 );

    records[ i ].rssi     = s_idf_records[ i ].rssi;
    records[ i ].channel  = s_idf_records[ i ].primary;
    records[ i ].authmode = (uint8_t)s_idf_records[ i ].authmode;
  }

  s_has_scan_results = false;
  s_scan_in_progress = false;
  return out_count;
}


/* -------------------------------------------------------------------------- */
/* Connection (associate as STA)                                              */
/* -------------------------------------------------------------------------- */

void wifi_connect_to( const char* ssid, const char* password )
{
  if ( !s_initialized || !ssid )
    return;

  /* abort competing modes */
  if ( s_heatmap_active )
    wifi_heatmap_stop();

  esp_wifi_scan_stop();
  s_scan_in_progress = false;
  s_has_scan_results = false;

  /* must be in STA mode and stopped before reconfiguring */
  if ( s_current_mode != WIFI_MODE_STA )
  {
    ESP_ERROR_CHECK( esp_wifi_stop());
    ESP_ERROR_CHECK( esp_wifi_set_mode( WIFI_MODE_STA ));
    s_current_mode = WIFI_MODE_STA;
    ESP_ERROR_CHECK( esp_wifi_start());
  }
  else
  {
    /* if already associated, drop the existing link first */
    esp_wifi_disconnect();
  }

  wifi_config_t cfg;
  memset( &cfg, 0, sizeof( cfg ));

  size_t ssid_len = strlen( ssid );
  if ( ssid_len > 32 ) ssid_len = 32;
  memcpy( cfg.sta.ssid, ssid, ssid_len );

  if ( password && password[ 0 ] != '\0' )
  {
    size_t pw_len = strlen( password );
    if ( pw_len > 63 ) pw_len = 63;
    memcpy( cfg.sta.password, password, pw_len );
    cfg.sta.threshold.authmode = WIFI_AUTH_WPA_PSK;
  }
  else
  {
    cfg.sta.threshold.authmode = WIFI_AUTH_OPEN;
  }
  cfg.sta.pmf_cfg.capable  = true;
  cfg.sta.pmf_cfg.required = false;

  ESP_ERROR_CHECK( esp_wifi_set_config( WIFI_IF_STA, &cfg ));

  /* publish CONNECTING state so the GUI shows the spinner */
  memset( &s_link_info, 0, sizeof( s_link_info ));
  s_link_info.state = WIFI_LINK_CONNECTING;
  memcpy( s_link_info.ssid, cfg.sta.ssid, ssid_len );
  s_link_info.ssid[ ssid_len ] = '\0';
  s_link_seq++;
  s_link_info.seq = s_link_seq;

  esp_err_t err = esp_wifi_connect();
  if ( err != ESP_OK )
  {
    ESP_LOGW( TAG, "esp_wifi_connect failed: %s", esp_err_to_name( err ));
    s_link_info.state       = WIFI_LINK_FAILED;
    s_link_info.fail_reason = (uint16_t)err;
    s_link_seq++;
    s_link_info.seq = s_link_seq;
  }

  ESP_LOGI( TAG, "Connecting to \"%.*s\"...", (int)ssid_len, ssid );
}


void wifi_connect_disconnect( void )
{
  if ( !s_initialized )
    return;

  esp_wifi_disconnect();

  s_link_info.state       = WIFI_LINK_IDLE;
  s_link_info.ip          = 0;
  s_link_info.gateway     = 0;
  s_link_info.netmask     = 0;
  s_link_info.fail_reason = 0;
  s_link_seq++;
  s_link_info.seq = s_link_seq;
}


int wifi_get_link_info( wifi_link_info_t* out )
{
  if ( !out )
    return 0;

  /* refresh dynamic fields (RSSI etc) directly from the IDF when associated */
  if ( s_link_info.state == WIFI_LINK_CONNECTED )
  {
    wifi_ap_record_t rec;
    if ( esp_wifi_sta_get_ap_info( &rec ) == ESP_OK )
    {
      if ( s_link_info.rssi != rec.rssi || s_link_info.channel != rec.primary )
      {
        s_link_info.rssi    = rec.rssi;
        s_link_info.channel = rec.primary;
        s_link_seq++;
        s_link_info.seq = s_link_seq;
      }
    }
  }

  uint32_t seq_before = s_link_seq;
  *out = s_link_info;

  if ( seq_before == s_link_last_popped )
    return 0;

  s_link_last_popped = seq_before;
  return 1;
}


/* -------------------------------------------------------------------------- */
/* Channel heatmap (promiscuous-mode beacon counter, 1..13)                   */
/* -------------------------------------------------------------------------- */

/* RX callback in promiscuous mode. Filters management frames and increments
   the counter for the channel the radio is currently sitting on. */
static void heatmap_rx_cb( void* buf, wifi_promiscuous_pkt_type_t type )
{
  if ( !s_heatmap_active )
    return;

  /* count beacons (mgmt subtype 0x08). Some routers also send probe responses
     that are useful as channel-presence signals - treat all mgmt as a hit. */
  if ( type != WIFI_PKT_MGMT )
    return;

  uint8_t ch = s_heatmap_channel;
  if ( ch >= 1 && ch <= 13 )
    s_heatmap_hits[ ch ]++;
}


/* Channel hopper task. Sits on each channel for ~250 ms, then moves on.
   After each visit, blends the bucket into the smoothed counts using EMA so
   the GUI bars feel alive instead of refreshing only once per full sweep. */
static void heatmap_hopper_task( void* arg )
{
  (void)arg;

  uint8_t ch = 1;
  while ( s_heatmap_active )
  {
    s_heatmap_channel = ch;
    s_heatmap_hits[ ch ] = 0;

    esp_wifi_set_channel( ch, WIFI_SECOND_CHAN_NONE );

    /* dwell on this channel collecting beacons */
    vTaskDelay( pdMS_TO_TICKS( 250 ));

    /* fold the just-collected bucket into the smoothed value (EMA, alpha=0.4) */
    uint16_t fresh = s_heatmap_hits[ ch ];
    uint16_t old   = s_heatmap_smoothed[ ch ];
    s_heatmap_smoothed[ ch ] = (uint16_t)(( fresh * 4 + old * 6 ) / 10 );

    /* publish a fresh snapshot - readers can poll seq to know there's news */
    s_heatmap_seq++;

    ch++;
    if ( ch > 13 )
      ch = 1;
  }

  s_heatmap_task = NULL;
  vTaskDelete( NULL );
}


void wifi_heatmap_start( void )
{
  if ( !s_initialized || s_heatmap_active )
    return;

  /* abort competing modes */
  esp_wifi_scan_stop();
  s_scan_in_progress = false;
  s_has_scan_results = false;

  /* must be in STA mode for promiscuous capture */
  if ( s_current_mode != WIFI_MODE_STA )
    wifi_set_mode_station();

  /* ensure not associated - promiscuous + connected is unstable */
  esp_wifi_disconnect();

  memset( s_heatmap_hits, 0, sizeof( s_heatmap_hits ));
  memset( s_heatmap_smoothed, 0, sizeof( s_heatmap_smoothed ));
  s_heatmap_seq      = 0;
  s_heatmap_last_pop = 0;

  /* mgmt frames only - we just want beacons / probes */
  wifi_promiscuous_filter_t filter = { .filter_mask = WIFI_PROMIS_FILTER_MASK_MGMT };
  esp_wifi_set_promiscuous_filter( &filter );

  ESP_ERROR_CHECK( esp_wifi_set_promiscuous_rx_cb( &heatmap_rx_cb ));
  ESP_ERROR_CHECK( esp_wifi_set_promiscuous( true ));

  s_heatmap_active = true;
  xTaskCreate( heatmap_hopper_task, "wifi_hopper", 3072, NULL, 5, &s_heatmap_task );

  ESP_LOGI( TAG, "Channel heatmap started" );
}


void wifi_heatmap_stop( void )
{
  if ( !s_heatmap_active )
    return;

  s_heatmap_active = false;

  /* let the task notice the flag and exit */
  while ( s_heatmap_task != NULL )
    vTaskDelay( pdMS_TO_TICKS( 10 ));

  esp_wifi_set_promiscuous( false );

  ESP_LOGI( TAG, "Channel heatmap stopped" );
}


int wifi_heatmap_pop( wifi_heatmap_snapshot_t* out )
{
  if ( !out )
    return 0;

  uint32_t seq = s_heatmap_seq;
  if ( seq == s_heatmap_last_pop )
    return 0;

  out->seq             = seq;
  out->current_channel = s_heatmap_channel;
  for ( int i = 0; i < 14; i++ )
    out->counts[ i ] = s_heatmap_smoothed[ i ];

  s_heatmap_last_pop = seq;
  return 1;
}
