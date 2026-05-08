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
*   This template is responsible to initialize the display hardware of the board
*   and to provide the necessary access to update the display content.
*   The color format of the framebuffer has to correspond to the color format
*   of the Graphics Engine.
*
*   Important: This file is intended to be used as a template. Please adapt the
*   implementation according your particular hardware.
*
*******************************************************************************/

#include "esp_system.h"
#include "esp_heap_caps.h"

/* flags to choose one of the provided display drivers */

#include <string.h>

#include "ewconfig.h"
#include "ewrte.h"
#include "ewgfx.h"
#include "ewextgfx.h"
#include "ewgfxdefs.h"

#include "ew_bsp_display.h"

#include <stdio.h>
#include "esp_log.h"
#include "esp_heap_caps.h"
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_rgb.h"

// static SemaphoreHandle_t ewDisplaySemaphore = NULL;

static esp_lcd_panel_handle_t panelHandle = NULL;

#if ((EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_Index8) || (EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_LumA44))
static unsigned short Clut[256];
#endif

#if EW_USE_DOUBLE_BUFFER == 1

#error EW_USE_DOUBLE_BUFFER is not necessary/supported because of separate transfer buffer for DMA/SPI

#endif

static uint8_t *ScratchPad = 0;
static uint8_t *TransferBuffer = 0;

#define I2C_MASTER_SCL_IO           9         // GPIO number used for I2C master clock
#define I2C_MASTER_SDA_IO           8         // GPIO number used for I2C master data
#define I2C_MASTER_NUM              0         // I2C master i2c port number, the number of i2c peripheral interfaces available will depend on the chip
#define I2C_MASTER_FREQ_HZ          400000    // I2C master clock frequency
#define I2C_MASTER_TX_BUF_DISABLE   0         // I2C master doesn't need buffer
#define I2C_MASTER_RX_BUF_DISABLE   0         // I2C master doesn't need buffer
#define I2C_MASTER_TIMEOUT_MS       1000      // I2C Timeout

#define CH422G_Mode                 0x24      // Control the mode
#define CH422G_Mode_IO_OE           0x01      // Output enabled
#define CH422G_Mode_A_SCAN          0x02      // Dynamic display automatic scanning enabled
#define CH422G_Mode_OD_EN           0x04      // The output pins OC3 ~ OC0 open drain output enable
#define CH422G_Mode_SLEEP           0x08      // Low power sleep control

#define CH422G_OD_OUT               0x23      // Control the OC pin output
#define CH422G_OD_OUT_0             0x01      // OC0 => DO0
#define CH422G_OD_OUT_1             0x02      // OC1 => DO1
#define CH422G_OD_OUT_2             0x04      // OC2
#define CH422G_OD_OUT_3             0x08      // OC3

#define CH422G_IO_OUT               0x38      // Control the IO pin output
#define CH422G_IO_OUT_0             0x01      // IO0 => DI0 use
#define CH422G_IO_OUT_1             0x02      // IO1 => Output ...
#define CH422G_IO_OUT_2             0x04      // IO2 => Output ...
#define CH422G_IO_OUT_3             0x08      // IO3 => Output ...
#define CH422G_IO_OUT_4             0x10      // IO4 => Output ...
#define CH422G_IO_OUT_5             0x20      // IO5 => DI1 use
#define CH422G_IO_OUT_6             0x40      // IO6
#define CH422G_IO_OUT_7             0x80      // IO7

#define CH422G_IO_IN                0x26      // Read the IO pin status
#define CH422G_IO_0                 0x01      // IO0 => Input ...
#define CH422G_IO_1                 0x02      // IO1 => Touch reset
#define CH422G_IO_2                 0x04      // IO2 => Backlight control
#define CH422G_IO_3                 0x08      // IO3 => LCD liquid crystal reset
#define CH422G_IO_4                 0x10      // IO4 => SD card CS pin
#define CH422G_IO_5                 0x20      // IO5 => Input ...
#define CH422G_IO_6                 0x40      // IO6
#define CH422G_IO_7                 0x80      // IO7

#define EXAMPLE_RGB_BOUNCE_BUFFER_SIZE  (480 * 10)
//#define EXAMPLE_RGB_BOUNCE_BUFFER_SIZE  0

// VSYNC event callback function
IRAM_ATTR static bool rgb_lcd_on_vsync_event(esp_lcd_panel_handle_t panel, const esp_lcd_rgb_panel_event_data_t *edata, void *user_ctx)
{
  // return lvgl_port_notify_rgb_vsync();
  return true;
}

/**
 * @brief I2C master initialization
 */
static esp_err_t i2c_master_init(void)
{
  int i2c_master_port = I2C_MASTER_NUM;

  i2c_config_t i2c_conf = {
      .mode = I2C_MODE_MASTER,
      .sda_io_num = I2C_MASTER_SDA_IO,
      .scl_io_num = I2C_MASTER_SCL_IO,
      .sda_pullup_en = GPIO_PULLUP_ENABLE,
      .scl_pullup_en = GPIO_PULLUP_ENABLE,
      .master.clk_speed = I2C_MASTER_FREQ_HZ,
  };

  // Configure I2C parameters
  i2c_param_config(i2c_master_port, &i2c_conf);

  // Install I2C driver
  return i2c_driver_install(i2c_master_port, i2c_conf.mode, 0, 0, 0);
}

// GPIO initialization
void gpio_init(void)
{
  // Zero-initialize the config structure
  gpio_config_t io_conf = {};
  // Disable interrupt
  io_conf.intr_type = GPIO_INTR_DISABLE;
  // Bit mask of the pins, use GPIO4 here
  io_conf.pin_bit_mask = 1ULL<<4;
  // Set as input mode
  io_conf.mode = GPIO_MODE_OUTPUT;

  gpio_config(&io_conf);
}

/*******************************************************************************
* FUNCTION:
*   EwBspDisplayInit
*
* DESCRIPTION:
*   The function EwBspDisplayInit initializes the display hardware and returns
*   the display parameter.
*
* ARGUMENTS:
*   aGuiWidth,
*   aGuiHeight   - Size of the GUI in pixel.
*   aDisplayInfo - Display info data structure.
*
* RETURN VALUE:
*   Returns 1 if successful, 0 otherwise.
*
*******************************************************************************/
int EwBspDisplayInit( int aGuiWidth, int aGuiHeight, XDisplayInfo* aDisplayInfo )
{
  // ewDisplaySemaphore = xSemaphoreCreateBinary();
  // xSemaphoreGive( ewDisplaySemaphore );

  EW_UNUSED_ARG(aGuiWidth);
  EW_UNUSED_ARG(aGuiHeight);

  /* check and clean display info structure */
  if (!aDisplayInfo)
    return 0;
  memset(aDisplayInfo, 0, sizeof(XDisplayInfo));

  /* ensure that transfer buffer is not lost */
  if (TransferBuffer)
    heap_caps_free(TransferBuffer);

  /* allocate a transfer buffer that can be accessed by DMA */
  TransferBuffer = (uint8_t *)heap_caps_malloc(EW_SCRATCHPAD_WIDTH * EW_SCRATCHPAD_HEIGHT * 2, MALLOC_CAP_8BIT | MALLOC_CAP_DMA);
  if (!TransferBuffer)
    EwPrint("EwBspDisplayInit: Failed to allocated transfer buffer!\n");

  ScratchPad = (uint8_t *)heap_caps_malloc(EW_SCRATCHPAD_WIDTH * EW_SCRATCHPAD_HEIGHT * 2, MALLOC_CAP_8BIT);
  if (!ScratchPad)
    EwPrint("EwBspDisplayInit: Failed to allocated scratch pad buffer!\n");

  esp_lcd_rgb_panel_config_t panel_config = {
      .clk_src = LCD_CLK_SRC_DEFAULT, // Set the clock source for the panel
      .timings = {
          .pclk_hz = (16 * 1000 * 1000), // Pixel clock frequency
          .h_res = EW_DISPLAY_WIDTH,            // Horizontal resolution
          .v_res = EW_DISPLAY_HEIGHT,            // Vertical resolution
          .hsync_pulse_width = 4,                // Horizontal sync pulse width
          .hsync_back_porch = 8,                 // Horizontal back porch
          .hsync_front_porch = 8,                // Horizontal front porch
          .vsync_pulse_width = 4,                // Vertical sync pulse width
          .vsync_back_porch = 8,                 // Vertical back porch
          .vsync_front_porch = 8,                // Vertical front porch
          .flags = {
              .pclk_active_neg = 1, // Active low pixel clock
          },
      },
      .data_width = 16,                         // Data width for RGB
      .bits_per_pixel = 16,                                     // Bits per pixel
      .num_fbs = 2,                                            // Number of frame buffers
      .bounce_buffer_size_px = EXAMPLE_RGB_BOUNCE_BUFFER_SIZE, // Bounce buffer size in pixels
      .sram_trans_align = 4,                                   // SRAM transaction alignment
      .psram_trans_align = 64,                                 // PSRAM transaction alignment
      .hsync_gpio_num = GPIO_NUM_46,              // GPIO number for horizontal sync
      .vsync_gpio_num = GPIO_NUM_3,              // GPIO number for vertical sync
      .de_gpio_num = GPIO_NUM_5,                    // GPIO number for data enable
      .pclk_gpio_num = GPIO_NUM_7,                // GPIO number for pixel clock
      .disp_gpio_num = -1,                // GPIO number for display
      .data_gpio_nums = {
        GPIO_NUM_14,
        GPIO_NUM_38,
        GPIO_NUM_18,
        GPIO_NUM_17,
        GPIO_NUM_10,
        GPIO_NUM_39,
        GPIO_NUM_0,
        GPIO_NUM_45,
        GPIO_NUM_48,
        GPIO_NUM_47,
        GPIO_NUM_21,
        GPIO_NUM_1,
        GPIO_NUM_2,
        GPIO_NUM_42,
        GPIO_NUM_41,
        GPIO_NUM_40
      },
      .flags = {
          .fb_in_psram = 1, // Use PSRAM for framebuffer
      },
  };

  // init of i2c
  i2c_master_init();

  // init of gpio
  gpio_init();

  // Create a new RGB panel with the specified configuration
  esp_lcd_new_rgb_panel(&panel_config, &panelHandle);
  esp_lcd_panel_init(panelHandle);

  // Register callbacks for RGB panel events
  esp_lcd_rgb_panel_event_callbacks_t cbs = {
#if EXAMPLE_RGB_BOUNCE_BUFFER_SIZE > 0
      .on_bounce_frame_finish = rgb_lcd_on_vsync_event,
#else
      .on_vsync = rgb_lcd_on_vsync_event,
#endif
  };
  esp_lcd_rgb_panel_register_event_callbacks(panelHandle, &cbs, NULL);

  /* return the current display configuration */
  aDisplayInfo->FrameBuffer = (void *)ScratchPad;
  aDisplayInfo->DoubleBuffer = (void *)0;
  aDisplayInfo->BufferWidth = EW_SCRATCHPAD_WIDTH;
  aDisplayInfo->BufferHeight = EW_SCRATCHPAD_HEIGHT;
  aDisplayInfo->DisplayWidth = EW_DISPLAY_WIDTH;
  aDisplayInfo->DisplayHeight = EW_DISPLAY_HEIGHT;
  aDisplayInfo->UpdateMode = EW_BSP_DISPLAY_UPDATE_SCRATCHPAD;

  /* set CH422G mode */
  uint8_t write_buf = CH422G_Mode_IO_OE;
  i2c_master_write_to_device(I2C_MASTER_NUM, CH422G_Mode, &write_buf, 1, I2C_MASTER_TIMEOUT_MS / portTICK_PERIOD_MS);

  /* turn on the LCD backlight */
  write_buf = 0b00011110;
  i2c_master_write_to_device(I2C_MASTER_NUM, CH422G_IO_OUT, &write_buf, 1, I2C_MASTER_TIMEOUT_MS / portTICK_PERIOD_MS);

  return 1;
}

/*******************************************************************************
* FUNCTION:
*   EwBspDisplayDone
*
* DESCRIPTION:
*   The function EwBspDisplayDone deinitializes the display hardware.
*
* ARGUMENTS:
*   aDisplayInfo - Display info data structure.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspDisplayDone( XDisplayInfo* aDisplayInfo )
{
  EW_UNUSED_ARG( aDisplayInfo );

  /* free memory of transfer buffer */
  if ( TransferBuffer )
    heap_caps_free( TransferBuffer );
  TransferBuffer = 0;

  /* free memory of scratch pad buffer */
  if ( ScratchPad )
    heap_caps_free( ScratchPad );
  ScratchPad = 0;
}


/*******************************************************************************
* FUNCTION:
*   EwBspDisplayGetUpdateArea
*
* DESCRIPTION:
*   The function EwBspDisplayGetUpdateArea returns the next update area
*   depending on the selected display mode:
*   In case of a synchroneous single-buffer, the function has to return the
*   the rectangular areas that correspond to the horizontal stripes (fields)
*   of the framebuffer.
*   In case of a scratch-pad buffer, the function has to return the subareas
*   that fit into the provided update rectangle.
*   During each display update, this function is called until it returns 0.
*
* ARGUMENTS:
*   aUpdateRect - Rectangular area which should be updated (redrawn).
*
* RETURN VALUE:
*   Returns 1 if a further update area can be provided, 0 otherwise.
*
*******************************************************************************/
int EwBspDisplayGetUpdateArea( XRect* aUpdateRect )
{
  static int h     = 0;
  static int dh    = 0;
  int        width = aUpdateRect->Point2.X - aUpdateRect->Point1.X;

  if ( width <= 0 )
    return 0;

  if ( dh == 0 )
  {
    h = aUpdateRect->Point2.Y - aUpdateRect->Point1.Y;

    /* determine the number of lines that fit into the scratch-pad */
    dh = EW_SCRATCHPAD_WIDTH * EW_SCRATCHPAD_HEIGHT /
         ( aUpdateRect->Point2.X - aUpdateRect->Point1.X );
  }
  else
    aUpdateRect->Point1.Y += dh;

  if ( dh > h )
    dh = h;

  aUpdateRect->Point2.Y = aUpdateRect->Point1.Y + dh;
  h -= dh;

  if ( dh > 0 )
    return 1;

  dh = 0;
  return 0;
}


/*******************************************************************************
* FUNCTION:
*   EwBspDisplayWaitForCompletion
*
* DESCRIPTION:
*   The function EwBspDisplayWaitForCompletion is called from the Graphics Engine
*   to ensure that all pending activities of the display system are completed, so
*   that the rendering of the next frame can start.
*   In case of a double-buffering system, the function has to wait until the
*   V-sync has occured and the pending buffer is used by the display controller.
*   In case of an external display controller, the function has to wait until
*   the transfer (update) of the graphics data has been completed and there are
*   no pending buffers.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspDisplayWaitForCompletion( void )
{
}

/*******************************************************************************
* FUNCTION:
*   EwBspDisplayCommitBuffer
*
* DESCRIPTION:
*   The function EwBspDisplayCommitBuffer is called from the Graphics Engine
*   when the rendering of a certain buffer has been completed.
*   The type of buffer depends on the selected framebuffer concept.
*   If the display is running in a double-buffering mode, the function is called
*   after each buffer update in order to change the currently active framebuffer
*   address. Changing the framebuffer address should be synchronized with V-sync.
*   If the system is using an external graphics controller, this function is
*   responsible to start the transfer of the framebuffer content.
*
* ARGUMENTS:
*   aAddress - Address of the framebuffer to be shown on the display.
*   aX,
*   aY       - Origin of the area which has been updated by the Graphics Engine.
*   aWidth,
*   aHeight  - Size of the area which has been updated by the Graphics Engine.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspDisplayCommitBuffer(void *aAddress, int aX, int aY, int aWidth, int aHeight)
{
  // if ( pdPASS != xSemaphoreTake( ewDisplaySemaphore, pdMS_TO_TICKS( 1000 )))
  //   return;

  if (!TransferBuffer)
    return;

/* update display content depending on source color format */
#if ((EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_Index8) || (EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_LumA44))
  {
    register int i;
    register uint16_t *dst = (uint16_t *)TransferBuffer;
    register uint8_t *src = (uint8_t *)aAddress;

    /* take index from scratch-pad and convert it via clut into color -
       colors are already stored byte swapped and suitable for the transfer buffer */
    for (i = aWidth * aHeight; i > 0; i--, dst++, src++)
      *dst = Clut[*src];
  }
#else
  /* RGB565: scratch-pad and transfer buffer share the same 16-bit pixel
     format, so this is a pure copy. memcpy is significantly faster than a
     hand-rolled halfword loop on Xtensa - newlib uses 32-bit / 128-bit
     wide moves and the compiler can't auto-vectorize the loop the same way. */
  memcpy( TransferBuffer, aAddress, (size_t)( aWidth * aHeight * 2 ));
#endif

  if (esp_lcd_panel_draw_bitmap(panelHandle, aX, aY, aX + aWidth, aY + aHeight, TransferBuffer) != ESP_OK)
    EwPrint("UpdateDisplay: Failed to draw transfer buffer!\n");
}

/*******************************************************************************
* FUNCTION:
*   EwBspDisplaySetClut
*
* DESCRIPTION:
*   The function EwBspDisplaySetClut is called from the Graphics Engine
*   in order to update the hardware CLUT of the current framebuffer.
*   The function is only called when the color format of the framebuffer is
*   Index8 or LumA44.
*
* ARGUMENTS:
*   aClut - Pointer to a color lookup table with 256 entries.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspDisplaySetClut( unsigned long* aClut )
{
#if (EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_Index8)

  /* create a color lookup table to update display with RGB565 color format */
  register int i;
  for (i = 0; i < 256; i++)
  {
    /* clut content is stored with byte swapped order */
    register unsigned long c = *aClut++;
    Clut[ i ] = (( c & 0x00F80000 ) >> 8 ) | (( c & 0x0000FC00 ) >> 5 ) | (( c & 0x000000F8 ) >> 3 );
  }

#elif (EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_LumA44)

  /* create a color lookup table to update display with RGB565 color format */
  register int i;
  for (i = 0; i < 256; i++)
  {
    /* clut content is stored with byte swapped order */
    register unsigned long l = (i & 0x0F) | ((i & 0x0F) << 4);
    Clut[ i ] = (( l & 0xF8 ) << 8 ) | (( l & 0xFC ) << 3 ) | (( l & 0xF8 ) >> 3 );
  }

#else

  EwPrint("EwBspDisplaySetClut: Could not load CLUT!\n");

#endif
}


/* msy, psh */
