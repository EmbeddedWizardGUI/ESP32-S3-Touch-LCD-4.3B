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

#ifndef _ApplicationSettingsClass_H
#define _ApplicationSettingsClass_H

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

/* Forward declaration of the class Application::SettingsClass */
#ifndef _ApplicationSettingsClass_
  EW_DECLARE_CLASS( ApplicationSettingsClass )
#define _ApplicationSettingsClass_
#endif


/* Deklaration of class : 'Application::SettingsClass' */
EW_DEFINE_FIELDS( ApplicationSettingsClass, XObject )
  EW_VARIABLE( Page1SettingB,   XInt32 )
  EW_VARIABLE( Page1SettingC,   XInt32 )
  EW_VARIABLE( Page1SettingD,   XInt32 )
  EW_VARIABLE( Page1SettingE,   XInt32 )
  EW_VARIABLE( Page1SettingF,   XInt32 )
  EW_VARIABLE( Page1SettingG,   XInt32 )
  EW_VARIABLE( Page1SettingH,   XInt32 )
  EW_VARIABLE( Page2SettingA,   XInt32 )
  EW_VARIABLE( Page2SettingB,   XInt32 )
  EW_VARIABLE( Page2SettingC,   XInt32 )
  EW_VARIABLE( Page2SettingD,   XInt32 )
  EW_VARIABLE( Page2SettingE,   XInt32 )
  EW_VARIABLE( Page2SettingF,   XInt32 )
  EW_VARIABLE( Page3SettingB,   XInt32 )
  EW_VARIABLE( Page3SettingC,   XInt32 )
  EW_VARIABLE( Page3SettingD,   XInt32 )
  EW_VARIABLE( Page3SettingE,   XInt32 )
  EW_VARIABLE( Page1SettingA,   XBool )
  EW_VARIABLE( Page3SettingA,   XBool )
EW_END_OF_FIELDS( ApplicationSettingsClass )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsClass' */
EW_DEFINE_METHODS( ApplicationSettingsClass, XObject )
EW_END_OF_METHODS( ApplicationSettingsClass )

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSettingsClass_H */

/* Embedded Wizard */
