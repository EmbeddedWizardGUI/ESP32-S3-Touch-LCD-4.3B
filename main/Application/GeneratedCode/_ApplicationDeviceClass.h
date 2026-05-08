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

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

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

#include "_CoreTimer.h"

/* Forward declaration of the class Application::DateTimePicker */
#ifndef _ApplicationDateTimePicker_
  EW_DECLARE_CLASS( ApplicationDateTimePicker )
#define _ApplicationDateTimePicker_
#endif

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif

/* Forward declaration of the class Application::SettingsClass */
#ifndef _ApplicationSettingsClass_
  EW_DECLARE_CLASS( ApplicationSettingsClass )
#define _ApplicationSettingsClass_
#endif


/* This class implements the interface between the GUI application and the device. */
EW_DEFINE_FIELDS( ApplicationDeviceClass, XObject )
  EW_OBJECT  ( Pump,            CoreTimer )
  EW_VARIABLE( SettingsLocked,  ApplicationSettingsClass )
  EW_VARIABLE( SettingsModified, ApplicationSettingsClass )
  EW_PROPERTY( RtcTime,         ApplicationDateTimePicker )
  EW_PROPERTY( Battery,         XInt32 )
  EW_PROPERTY( StartButtonState, XBool )
  EW_PROPERTY( StopButtonState, XBool )
  EW_PROPERTY( CityPowerState,  XBool )
  EW_PROPERTY( GeneratorBackupState, XBool )
  EW_PROPERTY( BacklightState,  XBool )
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, XObject )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg );

/* 'C' function for method : 'Application::DeviceClass.OnSetStartButtonState()' */
void ApplicationDeviceClass_OnSetStartButtonState( ApplicationDeviceClass _this, 
  XBool value );

/* 'C' function for method : 'Application::DeviceClass.OnSetStopButtonState()' */
void ApplicationDeviceClass_OnSetStopButtonState( ApplicationDeviceClass _this, 
  XBool value );

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateCityPowerState( ApplicationDeviceClass _this, 
  XBool aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateCityPowerState()' */
void ApplicationDeviceClass__UpdateCityPowerState( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateCityPowerState(). */
#define _ApplicationDeviceClass__UpdateCityPowerState_

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateGeneratorBackupState( ApplicationDeviceClass _this, 
  XBool aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateGeneratorBackupState()' */
void ApplicationDeviceClass__UpdateGeneratorBackupState( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateGeneratorBackupState(). */
#define _ApplicationDeviceClass__UpdateGeneratorBackupState_

/* 'C' function for method : 'Application::DeviceClass.OnSetBacklightState()' */
void ApplicationDeviceClass_OnSetBacklightState( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_ReadSettingsFromSd( ApplicationDeviceClass _this );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.ReadSettingsFromSd()' */
void ApplicationDeviceClass__ReadSettingsFromSd( void* _this );

/* The following define announces the presence of the method Application::DeviceClass.ReadSettingsFromSd(). */
#define _ApplicationDeviceClass__ReadSettingsFromSd_

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_WriteSettingsToSd( ApplicationDeviceClass _this );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.WriteSettingsToSd()' */
void ApplicationDeviceClass__WriteSettingsToSd( void* _this );

/* The following define announces the presence of the method Application::DeviceClass.WriteSettingsToSd(). */
#define _ApplicationDeviceClass__WriteSettingsToSd_

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateBattery( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateBattery()' */
void ApplicationDeviceClass__UpdateBattery( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateBattery(). */
#define _ApplicationDeviceClass__UpdateBattery_

/* 'C' function for method : 'Application::DeviceClass.OnSetRtcTime()' */
void ApplicationDeviceClass_OnSetRtcTime( ApplicationDeviceClass _this, ApplicationDateTimePicker 
  value );

/* 'C' function for method : 'Application::DeviceClass.OnPump()' */
void ApplicationDeviceClass_OnPump( ApplicationDeviceClass _this, XObject sender );

/* Default onget method for the property 'StartButtonState' */
XBool ApplicationDeviceClass_OnGetStartButtonState( ApplicationDeviceClass _this );

/* Default onget method for the property 'StopButtonState' */
XBool ApplicationDeviceClass_OnGetStopButtonState( ApplicationDeviceClass _this );

/* Default onget method for the property 'CityPowerState' */
XBool ApplicationDeviceClass_OnGetCityPowerState( ApplicationDeviceClass _this );

/* Default onset method for the property 'CityPowerState' */
void ApplicationDeviceClass_OnSetCityPowerState( ApplicationDeviceClass _this, XBool 
  value );

/* Default onget method for the property 'GeneratorBackupState' */
XBool ApplicationDeviceClass_OnGetGeneratorBackupState( ApplicationDeviceClass _this );

/* Default onset method for the property 'GeneratorBackupState' */
void ApplicationDeviceClass_OnSetGeneratorBackupState( ApplicationDeviceClass _this, 
  XBool value );

/* Default onget method for the property 'BacklightState' */
XBool ApplicationDeviceClass_OnGetBacklightState( ApplicationDeviceClass _this );

/* Default onget method for the property 'Battery' */
XInt32 ApplicationDeviceClass_OnGetBattery( ApplicationDeviceClass _this );

/* Default onset method for the property 'Battery' */
void ApplicationDeviceClass_OnSetBattery( ApplicationDeviceClass _this, XInt32 value );

/* Default onget method for the property 'RtcTime' */
ApplicationDateTimePicker ApplicationDeviceClass_OnGetRtcTime( ApplicationDeviceClass _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
