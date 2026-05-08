/*******************************************************************************
*
*   W I F I   D R I V E R
*
*   Thin, framework-agnostic Wi-Fi scan driver for the ESP32 family. Owns
*   NVS / netif / esp_event / esp_wifi initialization and the asynchronous
*   scan state machine, and translates ESP-IDF result records into the
*   portable wifi_ap_info_t struct so that callers do not need to include
*   any ESP-IDF headers.
*
*******************************************************************************/

#ifndef WIFI_H
#define WIFI_H


#include <stdint.h>


#ifdef __cplusplus
  extern "C"
  {
#endif


/* IEEE 802.11 maximum SSID length, in bytes. */
#define WIFI_SSID_MAX_LEN  32


/*******************************************************************************
* TYPE:
*   wifi_ap_info_t
*
* DESCRIPTION:
*   Portable description of a single discovered Wi-Fi access point. The
*   fields here are deliberately a strict subset of esp_wifi's
*   wifi_ap_record_t, without any ESP-IDF specific types.
*
* ELEMENTS:
*   ssid    - NUL-terminated SSID string (up to 32 bytes + NUL).
*   bssid   - 6-byte hardware MAC address of the AP radio.
*   rssi    - Received signal strength in dBm (typically -100..-20).
*   channel - Primary 802.11 channel number (1..13 in 2.4 GHz).
*
*******************************************************************************/
typedef struct
{
  char     ssid[ WIFI_SSID_MAX_LEN + 1 ];
  uint8_t  bssid[ 6 ];
  int8_t   rssi;
  uint8_t  channel;
  uint8_t  authmode;     /* WIFI_AUTH_OPEN..WIFI_AUTH_WPA3_*, see esp_wifi_types.h */
} wifi_ap_info_t;


/*******************************************************************************
* FUNCTION:
*   wifi_init
*
* DESCRIPTION:
*   Initializes NVS, the default event loop, the netif stack and esp_wifi
*   in station mode. Registers an internal event handler. Calling more than
*   once is a no-op.
*
*******************************************************************************/
void wifi_init( void );


/*******************************************************************************
* FUNCTION:
*   wifi_is_ready
*
* RETURN VALUE:
*   1 once the Wi-Fi station task has started (WIFI_EVENT_STA_START fired),
*   0 before that. wifi_start_scan() will fail until this returns 1.
*
*******************************************************************************/
int wifi_is_ready( void );


/*******************************************************************************
* FUNCTION:
*   wifi_start_scan
*
* DESCRIPTION:
*   Triggers a non-blocking active scan across all 2.4 GHz channels. Returns
*   immediately. The caller must poll wifi_has_scan_results() and, when it
*   returns true, retrieve the records via wifi_fetch_scan_results().
*
* RETURN VALUE:
*   1 if the scan was successfully started, 0 if rejected (radio not ready,
*   another scan already in progress, or the IDF call failed).
*
*******************************************************************************/
int wifi_start_scan( void );


/*******************************************************************************
* FUNCTION:
*   wifi_has_scan_results
*
* RETURN VALUE:
*   1 if a scan has completed and results are waiting to be fetched, else 0.
*   The flag is cleared by the next call to wifi_fetch_scan_results().
*
*******************************************************************************/
int wifi_has_scan_results( void );


/*******************************************************************************
* FUNCTION:
*   wifi_fetch_scan_results
*
* DESCRIPTION:
*   Reads pending scan results from the Wi-Fi driver into the caller's array
*   of wifi_ap_info_t records. Clears the "results pending" and "scan in
*   progress" flags whether the read succeeds or not, so the next scan can
*   be started.
*
* ARGUMENTS:
*   records   - Output array (size >= max_count). Must not be NULL.
*   max_count - Maximum number of records the caller can accept.
*
* RETURN VALUE:
*   The number of records actually written into records (0..max_count).
*
*******************************************************************************/
int wifi_fetch_scan_results( wifi_ap_info_t* records, int max_count );


/*******************************************************************************
* FUNCTION:
*   wifi_set_mode_station
*
* DESCRIPTION:
*   Switches the radio to station (STA) mode. Cancels any active soft-AP
*   advertisement and re-enables scanning. Calling this while already in
*   STA mode is a no-op.
*
*******************************************************************************/
void wifi_set_mode_station( void );


/*******************************************************************************
* FUNCTION:
*   wifi_set_mode_softap
*
* DESCRIPTION:
*   Switches the radio to Access-Point (AP) mode and brings up an open or
*   WPA2-PSK network with the given SSID and password. While in AP mode,
*   wifi_start_scan / wifi_fetch_scan_results return no results.
*
* ARGUMENTS:
*   ssid     - NUL-terminated SSID (1..32 bytes).
*   password - NUL-terminated WPA2 password (8..63 bytes), or NULL / empty
*              string for an open network.
*   channel  - 2.4 GHz channel number (1..13). Pass 0 to default to 6.
*
*******************************************************************************/
void wifi_set_mode_softap( const char* ssid, const char* password, int channel );


/*******************************************************************************
* FUNCTION:
*   wifi_get_ap_client_count
*
* DESCRIPTION:
*   Returns the number of stations currently associated with the soft-AP.
*   Always 0 when the radio is in STA mode.
*
*******************************************************************************/
int wifi_get_ap_client_count( void );


/* -------------------------------------------------------------------------- */
/* Station-mode connection (associate with a target AP)                       */
/* -------------------------------------------------------------------------- */

typedef enum
{
  WIFI_LINK_IDLE        = 0,
  WIFI_LINK_CONNECTING  = 1,
  WIFI_LINK_CONNECTED   = 2,
  WIFI_LINK_FAILED      = 3
} wifi_link_state_t;


typedef struct
{
  uint32_t  seq;             /* bumps each time the snapshot changes */
  int       state;           /* wifi_link_state_t */
  int8_t    rssi;            /* dBm; valid only in CONNECTED state */
  uint8_t   channel;
  uint8_t   bssid[ 6 ];
  char      ssid[ 33 ];
  uint32_t  ip;              /* big-endian; 0 until DHCP succeeds */
  uint32_t  gateway;
  uint32_t  netmask;
  uint16_t  fail_reason;     /* WIFI_REASON_* code from the IDF */
} wifi_link_info_t;


/*******************************************************************************
* FUNCTION:
*   wifi_connect_to
*
* DESCRIPTION:
*   Attempts to associate with the named AP. State transitions through
*   CONNECTING and arrives at CONNECTED once DHCP succeeds, or FAILED with
*   a reason code on auth/assoc/timeout. Polling state is exposed via
*   wifi_get_link_info().
*
*   Calling while in AP or HEATMAP mode aborts that mode first.
*
* ARGUMENTS:
*   ssid     - NUL-terminated SSID (1..32 bytes).
*   password - NUL-terminated WPA/WPA2 password, or NULL/"" for an open AP.
*
*******************************************************************************/
void wifi_connect_to( const char* ssid, const char* password );


/*******************************************************************************
* FUNCTION:
*   wifi_connect_disconnect
*
* DESCRIPTION:
*   Tears down the current STA association and returns to IDLE state.
*
*******************************************************************************/
void wifi_connect_disconnect( void );


/*******************************************************************************
* FUNCTION:
*   wifi_get_link_info
*
* DESCRIPTION:
*   Copies the current link snapshot into the caller's struct. Returns 1
*   if the snapshot has changed since the last call (so the caller can
*   skip work when nothing's new), 0 otherwise.
*
*******************************************************************************/
int wifi_get_link_info( wifi_link_info_t* out );


/* -------------------------------------------------------------------------- */
/* Channel heatmap (promiscuous-mode beacon counter, 1..13)                   */
/* -------------------------------------------------------------------------- */

typedef struct
{
  uint32_t  seq;
  uint16_t  counts[ 14 ];      /* indices 1..13 are valid; index 0 unused  */
  uint8_t   current_channel;   /* the channel the radio is sitting on now  */
} wifi_heatmap_snapshot_t;


/*******************************************************************************
* FUNCTION:
*   wifi_heatmap_start
*
* DESCRIPTION:
*   Begins promiscuous-mode beacon counting across channels 1..13. The
*   driver hops channels every ~250 ms and accumulates per-channel beacon
*   counts using an exponential moving average so the bars always look
*   alive.
*
*   Aborts any active scan / connect first.
*
*******************************************************************************/
void wifi_heatmap_start( void );


/*******************************************************************************
* FUNCTION:
*   wifi_heatmap_stop
*
* DESCRIPTION:
*   Stops the channel hopper and exits promiscuous mode. The radio returns
*   to STA mode.
*
*******************************************************************************/
void wifi_heatmap_stop( void );


/*******************************************************************************
* FUNCTION:
*   wifi_heatmap_pop
*
* DESCRIPTION:
*   Atomically copies the latest heatmap snapshot into out. Returns 1 if a
*   new snapshot has arrived since the last call, 0 otherwise.
*
*******************************************************************************/
int wifi_heatmap_pop( wifi_heatmap_snapshot_t* out );


#ifdef __cplusplus
  }
#endif

#endif /* WIFI_H */
