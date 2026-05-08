/*******************************************************************************
*
* Embedded Wizard - GUI Solutions by TARA Systems
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is provided as example code to demonstrate the use of Embedded
* Wizard and related software components. It may be used in production systems
* after you have reviewed, tested and adapted it to your specific requirements.
*
* Use of this example code is subject to the Embedded Wizard license terms
* (as published at https://www.embedded-wizard.de/legal), including in
* particular:
*
*   - Embedded Wizard Terms and Conditions (EWTC)
*   - Embedded Wizard License Agreement (EWLA)
*   - Embedded Wizard Community License (EWCL)
*
* The specific agreement(s) applicable to you depend on your contractual
* relationship with TARA Systems GmbH and/or your use of the Community License.
*
* Subject to your compliance with the applicable Embedded Wizard license terms
* and/or any separate written agreement with TARA Systems, you are granted a
* non-exclusive, worldwide, royalty-free license to use, copy, modify and
* integrate this example code into your own software products and projects.
* You may redistribute this code only as part of your products and not as a
* standalone library, framework or development tool.
*
* THE SOFTWARE IS PROVIDED "AS IS" AND "AS AVAILABLE", WITHOUT WARRANTY OF ANY
* KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT.
* TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, IN NO EVENT SHALL TARA
* SYSTEMS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
* ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
* WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
********************************************************************************
*
* DESCRIPTION:
*   This file is part of the interface (glue layer) between an Embedded Wizard
*   generated UI application and the board support package (BSP) of a dedicated
*   target.
*   This template provides access to some LEDs and buttons of the board.
*
*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

#include "driver/gpio.h"
#include "driver/ledc.h"
#include "driver/i2c.h"
#include "esp32s3/rom/gpio.h"
#include "esp_attr.h"
#include "esp_err.h"
#include "freertos/FreeRTOS.h"

#include "ewrte.h"

#include "ew_bsp_inout.h"

#define LEDC_TIMER            LEDC_TIMER_0
#define LEDC_MODE               LEDC_LOW_SPEED_MODE
#define LEDC_OUTPUT_IO          (GPIO_NUM_39) // Define the output GPIO
#define LEDC_CHANNEL            LEDC_CHANNEL_0
#define LEDC_DUTY_RES           LEDC_TIMER_13_BIT // Set duty resolution to 13 bits
#define LEDC_DUTY_OFF           (0) // Set duty to 50%. (2 ** 13) * 50% = 4096
#define LEDC_DUTY_ON            (4096) // Set duty to 50%. (2 ** 13) * 50% = 4096
#define LEDC_FREQUENCY          (4000) // Frequency in Hertz. Set frequency at 4 kHz

#define BUTTON_GPIO           0

static TButtonCallback        ButtonCallback = NULL;

#if 0  /* button ISR is disabled until EwBspInOutInitButton is wired up */
static void IRAM_ATTR gpio_isr_handler(void* arg)
{
  if ( ButtonCallback )
    ButtonCallback( !gpio_get_level( BUTTON_GPIO ));
}
#endif


/* -----------------------------------------------------------------------------
 * CH422G I/O expander - shared with the GT911 touch controller on I2C0.
 * The bus itself is brought up by EwBspDisplayInit (i2c_master_init), so
 * transactions here assume it is already initialized.
 *
 * Board-level bit assignments:
 *   OD_OUT bit 0 (DO0) -> generator START relay
 *   OD_OUT bit 1 (DO1) -> generator STOP  relay
 *   IO_OUT bit 1       -> touch panel RESET (high = released)
 *   IO_OUT bit 2       -> LCD backlight enable
 *   IO_OUT bit 3       -> LCD panel RESET   (high = released)
 *   IO_OUT bit 4       -> SD card CS        (high = deasserted)
 *   IO_IN  bit 0 (DI0) -> GeneratorBackup sense
 *   IO_IN  bit 5 (DI1) -> CityPower sense
 * --------------------------------------------------------------------------- */
#define CH422G_I2C_PORT         I2C_NUM_0
#define CH422G_I2C_TIMEOUT_MS   1000

#define CH422G_REG_MODE         0x24
#define CH422G_MODE_IO_OE       0x01

#define CH422G_REG_OD_OUT       0x23
#define CH422G_OD_DO0           0x01
#define CH422G_OD_DO1           0x02
#define CH422G_OD_BOTH_OFF      ( CH422G_OD_DO0 | CH422G_OD_DO1 )

#define CH422G_REG_IO_OUT       0x38
#define CH422G_IO_OUT_TOUCH_RST 0x02
#define CH422G_IO_OUT_BACKLIGHT 0x04
#define CH422G_IO_OUT_LCD_RST   0x08
#define CH422G_IO_OUT_SD_CS     0x10
#define CH422G_IO_OUT_RUN_BASE \
  ( CH422G_IO_OUT_TOUCH_RST | CH422G_IO_OUT_LCD_RST | CH422G_IO_OUT_SD_CS )

#define CH422G_REG_IO_IN        0x26
#define CH422G_IO_IN_DI0        0x01
#define CH422G_IO_IN_DI1        0x20


static esp_err_t Ch422gWrite( uint8_t aReg, uint8_t aValue )
{
  return i2c_master_write_to_device( CH422G_I2C_PORT, aReg, &aValue, 1,
    CH422G_I2C_TIMEOUT_MS / portTICK_PERIOD_MS );
}

static esp_err_t Ch422gRead( uint8_t aReg, uint8_t* aValue )
{
  return i2c_master_read_from_device( CH422G_I2C_PORT, aReg, aValue, 1,
    CH422G_I2C_TIMEOUT_MS / portTICK_PERIOD_MS );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutInitButton
*
* DESCRIPTION:
*   Configures one hardware button of the board used for demo applications.
*
* ARGUMENTS:
*   aButtonCallback - The button callback.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutInitButton( TButtonCallback aButtonCallback )
{
  //gpio_config_t io_conf;

  /* configure gpio to detect falling and rising edge */
  //io_conf.pull_down_en = 0;
  //io_conf.pull_up_en   = 1;
  //io_conf.intr_type    = GPIO_INTR_ANYEDGE;
  //io_conf.pin_bit_mask = (1UL << BUTTON_GPIO);
  //io_conf.mode         = GPIO_MODE_INPUT;
  //gpio_config( &io_conf );
  
  /* Start the gpio isr service */
  //gpio_install_isr_service(0);
  /* add to the gpio isr service */
  //gpio_isr_handler_add( BUTTON_GPIO, gpio_isr_handler, (void*)0 );

  /* store the callback function */
  //ButtonCallback = aButtonCallback;
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutInitLed
*
* DESCRIPTION:
*   Configures one LED of the board used for demo applications.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutInitLed( void )
{
  /* Prepare and then apply the LEDC PWM timer configuration */
  /*
  ledc_timer_config_t ledc_timer = {
      .speed_mode       = LEDC_MODE,
      .duty_resolution  = LEDC_DUTY_RES,
      .timer_num        = LEDC_TIMER,
      .freq_hz          = LEDC_FREQUENCY,  // Set output frequency at 4 kHz
      .clk_cfg          = LEDC_AUTO_CLK
  };
  ledc_timer_config(&ledc_timer);
  */

  /* Prepare and then apply the LEDC PWM channel configuration */
  /*
  ledc_channel_config_t ledc_channel = {
      .speed_mode     = LEDC_MODE,
      .channel        = LEDC_CHANNEL,
      .timer_sel      = LEDC_TIMER,
      .intr_type      = LEDC_INTR_DISABLE,
      .gpio_num       = LEDC_OUTPUT_IO,
      .duty           = 0, // Set duty to 0%
      .hpoint         = 0
  };
  ledc_channel_config(&ledc_channel);
  */
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutLedOn
*
* DESCRIPTION:
*   Switch LED on (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutLedOn( void )
{
  /* Set duty to 50% */
  //ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, LEDC_DUTY_ON);
  /* Update duty to apply the new value */
  //ledc_update_duty(LEDC_MODE, LEDC_CHANNEL);
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutLedOff
*
* DESCRIPTION:
*   Switch LED off (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutLedOff( void )
{
  //ledc_stop(LEDC_MODE, LEDC_CHANNEL, LEDC_DUTY_OFF);
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutSetGeneratorStartRelay
*
*******************************************************************************/
void EwBspInOutSetGeneratorStartRelay( int aActive )
{
  /* "off" releases BOTH relays - START and STOP must never be co-asserted */
  uint8_t pattern = aActive ? CH422G_OD_DO0 : CH422G_OD_BOTH_OFF;
  Ch422gWrite( CH422G_REG_OD_OUT, pattern );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutSetGeneratorStopRelay
*
*******************************************************************************/
void EwBspInOutSetGeneratorStopRelay( int aActive )
{
  uint8_t pattern = aActive ? CH422G_OD_DO1 : CH422G_OD_BOTH_OFF;
  Ch422gWrite( CH422G_REG_OD_OUT, pattern );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutSetBacklight
*
*******************************************************************************/
void EwBspInOutSetBacklight( int aOn )
{
  /* The CH422G needs to be put back into IO output-enable mode before any
     IO_OUT write - other parts of the BSP (touch / display) flip it back to
     input mode when they read DIs. */
  Ch422gWrite( CH422G_REG_MODE, CH422G_MODE_IO_OE );

  uint8_t pattern = CH422G_IO_OUT_RUN_BASE;
  if ( aOn )
    pattern |= CH422G_IO_OUT_BACKLIGHT;

  Ch422gWrite( CH422G_REG_IO_OUT, pattern );
}


/*******************************************************************************
* FUNCTION:
*   ReadCh422gInputs
*
* DESCRIPTION:
*   Single I2C read that returns the current state of all 8 IO_IN bits. The
*   CH422G has one global mode bit gating all 8 IO pins between output and
*   input mode, so we must briefly drop IO_OE to read the inputs - and then
*   re-assert IO_OE so the IO_OUT register keeps driving the output pins
*   (touch reset, backlight, LCD reset, SD CS). Without the trailing
*   re-assert, IO2 floats and the backlight FET stays on regardless of
*   what we wrote into IO_OUT.
*
*******************************************************************************/
static uint8_t ReadCh422gInputs( void )
{
  uint8_t value = 0;
  Ch422gWrite( CH422G_REG_MODE, 0x00 );
  Ch422gRead( CH422G_REG_IO_IN, &value );
  Ch422gWrite( CH422G_REG_MODE, CH422G_MODE_IO_OE );
  return value;
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutGetCityPowerState
*
*******************************************************************************/
int EwBspInOutGetCityPowerState( void )
{
  return ( ReadCh422gInputs() & CH422G_IO_IN_DI1 ) ? 1 : 0;
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutGetGeneratorBackupState
*
*******************************************************************************/
int EwBspInOutGetGeneratorBackupState( void )
{
  return ( ReadCh422gInputs() & CH422G_IO_IN_DI0 ) ? 1 : 0;
}

/* psh */
