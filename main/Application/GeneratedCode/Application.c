/*******************************************************************************
*
* Embedded Wizard - GUI Solutions by TARA Systems
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard tools based on the
* GUI project configuration and resources provided by you.
*
* Please do not modify this file! Any changes will be lost when it is generated
* again by the Embedded Wizard code generation process.
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy 'head.ewt' into your project directory
* and edit only that copy. Please avoid any modifications of the original
* template file.
*
* License, ownership and responsibility:
*
*   - The generated code is based on your project configuration and forms part
*     of your application. The application-specific content of this file
*     (including project-specific classes, resources and UI logic) is owned by
*     you or your licensors. You remain responsible for the overall design,
*     implementation, testing and validation of your application, including any
*     project-specific code and any changes or additions you make to the
*     generated code. TARA Systems GmbH is not responsible for defects or
*     malfunctions caused by such project-specific content or modifications.
*
*   - The use of Embedded Wizard Studio, the Embedded Wizard command line code
*     generator (ChoraC), the Embedded Wizard technology used to generate this
*     file and any Embedded Wizard Platform Packages and Runtime Components
*     required to build and run the generated code is subject to the Embedded
*     Wizard license terms (as published at https://www.embedded-wizard.de/legal),
*     including in particular:
*
*       - Embedded Wizard Terms and Conditions (EWTC)
*       - Embedded Wizard License Agreement (EWLA)
*       - Embedded Wizard Community License (EWCL)
*
*     The specific agreement(s) applicable to you and the applicable warranties
*     and limitations of liability are exclusively governed by these license
*     terms.
*
* Version  : 15.03
* Profile  : ESP32
* Platform : Espressif.ESP32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationApplication.h"
#include "_ApplicationBottomNote.h"
#include "_ApplicationDateTimePicker.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationEventsDialogue.h"
#include "_ApplicationHourMinutePicker.h"
#include "_ApplicationSettingsClass.h"
#include "_ApplicationSettingsDialogue.h"
#include "_ApplicationSettingsPage1.h"
#include "_ApplicationSettingsPage2.h"
#include "_ApplicationSettingsPage3.h"
#include "_ApplicationSettingsValueDisplay.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CorePropertyObserver.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTime.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsColorEffect.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsRectEffect.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetVerticalValueBar.h"
#include "_WidgetSetVerticalValueBarConfig.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Templates.h"
#include "Views.h"
#include "WidgetSet.h"

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault0[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074,
  0x006F, 0x0072, 0x000A, 0x0072, 0x0065, 0x006D, 0x006F, 0x0074, 0x0065, 0x0000,
  0xC557, 0x0053, 0x0054, 0x004F, 0x0050, 0x0000, 0xC557, 0x0053, 0x0054, 0x0041,
  0x0052, 0x0054, 0x0000, 0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061,
  0x0074, 0x006F, 0x0072, 0x0000, 0xC557, 0x0058, 0x0000, 0xC557, 0x0043, 0x0069,
  0x0074, 0x0079, 0x0020, 0x0070, 0x006F, 0x0077, 0x0065, 0x0072, 0x0000, 0xC557,
  0x0051, 0x0075, 0x0069, 0x0063, 0x006B, 0x000A, 0x0061, 0x0063, 0x0074, 0x0069,
  0x006F, 0x006E, 0x0073, 0x0000, 0xC557, 0x0045, 0x0056, 0x0045, 0x004E, 0x0054,
  0x0053, 0x0000, 0xC557, 0x0053, 0x0045, 0x0054, 0x0054, 0x0049, 0x004E, 0x0047,
  0x0053, 0x0000, 0xC557, 0x002E, 0x002E, 0x002E, 0x0000, 0xC557, 0x0031, 0x0033,
  0x003A, 0x0034, 0x0033, 0x003A, 0x0033, 0x0033, 0x0000, 0xC557, 0x0031, 0x0030,
  0x0030, 0x0025, 0x0025, 0x0000, 0xC557, 0x0025, 0x0025, 0x0000, 0xC557, 0x0053,
  0x0054, 0x0041, 0x0052, 0x0054, 0x0049, 0x004E, 0x0047, 0x0000, 0xC557, 0x0053,
  0x0054, 0x004F, 0x0050, 0x0050, 0x0049, 0x004E, 0x0047, 0x0000, 0xC557, 0x0043,
  0x0069, 0x0074, 0x0079, 0x0020, 0x0070, 0x006F, 0x0077, 0x0065, 0x0072, 0x0020,
  0x006F, 0x006E, 0x0000, 0xC557, 0x0043, 0x0069, 0x0074, 0x0079, 0x0020, 0x0070,
  0x006F, 0x0077, 0x0065, 0x0072, 0x0020, 0x006F, 0x0066, 0x0066, 0x0000, 0xC557,
  0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074, 0x006F, 0x0072, 0x0020,
  0x0062, 0x0061, 0x0063, 0x006B, 0x0075, 0x0070, 0x0020, 0x006F, 0x006E, 0x0000,
  0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074, 0x006F, 0x0072,
  0x0020, 0x0062, 0x0061, 0x0063, 0x006B, 0x0075, 0x0070, 0x0020, 0x006F, 0x0066,
  0x0066, 0x0000, 0xC557, 0x0042, 0x006C, 0x0061, 0x0063, 0x006B, 0x006F, 0x0075,
  0x0074, 0x0020, 0x0066, 0x006F, 0x0072, 0x0020, 0x0000, 0xC557, 0x0020, 0x0073,
  0x0065, 0x0063, 0x006F, 0x006E, 0x0064, 0x0000, 0xC557, 0x0073, 0x0000, 0xC557,
  0x0020, 0x006D, 0x0069, 0x006E, 0x0075, 0x0074, 0x0065, 0x0000, 0xC557, 0x0020,
  0x0068, 0x006F, 0x0075, 0x0072, 0x0000, 0xC557, 0x0030, 0x0000, 0xC557, 0x003A,
  0x0000, 0xC557, 0x0053, 0x0063, 0x0072, 0x0065, 0x0065, 0x006E, 0x0020, 0x0074,
  0x0075, 0x0072, 0x006E, 0x0073, 0x0020, 0x006F, 0x0066, 0x0020, 0x0069, 0x006E,
  0x0020, 0x0000, 0xC557, 0x0041, 0x0075, 0x0074, 0x006F, 0x006D, 0x0061, 0x0074,
  0x0069, 0x0063, 0x0020, 0x0073, 0x0074, 0x0061, 0x0072, 0x0074, 0x002F, 0x0073,
  0x0074, 0x006F, 0x0070, 0x0020, 0x0064, 0x0069, 0x0073, 0x0061, 0x0062, 0x006C,
  0x0065, 0x0064, 0x0000, 0xC557, 0x0044, 0x0061, 0x0079, 0x0020, 0x006D, 0x006F,
  0x0064, 0x0065, 0x0020, 0x0065, 0x006E, 0x0061, 0x0062, 0x006C, 0x0065, 0x0064,
  0x0000, 0xC557, 0x004E, 0x0069, 0x0067, 0x0068, 0x0074, 0x0020, 0x006D, 0x006F,
  0x0064, 0x0065, 0x0020, 0x0065, 0x006E, 0x0061, 0x0062, 0x006C, 0x0065, 0x0064,
  0x0000, 0xC557, 0x0047, 0x0061, 0x0073, 0x006F, 0x006C, 0x0069, 0x006E, 0x0065,
  0x0020, 0x0073, 0x0061, 0x0076, 0x0069, 0x006E, 0x0067, 0x0020, 0x006D, 0x006F,
  0x0064, 0x0065, 0x0020, 0x0065, 0x006E, 0x0061, 0x0062, 0x006C, 0x0065, 0x0064,
  0x0000, 0xC557, 0x0043, 0x0079, 0x0063, 0x006C, 0x0065, 0x0020, 0x0000, 0xC557,
  0x0020, 0x002D, 0x0020, 0x004F, 0x006E, 0x0020, 0x0066, 0x006F, 0x0072, 0x0020,
  0x0000, 0xC557, 0x0020, 0x002D, 0x0020, 0x004F, 0x0066, 0x0066, 0x0020, 0x0066,
  0x006F, 0x0072, 0x0020, 0x0000, 0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072,
  0x0061, 0x0074, 0x006F, 0x0072, 0x0020, 0x0073, 0x0074, 0x0061, 0x0072, 0x0074,
  0x0020, 0x0061, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070, 0x0074, 0x0020, 0x0069,
  0x006E, 0x0020, 0x0000, 0xC557, 0x0053, 0x0065, 0x0073, 0x0073, 0x0069, 0x006F,
  0x006E, 0x0020, 0x0000, 0xC557, 0x002F, 0x0000, 0xC557, 0x0020, 0x002D, 0x0020,
  0x0041, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070, 0x0074, 0x0020, 0x0000, 0xC557,
  0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074, 0x006F, 0x0072, 0x0020,
  0x0063, 0x006F, 0x0075, 0x006C, 0x0064, 0x0020, 0x006E, 0x006F, 0x0074, 0x0020,
  0x0062, 0x0065, 0x0020, 0x0073, 0x0074, 0x0061, 0x0072, 0x0074, 0x0065, 0x0064,
  0x0000, 0xC557, 0x0050, 0x006C, 0x0065, 0x0061, 0x0073, 0x0065, 0x0020, 0x0063,
  0x0068, 0x0065, 0x0063, 0x006B, 0x0020, 0x0066, 0x0075, 0x0065, 0x006C, 0x0020,
  0x006C, 0x0065, 0x0076, 0x0065, 0x006C, 0x0020, 0x0061, 0x006E, 0x0064, 0x0020,
  0x0062, 0x0061, 0x0074, 0x0074, 0x0065, 0x0072, 0x0079, 0x0000
};

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault1[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x0020, 0x0070, 0x0061, 0x0075, 0x0073, 0x0065, 0x0064,
  0x0000, 0xC557, 0x0057, 0x0061, 0x0069, 0x0074, 0x0069, 0x006E, 0x0067, 0x0020,
  0x0000, 0xC557, 0x0020, 0x0066, 0x006F, 0x0072, 0x0020, 0x0067, 0x0065, 0x006E,
  0x0065, 0x0072, 0x0061, 0x0074, 0x006F, 0x0072, 0x0000, 0xC557, 0x0045, 0x006E,
  0x0074, 0x0065, 0x0072, 0x0069, 0x006E, 0x0067, 0x0020, 0x0065, 0x0072, 0x0072,
  0x006F, 0x0072, 0x0020, 0x0073, 0x0074, 0x0061, 0x0074, 0x0065, 0x0020, 0x0069,
  0x0066, 0x0020, 0x0075, 0x006E, 0x0073, 0x0075, 0x0063, 0x0063, 0x0065, 0x0073,
  0x0073, 0x0066, 0x0075, 0x006C, 0x0000, 0xC557, 0x004C, 0x0061, 0x0073, 0x0074,
  0x0020, 0x0067, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074, 0x006F, 0x0072,
  0x0020, 0x0073, 0x0074, 0x0061, 0x0072, 0x0074, 0x0020, 0x0061, 0x0074, 0x0074,
  0x0065, 0x006D, 0x0070, 0x0000, 0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072,
  0x0061, 0x0074, 0x006F, 0x0072, 0x0020, 0x0073, 0x0074, 0x006F, 0x0070, 0x0020,
  0x0061, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070, 0x0074, 0x0020, 0x0069, 0x006E,
  0x0020, 0x0000, 0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074,
  0x006F, 0x0072, 0x0020, 0x0063, 0x006F, 0x0075, 0x006C, 0x0064, 0x0020, 0x006E,
  0x006F, 0x0074, 0x0020, 0x0062, 0x0065, 0x0020, 0x0073, 0x0074, 0x006F, 0x0070,
  0x0070, 0x0065, 0x0064, 0x0000, 0xC557, 0x0050, 0x006C, 0x0065, 0x0061, 0x0073,
  0x0065, 0x0020, 0x0063, 0x0068, 0x0065, 0x0063, 0x006B, 0x0020, 0x0072, 0x0065,
  0x006D, 0x006F, 0x0074, 0x0065, 0x0020, 0x0063, 0x006F, 0x006E, 0x0074, 0x0072,
  0x006F, 0x006C, 0x0000, 0xC557, 0x004C, 0x0061, 0x0073, 0x0074, 0x0020, 0x0067,
  0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074, 0x006F, 0x0072, 0x0020, 0x0073,
  0x0074, 0x006F, 0x0070, 0x0020, 0x0061, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070,
  0x0000, 0xC557, 0x0043, 0x004C, 0x004F, 0x0053, 0x0045, 0x0000, 0xC557, 0x0045,
  0x0076, 0x0065, 0x006E, 0x0074, 0x0073, 0x0020, 0x0031, 0x002F, 0x006E, 0x0000,
  0xC557, 0x0050, 0x0061, 0x0067, 0x0065, 0x004C, 0x0065, 0x0066, 0x0074, 0x0000,
  0xC557, 0x0050, 0x0061, 0x0067, 0x0065, 0x0052, 0x0069, 0x0067, 0x0068, 0x0074,
  0x0000, 0xC557, 0x0053, 0x0041, 0x0056, 0x0045, 0x0000, 0xC557, 0x0052, 0x0045,
  0x0053, 0x0045, 0x0054, 0x0000, 0xC557, 0x0053, 0x0065, 0x0074, 0x0074, 0x0069,
  0x006E, 0x0067, 0x0073, 0x0020, 0x0031, 0x002F, 0x0033, 0x0000, 0xC557, 0x0044,
  0x0045, 0x0046, 0x0041, 0x0055, 0x004C, 0x0054, 0x0020, 0x004C, 0x004F, 0x0041,
  0x0044, 0x0045, 0x0044, 0x0021, 0x0000, 0xC557, 0x0053, 0x0065, 0x0074, 0x0074,
  0x0069, 0x006E, 0x0067, 0x0073, 0x0020, 0x0033, 0x002F, 0x0033, 0x0000, 0xC557,
  0x0053, 0x0065, 0x0074, 0x0074, 0x0069, 0x006E, 0x0067, 0x0073, 0x0020, 0x0032,
  0x002F, 0x0033, 0x0000, 0xC557, 0x0053, 0x0045, 0x0054, 0x0054, 0x0049, 0x004E,
  0x0047, 0x0053, 0x0020, 0x0053, 0x0041, 0x0056, 0x0045, 0x0044, 0x0021, 0x0000,
  0xC557, 0x0041, 0x0075, 0x0074, 0x006F, 0x006D, 0x0061, 0x0074, 0x0065, 0x0064,
  0x0020, 0x0073, 0x0074, 0x0061, 0x0072, 0x0074, 0x002F, 0x0073, 0x0074, 0x006F,
  0x0070, 0x0000, 0xC557, 0x0044, 0x0061, 0x0074, 0x0065, 0x0020, 0x0061, 0x006E,
  0x0064, 0x0020, 0x0074, 0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x0053, 0x0045,
  0x0054, 0x0000, 0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074,
  0x006F, 0x0072, 0x0020, 0x0072, 0x0065, 0x006D, 0x006F, 0x0074, 0x0065, 0x0020,
  0x0063, 0x006F, 0x006E, 0x0074, 0x0072, 0x006F, 0x006C, 0x0020, 0x0062, 0x0075,
  0x0074, 0x0074, 0x006F, 0x006E, 0x0020, 0x0061, 0x0063, 0x0074, 0x0069, 0x0076,
  0x0065, 0x0020, 0x0074, 0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x0054, 0x0069,
  0x006D, 0x0065, 0x0020, 0x0075, 0x006E, 0x0074, 0x0069, 0x006C, 0x0020, 0x0073,
  0x0063, 0x0072, 0x0065, 0x0065, 0x006E, 0x0020, 0x0070, 0x0061, 0x006E, 0x0065,
  0x006C, 0x0020, 0x0074, 0x0075, 0x0072, 0x006E, 0x0073, 0x0020, 0x006F, 0x0066,
  0x0066, 0x0000, 0xC557, 0x004E, 0x0075, 0x006D, 0x0062, 0x0065, 0x0072, 0x0020,
  0x006F, 0x0066, 0x0020, 0x0072, 0x0065, 0x006D, 0x006F, 0x0074, 0x0065, 0x0020,
  0x0061, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070, 0x0074, 0x0020, 0x0073, 0x0065,
  0x0073, 0x0073, 0x0069, 0x006F, 0x006E, 0x0073, 0x0000, 0xC557, 0x0054, 0x0069,
  0x006D, 0x0065, 0x0020, 0x0069, 0x006E, 0x0074, 0x0065, 0x0072, 0x0076, 0x0061,
  0x006C, 0x0020, 0x0062, 0x0065, 0x0074, 0x0077, 0x0065, 0x0065, 0x006E, 0x0020,
  0x0072, 0x0065, 0x006D, 0x006F, 0x0074, 0x0065, 0x0020, 0x0061, 0x0074, 0x0074,
  0x0065, 0x006D, 0x0070, 0x0074, 0x0020, 0x0073, 0x0065, 0x0073, 0x0073, 0x0069,
  0x006F, 0x006E, 0x0073, 0x0000
};

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault2[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x004E, 0x0075, 0x006D, 0x0062, 0x0065, 0x0072, 0x0020,
  0x006F, 0x0066, 0x0020, 0x0072, 0x0065, 0x006D, 0x006F, 0x0074, 0x0065, 0x0020,
  0x0061, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070, 0x0073, 0x0020, 0x0070, 0x0065,
  0x0072, 0x0020, 0x0073, 0x0065, 0x0073, 0x0073, 0x0069, 0x006F, 0x006E, 0x0000,
  0xC557, 0x0054, 0x0069, 0x006D, 0x0065, 0x0020, 0x0069, 0x006E, 0x0074, 0x0065,
  0x0072, 0x0076, 0x0061, 0x006C, 0x0020, 0x0062, 0x0065, 0x0074, 0x0077, 0x0065,
  0x0065, 0x006E, 0x0020, 0x0072, 0x0065, 0x006D, 0x006F, 0x0074, 0x0065, 0x0020,
  0x0061, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070, 0x0074, 0x0073, 0x0000, 0xC557,
  0x0054, 0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x0020, 0x0073, 0x0065, 0x0063,
  0x0000, 0xC557, 0x0020, 0x006D, 0x0069, 0x006E, 0x0000, 0xC557, 0x002E, 0x0000,
  0xC557, 0x0020, 0x0000, 0xC557, 0x0044, 0x0061, 0x0079, 0x0020, 0x006D, 0x006F,
  0x0064, 0x0065, 0x0020, 0x0073, 0x0074, 0x0061, 0x0072, 0x0074, 0x0020, 0x0074,
  0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x0044, 0x0061, 0x0079, 0x0020, 0x006D,
  0x006F, 0x0064, 0x0065, 0x0020, 0x0073, 0x0074, 0x006F, 0x0070, 0x0020, 0x0074,
  0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x004E, 0x0069, 0x0067, 0x0068, 0x0074,
  0x0020, 0x0064, 0x0065, 0x006C, 0x0061, 0x0079, 0x0020, 0x0075, 0x006E, 0x0074,
  0x0069, 0x006C, 0x0020, 0x0067, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074,
  0x006F, 0x0072, 0x0020, 0x0074, 0x0075, 0x0072, 0x006E, 0x0073, 0x0020, 0x006F,
  0x006E, 0x0020, 0x0000, 0xC557, 0x004E, 0x0069, 0x0067, 0x0068, 0x0074, 0x0020,
  0x0064, 0x0065, 0x006C, 0x0061, 0x0079, 0x0020, 0x0075, 0x006E, 0x0074, 0x0069,
  0x006C, 0x0020, 0x0067, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074, 0x006F,
  0x0072, 0x0020, 0x0074, 0x0075, 0x0072, 0x006E, 0x0073, 0x0020, 0x006F, 0x0066,
  0x0066, 0x0000, 0xC557, 0x0044, 0x0061, 0x0079, 0x0020, 0x0064, 0x0065, 0x006C,
  0x0061, 0x0079, 0x0020, 0x0075, 0x006E, 0x0074, 0x0069, 0x006C, 0x0020, 0x0067,
  0x0065, 0x006E, 0x0065, 0x0072, 0x0061, 0x0074, 0x006F, 0x0072, 0x0020, 0x0074,
  0x0075, 0x0072, 0x006E, 0x0073, 0x0020, 0x006F, 0x006E, 0x0000, 0xC557, 0x0044,
  0x0061, 0x0079, 0x0020, 0x0064, 0x0065, 0x006C, 0x0061, 0x0079, 0x0020, 0x0075,
  0x006E, 0x0074, 0x0069, 0x006C, 0x0020, 0x0067, 0x0065, 0x006E, 0x0065, 0x0072,
  0x0061, 0x0074, 0x006F, 0x0072, 0x0020, 0x0074, 0x0075, 0x0072, 0x006E, 0x0073,
  0x0020, 0x006F, 0x0066, 0x0066, 0x0000, 0xC557, 0x0047, 0x0061, 0x0073, 0x006F,
  0x006C, 0x0069, 0x006E, 0x0065, 0x0020, 0x0073, 0x0061, 0x0076, 0x0069, 0x006E,
  0x0067, 0x0020, 0x006D, 0x006F, 0x0064, 0x0065, 0x0000, 0xC557, 0x0047, 0x0061,
  0x0073, 0x006F, 0x006C, 0x0069, 0x006E, 0x0065, 0x0020, 0x0073, 0x0061, 0x0076,
  0x0069, 0x006E, 0x0067, 0x0020, 0x006D, 0x006F, 0x0064, 0x0065, 0x0020, 0x006F,
  0x006E, 0x0020, 0x0069, 0x006E, 0x0074, 0x0065, 0x0072, 0x0076, 0x0061, 0x006C,
  0x0020, 0x0074, 0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x0047, 0x0061, 0x0073,
  0x006F, 0x006C, 0x0069, 0x006E, 0x0065, 0x0020, 0x0073, 0x0061, 0x0076, 0x0069,
  0x006E, 0x0067, 0x0020, 0x006D, 0x006F, 0x0064, 0x0065, 0x0020, 0x006F, 0x0066,
  0x0066, 0x0020, 0x0069, 0x006E, 0x0074, 0x0065, 0x0072, 0x0076, 0x0061, 0x006C,
  0x0020, 0x0074, 0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x004E, 0x006F, 0x006D,
  0x0069, 0x006E, 0x0061, 0x006C, 0x0020, 0x0066, 0x0075, 0x0065, 0x006C, 0x0020,
  0x006C, 0x0065, 0x0076, 0x0065, 0x006C, 0x0020, 0x0028, 0x0072, 0x0075, 0x006E,
  0x0074, 0x0069, 0x006D, 0x0065, 0x0020, 0x0069, 0x006E, 0x0020, 0x0073, 0x0065,
  0x0063, 0x006F, 0x006E, 0x0064, 0x0073, 0x0029, 0x0000, 0xC557, 0x0043, 0x0075,
  0x0072, 0x0072, 0x0065, 0x006E, 0x0074, 0x0020, 0x0066, 0x0075, 0x0065, 0x006C,
  0x0020, 0x006C, 0x0065, 0x0076, 0x0065, 0x006C, 0x0020, 0x0028, 0x0072, 0x0075,
  0x006E, 0x0074, 0x0069, 0x006D, 0x0065, 0x0020, 0x0069, 0x006E, 0x0020, 0x0073,
  0x0065, 0x0063, 0x006F, 0x006E, 0x0064, 0x0073, 0x0029, 0x0000, 0xC557, 0x0041,
  0x0042, 0x0043, 0x0000, 0xC557, 0x0047, 0x0065, 0x006E, 0x0065, 0x0072, 0x0061,
  0x0074, 0x006F, 0x0072, 0x0020, 0x0073, 0x0074, 0x0061, 0x0072, 0x0074, 0x0020,
  0x0061, 0x0074, 0x0074, 0x0065, 0x006D, 0x0070, 0x0020, 0x0069, 0x006E, 0x0020,
  0x0031, 0x0032, 0x0030, 0x0020, 0x0073, 0x0065, 0x0063, 0x006F, 0x006E, 0x0064,
  0x0073, 0x0000
};

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault3[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x0053, 0x0065, 0x0073, 0x0073, 0x0069, 0x006F, 0x006E,
  0x0020, 0x0031, 0x002F, 0x0034, 0x0020, 0x002D, 0x0020, 0x0041, 0x0074, 0x0074,
  0x0065, 0x006D, 0x0070, 0x0074, 0x0020, 0x0031, 0x002F, 0x0035, 0x0000, 0xC557,
  0x0046, 0x0069, 0x0072, 0x0073, 0x0074, 0x0020, 0x006C, 0x0069, 0x006E, 0x0065,
  0x0000, 0xC557, 0x0044, 0x0045, 0x0056, 0x0049, 0x0043, 0x0045, 0x0020, 0x0054,
  0x004F, 0x0044, 0x004F, 0x003A, 0x0020, 0x0055, 0x0070, 0x0064, 0x0061, 0x0074,
  0x0065, 0x0042, 0x0061, 0x0074, 0x0074, 0x0065, 0x0072, 0x0079, 0x0000, 0xC557,
  0x0044, 0x0045, 0x0056, 0x0049, 0x0043, 0x0045, 0x0020, 0x0054, 0x004F, 0x0044,
  0x004F, 0x003A, 0x0020, 0x004F, 0x006E, 0x0053, 0x0065, 0x0074, 0x0052, 0x0074,
  0x0063, 0x0054, 0x0069, 0x006D, 0x0065, 0x0000, 0xC557, 0x0053, 0x0045, 0x0054,
  0x0020, 0x0054, 0x0049, 0x004D, 0x0045, 0x0000, 0xC557, 0x0054, 0x0065, 0x0078,
  0x0074, 0x0000, 0xC557, 0x0030, 0x0032, 0x0000, 0xC557, 0x0030, 0x0033, 0x0000,
  0xC557, 0x0030, 0x0034, 0x0000, 0xC557, 0x0030, 0x0035, 0x0000, 0xC557, 0x0030,
  0x0036, 0x0000, 0xC557, 0x0030, 0x0037, 0x0000, 0xC557, 0x0030, 0x0038, 0x0000,
  0xC557, 0x0030, 0x0039, 0x0000, 0xC557, 0x0031, 0x0030, 0x0000, 0xC557, 0x0031,
  0x0031, 0x0000, 0xC557, 0x0031, 0x0032, 0x0000, 0xC557, 0x0030, 0x0031, 0x0000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 800, 480 }};
static const XColor _Const0001 = { 0x00, 0x00, 0x00, 0xFF };
static const XPoint _Const0002 = { 0, 0 };
static const XPoint _Const0003 = { 800, 0 };
static const XPoint _Const0004 = { 802, 480 };
static const XPoint _Const0005 = { 0, 480 };
static const XColor _Const0006 = { 0xFF, 0x32, 0x36, 0xFF };
static const XColor _Const0007 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0008 = {{ 353, 49 }, { 448, 132 }};
static const XRect _Const0009 = {{ 630, 271 }, { 800, 480 }};
static const XColor _Const000A = { 0xC9, 0xC9, 0xC9, 0xFF };
static const XRect _Const000B = {{ 645, 277 }, { 785, 347 }};
static const XStringRes _Const000C = { _StringsDefault0, 0x0003 };
static const XRect _Const000D = {{ 645, 416 }, { 785, 466 }};
static const XStringRes _Const000E = { _StringsDefault0, 0x0015 };
static const XRect _Const000F = {{ 645, 355 }, { 785, 405 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x001B };
static const XRect _Const0011 = {{ 448, 109 }, { 614, 148 }};
static const XStringRes _Const0012 = { _StringsDefault0, 0x0022 };
static const XPoint _Const0013 = { 629, 155 };
static const XPoint _Const0014 = { 424, 155 };
static const XColor _Const0015 = { 0xE3, 0xE3, 0xE3, 0xFF };
static const XPoint _Const0016 = { 429, 245 };
static const XPoint _Const0017 = { 429, 154 };
static const XRect _Const0018 = {{ 614, 86 }, { 742, 214 }};
static const XRect _Const0019 = {{ 554, 170 }, { 604, 220 }};
static const XRect _Const001A = {{ 755, 405 }, { 803, 453 }};
static const XRect _Const001B = {{ 745, 114 }, { 795, 198 }};
static const XRect _Const001C = {{ 754, 80 }, { 786, 112 }};
static const XRect _Const001D = {{ 746, 197 }, { 794, 245 }};
static const XRect _Const001E = {{ 634, 214 }, { 682, 262 }};
static const XRect _Const001F = {{ 686, 218 }, { 727, 259 }};
static const XColor _Const0020 = { 0x00, 0x86, 0xFF, 0xFF };
static const XRect _Const0021 = {{ 686, 217 }, { 726, 257 }};
static const XStringRes _Const0022 = { _StringsDefault0, 0x002D };
static const XRect _Const0023 = {{ 186, 108 }, { 353, 147 }};
static const XStringRes _Const0024 = { _StringsDefault0, 0x0030 };
static const XPoint _Const0025 = { 376, 155 };
static const XPoint _Const0026 = { 178, 155 };
static const XPoint _Const0027 = { 371, 245 };
static const XPoint _Const0028 = { 371, 154 };
static const XRect _Const0029 = {{ 69, 92 }, { 186, 209 }};
static const XRect _Const002A = {{ 191, 170 }, { 241, 220 }};
static const XRect _Const002B = {{ 0, 271 }, { 170, 480 }};
static const XRect _Const002C = {{ 15, 277 }, { 154, 347 }};
static const XStringRes _Const002D = { _StringsDefault0, 0x003C };
static const XRect _Const002E = {{ 15, 355 }, { 155, 405 }};
static const XStringRes _Const002F = { _StringsDefault0, 0x004B };
static const XRect _Const0030 = {{ 15, 416 }, { 155, 466 }};
static const XStringRes _Const0031 = { _StringsDefault0, 0x0053 };
static const XRect _Const0032 = {{ 253, 187 }, { 548, 402 }};
static const XRect _Const0033 = {{ 272, 166 }, { 528, 422 }};
static const XRect _Const0034 = {{ 244, 174 }, { 340, 270 }};
static const XRect _Const0035 = {{ 0, 35 }, { 325, 75 }};
static const XStringRes _Const0036 = { _StringsDefault0, 0x005D };
static const XRect _Const0037 = {{ 475, 35 }, { 800, 75 }};
static const XRect _Const0038 = {{ 190, 444 }, { 610, 504 }};
static const XRect _Const0039 = {{ 190, 420 }, { 610, 480 }};
static const XRect _Const003A = {{ 190, 480 }, { 610, 540 }};
static const XRect _Const003B = {{ 0, 0 }, { 800, 35 }};
static const XRect _Const003C = {{ 1, 0 }, { 121, 35 }};
static const XStringRes _Const003D = { _StringsDefault0, 0x0062 };
static const XRect _Const003E = {{ 702, 0 }, { 772, 35 }};
static const XStringRes _Const003F = { _StringsDefault0, 0x006C };
static const XRect _Const0040 = {{ 156, 1 }, { 645, 36 }};
static const XRect _Const0041 = {{ 772, 5 }, { 796, 29 }};
static const XRect _Const0042 = {{ 115, 6 }, { 139, 30 }};
static const XPoint _Const0043 = { 613, 86 };
static const XPoint _Const0044 = { 742, 86 };
static const XPoint _Const0045 = { 742, 214 };
static const XPoint _Const0046 = { 613, 214 };
static const XPoint _Const0047 = { 62, 86 };
static const XPoint _Const0048 = { 191, 86 };
static const XPoint _Const0049 = { 191, 214 };
static const XPoint _Const004A = { 62, 214 };
static const XStringRes _Const004B = { _StringsDefault0, 0x0073 };
static const XStringRes _Const004C = { _StringsDefault0, 0x0077 };
static const XStringRes _Const004D = { _StringsDefault0, 0x0081 };
static const XRect _Const004E = {{ 0, -15 }, { 325, 25 }};
static const XRect _Const004F = {{ 475, -15 }, { 800, 25 }};
static const XStringRes _Const0050 = { _StringsDefault0, 0x008B };
static const XStringRes _Const0051 = { _StringsDefault0, 0x009A };
static const XStringRes _Const0052 = { _StringsDefault0, 0x00AA };
static const XStringRes _Const0053 = { _StringsDefault0, 0x00BF };
static const XStringRes _Const0054 = { _StringsDefault0, 0x00D5 };
static const XStringRes _Const0055 = { _StringsDefault0, 0x00E4 };
static const XStringRes _Const0056 = { _StringsDefault0, 0x00ED };
static const XStringRes _Const0057 = { _StringsDefault0, 0x00F0 };
static const XStringRes _Const0058 = { _StringsDefault0, 0x00F9 };
static const XStringRes _Const0059 = { _StringsDefault0, 0x0100 };
static const XStringRes _Const005A = { _StringsDefault0, 0x0103 };
static const XStringRes _Const005B = { _StringsDefault0, 0x0106 };
static const XStringRes _Const005C = { _StringsDefault0, 0x011B };
static const XStringRes _Const005D = { _StringsDefault0, 0x013A };
static const XStringRes _Const005E = { _StringsDefault0, 0x014C };
static const XStringRes _Const005F = { _StringsDefault0, 0x0160 };
static const XStringRes _Const0060 = { _StringsDefault0, 0x017E };
static const XStringRes _Const0061 = { _StringsDefault0, 0x0186 };
static const XStringRes _Const0062 = { _StringsDefault0, 0x0192 };
static const XStringRes _Const0063 = { _StringsDefault0, 0x019F };
static const XStringRes _Const0064 = { _StringsDefault0, 0x01BC };
static const XStringRes _Const0065 = { _StringsDefault0, 0x01C6 };
static const XStringRes _Const0066 = { _StringsDefault0, 0x01C9 };
static const XRect _Const0067 = {{ 755, 344 }, { 803, 392 }};
static const XStringRes _Const0068 = { _StringsDefault0, 0x01D6 };
static const XStringRes _Const0069 = { _StringsDefault0, 0x01F6 };
static const XStringRes _Const006A = { _StringsDefault1, 0x0003 };
static const XStringRes _Const006B = { _StringsDefault1, 0x000C };
static const XStringRes _Const006C = { _StringsDefault1, 0x0016 };
static const XStringRes _Const006D = { _StringsDefault1, 0x0026 };
static const XStringRes _Const006E = { _StringsDefault1, 0x004C };
static const XStringRes _Const006F = { _StringsDefault1, 0x0069 };
static const XStringRes _Const0070 = { _StringsDefault1, 0x0085 };
static const XStringRes _Const0071 = { _StringsDefault1, 0x00A5 };
static const XStringRes _Const0072 = { _StringsDefault1, 0x00C2 };
static const XRect _Const0073 = {{ 0, 0 }, { 802, 480 }};
static const XRect _Const0074 = {{ 25, 401 }, { 775, 480 }};
static const XRect _Const0075 = {{ 50, 413 }, { 751, 470 }};
static const XStringRes _Const0076 = { _StringsDefault1, 0x00DE };
static const XRect _Const0077 = {{ 251, 0 }, { 556, 51 }};
static const XColor _Const0078 = { 0xB9, 0xB9, 0xB9, 0xFF };
static const XRect _Const0079 = {{ 315, 5 }, { 492, 49 }};
static const XStringRes _Const007A = { _StringsDefault1, 0x00E5 };
static const XRect _Const007B = {{ 700, 8 }, { 775, 58 }};
static const XRect _Const007C = {{ 25, 7 }, { 100, 59 }};
static const XStringRes _Const007D = { _StringsDefault1, 0x00F1 };
static const XStringRes _Const007E = { _StringsDefault1, 0x00FB };
static const XRect _Const007F = {{ 50, 413 }, { 270, 470 }};
static const XRect _Const0080 = {{ 290, 413 }, { 510, 470 }};
static const XStringRes _Const0081 = { _StringsDefault1, 0x0106 };
static const XRect _Const0082 = {{ 531, 413 }, { 751, 470 }};
static const XStringRes _Const0083 = { _StringsDefault1, 0x010C };
static const XStringRes _Const0084 = { _StringsDefault1, 0x0113 };
static const XStringRes _Const0085 = { _StringsDefault1, 0x0121 };
static const XStringRes _Const0086 = { _StringsDefault1, 0x0132 };
static const XStringRes _Const0087 = { _StringsDefault1, 0x0140 };
static const XStringRes _Const0088 = { _StringsDefault1, 0x014E };
static const XRect _Const0089 = {{ 0, 0 }, { 800, 337 }};
static const XRect _Const008A = {{ 26, 9 }, { 296, 59 }};
static const XStringRes _Const008B = { _StringsDefault1, 0x015F };
static const XRect _Const008C = {{ 317, 19 }, { 449, 48 }};
static const XStringRes _Const008D = { _StringsDefault1, 0x0175 };
static const XColor _Const008E = { 0x6B, 0x6D, 0x73, 0xFF };
static const XRect _Const008F = {{ 456, 18 }, { 676, 51 }};
static const XRect _Const0090 = {{ 687, 14 }, { 775, 53 }};
static const XStringRes _Const0091 = { _StringsDefault1, 0x0184 };
static const XRect _Const0092 = {{ 25, 64 }, { 475, 93 }};
static const XStringRes _Const0093 = { _StringsDefault1, 0x0189 };
static const XRect _Const0094 = {{ 479, 62 }, { 564, 95 }};
static const XRect _Const0095 = {{ 571, 59 }, { 775, 98 }};
static const XRect _Const0096 = {{ 25, 109 }, { 475, 138 }};
static const XStringRes _Const0097 = { _StringsDefault1, 0x01B6 };
static const XRect _Const0098 = {{ 479, 107 }, { 564, 140 }};
static const XRect _Const0099 = {{ 571, 104 }, { 775, 143 }};
static const XRect _Const009A = {{ 25, 155 }, { 475, 184 }};
static const XStringRes _Const009B = { _StringsDefault1, 0x01D9 };
static const XRect _Const009C = {{ 479, 153 }, { 564, 186 }};
static const XRect _Const009D = {{ 571, 150 }, { 775, 189 }};
static const XRect _Const009E = {{ 25, 200 }, { 475, 229 }};
static const XStringRes _Const009F = { _StringsDefault1, 0x01FC };
static const XRect _Const00A0 = {{ 479, 198 }, { 564, 231 }};
static const XRect _Const00A1 = {{ 571, 195 }, { 775, 234 }};
static const XRect _Const00A2 = {{ 25, 245 }, { 475, 274 }};
static const XStringRes _Const00A3 = { _StringsDefault2, 0x0003 };
static const XRect _Const00A4 = {{ 479, 243 }, { 564, 276 }};
static const XRect _Const00A5 = {{ 571, 240 }, { 775, 279 }};
static const XRect _Const00A6 = {{ 25, 291 }, { 475, 320 }};
static const XStringRes _Const00A7 = { _StringsDefault2, 0x0029 };
static const XRect _Const00A8 = {{ 479, 289 }, { 564, 322 }};
static const XRect _Const00A9 = {{ 571, 283 }, { 775, 322 }};
static const XStringRes _Const00AA = { _StringsDefault2, 0x0050 };
static const XStringRes _Const00AB = { _StringsDefault2, 0x0056 };
static const XStringRes _Const00AC = { _StringsDefault2, 0x005C };
static const XStringRes _Const00AD = { _StringsDefault2, 0x0062 };
static const XStringRes _Const00AE = { _StringsDefault2, 0x0065 };
static const XRect _Const00AF = {{ 25, 19 }, { 475, 48 }};
static const XStringRes _Const00B0 = { _StringsDefault2, 0x0068 };
static const XRect _Const00B1 = {{ 479, 17 }, { 560, 50 }};
static const XRect _Const00B2 = {{ 571, 14 }, { 775, 53 }};
static const XStringRes _Const00B3 = { _StringsDefault2, 0x007D };
static const XRect _Const00B4 = {{ 479, 62 }, { 560, 95 }};
static const XStringRes _Const00B5 = { _StringsDefault2, 0x0091 };
static const XRect _Const00B6 = {{ 25, 154 }, { 475, 183 }};
static const XStringRes _Const00B7 = { _StringsDefault2, 0x00B8 };
static const XStringRes _Const00B8 = { _StringsDefault2, 0x00DF };
static const XStringRes _Const00B9 = { _StringsDefault2, 0x0103 };
static const XRect _Const00BA = {{ 25, 13 }, { 775, 53 }};
static const XStringRes _Const00BB = { _StringsDefault2, 0x0128 };
static const XStringRes _Const00BC = { _StringsDefault2, 0x013E };
static const XRect _Const00BD = {{ 479, 62 }, { 550, 95 }};
static const XRect _Const00BE = {{ 25, 108 }, { 475, 137 }};
static const XStringRes _Const00BF = { _StringsDefault2, 0x0165 };
static const XRect _Const00C0 = {{ 479, 107 }, { 550, 140 }};
static const XStringRes _Const00C1 = { _StringsDefault2, 0x018D };
static const XStringRes _Const00C2 = { _StringsDefault2, 0x01B6 };
static const XRect _Const00C3 = {{ 0, 0 }, { 75, 33 }};
static const XRect _Const00C4 = {{ 2, 2 }, { 73, 31 }};
static const XRect _Const00C5 = {{ 2, 2 }, { 69, 31 }};
static const XStringRes _Const00C6 = { _StringsDefault2, 0x01DF };
static const XRect _Const00C7 = {{ 0, 0 }, { 420, 60 }};
static const XRect _Const00C8 = {{ 5, 5 }, { 415, 60 }};
static const XRect _Const00C9 = {{ 5, 5 }, { 415, 34 }};
static const XStringRes _Const00CA = { _StringsDefault2, 0x01E4 };
static const XRect _Const00CB = {{ 84, 31 }, { 337, 60 }};
static const XStringRes _Const00CC = { _StringsDefault3, 0x0003 };
static const XStringRes _Const00CD = { _StringsDefault3, 0x001E };
static const XStringRes _Const00CE = { _StringsDefault3, 0x002A };
static const XStringRes _Const00CF = { _StringsDefault3, 0x0046 };
static const XRect _Const00D0 = {{ 421, 150 }, { 591, 182 }};
static const XColor _Const00D1 = { 0xE1, 0xE1, 0xE1, 0xFF };
static const XRect _Const00D2 = {{ 541, 91 }, { 591, 241 }};
static const XPoint _Const00D3 = { 0, 30 };
static const XRect _Const00D4 = {{ 481, 91 }, { 531, 241 }};
static const XRect _Const00D5 = {{ 421, 91 }, { 471, 241 }};
static const XRect _Const00D6 = {{ 411, 179 }, { 601, 241 }};
static const XColor _Const00D7 = { 0xFF, 0xFF, 0xFF, 0x22 };
static const XRect _Const00D8 = {{ 411, 91 }, { 601, 149 }};
static const XRect _Const00D9 = {{ 524, 148 }, { 547, 180 }};
static const XColor _Const00DA = { 0x83, 0x80, 0x83, 0xFF };
static const XRect _Const00DB = {{ 464, 148 }, { 487, 180 }};
static const XRect _Const00DC = {{ 315, 263 }, { 485, 302 }};
static const XStringRes _Const00DD = { _StringsDefault3, 0x0061 };
static const XRect _Const00DE = {{ 315, 35 }, { 485, 65 }};
static const XStringRes _Const00DF = { _StringsDefault3, 0x006B };
static const XRect _Const00E0 = {{ 195, 150 }, { 385, 182 }};
static const XRect _Const00E1 = {{ 195, 91 }, { 265, 241 }};
static const XRect _Const00E2 = {{ 274, 91 }, { 324, 241 }};
static const XRect _Const00E3 = {{ 335, 91 }, { 385, 241 }};
static const XRect _Const00E4 = {{ 165, 179 }, { 395, 241 }};
static const XRect _Const00E5 = {{ 165, 91 }, { 395, 149 }};
static const XRect _Const00E6 = {{ 258, 148 }, { 281, 180 }};
static const XRect _Const00E7 = {{ 318, 148 }, { 341, 180 }};
static const XColor _Const00E8 = { 0xC1, 0xC1, 0xC1, 0xFF };
static const XStringRes _Const00E9 = { _StringsDefault3, 0x0071 };
static const XStringRes _Const00EA = { _StringsDefault3, 0x0075 };
static const XStringRes _Const00EB = { _StringsDefault3, 0x0079 };
static const XStringRes _Const00EC = { _StringsDefault3, 0x007D };
static const XStringRes _Const00ED = { _StringsDefault3, 0x0081 };
static const XStringRes _Const00EE = { _StringsDefault3, 0x0085 };
static const XStringRes _Const00EF = { _StringsDefault3, 0x0089 };
static const XStringRes _Const00F0 = { _StringsDefault3, 0x008D };
static const XStringRes _Const00F1 = { _StringsDefault3, 0x0091 };
static const XStringRes _Const00F2 = { _StringsDefault3, 0x0095 };
static const XStringRes _Const00F3 = { _StringsDefault3, 0x0099 };
static const XStringRes _Const00F4 = { _StringsDefault3, 0x009D };
static const XRect _Const00F5 = {{ 347, 150 }, { 457, 182 }};
static const XRect _Const00F6 = {{ 407, 91 }, { 457, 241 }};
static const XRect _Const00F7 = {{ 347, 91 }, { 397, 241 }};
static const XRect _Const00F8 = {{ 335, 179 }, { 466, 241 }};
static const XRect _Const00F9 = {{ 335, 91 }, { 466, 149 }};
static const XRect _Const00FA = {{ 390, 148 }, { 413, 180 }};

/* Inline code block. Hosts the static state previously kept in
   DeviceDriver.c. All the app-specific glue (relay control, sense polling,
   backlight cadence) lives in this unit now - DeviceDriver.c/.h is no
   longer included. */
#include "ewrte.h"
#include "ew_bsp_inout.h"

/* polling cadence of the BSP-input pump, in milliseconds. Slows down
   when the screen is dimmed - the user does not need 50 Hz refresh
   of the city-power indicator while the device is asleep. */
#define HBC_PUMP_PERIOD_BACKLIGHT_ON_MS   20
#define HBC_PUMP_PERIOD_BACKLIGHT_OFF_MS  200

/* mirrors of the BacklightState property used by the timer to drive
   EwBspInOutSetBacklight on every tick, regardless of touch / display
   chatter on the shared CH422G expander. */
static int hbc_backlight_state = 1;


/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->StartTimer, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->StopTimer, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->BacklightForeground, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->BacklightTouchHandler, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->BacklightTimer, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->CityPowerObserver, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->GeneratorBackupObserver, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->GeneratorErrorAnimation, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->GeneratorFuelLevelAnimation, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->BatteryObserver, &_this->_.XObject, 0 );
  EffectsColorEffect__Init( &_this->BatteryAnimation, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->BackgroundRectangle, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->BacklightButton, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->GeneratorRemoteShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->GeneratorRemoteBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->GeneratorRemoteCaption, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->GeneratorRemoteStop, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->GeneratorRemoteStart, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->GeneratorBackupCaption, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->GeneratorBackupConnector1, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->GeneratorBackupConnector2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->GeneratorPowerIcon, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->GeneratorBackupIndicator, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->GeneratorErrorStartStop, &_this->_.XObject, 0 );
  WidgetSetVerticalValueBar__Init( &_this->GeneratorFuelLevel, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->GeneratorFuelicon, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->GeneratorErrorFuelLevel, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->GeneratorWirelessIcon, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->GeneratorWirelessBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->GeneratorWirelessText, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->CityPowerCaption, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->CityPowerConnector1, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->CityPowerConnector2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->CityPowerIcon, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->CityPowerIndicator, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->QuickActionsShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->QuickActionsBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->QuickActionsCaption, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->QuickActionsEvents, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->QuickActionsSettings, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->HouseIndicator, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->HouseIcon, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->HouseNightDayMode, &_this->_.XObject, 0 );
  EffectsColorEffect__Init( &_this->HouseAnimation, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerKeyC, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerKeyG, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerKeyUp, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerKeyDown, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->NoteUpLeftShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->NoteUpLeftBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NoteUpLeftText, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->NoteUpLeftAnimate, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->NoteUpRightShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->NoteUpRightBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NoteUpRightText, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->NoteUpRightAnimate, &_this->_.XObject, 0 );
  ApplicationBottomNote__Init( &_this->NoteBottomCenter, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->NoteBottomCenterAnimate, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->StatusBarShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->StatusBarBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->StatusBarClockText, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->StatusBarBatteryText, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->StatusBarNote, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->StatusBarBatteryIcon, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->StatusBarEventsicon, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->BlackoutTimer, &_this->_.XObject, 0 );
  CoreTime__Init( &_this->ClockObject, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->ClockTimer, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->LogicTimer, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->LogicGenericTimerA, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->LogicGenericTimerB, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->RuntimeTimer, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->DebugGenerator, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->DebugCityPower, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->BacklightForeground, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->BacklightForeground, _Const0001 );
  ViewsRectangle_OnSetVisible( &_this->BacklightForeground, 1 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->BacklightTouchHandler, _Const0002 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->BacklightTouchHandler, _Const0003 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->BacklightTouchHandler, _Const0004 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->BacklightTouchHandler, _Const0005 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->BacklightTouchHandler, 0 );
  CoreTimer_OnSetPeriod( &_this->BacklightTimer, 900 );
  CoreTimer_OnSetBegin( &_this->BacklightTimer, 5000 );
  CoreTimer_OnSetEnabled( &_this->BacklightTimer, 1 );
  _this->GeneratorErrorAnimation.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->GeneratorErrorAnimation, EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->GeneratorErrorAnimation, 
  1500 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorErrorAnimation, 1 );
  _this->GeneratorFuelLevelAnimation.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->GeneratorFuelLevelAnimation, 
  EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->GeneratorFuelLevelAnimation, 
  1500 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorFuelLevelAnimation, 
  1 );
  _this->BatteryAnimation.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->BatteryAnimation, EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->BatteryAnimation, 1500 );
  _this->BatteryAnimation.Value2 = _Const0006;
  _this->BatteryAnimation.Value1 = _Const0001;
  CoreRectView__OnSetBounds( &_this->BackgroundRectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->BackgroundRectangle, _Const0007 );
  CoreRectView__OnSetBounds( &_this->BacklightButton, _Const0008 );
  WidgetSetPushButton_OnSetLabel( &_this->BacklightButton, 0 );
  CoreRectView__OnSetBounds( &_this->GeneratorRemoteShadow, _Const0009 );
  ViewsShadow_OnSetRadiusTL( &_this->GeneratorRemoteShadow, 15 );
  CoreRectView__OnSetBounds( &_this->GeneratorRemoteBackground, _Const0009 );
  ViewsRectangle_OnSetRadiusTL( &_this->GeneratorRemoteBackground, 15 );
  ViewsRectangle_OnSetColor( &_this->GeneratorRemoteBackground, _Const000A );
  CoreRectView__OnSetBounds( &_this->GeneratorRemoteCaption, _Const000B );
  ViewsText_OnSetAutoSize( &_this->GeneratorRemoteCaption, 0 );
  ViewsText_OnSetAlignment( &_this->GeneratorRemoteCaption, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->GeneratorRemoteCaption, EwLoadString( &_Const000C ));
  ViewsText_OnSetColor( &_this->GeneratorRemoteCaption, _Const0001 );
  CoreRectView__OnSetBounds( &_this->GeneratorRemoteStop, _Const000D );
  WidgetSetPushButton_OnSetLabel( &_this->GeneratorRemoteStop, EwLoadString( &_Const000E ));
  CoreRectView__OnSetBounds( &_this->GeneratorRemoteStart, _Const000F );
  WidgetSetPushButton_OnSetLabel( &_this->GeneratorRemoteStart, EwLoadString( &_Const0010 ));
  CoreRectView__OnSetBounds( &_this->GeneratorBackupCaption, _Const0011 );
  ViewsText_OnSetAutoSize( &_this->GeneratorBackupCaption, 1 );
  ViewsText_OnSetAlignment( &_this->GeneratorBackupCaption, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->GeneratorBackupCaption, EwLoadString( &_Const0012 ));
  ViewsText_OnSetColor( &_this->GeneratorBackupCaption, _Const0001 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->GeneratorBackupConnector1, _Const0013 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->GeneratorBackupConnector1, _Const0014 );
  ViewsLine_OnSetWidth( &_this->GeneratorBackupConnector1, 10 );
  ViewsLine_OnSetColor( &_this->GeneratorBackupConnector1, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->GeneratorBackupConnector2, _Const0016 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->GeneratorBackupConnector2, _Const0017 );
  ViewsLine_OnSetWidth( &_this->GeneratorBackupConnector2, 10 );
  ViewsLine_OnSetColor( &_this->GeneratorBackupConnector2, _Const0015 );
  CoreRectView__OnSetBounds( &_this->GeneratorPowerIcon, _Const0018 );
  ViewsImage_OnSetAutoSize( &_this->GeneratorPowerIcon, 1 );
  CoreRectView__OnSetBounds( &_this->GeneratorBackupIndicator, _Const0019 );
  ViewsImage_OnSetColor( &_this->GeneratorBackupIndicator, _Const0015 );
  CoreRectView__OnSetBounds( &_this->GeneratorErrorStartStop, _Const001A );
  ViewsImage_OnSetAutoSize( &_this->GeneratorErrorStartStop, 1 );
  ViewsImage_OnSetVisible( &_this->GeneratorErrorStartStop, 0 );
  CoreRectView__OnSetBounds( &_this->GeneratorFuelLevel, _Const001B );
  WidgetSetVerticalValueBar_OnSetCurrentValue( &_this->GeneratorFuelLevel, 100 );
  CoreRectView__OnSetBounds( &_this->GeneratorFuelicon, _Const001C );
  ViewsImage_OnSetAutoSize( &_this->GeneratorFuelicon, 1 );
  ViewsImage_OnSetVisible( &_this->GeneratorFuelicon, 1 );
  CoreRectView__OnSetBounds( &_this->GeneratorErrorFuelLevel, _Const001D );
  ViewsImage_OnSetAutoSize( &_this->GeneratorErrorFuelLevel, 1 );
  ViewsImage_OnSetVisible( &_this->GeneratorErrorFuelLevel, 0 );
  CoreRectView__OnSetBounds( &_this->GeneratorWirelessIcon, _Const001E );
  ViewsImage_OnSetAutoSize( &_this->GeneratorWirelessIcon, 1 );
  ViewsImage_OnSetVisible( &_this->GeneratorWirelessIcon, 0 );
  CoreRectView__OnSetBounds( &_this->GeneratorWirelessBackground, _Const001F );
  ViewsRectangle_OnSetRadius( &_this->GeneratorWirelessBackground, 25 );
  ViewsRectangle_OnSetColor( &_this->GeneratorWirelessBackground, _Const0020 );
  ViewsRectangle_OnSetVisible( &_this->GeneratorWirelessBackground, 0 );
  CoreRectView__OnSetBounds( &_this->GeneratorWirelessText, _Const0021 );
  ViewsText_OnSetOverflowWarning( &_this->GeneratorWirelessText, 0 );
  ViewsText_OnSetString( &_this->GeneratorWirelessText, EwLoadString( &_Const0022 ));
  ViewsText_OnSetVisible( &_this->GeneratorWirelessText, 0 );
  CoreRectView__OnSetBounds( &_this->CityPowerCaption, _Const0023 );
  ViewsText_OnSetColorTL( &_this->CityPowerCaption, _Const0001 );
  ViewsText_OnSetAutoSize( &_this->CityPowerCaption, 1 );
  ViewsText_OnSetAlignment( &_this->CityPowerCaption, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->CityPowerCaption, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->CityPowerCaption, _Const0001 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->CityPowerConnector1, _Const0025 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->CityPowerConnector1, _Const0026 );
  ViewsLine_OnSetWidth( &_this->CityPowerConnector1, 10 );
  ViewsLine_OnSetColor( &_this->CityPowerConnector1, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->CityPowerConnector2, _Const0027 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->CityPowerConnector2, _Const0028 );
  ViewsLine_OnSetWidth( &_this->CityPowerConnector2, 10 );
  ViewsLine_OnSetColor( &_this->CityPowerConnector2, _Const0015 );
  CoreRectView__OnSetBounds( &_this->CityPowerIcon, _Const0029 );
  ViewsImage_OnSetAutoSize( &_this->CityPowerIcon, 1 );
  CoreRectView__OnSetBounds( &_this->CityPowerIndicator, _Const002A );
  ViewsImage_OnSetColor( &_this->CityPowerIndicator, _Const0015 );
  CoreRectView__OnSetBounds( &_this->QuickActionsShadow, _Const002B );
  ViewsShadow_OnSetRadiusTR( &_this->QuickActionsShadow, 15 );
  CoreRectView__OnSetBounds( &_this->QuickActionsBackground, _Const002B );
  ViewsRectangle_OnSetRadiusTR( &_this->QuickActionsBackground, 15 );
  ViewsRectangle_OnSetColor( &_this->QuickActionsBackground, _Const000A );
  CoreRectView__OnSetBounds( &_this->QuickActionsCaption, _Const002C );
  ViewsText_OnSetAutoSize( &_this->QuickActionsCaption, 0 );
  ViewsText_OnSetAlignment( &_this->QuickActionsCaption, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->QuickActionsCaption, EwLoadString( &_Const002D ));
  ViewsText_OnSetColor( &_this->QuickActionsCaption, _Const0001 );
  CoreRectView__OnSetBounds( &_this->QuickActionsEvents, _Const002E );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->QuickActionsEvents, 0 );
  WidgetSetPushButton_OnSetLabel( &_this->QuickActionsEvents, EwLoadString( &_Const002F ));
  CoreRectView__OnSetBounds( &_this->QuickActionsSettings, _Const0030 );
  WidgetSetPushButton_OnSetLabel( &_this->QuickActionsSettings, EwLoadString( &_Const0031 ));
  CoreRectView__OnSetBounds( &_this->HouseIndicator, _Const0032 );
  ViewsRectangle_OnSetRadius( &_this->HouseIndicator, 15 );
  ViewsRectangle_OnSetColor( &_this->HouseIndicator, _Const0015 );
  CoreRectView__OnSetBounds( &_this->HouseIcon, _Const0033 );
  ViewsImage_OnSetAutoSize( &_this->HouseIcon, 1 );
  CoreRectView__OnSetBounds( &_this->HouseNightDayMode, _Const0034 );
  ViewsImage_OnSetAutoSize( &_this->HouseNightDayMode, 1 );
  ViewsImage_OnSetVisible( &_this->HouseNightDayMode, 1 );
  _this->HouseAnimation.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->HouseAnimation, EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->HouseAnimation, 1500 );
  _this->HouseAnimation.Value2 = ApplicationColorWarning;
  _this->HouseAnimation.Value1 = _Const0015;
  _this->KeyHandlerKeyC.Filter = CoreKeyCodeKeyC;
  _this->KeyHandlerKeyG.Filter = CoreKeyCodeKeyG;
  _this->KeyHandlerKeyUp.Filter = CoreKeyCodeUp;
  _this->KeyHandlerKeyDown.Filter = CoreKeyCodeDown;
  CoreRectView__OnSetBounds( &_this->NoteUpLeftShadow, _Const0035 );
  ViewsShadow_OnSetRadiusBR( &_this->NoteUpLeftShadow, 20 );
  ViewsShadow_OnSetColor( &_this->NoteUpLeftShadow, _Const0001 );
  ViewsShadow_OnSetVisible( &_this->NoteUpLeftShadow, 1 );
  CoreRectView__OnSetBounds( &_this->NoteUpLeftBackground, _Const0035 );
  ViewsRectangle_OnSetRadiusBR( &_this->NoteUpLeftBackground, 20 );
  ViewsRectangle_OnSetColor( &_this->NoteUpLeftBackground, _Const0007 );
  ViewsRectangle_OnSetVisible( &_this->NoteUpLeftBackground, 1 );
  CoreRectView__OnSetBounds( &_this->NoteUpLeftText, _Const0035 );
  ViewsText_OnSetAutoSize( &_this->NoteUpLeftText, 0 );
  ViewsText_OnSetAlignment( &_this->NoteUpLeftText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NoteUpLeftText, EwLoadString( &_Const0036 ));
  ViewsText_OnSetColor( &_this->NoteUpLeftText, _Const0001 );
  ViewsText_OnSetVisible( &_this->NoteUpLeftText, 1 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->NoteUpLeftAnimate, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->NoteUpLeftAnimate, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->NoteUpLeftAnimate, 500 );
  CoreRectView__OnSetBounds( &_this->NoteUpRightShadow, _Const0037 );
  ViewsShadow_OnSetRadiusBL( &_this->NoteUpRightShadow, 20 );
  ViewsShadow_OnSetVisible( &_this->NoteUpRightShadow, 1 );
  CoreRectView__OnSetBounds( &_this->NoteUpRightBackground, _Const0037 );
  ViewsRectangle_OnSetRadiusBL( &_this->NoteUpRightBackground, 20 );
  ViewsRectangle_OnSetColor( &_this->NoteUpRightBackground, _Const0007 );
  ViewsRectangle_OnSetVisible( &_this->NoteUpRightBackground, 1 );
  CoreRectView__OnSetBounds( &_this->NoteUpRightText, _Const0037 );
  ViewsText_OnSetAutoSize( &_this->NoteUpRightText, 0 );
  ViewsText_OnSetAlignment( &_this->NoteUpRightText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NoteUpRightText, EwLoadString( &_Const0036 ));
  ViewsText_OnSetColor( &_this->NoteUpRightText, _Const0001 );
  ViewsText_OnSetVisible( &_this->NoteUpRightText, 1 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->NoteUpRightAnimate, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->NoteUpRightAnimate, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->NoteUpRightAnimate, 500 );
  CoreRectView__OnSetBounds( &_this->NoteBottomCenter, _Const0038 );
  _this->NoteBottomCenterState = -1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->NoteBottomCenterAnimate, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->NoteBottomCenterAnimate, 
  1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->NoteBottomCenterAnimate, 
  500 );
  _this->NoteBottomCenterAnimate.Value2 = _Const0039;
  _this->NoteBottomCenterAnimate.Value1 = _Const003A;
  CoreRectView__OnSetBounds( &_this->StatusBarShadow, _Const003B );
  CoreRectView__OnSetBounds( &_this->StatusBarBackground, _Const003B );
  ViewsRectangle_OnSetColor( &_this->StatusBarBackground, _Const000A );
  CoreRectView__OnSetBounds( &_this->StatusBarClockText, _Const003C );
  ViewsText_OnSetAutoSize( &_this->StatusBarClockText, 0 );
  ViewsText_OnSetAlignment( &_this->StatusBarClockText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->StatusBarClockText, EwLoadString( &_Const003D ));
  ViewsText_OnSetColor( &_this->StatusBarClockText, _Const0001 );
  ViewsText_OnSetVisible( &_this->StatusBarClockText, 0 );
  CoreRectView__OnSetBounds( &_this->StatusBarBatteryText, _Const003E );
  ViewsText_OnSetAutoSize( &_this->StatusBarBatteryText, 0 );
  ViewsText_OnSetAlignment( &_this->StatusBarBatteryText, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->StatusBarBatteryText, EwLoadString( &_Const003F ));
  ViewsText_OnSetColor( &_this->StatusBarBatteryText, _Const0001 );
  ViewsText_OnSetVisible( &_this->StatusBarBatteryText, 0 );
  CoreRectView__OnSetBounds( &_this->StatusBarNote, _Const0040 );
  ViewsText_OnSetAutoSize( &_this->StatusBarNote, 0 );
  ViewsText_OnSetAlignment( &_this->StatusBarNote, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->StatusBarNote, 0 );
  ViewsText_OnSetColor( &_this->StatusBarNote, _Const0001 );
  CoreRectView__OnSetBounds( &_this->StatusBarBatteryIcon, _Const0041 );
  ViewsImage_OnSetAutoSize( &_this->StatusBarBatteryIcon, 1 );
  ViewsImage_OnSetColor( &_this->StatusBarBatteryIcon, _Const0001 );
  ViewsImage_OnSetVisible( &_this->StatusBarBatteryIcon, 0 );
  CoreRectView__OnSetBounds( &_this->StatusBarEventsicon, _Const0042 );
  ViewsImage_OnSetAutoSize( &_this->StatusBarEventsicon, 1 );
  ViewsImage_OnSetColor( &_this->StatusBarEventsicon, _Const0001 );
  ViewsImage_OnSetVisible( &_this->StatusBarEventsicon, 0 );
  _this->BlackoutCounter = 1;
  CoreTimer_OnSetPeriod( &_this->BlackoutTimer, 1000 );
  CoreTimer_OnSetEnabled( &_this->BlackoutTimer, 1 );
  CoreTimer_OnSetPeriod( &_this->ClockTimer, 100 );
  CoreTimer_OnSetBegin( &_this->ClockTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->ClockTimer, 1 );
  CoreTimer_OnSetPeriod( &_this->LogicTimer, 100 );
  CoreTimer_OnSetBegin( &_this->LogicTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->LogicTimer, 1 );
  _this->LogicAttemptCounter = 1;
  _this->LogicSessionCounter = 1;
  CoreTimer_OnSetPeriod( &_this->RuntimeTimer, 1000 );
  CoreTimer_OnSetEnabled( &_this->RuntimeTimer, 1 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->DebugGenerator, _Const0043 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->DebugGenerator, _Const0044 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->DebugGenerator, _Const0045 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->DebugGenerator, _Const0046 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->DebugGenerator, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->DebugCityPower, _Const0047 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->DebugCityPower, _Const0048 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->DebugCityPower, _Const0049 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->DebugCityPower, _Const004A );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->DebugCityPower, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BacklightForeground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BacklightTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BackgroundRectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BacklightButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorRemoteShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorRemoteBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorRemoteCaption ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorRemoteStop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorRemoteStart ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorBackupCaption ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorBackupConnector1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorBackupConnector2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorPowerIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorBackupIndicator ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorErrorStartStop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorFuelLevel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorFuelicon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorErrorFuelLevel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorWirelessIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorWirelessBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->GeneratorWirelessText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CityPowerCaption ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CityPowerConnector1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CityPowerConnector2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CityPowerIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CityPowerIndicator ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->QuickActionsShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->QuickActionsBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->QuickActionsCaption ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->QuickActionsEvents ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->QuickActionsSettings ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HouseIndicator ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HouseIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HouseNightDayMode ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NoteUpLeftShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NoteUpLeftBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NoteUpLeftText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NoteUpRightShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NoteUpRightBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NoteUpRightText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NoteBottomCenter ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBarShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBarBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBarClockText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBarBatteryText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBarNote ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBarBatteryIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBarEventsicon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DebugGenerator ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DebugCityPower ), 0 );
  _this->Device = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  _this->SettingsLocked = EwGetAutoObject( &ApplicationSettingsLocked, ApplicationSettingsClass );
  _this->StartTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_StartOnRelease );
  _this->StopTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_StopOnRelease );
  _this->BacklightTouchHandler.OnRelease = EwNewSlot( _this, ApplicationApplication_BacklightOn );
  _this->BacklightTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_BacklightTimerOnTrigger );
  _this->CityPowerObserver.OnEvent = EwNewSlot( _this, ApplicationApplication_CityPowerEventHandler );
  CorePropertyObserver_OnSetOutlet( &_this->CityPowerObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetCityPowerState, 
  ApplicationDeviceClass_OnSetCityPowerState ));
  _this->GeneratorBackupObserver.OnEvent = EwNewSlot( _this, ApplicationApplication_GeneratorBackupEventHandler );
  CorePropertyObserver_OnSetOutlet( &_this->GeneratorBackupObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetGeneratorBackupState, 
  ApplicationDeviceClass_OnSetGeneratorBackupState ));
  _this->GeneratorErrorAnimation.Outlet = EwNewRef( &_this->GeneratorErrorStartStop, 
  ViewsImage_OnGetOpacity, ViewsImage_OnSetOpacity );
  _this->GeneratorFuelLevelAnimation.Outlet = EwNewRef( &_this->GeneratorErrorFuelLevel, 
  ViewsImage_OnGetOpacity, ViewsImage_OnSetOpacity );
  _this->BatteryObserver.OnEvent = EwNewSlot( _this, ApplicationApplication_BatteryEventHandler );
  CorePropertyObserver_OnSetOutlet( &_this->BatteryObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetBattery, 
  ApplicationDeviceClass_OnSetBattery ));
  _this->BatteryAnimation.Super1.OnAnimate = EwNewSlot( _this, ApplicationApplication_BatteryAnimationOnAnimate );
  _this->BacklightButton.OnRelease = EwNewSlot( _this, ApplicationApplication_BacklightOff );
  WidgetSetPushButton_OnSetIcon( &_this->BacklightButton, EwLoadResource( &ApplicationScreenOff, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->BacklightButton, EwGetAutoObject( 
  &WidgetSetPushButton_Lime_Large, WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->GeneratorRemoteCaption, EwLoadResource( &ApplicationFontBodyM, 
  ResourcesFont ));
  _this->GeneratorRemoteStop.OnPress = EwNewSlot( _this, ApplicationApplication_StopOnPress );
  WidgetSetPushButton_OnSetAppearance( &_this->GeneratorRemoteStop, EwGetAutoObject( 
  &WidgetSetPushButton_Lime_Medium, WidgetSetPushButtonConfig ));
  _this->GeneratorRemoteStart.OnPress = EwNewSlot( _this, ApplicationApplication_StartOnPress );
  WidgetSetPushButton_OnSetAppearance( &_this->GeneratorRemoteStart, EwGetAutoObject( 
  &WidgetSetPushButton_Lime_Medium, WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->GeneratorBackupCaption, EwLoadResource( &ApplicationFontBodyL, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->GeneratorPowerIcon, EwLoadResource( &ApplicationGenerator, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->GeneratorBackupIndicator, EwLoadResource( &ApplicationBolt, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->GeneratorErrorStartStop, EwLoadResource( &ApplicationError, 
  ResourcesBitmap ));
  WidgetSetVerticalValueBar_OnSetAppearance( &_this->GeneratorFuelLevel, EwGetAutoObject( 
  &WidgetSetVerticalValueBar_Lime_Large, WidgetSetVerticalValueBarConfig ));
  ViewsImage_OnSetBitmap( &_this->GeneratorFuelicon, EwLoadResource( &ApplicationPetrolCan, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->GeneratorErrorFuelLevel, EwLoadResource( &ApplicationError, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->GeneratorWirelessIcon, EwLoadResource( &ApplicationWireless, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->GeneratorWirelessText, EwLoadResource( &ApplicationFontBottomNode, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->CityPowerCaption, EwLoadResource( &ApplicationFontBodyL, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->CityPowerIcon, EwLoadResource( &ApplicationPowerGrid, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->CityPowerIndicator, EwLoadResource( &ApplicationBolt, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->QuickActionsCaption, EwLoadResource( &ApplicationFontBodyM, 
  ResourcesFont ));
  _this->QuickActionsEvents.OnRelease = EwNewSlot( _this, ApplicationApplication_DialogueEventsOpen );
  WidgetSetPushButton_OnSetAppearance( &_this->QuickActionsEvents, EwGetAutoObject( 
  &WidgetSetPushButton_Lime_Medium, WidgetSetPushButtonConfig ));
  _this->QuickActionsSettings.OnRelease = EwNewSlot( _this, ApplicationApplication_DialogueSettingsOpen );
  WidgetSetPushButton_OnSetAppearance( &_this->QuickActionsSettings, EwGetAutoObject( 
  &WidgetSetPushButton_Lime_Medium, WidgetSetPushButtonConfig ));
  ViewsImage_OnSetBitmap( &_this->HouseIcon, EwLoadResource( &ApplicationHouse, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->HouseNightDayMode, EwLoadResource( &ApplicationDayTime, 
  ResourcesBitmap ));
  _this->HouseAnimation.Super1.OnAnimate = EwNewSlot( _this, ApplicationApplication_HouseAnimationOnAnimate );
  _this->KeyHandlerKeyC.OnPress = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyC );
  _this->KeyHandlerKeyG.OnPress = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyG );
  _this->KeyHandlerKeyUp.OnPress = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyUp );
  _this->KeyHandlerKeyUp.OnHold = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyUp );
  _this->KeyHandlerKeyDown.OnPress = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyDown );
  _this->KeyHandlerKeyDown.OnHold = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyDown );
  ViewsText_OnSetFont( &_this->NoteUpLeftText, EwLoadResource( &ApplicationFontBottomNode, 
  ResourcesFont ));
  _this->NoteUpLeftAnimate.Super1.OnFinished = EwNewSlot( _this, ApplicationApplication_NoteUpLeftAnimateOnX );
  _this->NoteUpLeftAnimate.Super1.OnAnimate = EwNewSlot( _this, ApplicationApplication_NoteUpLeftAnimateOnX );
  ViewsText_OnSetFont( &_this->NoteUpRightText, EwLoadResource( &ApplicationFontBottomNode, 
  ResourcesFont ));
  _this->NoteUpRightAnimate.Super1.OnFinished = EwNewSlot( _this, ApplicationApplication_NoteUpRightAnimateOnX );
  _this->NoteUpRightAnimate.Super1.OnAnimate = EwNewSlot( _this, ApplicationApplication_NoteUpRightAnimateOnX );
  _this->NoteBottomCenterAnimate.Super1.OnFinished = EwNewSlot( _this, ApplicationApplication_NoteBottomCenterAnimateOnFinish );
  _this->NoteBottomCenterAnimate.Outlet = EwNewRef( &_this->NoteBottomCenter, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  ViewsText_OnSetFont( &_this->StatusBarClockText, EwLoadResource( &ApplicationFontStatusBar, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->StatusBarBatteryText, EwLoadResource( &ApplicationFontStatusBar, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->StatusBarNote, EwLoadResource( &ApplicationFontStatusBar, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->StatusBarBatteryIcon, EwLoadResource( &ApplicationBattery, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->StatusBarEventsicon, EwLoadResource( &ApplicationNotification, 
  ResourcesBitmap ));
  _this->BlackoutTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_BlackoutTimerOnTrigger );
  _this->ClockTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_ClockTimerOnTrigger );
  _this->LogicTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_LogicTimerOnTrigger );
  _this->RuntimeTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_RuntimeTimerOnTrigger );
  _this->DebugGenerator.OnPress = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyG );
  _this->DebugCityPower.OnPress = EwNewSlot( _this, ApplicationApplication_OnKeyHandlerKeyC );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->StartTimer );
  CoreTimer__ReInit( &_this->StopTimer );
  ViewsRectangle__ReInit( &_this->BacklightForeground );
  CoreSimpleTouchHandler__ReInit( &_this->BacklightTouchHandler );
  CoreTimer__ReInit( &_this->BacklightTimer );
  CorePropertyObserver__ReInit( &_this->CityPowerObserver );
  CorePropertyObserver__ReInit( &_this->GeneratorBackupObserver );
  EffectsInt32Effect__ReInit( &_this->GeneratorErrorAnimation );
  EffectsInt32Effect__ReInit( &_this->GeneratorFuelLevelAnimation );
  CorePropertyObserver__ReInit( &_this->BatteryObserver );
  EffectsColorEffect__ReInit( &_this->BatteryAnimation );
  ViewsRectangle__ReInit( &_this->BackgroundRectangle );
  WidgetSetPushButton__ReInit( &_this->BacklightButton );
  ViewsShadow__ReInit( &_this->GeneratorRemoteShadow );
  ViewsRectangle__ReInit( &_this->GeneratorRemoteBackground );
  ViewsText__ReInit( &_this->GeneratorRemoteCaption );
  WidgetSetPushButton__ReInit( &_this->GeneratorRemoteStop );
  WidgetSetPushButton__ReInit( &_this->GeneratorRemoteStart );
  ViewsText__ReInit( &_this->GeneratorBackupCaption );
  ViewsLine__ReInit( &_this->GeneratorBackupConnector1 );
  ViewsLine__ReInit( &_this->GeneratorBackupConnector2 );
  ViewsImage__ReInit( &_this->GeneratorPowerIcon );
  ViewsImage__ReInit( &_this->GeneratorBackupIndicator );
  ViewsImage__ReInit( &_this->GeneratorErrorStartStop );
  WidgetSetVerticalValueBar__ReInit( &_this->GeneratorFuelLevel );
  ViewsImage__ReInit( &_this->GeneratorFuelicon );
  ViewsImage__ReInit( &_this->GeneratorErrorFuelLevel );
  ViewsImage__ReInit( &_this->GeneratorWirelessIcon );
  ViewsRectangle__ReInit( &_this->GeneratorWirelessBackground );
  ViewsText__ReInit( &_this->GeneratorWirelessText );
  ViewsText__ReInit( &_this->CityPowerCaption );
  ViewsLine__ReInit( &_this->CityPowerConnector1 );
  ViewsLine__ReInit( &_this->CityPowerConnector2 );
  ViewsImage__ReInit( &_this->CityPowerIcon );
  ViewsImage__ReInit( &_this->CityPowerIndicator );
  ViewsShadow__ReInit( &_this->QuickActionsShadow );
  ViewsRectangle__ReInit( &_this->QuickActionsBackground );
  ViewsText__ReInit( &_this->QuickActionsCaption );
  WidgetSetPushButton__ReInit( &_this->QuickActionsEvents );
  WidgetSetPushButton__ReInit( &_this->QuickActionsSettings );
  ViewsRectangle__ReInit( &_this->HouseIndicator );
  ViewsImage__ReInit( &_this->HouseIcon );
  ViewsImage__ReInit( &_this->HouseNightDayMode );
  EffectsColorEffect__ReInit( &_this->HouseAnimation );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerKeyC );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerKeyG );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerKeyUp );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerKeyDown );
  ViewsShadow__ReInit( &_this->NoteUpLeftShadow );
  ViewsRectangle__ReInit( &_this->NoteUpLeftBackground );
  ViewsText__ReInit( &_this->NoteUpLeftText );
  EffectsRectEffect__ReInit( &_this->NoteUpLeftAnimate );
  ViewsShadow__ReInit( &_this->NoteUpRightShadow );
  ViewsRectangle__ReInit( &_this->NoteUpRightBackground );
  ViewsText__ReInit( &_this->NoteUpRightText );
  EffectsRectEffect__ReInit( &_this->NoteUpRightAnimate );
  ApplicationBottomNote__ReInit( &_this->NoteBottomCenter );
  EffectsRectEffect__ReInit( &_this->NoteBottomCenterAnimate );
  ViewsShadow__ReInit( &_this->StatusBarShadow );
  ViewsRectangle__ReInit( &_this->StatusBarBackground );
  ViewsText__ReInit( &_this->StatusBarClockText );
  ViewsText__ReInit( &_this->StatusBarBatteryText );
  ViewsText__ReInit( &_this->StatusBarNote );
  ViewsImage__ReInit( &_this->StatusBarBatteryIcon );
  ViewsImage__ReInit( &_this->StatusBarEventsicon );
  CoreTimer__ReInit( &_this->BlackoutTimer );
  CoreTime__ReInit( &_this->ClockObject );
  CoreTimer__ReInit( &_this->ClockTimer );
  CoreTimer__ReInit( &_this->LogicTimer );
  CoreTimer__ReInit( &_this->LogicGenericTimerA );
  CoreTimer__ReInit( &_this->LogicGenericTimerB );
  CoreTimer__ReInit( &_this->RuntimeTimer );
  CoreSimpleTouchHandler__ReInit( &_this->DebugGenerator );
  CoreSimpleTouchHandler__ReInit( &_this->DebugCityPower );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->StartTimer );
  CoreTimer__Done( &_this->StopTimer );
  ViewsRectangle__Done( &_this->BacklightForeground );
  CoreSimpleTouchHandler__Done( &_this->BacklightTouchHandler );
  CoreTimer__Done( &_this->BacklightTimer );
  CorePropertyObserver__Done( &_this->CityPowerObserver );
  CorePropertyObserver__Done( &_this->GeneratorBackupObserver );
  EffectsInt32Effect__Done( &_this->GeneratorErrorAnimation );
  EffectsInt32Effect__Done( &_this->GeneratorFuelLevelAnimation );
  CorePropertyObserver__Done( &_this->BatteryObserver );
  EffectsColorEffect__Done( &_this->BatteryAnimation );
  ViewsRectangle__Done( &_this->BackgroundRectangle );
  WidgetSetPushButton__Done( &_this->BacklightButton );
  ViewsShadow__Done( &_this->GeneratorRemoteShadow );
  ViewsRectangle__Done( &_this->GeneratorRemoteBackground );
  ViewsText__Done( &_this->GeneratorRemoteCaption );
  WidgetSetPushButton__Done( &_this->GeneratorRemoteStop );
  WidgetSetPushButton__Done( &_this->GeneratorRemoteStart );
  ViewsText__Done( &_this->GeneratorBackupCaption );
  ViewsLine__Done( &_this->GeneratorBackupConnector1 );
  ViewsLine__Done( &_this->GeneratorBackupConnector2 );
  ViewsImage__Done( &_this->GeneratorPowerIcon );
  ViewsImage__Done( &_this->GeneratorBackupIndicator );
  ViewsImage__Done( &_this->GeneratorErrorStartStop );
  WidgetSetVerticalValueBar__Done( &_this->GeneratorFuelLevel );
  ViewsImage__Done( &_this->GeneratorFuelicon );
  ViewsImage__Done( &_this->GeneratorErrorFuelLevel );
  ViewsImage__Done( &_this->GeneratorWirelessIcon );
  ViewsRectangle__Done( &_this->GeneratorWirelessBackground );
  ViewsText__Done( &_this->GeneratorWirelessText );
  ViewsText__Done( &_this->CityPowerCaption );
  ViewsLine__Done( &_this->CityPowerConnector1 );
  ViewsLine__Done( &_this->CityPowerConnector2 );
  ViewsImage__Done( &_this->CityPowerIcon );
  ViewsImage__Done( &_this->CityPowerIndicator );
  ViewsShadow__Done( &_this->QuickActionsShadow );
  ViewsRectangle__Done( &_this->QuickActionsBackground );
  ViewsText__Done( &_this->QuickActionsCaption );
  WidgetSetPushButton__Done( &_this->QuickActionsEvents );
  WidgetSetPushButton__Done( &_this->QuickActionsSettings );
  ViewsRectangle__Done( &_this->HouseIndicator );
  ViewsImage__Done( &_this->HouseIcon );
  ViewsImage__Done( &_this->HouseNightDayMode );
  EffectsColorEffect__Done( &_this->HouseAnimation );
  CoreKeyPressHandler__Done( &_this->KeyHandlerKeyC );
  CoreKeyPressHandler__Done( &_this->KeyHandlerKeyG );
  CoreKeyPressHandler__Done( &_this->KeyHandlerKeyUp );
  CoreKeyPressHandler__Done( &_this->KeyHandlerKeyDown );
  ViewsShadow__Done( &_this->NoteUpLeftShadow );
  ViewsRectangle__Done( &_this->NoteUpLeftBackground );
  ViewsText__Done( &_this->NoteUpLeftText );
  EffectsRectEffect__Done( &_this->NoteUpLeftAnimate );
  ViewsShadow__Done( &_this->NoteUpRightShadow );
  ViewsRectangle__Done( &_this->NoteUpRightBackground );
  ViewsText__Done( &_this->NoteUpRightText );
  EffectsRectEffect__Done( &_this->NoteUpRightAnimate );
  ApplicationBottomNote__Done( &_this->NoteBottomCenter );
  EffectsRectEffect__Done( &_this->NoteBottomCenterAnimate );
  ViewsShadow__Done( &_this->StatusBarShadow );
  ViewsRectangle__Done( &_this->StatusBarBackground );
  ViewsText__Done( &_this->StatusBarClockText );
  ViewsText__Done( &_this->StatusBarBatteryText );
  ViewsText__Done( &_this->StatusBarNote );
  ViewsImage__Done( &_this->StatusBarBatteryIcon );
  ViewsImage__Done( &_this->StatusBarEventsicon );
  CoreTimer__Done( &_this->BlackoutTimer );
  CoreTime__Done( &_this->ClockObject );
  CoreTimer__Done( &_this->ClockTimer );
  CoreTimer__Done( &_this->LogicTimer );
  CoreTimer__Done( &_this->LogicGenericTimerA );
  CoreTimer__Done( &_this->LogicGenericTimerB );
  CoreTimer__Done( &_this->RuntimeTimer );
  CoreSimpleTouchHandler__Done( &_this->DebugGenerator );
  CoreSimpleTouchHandler__Done( &_this->DebugCityPower );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  CoreTime CurrentTime;
  XInt32 MinuteOfDay;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationDeviceClass_ReadSettingsFromSd( _this->Device );
  WidgetSetVerticalValueBar_OnSetMinValue( &_this->GeneratorFuelLevel, -4000 );
  WidgetSetVerticalValueBar_OnSetMaxValue( &_this->GeneratorFuelLevel, _this->SettingsLocked->Page3SettingD 
  + 3000 );
  WidgetSetVerticalValueBar_OnSetCurrentValue( &_this->GeneratorFuelLevel, _this->SettingsLocked->Page3SettingE );
  CoreTimer_OnSetBegin( &_this->BacklightTimer, ( _this->SettingsLocked->Page1SettingD 
  * 60 ) * 1000 );
  CoreGroup__OnSetFocus( _this, 0 );
  ViewsText_OnSetString( &_this->StatusBarBatteryText, EwConcatString( EwNewStringInt( 
  _this->Device->Battery, 0, 10 ), EwLoadString( &_Const004B )));
  CurrentTime = CoreTime_OnGetCurrentTime( &_this->ClockObject );
  MinuteOfDay = ( CurrentTime->Hour * 60 ) + CurrentTime->Minute;

  if (( MinuteOfDay >= _this->SettingsLocked->Page2SettingA ) && ( MinuteOfDay <= 
      _this->SettingsLocked->Page2SettingB ))
  {
    ViewsImage_OnSetBitmap( &_this->HouseNightDayMode, EwLoadResource( &ApplicationDayTime, 
    ResourcesBitmap ));
    _this->LogicDayNightModeState = 1;
  }
  else
  {
    ViewsImage_OnSetBitmap( &_this->HouseNightDayMode, EwLoadResource( &ApplicationNightTime, 
    ResourcesBitmap ));
    _this->LogicDayNightModeState = 0;
  }

  EwSignal( EwNewSlot( _this, ApplicationApplication_CityPowerEventHandler ), ((XObject)_this ));
  EwSignal( EwNewSlot( _this, ApplicationApplication_HouseStateHandling ), ((XObject)_this ));
  EwSignal( EwNewSlot( _this, ApplicationApplication_ClockTimerOnTrigger ), ((XObject)_this ));
  CoreSimpleTouchHandler_OnSetEnabled( &_this->DebugCityPower, 0 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->DebugGenerator, 0 );
}

/* The method HandleEvent() is invoked automatically if the view has received an 
   event. For example, touching the view on the touch screen can cause the view 
   to receive a Core::CursorEvent event. Within this method the view can evaluate 
   the event and react to it.
   Whether the event has been handled by the view or not is determined by the return 
   value. To sign an event as handled HandleEvent() should return a valid object 
   (e.g. 'this'). If the event has not been handled, 'null' should be returned.
   Depending on the kind of the event, the framework can continue dispatching of 
   still unhandled events. For example, keyboard events (Core::KeyEvent class) are 
   automatically delivered to the superior @Owner of the receiver view if this view 
   has ignored the event.
   HandleEvent() is invoked automatically by the framework, so you never should 
   need to invoke it directly. However you can prepare and post new events by using 
   the methods DispatchEvent() and BroadcastEvent() of the application class Core::Root. */
XObject ApplicationApplication_HandleEvent( ApplicationApplication _this, CoreEvent 
  aEvent )
{
  EwIdleSignal( EwNewSlot( _this, ApplicationApplication_BacklightReset ), ((XObject)_this ));
  return CoreView_HandleEvent((CoreView)_this, aEvent );
}

/* 'C' function for method : 'Application::Application.StartOnPress()' */
void ApplicationApplication_StartOnPress( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 0 )
    return;

  ApplicationDeviceClass_OnSetStartButtonState( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), 1 );

  if ( _this->SettingsLocked->Page1SettingC != 0 )
  {
    ViewsImage_OnSetVisible( &_this->GeneratorWirelessIcon, 1 );
    ViewsRectangle_OnSetVisible( &_this->GeneratorWirelessBackground, 1 );
    ViewsText_OnSetVisible( &_this->GeneratorWirelessText, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BacklightButton, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->QuickActionsSettings, 0 );
    _this->GeneratorRemoteStart.OnRelease = EwNullSlot;
    CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStop, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStart, 0 );
    WidgetSetPushButton_OnSetLabel( &_this->GeneratorRemoteStart, EwLoadString( 
    &_Const004C ));
    CoreTimer_OnSetEnabled( &_this->StartTimer, 0 );
    CoreTimer_OnSetPeriod( &_this->StartTimer, _this->SettingsLocked->Page1SettingC 
    * 1000 );
    CoreTimer_OnSetEnabled( &_this->StartTimer, 1 );
  }
  else
  {
    ViewsImage_OnSetVisible( &_this->GeneratorWirelessIcon, 1 );
    _this->GeneratorRemoteStart.OnRelease = EwNewSlot( _this, ApplicationApplication_StartOnRelease );
  }
}

/* 'C' function for method : 'Application::Application.StartOnRelease()' */
void ApplicationApplication_StartOnRelease( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 0 )
    return;

  ApplicationDeviceClass_OnSetStartButtonState( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), 0 );
  ViewsImage_OnSetVisible( &_this->GeneratorWirelessIcon, 0 );
  ViewsRectangle_OnSetVisible( &_this->GeneratorWirelessBackground, 0 );
  ViewsText_OnSetVisible( &_this->GeneratorWirelessText, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BacklightButton, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->QuickActionsSettings, 1 );
  CoreTimer_OnSetEnabled( &_this->StartTimer, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStop, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStart, 1 );
  WidgetSetPushButton_OnSetLabel( &_this->GeneratorRemoteStart, EwLoadString( &_Const0010 ));
  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::Application.StopOnPress()' */
void ApplicationApplication_StopOnPress( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 0 )
    return;

  ApplicationDeviceClass_OnSetStopButtonState( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), 1 );
  ApplicationDeviceClass_OnSetBacklightState( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->BacklightTouchHandler, 0 );
  CoreGroup__RestackBack( _this, ((CoreView)&_this->BacklightTouchHandler ));
  CoreGroup__RestackBack( _this, ((CoreView)&_this->BacklightForeground ));

  if ( _this->SettingsLocked->Page1SettingC != 0 )
  {
    ViewsImage_OnSetVisible( &_this->GeneratorWirelessIcon, 1 );
    ViewsRectangle_OnSetVisible( &_this->GeneratorWirelessBackground, 1 );
    ViewsText_OnSetVisible( &_this->GeneratorWirelessText, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BacklightButton, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->QuickActionsSettings, 0 );
    _this->GeneratorRemoteStop.OnRelease = EwNullSlot;
    CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStart, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStop, 0 );
    WidgetSetPushButton_OnSetLabel( &_this->GeneratorRemoteStop, EwLoadString( &_Const004D ));
    CoreTimer_OnSetEnabled( &_this->StopTimer, 0 );
    CoreTimer_OnSetPeriod( &_this->StopTimer, _this->SettingsLocked->Page1SettingC 
    * 1000 );
    CoreTimer_OnSetEnabled( &_this->StopTimer, 1 );
  }
  else
  {
    ViewsImage_OnSetVisible( &_this->GeneratorWirelessIcon, 1 );
    _this->GeneratorRemoteStop.OnRelease = EwNewSlot( _this, ApplicationApplication_StopOnRelease );
  }
}

/* 'C' function for method : 'Application::Application.StopOnRelease()' */
void ApplicationApplication_StopOnRelease( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 0 )
    return;

  ApplicationDeviceClass_OnSetStopButtonState( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), 0 );
  ViewsImage_OnSetVisible( &_this->GeneratorWirelessIcon, 0 );
  ViewsRectangle_OnSetVisible( &_this->GeneratorWirelessBackground, 0 );
  ViewsText_OnSetVisible( &_this->GeneratorWirelessText, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BacklightButton, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->QuickActionsSettings, 1 );
  CoreTimer_OnSetEnabled( &_this->StopTimer, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStart, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->GeneratorRemoteStop, 1 );
  WidgetSetPushButton_OnSetLabel( &_this->GeneratorRemoteStop, EwLoadString( &_Const000E ));
  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::Application.BacklightOn()' */
void ApplicationApplication_BacklightOn( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 1 )
    return;

  ApplicationDeviceClass_OnSetBacklightState( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->BacklightTouchHandler, 0 );
  CoreGroup__RestackBack( _this, ((CoreView)&_this->BacklightTouchHandler ));
  CoreGroup__RestackBack( _this, ((CoreView)&_this->BacklightForeground ));
}

/* 'C' function for method : 'Application::Application.BacklightOff()' */
void ApplicationApplication_BacklightOff( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 0 )
    return;

  if ( _this->StartTimer.Enabled == 1 )
    return;

  if ( _this->StopTimer.Enabled == 1 )
    return;

  ApplicationDeviceClass_OnSetBacklightState( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), 0 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->BacklightTouchHandler, 1 );
  CoreGroup__RestackTop( _this, ((CoreView)&_this->BacklightTouchHandler ));
  CoreGroup__RestackTop( _this, ((CoreView)&_this->BacklightForeground ));
}

/* Slot method to reset the auto demo. */
void ApplicationApplication_BacklightReset( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreTimer_OnSetEnabled( &_this->BacklightTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->BacklightTimer, 1 );

  if ( _this->NoteBottomCenterState == 8 )
  {
    _this->NoteBottomCenterState = -2;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 0 );
    _this->NoteBottomCenterAnimate.Value1 = _Const0038;
    _this->NoteBottomCenterAnimate.Value2 = _Const003A;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 1 );
  }
}

/* Slot method to trigger the next phase of the auto demo. */
void ApplicationApplication_BacklightTimerOnTrigger( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 1 ) && ( _this->DialogueShown == 0 ))
  {
    _this->NoteBottomCenterState = -1;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 0 );
    _this->NoteBottomCenterAnimate.Value1 = _Const0038;
    _this->NoteBottomCenterAnimate.Value2 = _Const003A;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 1 );
    EwSignal( EwNewSlot( _this, ApplicationApplication_BacklightOff ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::Application.CityPowerEventHandler()' */
void ApplicationApplication_CityPowerEventHandler( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
      == 1 )
  {
    _this->BlackoutCounter = 1;
    ApplicationApplication_BlackoutIndicatorUpdate( _this );
    CoreTimer_OnSetEnabled( &_this->BlackoutTimer, 0 );
    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
    _this->LogicAttemptCounter = 1;
    _this->LogicSessionCounter = 1;
    _this->LogicDelayState = 0;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpLeftAnimate, 0 );
    _this->NoteUpLeftAnimate.Value1 = _Const0035;
    _this->NoteUpLeftAnimate.Value2 = _Const004E;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpLeftAnimate, 1 );

    if ( _this->SettingsLocked->Page3SettingA == 1 )
    {
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpRightAnimate, 0 );
      _this->NoteUpRightAnimate.Value1 = _Const0037;
      _this->NoteUpRightAnimate.Value2 = _Const004F;
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpRightAnimate, 1 );
    }

    EwIdleSignal( EwNewSlot( _this, ApplicationApplication_BacklightReset ), ((XObject)_this ));
    _this->NoteBottomCenterState = 0;
    EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
    0 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 0 );
    _this->NoteBottomCenterAnimate.Value1 = _Const003A;
    _this->NoteBottomCenterAnimate.Value2 = _Const0038;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 1 );
    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwLoadString( 
    &_Const0050 ));
    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 0 );
    ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, ApplicationColorCityPower );
    ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
    ViewsImage_OnSetColor( &_this->CityPowerIndicator, ApplicationColorCityPower );
    ViewsLine_OnSetColor( &_this->CityPowerConnector1, ApplicationColorCityPower );
    ViewsLine_OnSetColor( &_this->CityPowerConnector2, ApplicationColorCityPower );
  }
  else
  {
    _this->BlackoutCounter = 1;
    ApplicationApplication_BlackoutIndicatorUpdate( _this );
    CoreTimer_OnSetEnabled( &_this->BlackoutTimer, 1 );
    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
    _this->LogicAttemptCounter = 1;
    _this->LogicSessionCounter = 1;
    _this->LogicDelayState = 0;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpLeftAnimate, 0 );
    _this->NoteUpLeftAnimate.Value1 = _Const004E;
    _this->NoteUpLeftAnimate.Value2 = _Const0035;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpLeftAnimate, 1 );

    if ( _this->SettingsLocked->Page3SettingA == 1 )
    {
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpRightAnimate, 0 );
      _this->NoteUpRightAnimate.Value1 = _Const004F;
      _this->NoteUpRightAnimate.Value2 = _Const0037;
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteUpRightAnimate, 1 );
    }

    EwIdleSignal( EwNewSlot( _this, ApplicationApplication_BacklightReset ), ((XObject)_this ));
    _this->NoteBottomCenterState = 1;
    EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
    0 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 0 );
    _this->NoteBottomCenterAnimate.Value1 = _Const003A;
    _this->NoteBottomCenterAnimate.Value2 = _Const0038;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 1 );
    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwLoadString( 
    &_Const0051 ));
    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 0 );
    ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, ApplicationColorWarning );
    ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
    ViewsImage_OnSetColor( &_this->CityPowerIndicator, _Const0015 );
    ViewsLine_OnSetColor( &_this->CityPowerConnector1, _Const0015 );
    ViewsLine_OnSetColor( &_this->CityPowerConnector2, _Const0015 );
  }

  EwSignal( EwNewSlot( _this, ApplicationApplication_BacklightOn ), ((XObject)_this ));
  EwSignal( EwNewSlot( _this, ApplicationApplication_HouseStateHandling ), ((XObject)_this ));
  EwSignal( EwNewSlot( _this, ApplicationApplication_LogicTimerOnTrigger ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.GeneratorBackupEventHandler()' */
void ApplicationApplication_GeneratorBackupEventHandler( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
      == 1 )
  {
    if ( _this->SettingsLocked->Page3SettingE > 0 )
      _this->SettingsLocked->Page3SettingE = _this->SettingsLocked->Page3SettingE 
      - 45;

    if ( _this->SettingsLocked->Page3SettingE < 0 )
      _this->SettingsLocked->Page3SettingE = 0;

    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
    _this->LogicAttemptCounter = 1;
    _this->LogicSessionCounter = 1;
    _this->LogicDelayState = 0;
    EwIdleSignal( EwNewSlot( _this, ApplicationApplication_BacklightReset ), ((XObject)_this ));
    _this->NoteBottomCenterState = 2;
    EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
    0 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 0 );
    _this->NoteBottomCenterAnimate.Value1 = _Const003A;
    _this->NoteBottomCenterAnimate.Value2 = _Const0038;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 1 );
    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwLoadString( 
    &_Const0052 ));
    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 0 );
    ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, ApplicationColorGeneratorBackup );
    ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
    ViewsImage_OnSetColor( &_this->GeneratorBackupIndicator, ApplicationColorGeneratorBackup );
    ViewsLine_OnSetColor( &_this->GeneratorBackupConnector1, ApplicationColorGeneratorBackup );
    ViewsLine_OnSetColor( &_this->GeneratorBackupConnector2, ApplicationColorGeneratorBackup );
  }
  else
  {
    if ( _this->SettingsLocked->Page3SettingE > 0 )
      _this->SettingsLocked->Page3SettingE = _this->SettingsLocked->Page3SettingE 
      - 15;

    if ( _this->SettingsLocked->Page3SettingE < 0 )
      _this->SettingsLocked->Page3SettingE = 0;

    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
    _this->LogicAttemptCounter = 1;
    _this->LogicSessionCounter = 1;
    _this->LogicDelayState = 0;
    EwIdleSignal( EwNewSlot( _this, ApplicationApplication_BacklightReset ), ((XObject)_this ));
    _this->NoteBottomCenterState = 3;
    EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
    0 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 0 );
    _this->NoteBottomCenterAnimate.Value1 = _Const003A;
    _this->NoteBottomCenterAnimate.Value2 = _Const0038;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 1 );
    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwLoadString( 
    &_Const0053 ));
    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 0 );
    ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, _Const0015 );
    ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
    ViewsImage_OnSetColor( &_this->GeneratorBackupIndicator, _Const0015 );
    ViewsLine_OnSetColor( &_this->GeneratorBackupConnector1, _Const0015 );
    ViewsLine_OnSetColor( &_this->GeneratorBackupConnector2, _Const0015 );
  }

  EwSignal( EwNewSlot( _this, ApplicationApplication_BacklightOn ), ((XObject)_this ));
  EwSignal( EwNewSlot( _this, ApplicationApplication_HouseStateHandling ), ((XObject)_this ));
  EwSignal( EwNewSlot( _this, ApplicationApplication_LogicTimerOnTrigger ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.BatteryEventHandler()' */
void ApplicationApplication_BatteryEventHandler( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->StatusBarBatteryText, EwConcatString( EwNewStringInt( 
  _this->Device->Battery, 0, 10 ), EwLoadString( &_Const004B )));

  if ( _this->Device->Battery <= 15 )
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->BatteryAnimation, 1 );
    ViewsImage_OnSetColor( &_this->StatusBarBatteryIcon, _Const0006 );
    ViewsText_OnSetColor( &_this->StatusBarBatteryText, _Const0006 );
  }
  else
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->BatteryAnimation, 0 );
    ViewsImage_OnSetColor( &_this->StatusBarBatteryIcon, _Const0001 );
    ViewsText_OnSetColor( &_this->StatusBarBatteryText, _Const0001 );
  }
}

/* 'C' function for method : 'Application::Application.BatteryAnimationOnAnimate()' */
void ApplicationApplication_BatteryAnimationOnAnimate( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetColor( &_this->StatusBarBatteryIcon, _this->BatteryAnimation.Value );
  ViewsText_OnSetColor( &_this->StatusBarBatteryText, _this->BatteryAnimation.Value );
}

/* 'C' function for method : 'Application::Application.HouseStateHandling()' */
void ApplicationApplication_HouseStateHandling( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
      == 0 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
      == 0 ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->HouseAnimation, 0 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->HouseAnimation, 1 );
  }
  else
    if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
        == 1 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
        == 0 ))
    {
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->HouseAnimation, 0 );
      ViewsRectangle_OnSetColorTL( &_this->HouseIndicator, _Const0007 );
      ViewsRectangle_OnSetColorBL( &_this->HouseIndicator, _Const0007 );
      ViewsRectangle_OnSetColorTR( &_this->HouseIndicator, _Const0007 );
      ViewsRectangle_OnSetColorBR( &_this->HouseIndicator, _Const0007 );
      ViewsRectangle_OnSetColor( &_this->HouseIndicator, ApplicationColorCityPower );
    }
    else
      if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
          == 0 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
          == 1 ))
      {
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->HouseAnimation, 0 );
        ViewsRectangle_OnSetColorTL( &_this->HouseIndicator, _Const0007 );
        ViewsRectangle_OnSetColorBL( &_this->HouseIndicator, _Const0007 );
        ViewsRectangle_OnSetColorTR( &_this->HouseIndicator, _Const0007 );
        ViewsRectangle_OnSetColorBR( &_this->HouseIndicator, _Const0007 );
        ViewsRectangle_OnSetColor( &_this->HouseIndicator, ApplicationColorGeneratorBackup );
      }
      else
        if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
            == 1 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
            == 1 ))
        {
          EffectsEffect_OnSetEnabled((EffectsEffect)&_this->HouseAnimation, 0 );
          ViewsRectangle_OnSetColor( &_this->HouseIndicator, _Const0007 );
          ViewsRectangle_OnSetColorTL( &_this->HouseIndicator, ApplicationColorCityPower );
          ViewsRectangle_OnSetColorBL( &_this->HouseIndicator, ApplicationColorCityPower );
          ViewsRectangle_OnSetColorTR( &_this->HouseIndicator, ApplicationColorCityPower );
          ViewsRectangle_OnSetColorBR( &_this->HouseIndicator, ApplicationColorCityPower );
        }
}

/* 'C' function for method : 'Application::Application.HouseAnimationOnAnimate()' */
void ApplicationApplication_HouseAnimationOnAnimate( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->HouseIndicator, _this->HouseAnimation.Value );
  ViewsRectangle_OnSetColorTL( &_this->HouseIndicator, _this->HouseAnimation.Value );
  ViewsRectangle_OnSetColorBL( &_this->HouseIndicator, _this->HouseAnimation.Value );
  ViewsRectangle_OnSetColorTR( &_this->HouseIndicator, _this->HouseAnimation.Value );
  ViewsRectangle_OnSetColorBR( &_this->HouseIndicator, _this->HouseAnimation.Value );
}

/* 'C' function for method : 'Application::Application.DialogueSettingsOpen()' */
void ApplicationApplication_DialogueSettingsOpen( ApplicationApplication _this, 
  XObject sender )
{
  ApplicationSettingsDialogue Outlet;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetEnabled((CoreGroup)_this, 0 );
  Outlet = EwNewObject( ApplicationSettingsDialogue, 0 );
  Outlet->Close = EwNewSlot( _this, ApplicationApplication_DialogueSettingsClose );
  _this->DialogueShown = ((CoreGroup)Outlet );
  CoreGroup__PresentDialog( _this, _this->DialogueShown, ((EffectsTransition)EwGetAutoObject( 
  &ApplicationSlideBottom, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  CoreRoot_BeginModal( CoreView__GetRoot( _this ), _this->DialogueShown );
}

/* 'C' function for method : 'Application::Application.DialogueSettingsClose()' */
void ApplicationApplication_DialogueSettingsClose( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->DialogueShown != 0 )
  {
    CoreRoot_EndModal( CoreView__GetRoot( _this ), _this->DialogueShown );
    CoreGroup__DismissDialog( _this, _this->DialogueShown, ((EffectsTransition)EwGetAutoObject( 
    &ApplicationSlideTop, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
    0 );
    _this->DialogueShown = 0;
  }

  WidgetSetVerticalValueBar_OnSetMaxValue( &_this->GeneratorFuelLevel, _this->SettingsLocked->Page3SettingD );
  WidgetSetVerticalValueBar_OnSetCurrentValue( &_this->GeneratorFuelLevel, _this->SettingsLocked->Page3SettingE );
  CoreTimer_OnSetBegin( &_this->BacklightTimer, ( _this->SettingsLocked->Page1SettingD 
  * 60 ) * 1000 );
  CoreGroup_OnSetEnabled((CoreGroup)_this, 1 );
}

/* 'C' function for method : 'Application::Application.DialogueEventsOpen()' */
void ApplicationApplication_DialogueEventsOpen( ApplicationApplication _this, XObject 
  sender )
{
  ApplicationEventsDialogue Outlet;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetEnabled((CoreGroup)_this, 0 );
  Outlet = EwNewObject( ApplicationEventsDialogue, 0 );
  Outlet->Close = EwNewSlot( _this, ApplicationApplication_DialogueEventsClose );
  _this->DialogueShown = ((CoreGroup)Outlet );
  CoreGroup__PresentDialog( _this, _this->DialogueShown, ((EffectsTransition)EwGetAutoObject( 
  &ApplicationSlideBottom, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  CoreRoot_BeginModal( CoreView__GetRoot( _this ), _this->DialogueShown );
}

/* 'C' function for method : 'Application::Application.DialogueEventsClose()' */
void ApplicationApplication_DialogueEventsClose( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->DialogueShown != 0 )
  {
    CoreRoot_EndModal( CoreView__GetRoot( _this ), _this->DialogueShown );
    CoreGroup__DismissDialog( _this, _this->DialogueShown, ((EffectsTransition)EwGetAutoObject( 
    &ApplicationSlideTop, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
    0 );
    _this->DialogueShown = 0;
  }

  CoreGroup_OnSetEnabled((CoreGroup)_this, 1 );
}

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyC()' */
void ApplicationApplication_OnKeyHandlerKeyC( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Device->CityPowerState == 0 )
    ApplicationDeviceClass_UpdateCityPowerState( _this->Device, 1 );
  else
    ApplicationDeviceClass_UpdateCityPowerState( _this->Device, 0 );
}

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyG()' */
void ApplicationApplication_OnKeyHandlerKeyG( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Device->GeneratorBackupState == 0 )
    ApplicationDeviceClass_UpdateGeneratorBackupState( _this->Device, 1 );
  else
    ApplicationDeviceClass_UpdateGeneratorBackupState( _this->Device, 0 );
}

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyUp()' */
void ApplicationApplication_OnKeyHandlerKeyUp( ApplicationApplication _this, XObject 
  sender )
{
  XInt32 PreviousValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  PreviousValue = _this->Device->Battery;
  ApplicationDeviceClass_UpdateBattery( _this->Device, PreviousValue + 1 );
}

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyDown()' */
void ApplicationApplication_OnKeyHandlerKeyDown( ApplicationApplication _this, XObject 
  sender )
{
  XInt32 PreviousValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  PreviousValue = _this->Device->Battery;
  ApplicationDeviceClass_UpdateBattery( _this->Device, PreviousValue - 1 );
}

/* 'C' function for method : 'Application::Application.NoteUpLeftAnimateOnX()' */
void ApplicationApplication_NoteUpLeftAnimateOnX( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->NoteUpLeftBackground, _this->NoteUpLeftAnimate.Value );
  CoreRectView__OnSetBounds( &_this->NoteUpLeftShadow, _this->NoteUpLeftAnimate.Value );
  CoreRectView__OnSetBounds( &_this->NoteUpLeftText, _this->NoteUpLeftAnimate.Value );
}

/* 'C' function for method : 'Application::Application.NoteUpRightAnimateOnX()' */
void ApplicationApplication_NoteUpRightAnimateOnX( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->NoteUpRightBackground, _this->NoteUpRightAnimate.Value );
  CoreRectView__OnSetBounds( &_this->NoteUpRightShadow, _this->NoteUpRightAnimate.Value );
  CoreRectView__OnSetBounds( &_this->NoteUpRightText, _this->NoteUpRightAnimate.Value );
}

/* 'C' function for method : 'Application::Application.NoteBottomCenterAnimateOnFinish()' */
void ApplicationApplication_NoteBottomCenterAnimateOnFinish( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->NoteBottomCenterState == -2 )
    _this->NoteBottomCenterState = -1;
  else
    if ( _this->NoteBottomCenterState == 0 )
    {
      _this->NoteBottomCenterState = -2;
      EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      3000 );
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      0 );
      _this->NoteBottomCenterAnimate.Value1 = _Const0038;
      _this->NoteBottomCenterAnimate.Value2 = _Const003A;
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      1 );
    }
    else
      if ( _this->NoteBottomCenterState == 1 )
      {
        _this->NoteBottomCenterState = -2;
        EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        3000 );
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        0 );
        _this->NoteBottomCenterAnimate.Value1 = _Const0038;
        _this->NoteBottomCenterAnimate.Value2 = _Const003A;
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        1 );
      }
      else
        if ( _this->NoteBottomCenterState == 2 )
        {
          _this->NoteBottomCenterState = -2;
          EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
          3000 );
          EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
          0 );
          _this->NoteBottomCenterAnimate.Value1 = _Const0038;
          _this->NoteBottomCenterAnimate.Value2 = _Const003A;
          EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
          1 );
        }
        else
          if ( _this->NoteBottomCenterState == 3 )
          {
            _this->NoteBottomCenterState = -2;
            EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            3000 );
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            0 );
            _this->NoteBottomCenterAnimate.Value1 = _Const0038;
            _this->NoteBottomCenterAnimate.Value2 = _Const003A;
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            1 );
          }
          else
            if ( _this->NoteBottomCenterState == 4 )
            {
              _this->NoteBottomCenterState = -2;
              EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
              10000 );
              EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
              0 );
              _this->NoteBottomCenterAnimate.Value1 = _Const0038;
              _this->NoteBottomCenterAnimate.Value2 = _Const003A;
              EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
              1 );
            }
            else
              if ( _this->NoteBottomCenterState == 5 )
              {
                _this->NoteBottomCenterState = -2;
                EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                10000 );
                EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                0 );
                _this->NoteBottomCenterAnimate.Value1 = _Const0038;
                _this->NoteBottomCenterAnimate.Value2 = _Const003A;
                EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                1 );
              }
}

/* 'C' function for method : 'Application::Application.BlackoutTimerOnTrigger()' */
void ApplicationApplication_BlackoutTimerOnTrigger( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->BlackoutCounter = _this->BlackoutCounter + 1;
  ApplicationApplication_BlackoutIndicatorUpdate( _this );
}

/* 'C' function for method : 'Application::Application.BlackoutIndicatorUpdate()' */
void ApplicationApplication_BlackoutIndicatorUpdate( ApplicationApplication _this )
{
  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
      == 0 )
  {
    if (( _this->BlackoutCounter >= 0 ) && ( _this->BlackoutCounter < 600 ))
      ViewsText_OnSetString( &_this->NoteUpLeftText, EwConcatString( EwConcatString( 
      EwConcatString( EwLoadString( &_Const0054 ), EwNewStringInt( _this->BlackoutCounter, 
      0, 10 )), EwLoadString( &_Const0055 )), (( _this->BlackoutCounter != 1 )? 
      EwLoadString( &_Const0056 ) : 0 )));
    else
      if (( _this->BlackoutCounter >= 600 ) && ( _this->BlackoutCounter < 7200 ))
        ViewsText_OnSetString( &_this->NoteUpLeftText, EwConcatString( EwConcatString( 
        EwConcatString( EwLoadString( &_Const0054 ), EwNewStringInt( _this->BlackoutCounter 
        / 60, 0, 10 )), EwLoadString( &_Const0057 )), (( _this->BlackoutCounter 
        != 1 )? EwLoadString( &_Const0056 ) : 0 )));
      else
        ViewsText_OnSetString( &_this->NoteUpLeftText, EwConcatString( EwConcatString( 
        EwConcatString( EwLoadString( &_Const0054 ), EwNewStringInt( _this->BlackoutCounter 
        / 3600, 0, 10 )), EwLoadString( &_Const0058 )), (( _this->BlackoutCounter 
        != 1 )? EwLoadString( &_Const0056 ) : 0 )));
  }
}

/* 'C' function for method : 'Application::Application.ClockTimerOnTrigger()' */
void ApplicationApplication_ClockTimerOnTrigger( ApplicationApplication _this, XObject 
  sender )
{
  CoreTime CurrentTime;
  XString Hour;
  XString Minute;
  XString Second;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CurrentTime = CoreTime_OnGetCurrentTime( &_this->ClockObject );
  Hour = EwNewStringInt( CurrentTime->Hour, 0, 10 );

  if ( CurrentTime->Hour < 10 )
    Hour = EwConcatString( EwLoadString( &_Const0059 ), Hour );

  Minute = EwNewStringInt( CurrentTime->Minute, 0, 10 );

  if ( CurrentTime->Minute < 10 )
    Minute = EwConcatString( EwLoadString( &_Const0059 ), Minute );

  Second = EwNewStringInt( CurrentTime->Second, 0, 10 );

  if ( CurrentTime->Second < 10 )
    Second = EwConcatString( EwLoadString( &_Const0059 ), Second );

  ViewsText_OnSetString( &_this->StatusBarClockText, EwConcatString( EwConcatString( 
  EwConcatString( EwConcatString( Hour, EwLoadString( &_Const005A )), Minute ), 
  EwLoadString( &_Const005A )), Second ));
}

/* 'C' function for method : 'Application::Application.LogicTimerOnTrigger()' */
void ApplicationApplication_LogicTimerOnTrigger( ApplicationApplication _this, XObject 
  sender )
{
  XUInt32 TimeUntilScreenOff;
  XInt32 DelayOn;
  XInt32 DelayOff;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->StartButtonState 
      == 1 )
  {
    XInt32 TimeBase = _this->SettingsLocked->Page1SettingC * 1000;
    XUInt32 TimeRemoteActive = 1 + (( TimeBase - ( CoreTimer_GetCurrentTime( &_this->StartTimer ) 
      - _this->StartTimer.Time )) / 1000 );
    ViewsText_OnSetString( &_this->GeneratorWirelessText, EwNewStringUInt( TimeRemoteActive, 
    0, 10 ));
  }
  else
    if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->StopButtonState 
        == 1 )
    {
      XInt32 TimeBase = _this->SettingsLocked->Page1SettingC * 1000;
      XUInt32 TimeRemoteActive = 1 + (( TimeBase - ( CoreTimer_GetCurrentTime( &_this->StopTimer ) 
        - _this->StopTimer.Time )) / 1000 );
      ViewsText_OnSetString( &_this->GeneratorWirelessText, EwNewStringUInt( TimeRemoteActive, 
      0, 10 ));
    }

  TimeUntilScreenOff = 1 + (( _this->BacklightTimer.Begin - ( CoreTimer_GetCurrentTime( 
  &_this->BacklightTimer ) - _this->BacklightTimer.Time )) / 1000 );

  if (((( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->BacklightState 
      == 1 ) && ( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) == 
      0 )) && ( ViewsImage_OnGetVisible( &_this->GeneratorErrorFuelLevel ) == 0 )) 
      && ( TimeUntilScreenOff < 60 ))
  {
    if ( _this->NoteBottomCenterState == -1 )
    {
      _this->NoteBottomCenterState = 8;
      EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      0 );
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      0 );
      _this->NoteBottomCenterAnimate.Value1 = _Const003A;
      _this->NoteBottomCenterAnimate.Value2 = _Const0038;
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      1 );

      if ( TimeUntilScreenOff < 600 )
        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwConcatString( 
        EwConcatString( EwConcatString( EwLoadString( &_Const005B ), EwNewStringUInt( 
        TimeUntilScreenOff, 0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilScreenOff 
        != 1 )? EwLoadString( &_Const0056 ) : 0 )));
      else
        if (( TimeUntilScreenOff >= 600 ) && ( TimeUntilScreenOff < 7200 ))
        {
          XInt32 Minutes = (XInt32)EwMathRound( TimeUntilScreenOff / 60.0f );
          ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwConcatString( 
          EwConcatString( EwConcatString( EwLoadString( &_Const005B ), EwNewStringInt( 
          Minutes, 0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilScreenOff 
          != 1 )? EwLoadString( &_Const0056 ) : 0 )));
        }
        else
        {
          XInt32 Hours = (XInt32)EwMathRound( TimeUntilScreenOff / 3600.0f );
          ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwConcatString( 
          EwConcatString( EwConcatString( EwLoadString( &_Const005B ), EwNewStringInt( 
          Hours, 0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilScreenOff != 
          1 )? EwLoadString( &_Const0056 ) : 0 )));
        }

      ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 0 );
      ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, _Const0015 );
      ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
    }
    else
      if ( _this->NoteBottomCenterState == 8 )
      {
        if ( TimeUntilScreenOff < 600 )
          ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwConcatString( 
          EwConcatString( EwConcatString( EwLoadString( &_Const005B ), EwNewStringUInt( 
          TimeUntilScreenOff, 0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilScreenOff 
          != 1 )? EwLoadString( &_Const0056 ) : 0 )));
        else
          if (( TimeUntilScreenOff >= 600 ) && ( TimeUntilScreenOff < 7200 ))
          {
            XInt32 Minutes = (XInt32)EwMathRound( TimeUntilScreenOff / 60.0f );
            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwConcatString( 
            EwConcatString( EwConcatString( EwLoadString( &_Const005B ), EwNewStringInt( 
            Minutes, 0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilScreenOff 
            != 1 )? EwLoadString( &_Const0056 ) : 0 )));
          }
          else
          {
            XInt32 Hours = (XInt32)EwMathRound( TimeUntilScreenOff / 3600.0f );
            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwConcatString( 
            EwConcatString( EwConcatString( EwLoadString( &_Const005B ), EwNewStringInt( 
            Hours, 0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilScreenOff 
            != 1 )? EwLoadString( &_Const0056 ) : 0 )));
          }
      }
  }

  if ( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) == 1 )
    EwIdleSignal( EwNewSlot( _this, ApplicationApplication_BacklightReset ), ((XObject)_this ));

  DelayOn = 0;
  DelayOff = 0;

  if ( _this->SettingsLocked->Page1SettingA == 0 )
  {
    ViewsRectangle_OnSetColor( &_this->StatusBarBackground, ApplicationColorWarning );
    ViewsText_OnSetString( &_this->StatusBarNote, EwLoadString( &_Const005C ));
  }
  else
  {
    CoreTime CurrentTime = CoreTime_OnGetCurrentTime( &_this->ClockObject );
    XInt32 MinuteOfDay = ( CurrentTime->Hour * 60 ) + CurrentTime->Minute;

    if (( MinuteOfDay >= _this->SettingsLocked->Page2SettingA ) && ( MinuteOfDay 
        < _this->SettingsLocked->Page2SettingB ))
    {
      if (( _this->LogicDayNightModeState == 0 ) && ( _this->NoteBottomCenterState 
          == -1 ))
      {
        _this->NoteBottomCenterState = 4;
        EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        0 );
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        0 );
        _this->NoteBottomCenterAnimate.Value1 = _Const003A;
        _this->NoteBottomCenterAnimate.Value2 = _Const0038;
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        1 );
        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwLoadString( 
        &_Const005D ));
        ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 0 );
        ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, _Const0015 );
        ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
      }

      _this->LogicDayNightModeState = 1;
      ViewsImage_OnSetBitmap( &_this->HouseNightDayMode, EwLoadResource( &ApplicationDayTime, 
      ResourcesBitmap ));
      DelayOn = _this->SettingsLocked->Page2SettingE;
      DelayOff = _this->SettingsLocked->Page2SettingF;
    }
    else
    {
      if (( _this->LogicDayNightModeState == 1 ) && ( _this->NoteBottomCenterState 
          == -1 ))
      {
        _this->NoteBottomCenterState = 5;
        EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        0 );
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        0 );
        _this->NoteBottomCenterAnimate.Value1 = _Const003A;
        _this->NoteBottomCenterAnimate.Value2 = _Const0038;
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
        1 );
        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, EwLoadString( 
        &_Const005E ));
        ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 0 );
        ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, _Const0015 );
        ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
      }

      _this->LogicDayNightModeState = 0;
      ViewsImage_OnSetBitmap( &_this->HouseNightDayMode, EwLoadResource( &ApplicationNightTime, 
      ResourcesBitmap ));
      DelayOn = _this->SettingsLocked->Page2SettingC;
      DelayOff = _this->SettingsLocked->Page2SettingD;
    }

    if ( _this->SettingsLocked->Page3SettingA == 1 )
    {
      XInt32 TimeBetweenAttempts;
      XInt32 TimeBetweenSessions;
      XInt32 SavingsOn;
      XInt32 SavingsOff;
      XBool TurnOnGenerator;
      XBool TurnOffGenerator;
      ViewsRectangle_OnSetColor( &_this->StatusBarBackground, ApplicationColorSavingMode );
      ViewsText_OnSetString( &_this->StatusBarNote, EwLoadString( &_Const005F ));

      if ( EwCompString( _this->NoteUpRightText.String, EwLoadString( &_Const0036 )) 
          != 0 )
      {
        ViewsRectangle_OnSetVisible( &_this->NoteUpRightBackground, 1 );
        ViewsShadow_OnSetVisible( &_this->NoteUpRightShadow, 1 );
        ViewsText_OnSetVisible( &_this->NoteUpRightText, 1 );
      }

      TimeBetweenAttempts = _this->SettingsLocked->Page1SettingH * 1000;
      TimeBetweenSessions = ( _this->SettingsLocked->Page1SettingF * 60 ) * 1000;
      SavingsOn = ( _this->SettingsLocked->Page3SettingB * 60 ) * 1000;
      SavingsOff = ( _this->SettingsLocked->Page3SettingC * 60 ) * 1000;
      TurnOnGenerator = 0;
      TurnOffGenerator = 0;

      if ( _this->LogicSavingsModeCycle == 0 )
        DelayOn = 60000;
      else
        DelayOn = 15000;

      if ( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) == 0 )
      {
        if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
            == 0 )
        {
          if ( _this->LogicSavingsModeState == 0 )
          {
            CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
            _this->LogicDelayState = 0;
            _this->LogicAttemptCounter = 1;
            _this->LogicSessionCounter = 1;

            if ( _this->LogicGenericTimerB.Enabled == 0 )
            {
              _this->LogicSavingsModeState = 1;
              CoreTimer_OnSetPeriod( &_this->LogicGenericTimerB, SavingsOn + 1000 );
              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerB, 1 );
            }
          }
          else
            if ( _this->LogicSavingsModeState == 1 )
            {
              XUInt32 TimeSavingsOn = (( SavingsOn + 1000 ) - ( CoreTimer_GetCurrentTime( 
                &_this->LogicGenericTimerB ) - _this->LogicGenericTimerB.Time )) 
                / 1000;

              if ( TimeSavingsOn < 600 )
                ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                EwLoadString( &_Const0060 ), EwNewStringInt( _this->LogicSavingsModeCycle 
                + 1, 0, 10 )), EwLoadString( &_Const0061 )), EwNewStringUInt( TimeSavingsOn, 
                0, 10 )), EwLoadString( &_Const0055 )), (( TimeSavingsOn != 1 )? 
                EwLoadString( &_Const0056 ) : 0 )));
              else
                if (( TimeSavingsOn >= 600 ) && ( TimeSavingsOn < 7200 ))
                {
                  XInt32 Minutes = (XInt32)EwMathRound( TimeSavingsOn / 60.0f );
                  ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                  EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                  EwLoadString( &_Const0060 ), EwNewStringInt( _this->LogicSavingsModeCycle 
                  + 1, 0, 10 )), EwLoadString( &_Const0061 )), EwNewStringInt( Minutes, 
                  0, 10 )), EwLoadString( &_Const0057 )), (( TimeSavingsOn != 1 )? 
                  EwLoadString( &_Const0056 ) : 0 )));
                }
                else
                {
                  XInt32 Hours = (XInt32)EwMathRound( TimeSavingsOn / 3600.0f );
                  ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                  EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                  EwLoadString( &_Const0060 ), EwNewStringInt( _this->LogicSavingsModeCycle 
                  + 1, 0, 10 )), EwLoadString( &_Const0061 )), EwNewStringInt( Hours, 
                  0, 10 )), EwLoadString( &_Const0058 )), (( TimeSavingsOn != 1 )? 
                  EwLoadString( &_Const0056 ) : 0 )));
                }

              if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
                  == 0 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
                  == 0 ))
                TurnOnGenerator = 1;

              if ( TimeSavingsOn == 0 )
              {
                CoreTimer_OnSetEnabled( &_this->LogicGenericTimerB, 0 );
                _this->LogicSavingsModeState = 2;
              }
            }
            else
              if ( _this->LogicSavingsModeState == 2 )
              {
                CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                _this->LogicDelayState = 0;
                _this->LogicAttemptCounter = 1;
                _this->LogicSessionCounter = 1;

                if ( _this->LogicGenericTimerB.Enabled == 0 )
                {
                  _this->LogicSavingsModeState = 3;
                  CoreTimer_OnSetPeriod( &_this->LogicGenericTimerB, SavingsOff 
                  + 1000 );
                  CoreTimer_OnSetEnabled( &_this->LogicGenericTimerB, 1 );
                }
              }
              else
                if ( _this->LogicSavingsModeState == 3 )
                {
                  XUInt32 TimeSavingsOn = (( SavingsOff + 1000 ) - ( CoreTimer_GetCurrentTime( 
                    &_this->LogicGenericTimerB ) - _this->LogicGenericTimerB.Time )) 
                    / 1000;

                  if ( TimeSavingsOn < 600 )
                    ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                    EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                    EwLoadString( &_Const0060 ), EwNewStringInt( _this->LogicSavingsModeCycle 
                    + 1, 0, 10 )), EwLoadString( &_Const0062 )), EwNewStringUInt( 
                    TimeSavingsOn, 0, 10 )), EwLoadString( &_Const0055 )), (( TimeSavingsOn 
                    != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                  else
                    if (( TimeSavingsOn >= 600 ) && ( TimeSavingsOn < 7200 ))
                    {
                      XInt32 Minutes = (XInt32)EwMathRound( _this->LogicSavingsModeCycle 
                        / 60.0f );
                      ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                      EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                      EwLoadString( &_Const0060 ), EwNewStringInt( _this->LogicSavingsModeCycle 
                      + 1, 0, 10 )), EwLoadString( &_Const0062 )), EwNewStringInt( 
                      Minutes, 0, 10 )), EwLoadString( &_Const0057 )), (( TimeSavingsOn 
                      != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                    }
                    else
                    {
                      XInt32 Hours = (XInt32)EwMathRound( _this->LogicSavingsModeCycle 
                        / 3600.0f );
                      ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                      EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                      EwLoadString( &_Const0060 ), EwNewStringInt( _this->LogicSavingsModeCycle 
                      + 1, 0, 10 )), EwLoadString( &_Const0062 )), EwNewStringInt( 
                      Hours, 0, 10 )), EwLoadString( &_Const0058 )), (( TimeSavingsOn 
                      != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                    }

                  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
                      == 1 )
                    TurnOffGenerator = 1;

                  if ( TimeSavingsOn == 0 )
                  {
                    _this->LogicSavingsModeCycle = _this->LogicSavingsModeCycle 
                    + 1;
                    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerB, 0 );
                    _this->LogicSavingsModeState = 0;
                  }
                }
        }
      }
      else
      {
        CoreTimer_OnSetEnabled( &_this->LogicGenericTimerB, 0 );

        if ( _this->LogicSavingsModeState == 1 )
          _this->LogicSavingsModeState = 0;

        if ( _this->LogicSavingsModeState == 3 )
          _this->LogicSavingsModeState = 2;
      }

      if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
          == 1 )
      {
        if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
            == 1 )
          TurnOffGenerator = 1;
        else
        {
          CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
          _this->LogicDelayState = 0;
          _this->LogicAttemptCounter = 1;
          _this->LogicSessionCounter = 1;
        }

        CoreTimer_OnSetEnabled( &_this->LogicGenericTimerB, 0 );
        _this->LogicSavingsModeState = 0;
        _this->LogicSavingsModeCycle = 0;
      }

      if ( TurnOnGenerator == 1 )
      {
        if (( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) == 0 ) 
            && ( ViewsImage_OnGetVisible( &_this->GeneratorErrorFuelLevel ) == 0 ))
        {
          if ( _this->NoteBottomCenterState == -1 )
          {
            CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
            _this->LogicAttemptCounter = 1;
            _this->LogicSessionCounter = 1;
            _this->LogicDelayState = 0;
            _this->NoteBottomCenterState = 6;
            EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            0 );
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            0 );
            _this->NoteBottomCenterAnimate.Value1 = _Const003A;
            _this->NoteBottomCenterAnimate.Value2 = _Const0039;
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            1 );
            ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
            ApplicationColorGeneratorBackup );
            ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
          }

          if ( _this->LogicDelayState == 0 )
          {
            if ( _this->LogicGenericTimerA.Enabled == 0 )
            {
              _this->LogicDelayState = 1;
              CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, DelayOn + 1000 );
              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
            }
          }
          else
            if ( _this->LogicDelayState == 1 )
            {
              XUInt32 TimeUntilTurningOn = (( DelayOn + 1000 ) - ( CoreTimer_GetCurrentTime( 
                &_this->LogicGenericTimerA ) - _this->LogicGenericTimerA.Time )) 
                / 1000;

              if ( _this->NoteBottomCenterState == 6 )
              {
                if ( TimeUntilTurningOn < 600 )
                  ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                  EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                  &_Const0063 ), EwNewStringUInt( TimeUntilTurningOn, 0, 10 )), 
                  EwLoadString( &_Const0055 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                  &_Const0056 ) : 0 )));
                else
                  if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn < 7200 ))
                  {
                    XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn / 60.0f );
                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0063 ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                    &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                    &_Const0056 ) : 0 )));
                  }
                  else
                  {
                    XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn / 3600.0f );
                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0063 ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                    &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                    &_Const0056 ) : 0 )));
                  }

                ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0064 ), 
                EwNewStringInt( _this->LogicSessionCounter, 0, 10 )), EwLoadString( 
                &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                0, 10 )));
              }

              if ( TimeUntilTurningOn == 0 )
              {
                CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                _this->LogicDelayState = 2;
              }
            }
            else
              if ( _this->LogicDelayState == 3 )
              {
                if ( _this->LogicGenericTimerA.Enabled == 0 )
                {
                  _this->LogicDelayState = 4;
                  CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenSessions 
                  + 1000 );
                  CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                }
              }
              else
                if ( _this->LogicDelayState == 4 )
                {
                  XUInt32 TimeUntilTurningOn = (( TimeBetweenSessions + 1000 ) - 
                    ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) - _this->LogicGenericTimerA.Time )) 
                    / 1000;

                  if ( _this->NoteBottomCenterState == 6 )
                  {
                    if ( TimeUntilTurningOn < 600 )
                      ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                      EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                      &_Const0063 ), EwNewStringUInt( TimeUntilTurningOn, 0, 10 )), 
                      EwLoadString( &_Const0055 )), (( TimeUntilTurningOn != 1 )? 
                      EwLoadString( &_Const0056 ) : 0 )));
                    else
                      if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                          < 7200 ))
                      {
                        XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                          / 60.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const0063 ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                        &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }
                      else
                      {
                        XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn / 
                          3600.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const0063 ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                        &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }

                    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 0, 
                    10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                    0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                    0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                    0, 10 )));
                  }

                  if ( TimeUntilTurningOn == 0 )
                  {
                    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                    _this->LogicDelayState = 5;
                  }
                }
                else
                  if ( _this->LogicDelayState == 6 )
                  {
                    XUInt32 TimeUntilErrorState = (( TimeBetweenAttempts + 1000 ) 
                      - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                      - _this->LogicGenericTimerA.Time )) / 1000;

                    if ( TimeUntilErrorState == 0 )
                    {
                      CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                      CoreRectView__OnSetBounds( &_this->GeneratorErrorStartStop, 
                      _Const0067 );
                      ViewsImage_OnSetVisible( &_this->GeneratorErrorStartStop, 
                      1 );
                      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorErrorAnimation, 
                      1 );

                      if ( _this->NoteBottomCenterState == 6 )
                      {
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwLoadString( &_Const0068 ));
                        ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                        EwLoadString( &_Const0069 ));
                      }

                      ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
                      ApplicationColorWarning );
                      _this->GeneratorErrorState = 0;
                      ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                      EwConcatString( EwLoadString( &_Const0060 ), EwNewStringInt( 
                      _this->LogicSavingsModeCycle + 1, 0, 10 )), EwLoadString( 
                      &_Const006A )));
                    }
                    else
                      if ( _this->NoteBottomCenterState == 6 )
                      {
                        if ( TimeUntilErrorState < 600 )
                          ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                          EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                          EwLoadString( &_Const006B ), EwNewStringUInt( TimeUntilErrorState, 
                          0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilErrorState 
                          != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                          &_Const006C )));
                        else
                          if (( TimeUntilErrorState >= 600 ) && ( TimeUntilErrorState 
                              < 7200 ))
                          {
                            XInt32 Minutes = (XInt32)EwMathRound( TimeUntilErrorState 
                              / 60.0f );
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwLoadString( &_Const006B ), EwNewStringInt( Minutes, 
                            0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilErrorState 
                            != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                            &_Const006C )));
                          }
                          else
                          {
                            XInt32 Hours = (XInt32)EwMathRound( TimeUntilErrorState 
                              / 3600.0f );
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwLoadString( &_Const006B ), EwNewStringInt( Hours, 
                            0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilErrorState 
                            != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                            &_Const006C )));
                          }

                        ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                        EwLoadString( &_Const006D ));
                      }
                  }
                  else
                    if (( _this->LogicGenericTimerA.Enabled == 0 ) && ( _this->LogicAttemptCounter 
                        <= _this->SettingsLocked->Page1SettingG ))
                    {
                      CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenAttempts 
                      + 1000 );
                      CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                      EwSignal( EwNewSlot( _this, ApplicationApplication_BacklightOn ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueSettingsClose ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueEventsClose ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_StartOnPress ), 
                        ((XObject)_this ));
                    }
                    else
                      if ( _this->LogicGenericTimerA.Enabled == 1 )
                      {
                        XUInt32 TimeUntilTurningOn = (( TimeBetweenAttempts + 1000 ) 
                          - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                          - _this->LogicGenericTimerA.Time )) / 1000;

                        if (( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG ) 
                            && ( _this->LogicSessionCounter == _this->SettingsLocked->Page1SettingE ))
                        {
                          if ( _this->NoteBottomCenterState == 6 )
                          {
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwLoadString( &_Const006E ));
                            ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                            EwLoadString( &_Const006D ));
                          }
                        }
                        else
                          if ( _this->NoteBottomCenterState == 6 )
                          {
                            if ( TimeUntilTurningOn < 600 )
                              ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                              EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                              &_Const0063 ), EwNewStringUInt( TimeUntilTurningOn, 
                              0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilTurningOn 
                              != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                            else
                              if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                                  < 7200 ))
                              {
                                XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                                  / 60.0f );
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwLoadString( &_Const0063 ), EwNewStringInt( Minutes, 
                                0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilTurningOn 
                                != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                              }
                              else
                              {
                                XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn 
                                  / 3600.0f );
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwLoadString( &_Const0063 ), EwNewStringInt( Hours, 
                                0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilTurningOn 
                                != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                              }

                            ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                            &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 
                            0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                            _this->SettingsLocked->Page1SettingE, 0, 10 )), EwLoadString( 
                            &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                            0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                            _this->SettingsLocked->Page1SettingG, 0, 10 )));
                          }

                        if ( TimeUntilTurningOn == 0 )
                        {
                          CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );

                          if ( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG )
                          {
                            if ( _this->LogicSessionCounter < _this->SettingsLocked->Page1SettingE )
                            {
                              _this->LogicSessionCounter = _this->LogicSessionCounter 
                              + 1;
                              _this->LogicAttemptCounter = 1;
                              _this->LogicDelayState = 3;
                            }
                            else
                            {
                              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                              0 );
                              CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, 
                              TimeBetweenAttempts + 1000 );
                              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                              1 );
                              _this->LogicDelayState = 6;
                            }
                          }
                          else
                            _this->LogicAttemptCounter = _this->LogicAttemptCounter 
                            + 1;
                        }
                      }
        }
      }
      else
        if (( TurnOffGenerator == 1 ) && ( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) 
            == 0 ))
        {
          if ( _this->NoteBottomCenterState == -1 )
          {
            CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
            _this->LogicAttemptCounter = 1;
            _this->LogicSessionCounter = 1;
            _this->LogicDelayState = 0;
            _this->NoteBottomCenterState = 7;
            EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            0 );
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            0 );
            _this->NoteBottomCenterAnimate.Value1 = _Const003A;
            _this->NoteBottomCenterAnimate.Value2 = _Const0039;
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            1 );
            ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
            ApplicationColorGeneratorBackup );
            ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
          }

          if ( _this->LogicDelayState == 0 )
          {
            if ( _this->LogicGenericTimerA.Enabled == 0 )
            {
              _this->LogicDelayState = 1;
              CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, 16000 );
              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
            }
          }
          else
            if ( _this->LogicDelayState == 1 )
            {
              XUInt32 TimeUntilTurningOn;

              if ( _this->NoteBottomCenterState == -1 )
              {
                _this->NoteBottomCenterState = 7;
                EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                0 );
                EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                0 );
                _this->NoteBottomCenterAnimate.Value1 = _Const003A;
                _this->NoteBottomCenterAnimate.Value2 = _Const0039;
                EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                1 );
                ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
                ApplicationColorGeneratorBackup );
                ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, 
                _Const0001 );
              }

              TimeUntilTurningOn = ( 16000 - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
              - _this->LogicGenericTimerA.Time )) / 1000;

              if ( _this->NoteBottomCenterState == 7 )
              {
                if ( TimeUntilTurningOn < 600 )
                  ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                  EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                  &_Const006F ), EwNewStringUInt( TimeUntilTurningOn, 0, 10 )), 
                  EwLoadString( &_Const0055 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                  &_Const0056 ) : 0 )));
                else
                  if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn < 7200 ))
                  {
                    XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn / 60.0f );
                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const006F ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                    &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                    &_Const0056 ) : 0 )));
                  }
                  else
                  {
                    XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn / 3600.0f );
                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const006F ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                    &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                    &_Const0056 ) : 0 )));
                  }

                ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0064 ), 
                EwNewStringInt( _this->LogicSessionCounter, 0, 10 )), EwLoadString( 
                &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                0, 10 )));
              }

              if ( TimeUntilTurningOn == 0 )
              {
                CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                _this->LogicDelayState = 2;
              }
            }
            else
              if ( _this->LogicDelayState == 3 )
              {
                if ( _this->LogicGenericTimerA.Enabled == 0 )
                {
                  _this->LogicDelayState = 4;
                  CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenSessions 
                  + 1000 );
                  CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                }
              }
              else
                if ( _this->LogicDelayState == 4 )
                {
                  XUInt32 TimeUntilTurningOn = (( TimeBetweenSessions + 1000 ) - 
                    ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) - _this->LogicGenericTimerA.Time )) 
                    / 1000;

                  if ( _this->NoteBottomCenterState == 7 )
                  {
                    if ( TimeUntilTurningOn < 600 )
                      ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                      EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                      &_Const006F ), EwNewStringUInt( TimeUntilTurningOn, 0, 10 )), 
                      EwLoadString( &_Const0055 )), (( TimeUntilTurningOn != 1 )? 
                      EwLoadString( &_Const0056 ) : 0 )));
                    else
                      if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                          < 7200 ))
                      {
                        XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                          / 60.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const006F ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                        &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }
                      else
                      {
                        XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn / 
                          3600.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const006F ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                        &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }

                    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 0, 
                    10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                    0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                    0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                    0, 10 )));
                  }

                  if ( TimeUntilTurningOn == 0 )
                  {
                    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                    _this->LogicDelayState = 5;
                  }
                }
                else
                  if ( _this->LogicDelayState == 6 )
                  {
                    if (( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) 
                        == 0 ) && ( ViewsImage_OnGetVisible( &_this->GeneratorErrorFuelLevel ) 
                        == 0 ))
                    {
                      XUInt32 TimeUntilErrorState = (( TimeBetweenAttempts + 1000 ) 
                        - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                        - _this->LogicGenericTimerA.Time )) / 1000;

                      if ( TimeUntilErrorState == 0 )
                      {
                        CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                        CoreRectView__OnSetBounds( &_this->GeneratorErrorStartStop, 
                        _Const001A );
                        ViewsImage_OnSetVisible( &_this->GeneratorErrorStartStop, 
                        1 );
                        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorErrorAnimation, 
                        1 );

                        if ( _this->NoteBottomCenterState == 7 )
                        {
                          ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                          EwLoadString( &_Const0070 ));
                          ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                          EwLoadString( &_Const0071 ));
                        }

                        ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
                        ApplicationColorWarning );
                        _this->GeneratorErrorState = 1;
                        ViewsText_OnSetString( &_this->NoteUpRightText, EwConcatString( 
                        EwConcatString( EwLoadString( &_Const0060 ), EwNewStringInt( 
                        _this->LogicSavingsModeCycle + 1, 0, 10 )), EwLoadString( 
                        &_Const006A )));
                      }
                      else
                        if ( _this->NoteBottomCenterState == 7 )
                        {
                          if ( TimeUntilErrorState < 600 )
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwLoadString( &_Const006B ), EwNewStringUInt( TimeUntilErrorState, 
                            0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilErrorState 
                            != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                            &_Const006C )));
                          else
                            if (( TimeUntilErrorState >= 600 ) && ( TimeUntilErrorState 
                                < 7200 ))
                            {
                              XInt32 Minutes = (XInt32)EwMathRound( TimeUntilErrorState 
                                / 60.0f );
                              ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                              EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                              EwLoadString( &_Const006B ), EwNewStringInt( Minutes, 
                              0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilErrorState 
                              != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                              &_Const006C )));
                            }
                            else
                            {
                              XInt32 Hours = (XInt32)EwMathRound( TimeUntilErrorState 
                                / 3600.0f );
                              ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                              EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                              EwLoadString( &_Const006B ), EwNewStringInt( Hours, 
                              0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilErrorState 
                              != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                              &_Const006C )));
                            }

                          ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                          EwLoadString( &_Const006D ));
                        }
                    }
                  }
                  else
                    if (( _this->LogicGenericTimerA.Enabled == 0 ) && ( _this->LogicAttemptCounter 
                        <= _this->SettingsLocked->Page1SettingG ))
                    {
                      CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenAttempts 
                      + 1000 );
                      CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                      EwSignal( EwNewSlot( _this, ApplicationApplication_BacklightOn ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueSettingsClose ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueEventsClose ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_StopOnPress ), 
                        ((XObject)_this ));
                    }
                    else
                      if ( _this->LogicGenericTimerA.Enabled == 1 )
                      {
                        XUInt32 TimeUntilTurningOn = (( TimeBetweenAttempts + 1000 ) 
                          - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                          - _this->LogicGenericTimerA.Time )) / 1000;

                        if (( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG ) 
                            && ( _this->LogicSessionCounter == _this->SettingsLocked->Page1SettingE ))
                        {
                          if ( _this->NoteBottomCenterState == 7 )
                          {
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwLoadString( &_Const0072 ));
                            ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                            EwLoadString( &_Const006D ));
                          }
                        }
                        else
                          if ( _this->NoteBottomCenterState == 7 )
                          {
                            if ( TimeUntilTurningOn < 600 )
                              ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                              EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                              &_Const006F ), EwNewStringUInt( TimeUntilTurningOn, 
                              0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilTurningOn 
                              != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                            else
                              if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                                  < 7200 ))
                              {
                                XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                                  / 60.0f );
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwLoadString( &_Const006F ), EwNewStringInt( Minutes, 
                                0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilTurningOn 
                                != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                              }
                              else
                              {
                                XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn 
                                  / 3600.0f );
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwLoadString( &_Const006F ), EwNewStringInt( Hours, 
                                0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilTurningOn 
                                != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                              }

                            ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                            &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 
                            0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                            _this->SettingsLocked->Page1SettingE, 0, 10 )), EwLoadString( 
                            &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                            0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                            _this->SettingsLocked->Page1SettingG, 0, 10 )));
                          }

                        if ( TimeUntilTurningOn == 0 )
                        {
                          CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );

                          if ( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG )
                          {
                            if ( _this->LogicSessionCounter < _this->SettingsLocked->Page1SettingE )
                            {
                              _this->LogicSessionCounter = _this->LogicSessionCounter 
                              + 1;
                              _this->LogicAttemptCounter = 1;
                              _this->LogicDelayState = 3;
                            }
                            else
                            {
                              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                              0 );
                              CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, 
                              TimeBetweenAttempts + 1000 );
                              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                              1 );
                              _this->LogicDelayState = 6;
                            }
                          }
                          else
                            _this->LogicAttemptCounter = _this->LogicAttemptCounter 
                            + 1;
                        }
                      }
        }
    }
    else
    {
      XInt32 TimeBetweenAttempts;
      XInt32 TimeBetweenSessions;
      ViewsRectangle_OnSetColor( &_this->StatusBarBackground, _Const000A );
      ViewsText_OnSetString( &_this->StatusBarNote, 0 );
      ViewsRectangle_OnSetVisible( &_this->NoteUpRightBackground, 0 );
      ViewsShadow_OnSetVisible( &_this->NoteUpRightShadow, 0 );
      ViewsText_OnSetVisible( &_this->NoteUpRightText, 0 );
      DelayOn = ( DelayOn * 60 ) * 1000;
      DelayOff = ( DelayOff * 60 ) * 1000;
      TimeBetweenAttempts = _this->SettingsLocked->Page1SettingH * 1000;
      TimeBetweenSessions = ( _this->SettingsLocked->Page1SettingF * 60 ) * 1000;

      if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
          == 0 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
          == 0 ))
      {
        if (( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) == 0 ) 
            && ( ViewsImage_OnGetVisible( &_this->GeneratorErrorFuelLevel ) == 0 ))
        {
          if ( _this->NoteBottomCenterState == -1 )
          {
            CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
            _this->LogicAttemptCounter = 1;
            _this->LogicSessionCounter = 1;
            _this->LogicDelayState = 0;
            _this->NoteBottomCenterState = 6;
            EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            0 );
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            0 );
            _this->NoteBottomCenterAnimate.Value1 = _Const003A;
            _this->NoteBottomCenterAnimate.Value2 = _Const0039;
            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
            1 );
            ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
            ApplicationColorGeneratorBackup );
            ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, _Const0001 );
          }

          if ( _this->LogicDelayState == 0 )
          {
            if ( _this->LogicGenericTimerA.Enabled == 0 )
            {
              _this->LogicDelayState = 1;
              CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, DelayOn + 1000 );
              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
            }
          }
          else
            if ( _this->LogicDelayState == 1 )
            {
              XUInt32 TimeUntilTurningOn = (( DelayOn + 1000 ) - ( CoreTimer_GetCurrentTime( 
                &_this->LogicGenericTimerA ) - _this->LogicGenericTimerA.Time )) 
                / 1000;

              if ( _this->NoteBottomCenterState == 6 )
              {
                if ( TimeUntilTurningOn < 600 )
                  ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                  EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                  &_Const0063 ), EwNewStringUInt( TimeUntilTurningOn, 0, 10 )), 
                  EwLoadString( &_Const0055 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                  &_Const0056 ) : 0 )));
                else
                  if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn < 7200 ))
                  {
                    XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn / 60.0f );
                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0063 ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                    &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                    &_Const0056 ) : 0 )));
                  }
                  else
                  {
                    XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn / 3600.0f );
                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0063 ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                    &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                    &_Const0056 ) : 0 )));
                  }

                ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0064 ), 
                EwNewStringInt( _this->LogicSessionCounter, 0, 10 )), EwLoadString( 
                &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                0, 10 )));
              }

              if ( TimeUntilTurningOn == 0 )
              {
                CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                _this->LogicDelayState = 2;
              }
            }
            else
              if ( _this->LogicDelayState == 3 )
              {
                if ( _this->LogicGenericTimerA.Enabled == 0 )
                {
                  _this->LogicDelayState = 4;
                  CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenSessions 
                  + 1000 );
                  CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                }
              }
              else
                if ( _this->LogicDelayState == 4 )
                {
                  XUInt32 TimeUntilTurningOn = (( TimeBetweenSessions + 1000 ) - 
                    ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) - _this->LogicGenericTimerA.Time )) 
                    / 1000;

                  if ( _this->NoteBottomCenterState == 6 )
                  {
                    if ( TimeUntilTurningOn < 600 )
                      ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                      EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                      &_Const0063 ), EwNewStringUInt( TimeUntilTurningOn, 0, 10 )), 
                      EwLoadString( &_Const0055 )), (( TimeUntilTurningOn != 1 )? 
                      EwLoadString( &_Const0056 ) : 0 )));
                    else
                      if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                          < 7200 ))
                      {
                        XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                          / 60.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const0063 ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                        &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }
                      else
                      {
                        XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn / 
                          3600.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const0063 ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                        &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }

                    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 0, 
                    10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                    0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                    0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                    0, 10 )));
                  }

                  if ( TimeUntilTurningOn == 0 )
                  {
                    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                    _this->LogicDelayState = 5;
                  }
                }
                else
                  if ( _this->LogicDelayState == 6 )
                  {
                    XUInt32 TimeUntilErrorState = (( TimeBetweenAttempts + 1000 ) 
                      - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                      - _this->LogicGenericTimerA.Time )) / 1000;

                    if ( TimeUntilErrorState == 0 )
                    {
                      CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                      CoreRectView__OnSetBounds( &_this->GeneratorErrorStartStop, 
                      _Const0067 );
                      ViewsImage_OnSetVisible( &_this->GeneratorErrorStartStop, 
                      1 );
                      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorErrorAnimation, 
                      1 );
                      ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                      EwLoadString( &_Const0068 ));
                      ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                      EwLoadString( &_Const0069 ));
                      ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
                      ApplicationColorWarning );
                      _this->GeneratorErrorState = 0;
                    }
                    else
                      if ( _this->NoteBottomCenterState == 6 )
                      {
                        if ( TimeUntilErrorState < 600 )
                          ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                          EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                          EwLoadString( &_Const006B ), EwNewStringUInt( TimeUntilErrorState, 
                          0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilErrorState 
                          != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                          &_Const006C )));
                        else
                          if (( TimeUntilErrorState >= 600 ) && ( TimeUntilErrorState 
                              < 7200 ))
                          {
                            XInt32 Minutes = (XInt32)EwMathRound( TimeUntilErrorState 
                              / 60.0f );
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwLoadString( &_Const006B ), EwNewStringInt( Minutes, 
                            0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilErrorState 
                            != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                            &_Const006C )));
                          }
                          else
                          {
                            XInt32 Hours = (XInt32)EwMathRound( TimeUntilErrorState 
                              / 3600.0f );
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwLoadString( &_Const006B ), EwNewStringInt( Hours, 
                            0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilErrorState 
                            != 1 )? EwLoadString( &_Const0056 ) : 0 )), EwLoadString( 
                            &_Const006C )));
                          }

                        ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                        EwLoadString( &_Const006D ));
                      }
                  }
                  else
                    if (( _this->LogicGenericTimerA.Enabled == 0 ) && ( _this->LogicAttemptCounter 
                        <= _this->SettingsLocked->Page1SettingG ))
                    {
                      CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenAttempts 
                      + 1000 );
                      CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                      EwSignal( EwNewSlot( _this, ApplicationApplication_BacklightOn ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueSettingsClose ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueEventsClose ), 
                        ((XObject)_this ));
                      EwSignal( EwNewSlot( _this, ApplicationApplication_StartOnPress ), 
                        ((XObject)_this ));
                    }
                    else
                      if ( _this->LogicGenericTimerA.Enabled == 1 )
                      {
                        XUInt32 TimeUntilTurningOn = (( TimeBetweenAttempts + 1000 ) 
                          - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                          - _this->LogicGenericTimerA.Time )) / 1000;

                        if (( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG ) 
                            && ( _this->LogicSessionCounter == _this->SettingsLocked->Page1SettingE ))
                        {
                          if ( _this->NoteBottomCenterState == 6 )
                          {
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwLoadString( &_Const006E ));
                            ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                            EwLoadString( &_Const006D ));
                          }
                        }
                        else
                          if ( _this->NoteBottomCenterState == 6 )
                          {
                            if ( TimeUntilTurningOn < 600 )
                              ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                              EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                              &_Const0063 ), EwNewStringUInt( TimeUntilTurningOn, 
                              0, 10 )), EwLoadString( &_Const0055 )), (( TimeUntilTurningOn 
                              != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                            else
                              if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                                  < 7200 ))
                              {
                                XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                                  / 60.0f );
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwLoadString( &_Const0063 ), EwNewStringInt( Minutes, 
                                0, 10 )), EwLoadString( &_Const0057 )), (( TimeUntilTurningOn 
                                != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                              }
                              else
                              {
                                XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn 
                                  / 3600.0f );
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwLoadString( &_Const0063 ), EwNewStringInt( Hours, 
                                0, 10 )), EwLoadString( &_Const0058 )), (( TimeUntilTurningOn 
                                != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                              }

                            ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                            EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                            &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 
                            0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                            _this->SettingsLocked->Page1SettingE, 0, 10 )), EwLoadString( 
                            &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                            0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                            _this->SettingsLocked->Page1SettingG, 0, 10 )));
                          }

                        if ( TimeUntilTurningOn == 0 )
                        {
                          CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );

                          if ( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG )
                          {
                            if ( _this->LogicSessionCounter < _this->SettingsLocked->Page1SettingE )
                            {
                              _this->LogicSessionCounter = _this->LogicSessionCounter 
                              + 1;
                              _this->LogicAttemptCounter = 1;
                              _this->LogicDelayState = 3;
                            }
                            else
                            {
                              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                              0 );
                              CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, 
                              TimeBetweenAttempts + 1000 );
                              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                              1 );
                              _this->LogicDelayState = 6;
                            }
                          }
                          else
                            _this->LogicAttemptCounter = _this->LogicAttemptCounter 
                            + 1;
                        }
                      }
        }
      }
      else
        if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
            == 0 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
            == 1 ))
        {
          CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
          _this->LogicDelayState = 0;
          _this->LogicAttemptCounter = 1;
          _this->LogicSessionCounter = 1;
        }
        else
          if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
              == 1 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
              == 0 ))
          {
            CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
            _this->LogicDelayState = 0;
            _this->LogicAttemptCounter = 1;
            _this->LogicSessionCounter = 1;
          }
          else
            if ((( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CityPowerState 
                == 1 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
                == 1 )) && ( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) 
                == 0 ))
            {
              if ( _this->NoteBottomCenterState == -1 )
              {
                CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                _this->LogicAttemptCounter = 1;
                _this->LogicSessionCounter = 1;
                _this->LogicDelayState = 0;
                _this->NoteBottomCenterState = 7;
                EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                0 );
                EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                0 );
                _this->NoteBottomCenterAnimate.Value1 = _Const003A;
                _this->NoteBottomCenterAnimate.Value2 = _Const0039;
                EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
                1 );
                ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
                ApplicationColorGeneratorBackup );
                ApplicationBottomNote_OnSetTextColor( &_this->NoteBottomCenter, 
                _Const0001 );
              }

              if ( _this->LogicDelayState == 0 )
              {
                if ( _this->LogicGenericTimerA.Enabled == 0 )
                {
                  _this->LogicDelayState = 1;
                  CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, DelayOff + 
                  1000 );
                  CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                }
              }
              else
                if ( _this->LogicDelayState == 1 )
                {
                  XUInt32 TimeUntilTurningOn = (( DelayOff + 1000 ) - ( CoreTimer_GetCurrentTime( 
                    &_this->LogicGenericTimerA ) - _this->LogicGenericTimerA.Time )) 
                    / 1000;

                  if ( _this->NoteBottomCenterState == 7 )
                  {
                    if ( TimeUntilTurningOn < 600 )
                      ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                      EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                      &_Const006F ), EwNewStringUInt( TimeUntilTurningOn, 0, 10 )), 
                      EwLoadString( &_Const0055 )), (( TimeUntilTurningOn != 1 )? 
                      EwLoadString( &_Const0056 ) : 0 )));
                    else
                      if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                          < 7200 ))
                      {
                        XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                          / 60.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const006F ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                        &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }
                      else
                      {
                        XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn / 
                          3600.0f );
                        ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const006F ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                        &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                        &_Const0056 ) : 0 )));
                      }

                    ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                    EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                    EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                    &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 0, 
                    10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                    0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                    0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                    0, 10 )));
                  }

                  if ( TimeUntilTurningOn == 0 )
                  {
                    CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                    _this->LogicDelayState = 2;
                  }
                }
                else
                  if ( _this->LogicDelayState == 3 )
                  {
                    if ( _this->LogicGenericTimerA.Enabled == 0 )
                    {
                      _this->LogicDelayState = 4;
                      CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenSessions 
                      + 1000 );
                      CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                    }
                  }
                  else
                    if ( _this->LogicDelayState == 4 )
                    {
                      XUInt32 TimeUntilTurningOn = (( TimeBetweenSessions + 1000 ) 
                        - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                        - _this->LogicGenericTimerA.Time )) / 1000;

                      if ( _this->NoteBottomCenterState == 7 )
                      {
                        if ( TimeUntilTurningOn < 600 )
                          ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                          EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                          &_Const006F ), EwNewStringUInt( TimeUntilTurningOn, 0, 
                          10 )), EwLoadString( &_Const0055 )), (( TimeUntilTurningOn 
                          != 1 )? EwLoadString( &_Const0056 ) : 0 )));
                        else
                          if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                              < 7200 ))
                          {
                            XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                              / 60.0f );
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                            &_Const006F ), EwNewStringInt( Minutes, 0, 10 )), EwLoadString( 
                            &_Const0057 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                            &_Const0056 ) : 0 )));
                          }
                          else
                          {
                            XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn 
                              / 3600.0f );
                            ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                            EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                            &_Const006F ), EwNewStringInt( Hours, 0, 10 )), EwLoadString( 
                            &_Const0058 )), (( TimeUntilTurningOn != 1 )? EwLoadString( 
                            &_Const0056 ) : 0 )));
                          }

                        ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                        EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
                        EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
                        &_Const0064 ), EwNewStringInt( _this->LogicSessionCounter, 
                        0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                        _this->SettingsLocked->Page1SettingE, 0, 10 )), EwLoadString( 
                        &_Const0066 )), EwNewStringInt( _this->LogicAttemptCounter, 
                        0, 10 )), EwLoadString( &_Const0065 )), EwNewStringInt( 
                        _this->SettingsLocked->Page1SettingG, 0, 10 )));
                      }

                      if ( TimeUntilTurningOn == 0 )
                      {
                        CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 0 );
                        _this->LogicDelayState = 5;
                      }
                    }
                    else
                      if ( _this->LogicDelayState == 6 )
                      {
                        if ( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) 
                            == 0 )
                        {
                          XUInt32 TimeUntilErrorState = (( TimeBetweenAttempts + 
                            1000 ) - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                            - _this->LogicGenericTimerA.Time )) / 1000;

                          if ( TimeUntilErrorState == 0 )
                          {
                            CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                            0 );
                            CoreRectView__OnSetBounds( &_this->GeneratorErrorStartStop, 
                            _Const001A );
                            ViewsImage_OnSetVisible( &_this->GeneratorErrorStartStop, 
                            1 );
                            EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorErrorAnimation, 
                            1 );

                            if ( _this->NoteBottomCenterState == 7 )
                            {
                              ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                              EwLoadString( &_Const0070 ));
                              ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                              EwLoadString( &_Const0071 ));
                            }

                            ApplicationBottomNote_OnSetBackgroundColor( &_this->NoteBottomCenter, 
                            ApplicationColorWarning );
                            _this->GeneratorErrorState = 1;
                          }
                          else
                            if ( _this->NoteBottomCenterState == 7 )
                            {
                              if ( TimeUntilErrorState < 600 )
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwConcatString( EwLoadString( &_Const006B ), EwNewStringUInt( 
                                TimeUntilErrorState, 0, 10 )), EwLoadString( &_Const0055 )), 
                                (( TimeUntilErrorState != 1 )? EwLoadString( &_Const0056 ) 
                                : 0 )), EwLoadString( &_Const006C )));
                              else
                                if (( TimeUntilErrorState >= 600 ) && ( TimeUntilErrorState 
                                    < 7200 ))
                                {
                                  XInt32 Minutes = (XInt32)EwMathRound( TimeUntilErrorState 
                                    / 60.0f );
                                  ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                  EwConcatString( EwConcatString( EwConcatString( 
                                  EwConcatString( EwLoadString( &_Const006B ), EwNewStringInt( 
                                  Minutes, 0, 10 )), EwLoadString( &_Const0057 )), 
                                  (( TimeUntilErrorState != 1 )? EwLoadString( &_Const0056 ) 
                                  : 0 )), EwLoadString( &_Const006C )));
                                }
                                else
                                {
                                  XInt32 Hours = (XInt32)EwMathRound( TimeUntilErrorState 
                                    / 3600.0f );
                                  ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                  EwConcatString( EwConcatString( EwConcatString( 
                                  EwConcatString( EwLoadString( &_Const006B ), EwNewStringInt( 
                                  Hours, 0, 10 )), EwLoadString( &_Const0058 )), 
                                  (( TimeUntilErrorState != 1 )? EwLoadString( &_Const0056 ) 
                                  : 0 )), EwLoadString( &_Const006C )));
                                }

                              ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                              EwLoadString( &_Const006D ));
                            }
                        }
                      }
                      else
                        if (( _this->LogicGenericTimerA.Enabled == 0 ) && ( _this->LogicAttemptCounter 
                            <= _this->SettingsLocked->Page1SettingG ))
                        {
                          CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, TimeBetweenAttempts 
                          + 1000 );
                          CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 1 );
                          EwSignal( EwNewSlot( _this, ApplicationApplication_BacklightOn ), 
                            ((XObject)_this ));
                          EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueSettingsClose ), 
                            ((XObject)_this ));
                          EwSignal( EwNewSlot( _this, ApplicationApplication_DialogueEventsClose ), 
                            ((XObject)_this ));
                          EwSignal( EwNewSlot( _this, ApplicationApplication_StopOnPress ), 
                            ((XObject)_this ));
                        }
                        else
                          if ( _this->LogicGenericTimerA.Enabled == 1 )
                          {
                            XUInt32 TimeUntilTurningOn = (( TimeBetweenAttempts 
                              + 1000 ) - ( CoreTimer_GetCurrentTime( &_this->LogicGenericTimerA ) 
                              - _this->LogicGenericTimerA.Time )) / 1000;

                            if (( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG ) 
                                && ( _this->LogicSessionCounter == _this->SettingsLocked->Page1SettingE ))
                            {
                              if ( _this->NoteBottomCenterState == 7 )
                              {
                                ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                EwLoadString( &_Const0072 ));
                                ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                                EwLoadString( &_Const006D ));
                              }
                            }
                            else
                              if ( _this->NoteBottomCenterState == 7 )
                              {
                                if ( TimeUntilTurningOn < 600 )
                                  ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                  EwConcatString( EwConcatString( EwConcatString( 
                                  EwLoadString( &_Const006F ), EwNewStringUInt( 
                                  TimeUntilTurningOn, 0, 10 )), EwLoadString( &_Const0055 )), 
                                  (( TimeUntilTurningOn != 1 )? EwLoadString( &_Const0056 ) 
                                  : 0 )));
                                else
                                  if (( TimeUntilTurningOn >= 600 ) && ( TimeUntilTurningOn 
                                      < 7200 ))
                                  {
                                    XInt32 Minutes = (XInt32)EwMathRound( TimeUntilTurningOn 
                                      / 60.0f );
                                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                    EwConcatString( EwConcatString( EwConcatString( 
                                    EwLoadString( &_Const006F ), EwNewStringInt( 
                                    Minutes, 0, 10 )), EwLoadString( &_Const0057 )), 
                                    (( TimeUntilTurningOn != 1 )? EwLoadString( 
                                    &_Const0056 ) : 0 )));
                                  }
                                  else
                                  {
                                    XInt32 Hours = (XInt32)EwMathRound( TimeUntilTurningOn 
                                      / 3600.0f );
                                    ApplicationBottomNote_OnSetFirstLine( &_this->NoteBottomCenter, 
                                    EwConcatString( EwConcatString( EwConcatString( 
                                    EwLoadString( &_Const006F ), EwNewStringInt( 
                                    Hours, 0, 10 )), EwLoadString( &_Const0058 )), 
                                    (( TimeUntilTurningOn != 1 )? EwLoadString( 
                                    &_Const0056 ) : 0 )));
                                  }

                                ApplicationBottomNote_OnSetSecondLine( &_this->NoteBottomCenter, 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwConcatString( EwConcatString( EwConcatString( 
                                EwConcatString( EwLoadString( &_Const0064 ), EwNewStringInt( 
                                _this->LogicSessionCounter, 0, 10 )), EwLoadString( 
                                &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingE, 
                                0, 10 )), EwLoadString( &_Const0066 )), EwNewStringInt( 
                                _this->LogicAttemptCounter, 0, 10 )), EwLoadString( 
                                &_Const0065 )), EwNewStringInt( _this->SettingsLocked->Page1SettingG, 
                                0, 10 )));
                              }

                            if ( TimeUntilTurningOn == 0 )
                            {
                              CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                              0 );

                              if ( _this->LogicAttemptCounter == _this->SettingsLocked->Page1SettingG )
                              {
                                if ( _this->LogicSessionCounter < _this->SettingsLocked->Page1SettingE )
                                {
                                  _this->LogicSessionCounter = _this->LogicSessionCounter 
                                  + 1;
                                  _this->LogicAttemptCounter = 1;
                                  _this->LogicDelayState = 3;
                                }
                                else
                                {
                                  CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                                  0 );
                                  CoreTimer_OnSetPeriod( &_this->LogicGenericTimerA, 
                                  TimeBetweenAttempts + 1000 );
                                  CoreTimer_OnSetEnabled( &_this->LogicGenericTimerA, 
                                  1 );
                                  _this->LogicDelayState = 6;
                                }
                              }
                              else
                                _this->LogicAttemptCounter = _this->LogicAttemptCounter 
                                + 1;
                            }
                          }
            }
    }

    if ( ViewsImage_OnGetVisible( &_this->GeneratorErrorStartStop ) == 1 )
    {
      if (( _this->GeneratorErrorState == 0 ) && ( EwGetAutoObject( &ApplicationDevice, 
          ApplicationDeviceClass )->GeneratorBackupState == 1 ))
      {
        ViewsImage_OnSetVisible( &_this->GeneratorErrorStartStop, 0 );
        EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorErrorAnimation, 
        0 );
        ViewsImage_OnSetOpacity( &_this->GeneratorErrorStartStop, 255 );
      }
      else
        if (( _this->GeneratorErrorState == 1 ) && ( EwGetAutoObject( &ApplicationDevice, 
            ApplicationDeviceClass )->GeneratorBackupState == 0 ))
        {
          ViewsImage_OnSetVisible( &_this->GeneratorErrorStartStop, 0 );
          EffectsEffect_OnSetEnabled((EffectsEffect)&_this->GeneratorErrorAnimation, 
          0 );
          ViewsImage_OnSetOpacity( &_this->GeneratorErrorStartStop, 255 );
        }
    }
  }
}

/* 'C' function for method : 'Application::Application.RuntimeTimerOnTrigger()' */
void ApplicationApplication_RuntimeTimerOnTrigger( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->GeneratorBackupState 
      == 1 ) && ( _this->SettingsLocked->Page3SettingE > 0 ))
    _this->SettingsLocked->Page3SettingE = _this->SettingsLocked->Page3SettingE 
    - 1;

  if ( _this->SettingsLocked->Page3SettingE < 0 )
    _this->SettingsLocked->Page3SettingE = 0;

  WidgetSetVerticalValueBar_OnSetMinValue( &_this->GeneratorFuelLevel, -4000 );
  WidgetSetVerticalValueBar_OnSetMaxValue( &_this->GeneratorFuelLevel, _this->SettingsLocked->Page3SettingD 
  + 3000 );
  WidgetSetVerticalValueBar_OnSetCurrentValue( &_this->GeneratorFuelLevel, _this->SettingsLocked->Page3SettingE );

  if ( _this->SettingsLocked->Page3SettingE < (XInt32)( _this->SettingsLocked->Page3SettingD 
      * 0.05f ))
  {
    ViewsImage_OnSetVisible( &_this->GeneratorErrorFuelLevel, 1 );

    if ( _this->NoteBottomCenterState != -1 )
    {
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      0 );
      _this->NoteBottomCenterAnimate.Value1 = _Const0038;
      _this->NoteBottomCenterAnimate.Value2 = _Const003A;
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->NoteBottomCenterAnimate, 
      1 );
    }
  }
  else
    ViewsImage_OnSetVisible( &_this->GeneratorErrorFuelLevel, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, StartTimer, Device, GeneratorErrorState, 
                 GeneratorErrorState, GeneratorErrorState, GeneratorErrorState, 
                 "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreGroup_GetClipping,
  ApplicationApplication_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::EventsDialogue' */
void ApplicationEventsDialogue__Init( ApplicationEventsDialogue _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationEventsDialogue );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->RemoteControlBackground, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->ButtonsShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ButtonsBackground, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->ButtonClose, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->CaptionShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->CaptionBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->CaptionText, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton2, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton3, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationEventsDialogue );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->RemoteControlBackground, _Const0073 );
  CoreRectView__OnSetBounds( &_this->ButtonsShadow, _Const0074 );
  ViewsShadow_OnSetRadiusBL( &_this->ButtonsShadow, 0 );
  ViewsShadow_OnSetRadiusBR( &_this->ButtonsShadow, 0 );
  ViewsShadow_OnSetRadiusTR( &_this->ButtonsShadow, 15 );
  ViewsShadow_OnSetRadiusTL( &_this->ButtonsShadow, 15 );
  CoreRectView__OnSetBounds( &_this->ButtonsBackground, _Const0074 );
  ViewsRectangle_OnSetRadiusBL( &_this->ButtonsBackground, 0 );
  ViewsRectangle_OnSetRadiusBR( &_this->ButtonsBackground, 0 );
  ViewsRectangle_OnSetRadiusTR( &_this->ButtonsBackground, 15 );
  ViewsRectangle_OnSetRadiusTL( &_this->ButtonsBackground, 15 );
  ViewsRectangle_OnSetColor( &_this->ButtonsBackground, _Const000A );
  CoreRectView__OnSetBounds( &_this->ButtonClose, _Const0075 );
  WidgetSetPushButton_OnSetLabel( &_this->ButtonClose, EwLoadString( &_Const0076 ));
  CoreRectView__OnSetBounds( &_this->CaptionShadow, _Const0077 );
  ViewsShadow_OnSetRadiusBL( &_this->CaptionShadow, 15 );
  ViewsShadow_OnSetRadiusBR( &_this->CaptionShadow, 15 );
  ViewsShadow_OnSetRadiusTL( &_this->CaptionShadow, 0 );
  CoreRectView__OnSetBounds( &_this->CaptionBackground, _Const0077 );
  ViewsRectangle_OnSetRadiusBL( &_this->CaptionBackground, 15 );
  ViewsRectangle_OnSetRadiusBR( &_this->CaptionBackground, 15 );
  ViewsRectangle_OnSetRadiusTL( &_this->CaptionBackground, 0 );
  ViewsRectangle_OnSetColor( &_this->CaptionBackground, _Const0078 );
  CoreRectView__OnSetBounds( &_this->CaptionText, _Const0079 );
  ViewsText_OnSetAutoSize( &_this->CaptionText, 1 );
  ViewsText_OnSetAlignment( &_this->CaptionText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const007A ));
  ViewsText_OnSetColor( &_this->CaptionText, _Const0001 );
  CoreRectView__OnSetBounds( &_this->PushButton2, _Const007B );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton2, 0 );
  CoreRectView__OnSetBounds( &_this->PushButton3, _Const007C );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton3, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RemoteControlBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonsShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonsBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonClose ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton3 ), 0 );
  _this->ButtonClose.OnRelease = EwNewSlot( _this, ApplicationEventsDialogue_OnClose );
  WidgetSetPushButton_OnSetAppearance( &_this->ButtonClose, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->CaptionText, EwLoadResource( &ApplicationFontHeader, 
  ResourcesFont ));
  _this->PushButton2.OnRelease = EwNewSlot( _this, ApplicationEventsDialogue_PageRight );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton2, EwLoadResource( &ApplicationArrowRight, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton2, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  _this->PushButton3.OnRelease = EwNewSlot( _this, ApplicationEventsDialogue_PageLeft );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton3, EwLoadResource( &ApplicationArrowLeft, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton3, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));

  /* Call the user defined constructor */
  ApplicationEventsDialogue_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::EventsDialogue' */
void ApplicationEventsDialogue__ReInit( ApplicationEventsDialogue _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->RemoteControlBackground );
  ViewsShadow__ReInit( &_this->ButtonsShadow );
  ViewsRectangle__ReInit( &_this->ButtonsBackground );
  WidgetSetPushButton__ReInit( &_this->ButtonClose );
  ViewsShadow__ReInit( &_this->CaptionShadow );
  ViewsRectangle__ReInit( &_this->CaptionBackground );
  ViewsText__ReInit( &_this->CaptionText );
  WidgetSetPushButton__ReInit( &_this->PushButton2 );
  WidgetSetPushButton__ReInit( &_this->PushButton3 );
}

/* Finalizer method for the class 'Application::EventsDialogue' */
void ApplicationEventsDialogue__Done( ApplicationEventsDialogue _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->RemoteControlBackground );
  ViewsShadow__Done( &_this->ButtonsShadow );
  ViewsRectangle__Done( &_this->ButtonsBackground );
  WidgetSetPushButton__Done( &_this->ButtonClose );
  ViewsShadow__Done( &_this->CaptionShadow );
  ViewsRectangle__Done( &_this->CaptionBackground );
  ViewsText__Done( &_this->CaptionText );
  WidgetSetPushButton__Done( &_this->PushButton2 );
  WidgetSetPushButton__Done( &_this->PushButton3 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationEventsDialogue_Init( ApplicationEventsDialogue _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::EventsDialogue.OnClose()' */
void ApplicationEventsDialogue_OnClose( ApplicationEventsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->Close, ((XObject)_this ));
}

/* 'C' function for method : 'Application::EventsDialogue.PageLeft()' */
void ApplicationEventsDialogue_PageLeft( ApplicationEventsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const007D ));
}

/* 'C' function for method : 'Application::EventsDialogue.PageRight()' */
void ApplicationEventsDialogue_PageRight( ApplicationEventsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const007E ));
}

/* Variants derived from the class : 'Application::EventsDialogue' */
EW_DEFINE_CLASS_VARIANTS( ApplicationEventsDialogue )
EW_END_OF_CLASS_VARIANTS( ApplicationEventsDialogue )

/* Virtual Method Table (VMT) for the class : 'Application::EventsDialogue' */
EW_DEFINE_CLASS( ApplicationEventsDialogue, CoreGroup, RemoteControlBackground, 
                 Close, Close, _.VMT, _.VMT, _.VMT, "Application::EventsDialogue" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationEventsDialogue )

/* Initializer for the class 'Application::SettingsDialogue' */
void ApplicationSettingsDialogue__Init( ApplicationSettingsDialogue _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsDialogue );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->RemoteControlBackground, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->ButtonsShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ButtonsBackground, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->ButtonClose, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->ButtonSave, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->ButtonReset, &_this->_.XObject, 0 );
  ViewsShadow__Init( &_this->CaptionShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->CaptionBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->CaptionText, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton2, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton3, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->SavedTimer, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->ResetTimer, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsDialogue );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->RemoteControlBackground, _Const0073 );
  CoreRectView__OnSetBounds( &_this->ButtonsShadow, _Const0074 );
  ViewsShadow_OnSetRadiusBL( &_this->ButtonsShadow, 0 );
  ViewsShadow_OnSetRadiusBR( &_this->ButtonsShadow, 0 );
  ViewsShadow_OnSetRadiusTR( &_this->ButtonsShadow, 15 );
  ViewsShadow_OnSetRadiusTL( &_this->ButtonsShadow, 15 );
  CoreRectView__OnSetBounds( &_this->ButtonsBackground, _Const0074 );
  ViewsRectangle_OnSetRadiusBL( &_this->ButtonsBackground, 0 );
  ViewsRectangle_OnSetRadiusBR( &_this->ButtonsBackground, 0 );
  ViewsRectangle_OnSetRadiusTR( &_this->ButtonsBackground, 15 );
  ViewsRectangle_OnSetRadiusTL( &_this->ButtonsBackground, 15 );
  ViewsRectangle_OnSetColor( &_this->ButtonsBackground, _Const000A );
  CoreRectView__OnSetBounds( &_this->ButtonClose, _Const007F );
  WidgetSetPushButton_OnSetLabel( &_this->ButtonClose, EwLoadString( &_Const0076 ));
  CoreRectView__OnSetBounds( &_this->ButtonSave, _Const0080 );
  WidgetSetPushButton_OnSetLabel( &_this->ButtonSave, EwLoadString( &_Const0081 ));
  CoreRectView__OnSetBounds( &_this->ButtonReset, _Const0082 );
  WidgetSetPushButton_OnSetLabel( &_this->ButtonReset, EwLoadString( &_Const0083 ));
  CoreRectView__OnSetBounds( &_this->CaptionShadow, _Const0077 );
  ViewsShadow_OnSetRadiusBL( &_this->CaptionShadow, 15 );
  ViewsShadow_OnSetRadiusBR( &_this->CaptionShadow, 15 );
  ViewsShadow_OnSetRadiusTL( &_this->CaptionShadow, 0 );
  CoreRectView__OnSetBounds( &_this->CaptionBackground, _Const0077 );
  ViewsRectangle_OnSetRadiusBL( &_this->CaptionBackground, 15 );
  ViewsRectangle_OnSetRadiusBR( &_this->CaptionBackground, 15 );
  ViewsRectangle_OnSetRadiusTL( &_this->CaptionBackground, 0 );
  ViewsRectangle_OnSetColor( &_this->CaptionBackground, _Const0078 );
  CoreRectView__OnSetBounds( &_this->CaptionText, _Const0079 );
  ViewsText_OnSetAutoSize( &_this->CaptionText, 1 );
  ViewsText_OnSetAlignment( &_this->CaptionText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0084 ));
  ViewsText_OnSetColor( &_this->CaptionText, _Const0001 );
  CoreRectView__OnSetBounds( &_this->PushButton2, _Const007B );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton2, 0 );
  CoreRectView__OnSetBounds( &_this->PushButton3, _Const007C );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton3, 0 );
  _this->PageNumber = 1;
  CoreTimer_OnSetPeriod( &_this->SavedTimer, 1500 );
  CoreTimer_OnSetPeriod( &_this->ResetTimer, 1500 );
  CoreGroup__Add( _this, ((CoreView)&_this->RemoteControlBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonsShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonsBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonClose ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonSave ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonReset ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton3 ), 0 );
  _this->ButtonClose.OnRelease = EwNewSlot( _this, ApplicationSettingsDialogue_OnClose );
  WidgetSetPushButton_OnSetAppearance( &_this->ButtonClose, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  _this->ButtonSave.OnRelease = EwNewSlot( _this, ApplicationSettingsDialogue_OnSave );
  WidgetSetPushButton_OnSetAppearance( &_this->ButtonSave, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  _this->ButtonReset.OnRelease = EwNewSlot( _this, ApplicationSettingsDialogue_OnReset );
  WidgetSetPushButton_OnSetAppearance( &_this->ButtonReset, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->CaptionText, EwLoadResource( &ApplicationFontHeader, 
  ResourcesFont ));
  _this->PushButton2.OnRelease = EwNewSlot( _this, ApplicationSettingsDialogue_PageRight );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton2, EwLoadResource( &ApplicationArrowRight, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton2, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  _this->PushButton3.OnRelease = EwNewSlot( _this, ApplicationSettingsDialogue_PageLeft );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton3, EwLoadResource( &ApplicationArrowLeft, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton3, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  _this->SettingsLocked = EwGetAutoObject( &ApplicationSettingsLocked, ApplicationSettingsClass );
  _this->Device = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  _this->SettingsModified = EwGetAutoObject( &ApplicationSettingsModified, ApplicationSettingsClass );
  _this->SavedTimer.OnTrigger = EwNewSlot( _this, ApplicationSettingsDialogue_OnSavedTimer );
  _this->ResetTimer.OnTrigger = EwNewSlot( _this, ApplicationSettingsDialogue_OnResetTimer );

  /* Call the user defined constructor */
  ApplicationSettingsDialogue_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsDialogue' */
void ApplicationSettingsDialogue__ReInit( ApplicationSettingsDialogue _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->RemoteControlBackground );
  ViewsShadow__ReInit( &_this->ButtonsShadow );
  ViewsRectangle__ReInit( &_this->ButtonsBackground );
  WidgetSetPushButton__ReInit( &_this->ButtonClose );
  WidgetSetPushButton__ReInit( &_this->ButtonSave );
  WidgetSetPushButton__ReInit( &_this->ButtonReset );
  ViewsShadow__ReInit( &_this->CaptionShadow );
  ViewsRectangle__ReInit( &_this->CaptionBackground );
  ViewsText__ReInit( &_this->CaptionText );
  WidgetSetPushButton__ReInit( &_this->PushButton2 );
  WidgetSetPushButton__ReInit( &_this->PushButton3 );
  CoreTimer__ReInit( &_this->SavedTimer );
  CoreTimer__ReInit( &_this->ResetTimer );
}

/* Finalizer method for the class 'Application::SettingsDialogue' */
void ApplicationSettingsDialogue__Done( ApplicationSettingsDialogue _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->RemoteControlBackground );
  ViewsShadow__Done( &_this->ButtonsShadow );
  ViewsRectangle__Done( &_this->ButtonsBackground );
  WidgetSetPushButton__Done( &_this->ButtonClose );
  WidgetSetPushButton__Done( &_this->ButtonSave );
  WidgetSetPushButton__Done( &_this->ButtonReset );
  ViewsShadow__Done( &_this->CaptionShadow );
  ViewsRectangle__Done( &_this->CaptionBackground );
  ViewsText__Done( &_this->CaptionText );
  WidgetSetPushButton__Done( &_this->PushButton2 );
  WidgetSetPushButton__Done( &_this->PushButton3 );
  CoreTimer__Done( &_this->SavedTimer );
  CoreTimer__Done( &_this->ResetTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsDialogue_Init( ApplicationSettingsDialogue _this, XHandle 
  aArg )
{
  ApplicationSettingsPage1 Outlet;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup__OnSetFocus( _this, 0 );
  Outlet = EwNewObject( ApplicationSettingsPage1, 0 );
  Outlet->HideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_HideControlElements );
  Outlet->UnhideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_UnhideControlElements );
  _this->Page = ((CoreGroup)Outlet );
  CoreGroup__PresentDialog( _this, _this->Page, ((EffectsTransition)EwGetAutoObject( 
  &ApplicationPresent, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->PageNumber = 1;
  ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0084 ));
}

/* 'C' function for method : 'Application::SettingsDialogue.OnClose()' */
void ApplicationSettingsDialogue_OnClose( ApplicationSettingsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingA = _this->SettingsLocked->Page1SettingA;
  _this->SettingsModified->Page1SettingB = _this->SettingsLocked->Page1SettingB;
  _this->SettingsModified->Page1SettingC = _this->SettingsLocked->Page1SettingC;
  _this->SettingsModified->Page1SettingD = _this->SettingsLocked->Page1SettingD;
  _this->SettingsModified->Page1SettingE = _this->SettingsLocked->Page1SettingE;
  _this->SettingsModified->Page1SettingF = _this->SettingsLocked->Page1SettingF;
  _this->SettingsModified->Page1SettingG = _this->SettingsLocked->Page1SettingG;
  _this->SettingsModified->Page1SettingH = _this->SettingsLocked->Page1SettingH;
  _this->SettingsModified->Page2SettingA = _this->SettingsLocked->Page2SettingA;
  _this->SettingsModified->Page2SettingB = _this->SettingsLocked->Page2SettingB;
  _this->SettingsModified->Page2SettingC = _this->SettingsLocked->Page2SettingC;
  _this->SettingsModified->Page2SettingD = _this->SettingsLocked->Page2SettingD;
  _this->SettingsModified->Page2SettingE = _this->SettingsLocked->Page2SettingE;
  _this->SettingsModified->Page2SettingF = _this->SettingsLocked->Page2SettingF;
  _this->SettingsModified->Page3SettingA = _this->SettingsLocked->Page3SettingA;
  _this->SettingsModified->Page3SettingB = _this->SettingsLocked->Page3SettingB;
  _this->SettingsModified->Page3SettingC = _this->SettingsLocked->Page3SettingC;
  _this->SettingsModified->Page3SettingD = _this->SettingsLocked->Page3SettingD;
  _this->SettingsModified->Page3SettingE = _this->SettingsLocked->Page3SettingE;

  if ( _this->PageNumber == 1 )
  {
    ApplicationSettingsPage1 Outlet = EwCastObject( _this->Page, ApplicationSettingsPage1 );
    ApplicationSettingsPage1_LoadModified( Outlet );
  }
  else
    if ( _this->PageNumber == 2 )
    {
      ApplicationSettingsPage2 Outlet = EwCastObject( _this->Page, ApplicationSettingsPage2 );
      ApplicationSettingsPage2_LoadModified( Outlet );
    }
    else
      if ( _this->PageNumber == 3 )
      {
        ApplicationSettingsPage3 Outlet = EwCastObject( _this->Page, ApplicationSettingsPage3 );
        ApplicationSettingsPage3_LoadModified( Outlet );
      }

  EwSignal( _this->Close, ((XObject)_this ));
}

/* 'C' function for method : 'Application::SettingsDialogue.OnReset()' */
void ApplicationSettingsDialogue_OnReset( ApplicationSettingsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingA = 1;
  _this->SettingsModified->Page1SettingB = 0;
  _this->SettingsModified->Page1SettingC = 4;
  _this->SettingsModified->Page1SettingD = 10;
  _this->SettingsModified->Page1SettingE = 2;
  _this->SettingsModified->Page1SettingF = 5;
  _this->SettingsModified->Page1SettingG = 3;
  _this->SettingsModified->Page1SettingH = 60;
  _this->SettingsModified->Page2SettingA = 0;
  _this->SettingsModified->Page2SettingB = 1440;
  _this->SettingsModified->Page2SettingC = 2;
  _this->SettingsModified->Page2SettingD = 4;
  _this->SettingsModified->Page2SettingE = 2;
  _this->SettingsModified->Page2SettingF = 4;
  _this->SettingsModified->Page3SettingA = 0;
  _this->SettingsModified->Page3SettingB = 30;
  _this->SettingsModified->Page3SettingC = 30;
  _this->SettingsModified->Page3SettingD = 36000;
  _this->SettingsModified->Page3SettingE = 36000;

  if ( _this->PageNumber == 1 )
  {
    ApplicationSettingsPage1 Outlet = EwCastObject( _this->Page, ApplicationSettingsPage1 );
    ApplicationSettingsPage1_LoadModified( Outlet );
  }
  else
    if ( _this->PageNumber == 2 )
    {
      ApplicationSettingsPage2 Outlet = EwCastObject( _this->Page, ApplicationSettingsPage2 );
      ApplicationSettingsPage2_LoadModified( Outlet );
    }
    else
      if ( _this->PageNumber == 3 )
      {
        ApplicationSettingsPage3 Outlet = EwCastObject( _this->Page, ApplicationSettingsPage3 );
        ApplicationSettingsPage3_LoadModified( Outlet );
      }

  WidgetSetPushButton_OnSetLabel( &_this->ButtonReset, EwLoadString( &_Const0085 ));
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonReset, 0 );
  CoreTimer_OnSetEnabled( &_this->ResetTimer, 1 );
}

/* 'C' function for method : 'Application::SettingsDialogue.PageLeft()' */
void ApplicationSettingsDialogue_PageLeft( ApplicationSettingsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->PageNumber == 1 )
  {
    ApplicationSettingsPage3 Outlet;
    _this->PageNumber = 3;
    Outlet = EwNewObject( ApplicationSettingsPage3, 0 );
    Outlet->HideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_HideControlElements );
    Outlet->UnhideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_UnhideControlElements );
    _this->Page = ((CoreGroup)Outlet );
    ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0086 ));
    CoreGroup__SwitchToDialog( _this, _this->Page, ((EffectsTransition)EwGetAutoObject( 
    &ApplicationSlideRight, EffectsSlideTransition )), 0, 0, 0, ((EffectsTransition)EwGetAutoObject( 
    &ApplicationSlideRight, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
    0 );
  }
  else
    if ( _this->PageNumber == 2 )
    {
      ApplicationSettingsPage1 Outlet;
      _this->PageNumber = 1;
      Outlet = EwNewObject( ApplicationSettingsPage1, 0 );
      Outlet->HideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_HideControlElements );
      Outlet->UnhideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_UnhideControlElements );
      _this->Page = ((CoreGroup)Outlet );
      ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0084 ));
      CoreGroup__SwitchToDialog( _this, _this->Page, ((EffectsTransition)EwGetAutoObject( 
      &ApplicationSlideRight, EffectsSlideTransition )), 0, 0, 0, ((EffectsTransition)EwGetAutoObject( 
      &ApplicationSlideRight, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
      0 );
    }
    else
      if ( _this->PageNumber == 3 )
      {
        ApplicationSettingsPage2 Outlet;
        _this->PageNumber = 2;
        Outlet = EwNewObject( ApplicationSettingsPage2, 0 );
        Outlet->HideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_HideControlElements );
        Outlet->UnhideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_UnhideControlElements );
        _this->Page = ((CoreGroup)Outlet );
        ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0087 ));
        CoreGroup__SwitchToDialog( _this, _this->Page, ((EffectsTransition)EwGetAutoObject( 
        &ApplicationSlideRight, EffectsSlideTransition )), 0, 0, 0, ((EffectsTransition)EwGetAutoObject( 
        &ApplicationSlideRight, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
        0 );
      }
}

/* 'C' function for method : 'Application::SettingsDialogue.PageRight()' */
void ApplicationSettingsDialogue_PageRight( ApplicationSettingsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->PageNumber == 1 )
  {
    ApplicationSettingsPage2 Outlet;
    _this->PageNumber = 2;
    Outlet = EwNewObject( ApplicationSettingsPage2, 0 );
    Outlet->HideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_HideControlElements );
    Outlet->UnhideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_UnhideControlElements );
    _this->Page = ((CoreGroup)Outlet );
    ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0087 ));
    CoreGroup__SwitchToDialog( _this, _this->Page, ((EffectsTransition)EwGetAutoObject( 
    &ApplicationSlideLeft, EffectsSlideTransition )), 0, 0, 0, ((EffectsTransition)EwGetAutoObject( 
    &ApplicationSlideLeft, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
    0 );
  }
  else
    if ( _this->PageNumber == 2 )
    {
      ApplicationSettingsPage3 Outlet;
      _this->PageNumber = 3;
      Outlet = EwNewObject( ApplicationSettingsPage3, 0 );
      Outlet->HideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_HideControlElements );
      Outlet->UnhideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_UnhideControlElements );
      _this->Page = ((CoreGroup)Outlet );
      ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0086 ));
      CoreGroup__SwitchToDialog( _this, _this->Page, ((EffectsTransition)EwGetAutoObject( 
      &ApplicationSlideLeft, EffectsSlideTransition )), 0, 0, 0, ((EffectsTransition)EwGetAutoObject( 
      &ApplicationSlideLeft, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
      0 );
    }
    else
      if ( _this->PageNumber == 3 )
      {
        ApplicationSettingsPage1 Outlet;
        _this->PageNumber = 1;
        Outlet = EwNewObject( ApplicationSettingsPage1, 0 );
        Outlet->HideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_HideControlElements );
        Outlet->UnhideControlElements = EwNewSlot( _this, ApplicationSettingsDialogue_UnhideControlElements );
        _this->Page = ((CoreGroup)Outlet );
        ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const0084 ));
        CoreGroup__SwitchToDialog( _this, _this->Page, ((EffectsTransition)EwGetAutoObject( 
        &ApplicationSlideLeft, EffectsSlideTransition )), 0, 0, 0, ((EffectsTransition)EwGetAutoObject( 
        &ApplicationSlideLeft, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
        0 );
      }
}

/* 'C' function for method : 'Application::SettingsDialogue.HideControlElements()' */
void ApplicationSettingsDialogue_HideControlElements( ApplicationSettingsDialogue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->ButtonClose, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ButtonSave, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ButtonReset, 0 );
  ViewsRectangle_OnSetVisible( &_this->ButtonsBackground, 0 );
  ViewsShadow_OnSetVisible( &_this->ButtonsShadow, 0 );
  ViewsRectangle_OnSetVisible( &_this->CaptionBackground, 0 );
  ViewsShadow_OnSetVisible( &_this->CaptionShadow, 0 );
  ViewsText_OnSetVisible( &_this->CaptionText, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->PushButton2, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->PushButton3, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonClose, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonSave, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonReset, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButton2, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButton3, 0 );
}

/* 'C' function for method : 'Application::SettingsDialogue.UnhideControlElements()' */
void ApplicationSettingsDialogue_UnhideControlElements( ApplicationSettingsDialogue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->ButtonClose, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ButtonSave, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ButtonReset, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ButtonClose, 1 );
  ViewsRectangle_OnSetVisible( &_this->ButtonsBackground, 1 );
  ViewsShadow_OnSetVisible( &_this->ButtonsShadow, 1 );
  ViewsRectangle_OnSetVisible( &_this->CaptionBackground, 1 );
  ViewsShadow_OnSetVisible( &_this->CaptionShadow, 1 );
  ViewsText_OnSetVisible( &_this->CaptionText, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->PushButton2, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->PushButton3, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonClose, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonSave, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonReset, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButton2, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButton3, 1 );
  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::SettingsDialogue.OnSave()' */
void ApplicationSettingsDialogue_OnSave( ApplicationSettingsDialogue _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_WriteSettingsToSd( _this->Device );
  WidgetSetPushButton_OnSetLabel( &_this->ButtonSave, EwLoadString( &_Const0088 ));
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonSave, 0 );
  CoreTimer_OnSetEnabled( &_this->SavedTimer, 1 );
}

/* 'C' function for method : 'Application::SettingsDialogue.OnSavedTimer()' */
void ApplicationSettingsDialogue_OnSavedTimer( ApplicationSettingsDialogue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreTimer_OnSetEnabled( &_this->SavedTimer, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonSave, 1 );
  WidgetSetPushButton_OnSetLabel( &_this->ButtonSave, EwLoadString( &_Const0081 ));
  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::SettingsDialogue.OnResetTimer()' */
void ApplicationSettingsDialogue_OnResetTimer( ApplicationSettingsDialogue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreTimer_OnSetEnabled( &_this->ResetTimer, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonReset, 1 );
  WidgetSetPushButton_OnSetLabel( &_this->ButtonReset, EwLoadString( &_Const0083 ));
  CoreGroup__OnSetFocus( _this, 0 );
}

/* Variants derived from the class : 'Application::SettingsDialogue' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsDialogue )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsDialogue )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsDialogue' */
EW_DEFINE_CLASS( ApplicationSettingsDialogue, CoreGroup, RemoteControlBackground, 
                 Page, Close, PageNumber, PageNumber, PageNumber, "Application::SettingsDialogue" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsDialogue )

/* Initializer for the class 'Application::SettingsPage1' */
void ApplicationSettingsPage1__Init( ApplicationSettingsPage1 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsPage1 );

  /* ... then construct all embedded objects */
  WidgetSetToggleButton__Init( &_this->ToggleButtonA, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextB, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayB, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButtonB, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextC, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayC, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderC, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextD, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayD, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderD, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextE, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayE, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderE, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextF, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayF, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderF, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextG, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayG, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderG, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextH, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayH, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderH, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->Timer, &_this->_.XObject, 0 );
  CoreTime__Init( &_this->Time, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsPage1 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0089 );
  CoreRectView__OnSetBounds( &_this->ToggleButtonA, _Const008A );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButtonA, EwLoadString( &_Const008B ));
  CoreRectView__OnSetBounds( &_this->TextB, _Const008C );
  ViewsText_OnSetAutoSize( &_this->TextB, 0 );
  ViewsText_OnSetAlignment( &_this->TextB, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextB, EwLoadString( &_Const008D ));
  ViewsText_OnSetColor( &_this->TextB, _Const008E );
  ViewsText_OnSetVisible( &_this->TextB, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayB, _Const008F );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayB, 0 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayB, 220 );
  CoreRectView__OnSetBounds( &_this->PushButtonB, _Const0090 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->PushButtonB, 0 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButtonB, EwLoadString( &_Const0091 ));
  CoreRectView__OnSetBounds( &_this->TextC, _Const0092 );
  ViewsText_OnSetAutoSize( &_this->TextC, 0 );
  ViewsText_OnSetAlignment( &_this->TextC, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextC, EwLoadString( &_Const0093 ));
  ViewsText_OnSetColor( &_this->TextC, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayC, _Const0094 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayC, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderC, _Const0095 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderC, 10 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderC, 5 );
  CoreRectView__OnSetBounds( &_this->TextD, _Const0096 );
  ViewsText_OnSetAutoSize( &_this->TextD, 0 );
  ViewsText_OnSetAlignment( &_this->TextD, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextD, EwLoadString( &_Const0097 ));
  ViewsText_OnSetColor( &_this->TextD, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayD, _Const0098 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayD, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderD, _Const0099 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderD, 120 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderD, 2 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderD, 10 );
  CoreRectView__OnSetBounds( &_this->TextE, _Const009A );
  ViewsText_OnSetAutoSize( &_this->TextE, 0 );
  ViewsText_OnSetAlignment( &_this->TextE, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextE, EwLoadString( &_Const009B ));
  ViewsText_OnSetColor( &_this->TextE, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayE, _Const009C );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayE, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderE, _Const009D );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderE, 5 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderE, 1 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderE, 2 );
  CoreRectView__OnSetBounds( &_this->TextF, _Const009E );
  ViewsText_OnSetAutoSize( &_this->TextF, 0 );
  ViewsText_OnSetAlignment( &_this->TextF, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextF, EwLoadString( &_Const009F ));
  ViewsText_OnSetColor( &_this->TextF, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayF, _Const00A0 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayF, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayF, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderF, _Const00A1 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderF, 15 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderF, 5 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderF, 10 );
  CoreRectView__OnSetBounds( &_this->TextG, _Const00A2 );
  ViewsText_OnSetAutoSize( &_this->TextG, 0 );
  ViewsText_OnSetAlignment( &_this->TextG, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextG, EwLoadString( &_Const00A3 ));
  ViewsText_OnSetColor( &_this->TextG, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayG, _Const00A4 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayG, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayG, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderG, _Const00A5 );
  WidgetSetHorizontalSlider_OnSetStepSize( &_this->HorizontalSliderG, 1 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderG, 5 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderG, 1 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderG, 3 );
  CoreRectView__OnSetBounds( &_this->TextH, _Const00A6 );
  ViewsText_OnSetAutoSize( &_this->TextH, 0 );
  ViewsText_OnSetAlignment( &_this->TextH, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextH, EwLoadString( &_Const00A7 ));
  ViewsText_OnSetColor( &_this->TextH, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayH, _Const00A8 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayH, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayH, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderH, _Const00A9 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderH, 120 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderH, 45 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderH, 60 );
  CoreTimer_OnSetPeriod( &_this->Timer, 100 );
  CoreTimer_OnSetBegin( &_this->Timer, 0 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->ToggleButtonA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextF ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayF ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderF ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextG ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayG ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderG ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextH ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayH ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderH ), 0 );
  _this->ToggleButtonA.OnSwitchOn = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeA );
  _this->ToggleButtonA.OnSwitchOff = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeA );
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButtonA, EwGetAutoObject( 
  &WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig ));
  ViewsText_OnSetFont( &_this->TextB, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->PushButtonB.OnPress = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeB );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButtonB, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->TextC, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderC.OnChange = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeC );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderC, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextD, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderD.OnChange = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeD );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderD, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextE, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderE.OnChange = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeE );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderE, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextF, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderF.OnChange = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeF );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderF, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextG, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderG.OnChange = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeG );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderG, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextH, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderH.OnChange = EwNewSlot( _this, ApplicationSettingsPage1_OnChangeH );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderH, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  _this->SettingsLocked = EwGetAutoObject( &ApplicationSettingsLocked, ApplicationSettingsClass );
  _this->SettingsModified = EwGetAutoObject( &ApplicationSettingsModified, ApplicationSettingsClass );
  _this->Timer.OnTrigger = EwNewSlot( _this, ApplicationSettingsPage1_UpdateClock );

  /* Call the user defined constructor */
  ApplicationSettingsPage1_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsPage1' */
void ApplicationSettingsPage1__ReInit( ApplicationSettingsPage1 _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  WidgetSetToggleButton__ReInit( &_this->ToggleButtonA );
  ViewsText__ReInit( &_this->TextB );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayB );
  WidgetSetPushButton__ReInit( &_this->PushButtonB );
  ViewsText__ReInit( &_this->TextC );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayC );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderC );
  ViewsText__ReInit( &_this->TextD );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayD );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderD );
  ViewsText__ReInit( &_this->TextE );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayE );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderE );
  ViewsText__ReInit( &_this->TextF );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayF );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderF );
  ViewsText__ReInit( &_this->TextG );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayG );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderG );
  ViewsText__ReInit( &_this->TextH );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayH );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderH );
  CoreTimer__ReInit( &_this->Timer );
  CoreTime__ReInit( &_this->Time );
}

/* Finalizer method for the class 'Application::SettingsPage1' */
void ApplicationSettingsPage1__Done( ApplicationSettingsPage1 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  WidgetSetToggleButton__Done( &_this->ToggleButtonA );
  ViewsText__Done( &_this->TextB );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayB );
  WidgetSetPushButton__Done( &_this->PushButtonB );
  ViewsText__Done( &_this->TextC );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayC );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderC );
  ViewsText__Done( &_this->TextD );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayD );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderD );
  ViewsText__Done( &_this->TextE );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayE );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderE );
  ViewsText__Done( &_this->TextF );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayF );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderF );
  ViewsText__Done( &_this->TextG );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayG );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderG );
  ViewsText__Done( &_this->TextH );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayH );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderH );
  CoreTimer__Done( &_this->Timer );
  CoreTime__Done( &_this->Time );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsPage1_Init( ApplicationSettingsPage1 _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup__OnSetFocus( _this, 0 );
  ApplicationSettingsPage1_LoadModified( _this );
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeA()' */
void ApplicationSettingsPage1_OnChangeA( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingA = _this->ToggleButtonA.Checked;
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeB()' */
void ApplicationSettingsPage1_OnChangeB( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  CoreTime CurrentTime;
  ApplicationDateTimePicker Picker;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CurrentTime = CoreTime_OnGetCurrentTime( &_this->Time );
  Picker = EwNewObject( ApplicationDateTimePicker, 0 );
  CoreRectView__OnSetBounds( Picker, _Const0089 );
  Picker->Close = EwNewSlot( _this, ApplicationSettingsPage1_CloseTimePickerB );
  ViewsText_OnSetString( &Picker->Text, EwLoadString( &_Const00AA ));
  ApplicationDateTimePicker_OnSetYear( Picker, CurrentTime->Year );
  ApplicationDateTimePicker_OnSetMonth( Picker, CurrentTime->Month );
  ApplicationDateTimePicker_OnSetDay( Picker, CurrentTime->Day );
  ApplicationDateTimePicker_OnSetHour( Picker, CurrentTime->Hour );
  ApplicationDateTimePicker_OnSetMinute( Picker, CurrentTime->Minute );
  ApplicationDateTimePicker_OnSetSecond( Picker, CurrentTime->Second );
  _this->TimePickerB = Picker;
  CoreGroup__Add( _this, ((CoreView)Picker ), 0 );
  EwSignal( _this->HideControlElements, ((XObject)_this ));
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeC()' */
void ApplicationSettingsPage1_OnChangeC( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingC = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderC );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderC ), 
  0, 10 ), EwLoadString( &_Const00AB )));
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeD()' */
void ApplicationSettingsPage1_OnChangeD( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingD = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderD );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderD ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeE()' */
void ApplicationSettingsPage1_OnChangeE( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingE = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderE );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwNewStringInt( 
  WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderE ), 0, 10 ));
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeF()' */
void ApplicationSettingsPage1_OnChangeF( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingF = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderF );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayF, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderF ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeG()' */
void ApplicationSettingsPage1_OnChangeG( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingG = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderG );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayG, EwNewStringInt( 
  WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderG ), 0, 10 ));
}

/* 'C' function for method : 'Application::SettingsPage1.OnChangeH()' */
void ApplicationSettingsPage1_OnChangeH( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page1SettingH = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderH );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayH, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderH ), 
  0, 10 ), EwLoadString( &_Const00AB )));
}

/* 'C' function for method : 'Application::SettingsPage1.CloseTimePickerB()' */
void ApplicationSettingsPage1_CloseTimePickerB( ApplicationSettingsPage1 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TimePickerB != 0 )
  {
    XString Hour = EwNewStringInt( ApplicationDateTimePicker_OnGetHour( _this->TimePickerB ), 
      0, 10 );
    XString Minute;
    XString Second;

    if ( ApplicationDateTimePicker_OnGetHour( _this->TimePickerB ) < 10 )
      Hour = EwConcatString( EwLoadString( &_Const0059 ), Hour );

    Minute = EwNewStringInt( ApplicationDateTimePicker_OnGetMinute( _this->TimePickerB ), 
    0, 10 );

    if ( ApplicationDateTimePicker_OnGetMinute( _this->TimePickerB ) < 10 )
      Minute = EwConcatString( EwLoadString( &_Const0059 ), Minute );

    Second = EwNewStringInt( ApplicationDateTimePicker_OnGetSecond( _this->TimePickerB ), 
    0, 10 );

    if ( ApplicationDateTimePicker_OnGetSecond( _this->TimePickerB ) < 10 )
      Second = EwConcatString( EwLoadString( &_Const0059 ), Second );

    ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwConcatString( 
    EwConcatString( EwConcatString( EwConcatString( Hour, EwLoadString( &_Const005A )), 
    Minute ), EwLoadString( &_Const005A )), Second ));
    CoreGroup__Remove( _this, ((CoreView)_this->TimePickerB ));
    _this->TimePickerB = 0;
  }

  ApplicationDeviceClass_OnSetRtcTime( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  _this->TimePickerB );
  EwSignal( _this->UnhideControlElements, ((XObject)_this ));
  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::SettingsPage1.LoadModified()' */
void ApplicationSettingsPage1_LoadModified( ApplicationSettingsPage1 _this )
{
  WidgetSetToggleButton_OnSetChecked( &_this->ToggleButtonA, _this->SettingsModified->Page1SettingA );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderC, _this->SettingsModified->Page1SettingC );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderD, _this->SettingsModified->Page1SettingD );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderE, _this->SettingsModified->Page1SettingE );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderF, _this->SettingsModified->Page1SettingF );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderG, _this->SettingsModified->Page1SettingG );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderH, _this->SettingsModified->Page1SettingH );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page1SettingC, 0, 10 ), EwLoadString( 
  &_Const00AB )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page1SettingD, 0, 10 ), EwLoadString( 
  &_Const00AC )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwNewStringInt( 
  _this->SettingsModified->Page1SettingE, 0, 10 ));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayF, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page1SettingF, 0, 10 ), EwLoadString( 
  &_Const00AC )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayG, EwNewStringInt( 
  _this->SettingsModified->Page1SettingG, 0, 10 ));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayH, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page1SettingH, 0, 10 ), EwLoadString( 
  &_Const00AB )));
}

/* 'C' function for method : 'Application::SettingsPage1.UpdateClock()' */
void ApplicationSettingsPage1_UpdateClock( ApplicationSettingsPage1 _this, XObject 
  sender )
{
  CoreTime CurrentTime;
  XString Year;
  XString Month;
  XString Day;
  XString Hour;
  XString Minute;
  XString Second;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CurrentTime = CoreTime_OnGetCurrentTime( &_this->Time );
  Year = EwNewStringInt( CurrentTime->Year, 0, 10 );

  if ( CurrentTime->Year < 10 )
    Year = EwConcatString( EwLoadString( &_Const0059 ), Year );

  Month = EwNewStringInt( CurrentTime->Month, 0, 10 );

  if ( CurrentTime->Month < 10 )
    Month = EwConcatString( EwLoadString( &_Const0059 ), Month );

  Day = EwNewStringInt( CurrentTime->Day, 0, 10 );

  if ( CurrentTime->Day < 10 )
    Day = EwConcatString( EwLoadString( &_Const0059 ), Day );

  Hour = EwNewStringInt( CurrentTime->Hour, 0, 10 );

  if ( CurrentTime->Hour < 10 )
    Hour = EwConcatString( EwLoadString( &_Const0059 ), Hour );

  Minute = EwNewStringInt( CurrentTime->Minute, 0, 10 );

  if ( CurrentTime->Minute < 10 )
    Minute = EwConcatString( EwLoadString( &_Const0059 ), Minute );

  Second = EwNewStringInt( CurrentTime->Second, 0, 10 );

  if ( CurrentTime->Second < 10 )
    Second = EwConcatString( EwLoadString( &_Const0059 ), Second );

  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwConcatString( 
  EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
  EwConcatString( EwConcatString( EwConcatString( EwConcatString( Year, EwLoadString( 
  &_Const00AD )), Month ), EwLoadString( &_Const00AD )), Day ), EwLoadString( &_Const00AE )), 
  Hour ), EwLoadString( &_Const005A )), Minute ), EwLoadString( &_Const005A )), 
  Second ));
}

/* Variants derived from the class : 'Application::SettingsPage1' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsPage1 )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsPage1 )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsPage1' */
EW_DEFINE_CLASS( ApplicationSettingsPage1, CoreGroup, ToggleButtonA, TimePickerB, 
                 UnhideControlElements, _.VMT, _.VMT, _.VMT, "Application::SettingsPage1" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsPage1 )

/* Initializer for the class 'Application::SettingsPage2' */
void ApplicationSettingsPage2__Init( ApplicationSettingsPage2 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsPage2 );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->TextA, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayA, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButtonA, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextB, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayB, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButtonB, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextC, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayC, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderC, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextD, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayD, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderD, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextE, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayE, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderE, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextF, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayF, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderF, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsPage2 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0089 );
  CoreRectView__OnSetBounds( &_this->TextA, _Const00AF );
  ViewsText_OnSetAutoSize( &_this->TextA, 0 );
  ViewsText_OnSetAlignment( &_this->TextA, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextA, EwLoadString( &_Const00B0 ));
  ViewsText_OnSetColor( &_this->TextA, _Const008E );
  ViewsText_OnSetVisible( &_this->TextA, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayA, _Const00B1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayA, 0 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayA, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayA, 85 );
  CoreRectView__OnSetBounds( &_this->PushButtonA, _Const00B2 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->PushButtonA, 0 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButtonA, EwLoadString( &_Const0091 ));
  CoreRectView__OnSetBounds( &_this->TextB, _Const0092 );
  ViewsText_OnSetAutoSize( &_this->TextB, 0 );
  ViewsText_OnSetAlignment( &_this->TextB, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextB, EwLoadString( &_Const00B3 ));
  ViewsText_OnSetColor( &_this->TextB, _Const008E );
  ViewsText_OnSetVisible( &_this->TextB, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayB, _Const00B4 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayB, 0 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayB, 85 );
  CoreRectView__OnSetBounds( &_this->PushButtonB, _Const0095 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->PushButtonB, 0 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButtonB, EwLoadString( &_Const0091 ));
  CoreRectView__OnSetBounds( &_this->TextC, _Const0096 );
  ViewsText_OnSetAutoSize( &_this->TextC, 0 );
  ViewsText_OnSetAlignment( &_this->TextC, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextC, EwLoadString( &_Const00B5 ));
  ViewsText_OnSetColor( &_this->TextC, _Const008E );
  ViewsText_OnSetVisible( &_this->TextC, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayC, _Const0098 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayC, 0 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayC, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderC, _Const0099 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HorizontalSliderC, 0 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderC, 60 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderC, 1 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderC, 2 );
  CoreRectView__OnSetBounds( &_this->TextD, _Const00B6 );
  ViewsText_OnSetAutoSize( &_this->TextD, 0 );
  ViewsText_OnSetAlignment( &_this->TextD, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextD, EwLoadString( &_Const00B7 ));
  ViewsText_OnSetColor( &_this->TextD, _Const008E );
  ViewsText_OnSetVisible( &_this->TextD, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayD, _Const009C );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayD, 0 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayD, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderD, _Const009D );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HorizontalSliderD, 0 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderD, 30 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderD, 1 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderD, 4 );
  CoreRectView__OnSetBounds( &_this->TextE, _Const009E );
  ViewsText_OnSetAutoSize( &_this->TextE, 0 );
  ViewsText_OnSetAlignment( &_this->TextE, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextE, EwLoadString( &_Const00B8 ));
  ViewsText_OnSetColor( &_this->TextE, _Const008E );
  ViewsText_OnSetVisible( &_this->TextE, 1 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayE, _Const00A0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayE, 1 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayE, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderE, _Const00A1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HorizontalSliderE, 1 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderE, 60 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderE, 1 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderE, 15 );
  CoreRectView__OnSetBounds( &_this->TextF, _Const00A2 );
  ViewsText_OnSetAutoSize( &_this->TextF, 0 );
  ViewsText_OnSetAlignment( &_this->TextF, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextF, EwLoadString( &_Const00B9 ));
  ViewsText_OnSetColor( &_this->TextF, _Const008E );
  ViewsText_OnSetVisible( &_this->TextF, 1 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayF, _Const00A4 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayF, 1 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayF, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayF, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderF, _Const00A5 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HorizontalSliderF, 1 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderF, 30 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderF, 1 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderF, 3 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextF ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayF ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderF ), 0 );
  ViewsText_OnSetFont( &_this->TextA, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->PushButtonA.OnRelease = EwNewSlot( _this, ApplicationSettingsPage2_OnChangeA );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButtonA, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->TextB, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->PushButtonB.OnRelease = EwNewSlot( _this, ApplicationSettingsPage2_OnChangeB );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButtonB, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->TextC, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderC.OnChange = EwNewSlot( _this, ApplicationSettingsPage2_OnChangeC );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderC, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextD, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderD.OnChange = EwNewSlot( _this, ApplicationSettingsPage2_OnChangeD );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderD, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextE, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderE.OnChange = EwNewSlot( _this, ApplicationSettingsPage2_OnChangeE );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderE, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextF, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderF.OnChange = EwNewSlot( _this, ApplicationSettingsPage2_OnChangeF );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderF, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  _this->SettingsLocked = EwGetAutoObject( &ApplicationSettingsLocked, ApplicationSettingsClass );
  _this->SettingsModified = EwGetAutoObject( &ApplicationSettingsModified, ApplicationSettingsClass );

  /* Call the user defined constructor */
  ApplicationSettingsPage2_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsPage2' */
void ApplicationSettingsPage2__ReInit( ApplicationSettingsPage2 _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->TextA );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayA );
  WidgetSetPushButton__ReInit( &_this->PushButtonA );
  ViewsText__ReInit( &_this->TextB );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayB );
  WidgetSetPushButton__ReInit( &_this->PushButtonB );
  ViewsText__ReInit( &_this->TextC );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayC );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderC );
  ViewsText__ReInit( &_this->TextD );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayD );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderD );
  ViewsText__ReInit( &_this->TextE );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayE );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderE );
  ViewsText__ReInit( &_this->TextF );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayF );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderF );
}

/* Finalizer method for the class 'Application::SettingsPage2' */
void ApplicationSettingsPage2__Done( ApplicationSettingsPage2 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->TextA );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayA );
  WidgetSetPushButton__Done( &_this->PushButtonA );
  ViewsText__Done( &_this->TextB );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayB );
  WidgetSetPushButton__Done( &_this->PushButtonB );
  ViewsText__Done( &_this->TextC );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayC );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderC );
  ViewsText__Done( &_this->TextD );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayD );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderD );
  ViewsText__Done( &_this->TextE );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayE );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderE );
  ViewsText__Done( &_this->TextF );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayF );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderF );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsPage2_Init( ApplicationSettingsPage2 _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup__OnSetFocus( _this, 0 );
  ApplicationSettingsPage2_LoadModified( _this );
}

/* 'C' function for method : 'Application::SettingsPage2.OnChangeA()' */
void ApplicationSettingsPage2_OnChangeA( ApplicationSettingsPage2 _this, XObject 
  sender )
{
  ApplicationHourMinutePicker Picker;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  Picker = EwNewObject( ApplicationHourMinutePicker, 0 );
  CoreRectView__OnSetBounds( Picker, _Const0089 );
  Picker->Close = EwNewSlot( _this, ApplicationSettingsPage2_CloseTimePickerA );
  ViewsText_OnSetString( &Picker->Text, EwLoadString( &_Const00B0 ));
  ApplicationHourMinutePicker_OnSetHour( Picker, _this->SettingsModified->Page2SettingA 
  / 60 );
  ApplicationHourMinutePicker_OnSetMinute( Picker, _this->SettingsModified->Page2SettingA 
  % 60 );
  _this->TimePickerA = Picker;
  CoreGroup__Add( _this, ((CoreView)Picker ), 0 );
  EwSignal( _this->HideControlElements, ((XObject)_this ));
}

/* 'C' function for method : 'Application::SettingsPage2.OnChangeB()' */
void ApplicationSettingsPage2_OnChangeB( ApplicationSettingsPage2 _this, XObject 
  sender )
{
  ApplicationHourMinutePicker Picker;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  Picker = EwNewObject( ApplicationHourMinutePicker, 0 );
  CoreRectView__OnSetBounds( Picker, _Const0089 );
  Picker->Close = EwNewSlot( _this, ApplicationSettingsPage2_CloseTimePickerB );
  ViewsText_OnSetString( &Picker->Text, EwLoadString( &_Const00B3 ));
  ApplicationHourMinutePicker_OnSetHour( Picker, _this->SettingsModified->Page2SettingB 
  / 60 );
  ApplicationHourMinutePicker_OnSetMinute( Picker, _this->SettingsModified->Page2SettingB 
  % 60 );
  _this->TimePickerB = Picker;
  CoreGroup__Add( _this, ((CoreView)Picker ), 0 );
  EwSignal( _this->HideControlElements, ((XObject)_this ));
}

/* 'C' function for method : 'Application::SettingsPage2.OnChangeC()' */
void ApplicationSettingsPage2_OnChangeC( ApplicationSettingsPage2 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page2SettingC = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderC );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderC ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage2.OnChangeD()' */
void ApplicationSettingsPage2_OnChangeD( ApplicationSettingsPage2 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page2SettingD = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderD );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderD ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage2.OnChangeE()' */
void ApplicationSettingsPage2_OnChangeE( ApplicationSettingsPage2 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page2SettingE = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderE );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderE ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage2.OnChangeF()' */
void ApplicationSettingsPage2_OnChangeF( ApplicationSettingsPage2 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page2SettingF = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderF );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayF, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderF ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage2.CloseTimePickerA()' */
void ApplicationSettingsPage2_CloseTimePickerA( ApplicationSettingsPage2 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TimePickerA != 0 )
  {
    XString Hour;
    XString Minute;
    _this->SettingsModified->Page2SettingA = ( ApplicationHourMinutePicker_OnGetHour( 
    _this->TimePickerA ) * 60 ) + ApplicationHourMinutePicker_OnGetMinute( _this->TimePickerA );
    Hour = EwNewStringInt( ApplicationHourMinutePicker_OnGetHour( _this->TimePickerA ), 
    0, 10 );

    if ( ApplicationHourMinutePicker_OnGetHour( _this->TimePickerA ) < 10 )
      Hour = EwConcatString( EwLoadString( &_Const0059 ), Hour );

    Minute = EwNewStringInt( ApplicationHourMinutePicker_OnGetMinute( _this->TimePickerA ), 
    0, 10 );

    if ( ApplicationHourMinutePicker_OnGetMinute( _this->TimePickerA ) < 10 )
      Minute = EwConcatString( EwLoadString( &_Const0059 ), Minute );

    ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayA, EwConcatString( 
    EwConcatString( Hour, EwLoadString( &_Const005A )), Minute ));
    CoreGroup__Remove( _this, ((CoreView)_this->TimePickerA ));
    _this->TimePickerA = 0;
  }

  EwSignal( _this->UnhideControlElements, ((XObject)_this ));
  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::SettingsPage2.CloseTimePickerB()' */
void ApplicationSettingsPage2_CloseTimePickerB( ApplicationSettingsPage2 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TimePickerB != 0 )
  {
    XString Hour;
    XString Minute;
    _this->SettingsModified->Page2SettingB = ( ApplicationHourMinutePicker_OnGetHour( 
    _this->TimePickerB ) * 60 ) + ApplicationHourMinutePicker_OnGetMinute( _this->TimePickerB );
    Hour = EwNewStringInt( ApplicationHourMinutePicker_OnGetHour( _this->TimePickerB ), 
    0, 10 );

    if ( ApplicationHourMinutePicker_OnGetHour( _this->TimePickerB ) < 10 )
      Hour = EwConcatString( EwLoadString( &_Const0059 ), Hour );

    Minute = EwNewStringInt( ApplicationHourMinutePicker_OnGetMinute( _this->TimePickerB ), 
    0, 10 );

    if ( ApplicationHourMinutePicker_OnGetMinute( _this->TimePickerB ) < 10 )
      Minute = EwConcatString( EwLoadString( &_Const0059 ), Minute );

    ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwConcatString( 
    EwConcatString( Hour, EwLoadString( &_Const005A )), Minute ));
    CoreGroup__Remove( _this, ((CoreView)_this->TimePickerB ));
    _this->TimePickerB = 0;
  }

  EwSignal( _this->UnhideControlElements, ((XObject)_this ));
  CoreGroup__OnSetFocus( _this, 0 );
}

/* 'C' function for method : 'Application::SettingsPage2.LoadModified()' */
void ApplicationSettingsPage2_LoadModified( ApplicationSettingsPage2 _this )
{
  XString Hour;
  XString Minute;

  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderC, _this->SettingsModified->Page2SettingC );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderD, _this->SettingsModified->Page2SettingD );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderE, _this->SettingsModified->Page2SettingE );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderF, _this->SettingsModified->Page2SettingF );
  Hour = EwNewStringInt( _this->SettingsModified->Page2SettingA / 60, 0, 10 );

  if (( _this->SettingsModified->Page2SettingA / 60 ) < 10 )
    Hour = EwConcatString( EwLoadString( &_Const0059 ), Hour );

  Minute = EwNewStringInt( _this->SettingsModified->Page2SettingA % 60, 0, 10 );

  if (( _this->SettingsModified->Page2SettingA % 60 ) < 10 )
    Minute = EwConcatString( EwLoadString( &_Const0059 ), Minute );

  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayA, EwConcatString( 
  EwConcatString( Hour, EwLoadString( &_Const005A )), Minute ));
  Hour = EwNewStringInt( _this->SettingsModified->Page2SettingB / 60, 0, 10 );

  if (( _this->SettingsModified->Page2SettingB / 60 ) < 10 )
    Hour = EwConcatString( EwLoadString( &_Const0059 ), Hour );

  Minute = EwNewStringInt( _this->SettingsModified->Page2SettingB % 60, 0, 10 );

  if (( _this->SettingsModified->Page2SettingB % 60 ) < 10 )
    Minute = EwConcatString( EwLoadString( &_Const0059 ), Minute );

  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwConcatString( 
  EwConcatString( Hour, EwLoadString( &_Const005A )), Minute ));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page2SettingC, 0, 10 ), EwLoadString( 
  &_Const00AC )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page2SettingD, 0, 10 ), EwLoadString( 
  &_Const00AC )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page2SettingE, 0, 10 ), EwLoadString( 
  &_Const00AC )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayF, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page2SettingF, 0, 10 ), EwLoadString( 
  &_Const00AC )));
}

/* Variants derived from the class : 'Application::SettingsPage2' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsPage2 )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsPage2 )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsPage2' */
EW_DEFINE_CLASS( ApplicationSettingsPage2, CoreGroup, TextA, TimePickerA, UnhideControlElements, 
                 _.VMT, _.VMT, _.VMT, "Application::SettingsPage2" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsPage2 )

/* Initializer for the class 'Application::SettingsPage3' */
void ApplicationSettingsPage3__Init( ApplicationSettingsPage3 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsPage3 );

  /* ... then construct all embedded objects */
  WidgetSetToggleButton__Init( &_this->ToggleButtonA, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextB, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayB, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderB, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextC, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayC, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderC, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextD, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayD, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderD, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextE, &_this->_.XObject, 0 );
  ApplicationSettingsValueDisplay__Init( &_this->ValueDisplayE, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSliderE, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsPage3 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0089 );
  CoreRectView__OnSetBounds( &_this->ToggleButtonA, _Const00BA );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButtonA, EwLoadString( &_Const00BB ));
  CoreRectView__OnSetBounds( &_this->TextB, _Const0092 );
  ViewsText_OnSetAutoSize( &_this->TextB, 0 );
  ViewsText_OnSetAlignment( &_this->TextB, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextB, EwLoadString( &_Const00BC ));
  ViewsText_OnSetColor( &_this->TextB, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayB, _Const00BD );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayB, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderB, _Const0095 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderB, 120 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderB, 30 );
  CoreRectView__OnSetBounds( &_this->TextC, _Const00BE );
  ViewsText_OnSetAutoSize( &_this->TextC, 0 );
  ViewsText_OnSetAlignment( &_this->TextC, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextC, EwLoadString( &_Const00BF ));
  ViewsText_OnSetColor( &_this->TextC, _Const008E );
  CoreRectView__OnSetBounds( &_this->ValueDisplayC, _Const00C0 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayC, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderC, _Const0099 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderC, 120 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderC, 30 );
  CoreRectView__OnSetBounds( &_this->TextD, _Const00B6 );
  ViewsText_OnSetAutoSize( &_this->TextD, 0 );
  ViewsText_OnSetAlignment( &_this->TextD, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextD, EwLoadString( &_Const00C1 ));
  ViewsText_OnSetColor( &_this->TextD, _Const008E );
  ViewsText_OnSetVisible( &_this->TextD, 1 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayD, _Const009C );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayD, 1 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayD, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderD, _Const009D );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HorizontalSliderD, 1 );
  WidgetSetHorizontalSlider_OnSetStepSize( &_this->HorizontalSliderD, 900 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderD, 72000 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderD, 900 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderD, 36000 );
  CoreRectView__OnSetBounds( &_this->TextE, _Const009E );
  ViewsText_OnSetAutoSize( &_this->TextE, 0 );
  ViewsText_OnSetAlignment( &_this->TextE, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextE, EwLoadString( &_Const00C2 ));
  ViewsText_OnSetColor( &_this->TextE, _Const008E );
  ViewsText_OnSetVisible( &_this->TextE, 1 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayE, _Const00A0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ValueDisplayE, 1 );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwLoadString( 
  &_Const0036 ));
  ApplicationSettingsValueDisplay_OnSetWidth( &_this->ValueDisplayE, 85 );
  CoreRectView__OnSetBounds( &_this->HorizontalSliderE, _Const00A1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HorizontalSliderE, 1 );
  WidgetSetHorizontalSlider_OnSetStepSize( &_this->HorizontalSliderE, 900 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSliderE, 72000 );
  WidgetSetHorizontalSlider_OnSetMinValue( &_this->HorizontalSliderE, 900 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderE, 36000 );
  CoreGroup__Add( _this, ((CoreView)&_this->ToggleButtonA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSliderE ), 0 );
  _this->ToggleButtonA.OnRelease = EwNewSlot( _this, ApplicationSettingsPage3_OnChangeA );
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButtonA, EwGetAutoObject( 
  &WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig ));
  ViewsText_OnSetFont( &_this->TextB, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderB.OnChange = EwNewSlot( _this, ApplicationSettingsPage3_OnChangeB );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderB, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextC, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderC.OnChange = EwNewSlot( _this, ApplicationSettingsPage3_OnChangeC );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderC, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  _this->SettingsLocked = EwGetAutoObject( &ApplicationSettingsLocked, ApplicationSettingsClass );
  _this->SettingsModified = EwGetAutoObject( &ApplicationSettingsModified, ApplicationSettingsClass );
  ViewsText_OnSetFont( &_this->TextD, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderD.OnChange = EwNewSlot( _this, ApplicationSettingsPage3_OnChangeD );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderD, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->TextE, EwLoadResource( &ApplicationFontBodyS, ResourcesFont ));
  _this->HorizontalSliderE.OnChange = EwNewSlot( _this, ApplicationSettingsPage3_OnChangeE );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSliderE, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig ));

  /* Call the user defined constructor */
  ApplicationSettingsPage3_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsPage3' */
void ApplicationSettingsPage3__ReInit( ApplicationSettingsPage3 _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  WidgetSetToggleButton__ReInit( &_this->ToggleButtonA );
  ViewsText__ReInit( &_this->TextB );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayB );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderB );
  ViewsText__ReInit( &_this->TextC );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayC );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderC );
  ViewsText__ReInit( &_this->TextD );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayD );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderD );
  ViewsText__ReInit( &_this->TextE );
  ApplicationSettingsValueDisplay__ReInit( &_this->ValueDisplayE );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSliderE );
}

/* Finalizer method for the class 'Application::SettingsPage3' */
void ApplicationSettingsPage3__Done( ApplicationSettingsPage3 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  WidgetSetToggleButton__Done( &_this->ToggleButtonA );
  ViewsText__Done( &_this->TextB );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayB );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderB );
  ViewsText__Done( &_this->TextC );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayC );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderC );
  ViewsText__Done( &_this->TextD );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayD );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderD );
  ViewsText__Done( &_this->TextE );
  ApplicationSettingsValueDisplay__Done( &_this->ValueDisplayE );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSliderE );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsPage3_Init( ApplicationSettingsPage3 _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup__OnSetFocus( _this, 0 );
  ApplicationSettingsPage3_LoadModified( _this );
}

/* 'C' function for method : 'Application::SettingsPage3.OnChangeA()' */
void ApplicationSettingsPage3_OnChangeA( ApplicationSettingsPage3 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page3SettingA = _this->ToggleButtonA.Checked;
}

/* 'C' function for method : 'Application::SettingsPage3.OnChangeB()' */
void ApplicationSettingsPage3_OnChangeB( ApplicationSettingsPage3 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page3SettingB = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderB );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderB ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage3.OnChangeC()' */
void ApplicationSettingsPage3_OnChangeC( ApplicationSettingsPage3 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page3SettingC = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderC );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwConcatString( 
  EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderC ), 
  0, 10 ), EwLoadString( &_Const00AC )));
}

/* 'C' function for method : 'Application::SettingsPage3.LoadModified()' */
void ApplicationSettingsPage3_LoadModified( ApplicationSettingsPage3 _this )
{
  WidgetSetToggleButton_OnSetChecked( &_this->ToggleButtonA, _this->SettingsModified->Page3SettingA );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderB, _this->SettingsModified->Page3SettingB );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderC, _this->SettingsModified->Page3SettingC );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderD, _this->SettingsModified->Page3SettingD );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSliderE, _this->SettingsModified->Page3SettingE );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayB, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page3SettingB, 0, 10 ), EwLoadString( 
  &_Const00AC )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayC, EwConcatString( 
  EwNewStringInt( _this->SettingsModified->Page3SettingC, 0, 10 ), EwLoadString( 
  &_Const00AC )));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwNewStringInt( 
  _this->SettingsModified->Page3SettingD, 0, 10 ));
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwNewStringInt( 
  _this->SettingsLocked->Page3SettingE, 0, 10 ));
}

/* 'C' function for method : 'Application::SettingsPage3.OnChangeD()' */
void ApplicationSettingsPage3_OnChangeD( ApplicationSettingsPage3 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page3SettingD = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderD );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayD, EwNewStringInt( 
  WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderD ), 0, 10 ));
}

/* 'C' function for method : 'Application::SettingsPage3.OnChangeE()' */
void ApplicationSettingsPage3_OnChangeE( ApplicationSettingsPage3 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->SettingsModified->Page3SettingE = WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->HorizontalSliderE );
  ApplicationSettingsValueDisplay_OnSetValue( &_this->ValueDisplayE, EwNewStringInt( 
  WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSliderE ), 0, 10 ));
}

/* Variants derived from the class : 'Application::SettingsPage3' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsPage3 )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsPage3 )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsPage3' */
EW_DEFINE_CLASS( ApplicationSettingsPage3, CoreGroup, ToggleButtonA, SettingsLocked, 
                 UnhideControlElements, _.VMT, _.VMT, _.VMT, "Application::SettingsPage3" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsPage3 )

/* Initializer for the class 'Application::SettingsValueDisplay' */
void ApplicationSettingsValueDisplay__Init( ApplicationSettingsValueDisplay _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsValueDisplay );

  /* ... then construct all embedded objects */
  ViewsShadow__Init( &_this->OutletShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->OutletBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ValueText, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsValueDisplay );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00C3 );
  CoreRectView__OnSetBounds( &_this->OutletShadow, _Const00C4 );
  ViewsShadow_OnSetRadius( &_this->OutletShadow, 5 );
  ViewsShadow_OnSetBlurRadius( &_this->OutletShadow, 1 );
  CoreRectView__OnSetBounds( &_this->OutletBackground, _Const00C4 );
  ViewsRectangle_OnSetRadius( &_this->OutletBackground, 5 );
  ViewsRectangle_OnSetColor( &_this->OutletBackground, _Const0007 );
  CoreRectView__OnSetBounds( &_this->ValueText, _Const00C5 );
  ViewsText_OnSetAutoSize( &_this->ValueText, 0 );
  ViewsText_OnSetAlignment( &_this->ValueText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ValueText, EwLoadString( &_Const00C6 ));
  ViewsText_OnSetColor( &_this->ValueText, _Const008E );
  CoreGroup__Add( _this, ((CoreView)&_this->OutletShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->OutletBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueText ), 0 );
  ViewsText_OnSetFont( &_this->ValueText, EwLoadResource( &ApplicationFontBodyS, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::SettingsValueDisplay' */
void ApplicationSettingsValueDisplay__ReInit( ApplicationSettingsValueDisplay _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsShadow__ReInit( &_this->OutletShadow );
  ViewsRectangle__ReInit( &_this->OutletBackground );
  ViewsText__ReInit( &_this->ValueText );
}

/* Finalizer method for the class 'Application::SettingsValueDisplay' */
void ApplicationSettingsValueDisplay__Done( ApplicationSettingsValueDisplay _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsShadow__Done( &_this->OutletShadow );
  ViewsRectangle__Done( &_this->OutletBackground );
  ViewsText__Done( &_this->ValueText );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::SettingsValueDisplay.OnSetValue()' */
void ApplicationSettingsValueDisplay_OnSetValue( ApplicationSettingsValueDisplay _this, 
  XString value )
{
  if ( !EwCompString( _this->Value, value ))
    return;

  _this->Value = EwShareString( value );
  ViewsText_OnSetString( &_this->ValueText, _this->Value );
}

/* 'C' function for method : 'Application::SettingsValueDisplay.OnSetWidth()' */
void ApplicationSettingsValueDisplay_OnSetWidth( ApplicationSettingsValueDisplay _this, 
  XInt32 value )
{
  if ( _this->Width == value )
    return;

  _this->Width = value;
  CoreRectView__OnSetBounds( &_this->OutletShadow, EwSetRectX1( _this->OutletShadow.Super1.Bounds, 
  1 ));
  CoreRectView__OnSetBounds( &_this->OutletShadow, EwSetRectX2( _this->OutletShadow.Super1.Bounds, 
  _this->Width - 1 ));
  CoreRectView__OnSetBounds( &_this->OutletBackground, EwSetRectX1( _this->OutletBackground.Super1.Bounds, 
  1 ));
  CoreRectView__OnSetBounds( &_this->OutletBackground, EwSetRectX2( _this->OutletBackground.Super1.Bounds, 
  _this->Width - 1 ));
  CoreRectView__OnSetBounds( &_this->ValueText, EwSetRectX1( _this->ValueText.Super1.Bounds, 
  1 ));
  CoreRectView__OnSetBounds( &_this->ValueText, EwSetRectX2( _this->ValueText.Super1.Bounds, 
  _this->Width - 1 ));
  CoreRectView__OnSetBounds( _this, EwSetRectW( _this->Super2.Bounds, _this->Width ));
}

/* Variants derived from the class : 'Application::SettingsValueDisplay' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsValueDisplay )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsValueDisplay )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsValueDisplay' */
EW_DEFINE_CLASS( ApplicationSettingsValueDisplay, CoreGroup, OutletShadow, Value, 
                 Value, Value, Value, Width, "Application::SettingsValueDisplay" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsValueDisplay )

/* Initializer for the class 'Application::BottomNote' */
void ApplicationBottomNote__Init( ApplicationBottomNote _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationBottomNote );

  /* ... then construct all embedded objects */
  ViewsShadow__Init( &_this->BottomNoteShadow, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->BottomNoteBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->BottomNoteLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->BottomNoteLine2, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationBottomNote );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00C7 );
  CoreRectView__OnSetBounds( &_this->BottomNoteShadow, _Const00C8 );
  ViewsShadow_OnSetRadiusTR( &_this->BottomNoteShadow, 15 );
  ViewsShadow_OnSetRadiusTL( &_this->BottomNoteShadow, 15 );
  CoreRectView__OnSetBounds( &_this->BottomNoteBackground, _Const00C8 );
  ViewsRectangle_OnSetRadiusTR( &_this->BottomNoteBackground, 15 );
  ViewsRectangle_OnSetRadiusTL( &_this->BottomNoteBackground, 15 );
  ViewsRectangle_OnSetColor( &_this->BottomNoteBackground, _Const0001 );
  CoreRectView__OnSetBounds( &_this->BottomNoteLine1, _Const00C9 );
  ViewsText_OnSetAutoSize( &_this->BottomNoteLine1, 0 );
  ViewsText_OnSetAlignment( &_this->BottomNoteLine1, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->BottomNoteLine1, EwLoadString( &_Const00CA ));
  ViewsText_OnSetColor( &_this->BottomNoteLine1, _Const0007 );
  CoreRectView__OnSetBounds( &_this->BottomNoteLine2, _Const00CB );
  ViewsText_OnSetAutoSize( &_this->BottomNoteLine2, 1 );
  ViewsText_OnSetAlignment( &_this->BottomNoteLine2, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->BottomNoteLine2, EwLoadString( &_Const00CC ));
  ViewsText_OnSetColor( &_this->BottomNoteLine2, _Const0007 );
  _this->FirstLine = EwShareString( EwLoadString( &_Const00CD ));
  _this->SecondLine = EwShareString( EwLoadString( &_Const00CD ));
  _this->BackgroundColor = _Const0001;
  _this->TextColor = _Const0007;
  CoreGroup__Add( _this, ((CoreView)&_this->BottomNoteShadow ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomNoteBackground ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomNoteLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomNoteLine2 ), 0 );
  ViewsText_OnSetFont( &_this->BottomNoteLine1, EwLoadResource( &ApplicationFontBottomNode, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->BottomNoteLine2, EwLoadResource( &ApplicationFontBottomNode, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::BottomNote' */
void ApplicationBottomNote__ReInit( ApplicationBottomNote _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsShadow__ReInit( &_this->BottomNoteShadow );
  ViewsRectangle__ReInit( &_this->BottomNoteBackground );
  ViewsText__ReInit( &_this->BottomNoteLine1 );
  ViewsText__ReInit( &_this->BottomNoteLine2 );
}

/* Finalizer method for the class 'Application::BottomNote' */
void ApplicationBottomNote__Done( ApplicationBottomNote _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsShadow__Done( &_this->BottomNoteShadow );
  ViewsRectangle__Done( &_this->BottomNoteBackground );
  ViewsText__Done( &_this->BottomNoteLine1 );
  ViewsText__Done( &_this->BottomNoteLine2 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::BottomNote.OnSetFirstLine()' */
void ApplicationBottomNote_OnSetFirstLine( ApplicationBottomNote _this, XString 
  value )
{
  if ( !EwCompString( _this->FirstLine, value ))
    return;

  _this->FirstLine = EwShareString( value );
  ViewsText_OnSetString( &_this->BottomNoteLine1, _this->FirstLine );
}

/* 'C' function for method : 'Application::BottomNote.OnSetSecondLine()' */
void ApplicationBottomNote_OnSetSecondLine( ApplicationBottomNote _this, XString 
  value )
{
  if ( !EwCompString( _this->SecondLine, value ))
    return;

  _this->SecondLine = EwShareString( value );
  ViewsText_OnSetString( &_this->BottomNoteLine2, _this->SecondLine );
}

/* 'C' function for method : 'Application::BottomNote.OnSetBackgroundColor()' */
void ApplicationBottomNote_OnSetBackgroundColor( ApplicationBottomNote _this, XColor 
  value )
{
  if ( !EwCompColor( _this->BackgroundColor, value ))
    return;

  _this->BackgroundColor = value;
  ViewsRectangle_OnSetColor( &_this->BottomNoteBackground, _this->BackgroundColor );
}

/* 'C' function for method : 'Application::BottomNote.OnSetTextColor()' */
void ApplicationBottomNote_OnSetTextColor( ApplicationBottomNote _this, XColor value )
{
  if ( !EwCompColor( _this->TextColor, value ))
    return;

  _this->TextColor = value;
  ViewsText_OnSetColor( &_this->BottomNoteLine1, _this->TextColor );
  ViewsText_OnSetColor( &_this->BottomNoteLine2, _this->TextColor );
}

/* Variants derived from the class : 'Application::BottomNote' */
EW_DEFINE_CLASS_VARIANTS( ApplicationBottomNote )
EW_END_OF_CLASS_VARIANTS( ApplicationBottomNote )

/* Virtual Method Table (VMT) for the class : 'Application::BottomNote' */
EW_DEFINE_CLASS( ApplicationBottomNote, CoreGroup, BottomNoteShadow, FirstLine, 
                 FirstLine, FirstLine, FirstLine, BackgroundColor, "Application::BottomNote" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationBottomNote )

/* Include a file containing the bitmap resource : 'Application::Battery' */
#include "_ApplicationBattery.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Battery' */
EW_RES_WITHOUT_VARIANTS( ApplicationBattery )

/* Include a file containing the bitmap resource : 'Application::Notification' */
#include "_ApplicationNotification.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Notification' */
EW_RES_WITHOUT_VARIANTS( ApplicationNotification )

/* Include a file containing the bitmap resource : 'Application::Bolt' */
#include "_ApplicationBolt.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Bolt' */
EW_RES_WITHOUT_VARIANTS( ApplicationBolt )

/* Include a file containing the bitmap resource : 'Application::Generator' */
#include "_ApplicationGenerator.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Generator' */
EW_RES_WITHOUT_VARIANTS( ApplicationGenerator )

/* Include a file containing the bitmap resource : 'Application::PowerGrid' */
#include "_ApplicationPowerGrid.h"

/* Table with links to derived variants of the bitmap resource : 'Application::PowerGrid' */
EW_RES_WITHOUT_VARIANTS( ApplicationPowerGrid )

/* Include a file containing the bitmap resource : 'Application::House' */
#include "_ApplicationHouse.h"

/* Table with links to derived variants of the bitmap resource : 'Application::House' */
EW_RES_WITHOUT_VARIANTS( ApplicationHouse )

/* Include a file containing the bitmap resource : 'Application::ScreenOff' */
#include "_ApplicationScreenOff.h"

/* Table with links to derived variants of the bitmap resource : 'Application::ScreenOff' */
EW_RES_WITHOUT_VARIANTS( ApplicationScreenOff )

/* Include a file containing the bitmap resource : 'Application::ArrowLeft' */
#include "_ApplicationArrowLeft.h"

/* Table with links to derived variants of the bitmap resource : 'Application::ArrowLeft' */
EW_RES_WITHOUT_VARIANTS( ApplicationArrowLeft )

/* Include a file containing the bitmap resource : 'Application::ArrowRight' */
#include "_ApplicationArrowRight.h"

/* Table with links to derived variants of the bitmap resource : 'Application::ArrowRight' */
EW_RES_WITHOUT_VARIANTS( ApplicationArrowRight )

/* Include a file containing the font resource : 'Application::FontHeader' */
#include "_ApplicationFontHeader.h"

/* Table with links to derived variants of the font resource : 'Application::FontHeader' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontHeader )

/* Include a file containing the font resource : 'Application::FontStatusBar' */
#include "_ApplicationFontStatusBar.h"

/* Table with links to derived variants of the font resource : 'Application::FontStatusBar' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontStatusBar )

/* Include a file containing the font resource : 'Application::FontBodyL' */
#include "_ApplicationFontBodyL.h"

/* Table with links to derived variants of the font resource : 'Application::FontBodyL' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBodyL )

/* Include a file containing the font resource : 'Application::FontBodyM' */
#include "_ApplicationFontBodyM.h"

/* Table with links to derived variants of the font resource : 'Application::FontBodyM' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBodyM )

/* Include a file containing the font resource : 'Application::FontBodyS' */
#include "_ApplicationFontBodyS.h"

/* Table with links to derived variants of the font resource : 'Application::FontBodyS' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBodyS )

/* Include a file containing the font resource : 'Application::FontBottomNode' */
#include "_ApplicationFontBottomNode.h"

/* Table with links to derived variants of the font resource : 'Application::FontBottomNode' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBottomNode )

/* User defined constant: 'Application::ColorWarning' */
const XColor ApplicationColorWarning = { 0xFF, 0x0C, 0x00, 0xFF };

/* User defined constant: 'Application::ColorCityPower' */
const XColor ApplicationColorCityPower = { 0x00, 0xFF, 0x00, 0xFF };

/* User defined constant: 'Application::ColorGeneratorBackup' */
const XColor ApplicationColorGeneratorBackup = { 0xFF, 0x7F, 0x00, 0xFF };

/* User defined constant: 'Application::ColorSavingMode' */
const XColor ApplicationColorSavingMode = { 0x6F, 0xE6, 0xFC, 0xFF };

/* User defined auto object: 'Application::SlideTop' */
EW_DEFINE_AUTOOBJECT( ApplicationSlideTop, EffectsSlideTransition )

/* Initializer for the auto object 'Application::SlideTop' */
void ApplicationSlideTop__Init( EffectsSlideTransition _this )
{
  _this->Elasticity = 0.8f;
  _this->OpacityFadeOut = 0;
  _this->OpacityFadeIn = 0;
  _this->Duration = 400;
  _this->Direction = CoreDirectionTop;
}

/* Re-Initializer for the auto object 'Application::SlideTop' */
void ApplicationSlideTop__ReInit( EffectsSlideTransition _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::SlideTop' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationSlideTop )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationSlideTop )

/* User defined auto object: 'Application::SlideBottom' */
EW_DEFINE_AUTOOBJECT( ApplicationSlideBottom, EffectsSlideTransition )

/* Initializer for the auto object 'Application::SlideBottom' */
void ApplicationSlideBottom__Init( EffectsSlideTransition _this )
{
  _this->Elasticity = 0.8f;
  _this->OpacityFadeOut = 0;
  _this->OpacityFadeIn = 0;
  _this->Duration = 400;
  _this->Direction = CoreDirectionBottom;
}

/* Re-Initializer for the auto object 'Application::SlideBottom' */
void ApplicationSlideBottom__ReInit( EffectsSlideTransition _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::SlideBottom' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationSlideBottom )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationSlideBottom )

/* User defined auto object: 'Application::SlideLeft' */
EW_DEFINE_AUTOOBJECT( ApplicationSlideLeft, EffectsSlideTransition )

/* Initializer for the auto object 'Application::SlideLeft' */
void ApplicationSlideLeft__Init( EffectsSlideTransition _this )
{
  _this->MarginBottom = 30;
  _this->Elasticity = 0.8f;
  _this->OpacityFadeOut = 0;
  _this->OpacityFadeIn = 0;
  _this->Duration = 400;
  _this->Direction = CoreDirectionLeft;
}

/* Re-Initializer for the auto object 'Application::SlideLeft' */
void ApplicationSlideLeft__ReInit( EffectsSlideTransition _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::SlideLeft' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationSlideLeft )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationSlideLeft )

/* User defined auto object: 'Application::SlideRight' */
EW_DEFINE_AUTOOBJECT( ApplicationSlideRight, EffectsSlideTransition )

/* Initializer for the auto object 'Application::SlideRight' */
void ApplicationSlideRight__Init( EffectsSlideTransition _this )
{
  _this->MarginBottom = 30;
  _this->Elasticity = 0.8f;
  _this->OpacityFadeOut = 0;
  _this->OpacityFadeIn = 0;
  _this->Duration = 400;
  _this->Direction = CoreDirectionRight;
}

/* Re-Initializer for the auto object 'Application::SlideRight' */
void ApplicationSlideRight__ReInit( EffectsSlideTransition _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::SlideRight' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationSlideRight )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationSlideRight )

/* User defined auto object: 'Application::Present' */
EW_DEFINE_AUTOOBJECT( ApplicationPresent, EffectsSlideTransition )

/* Initializer for the auto object 'Application::Present' */
void ApplicationPresent__Init( EffectsSlideTransition _this )
{
  _this->MarginBottom = 30;
  _this->Elasticity = 0.8f;
  _this->OpacityFadeOut = 0;
  _this->OpacityFadeIn = 0;
  _this->Duration = 0;
  _this->Direction = CoreDirectionNone;
}

/* Re-Initializer for the auto object 'Application::Present' */
void ApplicationPresent__ReInit( EffectsSlideTransition _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Present' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationPresent )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationPresent )

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->Pump, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->BacklightState = 1;
  _this->Battery = 100;
  CoreTimer_OnSetPeriod( &_this->Pump, 20 );
  CoreTimer_OnSetEnabled( &_this->Pump, 1 );
  _this->SettingsLocked = EwGetAutoObject( &ApplicationSettingsLocked, ApplicationSettingsClass );
  _this->SettingsModified = EwGetAutoObject( &ApplicationSettingsModified, ApplicationSettingsClass );
  _this->Pump.OnTrigger = EwNewSlot( _this, ApplicationDeviceClass_OnPump );

  /* Call the user defined constructor */
  ApplicationDeviceClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->Pump );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->Pump );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  {
    /* Pump timer is owned by the autoobject and torn down with it.
       Hardware outputs are left in their last state. */
  }
}

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );

  {
    /* boot to a known-safe state: both relays released, backlight on */
    EwBspInOutSetGeneratorStartRelay( 0 );
    EwBspInOutSetBacklight( 1 );
    hbc_backlight_state = 1;
  }
}

/* 'C' function for method : 'Application::DeviceClass.OnSetStartButtonState()' */
void ApplicationDeviceClass_OnSetStartButtonState( ApplicationDeviceClass _this, 
  XBool value )
{
  if ( _this->StartButtonState == value )
    return;

  _this->StartButtonState = value;

  if (( _this->StartButtonState == 1 ) && ( _this->StopButtonState == 1 ))
    ApplicationDeviceClass_OnSetStopButtonState( _this, 0 );

  EwBspInOutSetGeneratorStartRelay( value ? 1 : 0 );
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetStartButtonState, 
    ApplicationDeviceClass_OnSetStartButtonState ), 0 );
}

/* 'C' function for method : 'Application::DeviceClass.OnSetStopButtonState()' */
void ApplicationDeviceClass_OnSetStopButtonState( ApplicationDeviceClass _this, 
  XBool value )
{
  if ( _this->StopButtonState == value )
    return;

  _this->StopButtonState = value;

  if (( _this->StartButtonState == 1 ) && ( _this->StopButtonState == 1 ))
    ApplicationDeviceClass_OnSetStartButtonState( _this, 0 );

  EwBspInOutSetGeneratorStopRelay( value ? 1 : 0 );
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetStopButtonState, 
    ApplicationDeviceClass_OnSetStopButtonState ), 0 );
}

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateCityPowerState( ApplicationDeviceClass _this, 
  XBool aNewValue )
{
  if ( aNewValue != _this->CityPowerState )
  {
    _this->CityPowerState = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCityPowerState, 
      ApplicationDeviceClass_OnSetCityPowerState ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateCityPowerState()' */
void ApplicationDeviceClass__UpdateCityPowerState( void* _this, XBool aNewValue )
{
  ApplicationDeviceClass_UpdateCityPowerState((ApplicationDeviceClass)_this, aNewValue );
}

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateGeneratorBackupState( ApplicationDeviceClass _this, 
  XBool aNewValue )
{
  if ( aNewValue != _this->GeneratorBackupState )
  {
    _this->GeneratorBackupState = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetGeneratorBackupState, 
      ApplicationDeviceClass_OnSetGeneratorBackupState ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateGeneratorBackupState()' */
void ApplicationDeviceClass__UpdateGeneratorBackupState( void* _this, XBool aNewValue )
{
  ApplicationDeviceClass_UpdateGeneratorBackupState((ApplicationDeviceClass)_this
  , aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnSetBacklightState()' */
void ApplicationDeviceClass_OnSetBacklightState( ApplicationDeviceClass _this, XBool 
  value )
{
  if ( _this->BacklightState == value )
    return;

  _this->BacklightState = value;
  {
    hbc_backlight_state = value ? 1 : 0;
    EwBspInOutSetBacklight( hbc_backlight_state );
  }
  CoreTimer_OnSetPeriod( &_this->Pump, ( value? 20 : 200 ));
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetBacklightState, 
    ApplicationDeviceClass_OnSetBacklightState ), 0 );
}

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_ReadSettingsFromSd( ApplicationDeviceClass _this )
{
  _this->SettingsLocked->Page1SettingA = 1;
  _this->SettingsLocked->Page1SettingB = 0;
  _this->SettingsLocked->Page1SettingC = 4;
  _this->SettingsLocked->Page1SettingD = 10;
  _this->SettingsLocked->Page1SettingE = 2;
  _this->SettingsLocked->Page1SettingF = 5;
  _this->SettingsLocked->Page1SettingG = 3;
  _this->SettingsLocked->Page1SettingH = 60;
  _this->SettingsLocked->Page2SettingA = 0;
  _this->SettingsLocked->Page2SettingB = 1440;
  _this->SettingsLocked->Page2SettingC = 2;
  _this->SettingsLocked->Page2SettingD = 4;
  _this->SettingsLocked->Page2SettingE = 2;
  _this->SettingsLocked->Page2SettingF = 4;
  _this->SettingsLocked->Page3SettingA = 0;
  _this->SettingsLocked->Page3SettingB = 30;
  _this->SettingsLocked->Page3SettingC = 30;
  _this->SettingsLocked->Page3SettingD = 36000;
  _this->SettingsLocked->Page3SettingE = 36000;
  _this->SettingsModified->Page1SettingA = 1;
  _this->SettingsModified->Page1SettingB = 0;
  _this->SettingsModified->Page1SettingC = 4;
  _this->SettingsModified->Page1SettingD = 10;
  _this->SettingsModified->Page1SettingE = 2;
  _this->SettingsModified->Page1SettingF = 5;
  _this->SettingsModified->Page1SettingG = 3;
  _this->SettingsModified->Page1SettingH = 60;
  _this->SettingsModified->Page2SettingA = 0;
  _this->SettingsModified->Page2SettingB = 1440;
  _this->SettingsModified->Page2SettingC = 2;
  _this->SettingsModified->Page2SettingD = 4;
  _this->SettingsModified->Page2SettingE = 2;
  _this->SettingsModified->Page2SettingF = 4;
  _this->SettingsModified->Page3SettingA = 0;
  _this->SettingsModified->Page3SettingB = 30;
  _this->SettingsModified->Page3SettingC = 30;
  _this->SettingsModified->Page3SettingD = 36000;
  _this->SettingsModified->Page3SettingE = 36000;
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.ReadSettingsFromSd()' */
void ApplicationDeviceClass__ReadSettingsFromSd( void* _this )
{
  ApplicationDeviceClass_ReadSettingsFromSd((ApplicationDeviceClass)_this );
}

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_WriteSettingsToSd( ApplicationDeviceClass _this )
{
  _this->SettingsLocked->Page1SettingA = _this->SettingsModified->Page1SettingA;
  _this->SettingsLocked->Page1SettingB = _this->SettingsModified->Page1SettingB;
  _this->SettingsLocked->Page1SettingC = _this->SettingsModified->Page1SettingC;
  _this->SettingsLocked->Page1SettingD = _this->SettingsModified->Page1SettingD;
  _this->SettingsLocked->Page1SettingE = _this->SettingsModified->Page1SettingE;
  _this->SettingsLocked->Page1SettingF = _this->SettingsModified->Page1SettingF;
  _this->SettingsLocked->Page1SettingG = _this->SettingsModified->Page1SettingG;
  _this->SettingsLocked->Page1SettingH = _this->SettingsModified->Page1SettingH;
  _this->SettingsLocked->Page2SettingA = _this->SettingsModified->Page2SettingA;
  _this->SettingsLocked->Page2SettingB = _this->SettingsModified->Page2SettingB;
  _this->SettingsLocked->Page2SettingC = _this->SettingsModified->Page2SettingC;
  _this->SettingsLocked->Page2SettingD = _this->SettingsModified->Page2SettingD;
  _this->SettingsLocked->Page2SettingE = _this->SettingsModified->Page2SettingE;
  _this->SettingsLocked->Page2SettingF = _this->SettingsModified->Page2SettingF;
  _this->SettingsLocked->Page3SettingA = _this->SettingsModified->Page3SettingA;
  _this->SettingsLocked->Page3SettingB = _this->SettingsModified->Page3SettingB;
  _this->SettingsLocked->Page3SettingC = _this->SettingsModified->Page3SettingC;
  _this->SettingsLocked->Page3SettingD = _this->SettingsModified->Page3SettingD;
  _this->SettingsLocked->Page3SettingE = _this->SettingsModified->Page3SettingE;
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.WriteSettingsToSd()' */
void ApplicationDeviceClass__WriteSettingsToSd( void* _this )
{
  ApplicationDeviceClass_WriteSettingsToSd((ApplicationDeviceClass)_this );
}

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateBattery( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if (( aNewValue != _this->Battery ) && (( aNewValue <= 100 ) && ( aNewValue >= 
      0 )))
  {
    EwTrace( "%s", EwLoadString( &_Const00CE ));
    _this->Battery = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetBattery, 
      ApplicationDeviceClass_OnSetBattery ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateBattery()' */
void ApplicationDeviceClass__UpdateBattery( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateBattery((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnSetRtcTime()' */
void ApplicationDeviceClass_OnSetRtcTime( ApplicationDeviceClass _this, ApplicationDateTimePicker 
  value )
{
  EwTrace( "%s", EwLoadString( &_Const00CF ));

  if ( _this->RtcTime == value )
    return;

  _this->RtcTime = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetRtcTime, ApplicationDeviceClass_OnSetRtcTime ), 
    0 );
}

/* 'C' function for method : 'Application::DeviceClass.OnPump()' */
void ApplicationDeviceClass_OnPump( ApplicationDeviceClass _this, XObject sender )
{
  XInt32 cityPower;
  XInt32 generatorBackup;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  cityPower = 0;
  generatorBackup = 0;
  {
    EwBspInOutSetBacklight( hbc_backlight_state );
    cityPower        = EwBspInOutGetCityPowerState();
    generatorBackup  = EwBspInOutGetGeneratorBackupState();
  }
  ApplicationDeviceClass_UpdateCityPowerState( _this, (XBool)( cityPower != 0 ));
  ApplicationDeviceClass_UpdateGeneratorBackupState( _this, (XBool)( generatorBackup 
  != 0 ));
}

/* Default onget method for the property 'StartButtonState' */
XBool ApplicationDeviceClass_OnGetStartButtonState( ApplicationDeviceClass _this )
{
  return _this->StartButtonState;
}

/* Default onget method for the property 'StopButtonState' */
XBool ApplicationDeviceClass_OnGetStopButtonState( ApplicationDeviceClass _this )
{
  return _this->StopButtonState;
}

/* Default onget method for the property 'CityPowerState' */
XBool ApplicationDeviceClass_OnGetCityPowerState( ApplicationDeviceClass _this )
{
  return _this->CityPowerState;
}

/* Default onset method for the property 'CityPowerState' */
void ApplicationDeviceClass_OnSetCityPowerState( ApplicationDeviceClass _this, XBool 
  value )
{
  _this->CityPowerState = value;
}

/* Default onget method for the property 'GeneratorBackupState' */
XBool ApplicationDeviceClass_OnGetGeneratorBackupState( ApplicationDeviceClass _this )
{
  return _this->GeneratorBackupState;
}

/* Default onset method for the property 'GeneratorBackupState' */
void ApplicationDeviceClass_OnSetGeneratorBackupState( ApplicationDeviceClass _this, 
  XBool value )
{
  _this->GeneratorBackupState = value;
}

/* Default onget method for the property 'BacklightState' */
XBool ApplicationDeviceClass_OnGetBacklightState( ApplicationDeviceClass _this )
{
  return _this->BacklightState;
}

/* Default onget method for the property 'Battery' */
XInt32 ApplicationDeviceClass_OnGetBattery( ApplicationDeviceClass _this )
{
  return _this->Battery;
}

/* Default onset method for the property 'Battery' */
void ApplicationDeviceClass_OnSetBattery( ApplicationDeviceClass _this, XInt32 value )
{
  _this->Battery = value;
}

/* Default onget method for the property 'RtcTime' */
ApplicationDateTimePicker ApplicationDeviceClass_OnGetRtcTime( ApplicationDeviceClass _this )
{
  return _this->RtcTime;
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, XObject, Pump, SettingsLocked, Battery, 
                 Battery, Battery, Battery, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* This object represents an instance of the device interface implemented in the 
   class Application::DeviceClass. */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::Device' */
void ApplicationDevice__ReInit( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Initializer for the class 'Application::SettingsClass' */
void ApplicationSettingsClass__Init( ApplicationSettingsClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsClass );
}

/* Re-Initializer for the class 'Application::SettingsClass' */
void ApplicationSettingsClass__ReInit( ApplicationSettingsClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::SettingsClass' */
void ApplicationSettingsClass__Done( ApplicationSettingsClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::SettingsClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsClass )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsClass )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsClass' */
EW_DEFINE_CLASS( ApplicationSettingsClass, XObject, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::SettingsClass" )
EW_END_OF_CLASS( ApplicationSettingsClass )

/* User defined auto object: 'Application::SettingsLocked' */
EW_DEFINE_AUTOOBJECT( ApplicationSettingsLocked, ApplicationSettingsClass )

/* Initializer for the auto object 'Application::SettingsLocked' */
void ApplicationSettingsLocked__Init( ApplicationSettingsClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::SettingsLocked' */
void ApplicationSettingsLocked__ReInit( ApplicationSettingsClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::SettingsLocked' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationSettingsLocked )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationSettingsLocked )

/* User defined auto object: 'Application::SettingsModified' */
EW_DEFINE_AUTOOBJECT( ApplicationSettingsModified, ApplicationSettingsClass )

/* Initializer for the auto object 'Application::SettingsModified' */
void ApplicationSettingsModified__Init( ApplicationSettingsClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::SettingsModified' */
void ApplicationSettingsModified__ReInit( ApplicationSettingsClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::SettingsModified' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationSettingsModified )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationSettingsModified )

/* Initializer for the class 'Application::DateTimePicker' */
void ApplicationDateTimePicker__Init( ApplicationDateTimePicker _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPickerControl__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDateTimePicker );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->BorderCurrent, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerSecond, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerMinute, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerHour, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListSecond, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListMinute, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListHour, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ShineAtBottom, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ShineAtTop, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Separator2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Separator1, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButtonA, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->BorderCurrent1, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerYear, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerMonth, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerDay, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListYear, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListMonth, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListDay, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ShineAtBottom1, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ShineAtTop1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Separator3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Separator4, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDateTimePicker );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0089 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0089 );
  CoreRectView__OnSetBounds( &_this->BorderCurrent, _Const00D0 );
  ViewsBorder_OnSetWidth( &_this->BorderCurrent, 3 );
  ViewsBorder_OnSetColor( &_this->BorderCurrent, _Const00D1 );
  ViewsBorder_OnSetVisible( &_this->BorderCurrent, 1 );
  CoreRectView__OnSetBounds( &_this->TouchHandlerSecond, _Const00D2 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerSecond, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerSecond, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerMinute, _Const00D4 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerMinute, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerMinute, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerHour, _Const00D5 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerHour, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerHour, 0.2f );
  CoreRectView__OnSetBounds( &_this->ListSecond, _Const00D2 );
  CoreVerticalList_OnSetEndless( &_this->ListSecond, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListSecond, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListSecond, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListSecond, 60 );
  CoreRectView__OnSetBounds( &_this->ListMinute, _Const00D4 );
  CoreVerticalList_OnSetEndless( &_this->ListMinute, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListMinute, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListMinute, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListMinute, 60 );
  CoreRectView__OnSetBounds( &_this->ListHour, _Const00D5 );
  CoreVerticalList_OnSetEndless( &_this->ListHour, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListHour, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListHour, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListHour, 24 );
  CoreRectView__OnSetBounds( &_this->ShineAtBottom, _Const00D6 );
  ViewsRectangle_OnSetColorTR( &_this->ShineAtBottom, _Const00D7 );
  ViewsRectangle_OnSetColorTL( &_this->ShineAtBottom, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->ShineAtTop, _Const00D8 );
  ViewsRectangle_OnSetColorBL( &_this->ShineAtTop, _Const00D7 );
  ViewsRectangle_OnSetColorBR( &_this->ShineAtTop, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->Separator2, _Const00D9 );
  ViewsText_OnSetString( &_this->Separator2, EwLoadString( &_Const005A ));
  ViewsText_OnSetColor( &_this->Separator2, _Const00DA );
  CoreRectView__OnSetBounds( &_this->Separator1, _Const00DB );
  ViewsText_OnSetString( &_this->Separator1, EwLoadString( &_Const005A ));
  ViewsText_OnSetColor( &_this->Separator1, _Const00DA );
  CoreRectView__OnSetBounds( &_this->PushButtonA, _Const00DC );
  WidgetSetPushButton_OnSetLabel( &_this->PushButtonA, EwLoadString( &_Const00DD ));
  CoreRectView__OnSetBounds( &_this->Text, _Const00DE );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00DF ));
  ViewsText_OnSetColor( &_this->Text, _Const0001 );
  CoreRectView__OnSetBounds( &_this->BorderCurrent1, _Const00E0 );
  ViewsBorder_OnSetWidth( &_this->BorderCurrent1, 3 );
  ViewsBorder_OnSetColor( &_this->BorderCurrent1, _Const00D1 );
  ViewsBorder_OnSetVisible( &_this->BorderCurrent1, 1 );
  CoreRectView__OnSetBounds( &_this->TouchHandlerYear, _Const00E1 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerYear, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerYear, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerMonth, _Const00E2 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerMonth, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerMonth, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerDay, _Const00E3 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerDay, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerDay, 0.2f );
  CoreRectView__OnSetBounds( &_this->ListYear, _Const00E1 );
  CoreVerticalList_OnSetEndless( &_this->ListYear, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListYear, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListYear, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListYear, 200 );
  CoreRectView__OnSetBounds( &_this->ListMonth, _Const00E2 );
  CoreVerticalList_OnSetEndless( &_this->ListMonth, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListMonth, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListMonth, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListMonth, 12 );
  CoreRectView__OnSetBounds( &_this->ListDay, _Const00E3 );
  CoreVerticalList_OnSetEndless( &_this->ListDay, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListDay, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListDay, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListDay, 31 );
  CoreRectView__OnSetBounds( &_this->ShineAtBottom1, _Const00E4 );
  ViewsRectangle_OnSetColorTR( &_this->ShineAtBottom1, _Const00D7 );
  ViewsRectangle_OnSetColorTL( &_this->ShineAtBottom1, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->ShineAtTop1, _Const00E5 );
  ViewsRectangle_OnSetColorBL( &_this->ShineAtTop1, _Const00D7 );
  ViewsRectangle_OnSetColorBR( &_this->ShineAtTop1, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->Separator3, _Const00E6 );
  ViewsText_OnSetString( &_this->Separator3, EwLoadString( &_Const00AD ));
  ViewsText_OnSetColor( &_this->Separator3, _Const00DA );
  CoreRectView__OnSetBounds( &_this->Separator4, _Const00E7 );
  ViewsText_OnSetString( &_this->Separator4, EwLoadString( &_Const00AD ));
  ViewsText_OnSetColor( &_this->Separator4, _Const00DA );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BorderCurrent ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerSecond ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerMinute ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerHour ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListSecond ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListMinute ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListHour ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ShineAtBottom ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ShineAtTop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Separator2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Separator1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BorderCurrent1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerYear ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerMonth ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerDay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListYear ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListMonth ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListDay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ShineAtBottom1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ShineAtTop1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Separator3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Separator4 ), 0 );
  _this->TouchHandlerSecond.OnEnd = EwNewSlot( _this, ApplicationDateTimePicker_onEndSlide );
  _this->TouchHandlerSecond.OnStart = EwNewSlot( _this, ApplicationDateTimePicker_onStartSlide );
  _this->TouchHandlerMinute.OnEnd = EwNewSlot( _this, ApplicationDateTimePicker_onEndSlide );
  _this->TouchHandlerMinute.OnStart = EwNewSlot( _this, ApplicationDateTimePicker_onStartSlide );
  _this->TouchHandlerHour.OnEnd = EwNewSlot( _this, ApplicationDateTimePicker_onEndSlide );
  _this->TouchHandlerHour.OnStart = EwNewSlot( _this, ApplicationDateTimePicker_onStartSlide );
  _this->ListSecond.OnLoadItem = EwNewSlot( _this, ApplicationDateTimePicker_OnLoadSecondItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListSecond, &_this->TouchHandlerSecond );
  _this->ListMinute.OnLoadItem = EwNewSlot( _this, ApplicationDateTimePicker_OnLoadMinuteItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListMinute, &_this->TouchHandlerMinute );
  _this->ListHour.OnLoadItem = EwNewSlot( _this, ApplicationDateTimePicker_OnLoadHourItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListHour, &_this->TouchHandlerHour );
  ViewsText_OnSetFont( &_this->Separator2, EwLoadResource( &TemplatesDefaultFontPicker, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Separator1, EwLoadResource( &TemplatesDefaultFontPicker, 
  ResourcesFont ));
  _this->PushButtonA.OnRelease = EwNewSlot( _this, ApplicationDateTimePicker_OnClose );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButtonA, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBodyM, ResourcesFont ));
  _this->TouchHandlerYear.OnEnd = EwNewSlot( _this, ApplicationDateTimePicker_onEndSlide );
  _this->TouchHandlerYear.OnStart = EwNewSlot( _this, ApplicationDateTimePicker_onStartSlide );
  _this->TouchHandlerMonth.OnEnd = EwNewSlot( _this, ApplicationDateTimePicker_onEndSlide );
  _this->TouchHandlerMonth.OnStart = EwNewSlot( _this, ApplicationDateTimePicker_onStartSlide );
  _this->TouchHandlerDay.OnEnd = EwNewSlot( _this, ApplicationDateTimePicker_onEndSlide );
  _this->TouchHandlerDay.OnStart = EwNewSlot( _this, ApplicationDateTimePicker_onStartSlide );
  _this->ListYear.OnLoadItem = EwNewSlot( _this, ApplicationDateTimePicker_OnLoadYearItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListYear, &_this->TouchHandlerYear );
  _this->ListMonth.OnLoadItem = EwNewSlot( _this, ApplicationDateTimePicker_OnLoadMonthItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListMonth, &_this->TouchHandlerMonth );
  _this->ListDay.OnLoadItem = EwNewSlot( _this, ApplicationDateTimePicker_OnLoadDayItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListDay, &_this->TouchHandlerDay );
  ViewsText_OnSetFont( &_this->Separator3, EwLoadResource( &TemplatesDefaultFontPicker, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Separator4, EwLoadResource( &TemplatesDefaultFontPicker, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::DateTimePicker' */
void ApplicationDateTimePicker__ReInit( ApplicationDateTimePicker _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPickerControl__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsBorder__ReInit( &_this->BorderCurrent );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerSecond );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerMinute );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerHour );
  CoreVerticalList__ReInit( &_this->ListSecond );
  CoreVerticalList__ReInit( &_this->ListMinute );
  CoreVerticalList__ReInit( &_this->ListHour );
  ViewsRectangle__ReInit( &_this->ShineAtBottom );
  ViewsRectangle__ReInit( &_this->ShineAtTop );
  ViewsText__ReInit( &_this->Separator2 );
  ViewsText__ReInit( &_this->Separator1 );
  WidgetSetPushButton__ReInit( &_this->PushButtonA );
  ViewsText__ReInit( &_this->Text );
  ViewsBorder__ReInit( &_this->BorderCurrent1 );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerYear );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerMonth );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerDay );
  CoreVerticalList__ReInit( &_this->ListYear );
  CoreVerticalList__ReInit( &_this->ListMonth );
  CoreVerticalList__ReInit( &_this->ListDay );
  ViewsRectangle__ReInit( &_this->ShineAtBottom1 );
  ViewsRectangle__ReInit( &_this->ShineAtTop1 );
  ViewsText__ReInit( &_this->Separator3 );
  ViewsText__ReInit( &_this->Separator4 );
}

/* Finalizer method for the class 'Application::DateTimePicker' */
void ApplicationDateTimePicker__Done( ApplicationDateTimePicker _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPickerControl );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsBorder__Done( &_this->BorderCurrent );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerSecond );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerMinute );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerHour );
  CoreVerticalList__Done( &_this->ListSecond );
  CoreVerticalList__Done( &_this->ListMinute );
  CoreVerticalList__Done( &_this->ListHour );
  ViewsRectangle__Done( &_this->ShineAtBottom );
  ViewsRectangle__Done( &_this->ShineAtTop );
  ViewsText__Done( &_this->Separator2 );
  ViewsText__Done( &_this->Separator1 );
  WidgetSetPushButton__Done( &_this->PushButtonA );
  ViewsText__Done( &_this->Text );
  ViewsBorder__Done( &_this->BorderCurrent1 );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerYear );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerMonth );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerDay );
  CoreVerticalList__Done( &_this->ListYear );
  CoreVerticalList__Done( &_this->ListMonth );
  CoreVerticalList__Done( &_this->ListDay );
  ViewsRectangle__Done( &_this->ShineAtBottom1 );
  ViewsRectangle__Done( &_this->ShineAtTop1 );
  ViewsText__Done( &_this->Separator3 );
  ViewsText__Done( &_this->Separator4 );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPickerControl__Done( &_this->_.Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationDateTimePicker_UpdateViewState( ApplicationDateTimePicker _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isSliding;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isSliding = (XBool)(( _this->TouchHandlerHour.Sliding || _this->TouchHandlerMinute.Sliding ) 
  || _this->TouchHandlerSecond.Sliding );

  if ( isSliding )
    ViewsBorder_OnSetColor( &_this->BorderCurrent, _Const00E8 );
  else
    ViewsBorder_OnSetColor( &_this->BorderCurrent, _Const00D1 );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->sliding = isSliding;
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has finished the slide animation. Thereupon 
   the owner of the time picker is notified, that the time has been changed. */
void ApplicationDateTimePicker_onEndSlide( ApplicationDateTimePicker _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if (( !_this->TouchHandlerDay.Sliding && !_this->TouchHandlerMonth.Sliding ) && 
      !_this->TouchHandlerYear.Sliding )
  {
    XInt32 daysInMonth = ApplicationDateTimePicker_getDaysInMonth( _this, ApplicationDateTimePicker_OnGetMonth( 
      _this ), ApplicationDateTimePicker_OnGetYear( _this ));
    XInt32 day = ApplicationDateTimePicker_OnGetDay( _this );
    CoreVerticalList_OnSetNoOfItems( &_this->ListDay, daysInMonth );
    ApplicationDateTimePicker_OnSetDay( _this, (( day > daysInMonth )? daysInMonth 
    : day ));
  }
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has begun the slide animation. */
void ApplicationDateTimePicker_onStartSlide( ApplicationDateTimePicker _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This method is called by 'ListSecond' vertical list every time the list loads 
   or updates an item. */
void ApplicationDateTimePicker_OnLoadSecondItem( ApplicationDateTimePicker _this, 
  XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListSecond.Item;
  itemView = EwCastObject( _this->ListSecond.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListSecond.ViewSize ));
}

/* This method is called by 'ListMinute' vertical list every time the list loads 
   or updates an item. */
void ApplicationDateTimePicker_OnLoadMinuteItem( ApplicationDateTimePicker _this, 
  XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListMinute.Item;
  itemView = EwCastObject( _this->ListMinute.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListMinute.ViewSize ));
}

/* This method is called by 'ListHour' vertical list every time the list loads or 
   updates an item. */
void ApplicationDateTimePicker_OnLoadHourItem( ApplicationDateTimePicker _this, 
  XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListHour.Item;
  itemView = EwCastObject( _this->ListHour.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListHour.ViewSize ));
}

/* 'C' function for method : 'Application::DateTimePicker.OnGetSecond()' */
XInt32 ApplicationDateTimePicker_OnGetSecond( ApplicationDateTimePicker _this )
{
  return (( -_this->ListSecond.ScrollOffset / _this->ListSecond.ItemHeight ) + 2 ) 
    % 60;
}

/* 'C' function for method : 'Application::DateTimePicker.OnSetSecond()' */
void ApplicationDateTimePicker_OnSetSecond( ApplicationDateTimePicker _this, XInt32 
  value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 59 )
    value = 59;

  CoreVerticalList_OnSetScrollOffset( &_this->ListSecond, ( value - 2 ) * -_this->ListSecond.ItemHeight );
}

/* 'C' function for method : 'Application::DateTimePicker.OnGetMinute()' */
XInt32 ApplicationDateTimePicker_OnGetMinute( ApplicationDateTimePicker _this )
{
  return (( -_this->ListMinute.ScrollOffset / _this->ListMinute.ItemHeight ) + 2 ) 
    % 60;
}

/* 'C' function for method : 'Application::DateTimePicker.OnSetMinute()' */
void ApplicationDateTimePicker_OnSetMinute( ApplicationDateTimePicker _this, XInt32 
  value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 59 )
    value = 59;

  CoreVerticalList_OnSetScrollOffset( &_this->ListMinute, ( value - 2 ) * -_this->ListMinute.ItemHeight );
}

/* 'C' function for method : 'Application::DateTimePicker.OnGetHour()' */
XInt32 ApplicationDateTimePicker_OnGetHour( ApplicationDateTimePicker _this )
{
  return (( -_this->ListHour.ScrollOffset / _this->ListHour.ItemHeight ) + 2 ) % 
    24;
}

/* 'C' function for method : 'Application::DateTimePicker.OnSetHour()' */
void ApplicationDateTimePicker_OnSetHour( ApplicationDateTimePicker _this, XInt32 
  value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 23 )
    value = 23;

  CoreVerticalList_OnSetScrollOffset( &_this->ListHour, ( value - 2 ) * -_this->ListHour.ItemHeight );
}

/* 'C' function for method : 'Application::DateTimePicker.OnClose()' */
void ApplicationDateTimePicker_OnClose( ApplicationDateTimePicker _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->Close, ((XObject)_this ));
}

/* 'C' function for method : 'Application::DateTimePicker.OnGetYear()' */
XInt32 ApplicationDateTimePicker_OnGetYear( ApplicationDateTimePicker _this )
{
  return 1900 + ((( -_this->ListYear.ScrollOffset / _this->ListYear.ItemHeight ) 
    + 2 ) % 200 );
}

/* 'C' function for method : 'Application::DateTimePicker.OnSetYear()' */
void ApplicationDateTimePicker_OnSetYear( ApplicationDateTimePicker _this, XInt32 
  value )
{
  XInt32 daysInMonth;

  if ( value < 1900 )
    value = 1900;

  if ( value > 2100 )
    value = 2100;

  CoreVerticalList_OnSetScrollOffset( &_this->ListYear, (( value - 1900 ) - 2 ) 
  * -_this->ListYear.ItemHeight );
  daysInMonth = ApplicationDateTimePicker_getDaysInMonth( _this, ApplicationDateTimePicker_OnGetMonth( 
  _this ), value );
  CoreVerticalList_OnSetNoOfItems( &_this->ListDay, daysInMonth );

  if ( ApplicationDateTimePicker_OnGetDay( _this ) > daysInMonth )
    ApplicationDateTimePicker_OnSetDay( _this, daysInMonth );
}

/* 'C' function for method : 'Application::DateTimePicker.OnGetMonth()' */
XInt32 ApplicationDateTimePicker_OnGetMonth( ApplicationDateTimePicker _this )
{
  return 1 + ((( -_this->ListMonth.ScrollOffset / _this->ListMonth.ItemHeight ) 
    + 2 ) % 12 );
}

/* 'C' function for method : 'Application::DateTimePicker.OnSetMonth()' */
void ApplicationDateTimePicker_OnSetMonth( ApplicationDateTimePicker _this, XInt32 
  value )
{
  XInt32 daysInMonth;

  if ( value < 1 )
    value = 1;

  if ( value > 12 )
    value = 12;

  CoreVerticalList_OnSetScrollOffset( &_this->ListMonth, (( value - 1 ) - 2 ) * 
  -_this->ListMonth.ItemHeight );
  daysInMonth = ApplicationDateTimePicker_getDaysInMonth( _this, value, ApplicationDateTimePicker_OnGetYear( 
  _this ));
  CoreVerticalList_OnSetNoOfItems( &_this->ListDay, daysInMonth );

  if ( ApplicationDateTimePicker_OnGetDay( _this ) > daysInMonth )
    ApplicationDateTimePicker_OnSetDay( _this, daysInMonth );
}

/* 'C' function for method : 'Application::DateTimePicker.OnGetDay()' */
XInt32 ApplicationDateTimePicker_OnGetDay( ApplicationDateTimePicker _this )
{
  return 1 + ((( -_this->ListDay.ScrollOffset / _this->ListDay.ItemHeight ) + 2 ) 
    % _this->ListDay.NoOfItems );
}

/* 'C' function for method : 'Application::DateTimePicker.OnSetDay()' */
void ApplicationDateTimePicker_OnSetDay( ApplicationDateTimePicker _this, XInt32 
  value )
{
  XInt32 daysInMonth = ApplicationDateTimePicker_getDaysInMonth( _this, ApplicationDateTimePicker_OnGetMonth( 
    _this ), ApplicationDateTimePicker_OnGetYear( _this ));

  if ( value < 1 )
    value = 1;

  if ( value > daysInMonth )
    value = daysInMonth;

  CoreVerticalList_OnSetScrollOffset( &_this->ListDay, (( value - 2 ) - 1 ) * -_this->ListDay.ItemHeight );
}

/* This method is called by 'ListYear' vertical list every time the list loads or 
   updates an item. */
void ApplicationDateTimePicker_OnLoadYearItem( ApplicationDateTimePicker _this, 
  XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListYear.Item;
  itemView = EwCastObject( _this->ListYear.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo + 1900, 4, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListYear.ViewSize ));
}

/* This method is called by 'ListMonth' vertical list every time the list loads 
   or updates an item. */
void ApplicationDateTimePicker_OnLoadMonthItem( ApplicationDateTimePicker _this, 
  XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListMonth.Item;
  itemView = EwCastObject( _this->ListMonth.View, ViewsText );

  if ( itemView == 0 )
    return;

  switch ( itemNo )
  {
    case 1 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00E9 ));
    break;

    case 2 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00EA ));
    break;

    case 3 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00EB ));
    break;

    case 4 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00EC ));
    break;

    case 5 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00ED ));
    break;

    case 6 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00EE ));
    break;

    case 7 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00EF ));
    break;

    case 8 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00F0 ));
    break;

    case 9 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00F1 ));
    break;

    case 10 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00F2 ));
    break;

    case 11 :
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00F3 ));
    break;

    default : 
      ViewsText_OnSetString( itemView, EwLoadString( &_Const00F4 ));
  }

  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListMonth.ViewSize ));
}

/* This method is called by 'ListDay' vertical list every time the list loads or 
   updates an item. */
void ApplicationDateTimePicker_OnLoadDayItem( ApplicationDateTimePicker _this, XObject 
  sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListDay.Item;
  itemView = EwCastObject( _this->ListDay.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo + 1, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListDay.ViewSize ));
}

/* This function returns the number of days in the month and year specified in the 
   method parameters aMonth and aYear. The function takes care of the February and 
   its dependency of the leap year. */
XInt32 ApplicationDateTimePicker_getDaysInMonth( ApplicationDateTimePicker _this, 
  XInt32 aMonth, XInt32 aYear )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return CoreTime_OnGetDaysInMonth( CoreTime_Initialize2( EwNewObject( CoreTime, 
    0 ), aYear, aMonth, 1, 0, 0, 0 ));
}

/* Variants derived from the class : 'Application::DateTimePicker' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDateTimePicker )
EW_END_OF_CLASS_VARIANTS( ApplicationDateTimePicker )

/* Virtual Method Table (VMT) for the class : 'Application::DateTimePicker' */
EW_DEFINE_CLASS( ApplicationDateTimePicker, TemplatesPickerControl, Background, 
                 Close, Close, sliding, sliding, sliding, "Application::DateTimePicker" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationDateTimePicker_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationDateTimePicker )

/* Initializer for the class 'Application::HourMinutePicker' */
void ApplicationHourMinutePicker__Init( ApplicationHourMinutePicker _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPickerControl__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationHourMinutePicker );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->BorderCurrent, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerMinute, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerHour, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListMinute, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListHour, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ShineAtBottom, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ShineAtTop, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Separator1, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButtonA, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationHourMinutePicker );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0089 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0089 );
  CoreRectView__OnSetBounds( &_this->BorderCurrent, _Const00F5 );
  ViewsBorder_OnSetWidth( &_this->BorderCurrent, 3 );
  ViewsBorder_OnSetColor( &_this->BorderCurrent, _Const00D1 );
  ViewsBorder_OnSetVisible( &_this->BorderCurrent, 1 );
  CoreRectView__OnSetBounds( &_this->TouchHandlerMinute, _Const00F6 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerMinute, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerMinute, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerHour, _Const00F7 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerHour, _Const00D3 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerHour, 0.2f );
  CoreRectView__OnSetBounds( &_this->ListMinute, _Const00F6 );
  CoreVerticalList_OnSetEndless( &_this->ListMinute, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListMinute, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListMinute, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListMinute, 60 );
  CoreRectView__OnSetBounds( &_this->ListHour, _Const00F7 );
  CoreVerticalList_OnSetEndless( &_this->ListHour, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListHour, 60 );
  CoreVerticalList_OnSetItemHeight( &_this->ListHour, 30 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListHour, 24 );
  CoreRectView__OnSetBounds( &_this->ShineAtBottom, _Const00F8 );
  ViewsRectangle_OnSetColorTR( &_this->ShineAtBottom, _Const00D7 );
  ViewsRectangle_OnSetColorTL( &_this->ShineAtBottom, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->ShineAtTop, _Const00F9 );
  ViewsRectangle_OnSetColorBL( &_this->ShineAtTop, _Const00D7 );
  ViewsRectangle_OnSetColorBR( &_this->ShineAtTop, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->Separator1, _Const00FA );
  ViewsText_OnSetString( &_this->Separator1, EwLoadString( &_Const005A ));
  ViewsText_OnSetColor( &_this->Separator1, _Const00DA );
  CoreRectView__OnSetBounds( &_this->PushButtonA, _Const00DC );
  WidgetSetPushButton_OnSetLabel( &_this->PushButtonA, EwLoadString( &_Const00DD ));
  CoreRectView__OnSetBounds( &_this->Text, _Const00DE );
  ViewsText_OnSetAutoSize( &_this->Text, 1 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00DF ));
  ViewsText_OnSetColor( &_this->Text, _Const0001 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BorderCurrent ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerMinute ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerHour ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListMinute ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListHour ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ShineAtBottom ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ShineAtTop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Separator1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->TouchHandlerMinute.OnEnd = EwNewSlot( _this, ApplicationHourMinutePicker_onEndSlide );
  _this->TouchHandlerMinute.OnStart = EwNewSlot( _this, ApplicationHourMinutePicker_onStartSlide );
  _this->TouchHandlerHour.OnEnd = EwNewSlot( _this, ApplicationHourMinutePicker_onEndSlide );
  _this->TouchHandlerHour.OnStart = EwNewSlot( _this, ApplicationHourMinutePicker_onStartSlide );
  _this->ListMinute.OnLoadItem = EwNewSlot( _this, ApplicationHourMinutePicker_OnLoadMinuteItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListMinute, &_this->TouchHandlerMinute );
  _this->ListHour.OnLoadItem = EwNewSlot( _this, ApplicationHourMinutePicker_OnLoadHourItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListHour, &_this->TouchHandlerHour );
  ViewsText_OnSetFont( &_this->Separator1, EwLoadResource( &TemplatesDefaultFontPicker, 
  ResourcesFont ));
  _this->PushButtonA.OnRelease = EwNewSlot( _this, ApplicationHourMinutePicker_OnClose );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButtonA, EwGetAutoObject( &WidgetSetPushButton_Lime_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBodyM, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::HourMinutePicker' */
void ApplicationHourMinutePicker__ReInit( ApplicationHourMinutePicker _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPickerControl__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsBorder__ReInit( &_this->BorderCurrent );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerMinute );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerHour );
  CoreVerticalList__ReInit( &_this->ListMinute );
  CoreVerticalList__ReInit( &_this->ListHour );
  ViewsRectangle__ReInit( &_this->ShineAtBottom );
  ViewsRectangle__ReInit( &_this->ShineAtTop );
  ViewsText__ReInit( &_this->Separator1 );
  WidgetSetPushButton__ReInit( &_this->PushButtonA );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::HourMinutePicker' */
void ApplicationHourMinutePicker__Done( ApplicationHourMinutePicker _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPickerControl );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsBorder__Done( &_this->BorderCurrent );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerMinute );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerHour );
  CoreVerticalList__Done( &_this->ListMinute );
  CoreVerticalList__Done( &_this->ListHour );
  ViewsRectangle__Done( &_this->ShineAtBottom );
  ViewsRectangle__Done( &_this->ShineAtTop );
  ViewsText__Done( &_this->Separator1 );
  WidgetSetPushButton__Done( &_this->PushButtonA );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPickerControl__Done( &_this->_.Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationHourMinutePicker_UpdateViewState( ApplicationHourMinutePicker _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isSliding;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isSliding = (XBool)( _this->TouchHandlerHour.Sliding || _this->TouchHandlerMinute.Sliding );

  if ( isSliding )
    ViewsBorder_OnSetColor( &_this->BorderCurrent, _Const00E8 );
  else
    ViewsBorder_OnSetColor( &_this->BorderCurrent, _Const00D1 );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->sliding = isSliding;
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has finished the slide animation. Thereupon 
   the owner of the time picker is notified, that the time has been changed. */
void ApplicationHourMinutePicker_onEndSlide( ApplicationHourMinutePicker _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has begun the slide animation. */
void ApplicationHourMinutePicker_onStartSlide( ApplicationHourMinutePicker _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This method is called by 'ListMinute' vertical list every time the list loads 
   or updates an item. */
void ApplicationHourMinutePicker_OnLoadMinuteItem( ApplicationHourMinutePicker _this, 
  XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListMinute.Item;
  itemView = EwCastObject( _this->ListMinute.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListMinute.ViewSize ));
}

/* This method is called by 'ListHour' vertical list every time the list loads or 
   updates an item. */
void ApplicationHourMinutePicker_OnLoadHourItem( ApplicationHourMinutePicker _this, 
  XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListHour.Item;
  itemView = EwCastObject( _this->ListHour.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &TemplatesDefaultFontPicker, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0001 );
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, _this->ListHour.ViewSize ));
}

/* 'C' function for method : 'Application::HourMinutePicker.OnGetMinute()' */
XInt32 ApplicationHourMinutePicker_OnGetMinute( ApplicationHourMinutePicker _this )
{
  return (( -_this->ListMinute.ScrollOffset / _this->ListMinute.ItemHeight ) + 2 ) 
    % 60;
}

/* 'C' function for method : 'Application::HourMinutePicker.OnSetMinute()' */
void ApplicationHourMinutePicker_OnSetMinute( ApplicationHourMinutePicker _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 59 )
    value = 59;

  CoreVerticalList_OnSetScrollOffset( &_this->ListMinute, ( value - 2 ) * -_this->ListMinute.ItemHeight );
}

/* 'C' function for method : 'Application::HourMinutePicker.OnGetHour()' */
XInt32 ApplicationHourMinutePicker_OnGetHour( ApplicationHourMinutePicker _this )
{
  return (( -_this->ListHour.ScrollOffset / _this->ListHour.ItemHeight ) + 2 ) % 
    24;
}

/* 'C' function for method : 'Application::HourMinutePicker.OnSetHour()' */
void ApplicationHourMinutePicker_OnSetHour( ApplicationHourMinutePicker _this, XInt32 
  value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 23 )
    value = 23;

  CoreVerticalList_OnSetScrollOffset( &_this->ListHour, ( value - 2 ) * -_this->ListHour.ItemHeight );
}

/* 'C' function for method : 'Application::HourMinutePicker.OnClose()' */
void ApplicationHourMinutePicker_OnClose( ApplicationHourMinutePicker _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->Close, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::HourMinutePicker' */
EW_DEFINE_CLASS_VARIANTS( ApplicationHourMinutePicker )
EW_END_OF_CLASS_VARIANTS( ApplicationHourMinutePicker )

/* Virtual Method Table (VMT) for the class : 'Application::HourMinutePicker' */
EW_DEFINE_CLASS( ApplicationHourMinutePicker, TemplatesPickerControl, Background, 
                 Close, Close, sliding, sliding, sliding, "Application::HourMinutePicker" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationHourMinutePicker_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationHourMinutePicker )

/* Include a file containing the bitmap resource : 'Application::DayTime' */
#include "_ApplicationDayTime.h"

/* Table with links to derived variants of the bitmap resource : 'Application::DayTime' */
EW_RES_WITHOUT_VARIANTS( ApplicationDayTime )

/* Include a file containing the bitmap resource : 'Application::NightTime' */
#include "_ApplicationNightTime.h"

/* Table with links to derived variants of the bitmap resource : 'Application::NightTime' */
EW_RES_WITHOUT_VARIANTS( ApplicationNightTime )

/* Include a file containing the bitmap resource : 'Application::Wireless' */
#include "_ApplicationWireless.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Wireless' */
EW_RES_WITHOUT_VARIANTS( ApplicationWireless )

/* Include a file containing the bitmap resource : 'Application::Error' */
#include "_ApplicationError.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Error' */
EW_RES_WITHOUT_VARIANTS( ApplicationError )

/* Include a file containing the bitmap resource : 'Application::PetrolCan' */
#include "_ApplicationPetrolCan.h"

/* Table with links to derived variants of the bitmap resource : 'Application::PetrolCan' */
EW_RES_WITHOUT_VARIANTS( ApplicationPetrolCan )

/* Embedded Wizard */
