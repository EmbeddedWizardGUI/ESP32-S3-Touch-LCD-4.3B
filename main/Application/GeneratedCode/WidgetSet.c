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
#include "_CoreKeyPressHandler.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetVerticalValueBar.h"
#include "_WidgetSetVerticalValueBarConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Constant values used in this 'C' module only. */
static const XPoint _Const0000 = { 45, 68 };
static const XColor _Const0001 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0002 = { 0xA8, 0xAB, 0xAB, 0xFF };
static const XColor _Const0003 = { 0x6C, 0x6E, 0x70, 0xFF };
static const XColor _Const0004 = { 0xA8, 0xAB, 0xAB, 0xAA };
static const XPoint _Const0005 = { 51, 51 };
static const XPoint _Const0006 = { 45, 39 };
static const XPoint _Const0007 = { 70, 39 };
static const XPoint _Const0008 = { 34, 34 };
static const XColor _Const0009 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const000A = {{ 0, 0 }, { 50, 200 }};
static const XRect _Const000B = {{ 0, 0 }, { 200, 50 }};
static const XPoint _Const000C = { 0, 50 };
static const XPoint _Const000D = { 200, 50 };
static const XPoint _Const000E = { 200, 0 };
static const XPoint _Const000F = { 0, 0 };
static const XRect _Const0010 = {{ 0, 0 }, { 0, 0 }};
static const XRect _Const0011 = {{ -8, -8 }, { 9, 9 }};
static const XRect _Const0012 = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const0013 = { 150, 50 };
static const XPoint _Const0014 = { 150, 0 };

/* Include a file containing the bitmap resource : 'WidgetSet::PushButtonLarge' */
#include "_WidgetSetPushButtonLarge.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::PushButtonLarge' */
EW_RES_WITHOUT_VARIANTS( WidgetSetPushButtonLarge )

/* Include a file containing the bitmap resource : 'WidgetSet::VerticalValueBarLarge' */
#include "_WidgetSetVerticalValueBarLarge.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::VerticalValueBarLarge' */
EW_RES_WITHOUT_VARIANTS( WidgetSetVerticalValueBarLarge )

/* This autoobject provides the default customization for the 'vertical value bar' 
   widget (WidgetSet::VerticalValueBar) in its large size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetVerticalValueBar_Lime_Large, WidgetSetVerticalValueBarConfig )

/* Initializer for the auto object 'WidgetSet::VerticalValueBar_Lime_Large' */
void WidgetSetVerticalValueBar_Lime_Large__Init( WidgetSetVerticalValueBarConfig _this )
{
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveFrame( _this, 0 );
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveBitmap( _this, EwLoadResource( 
  &WidgetSetVerticalValueBarLarge, ResourcesBitmap ));
  WidgetSetVerticalValueBarConfig_OnSetTrackBelowFrame( _this, 1 );
  WidgetSetVerticalValueBarConfig_OnSetTrackBelowBitmap( _this, EwLoadResource( 
  &WidgetSetVerticalValueBarLarge, ResourcesBitmap ));
  WidgetSetVerticalValueBarConfig_OnSetWidgetMinSize( _this, _Const0000 );
}

/* Re-Initializer for the auto object 'WidgetSet::VerticalValueBar_Lime_Large' */
void WidgetSetVerticalValueBar_Lime_Large__ReInit( WidgetSetVerticalValueBarConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::VerticalValueBar_Lime_Large' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetVerticalValueBar_Lime_Large )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetVerticalValueBar_Lime_Large )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its large size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Lime_Large, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Lime_Large' */
void WidgetSetPushButton_Lime_Large__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0002 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0003 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 9 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 9 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 9 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 9 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0003 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 9 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 9 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 9 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 9 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontLarge, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetFaceFrameActive( _this, 3 );
  WidgetSetPushButtonConfig_OnSetFaceFrameFocused( _this, 2 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( _this, 0 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapActive( _this, EwLoadResource( &WidgetSetPushButtonLarge, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( _this, EwLoadResource( &WidgetSetPushButtonLarge, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( _this, EwLoadResource( &WidgetSetPushButtonLarge, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( _this, EwLoadResource( &WidgetSetPushButtonLarge, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0005 );
}

/* Re-Initializer for the auto object 'WidgetSet::PushButton_Lime_Large' */
void WidgetSetPushButton_Lime_Large__ReInit( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Lime_Large' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Lime_Large )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Lime_Large )

/* Include a file containing the bitmap resource : 'WidgetSet::HorizontalSliderTrackMedium' */
#include "_WidgetSetHorizontalSliderTrackMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::HorizontalSliderTrackMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetHorizontalSliderTrackMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::PushButtonMedium' */
#include "_WidgetSetPushButtonMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::PushButtonMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetPushButtonMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::SwitchMedium' */
#include "_WidgetSetSwitchMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::SwitchMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetSwitchMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::ThumbKnobMedium' */
#include "_WidgetSetThumbKnobMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::ThumbKnobMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetThumbKnobMedium )

/* This autoobject provides the default customization for the 'horizontal slider' 
   widget (WidgetSet::HorizontalSlider) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetHorizontalSlider_Lime_Medium, WidgetSetHorizontalSliderConfig )

/* Initializer for the auto object 'WidgetSet::HorizontalSlider_Lime_Medium' */
void WidgetSetHorizontalSlider_Lime_Medium__Init( WidgetSetHorizontalSliderConfig _this )
{
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( _this, 100 );
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( _this, 500 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( _this, -2 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( _this, -2 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameActive( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameFocused( _this, 2 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameDisabled( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( _this, EwLoadResource( 
  &WidgetSetThumbKnobMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameActive( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameFocused( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDisabled( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDefault( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapActive( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapFocused( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDefault( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameActive( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameFocused( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDisabled( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapActive( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDefault( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( _this, _Const0006 );
}

/* Re-Initializer for the auto object 'WidgetSet::HorizontalSlider_Lime_Medium' */
void WidgetSetHorizontalSlider_Lime_Medium__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::HorizontalSlider_Lime_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Lime_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Lime_Medium )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DEFINE_AUTOOBJECT( WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig )

/* Initializer for the auto object 'WidgetSet::Switch_Lime_Medium' */
void WidgetSetSwitch_Lime_Medium__Init( WidgetSetToggleButtonConfig _this )
{
  WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetLabelMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintActive( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintActive( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetLabelAlignment( _this, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetLabelOnFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetLabelOffFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetIconAlignment( _this, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetFaceLayout( _this, CoreLayoutAlignToRight );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( _this, 7 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( _this, 5 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( _this, 3 );
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( _this, 6 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( _this, 4 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( _this, 0 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetWidgetMinSize( _this, _Const0007 );
}

/* Re-Initializer for the auto object 'WidgetSet::Switch_Lime_Medium' */
void WidgetSetSwitch_Lime_Medium__ReInit( WidgetSetToggleButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::Switch_Lime_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Medium )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Lime_Medium, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Lime_Medium' */
void WidgetSetPushButton_Lime_Medium__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0002 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0003 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0003 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetFaceFrameActive( _this, 3 );
  WidgetSetPushButtonConfig_OnSetFaceFrameFocused( _this, 2 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( _this, 0 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapActive( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0008 );
}

/* Re-Initializer for the auto object 'WidgetSet::PushButton_Lime_Medium' */
void WidgetSetPushButton_Lime_Medium__ReInit( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Lime_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Lime_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Lime_Medium )

/* Initializer for the class 'WidgetSet::VerticalValueBarConfig' */
void WidgetSetVerticalValueBarConfig__Init( WidgetSetVerticalValueBarConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetVerticalValueBarConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetVerticalValueBarConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->TrackAboveFrame = -1;
  _this->TrackBelowFrame = -1;
}

/* Re-Initializer for the class 'WidgetSet::VerticalValueBarConfig' */
void WidgetSetVerticalValueBarConfig__ReInit( WidgetSetVerticalValueBarConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::VerticalValueBarConfig' */
void WidgetSetVerticalValueBarConfig__Done( WidgetSetVerticalValueBarConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveFrame()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveFrame( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->TrackAboveFrame == value )
    return;

  _this->TrackAboveFrame = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveBitmap()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveBitmap( WidgetSetVerticalValueBarConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackAboveBitmap == value )
    return;

  _this->TrackAboveBitmap = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowFrame()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowFrame( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->TrackBelowFrame == value )
    return;

  _this->TrackBelowFrame = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowBitmap()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowBitmap( WidgetSetVerticalValueBarConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackBelowBitmap == value )
    return;

  _this->TrackBelowBitmap = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetWidgetMinSize()' */
void WidgetSetVerticalValueBarConfig_OnSetWidgetMinSize( WidgetSetVerticalValueBarConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::VerticalValueBarConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetVerticalValueBarConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetVerticalValueBarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalValueBarConfig' */
EW_DEFINE_CLASS( WidgetSetVerticalValueBarConfig, WidgetSetWidgetConfig, TrackAboveBitmap, 
                 TrackAboveBitmap, TrackAboveFrame, TrackAboveFrame, TrackAboveFrame, 
                 TrackAboveFrame, "WidgetSet::VerticalValueBarConfig" )
EW_END_OF_CLASS( WidgetSetVerticalValueBarConfig )

/* Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Init( WidgetSetHorizontalSliderConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSliderConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSliderConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ThumbFrameActive = -1;
  _this->ThumbFrameFocused = -1;
  _this->ThumbFrameDisabled = -1;
  _this->ThumbFrameDefault = -1;
  _this->TrackRightFrameActive = -1;
  _this->TrackRightFrameFocused = -1;
  _this->TrackRightFrameDisabled = -1;
  _this->TrackRightFrameDefault = -1;
  _this->TrackLeftFrameActive = -1;
  _this->TrackLeftFrameFocused = -1;
  _this->TrackLeftFrameDisabled = -1;
  _this->TrackLeftFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Done( WidgetSetHorizontalSliderConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatPeriod()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatPeriod == value )
    return;

  _this->KeyRepeatPeriod = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatDelay()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatDelay == value )
    return;

  _this->KeyRepeatDelay = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameActive == value )
    return;

  _this->ThumbFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameFocused == value )
    return;

  _this->ThumbFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDisabled == value )
    return;

  _this->ThumbFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDefault == value )
    return;

  _this->ThumbFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapActive == value )
    return;

  _this->ThumbBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapFocused == value )
    return;

  _this->ThumbBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDisabled == value )
    return;

  _this->ThumbBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDefault == value )
    return;

  _this->ThumbBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginRight()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginRight == value )
    return;

  _this->ThumbMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginLeft()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginLeft == value )
    return;

  _this->ThumbMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameActive == value )
    return;

  _this->TrackRightFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameFocused == value )
    return;

  _this->TrackRightFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameDisabled == value )
    return;

  _this->TrackRightFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameDefault == value )
    return;

  _this->TrackRightFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapActive == value )
    return;

  _this->TrackRightBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapFocused == value )
    return;

  _this->TrackRightBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapDisabled == value )
    return;

  _this->TrackRightBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapDefault == value )
    return;

  _this->TrackRightBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameActive == value )
    return;

  _this->TrackLeftFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameFocused == value )
    return;

  _this->TrackLeftFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameDisabled == value )
    return;

  _this->TrackLeftFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameDefault == value )
    return;

  _this->TrackLeftFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapActive == value )
    return;

  _this->TrackLeftBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapFocused == value )
    return;

  _this->TrackLeftBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapDisabled == value )
    return;

  _this->TrackLeftBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapDefault == value )
    return;

  _this->TrackLeftBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalSliderConfig, WidgetSetWidgetConfig, ThumbBitmapActive, 
                 ThumbBitmapActive, KeyRepeatPeriod, KeyRepeatPeriod, KeyRepeatPeriod, 
                 KeyRepeatPeriod, "WidgetSet::HorizontalSliderConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalSliderConfig )

/* Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Init( WidgetSetToggleButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->LabelOnColorActive = _Const0009;
  _this->LabelOnColorFocused = _Const0009;
  _this->LabelOnColorDisabled = _Const0009;
  _this->LabelOnColorDefault = _Const0009;
  _this->LabelOffColorActive = _Const0009;
  _this->LabelOffColorFocused = _Const0009;
  _this->LabelOffColorDisabled = _Const0009;
  _this->LabelOffColorDefault = _Const0009;
  _this->IconOnTintActive = _Const0001;
  _this->IconOnTintFocused = _Const0001;
  _this->IconOnTintDisabled = _Const0001;
  _this->IconOnTintDefault = _Const0001;
  _this->IconOffTintActive = _Const0001;
  _this->IconOffTintFocused = _Const0001;
  _this->IconOffTintDisabled = _Const0001;
  _this->IconOffTintDefault = _Const0001;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->FaceLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->FaceOnFrameActive = -1;
  _this->FaceOnFrameFocused = -1;
  _this->FaceOnFrameDisabled = -1;
  _this->FaceOnFrameDefault = -1;
  _this->FaceOffFrameActive = -1;
  _this->FaceOffFrameFocused = -1;
  _this->FaceOffFrameDisabled = -1;
  _this->FaceOffFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__ReInit( WidgetSetToggleButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Done( WidgetSetToggleButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorActive, value ))
    return;

  _this->LabelOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorFocused, value ))
    return;

  _this->LabelOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDisabled, value ))
    return;

  _this->LabelOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDefault, value ))
    return;

  _this->LabelOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorActive, value ))
    return;

  _this->LabelOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorFocused, value ))
    return;

  _this->LabelOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDisabled, value ))
    return;

  _this->LabelOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDefault, value ))
    return;

  _this->LabelOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetLabelMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintActive, value ))
    return;

  _this->IconOnTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintFocused, value ))
    return;

  _this->IconOnTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDisabled, value ))
    return;

  _this->IconOnTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDefault, value ))
    return;

  _this->IconOnTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintActive, value ))
    return;

  _this->IconOffTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintFocused, value ))
    return;

  _this->IconOffTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDisabled, value ))
    return;

  _this->IconOffTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDefault, value ))
    return;

  _this->IconOffTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetIconMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelAlignment()' */
void WidgetSetToggleButtonConfig_OnSetLabelAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->LabelAlignment == value )
    return;

  _this->LabelAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOnFont == value )
    return;

  _this->LabelOnFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOffFont == value )
    return;

  _this->LabelOffFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconAlignment()' */
void WidgetSetToggleButtonConfig_OnSetIconAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->IconAlignment == value )
    return;

  _this->IconAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceLayout()' */
void WidgetSetToggleButtonConfig_OnSetFaceLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->FaceLayout == value )
    return;

  _this->FaceLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameActive == value )
    return;

  _this->FaceOnFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameFocused == value )
    return;

  _this->FaceOnFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDisabled == value )
    return;

  _this->FaceOnFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDefault == value )
    return;

  _this->FaceOnFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapActive == value )
    return;

  _this->FaceOnBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapFocused == value )
    return;

  _this->FaceOnBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDisabled == value )
    return;

  _this->FaceOnBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDefault == value )
    return;

  _this->FaceOnBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameActive == value )
    return;

  _this->FaceOffFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameFocused == value )
    return;

  _this->FaceOffFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDisabled == value )
    return;

  _this->FaceOffFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDefault == value )
    return;

  _this->FaceOffFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapActive == value )
    return;

  _this->FaceOffBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapFocused == value )
    return;

  _this->FaceOffBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDisabled == value )
    return;

  _this->FaceOffBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDefault == value )
    return;

  _this->FaceOffBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetToggleButtonConfig_OnSetWidgetMinSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig, LabelOnFont, 
                 LabelOnFont, LabelOnColorActive, LabelOnColorActive, LabelOnColorActive, 
                 LabelOnColorActive, "WidgetSet::ToggleButtonConfig" )
EW_END_OF_CLASS( WidgetSetToggleButtonConfig )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->LabelColorActive = _Const0009;
  _this->LabelColorFocused = _Const0009;
  _this->LabelColorDisabled = _Const0009;
  _this->LabelColorDefault = _Const0009;
  _this->IconTintDisabled = _Const0001;
  _this->IconTintDefault = _Const0001;
  _this->FaceFrameActive = -1;
  _this->FaceFrameFocused = -1;
  _this->FaceFrameDisabled = -1;
  _this->FaceFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginBottom == value )
    return;

  _this->LabelMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginTop()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginTop == value )
    return;

  _this->LabelMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginLeft == value )
    return;

  _this->LabelMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetIconTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDisabled, value ))
    return;

  _this->IconTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDefault()' */
void WidgetSetPushButtonConfig_OnSetIconTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDefault, value ))
    return;

  _this->IconTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetIconMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginBottom == value )
    return;

  _this->IconMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginTop()' */
void WidgetSetPushButtonConfig_OnSetIconMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginTop == value )
    return;

  _this->IconMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginRight()' */
void WidgetSetPushButtonConfig_OnSetIconMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetIconMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginLeft == value )
    return;

  _this->IconMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameActive()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameActive == value )
    return;

  _this->FaceFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameFocused == value )
    return;

  _this->FaceFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDisabled == value )
    return;

  _this->FaceFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDefault == value )
    return;

  _this->FaceFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapActive()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapActive( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapActive == value )
    return;

  _this->FaceBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapFocused == value )
    return;

  _this->FaceBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDisabled == value )
    return;

  _this->FaceBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDefault == value )
    return;

  _this->FaceBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetPushButtonConfig_OnSetWidgetMinSize( WidgetSetPushButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, LabelFont, 
                 LabelColorActive, LabelColorActive, LabelColorActive, LabelColorActive, 
                 "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::VerticalValueBar' */
void WidgetSetVerticalValueBar__Init( WidgetSetVerticalValueBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetVerticalValueBar );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetVerticalValueBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000A );
  _this->setupCurrentPos = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  _this->MaxValue = 100;
  _this->CurrentValue = 50;
  _this->FloatEffect.Super1.OnFinished = EwNewSlot( _this, WidgetSetVerticalValueBar_onEndFloatEffect );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, WidgetSetVerticalValueBar_onFloatEffect );
}

/* Re-Initializer for the class 'WidgetSet::VerticalValueBar' */
void WidgetSetVerticalValueBar__ReInit( WidgetSetVerticalValueBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
}

/* Finalizer method for the class 'WidgetSet::VerticalValueBar' */
void WidgetSetVerticalValueBar__Done( WidgetSetVerticalValueBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetBounds()' */
void WidgetSetVerticalValueBar_OnSetBounds( WidgetSetVerticalValueBar _this, XRect 
  value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
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
void WidgetSetVerticalValueBar_UpdateViewState( WidgetSetVerticalValueBar _this, 
  XSet aState )
{
  XBool needsFrame2;
  XBool needsFrame3;
  XRect area;
  XInt32 pos;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame2 = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackBelowBitmap 
  != 0 ));
  needsFrame3 = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackAboveBitmap 
  != 0 ));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame2 && !( _this->frameView2 != 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView2 ), 0 );
  }
  else
    if ( !needsFrame2 && ( _this->frameView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsFrame3 && !( _this->frameView3 != 0 ))
  {
    _this->frameView3 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView3 ), 0 );
  }
  else
    if ( !needsFrame3 && ( _this->frameView3 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView3 ));
      _this->frameView3 = 0;
    }

  if ( _this->frameView2 != 0 )
  {
    ViewsFrame_OnSetBitmap( _this->frameView2, _this->Appearance->TrackBelowBitmap );
    ViewsFrame_OnSetColor( _this->frameView2, _Const0001 );
    ViewsFrame_OnSetEdges( _this->frameView2, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesLeft | GraphicsEdgesRight );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView2, 54 );

    if ( _this->Appearance->TrackBelowFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView2, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView2, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView2, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView2, _this->Appearance->TrackBelowFrame );
    }
  }

  if ( _this->frameView3 != 0 )
  {
    ViewsFrame_OnSetBitmap( _this->frameView3, _this->Appearance->TrackAboveBitmap );
    ViewsFrame_OnSetColor( _this->frameView3, _Const0001 );
    ViewsFrame_OnSetEdges( _this->frameView3, GraphicsEdgesInterior | GraphicsEdgesLeft 
    | GraphicsEdgesRight | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView3, 35 );

    if ( _this->Appearance->TrackAboveFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView3, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView3, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView3, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView3, _this->Appearance->TrackAboveFrame );
    }
  }

  pos = EwGetRectH( area ) - (XInt32)((XFloat)EwGetRectH( area ) * _this->currentPos );

  if ( pos < 0 )
    pos = 0;

  if ( pos > EwGetRectH( area ))
    pos = EwGetRectH( area );

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    XInt32 y2 = EwGetRectH( area );
    XInt32 y = pos;

    if ( y < 0 )
      y = 0;

    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect(( EwGetRectW( area ) 
    / 2 ) - ( s.X / 2 ), y, (( EwGetRectW( area ) / 2 ) - ( s.X / 2 )) + s.X, y2 ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointY( _this->frameView2->NoEdgesLimit, 
    y2 - ( s.Y / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, 1 );
  }

  if (( _this->frameView3 != 0 ) && ( _this->frameView3->Bitmap != 0 ))
  {
    XPoint s = _this->frameView3->Bitmap->FrameSize;
    XInt32 y2 = EwGetRectH( area );
    XInt32 y = pos;

    if ( y > y2 )
      y = y2;

    CoreRectView__OnSetBounds( _this->frameView3, EwNewRect(( EwGetRectW( area ) 
    / 2 ) - ( s.X / 2 ), 0, (( EwGetRectW( area ) / 2 ) - ( s.X / 2 )) + s.X, y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView3, EwSetPointY( _this->frameView3->NoEdgesLimit, 
    y2 - ( s.Y / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView3, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onUpdatePos()' */
void WidgetSetVerticalValueBar_onUpdatePos( WidgetSetVerticalValueBar _this, XObject 
  sender )
{
  XFloat newPos;
  XInt32 swingDuration;
  XFloat ratio;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  newPos = _this->currentPos;
  swingDuration = 0;

  if ( _this->Appearance != 0 )
    swingDuration = 500;

  if ( _this->setupCurrentPos && ( _this->MaxValue != _this->MinValue ))
  {
    _this->currentPos = ((XFloat)-_this->MinValue ) / (XFloat)( _this->MaxValue 
    - _this->MinValue );
    newPos = _this->currentPos;
    _this->setupCurrentPos = 0;
  }

  if ( _this->MaxValue != _this->MinValue )
    newPos = (XFloat)( WidgetSetVerticalValueBar_OnGetCurrentValue( _this ) - _this->MinValue ) 
    / (XFloat)( _this->MaxValue - _this->MinValue );

  if ( newPos == _this->currentPos )
    return;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 0 );

  if ( swingDuration <= 0 )
  {
    _this->currentPos = newPos;
    CoreGroup_InvalidateViewState((CoreGroup)_this );
    return;
  }

  ratio = newPos - _this->currentPos;

  if ( ratio < 0.0f )
    ratio = -ratio;

  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  _this->FloatEffect.Value1 = _this->currentPos;
  _this->FloatEffect.Value2 = newPos;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, ( 10 + ( 
  swingDuration / 2 )) + ((XInt32)((XFloat)swingDuration * ratio ) / 2 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onEndFloatEffect()' */
void WidgetSetVerticalValueBar_onEndFloatEffect( WidgetSetVerticalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onFloatEffect()' */
void WidgetSetVerticalValueBar_onFloatEffect( WidgetSetVerticalValueBar _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentPos = _this->FloatEffect.Value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onConfigChanged()' */
void WidgetSetVerticalValueBar_onConfigChanged( WidgetSetVerticalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onUpdatePos ), ((XObject)_this ));

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetMaxValue()' */
void WidgetSetVerticalValueBar_OnSetMaxValue( WidgetSetVerticalValueBar _this, XInt32 
  value )
{
  if ( _this->MaxValue == value )
    return;

  _this->MaxValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onUpdatePos ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetMinValue()' */
void WidgetSetVerticalValueBar_OnSetMinValue( WidgetSetVerticalValueBar _this, XInt32 
  value )
{
  if ( _this->MinValue == value )
    return;

  _this->MinValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onUpdatePos ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnGetCurrentValue()' */
XInt32 WidgetSetVerticalValueBar_OnGetCurrentValue( WidgetSetVerticalValueBar _this )
{
  XInt32 value = _this->CurrentValue;

  if ( _this->MinValue > _this->MaxValue )
  {
    if ( value < _this->MaxValue )
      value = _this->MaxValue;

    if ( value > _this->MinValue )
      value = _this->MinValue;
  }
  else
  {
    if ( value < _this->MinValue )
      value = _this->MinValue;

    if ( value > _this->MaxValue )
      value = _this->MaxValue;
  }

  return value;
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetCurrentValue()' */
void WidgetSetVerticalValueBar_OnSetCurrentValue( WidgetSetVerticalValueBar _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onUpdatePos ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetAppearance()' */
void WidgetSetVerticalValueBar_OnSetAppearance( WidgetSetVerticalValueBar _this, 
  WidgetSetVerticalValueBarConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetVerticalValueBar_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetVerticalValueBar_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::VerticalValueBar' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetVerticalValueBar )
EW_END_OF_CLASS_VARIANTS( WidgetSetVerticalValueBar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalValueBar' */
EW_DEFINE_CLASS( WidgetSetVerticalValueBar, CoreGroup, FloatEffect, frameView3, 
                 currentPos, currentPos, currentPos, currentPos, "WidgetSet::VerticalValueBar" )
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
  WidgetSetVerticalValueBar_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetVerticalValueBar_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetVerticalValueBar )

/* Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Init( WidgetSetHorizontalSlider _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSlider );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->RepetitionTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerLeft, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerRight, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSlider );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000B );
  CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  CoreTimer_OnSetBegin( &_this->RepetitionTimer, 50 );
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const000C );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const000D );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const000E );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000F );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->StepSize = 1;
  _this->MaxValue = 100;
  _this->CurrentValue = 50;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->RepetitionTimer.OnTrigger = EwNewSlot( _this, WidgetSetHorizontalSlider_onRepetitionTimer );
  _this->KeyHandlerLeft.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerLeft.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->KeyHandlerRight.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerRight.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, WidgetSetHorizontalSlider_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__ReInit( WidgetSetHorizontalSlider _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->RepetitionTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Done( WidgetSetHorizontalSlider _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->RepetitionTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__Done( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetBounds()' */
void WidgetSetHorizontalSlider_OnSetBounds( WidgetSetHorizontalSlider _this, XRect 
  value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
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
void WidgetSetHorizontalSlider_UpdateViewState( WidgetSetHorizontalSlider _this, 
  XSet aState )
{
  XBool needsFrame2;
  XBool needsFrame3;
  XBool needsImage;
  XRect area;
  XChar isState;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 newThumbPos;
  XRect r;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame2 = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackLeftBitmapDefault 
  != 0 ) || ( _this->Appearance->TrackLeftBitmapDisabled != 0 )) || ( _this->Appearance->TrackLeftBitmapFocused 
  != 0 )) || ( _this->Appearance->TrackLeftBitmapActive != 0 )));
  needsFrame3 = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackRightBitmapDefault 
  != 0 ) || ( _this->Appearance->TrackRightBitmapDisabled != 0 )) || ( _this->Appearance->TrackRightBitmapFocused 
  != 0 )) || ( _this->Appearance->TrackRightBitmapActive != 0 )));
  needsImage = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->ThumbBitmapDefault 
  != 0 ) || ( _this->Appearance->ThumbBitmapDisabled != 0 )) || ( _this->Appearance->ThumbBitmapFocused 
  != 0 )) || ( _this->Appearance->ThumbBitmapActive != 0 )));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame2 && !( _this->frameView2 != 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView2 ), 0 );
  }
  else
    if ( !needsFrame2 && ( _this->frameView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsFrame3 && !( _this->frameView3 != 0 ))
  {
    _this->frameView3 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView3 ), 0 );
  }
  else
    if ( !needsFrame3 && ( _this->frameView3 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView3 ));
      _this->frameView3 = 0;
    }

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if (( _this->touchActive || _this->KeyHandlerRight.Down ) || _this->KeyHandlerLeft.Down )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  _this->prevState = isState;

  if ( _this->frameView2 != 0 )
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

  if ( _this->frameView3 != 0 )
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

  if ( _this->imageView != 0 )
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

  if ( _this->frameView2 != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapDisabled;
        frameNo = _this->Appearance->TrackLeftFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapActive;
        frameNo = _this->Appearance->TrackLeftFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapFocused;
        frameNo = _this->Appearance->TrackLeftFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->TrackLeftBitmapDefault;
        frameNo = _this->Appearance->TrackLeftFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    ViewsFrame_OnSetAnimated( _this->frameView2, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView2, _Const0001 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView2, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView2, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView2, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesLeft | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView2, 54 );
  }

  if ( _this->frameView3 != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->TrackRightBitmapDisabled;
        frameNo = _this->Appearance->TrackRightFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->TrackRightBitmapActive;
        frameNo = _this->Appearance->TrackRightFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->TrackRightBitmapFocused;
        frameNo = _this->Appearance->TrackRightFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->TrackRightBitmapDefault;
        frameNo = _this->Appearance->TrackRightFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    ViewsFrame_OnSetAnimated( _this->frameView3, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView3, _Const0001 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView3, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView3, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView3, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesRight | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView3, 35 );
  }

  if ( _this->imageView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->ThumbBitmapDisabled;
        frameNo = _this->Appearance->ThumbFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->ThumbBitmapActive;
        frameNo = _this->Appearance->ThumbFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->ThumbBitmapFocused;
        frameNo = _this->Appearance->ThumbFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->ThumbBitmapDefault;
        frameNo = _this->Appearance->ThumbFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));
    ViewsImage_OnSetColor( _this->imageView, _Const0001 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetBitmap( _this->imageView, bitmap );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 74 );
  }

  marginLeft = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginLeft : 
  0 );
  marginRight = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginRight 
  : 0 );

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XInt32 width = _this->imageView->Bitmap->FrameSize.X;
    marginLeft += ( width / 2 );
    marginRight += ( width - ( width / 2 ));
  }

  minPos = marginLeft;
  maxPos = EwGetRectW( area ) - marginRight;
  newThumbPos = marginLeft;

  if ( _this->MaxValue != _this->MinValue )
    newThumbPos = (XInt32)(((XFloat)( WidgetSetHorizontalSlider_OnGetCurrentValue( 
    _this ) - _this->MinValue ) * (XFloat)( maxPos - minPos )) / (XFloat)( _this->MaxValue 
    - _this->MinValue )) + minPos;

  if ( newThumbPos < marginLeft )
    newThumbPos = marginLeft;

  if ( newThumbPos > ( EwGetRectW( area ) - marginRight ))
    newThumbPos = EwGetRectW( area ) - marginRight;

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x > x2 )
      x = x2;

    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), x, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointX( _this->frameView2->NoEdgesLimit, 
    x2 - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, 1 );
  }

  if (( _this->frameView3 != 0 ) && ( _this->frameView3->Bitmap != 0 ))
  {
    XPoint s = _this->frameView3->Bitmap->FrameSize;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x < 0 )
      x = 0;

    CoreRectView__OnSetBounds( _this->frameView3, EwNewRect( x, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), x2, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView3, EwSetPointX( _this->frameView3->NoEdgesLimit, 
    x2 - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView3, 1 );
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XRect thumbArea = EwNewRect2Point( _Const000F, _this->imageView->Bitmap->FrameSize );
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwMoveRectNeg( thumbArea, 
    EwGetRectCenter( thumbArea )), EwNewPoint( newThumbPos, EwGetRectH( area ) / 
    2 )));
  }

  r = _Const0010;

  if ( _this->imageView != 0 )
    r = EwUnionRect( r, _this->imageView->Super1.Bounds );

  CoreGroup__ExtendClipping( _this, EwGetInt32Max( 2, -r.Point1.X, 0 ), EwGetInt32Max( 
  2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 0 ), EwGetInt32Max( 
  2, r.Point2.Y - area.Point2.Y, 0 ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onConfigChanged()' */
void WidgetSetHorizontalSlider_onConfigChanged( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XEnum oldKeyCodeRight;
  XEnum oldKeyCodeLeft;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCodeRight = _this->KeyHandlerRight.Filter;
  oldKeyCodeLeft = _this->KeyHandlerLeft.Filter;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;

  if (((( oldKeyCodeRight == CoreKeyCodeNoKey ) || ( oldKeyCodeLeft == CoreKeyCodeNoKey )) 
      && ( _this->KeyHandlerRight.Filter != CoreKeyCodeNoKey )) && ( _this->KeyHandlerLeft.Filter 
      != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if ((( oldKeyCodeRight != CoreKeyCodeNoKey ) && ( oldKeyCodeLeft != CoreKeyCodeNoKey )) 
      && (( _this->KeyHandlerRight.Filter == CoreKeyCodeNoKey ) || ( _this->KeyHandlerLeft.Filter 
      == CoreKeyCodeNoKey )))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, _this->Appearance->KeyRepeatDelay );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, _this->Appearance->KeyRepeatPeriod );
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, 0 );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  }

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onRepetitionTimer()' */
void WidgetSetHorizontalSlider_onRepetitionTimer( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = _this->StepSize;

  if (( _this->KeyHandlerLeft.Down && ( _this->MaxValue > _this->MinValue )) || 
      ( _this->KeyHandlerRight.Down && ( _this->MaxValue < _this->MinValue )))
    delta = -delta;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseKey()' */
void WidgetSetHorizontalSlider_onReleaseKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 0 );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressKey()' */
void WidgetSetHorizontalSlider_onPressKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 1 );
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = _this->StepSize;

  if ((( sender == ((XObject)&_this->KeyHandlerLeft )) && ( _this->MaxValue > _this->MinValue )) 
      || (( sender == ((XObject)&_this->KeyHandlerRight )) && ( _this->MaxValue 
      < _this->MinValue )))
    delta = -delta;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onDragTouch()' */
void WidgetSetHorizontalSlider_onDragTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 marginLeft;
  XInt32 marginRight;
  XPoint delta;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 oldValue;
  XInt32 newValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  marginLeft = 0;
  marginRight = 0;

  if ( _this->Appearance != 0 )
  {
    marginLeft = _this->Appearance->ThumbMarginLeft;
    marginRight = _this->Appearance->ThumbMarginRight;
  }

  delta = EwMovePointNeg( _this->TouchHandler.CurrentPos, _this->TouchHandler.HittingPos );
  minPos = marginLeft;
  maxPos = EwGetRectW( _this->Super2.Bounds ) - marginRight;
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    maxPos = maxPos - EwGetRectW( _this->imageView->Super1.Bounds );

  if ( maxPos > minPos )
    newValue = (XInt32)(((XFloat)delta.X * (XFloat)( _this->MaxValue - _this->MinValue )) 
    / (XFloat)( maxPos - minPos )) + _this->touchStartValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue - ( newValue % _this->StepSize ));

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseTouch()' */
void WidgetSetHorizontalSlider_onReleaseTouch( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  _this->touchActive = 0;
  _this->KeyHandlerRight.Enabled = 1;
  _this->KeyHandlerLeft.Enabled = 1;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressTouch()' */
void WidgetSetHorizontalSlider_onPressTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XRect touchArea;
  XBool hasThumb;
  XBool insideThumb;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  touchArea = EwMoveRectPos( _Const0011, _this->TouchHandler.CurrentPos );
  hasThumb = 0;
  insideThumb = 0;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    hasThumb = 1;
    insideThumb = (XBool)!EwIsRectEmpty( EwIntersectRect( _this->imageView->Super1.Bounds, 
    touchArea ));
  }

  if ( hasThumb && !insideThumb )
  {
    CoreRoot root = CoreView__GetRoot( _this );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
    CoreRoot_RetargetCursor( root, ((CoreView)root ), 0, ((CoreView)_this ));
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
    return;
  }

  _this->touchActive = 1;
  _this->KeyHandlerRight.Enabled = 0;
  _this->KeyHandlerLeft.Enabled = 0;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->touchStartValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetStepSize()' */
void WidgetSetHorizontalSlider_OnSetStepSize( WidgetSetHorizontalSlider _this, XInt32 
  value )
{
  if ( value < 0 )
    value = 1;

  _this->StepSize = value;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetMaxValue()' */
void WidgetSetHorizontalSlider_OnSetMaxValue( WidgetSetHorizontalSlider _this, XInt32 
  value )
{
  if ( _this->MaxValue == value )
    return;

  _this->MaxValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetMinValue()' */
void WidgetSetHorizontalSlider_OnSetMinValue( WidgetSetHorizontalSlider _this, XInt32 
  value )
{
  if ( _this->MinValue == value )
    return;

  _this->MinValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalSlider_OnGetCurrentValue( WidgetSetHorizontalSlider _this )
{
  XInt32 value = _this->CurrentValue;

  if ( _this->MinValue > _this->MaxValue )
  {
    if ( value < _this->MaxValue )
      value = _this->MaxValue;

    if ( value > _this->MinValue )
      value = _this->MinValue;
  }
  else
  {
    if ( value < _this->MinValue )
      value = _this->MinValue;

    if ( value > _this->MaxValue )
      value = _this->MaxValue;
  }

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetCurrentValue()' */
void WidgetSetHorizontalSlider_OnSetCurrentValue( WidgetSetHorizontalSlider _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetAppearance()' */
void WidgetSetHorizontalSlider_OnSetAppearance( WidgetSetHorizontalSlider _this, 
  WidgetSetHorizontalSliderConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSlider )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSlider )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS( WidgetSetHorizontalSlider, CoreGroup, RepetitionTimer, imageView, 
                 OnChange, touchStartValue, touchStartValue, touchStartValue, "WidgetSet::HorizontalSlider" )
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
  WidgetSetHorizontalSlider_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalSlider_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetHorizontalSlider )

/* Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Init( WidgetSetToggleButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0012 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const000C );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0013 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0014 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000F );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetToggleButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetToggleButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetToggleButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__ReInit( WidgetSetToggleButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Done( WidgetSetToggleButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetBounds()' */
void WidgetSetToggleButton_OnSetBounds( WidgetSetToggleButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
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
void WidgetSetToggleButton_UpdateViewState( WidgetSetToggleButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsText;
  XRect area;
  XChar isState;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && (((((((( _this->Appearance->FaceOffBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceOffBitmapDisabled != 0 )) || ( _this->Appearance->FaceOffBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOffBitmapActive != 0 )) || ( _this->Appearance->FaceOnBitmapDefault 
  != 0 )) || ( _this->Appearance->FaceOnBitmapDisabled != 0 )) || ( _this->Appearance->FaceOnBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOnBitmapActive != 0 )));
  needsText = (XBool)(( _this->Appearance != 0 ) && (( !EwIsStringEmpty( _this->LabelOff ) 
  && ( _this->Appearance->LabelOffFont != 0 )) || ( !EwIsStringEmpty( _this->LabelOn ) 
  && ( _this->Appearance->LabelOnFont != 0 ))));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  if ( !_this->Checked )
    isState = EwGetCharLower( isState );

  _this->prevState = isState;

  if (( _this->frameView != 0 ) || ( _this->textView != 0 ))
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      case 'd' :
      case 'a' :
      case 'f' :
      break;

      default :; 
    }

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;
    XSet layout = _this->Appearance->FaceLayout;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDisabled;
        frameNo = _this->Appearance->FaceOnFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->FaceOnBitmapActive;
        frameNo = _this->Appearance->FaceOnFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->FaceOnBitmapFocused;
        frameNo = _this->Appearance->FaceOnFrameFocused;
      }
      break;

      case 'E' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDefault;
        frameNo = _this->Appearance->FaceOnFrameDefault;
      }
      break;

      case 'd' :
      {
        bitmap = _this->Appearance->FaceOffBitmapDisabled;
        frameNo = _this->Appearance->FaceOffFrameDisabled;
      }
      break;

      case 'a' :
      {
        bitmap = _this->Appearance->FaceOffBitmapActive;
        frameNo = _this->Appearance->FaceOffFrameActive;
      }
      break;

      case 'f' :
      {
        bitmap = _this->Appearance->FaceOffBitmapFocused;
        frameNo = _this->Appearance->FaceOffFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->FaceOffBitmapDefault;
        frameNo = _this->Appearance->FaceOffFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      case 'd' :
      case 'a' :
      case 'f' :
      break;

      default :; 
    }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, _Const0001 );

    if ( frameNo < 0 )
      frameNo = 0;

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XInt32 w = bitmap->FrameSize.X;

      if ( alignToLeft && !alignToRight )
        r.Point2.X = ( r.Point1.X + w );
      else
        if ( !alignToLeft && alignToRight )
          r.Point1.X = ( r.Point2.X - w );
        else
        {
          r.Point1.X = ( r.Point1.X + (( EwGetRectW( r ) / 2 ) - ( w / 2 )));
          r.Point2.X = ( r.Point1.X + w );
        }
    }

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XInt32 h = bitmap->FrameSize.Y;

      if ( alignToTop && !alignToBottom )
        r.Point2.Y = ( r.Point1.Y + h );
      else
        if ( !alignToTop && alignToBottom )
          r.Point1.Y = ( r.Point2.Y - h );
        else
        {
          r.Point1.Y = ( r.Point1.Y + (( EwGetRectH( r ) / 2 ) - ( h / 2 )));
          r.Point2.Y = ( r.Point1.Y + h );
        }
    }

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;
    ResourcesFont font;
    XString label;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      {
        font = _this->Appearance->LabelOnFont;
        label = _this->LabelOn;
      }
      break;

      case 'd' :
      case 'a' :
      case 'f' :
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
      break;

      default : 
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
    }

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->LabelOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->LabelOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->LabelOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->LabelOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->LabelOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelOffColorDefault;
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X, area.Point1.Y, 
    area.Point2.X - _this->Appearance->LabelMarginRight, area.Point2.Y ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetFont( _this->textView, font );
    ViewsText_OnSetString( _this->textView, label );
    ViewsText_OnSetColor( _this->textView, clr );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 92 );
  }

  CoreGroup__ExtendClipping( _this, 0, 0, 0, 0 );

  {
    XRect touchArea = area;
    CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, touchArea.Point1 );
    CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, touchArea.Point2 );
    CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point2.X, 
    touchArea.Point1.Y ));
    CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point1.X, 
    touchArea.Point2.Y ));
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onConfigChanged()' */
void WidgetSetToggleButton_onConfigChanged( WidgetSetToggleButton _this, XObject 
  sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onFlashTimer()' */
void WidgetSetToggleButton_onFlashTimer( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

  if ( _this->Checked )
    EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
  else
    EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseKey()' */
void WidgetSetToggleButton_onReleaseKey( WidgetSetToggleButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressKey()' */
void WidgetSetToggleButton_onPressKey( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onLeaveTouch()' */
void WidgetSetToggleButton_onLeaveTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onEnterTouch()' */
void WidgetSetToggleButton_onEnterTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseTouch()' */
void WidgetSetToggleButton_onReleaseTouch( WidgetSetToggleButton _this, XObject 
  sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  _this->KeyHandler.Enabled = 1;
  EwPostSignal( _this->OnRelease, ((XObject)_this ));

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressTouch()' */
void WidgetSetToggleButton_onPressTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetChecked()' */
void WidgetSetToggleButton_OnSetChecked( WidgetSetToggleButton _this, XBool value )
{
  if ( _this->Checked == value )
    return;

  _this->Checked = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabel()' */
void WidgetSetToggleButton_OnSetLabel( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( value, _this->LabelOff ) && !EwCompString( value, _this->LabelOn ))
    return;

  _this->LabelOff = EwShareString( value );
  _this->LabelOn = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetAppearance()' */
void WidgetSetToggleButton_OnSetAppearance( WidgetSetToggleButton _this, WidgetSetToggleButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS( WidgetSetToggleButton, CoreGroup, FlashTimer, textView, OnRelease, 
                 LabelOn, LabelOn, onPressKeyTime, "WidgetSet::ToggleButton" )
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
  WidgetSetToggleButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetToggleButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetToggleButton )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0012 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const000C );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0013 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0014 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000F );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
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
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsImage;
  XBool needsText;
  XRect area;
  XChar isState;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->FaceBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceBitmapDisabled != 0 )) || ( _this->Appearance->FaceBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceBitmapActive != 0 )));
  needsImage = _this->Icon != 0;
  needsText = (XBool)((( _this->Appearance != 0 ) && !EwIsStringEmpty( _this->Label )) 
  && ( _this->Appearance->LabelFont != 0 ));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  _this->prevState = isState;

  if ((( _this->frameView != 0 ) || ( _this->textView != 0 )) || (( _this->imageView 
      != 0 ) && ( _this->Appearance != 0 )))
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->FaceBitmapDisabled;
        frameNo = _this->Appearance->FaceFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->FaceBitmapActive;
        frameNo = _this->Appearance->FaceFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->FaceBitmapFocused;
        frameNo = _this->Appearance->FaceFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->FaceBitmapDefault;
        frameNo = _this->Appearance->FaceFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, _Const0001 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if (( _this->imageView != 0 ) && ( _this->Appearance != 0 ))
  {
    XColor clr;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->IconTintDisabled;
      break;

      case 'A' :
      case 'F' :
        clr = _Const0001;
      break;

      default : 
        clr = _this->Appearance->IconTintDefault;
    }

    ViewsImage_OnSetAnimated( _this->imageView, 1 );
    CoreRectView__OnSetBounds( _this->imageView, EwNewRect( area.Point1.X + _this->Appearance->IconMarginLeft, 
    area.Point1.Y + _this->Appearance->IconMarginTop, area.Point2.X - _this->Appearance->IconMarginRight, 
    area.Point2.Y - _this->Appearance->IconMarginBottom ));
    ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
    | ViewsImageAlignmentAlignVertCenter );
    ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
    ViewsImage_OnSetFrameNumber( _this->imageView, 0 );
    ViewsImage_OnSetColor( _this->imageView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 59 );
  }
  else
    if ( _this->imageView != 0 )
    {
      switch ( isState )
      {
        case 'D' :
        case 'A' :
        case 'F' :
        break;

        default :; 
      }

      CoreRectView__OnSetBounds( _this->imageView, area );
      ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
      ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
      ViewsImage_OnSetFrameNumber( _this->imageView, -1 );
      ViewsImage_OnSetColor( _this->imageView, _Const0001 );
    }

  if ( _this->textView != 0 )
  {
    XColor clr;

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->LabelColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelColorDefault;
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, ViewsTextAlignmentAlignHorzCenter 
    | ViewsTextAlignmentAlignVertCenter );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 76 );
  }

  CoreGroup__ExtendClipping( _this, 0, 0, 0, 0 );
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  _this->KeyHandler.Enabled = 1;
  EwPostSignal( _this->OnRelease, ((XObject)_this ));

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( !( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetIcon()' */
void WidgetSetPushButton_OnSetIcon( WidgetSetPushButton _this, ResourcesBitmap value )
{
  if ( _this->Icon == value )
    return;

  _this->Icon = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, FlashTimer, textView, OnRelease, 
                 Label, Label, onPressKeyTime, "WidgetSet::PushButton" )
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
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_ExtendClipping,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackBack,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetPushButton )

/* Embedded Wizard */
