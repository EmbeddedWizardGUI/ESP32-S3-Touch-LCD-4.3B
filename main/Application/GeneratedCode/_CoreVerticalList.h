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

#ifndef _CoreVerticalList_H
#define _CoreVerticalList_H

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

/* Forward declaration of the class Core::SlideTouchHandler */
#ifndef _CoreSlideTouchHandler_
  EW_DECLARE_CLASS( CoreSlideTouchHandler )
#define _CoreSlideTouchHandler_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::VerticalList */
#ifndef _CoreVerticalList_
  EW_DECLARE_CLASS( CoreVerticalList )
#define _CoreVerticalList_
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

/* Forward declaration of the class Effects::Transition */
#ifndef _EffectsTransition_
  EW_DECLARE_CLASS( EffectsTransition )
#define _EffectsTransition_
#endif


/* The class Core::VerticalList provides a generic vertical list view. Its purpose 
   is the presentation and the management of list items. Within the view the items 
   can be scrolled and the user can select them. This is very useful to show e.g. 
   the records from a data base. Within the view the items are arranged vertically 
   from top to bottom. If horizontal arrangement is desired, please use the class 
   Core::HorizontalList.
   - All items within the list view are objects of a predetermined item class. Depending 
   on this class, simple text items, image items or even complex GUI components 
   can be shown there. This class is defined in the property @ItemClass. Please 
   note, that only classes derived from Core::View are able to be shown. For example, 
   if you want to create a list of images, assign Views::Image to this property. 
   If your application case does require the items to have different classes, associate 
   a slot method to the property @OnQueryItemClass. Thereupon the list will invoke 
   this slot method whenever the class of an item needs to be estimated.
   - The height of the items is determined by the property @ItemHeight. The list 
   is optimized to manage items of equal height. If your application case does require 
   the items to have different height, associate a slot method to the property @OnQueryItemHeight. 
   Thereupon the list will invoke this slot method whenever the position of an item 
   needs to be calculated.
   - The width of the items is determined by the property @ItemWidth. If this property 
   is 0 (default), all items will have the same width as the list boundary. If set 
   to a value greater than 0, all items will have the specified width. This allows 
   items to be wider than the list itself, enabling horizontal scrolling.
   - The entire number of list items is defined by the property @NoOfItems. By changing 
   this property the list can grow or it can shrink. Usually this value corresponds 
   to the number of items within the associated data source, e.g. to the number 
   of records in a data base.
   - This view is optimized to handle with very large lists consisting of thousand 
   of items. To preserve the memory, only the visible items will be stored there. 
   These will be created, loaded and discarded again automatically by the list view. 
   The only thing you have to provide is an external slot method, which is connected 
   to the view's property @OnLoadItem. Its job is to load an item with its content 
   from a data source. The affected item and its list index are available in the 
   variables @View and @Item.
   - The content of the list can be scrolled vertically by modifying the property 
   @ScrollOffset. When items are wider than the list boundary (see @ItemWidth), 
   the list can also be scrolled horizontally by modifying the property @ScrollHorzOffset. 
   Additionally a Core::SlideTouchHandler can be attached to the list view so the 
   user can scroll the items interactively by touching the screen. The property 
   @SlideHandler allows it. When items have a custom width, the slide handler supports 
   both vertical and horizontal scrolling simultaneously.
   - With the property @Endless the list can be configured to start just after the 
   last item again with the first item.
   - The both properties @PaddingTop and @PaddingBottom permit to reserve additional 
   space just before the first and after the last item.
   - Within the list view one item can be selected. The index of the affected item 
   is stored in the property @SelectedItem. If the list view is focused, this item 
   also becomes focused. Focused items automatically receive keyboard events.
   - The method @GetItemsArea() is useful if the area occupied by one or more items 
   should be calculated. In contrast the method @GetItemAtPosition() tries to determines 
   the item which is lying at a given position.
   - The method @InvalidateItems() forces the list to re-load one or more items. 
   This method is very useful if the content of the affected items (or their height) 
   has been altered in the associated data source.
   - The method @EnsureVisible() has the job to scroll the list until the given 
   item is visible. The method @AdjustList() in contrast tries to scroll the list 
   so the entire list view area is filled with items. Usually this is used after 
   the list size changes.
   - The list supports animated gaps between items which can be used to create smooth 
   animations when inserting or removing items. The method @OpenGap() opens a gap 
   of a specified size after a given item, causing all following items to shift 
   down. This is typically used before inserting a new item. The method @CloseGap() 
   closes a previously opened gap, causing the following items to shift up. This 
   is typically used after removing an item. Both methods support optional animation 
   effects to create smooth transitions. At any time, one opening gap and one closing 
   gap can exist simultaneously and can be animated independently. The method @IsGapEffectActive() 
   can be used to query whether any gap animation is currently running. */
EW_DEFINE_FIELDS( CoreVerticalList, CoreGroup )
  EW_VARIABLE( itemsPool,       CoreView )
  EW_VARIABLE( View,            CoreView )
  EW_PROPERTY( SlideHandler,    CoreSlideTouchHandler )
  EW_PROPERTY( OnLoadItem,      XSlot )
  EW_VARIABLE( validTail,       XInt32 )
  EW_VARIABLE( validHead,       XInt32 )
  EW_VARIABLE( itemsPoolMaxSize, XInt32 )
  EW_VARIABLE( itemsPoolSize,   XInt32 )
  EW_VARIABLE( QueriedItemHeight, XInt32 )
  EW_VARIABLE( ViewSize,        XPoint )
  EW_VARIABLE( Item,            XInt32 )
  EW_PROPERTY( ScrollHorzOffset, XInt32 )
  EW_PROPERTY( ScrollOffset,    XInt32 )
  EW_PROPERTY( ItemHeight,      XInt32 )
  EW_PROPERTY( NoOfItems,       XInt32 )
  EW_VARIABLE( loading,         XBool )
  EW_PROPERTY( Endless,         XBool )
EW_END_OF_FIELDS( CoreVerticalList )

/* Virtual Method Table (VMT) for the class : 'Core::VerticalList' */
EW_DEFINE_METHODS( CoreVerticalList, CoreGroup )
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
  EW_METHOD( ExtendClipping,    void )( CoreVerticalList _this, XInt32 aExtClipLeft, 
    XInt32 aExtClipRight, XInt32 aExtClipTop, XInt32 aExtClipBottom )
  EW_METHOD( SwitchToDialog,    void )( CoreVerticalList _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( DismissDialog,     void )( CoreVerticalList _this, CoreGroup aDialogGroup, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( PresentDialog,     void )( CoreVerticalList _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideOverlayTransition, EffectsTransition aOverrideRestoreTransition, 
    XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( DispatchEvent,     XObject )( CoreVerticalList _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreVerticalList _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreVerticalList _this, CoreView aView, 
    XSet aFilter )
  EW_METHOD( FadeGroup,         void )( CoreVerticalList _this, CoreGroup aGroup, 
    EffectsFader aFader, XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( RestackBack,       void )( CoreVerticalList _this, CoreView aView )
  EW_METHOD( RestackTop,        void )( CoreVerticalList _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreVerticalList _this, CoreView aView, 
    XInt32 aOrder )
  EW_METHOD( Remove,            void )( CoreVerticalList _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreVerticalList _this, CoreView aView, 
    XInt32 aOrder )
EW_END_OF_METHODS( CoreVerticalList )

/* The method ExtendClipping() enhances the clipping area of the affected group 
   so that all contents lying outside its original @Bounds area can be displayed 
   on the screen. Enhancement of the clipping area is typically necessary when the 
   group is intended to display shadows or blur effects which cross the borders 
   of the group.
   With the four parameters aExtClipLeft, aExtClipRight aExtClipTop and aExtClipBottom 
   the clipping at the corresponding edges can be enhanced individually. Please 
   note that the parameters are limited to the range 0 .. 255. This means the clipping 
   for an edge can be enhanced maximally by 255 pixel. Exaggerated enhancement of 
   clipping aea can impact the screen update performance of your application.
   Furthermore, if the component is configured as @Buffered, extending the clipping 
   area has no effect. Setting 'Buffered' = 'true' imposes the component to clip 
   at its edges determined by the property @Bounds. */
void CoreVerticalList_ExtendClipping( CoreVerticalList _this, XInt32 aExtClipLeft, 
  XInt32 aExtClipRight, XInt32 aExtClipTop, XInt32 aExtClipBottom );

/* 'C' function for method : 'Core::VerticalList.SwitchToDialog()' */
void CoreVerticalList_SwitchToDialog( CoreVerticalList _this, CoreGroup aDialogGroup, 
  EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, EffectsTransition 
  aOverlayTransition, EffectsTransition aRestoreTransition, EffectsTransition aOverrideDismissTransition, 
  EffectsTransition aOverrideOverlayTransition, EffectsTransition aOverrideRestoreTransition, 
  XSlot aComplete, XSlot aCancel, XBool aCombine );

/* 'C' function for method : 'Core::VerticalList.DismissDialog()' */
void CoreVerticalList_DismissDialog( CoreVerticalList _this, CoreGroup aDialogGroup, 
  EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
  EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
  XBool aCombine );

/* 'C' function for method : 'Core::VerticalList.PresentDialog()' */
void CoreVerticalList_PresentDialog( CoreVerticalList _this, CoreGroup aDialogGroup, 
  EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, EffectsTransition 
  aOverlayTransition, EffectsTransition aRestoreTransition, EffectsTransition aOverrideOverlayTransition, 
  EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
  XBool aCombine );

/* The method DispatchEvent() feeds the component with the event passed in the parameter 
   aEvent and propagates it along the so-called focus path. This focus path leads 
   to the currently selected keyboard event receiver view. If the event is rejected 
   by the view, the same operation is repeated for the next superior view. This 
   permits the hierarchical event dispatching until a willing view has handled the 
   event or all views in the focus path have been evaluated. If the event remains 
   still unhandled, it will be passed to the component itself.
   The focus path is established by the property @Focus. 
   DispatchEvent() returns the value returned by the @HandleEvent() method of the 
   view which has handled the event. In the case, the event was not handled, the 
   method returns 'null'. */
XObject CoreVerticalList_DispatchEvent( CoreVerticalList _this, CoreEvent aEvent );

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
void CoreVerticalList_UpdateViewState( CoreVerticalList _this, XSet aState );

/* 'C' function for method : 'Core::VerticalList.FindSiblingView()' */
CoreView CoreVerticalList_FindSiblingView( CoreVerticalList _this, CoreView aView, 
  XSet aFilter );

/* 'C' function for method : 'Core::VerticalList.FadeGroup()' */
void CoreVerticalList_FadeGroup( CoreVerticalList _this, CoreGroup aGroup, EffectsFader 
  aFader, XSlot aComplete, XSlot aCancel, XBool aCombine );

/* 'C' function for method : 'Core::VerticalList.RestackBack()' */
void CoreVerticalList_RestackBack( CoreVerticalList _this, CoreView aView );

/* 'C' function for method : 'Core::VerticalList.RestackTop()' */
void CoreVerticalList_RestackTop( CoreVerticalList _this, CoreView aView );

/* 'C' function for method : 'Core::VerticalList.Restack()' */
void CoreVerticalList_Restack( CoreVerticalList _this, CoreView aView, XInt32 aOrder );

/* 'C' function for method : 'Core::VerticalList.Remove()' */
void CoreVerticalList_Remove( CoreVerticalList _this, CoreView aView );

/* 'C' function for method : 'Core::VerticalList.Add()' */
void CoreVerticalList_Add( CoreVerticalList _this, CoreView aView, XInt32 aOrder );

/* 'C' function for method : 'Core::VerticalList.item2Pos()' */
XInt32 CoreVerticalList_item2Pos( CoreVerticalList _this, XInt32 aItem, XInt32 aCacheNo );

/* 'C' function for method : 'Core::VerticalList.pos2Item()' */
XInt32 CoreVerticalList_pos2Item( CoreVerticalList _this, XInt32 aPos, XInt32 aCacheNo );

/* 'C' function for method : 'Core::VerticalList.releaseTailItem()' */
CoreView CoreVerticalList_releaseTailItem( CoreVerticalList _this );

/* 'C' function for method : 'Core::VerticalList.confirmTailItem()' */
CoreView CoreVerticalList_confirmTailItem( CoreVerticalList _this );

/* 'C' function for method : 'Core::VerticalList.releaseHeadItem()' */
CoreView CoreVerticalList_releaseHeadItem( CoreVerticalList _this );

/* 'C' function for method : 'Core::VerticalList.confirmHeadItem()' */
CoreView CoreVerticalList_confirmHeadItem( CoreVerticalList _this );

/* 'C' function for method : 'Core::VerticalList.onSlideSlot()' */
void CoreVerticalList_onSlideSlot( CoreVerticalList _this, XObject sender );

/* 'C' function for method : 'Core::VerticalList.onStartSlideSlot()' */
void CoreVerticalList_onStartSlideSlot( CoreVerticalList _this, XObject sender );

/* 'C' function for method : 'Core::VerticalList.OnSetEndless()' */
void CoreVerticalList_OnSetEndless( CoreVerticalList _this, XBool value );

/* 'C' function for method : 'Core::VerticalList.OnSetSlideHandler()' */
void CoreVerticalList_OnSetSlideHandler( CoreVerticalList _this, CoreSlideTouchHandler 
  value );

/* 'C' function for method : 'Core::VerticalList.OnSetScrollHorzOffset()' */
void CoreVerticalList_OnSetScrollHorzOffset( CoreVerticalList _this, XInt32 value );

/* 'C' function for method : 'Core::VerticalList.OnSetScrollOffset()' */
void CoreVerticalList_OnSetScrollOffset( CoreVerticalList _this, XInt32 value );

/* 'C' function for method : 'Core::VerticalList.OnSetItemHeight()' */
void CoreVerticalList_OnSetItemHeight( CoreVerticalList _this, XInt32 value );

/* 'C' function for method : 'Core::VerticalList.OnSetNoOfItems()' */
void CoreVerticalList_OnSetNoOfItems( CoreVerticalList _this, XInt32 value );

/* The method GetItemsArea() determines a rectangular area within the list view 
   occupied by one or more items. The index of the item to start the calculation 
   is specified in the parameter aFirstItem. The parameter aLastItem specifies the 
   index of the last affected item. The first item has the index 0, the second 1, 
   and so far. The determined area is expressed in coordinates relative to the top-left 
   corner of the view's @Owner. If none of the specified items does exist, the method 
   returns an empty area.
   Please note, if the list is configured with the property @Endless == 'true', 
   multiple copies of one and the same item may be displayed on the screen. In such 
   case the method returns the area corresponding to the first set of items lying 
   actually within the list view. */
XRect CoreVerticalList_GetItemsArea( CoreVerticalList _this, XInt32 aFirstItem, 
  XInt32 aLastItem );

#ifdef __cplusplus
  }
#endif

#endif /* _CoreVerticalList_H */

/* Embedded Wizard */
