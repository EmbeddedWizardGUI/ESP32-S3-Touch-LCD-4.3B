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

#ifndef Application_H
#define Application_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 15
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 15
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

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

/* Bitmap resource : 'Application::Battery' */
EW_DECLARE_BITMAP_RES( ApplicationBattery )

/* Bitmap resource : 'Application::Notification' */
EW_DECLARE_BITMAP_RES( ApplicationNotification )

/* Bitmap resource : 'Application::Bolt' */
EW_DECLARE_BITMAP_RES( ApplicationBolt )

/* Bitmap resource : 'Application::Generator' */
EW_DECLARE_BITMAP_RES( ApplicationGenerator )

/* Bitmap resource : 'Application::PowerGrid' */
EW_DECLARE_BITMAP_RES( ApplicationPowerGrid )

/* Bitmap resource : 'Application::House' */
EW_DECLARE_BITMAP_RES( ApplicationHouse )

/* Bitmap resource : 'Application::ScreenOff' */
EW_DECLARE_BITMAP_RES( ApplicationScreenOff )

/* Bitmap resource : 'Application::ArrowLeft' */
EW_DECLARE_BITMAP_RES( ApplicationArrowLeft )

/* Bitmap resource : 'Application::ArrowRight' */
EW_DECLARE_BITMAP_RES( ApplicationArrowRight )

/* Font resource : 'Application::FontHeader' */
EW_DECLARE_FONT_RES( ApplicationFontHeader )

/* Font resource : 'Application::FontStatusBar' */
EW_DECLARE_FONT_RES( ApplicationFontStatusBar )

/* Font resource : 'Application::FontBodyL' */
EW_DECLARE_FONT_RES( ApplicationFontBodyL )

/* Font resource : 'Application::FontBodyM' */
EW_DECLARE_FONT_RES( ApplicationFontBodyM )

/* Font resource : 'Application::FontBodyS' */
EW_DECLARE_FONT_RES( ApplicationFontBodyS )

/* Font resource : 'Application::FontBottomNode' */
EW_DECLARE_FONT_RES( ApplicationFontBottomNode )

/* Bitmap resource : 'Application::DayTime' */
EW_DECLARE_BITMAP_RES( ApplicationDayTime )

/* Bitmap resource : 'Application::NightTime' */
EW_DECLARE_BITMAP_RES( ApplicationNightTime )

/* Bitmap resource : 'Application::Wireless' */
EW_DECLARE_BITMAP_RES( ApplicationWireless )

/* Bitmap resource : 'Application::Error' */
EW_DECLARE_BITMAP_RES( ApplicationError )

/* Bitmap resource : 'Application::PetrolCan' */
EW_DECLARE_BITMAP_RES( ApplicationPetrolCan )

/* Forward declaration of the class Effects::SlideTransition */
#ifndef _EffectsSlideTransition_
  EW_DECLARE_CLASS( EffectsSlideTransition )
#define _EffectsSlideTransition_
#endif

/* User defined constant: 'Application::ColorWarning' */
extern const XColor ApplicationColorWarning;

/* User defined constant: 'Application::ColorCityPower' */
extern const XColor ApplicationColorCityPower;

/* User defined constant: 'Application::ColorGeneratorBackup' */
extern const XColor ApplicationColorGeneratorBackup;

/* User defined constant: 'Application::ColorSavingMode' */
extern const XColor ApplicationColorSavingMode;

/* User defined auto object: 'Application::SlideTop' */
EW_DECLARE_AUTOOBJECT( ApplicationSlideTop, EffectsSlideTransition )

/* User defined auto object: 'Application::SlideBottom' */
EW_DECLARE_AUTOOBJECT( ApplicationSlideBottom, EffectsSlideTransition )

/* User defined auto object: 'Application::SlideLeft' */
EW_DECLARE_AUTOOBJECT( ApplicationSlideLeft, EffectsSlideTransition )

/* User defined auto object: 'Application::SlideRight' */
EW_DECLARE_AUTOOBJECT( ApplicationSlideRight, EffectsSlideTransition )

/* User defined auto object: 'Application::Present' */
EW_DECLARE_AUTOOBJECT( ApplicationPresent, EffectsSlideTransition )

/* This object represents an instance of the device interface implemented in the 
   class Application::DeviceClass. */
EW_DECLARE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* User defined auto object: 'Application::SettingsLocked' */
EW_DECLARE_AUTOOBJECT( ApplicationSettingsLocked, ApplicationSettingsClass )

/* User defined auto object: 'Application::SettingsModified' */
EW_DECLARE_AUTOOBJECT( ApplicationSettingsModified, ApplicationSettingsClass )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
