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

#ifndef _ViewsShadow_H
#define _ViewsShadow_H

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

#include "_CoreRectView.h"

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

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif

/* Forward declaration of the class Views::Shadow */
#ifndef _ViewsShadow_
  EW_DECLARE_CLASS( ViewsShadow )
#define _ViewsShadow_
#endif


/* The class Views::Shadow provides a kind of view specialized to draw a rectangular 
   shadow. The position and the size of the shadow are determined by the property 
   @Bounds. The corners of the displayed shadow can be rounded. For this purpose 
   the property @Radius can be used. Alternatively, the rounding for the corners 
   can be configured individually by using the properties @RadiusTL, @RadiusTR, 
   @RadiusBR and @RadiusBL.
   The color to draw the shadow is defined by the property @Color. The shadow may 
   appear blurred at its edges. For this purpose the property @BlurRadius is available. 
   With the property @Offset additional displacement for the shadow can be determined.
   The visibility of the shadow is controlled by the properties @Visible, @AlphaBlended 
   and @Embedded. In particular the property @Embedded can determine whether the 
   corresponding view is limited (== embedded) to the boundary of a sibling Core::Outline 
   view or not. The embedding of views within a Core::Outline allows a kind of sub-groups 
   within the GUI component itself. Very useful for any kind of scrollable lists, 
   menus, etc.
   Please note, except the WebGL platform, the implementation uses a box blur algorithm 
   without involving any GPU to perform the blur operation. This guarantees similar 
   results on all target systems with the blur radius not being restricted to any 
   discrete value. In case of the WebGL platform, the blur effect is performed natively 
   using functionality available in the WebBrowser. The blur effect on a WebGL platform 
   may differ therefore. Furthermore, the results on WebGL platform may differ depending 
   on the used WebBrowser. */
EW_DEFINE_FIELDS( ViewsShadow, CoreRectView )
  EW_PROPERTY( RadiusBL,        XInt32 )
  EW_PROPERTY( RadiusBR,        XInt32 )
  EW_PROPERTY( RadiusTR,        XInt32 )
  EW_PROPERTY( RadiusTL,        XInt32 )
  EW_PROPERTY( Radius,          XInt32 )
  EW_PROPERTY( BlurRadius,      XInt32 )
  EW_PROPERTY( Color,           XColor )
EW_END_OF_FIELDS( ViewsShadow )

/* Virtual Method Table (VMT) for the class : 'Views::Shadow' */
EW_DEFINE_METHODS( ViewsShadow, CoreRectView )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( ViewsShadow _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( ViewsShadow _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreView _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreView _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreView _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreRectView _this, XRect value )
EW_END_OF_METHODS( ViewsShadow )

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you will never need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsShadow_Draw( ViewsShadow _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend );

/* The method GetClipping() returns the clipping area of the view as rectangle relative 
   to the origin of the view's @Owner. With the returned clipping area the view 
   limits its own visibility. Contents belonging to the view and lying outside this 
   area will not be displayed - they are clipped during the screen update process.
   Per default the clipping area corresponds to the boundary area of the view (see 
   also @GetExtent()). Derived views can override GetClipping() and enlarge the 
   area so the view can display additional contents (e.g. shadows or decoration) 
   outside of its original boundary area. */
XRect ViewsShadow_GetClipping( ViewsShadow _this );

/* 'C' function for method : 'Views::Shadow.OnSetRadiusBL()' */
void ViewsShadow_OnSetRadiusBL( ViewsShadow _this, XInt32 value );

/* 'C' function for method : 'Views::Shadow.OnSetRadiusBR()' */
void ViewsShadow_OnSetRadiusBR( ViewsShadow _this, XInt32 value );

/* 'C' function for method : 'Views::Shadow.OnSetRadiusTR()' */
void ViewsShadow_OnSetRadiusTR( ViewsShadow _this, XInt32 value );

/* 'C' function for method : 'Views::Shadow.OnSetRadiusTL()' */
void ViewsShadow_OnSetRadiusTL( ViewsShadow _this, XInt32 value );

/* 'C' function for method : 'Views::Shadow.OnSetRadius()' */
void ViewsShadow_OnSetRadius( ViewsShadow _this, XInt32 value );

/* 'C' function for method : 'Views::Shadow.OnSetBlurRadius()' */
void ViewsShadow_OnSetBlurRadius( ViewsShadow _this, XInt32 value );

/* 'C' function for method : 'Views::Shadow.OnSetColor()' */
void ViewsShadow_OnSetColor( ViewsShadow _this, XColor value );

/* 'C' function for method : 'Views::Shadow.OnSetVisible()' */
void ViewsShadow_OnSetVisible( ViewsShadow _this, XBool value );

#ifdef __cplusplus
  }
#endif

#endif /* _ViewsShadow_H */

/* Embedded Wizard */
