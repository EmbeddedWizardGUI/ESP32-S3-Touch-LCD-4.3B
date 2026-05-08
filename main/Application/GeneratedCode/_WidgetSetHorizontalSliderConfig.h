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

#ifndef _WidgetSetHorizontalSliderConfig_H
#define _WidgetSetHorizontalSliderConfig_H

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

#include "_WidgetSetWidgetConfig.h"

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif

/* Forward declaration of the class WidgetSet::HorizontalSliderConfig */
#ifndef _WidgetSetHorizontalSliderConfig_
  EW_DECLARE_CLASS( WidgetSetHorizontalSliderConfig )
#define _WidgetSetHorizontalSliderConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a 'horizontal slider' widget (WidgetSet::HorizontalSlider). 
   In the practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected horizontal slider widget. Thereupon the widgets will use the configuration 
   information provided in the object.
   During its lifetime the slider remains always in one of the four states: 'disabled', 
   'default', 'focused' and 'active'. The state 'disabled' is true for every not 
   available slider (the property 'Enabled' of the slider is 'false'). Such sliders 
   will ignore all user inputs. The state 'default' determines a slider, which is 
   ready to be touched by the user or ready to become focused. As soon as the slider 
   becomes focused, it switches in the state 'focused'. In this state the user can 
   control the slider by pressing keys on the keyboard. Finally, the state 'active' 
   is true, if the user actually interacts with the slider (the slider's thumb is 
   pressed). With the configuration object you can specify the appearance of the 
   slider for every state individually. For this purpose you should know from which 
   views the slider is composed of:
   - 'FaceImage' is a bitmap frame view (Views::Frame) filling vertically centered 
   the entire width in the background of the slider. In the configuration object 
   you can individually specify for every slider state the desired bitmap (@FaceBitmapActive, 
   @FaceBitmapDefault, @FaceBitmapDisabled, @FaceBitmapFocused), the frame number 
   within the bitmap (@FaceFrameActive, @FaceFrameDefault, @FaceFrameDisabled, @FaceFrameFocused) 
   and opacity or color to tint the bitmap (@FaceTintActive, @FaceTintDefault, @FaceTintDisabled, 
   @FaceTintFocused). The slider can automatically play animated bitmaps if the 
   specified frame number is -1.
   - 'TrackLeftRectangle' is a rectangle view (Views::Rectangle) filling per default 
   vertically centered the background of the slider between its left edge and the 
   actual position of the thumb. The height and an additional vertical displacement 
   of the track are determined by the properties @TrackLeftThicknessActive, @TrackLeftThicknessDefault, 
   @TrackLeftThicknessDisabled, @TrackLeftThicknessFocused and @TrackLeftOffsetActive, 
   @TrackLeftOffsetDefault, @TrackLeftOffsetDisabled, @TrackLeftOffsetFocused. The 
   area destined for the track can be limited by configuring the properties @TrackLeftMarginLeft 
   and @TrackLeftMarginRight. With the property @TrackLeftStatic the track can be 
   configured to not depend on the actual thumb position. Normally, the track has 
   rectangular shape with sharp corners. If desired the corners can be rounded (@TrackLeftCornerRadiusActive, 
   @TrackLeftCornerRadiusDefault, @TrackLeftCornerRadiusDisabled, @TrackLeftCornerRadiusFocused) 
   whereby the rounding at the thumb position can be controlled by the property 
   @TrackLeftFlattened. The track can be filled with a solid color (@TrackLeftColorActive, 
   @TrackLeftColorDefault, @TrackLeftColorDisabled, @TrackLeftColorFocused).
   - 'TrackLeftBorder' is a border view (Views::Border) surrounding the above described 
   'TrackLeftRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackLeftRectangle'. The thickness of the 
   border (@TrackLeftBorderWidthActive, @TrackLeftBorderWidthDefault, @TrackLeftBorderWidthDisabled, 
   @TrackLeftBorderWidthFocused) and its color (@TrackLeftBorderColorActive, @TrackLeftBorderColorDefault, 
   @TrackLeftBorderColorDisabled, @TrackLeftBorderColorFocused) can be specified.
   - 'TrackLeftImage' is a bitmap frame view (Views::Frame) filling per default 
   vertically centered the background of the slider between its left edge and the 
   actual position of the thumb. The area destined for the track can be limited 
   by configuring the properties @TrackLeftMarginLeft and @TrackLeftMarginRight. 
   With the property @TrackLeftStatic the track can be configured to not depend 
   on the actual thumb position. An additional vertical displacement of the track 
   is determined by the properties @TrackLeftOffsetActive, @TrackLeftOffsetDefault, 
   @TrackLeftOffsetDisabled, @TrackLeftOffsetFocused. In the configuration object 
   you can individually specify for every slider state the desired bitmap (@TrackLeftBitmapActive, 
   @TrackLeftBitmapDefault, @TrackLeftBitmapDisabled, @TrackLeftBitmapFocused), 
   the frame number within the bitmap (@TrackLeftFrameActive, @TrackLeftFrameDefault, 
   @TrackLeftFrameDisabled, @TrackLeftFrameFocused) and opacity or color to tint 
   the bitmap (@TrackLeftTintActive, @TrackLeftTintDefault, @TrackLeftTintDisabled, 
   @TrackLeftTintFocused). With the property @TrackLeftWithEdge you can configure 
   how the right edge of the track (the edge at the thumb position) should appear. 
   The slider can automatically play animated bitmaps if the specified frame number 
   is -1.
   - 'TrackRightRectangle' is a rectangle view (Views::Rectangle) filling per default 
   vertically centered the background of the slider between the actual position 
   of the thumb and the right edge of the slider widget. The height and an additional 
   vertical displacement of the track are determined by the properties @TrackRightThicknessActive, 
   @TrackRightThicknessDefault, @TrackRightThicknessDisabled, @TrackRightThicknessFocused 
   and @TrackRightOffsetActive, @TrackRightOffsetDefault, @TrackRightOffsetDisabled, 
   @TrackRightOffsetFocused. The area destined for the track can be limited by configuring 
   the properties @TrackRightMarginLeft and @TrackRightMarginRight. With the property 
   @TrackRightStatic the track can be configured to not depend on the actual thumb 
   position. Normally, the track has rectangular shape with sharp corners. If desired 
   the corners can be rounded (@TrackRightCornerRadiusActive, @TrackRightCornerRadiusDefault, 
   @TrackRightCornerRadiusDisabled, @TrackRightCornerRadiusFocused) whereby the 
   rounding at the thumb position can be controlled by the property @TrackRightFlattened. 
   The track can be filled with a solid color (@TrackRightColorActive, @TrackRightColorDefault, 
   @TrackRightColorDisabled, @TrackRightColorFocused).
   - 'TrackRightBorder' is a border view (Views::Border) surrounding the above described 
   'TrackRightRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackRightRectangle'. The thickness of 
   the border (@TrackRightBorderWidthActive, @TrackRightBorderWidthDefault, @TrackRightBorderWidthDisabled, 
   @TrackRightBorderWidthFocused) and its color (@TrackRightBorderColorActive, @TrackRightBorderColorDefault, 
   @TrackRightBorderColorDisabled, @TrackRightBorderColorFocused) can be specified.
   - 'TrackRightImage' is a bitmap frame view (Views::Frame) filling per default 
   vertically centered the background of the slider between the actual position 
   of the thumb and the right edge of the slider widget. The area destined for the 
   track can be limited by configuring the properties @TrackRightMarginLeft and 
   @TrackRightMarginRight. With the property @TrackRightStatic the track can be 
   configured to not depend on the actual thumb position. An additional vertical 
   displacement of the track is determined by the properties @TrackRightOffsetActive, 
   @TrackRightOffsetDefault, @TrackRightOffsetDisabled, @TrackRightOffsetFocused. 
   In the configuration object you can individually specify for every slider state 
   the desired bitmap (@TrackRightBitmapActive, @TrackRightBitmapDefault, @TrackRightBitmapDisabled, 
   @TrackRightBitmapFocused), the frame number within the bitmap (@TrackRightFrameActive, 
   @TrackRightFrameDefault, @TrackRightFrameDisabled, @TrackRightFrameFocused) and 
   opacity or color to tint the bitmap (@TrackRightTintActive, @TrackRightTintDefault, 
   @TrackRightTintDisabled, @TrackRightTintFocused). With the property @TrackRightWithEdge 
   you can configure how the left edge of the track (the edge at the thumb position) 
   should appear. The slider can automatically play animated bitmaps if the specified 
   frame number is -1.
   - 'ThumbRectangle' is a rectangle view (Views::Rectangle) displayed vertically 
   centered at the thumb position according to current value of the slider. In the 
   configuration object you can individually specify for every slider state the 
   size of the view (@ThumbSizeActive, @ThumbSizeDefault, @ThumbSizeDisabled, @ThumbSizeFocused) 
   and an additional displacement (@ThumbOffsetActive, @ThumbOffsetDefault, @ThumbOffsetDisabled, 
   @ThumbOffsetFocused). Normally, the thumb area has rectangular shape with sharp 
   corners. If desired the corners can be rounded (@ThumbCornerRadiusActive, @ThumbCornerRadiusDefault, 
   @ThumbCornerRadiusDisabled, @ThumbCornerRadiusFocused). The thumb area can be 
   filled with a solid color (@ThumbColorActive, @ThumbColorDefault, @ThumbColorDisabled, 
   @ThumbColorFocused).
   - 'ThumbBorder' is a border view (Views::Border) surrounding the above described 
   'ThumbRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'ThumbRectangle'. The thickness of the border (@ThumbBorderWidthActive, 
   @ThumbBorderWidthDefault, @ThumbBorderWidthDisabled, @ThumbBorderWidthFocused) 
   and its color (@ThumbBorderColorActive, @ThumbBorderColorDefault, @ThumbBorderColorDisabled, 
   @ThumbBorderColorFocused) can be specified.
   - 'ThumbShadow' is a shadow view (Views::Shadow) lying always behind the above 
   described 'ThumbRectangle' view. Its size, position and corner radius correspond 
   thus to the of the 'ThumbRectangle'. However, an additional displacement for 
   the shadow can be specified (@ThumbShadowOffsetActive, @ThumbShadowOffsetDefault, 
   @ThumbShadowOffsetDisabled, @ThumbShadowOffsetFocused). The color of the shadow 
   (@ThumbShadowColorActive, @ThumbShadowColorDefault, @ThumbShadowColorDisabled, 
   @ThumbShadowColorFocused) as well as its blur radius (@ThumbShadowBlurRadiusActive, 
   @ThumbShadowBlurRadiusDefault, @ThumbShadowBlurRadiusDisabled, @ThumbShadowBlurRadiusFocused) 
   can be specified.
   - 'ThumbImage' is an image view (Views::Image) displayed vertically centered 
   at the thumb position according to current value of the slider. In the configuration 
   object you can individually specify for every slider state the desired bitmap 
   (@ThumbBitmapActive, @ThumbBitmapDefault, @ThumbBitmapDisabled, @ThumbBitmapFocused), 
   the frame number within the bitmap (@ThumbFrameActive, @ThumbFrameDefault, @ThumbFrameDisabled, 
   @ThumbFrameFocused) and opacity or color to tint the bitmap (@ThumbTintActive, 
   @ThumbTintDefault, @ThumbTintDisabled, @ThumbTintFocused). If necessary, additional 
   margins on the left and on the right of the thumb can be specified by using the 
   properties @ThumbMarginLeft and @ThumbMarginRight. An additional displacement 
   (@ThumbOffsetActive, @ThumbOffsetDefault, @ThumbOffsetDisabled, @ThumbOffsetFocused) 
   can be configured. The slider can automatically play animated bitmaps if the 
   specified frame number is -1.
   - 'AccentRectangle' is a rectangle view (Views::Rectangle) displayed per default 
   vertically centered at the thumb position according to current value of the slider. 
   In the configuration object you can individually specify for every slider state 
   the size of the view (@AccentSizeActive, @AccentSizeDefault, @AccentSizeDisabled, 
   @AccentSizeFocused) and an additional displacement (@AccentOffsetActive, @AccentOffsetDefault, 
   @AccentOffsetDisabled, @AccentOffsetFocused). Normally, the accent area has rectangular 
   shape with sharp corners. If desired the corners can be rounded (@AccentCornerRadiusActive, 
   @AccentCornerRadiusDefault, @AccentCornerRadiusDisabled, @AccentCornerRadiusFocused). 
   The accent area can be filled with a solid color (@AccentColorActive, @AccentColorDefault, 
   @AccentColorDisabled, @AccentColorFocused). Accent usually serves to highlight 
   the widget when the user interacts with it actively or when the widget is focused.
   - 'AccentBorder' is a border view (Views::Border) surrounding the above described 
   'AccentRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'AccentRectangle'. The thickness of the border 
   (@AccentBorderWidthActive, @AccentBorderWidthDefault, @AccentBorderWidthDisabled, 
   @AccentBorderWidthFocused) and its color (@AccentBorderColorActive, @AccentBorderColorDefault, 
   @AccentBorderColorDisabled, @AccentBorderColorFocused) can be specified. Accent 
   usually serves to highlight the widget when the user interacts with it actively 
   or when the widget is focused.
   - 'CoverImage' is a bitmap frame view (Views::Frame) filling vertically centered 
   the entire width of the slider and covering so eventually the thumb and track. 
   In the configuration object you can individually specify for every slider state 
   the desired bitmap (@CoverBitmapActive, @CoverBitmapDefault, @CoverBitmapDisabled, 
   @CoverBitmapFocused), the frame number within the bitmap (@CoverFrameActive, 
   @CoverFrameDefault, @CoverFrameDisabled, @CoverFrameFocused) and opacity or color 
   to tint the bitmap (@CoverTintActive, @CoverTintDefault, @CoverTintDisabled, 
   @CoverTintFocused). The slider can automatically play animated bitmaps if the 
   specified frame number is -1.
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @FaceStackingPriority, 
   @TrackLeftStackingPriority, @TrackRightStackingPriority, @ThumbStackingPriority, 
   @AccentStackingPriority and @CoverStackingPriority. The view with higher priority 
   will appear in front of other views with lower priority.
   Normally, when a state alternation occurs, the affected views are updated immediatelly 
   to reflect the new state. By using the property @StateTransitionDuration it is 
   possible to configure the slider to perform state alternations with animations 
   (e.g. the displacement of the thumb shadow can be animated). This affects all 
   attributes of the filled rectangle, border and shadow views belonging to the 
   thumb, left track, right track and accent. In case of the images displayed in 
   the face, left track, right track, thumb and cover, the animation has an effect 
   only on the colors and offsets used to configure the views. Consequently, during 
   animations these views can fade-out/in their colors and move only.
   If the slider is actually focused, it can also be controlled by pressing the 
   keyboard keys specified in the properties @KeyCodeLeft and @KeyCodeRight causing 
   the slider's thumb to be moved left or right. To prevent the slider from being 
   able to be focused, initialize these properties with the value Core::KeyCode.NoKey. 
   With the properties @KeyRepeatDelay and @KeyRepeatPeriod you can configure whether 
   the thumb should be moved autonomously when the user holds the key pressed for 
   a while.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the slider to 
   not shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetHorizontalSliderConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( ThumbBitmapActive, ResourcesBitmap )
  EW_PROPERTY( ThumbBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( ThumbBitmapDisabled, ResourcesBitmap )
  EW_PROPERTY( ThumbBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( TrackRightBitmapActive, ResourcesBitmap )
  EW_PROPERTY( TrackRightBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( TrackRightBitmapDisabled, ResourcesBitmap )
  EW_PROPERTY( TrackRightBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( TrackLeftBitmapActive, ResourcesBitmap )
  EW_PROPERTY( TrackLeftBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( TrackLeftBitmapDisabled, ResourcesBitmap )
  EW_PROPERTY( TrackLeftBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( KeyRepeatPeriod, XInt32 )
  EW_PROPERTY( KeyRepeatDelay,  XInt32 )
  EW_PROPERTY( ThumbFrameActive, XInt32 )
  EW_PROPERTY( ThumbFrameFocused, XInt32 )
  EW_PROPERTY( ThumbFrameDisabled, XInt32 )
  EW_PROPERTY( ThumbFrameDefault, XInt32 )
  EW_PROPERTY( ThumbMarginRight, XInt32 )
  EW_PROPERTY( ThumbMarginLeft, XInt32 )
  EW_PROPERTY( TrackRightFrameActive, XInt32 )
  EW_PROPERTY( TrackRightFrameFocused, XInt32 )
  EW_PROPERTY( TrackRightFrameDisabled, XInt32 )
  EW_PROPERTY( TrackRightFrameDefault, XInt32 )
  EW_PROPERTY( TrackLeftFrameActive, XInt32 )
  EW_PROPERTY( TrackLeftFrameFocused, XInt32 )
  EW_PROPERTY( TrackLeftFrameDisabled, XInt32 )
  EW_PROPERTY( TrackLeftFrameDefault, XInt32 )
  EW_PROPERTY( WidgetMinSize,   XPoint )
EW_END_OF_FIELDS( WidgetSetHorizontalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_METHODS( WidgetSetHorizontalSliderConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetHorizontalSliderConfig )

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatPeriod()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatDelay()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginRight()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginLeft()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( WidgetSetHorizontalSliderConfig _this, 
  XPoint value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetHorizontalSliderConfig_H */

/* Embedded Wizard */
