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

#ifndef _ApplicationDateTimePicker_H
#define _ApplicationDateTimePicker_H

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

#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_TemplatesPickerControl.h"
#include "_ViewsBorder.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"

/* Forward declaration of the class Application::DateTimePicker */
#ifndef _ApplicationDateTimePicker_
  EW_DECLARE_CLASS( ApplicationDateTimePicker )
#define _ApplicationDateTimePicker_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif


/* This is a GUI component. */
EW_DEFINE_FIELDS( ApplicationDateTimePicker, TemplatesPickerControl )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( BorderCurrent,   ViewsBorder )
  EW_OBJECT  ( TouchHandlerSecond, CoreSlideTouchHandler )
  EW_OBJECT  ( TouchHandlerMinute, CoreSlideTouchHandler )
  EW_OBJECT  ( TouchHandlerHour, CoreSlideTouchHandler )
  EW_OBJECT  ( ListSecond,      CoreVerticalList )
  EW_OBJECT  ( ListMinute,      CoreVerticalList )
  EW_OBJECT  ( ListHour,        CoreVerticalList )
  EW_OBJECT  ( ShineAtBottom,   ViewsRectangle )
  EW_OBJECT  ( ShineAtTop,      ViewsRectangle )
  EW_OBJECT  ( Separator2,      ViewsText )
  EW_OBJECT  ( Separator1,      ViewsText )
  EW_OBJECT  ( PushButtonA,     WidgetSetPushButton )
  EW_OBJECT  ( Text,            ViewsText )
  EW_OBJECT  ( BorderCurrent1,  ViewsBorder )
  EW_OBJECT  ( TouchHandlerYear, CoreSlideTouchHandler )
  EW_OBJECT  ( TouchHandlerMonth, CoreSlideTouchHandler )
  EW_OBJECT  ( TouchHandlerDay, CoreSlideTouchHandler )
  EW_OBJECT  ( ListYear,        CoreVerticalList )
  EW_OBJECT  ( ListMonth,       CoreVerticalList )
  EW_OBJECT  ( ListDay,         CoreVerticalList )
  EW_OBJECT  ( ShineAtBottom1,  ViewsRectangle )
  EW_OBJECT  ( ShineAtTop1,     ViewsRectangle )
  EW_OBJECT  ( Separator3,      ViewsText )
  EW_OBJECT  ( Separator4,      ViewsText )
  EW_PROPERTY( Close,           XSlot )
  EW_VARIABLE( sliding,         XBool )
  EW_VARIABLE( selected,        XBool )
  EW_VARIABLE( enabled,         XBool )
EW_END_OF_FIELDS( ApplicationDateTimePicker )

/* Virtual Method Table (VMT) for the class : 'Application::DateTimePicker' */
EW_DEFINE_METHODS( ApplicationDateTimePicker, TemplatesPickerControl )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( ExtendClipping,    void )( CoreGroup _this, XInt32 aExtClipLeft, XInt32 
    aExtClipRight, XInt32 aExtClipTop, XInt32 aExtClipBottom )
  EW_METHOD( SwitchToDialog,    void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( DismissDialog,     void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( PresentDialog,     void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideOverlayTransition, EffectsTransition aOverrideRestoreTransition, 
    XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( ApplicationDateTimePicker _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( FadeGroup,         void )( CoreGroup _this, CoreGroup aGroup, EffectsFader 
    aFader, XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( RestackBack,       void )( CoreGroup _this, CoreView aView )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationDateTimePicker )

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
  XSet aState );

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has finished the slide animation. Thereupon 
   the owner of the time picker is notified, that the time has been changed. */
void ApplicationDateTimePicker_onEndSlide( ApplicationDateTimePicker _this, XObject 
  sender );

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has begun the slide animation. */
void ApplicationDateTimePicker_onStartSlide( ApplicationDateTimePicker _this, XObject 
  sender );

/* This method is called by 'ListSecond' vertical list every time the list loads 
   or updates an item. */
void ApplicationDateTimePicker_OnLoadSecondItem( ApplicationDateTimePicker _this, 
  XObject sender );

/* This method is called by 'ListMinute' vertical list every time the list loads 
   or updates an item. */
void ApplicationDateTimePicker_OnLoadMinuteItem( ApplicationDateTimePicker _this, 
  XObject sender );

/* This method is called by 'ListHour' vertical list every time the list loads or 
   updates an item. */
void ApplicationDateTimePicker_OnLoadHourItem( ApplicationDateTimePicker _this, 
  XObject sender );

/* 'C' function for method : 'Application::DateTimePicker.OnGetSecond()' */
XInt32 ApplicationDateTimePicker_OnGetSecond( ApplicationDateTimePicker _this );

/* 'C' function for method : 'Application::DateTimePicker.OnSetSecond()' */
void ApplicationDateTimePicker_OnSetSecond( ApplicationDateTimePicker _this, XInt32 
  value );

/* 'C' function for method : 'Application::DateTimePicker.OnGetMinute()' */
XInt32 ApplicationDateTimePicker_OnGetMinute( ApplicationDateTimePicker _this );

/* 'C' function for method : 'Application::DateTimePicker.OnSetMinute()' */
void ApplicationDateTimePicker_OnSetMinute( ApplicationDateTimePicker _this, XInt32 
  value );

/* 'C' function for method : 'Application::DateTimePicker.OnGetHour()' */
XInt32 ApplicationDateTimePicker_OnGetHour( ApplicationDateTimePicker _this );

/* 'C' function for method : 'Application::DateTimePicker.OnSetHour()' */
void ApplicationDateTimePicker_OnSetHour( ApplicationDateTimePicker _this, XInt32 
  value );

/* 'C' function for method : 'Application::DateTimePicker.OnClose()' */
void ApplicationDateTimePicker_OnClose( ApplicationDateTimePicker _this, XObject 
  sender );

/* 'C' function for method : 'Application::DateTimePicker.OnGetYear()' */
XInt32 ApplicationDateTimePicker_OnGetYear( ApplicationDateTimePicker _this );

/* 'C' function for method : 'Application::DateTimePicker.OnSetYear()' */
void ApplicationDateTimePicker_OnSetYear( ApplicationDateTimePicker _this, XInt32 
  value );

/* 'C' function for method : 'Application::DateTimePicker.OnGetMonth()' */
XInt32 ApplicationDateTimePicker_OnGetMonth( ApplicationDateTimePicker _this );

/* 'C' function for method : 'Application::DateTimePicker.OnSetMonth()' */
void ApplicationDateTimePicker_OnSetMonth( ApplicationDateTimePicker _this, XInt32 
  value );

/* 'C' function for method : 'Application::DateTimePicker.OnGetDay()' */
XInt32 ApplicationDateTimePicker_OnGetDay( ApplicationDateTimePicker _this );

/* 'C' function for method : 'Application::DateTimePicker.OnSetDay()' */
void ApplicationDateTimePicker_OnSetDay( ApplicationDateTimePicker _this, XInt32 
  value );

/* This method is called by 'ListYear' vertical list every time the list loads or 
   updates an item. */
void ApplicationDateTimePicker_OnLoadYearItem( ApplicationDateTimePicker _this, 
  XObject sender );

/* This method is called by 'ListMonth' vertical list every time the list loads 
   or updates an item. */
void ApplicationDateTimePicker_OnLoadMonthItem( ApplicationDateTimePicker _this, 
  XObject sender );

/* This method is called by 'ListDay' vertical list every time the list loads or 
   updates an item. */
void ApplicationDateTimePicker_OnLoadDayItem( ApplicationDateTimePicker _this, XObject 
  sender );

/* This function returns the number of days in the month and year specified in the 
   method parameters aMonth and aYear. The function takes care of the February and 
   its dependency of the leap year. */
XInt32 ApplicationDateTimePicker_getDaysInMonth( ApplicationDateTimePicker _this, 
  XInt32 aMonth, XInt32 aYear );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDateTimePicker_H */

/* Embedded Wizard */
