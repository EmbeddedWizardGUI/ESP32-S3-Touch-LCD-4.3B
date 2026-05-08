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

#ifndef _ApplicationSettingsDialogue_H
#define _ApplicationSettingsDialogue_H

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

#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"

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

/* Forward declaration of the class Application::SettingsDialogue */
#ifndef _ApplicationSettingsDialogue_
  EW_DECLARE_CLASS( ApplicationSettingsDialogue )
#define _ApplicationSettingsDialogue_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
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


/* Deklaration of class : 'Application::SettingsDialogue' */
EW_DEFINE_FIELDS( ApplicationSettingsDialogue, CoreGroup )
  EW_OBJECT  ( RemoteControlBackground, ViewsRectangle )
  EW_OBJECT  ( ButtonsShadow,   ViewsShadow )
  EW_OBJECT  ( ButtonsBackground, ViewsRectangle )
  EW_OBJECT  ( ButtonClose,     WidgetSetPushButton )
  EW_OBJECT  ( ButtonSave,      WidgetSetPushButton )
  EW_OBJECT  ( ButtonReset,     WidgetSetPushButton )
  EW_OBJECT  ( CaptionShadow,   ViewsShadow )
  EW_OBJECT  ( CaptionBackground, ViewsRectangle )
  EW_OBJECT  ( CaptionText,     ViewsText )
  EW_OBJECT  ( PushButton2,     WidgetSetPushButton )
  EW_OBJECT  ( PushButton3,     WidgetSetPushButton )
  EW_OBJECT  ( SavedTimer,      CoreTimer )
  EW_OBJECT  ( ResetTimer,      CoreTimer )
  EW_VARIABLE( Page,            CoreGroup )
  EW_VARIABLE( SettingsLocked,  ApplicationSettingsClass )
  EW_VARIABLE( Device,          ApplicationDeviceClass )
  EW_VARIABLE( SettingsModified, ApplicationSettingsClass )
  EW_PROPERTY( Close,           XSlot )
  EW_VARIABLE( PageNumber,      XInt32 )
EW_END_OF_FIELDS( ApplicationSettingsDialogue )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsDialogue' */
EW_DEFINE_METHODS( ApplicationSettingsDialogue, CoreGroup )
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
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
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
EW_END_OF_METHODS( ApplicationSettingsDialogue )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsDialogue_Init( ApplicationSettingsDialogue _this, XHandle 
  aArg );

/* 'C' function for method : 'Application::SettingsDialogue.OnClose()' */
void ApplicationSettingsDialogue_OnClose( ApplicationSettingsDialogue _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsDialogue.OnReset()' */
void ApplicationSettingsDialogue_OnReset( ApplicationSettingsDialogue _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsDialogue.PageLeft()' */
void ApplicationSettingsDialogue_PageLeft( ApplicationSettingsDialogue _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsDialogue.PageRight()' */
void ApplicationSettingsDialogue_PageRight( ApplicationSettingsDialogue _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsDialogue.HideControlElements()' */
void ApplicationSettingsDialogue_HideControlElements( ApplicationSettingsDialogue _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsDialogue.UnhideControlElements()' */
void ApplicationSettingsDialogue_UnhideControlElements( ApplicationSettingsDialogue _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsDialogue.OnSave()' */
void ApplicationSettingsDialogue_OnSave( ApplicationSettingsDialogue _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsDialogue.OnSavedTimer()' */
void ApplicationSettingsDialogue_OnSavedTimer( ApplicationSettingsDialogue _this, 
  XObject sender );

/* 'C' function for method : 'Application::SettingsDialogue.OnResetTimer()' */
void ApplicationSettingsDialogue_OnResetTimer( ApplicationSettingsDialogue _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSettingsDialogue_H */

/* Embedded Wizard */
