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

#ifndef WidgetSet_H
#define WidgetSet_H

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

#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetVerticalValueBar.h"
#include "_WidgetSetVerticalValueBarConfig.h"
#include "_WidgetSetWidgetConfig.h"

/* Bitmap resource used per default by the Widgets customized for the large size. */
EW_DECLARE_BITMAP_RES( WidgetSetPushButtonLarge )

/* Bitmap resource used per default by the Widgets customized for the large size. */
EW_DECLARE_BITMAP_RES( WidgetSetVerticalValueBarLarge )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetHorizontalSliderTrackMedium )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetPushButtonMedium )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetSwitchMedium )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetThumbKnobMedium )

/* This autoobject provides the default customization for the 'vertical value bar' 
   widget (WidgetSet::VerticalValueBar) in its large size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetVerticalValueBar_Lime_Large, WidgetSetVerticalValueBarConfig )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its large size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetPushButton_Lime_Large, WidgetSetPushButtonConfig )

/* This autoobject provides the default customization for the 'horizontal slider' 
   widget (WidgetSet::HorizontalSlider) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DECLARE_AUTOOBJECT( WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetPushButton_Lime_Medium, WidgetSetPushButtonConfig )

#ifdef __cplusplus
  }
#endif

#endif /* WidgetSet_H */

/* Embedded Wizard */
