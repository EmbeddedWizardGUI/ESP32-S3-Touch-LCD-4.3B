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

#ifndef _ApplicationApplication_H
#define _ApplicationApplication_H

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

#include "_ApplicationBottomNote.h"
#include "_CoreKeyPressHandler.h"
#include "_CorePropertyObserver.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTime.h"
#include "_CoreTimer.h"
#include "_EffectsColorEffect.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsRectEffect.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetVerticalValueBar.h"

/* Forward declaration of the class Application::Application */
#ifndef _ApplicationApplication_
  EW_DECLARE_CLASS( ApplicationApplication )
#define _ApplicationApplication_
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

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Event */
#ifndef _CoreEvent_
  EW_DECLARE_CLASS( CoreEvent )
#define _CoreEvent_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::ModalContext */
#ifndef _CoreModalContext_
  EW_DECLARE_CLASS( CoreModalContext )
#define _CoreModalContext_
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

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* This is the root component of the entire GUI application. */
EW_DEFINE_FIELDS( ApplicationApplication, CoreRoot )
  EW_OBJECT  ( StartTimer,      CoreTimer )
  EW_OBJECT  ( StopTimer,       CoreTimer )
  EW_OBJECT  ( BacklightForeground, ViewsRectangle )
  EW_OBJECT  ( BacklightTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( BacklightTimer,  CoreTimer )
  EW_OBJECT  ( CityPowerObserver, CorePropertyObserver )
  EW_OBJECT  ( GeneratorBackupObserver, CorePropertyObserver )
  EW_OBJECT  ( GeneratorErrorAnimation, EffectsInt32Effect )
  EW_OBJECT  ( GeneratorFuelLevelAnimation, EffectsInt32Effect )
  EW_OBJECT  ( BatteryObserver, CorePropertyObserver )
  EW_OBJECT  ( BatteryAnimation, EffectsColorEffect )
  EW_OBJECT  ( BackgroundRectangle, ViewsRectangle )
  EW_OBJECT  ( BacklightButton, WidgetSetPushButton )
  EW_OBJECT  ( GeneratorRemoteShadow, ViewsShadow )
  EW_OBJECT  ( GeneratorRemoteBackground, ViewsRectangle )
  EW_OBJECT  ( GeneratorRemoteCaption, ViewsText )
  EW_OBJECT  ( GeneratorRemoteStop, WidgetSetPushButton )
  EW_OBJECT  ( GeneratorRemoteStart, WidgetSetPushButton )
  EW_OBJECT  ( GeneratorBackupCaption, ViewsText )
  EW_OBJECT  ( GeneratorBackupConnector1, ViewsLine )
  EW_OBJECT  ( GeneratorBackupConnector2, ViewsLine )
  EW_OBJECT  ( GeneratorPowerIcon, ViewsImage )
  EW_OBJECT  ( GeneratorBackupIndicator, ViewsImage )
  EW_OBJECT  ( GeneratorErrorStartStop, ViewsImage )
  EW_OBJECT  ( GeneratorFuelLevel, WidgetSetVerticalValueBar )
  EW_OBJECT  ( GeneratorFuelicon, ViewsImage )
  EW_OBJECT  ( GeneratorErrorFuelLevel, ViewsImage )
  EW_OBJECT  ( GeneratorWirelessIcon, ViewsImage )
  EW_OBJECT  ( GeneratorWirelessBackground, ViewsRectangle )
  EW_OBJECT  ( GeneratorWirelessText, ViewsText )
  EW_OBJECT  ( CityPowerCaption, ViewsText )
  EW_OBJECT  ( CityPowerConnector1, ViewsLine )
  EW_OBJECT  ( CityPowerConnector2, ViewsLine )
  EW_OBJECT  ( CityPowerIcon,   ViewsImage )
  EW_OBJECT  ( CityPowerIndicator, ViewsImage )
  EW_OBJECT  ( QuickActionsShadow, ViewsShadow )
  EW_OBJECT  ( QuickActionsBackground, ViewsRectangle )
  EW_OBJECT  ( QuickActionsCaption, ViewsText )
  EW_OBJECT  ( QuickActionsEvents, WidgetSetPushButton )
  EW_OBJECT  ( QuickActionsSettings, WidgetSetPushButton )
  EW_OBJECT  ( HouseIndicator,  ViewsRectangle )
  EW_OBJECT  ( HouseIcon,       ViewsImage )
  EW_OBJECT  ( HouseNightDayMode, ViewsImage )
  EW_OBJECT  ( HouseAnimation,  EffectsColorEffect )
  EW_OBJECT  ( KeyHandlerKeyC,  CoreKeyPressHandler )
  EW_OBJECT  ( KeyHandlerKeyG,  CoreKeyPressHandler )
  EW_OBJECT  ( KeyHandlerKeyUp, CoreKeyPressHandler )
  EW_OBJECT  ( KeyHandlerKeyDown, CoreKeyPressHandler )
  EW_OBJECT  ( NoteUpLeftShadow, ViewsShadow )
  EW_OBJECT  ( NoteUpLeftBackground, ViewsRectangle )
  EW_OBJECT  ( NoteUpLeftText,  ViewsText )
  EW_OBJECT  ( NoteUpLeftAnimate, EffectsRectEffect )
  EW_OBJECT  ( NoteUpRightShadow, ViewsShadow )
  EW_OBJECT  ( NoteUpRightBackground, ViewsRectangle )
  EW_OBJECT  ( NoteUpRightText, ViewsText )
  EW_OBJECT  ( NoteUpRightAnimate, EffectsRectEffect )
  EW_OBJECT  ( NoteBottomCenter, ApplicationBottomNote )
  EW_OBJECT  ( NoteBottomCenterAnimate, EffectsRectEffect )
  EW_OBJECT  ( StatusBarShadow, ViewsShadow )
  EW_OBJECT  ( StatusBarBackground, ViewsRectangle )
  EW_OBJECT  ( StatusBarClockText, ViewsText )
  EW_OBJECT  ( StatusBarBatteryText, ViewsText )
  EW_OBJECT  ( StatusBarNote,   ViewsText )
  EW_OBJECT  ( StatusBarBatteryIcon, ViewsImage )
  EW_OBJECT  ( StatusBarEventsicon, ViewsImage )
  EW_OBJECT  ( BlackoutTimer,   CoreTimer )
  EW_OBJECT  ( ClockObject,     CoreTime )
  EW_OBJECT  ( ClockTimer,      CoreTimer )
  EW_OBJECT  ( LogicTimer,      CoreTimer )
  EW_OBJECT  ( LogicGenericTimerA, CoreTimer )
  EW_OBJECT  ( LogicGenericTimerB, CoreTimer )
  EW_OBJECT  ( RuntimeTimer,    CoreTimer )
  EW_OBJECT  ( DebugGenerator,  CoreSimpleTouchHandler )
  EW_OBJECT  ( DebugCityPower,  CoreSimpleTouchHandler )
  EW_VARIABLE( Device,          ApplicationDeviceClass )
  EW_VARIABLE( SettingsLocked,  ApplicationSettingsClass )
  EW_VARIABLE( DialogueShown,   CoreGroup )
  EW_VARIABLE( GeneratorErrorState, XInt32 )
  EW_VARIABLE( NoteBottomCenterState, XInt32 )
  EW_VARIABLE( BlackoutCounter, XInt32 )
  EW_VARIABLE( LogicDelayState, XInt32 )
  EW_VARIABLE( LogicAttemptCounter, XInt32 )
  EW_VARIABLE( LogicSessionCounter, XInt32 )
  EW_VARIABLE( LogicSavingsModeState, XInt32 )
  EW_VARIABLE( LogicSavingsModeCycle, XInt32 )
  EW_VARIABLE( LogicDayNightModeState, XBool )
EW_END_OF_FIELDS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_METHODS( ApplicationApplication, CoreRoot )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreRoot _this )
  EW_METHOD( Draw,              void )( CoreRoot _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( ApplicationApplication _this, CoreEvent 
    aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreRoot _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreRoot _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreRoot _this, XInt32 value )
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
  EW_METHOD( DispatchEvent,     XObject )( CoreRoot _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreRoot _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreRoot _this, XRect aArea )
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
EW_END_OF_METHODS( ApplicationApplication )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg );

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
  aEvent );

/* 'C' function for method : 'Application::Application.StartOnPress()' */
void ApplicationApplication_StartOnPress( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.StartOnRelease()' */
void ApplicationApplication_StartOnRelease( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.StopOnPress()' */
void ApplicationApplication_StopOnPress( ApplicationApplication _this, XObject sender );

/* 'C' function for method : 'Application::Application.StopOnRelease()' */
void ApplicationApplication_StopOnRelease( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.BacklightOn()' */
void ApplicationApplication_BacklightOn( ApplicationApplication _this, XObject sender );

/* 'C' function for method : 'Application::Application.BacklightOff()' */
void ApplicationApplication_BacklightOff( ApplicationApplication _this, XObject 
  sender );

/* Slot method to reset the auto demo. */
void ApplicationApplication_BacklightReset( ApplicationApplication _this, XObject 
  sender );

/* Slot method to trigger the next phase of the auto demo. */
void ApplicationApplication_BacklightTimerOnTrigger( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.CityPowerEventHandler()' */
void ApplicationApplication_CityPowerEventHandler( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.GeneratorBackupEventHandler()' */
void ApplicationApplication_GeneratorBackupEventHandler( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.BatteryEventHandler()' */
void ApplicationApplication_BatteryEventHandler( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.BatteryAnimationOnAnimate()' */
void ApplicationApplication_BatteryAnimationOnAnimate( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.HouseStateHandling()' */
void ApplicationApplication_HouseStateHandling( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.HouseAnimationOnAnimate()' */
void ApplicationApplication_HouseAnimationOnAnimate( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.DialogueSettingsOpen()' */
void ApplicationApplication_DialogueSettingsOpen( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.DialogueSettingsClose()' */
void ApplicationApplication_DialogueSettingsClose( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.DialogueEventsOpen()' */
void ApplicationApplication_DialogueEventsOpen( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.DialogueEventsClose()' */
void ApplicationApplication_DialogueEventsClose( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyC()' */
void ApplicationApplication_OnKeyHandlerKeyC( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyG()' */
void ApplicationApplication_OnKeyHandlerKeyG( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyUp()' */
void ApplicationApplication_OnKeyHandlerKeyUp( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.OnKeyHandlerKeyDown()' */
void ApplicationApplication_OnKeyHandlerKeyDown( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.NoteUpLeftAnimateOnX()' */
void ApplicationApplication_NoteUpLeftAnimateOnX( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.NoteUpRightAnimateOnX()' */
void ApplicationApplication_NoteUpRightAnimateOnX( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.NoteBottomCenterAnimateOnFinish()' */
void ApplicationApplication_NoteBottomCenterAnimateOnFinish( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.BlackoutTimerOnTrigger()' */
void ApplicationApplication_BlackoutTimerOnTrigger( ApplicationApplication _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application.BlackoutIndicatorUpdate()' */
void ApplicationApplication_BlackoutIndicatorUpdate( ApplicationApplication _this );

/* 'C' function for method : 'Application::Application.ClockTimerOnTrigger()' */
void ApplicationApplication_ClockTimerOnTrigger( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.LogicTimerOnTrigger()' */
void ApplicationApplication_LogicTimerOnTrigger( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.RuntimeTimerOnTrigger()' */
void ApplicationApplication_RuntimeTimerOnTrigger( ApplicationApplication _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationApplication_H */

/* Embedded Wizard */
