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

#ifndef _ApplicationSettingsPage3_H
#define _ApplicationSettingsPage3_H

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

#include "_ApplicationSettingsValueDisplay.h"
#include "_CoreGroup.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetToggleButton.h"

/* Forward declaration of the class Application::SettingsClass */
#ifndef _ApplicationSettingsClass_
  EW_DECLARE_CLASS( ApplicationSettingsClass )
#define _ApplicationSettingsClass_
#endif

/* Forward declaration of the class Application::SettingsPage3 */
#ifndef _ApplicationSettingsPage3_
  EW_DECLARE_CLASS( ApplicationSettingsPage3 )
#define _ApplicationSettingsPage3_
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


/* Deklaration of class : 'Application::SettingsPage3' */
EW_DEFINE_FIELDS( ApplicationSettingsPage3, CoreGroup )
  EW_OBJECT  ( ToggleButtonA,   WidgetSetToggleButton )
  EW_OBJECT  ( TextB,           ViewsText )
  EW_OBJECT  ( ValueDisplayB,   ApplicationSettingsValueDisplay )
  EW_OBJECT  ( HorizontalSliderB, WidgetSetHorizontalSlider )
  EW_OBJECT  ( TextC,           ViewsText )
  EW_OBJECT  ( ValueDisplayC,   ApplicationSettingsValueDisplay )
  EW_OBJECT  ( HorizontalSliderC, WidgetSetHorizontalSlider )
  EW_OBJECT  ( TextD,           ViewsText )
  EW_OBJECT  ( ValueDisplayD,   ApplicationSettingsValueDisplay )
  EW_OBJECT  ( HorizontalSliderD, WidgetSetHorizontalSlider )
  EW_OBJECT  ( TextE,           ViewsText )
  EW_OBJECT  ( ValueDisplayE,   ApplicationSettingsValueDisplay )
  EW_OBJECT  ( HorizontalSliderE, WidgetSetHorizontalSlider )
  EW_VARIABLE( SettingsLocked,  ApplicationSettingsClass )
  EW_VARIABLE( SettingsModified, ApplicationSettingsClass )
  EW_PROPERTY( UnhideControlElements, XSlot )
  EW_PROPERTY( HideControlElements, XSlot )
EW_END_OF_FIELDS( ApplicationSettingsPage3 )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsPage3' */
EW_DEFINE_METHODS( ApplicationSettingsPage3, CoreGroup )
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
EW_END_OF_METHODS( ApplicationSettingsPage3 )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsPage3_Init( ApplicationSettingsPage3 _this, XHandle aArg );

/* 'C' function for method : 'Application::SettingsPage3.OnChangeA()' */
void ApplicationSettingsPage3_OnChangeA( ApplicationSettingsPage3 _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsPage3.OnChangeB()' */
void ApplicationSettingsPage3_OnChangeB( ApplicationSettingsPage3 _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsPage3.OnChangeC()' */
void ApplicationSettingsPage3_OnChangeC( ApplicationSettingsPage3 _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsPage3.LoadModified()' */
void ApplicationSettingsPage3_LoadModified( ApplicationSettingsPage3 _this );

/* 'C' function for method : 'Application::SettingsPage3.OnChangeD()' */
void ApplicationSettingsPage3_OnChangeD( ApplicationSettingsPage3 _this, XObject 
  sender );

/* 'C' function for method : 'Application::SettingsPage3.OnChangeE()' */
void ApplicationSettingsPage3_OnChangeE( ApplicationSettingsPage3 _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSettingsPage3_H */

/* Embedded Wizard */
