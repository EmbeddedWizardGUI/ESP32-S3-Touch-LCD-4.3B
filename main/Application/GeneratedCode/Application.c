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
#include "_ApplicationApplication.h"
#include "_ApplicationDeviceClass.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_ResourcesFont.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "Application.h"
#include "Views.h"

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault0[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x0057, 0x0069, 0x002D, 0x0046, 0x0069, 0x0020, 0x0053,
  0x0063, 0x0061, 0x006E, 0x006E, 0x0065, 0x0072, 0x0000, 0xC557, 0x0069, 0x006E,
  0x0069, 0x0074, 0x0069, 0x0061, 0x006C, 0x0069, 0x007A, 0x0069, 0x006E, 0x0067,
  0x002E, 0x002E, 0x002E, 0x0000, 0xC557, 0x0053, 0x0043, 0x0041, 0x004E, 0x0000,
  0xC557, 0x004F, 0x0070, 0x0065, 0x006E, 0x0020, 0x0020, 0x0000, 0xC557, 0x0057,
  0x0045, 0x0050, 0x0020, 0x0020, 0x0020, 0x0000, 0xC557, 0x0057, 0x0050, 0x0041,
  0x0020, 0x0020, 0x0020, 0x0000, 0xC557, 0x0057, 0x0050, 0x0041, 0x0032, 0x0020,
  0x0020, 0x0000, 0xC557, 0x0057, 0x0050, 0x0041, 0x0031, 0x002F, 0x0032, 0x0000,
  0xC557, 0x0045, 0x004E, 0x0054, 0x0020, 0x0020, 0x0020, 0x0000, 0xC557, 0x0057,
  0x0050, 0x0041, 0x0033, 0x0020, 0x0020, 0x0000, 0xC557, 0x0057, 0x0050, 0x0041,
  0x0032, 0x002F, 0x0033, 0x0000, 0xC557, 0x0057, 0x0041, 0x0050, 0x0049, 0x0020,
  0x0020, 0x0000, 0xC557, 0x004F, 0x0057, 0x0045, 0x0020, 0x0020, 0x0020, 0x0000,
  0xC557, 0x0057, 0x0050, 0x0041, 0x0033, 0x002D, 0x0045, 0x0000, 0xC557, 0x003F,
  0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0000, 0xC557, 0x0073, 0x0063, 0x0061,
  0x006E, 0x006E, 0x0069, 0x006E, 0x0067, 0x002E, 0x002E, 0x002E, 0x0000, 0xC557,
  0x0057, 0x0069, 0x002D, 0x0046, 0x0069, 0x0020, 0x0069, 0x006E, 0x0069, 0x0074,
  0x0069, 0x0061, 0x006C, 0x0069, 0x007A, 0x0069, 0x006E, 0x0067, 0x002E, 0x002E,
  0x002E, 0x0000, 0xC557, 0x0020, 0x006E, 0x0065, 0x0074, 0x0077, 0x006F, 0x0072,
  0x006B, 0x0028, 0x0073, 0x0029, 0x0020, 0x0066, 0x006F, 0x0075, 0x006E, 0x0064,
  0x0000, 0xC557, 0x005B, 0x0000, 0xC557, 0x005D, 0x0020, 0x0020, 0x0000, 0xC557,
  0x0020, 0x0064, 0x0042, 0x006D, 0x0020, 0x0020, 0x0063, 0x0068, 0x0020, 0x0000,
  0xC557, 0x0020, 0x0020, 0x0000, 0xC557, 0x000A, 0x0000, 0xC557, 0x0028, 0x006E,
  0x006F, 0x0020, 0x006E, 0x0065, 0x0074, 0x0077, 0x006F, 0x0072, 0x006B, 0x0073,
  0x0020, 0x0079, 0x0065, 0x0074, 0x0020, 0x002D, 0x0020, 0x0070, 0x0072, 0x0065,
  0x0073, 0x0073, 0x0020, 0x0053, 0x0043, 0x0041, 0x004E, 0x0020, 0x006F, 0x0072,
  0x0020, 0x0077, 0x0061, 0x0069, 0x0074, 0x002E, 0x002E, 0x002E, 0x0029, 0x0000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 800, 480 }};
static const XColor _Const0001 = { 0x1A, 0x1A, 0x1A, 0xFF };
static const XRect _Const0002 = {{ 0, 0 }, { 800, 90 }};
static const XColor _Const0003 = { 0x2D, 0x2D, 0x2D, 0xFF };
static const XRect _Const0004 = {{ 30, 15 }, { 500, 75 }};
static const XStringRes _Const0005 = { _StringsDefault0, 0x0003 };
static const XColor _Const0006 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0007 = {{ 30, 100 }, { 500, 140 }};
static const XStringRes _Const0008 = { _StringsDefault0, 0x0012 };
static const XColor _Const0009 = { 0xB0, 0xB0, 0xB0, 0xFF };
static const XRect _Const000A = {{ 620, 20 }, { 770, 70 }};
static const XColor _Const000B = { 0x2D, 0x7D, 0xD2, 0xFF };
static const XStringRes _Const000C = { _StringsDefault0, 0x0023 };
static const XPoint _Const000D = { 620, 20 };
static const XPoint _Const000E = { 770, 20 };
static const XPoint _Const000F = { 770, 70 };
static const XPoint _Const0010 = { 620, 70 };
static const XRect _Const0011 = {{ 20, 150 }, { 780, 460 }};
static const XColor _Const0012 = { 0x23, 0x23, 0x23, 0xFF };
static const XRect _Const0013 = {{ 40, 160 }, { 760, 450 }};
static const XColor _Const0014 = { 0xDD, 0xDD, 0xDD, 0xFF };
static const XStringRes _Const0015 = { _StringsDefault0, 0x0029 };
static const XStringRes _Const0016 = { _StringsDefault0, 0x0031 };
static const XStringRes _Const0017 = { _StringsDefault0, 0x0039 };
static const XStringRes _Const0018 = { _StringsDefault0, 0x0041 };
static const XStringRes _Const0019 = { _StringsDefault0, 0x0049 };
static const XStringRes _Const001A = { _StringsDefault0, 0x0051 };
static const XStringRes _Const001B = { _StringsDefault0, 0x0059 };
static const XStringRes _Const001C = { _StringsDefault0, 0x0061 };
static const XStringRes _Const001D = { _StringsDefault0, 0x0069 };
static const XStringRes _Const001E = { _StringsDefault0, 0x0071 };
static const XStringRes _Const001F = { _StringsDefault0, 0x0079 };
static const XStringRes _Const0020 = { _StringsDefault0, 0x0081 };
static const XStringRes _Const0021 = { _StringsDefault0, 0x0089 };
static const XStringRes _Const0022 = { _StringsDefault0, 0x0096 };
static const XStringRes _Const0023 = { _StringsDefault0, 0x00AD };
static const XStringRes _Const0024 = { _StringsDefault0, 0x00C0 };
static const XStringRes _Const0025 = { _StringsDefault0, 0x00C3 };
static const XStringRes _Const0026 = { _StringsDefault0, 0x00C8 };
static const XStringRes _Const0027 = { _StringsDefault0, 0x00D3 };
static const XStringRes _Const0028 = { _StringsDefault0, 0x00D7 };
static const XStringRes _Const0029 = { _StringsDefault0, 0x00DA };

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
      return 0;
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Inline code block: pulls in BSP / driver headers and hosts the static
   state previously kept in DeviceDriver.c. Everything app-specific lives
   here now - DeviceDriver.c/.h is no longer included. */
#include <string.h>
#include <stdio.h>
#include "ewrte.h"
#include "wifi.h"
#include "ew_bsp_inout.h"

/* time between two consecutive automatic scans, in milliseconds */
#define WS_SCAN_INTERVAL_MS  30000

/* upper bound for the AP record array kept in BSS */
#define WS_MAX_RECORDS       20

/* state previously hosted in DeviceDriver.c WIFI_SCANNER gate */
static volatile int   ws_scan_in_progress      = 0;
static volatile int   ws_manual_scan_requested = 0;
static unsigned long  ws_last_scan_tick        = 0;

/* shadow values so we only call the GUI on real changes */
static int            ws_last_is_ready         = -1;
static int            ws_last_is_scanning      = -1;

/* heap-of-stack scratch for scan results - kept in BSS */
static wifi_ap_info_t ws_scan_records[ WS_MAX_RECORDS ];


/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->HeaderBar, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Title, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->StatusLine, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ScanButtonShape, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ScanButtonLabel, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->ScanButtonTouch, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ResultsBackground, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ResultsText, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->RefreshTimer, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0001 );
  CoreRectView__OnSetBounds( &_this->HeaderBar, _Const0002 );
  ViewsRectangle_OnSetColor( &_this->HeaderBar, _Const0003 );
  CoreRectView__OnSetBounds( &_this->Title, _Const0004 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0005 ));
  ViewsText_OnSetColor( &_this->Title, _Const0006 );
  ViewsText_OnSetAlignment( &_this->Title, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( &_this->StatusLine, _Const0007 );
  ViewsText_OnSetString( &_this->StatusLine, EwLoadString( &_Const0008 ));
  ViewsText_OnSetColor( &_this->StatusLine, _Const0009 );
  ViewsText_OnSetAlignment( &_this->StatusLine, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  CoreRectView__OnSetBounds( &_this->ScanButtonShape, _Const000A );
  ViewsRectangle_OnSetColor( &_this->ScanButtonShape, _Const000B );
  CoreRectView__OnSetBounds( &_this->ScanButtonLabel, _Const000A );
  ViewsText_OnSetString( &_this->ScanButtonLabel, EwLoadString( &_Const000C ));
  ViewsText_OnSetColor( &_this->ScanButtonLabel, _Const0006 );
  ViewsText_OnSetAlignment( &_this->ScanButtonLabel, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->ScanButtonTouch, _Const000D );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->ScanButtonTouch, _Const000E );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->ScanButtonTouch, _Const000F );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->ScanButtonTouch, _Const0010 );
  CoreRectView__OnSetBounds( &_this->ResultsBackground, _Const0011 );
  ViewsRectangle_OnSetColor( &_this->ResultsBackground, _Const0012 );
  CoreRectView__OnSetBounds( &_this->ResultsText, _Const0013 );
  ViewsText_OnSetString( &_this->ResultsText, 0 );
  ViewsText_OnSetColor( &_this->ResultsText, _Const0014 );
  ViewsText_OnSetAlignment( &_this->ResultsText, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertTop );
  ViewsText_OnSetWrapText( &_this->ResultsText, 0 );
  CoreTimer_OnSetPeriod( &_this->RefreshTimer, 500 );
  CoreTimer_OnSetEnabled( &_this->RefreshTimer, 1 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Background ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HeaderBar ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Title ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->StatusLine ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ScanButtonShape ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ScanButtonLabel ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ScanButtonTouch ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ResultsBackground ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ResultsText ), 0 );
  _this->Device = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  ViewsText_OnSetFont( &_this->Title, EwLoadResource( &ApplicationFontTitle, ResourcesFont ));
  ViewsText_OnSetFont( &_this->StatusLine, EwLoadResource( &ApplicationFontBody, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->ScanButtonLabel, EwLoadResource( &ApplicationFontButton, 
  ResourcesFont ));
  _this->ScanButtonTouch.OnPress = EwNewSlot( _this, ApplicationApplication_OnScanPressed );
  ViewsText_OnSetFont( &_this->ResultsText, EwLoadResource( &ApplicationFontList, 
  ResourcesFont ));
  _this->RefreshTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_OnRefresh );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsRectangle__ReInit( &_this->HeaderBar );
  ViewsText__ReInit( &_this->Title );
  ViewsText__ReInit( &_this->StatusLine );
  ViewsRectangle__ReInit( &_this->ScanButtonShape );
  ViewsText__ReInit( &_this->ScanButtonLabel );
  CoreSimpleTouchHandler__ReInit( &_this->ScanButtonTouch );
  ViewsRectangle__ReInit( &_this->ResultsBackground );
  ViewsText__ReInit( &_this->ResultsText );
  CoreTimer__ReInit( &_this->RefreshTimer );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsRectangle__Done( &_this->HeaderBar );
  ViewsText__Done( &_this->Title );
  ViewsText__Done( &_this->StatusLine );
  ViewsRectangle__Done( &_this->ScanButtonShape );
  ViewsText__Done( &_this->ScanButtonLabel );
  CoreSimpleTouchHandler__Done( &_this->ScanButtonTouch );
  ViewsRectangle__Done( &_this->ResultsBackground );
  ViewsText__Done( &_this->ResultsText );
  CoreTimer__Done( &_this->RefreshTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* ----- slot: scan button pressed ------------------------------------------ */
void ApplicationApplication_OnScanPressed( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( EwNewSlot( _this->Device, ApplicationDeviceClass_RequestScan ), ((XObject)_this ));
}

/* ----- helper: short security label for a WIFI_AUTH_* enum value ----------
   Maps the IDF authmode constant to a short, fixed-width-friendly string. */
XString ApplicationApplication_AuthLabel( ApplicationApplication _this, XInt32 aMode )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  if ( aMode == 0 )
    return EwLoadString( &_Const0015 );

  if ( aMode == 1 )
    return EwLoadString( &_Const0016 );

  if ( aMode == 2 )
    return EwLoadString( &_Const0017 );

  if ( aMode == 3 )
    return EwLoadString( &_Const0018 );

  if ( aMode == 4 )
    return EwLoadString( &_Const0019 );

  if ( aMode == 5 )
    return EwLoadString( &_Const001A );

  if ( aMode == 6 )
    return EwLoadString( &_Const001B );

  if ( aMode == 7 )
    return EwLoadString( &_Const001C );

  if ( aMode == 8 )
    return EwLoadString( &_Const001D );

  if ( aMode == 9 )
    return EwLoadString( &_Const001E );

  if ( aMode == 10 )
    return EwLoadString( &_Const001F );

  return EwLoadString( &_Const0020 );
}

/* ----- slot: refresh timer fired ------------------------------------------ */
void ApplicationApplication_OnRefresh( ApplicationApplication _this, XObject sender )
{
  XString s;
  XInt32 i;
  XInt32 n;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Device->IsScanning )
    ViewsText_OnSetString( &_this->StatusLine, EwLoadString( &_Const0021 ));
  else
    if ( !_this->Device->IsReady )
      ViewsText_OnSetString( &_this->StatusLine, EwLoadString( &_Const0022 ));
    else
      ViewsText_OnSetString( &_this->StatusLine, EwConcatString( EwNewStringInt( 
      _this->Device->ResultCount, 0, 10 ), EwLoadString( &_Const0023 )));

  s = 0;
  i = 0;
  n = _this->Device->ResultCount;

  if ( n > 8 )
    n = 8;

  while ( i < n )
  {
    s = EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( s, EwLoadString( &_Const0024 )), EwNewStringInt( i, 0, 10 )), 
    EwLoadString( &_Const0025 )), EwNewStringInt( _this->Device->ResultRssi[ EwCheckIndex( 
    i, 20 )], 0, 10 )), EwLoadString( &_Const0026 )), EwNewStringInt( _this->Device->ResultChannel[ 
    EwCheckIndex( i, 20 )], 0, 10 )), EwLoadString( &_Const0027 )), ApplicationApplication_AuthLabel( 
    _this, _this->Device->ResultAuthmode[ EwCheckIndex( i, 20 )])), EwLoadString( 
    &_Const0027 )), _this->Device->ResultSsid[ EwCheckIndex( i, 20 )]), EwLoadString( 
    &_Const0028 ));
    i = i + 1;
  }

  if ( n == 0 )
    s = EwLoadString( &_Const0029 );

  ViewsText_OnSetString( &_this->ResultsText, s );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, Background, Device, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::Application" )
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->Pump, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  CoreTimer_OnSetPeriod( &_this->Pump, 200 );
  CoreTimer_OnSetEnabled( &_this->Pump, 1 );
  _this->Pump.OnTrigger = EwNewSlot( _this, ApplicationDeviceClass_OnPump );

  /* Call the user defined constructor */
  ApplicationDeviceClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->Pump );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->Pump );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  {
    /* nothing to free - wifi driver stays initialized for the
       lifetime of the application; the Pump timer is owned by the
       autoobject and is torn down with it. */
  }
}

/* ----- lifecycle: bring up the Wi-Fi BSP and the polling timer ----------- */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );

  {
    wifi_init();
    EwBspInOutSetBacklight( 1 );
  }
}

/* ----- C -> GUI: push status flags ---------------------------------------- */
void ApplicationDeviceClass_UpdateStatus( ApplicationDeviceClass _this, XBool aIsReady, 
  XBool aIsScanning )
{
  if ( aIsReady != _this->IsReady )
  {
    _this->IsReady = aIsReady;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetIsReady, 
      ApplicationDeviceClass_OnSetIsReady ), 0 );
  }

  if ( aIsScanning != _this->IsScanning )
  {
    _this->IsScanning = aIsScanning;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetIsScanning, 
      ApplicationDeviceClass_OnSetIsScanning ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateStatus()' */
void ApplicationDeviceClass__UpdateStatus( void* _this, XBool aIsReady, XBool aIsScanning )
{
  ApplicationDeviceClass_UpdateStatus((ApplicationDeviceClass)_this, aIsReady, aIsScanning );
}

/* ----- C -> GUI: finalize a scan (count + timestamp, notify observers) ---- */
void ApplicationDeviceClass_FinalizeScanResults( ApplicationDeviceClass _this, XInt32 
  aCount, XInt32 aTimestamp )
{
  if ( aCount != _this->ResultCount )
  {
    _this->ResultCount = aCount;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetResultCount, 
      ApplicationDeviceClass_OnSetResultCount ), 0 );
  }

  if ( aTimestamp != _this->LastScanTimestamp )
  {
    _this->LastScanTimestamp = aTimestamp;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetLastScanTimestamp, 
      ApplicationDeviceClass_OnSetLastScanTimestamp ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.FinalizeScanResults()' */
void ApplicationDeviceClass__FinalizeScanResults( void* _this, XInt32 aCount, XInt32 
  aTimestamp )
{
  ApplicationDeviceClass_FinalizeScanResults((ApplicationDeviceClass)_this, aCount
  , aTimestamp );
}

/* ----- C -> GUI: push one AP record into the arrays ----------------------- */
void ApplicationDeviceClass_UpdateScanResult( ApplicationDeviceClass _this, XInt32 
  aIndex, XString aSsid, XString aBssid, XInt32 aRssi, XInt32 aChannel, XInt32 aAuthmode )
{
  if (( aIndex < 0 ) || ( aIndex >= 20 ))
    return;

  _this->ResultSsid[ EwCheckIndex( aIndex, 20 )] = EwShareString( aSsid );
  _this->ResultBssid[ EwCheckIndex( aIndex, 20 )] = EwShareString( aBssid );
  _this->ResultRssi[ EwCheckIndex( aIndex, 20 )] = aRssi;
  _this->ResultChannel[ EwCheckIndex( aIndex, 20 )] = aChannel;
  _this->ResultAuthmode[ EwCheckIndex( aIndex, 20 )] = aAuthmode;
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateScanResult()' */
void ApplicationDeviceClass__UpdateScanResult( void* _this, XInt32 aIndex, XString 
  aSsid, XString aBssid, XInt32 aRssi, XInt32 aChannel, XInt32 aAuthmode )
{
  ApplicationDeviceClass_UpdateScanResult((ApplicationDeviceClass)_this, aIndex, 
  aSsid, aBssid, aRssi, aChannel, aAuthmode );
}

/* ----- GUI -> C: request a manual scan ------------------------------------ */
void ApplicationDeviceClass_RequestScan( ApplicationDeviceClass _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ws_manual_scan_requested = 1;
}

/* 'C' function for method : 'Application::DeviceClass.OnPump()' */
void ApplicationDeviceClass_OnPump( ApplicationDeviceClass _this, XObject sender )
{
  XInt32 newCount;
  XInt32 timestamp;
  XBool isReady;
  XBool isScanning;
  XBool readyChanged;
  XBool scanningChanged;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  newCount = -1;
  timestamp = 0;
  {
    EwBspInOutSetBacklight( 1 );

    if ( wifi_has_scan_results())
    {
      newCount            = wifi_fetch_scan_results( ws_scan_records, WS_MAX_RECORDS );
      ws_scan_in_progress = 0;
      timestamp           = (XInt32)EwGetTicks();
    }
  }

  if ( newCount >= 0 )
  {
    XInt32 i;

    for ( i = 0; i < newCount; i = i + 1 )
    {
      XString ssid = 0;
      XString bssid = 0;
      XInt32 rssi = 0;
      XInt32 channel = 0;
      XInt32 authmode = 0;
      {
        char bssidStr[ 18 ];
        snprintf( bssidStr, sizeof( bssidStr ),
          "%02x:%02x:%02x:%02x:%02x:%02x",
          ws_scan_records[ i ].bssid[ 0 ], ws_scan_records[ i ].bssid[ 1 ],
          ws_scan_records[ i ].bssid[ 2 ], ws_scan_records[ i ].bssid[ 3 ],
          ws_scan_records[ i ].bssid[ 4 ], ws_scan_records[ i ].bssid[ 5 ]);

        ssid     = EwNewStringAnsi( ws_scan_records[ i ].ssid );
        bssid    = EwNewStringAnsi( bssidStr );
        rssi     = (XInt32)ws_scan_records[ i ].rssi;
        channel  = (XInt32)ws_scan_records[ i ].channel;
        authmode = (XInt32)ws_scan_records[ i ].authmode;
      }
      ApplicationDeviceClass_UpdateScanResult( _this, i, ssid, bssid, rssi, channel, 
      authmode );
    }

    ApplicationDeviceClass_FinalizeScanResults( _this, newCount, timestamp );
  }

  isReady = 0;
  isScanning = 0;
  readyChanged = 0;
  scanningChanged = 0;
  {
    int ready          = wifi_is_ready();
    unsigned long now  = EwGetTicks();
    int intervalElapsed = ( ws_last_scan_tick == 0 ) ||
                          (( now - ws_last_scan_tick ) >= WS_SCAN_INTERVAL_MS );

    if ( ready && !ws_scan_in_progress &&
         ( ws_manual_scan_requested || intervalElapsed ))
    {
      if ( wifi_start_scan())
      {
        ws_last_scan_tick        = now;
        ws_scan_in_progress      = 1;
        ws_manual_scan_requested = 0;
      }
    }

    readyChanged    = ( ready != ws_last_is_ready ) ? 1 : 0;
    scanningChanged = ( ws_scan_in_progress != ws_last_is_scanning ) ? 1 : 0;

    ws_last_is_ready    = ready;
    ws_last_is_scanning = ws_scan_in_progress;

    isReady    = ready ? 1 : 0;
    isScanning = ws_scan_in_progress ? 1 : 0;
  }

  if ( readyChanged || scanningChanged )
    ApplicationDeviceClass_UpdateStatus( _this, isReady, isScanning );
}

/* Default onget method for the property 'IsReady' */
XBool ApplicationDeviceClass_OnGetIsReady( ApplicationDeviceClass _this )
{
  return _this->IsReady;
}

/* Default onset method for the property 'IsReady' */
void ApplicationDeviceClass_OnSetIsReady( ApplicationDeviceClass _this, XBool value )
{
  _this->IsReady = value;
}

/* Default onget method for the property 'IsScanning' */
XBool ApplicationDeviceClass_OnGetIsScanning( ApplicationDeviceClass _this )
{
  return _this->IsScanning;
}

/* Default onset method for the property 'IsScanning' */
void ApplicationDeviceClass_OnSetIsScanning( ApplicationDeviceClass _this, XBool 
  value )
{
  _this->IsScanning = value;
}

/* Default onget method for the property 'ResultCount' */
XInt32 ApplicationDeviceClass_OnGetResultCount( ApplicationDeviceClass _this )
{
  return _this->ResultCount;
}

/* Default onset method for the property 'ResultCount' */
void ApplicationDeviceClass_OnSetResultCount( ApplicationDeviceClass _this, XInt32 
  value )
{
  _this->ResultCount = value;
}

/* Default onget method for the property 'LastScanTimestamp' */
XInt32 ApplicationDeviceClass_OnGetLastScanTimestamp( ApplicationDeviceClass _this )
{
  return _this->LastScanTimestamp;
}

/* Default onset method for the property 'LastScanTimestamp' */
void ApplicationDeviceClass_OnSetLastScanTimestamp( ApplicationDeviceClass _this, 
  XInt32 value )
{
  _this->LastScanTimestamp = value;
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, XObject, Pump, ResultSsid, ResultSsid, 
                 ResultSsid, ResultSsid, ResultCount, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* Singleton instance of the device interface. */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::Device' */
void ApplicationDevice__ReInit( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Include a file containing the font resource : 'Application::FontTitle' */
#include "_ApplicationFontTitle.h"

/* Table with links to derived variants of the font resource : 'Application::FontTitle' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontTitle )

/* Include a file containing the font resource : 'Application::FontBody' */
#include "_ApplicationFontBody.h"

/* Table with links to derived variants of the font resource : 'Application::FontBody' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBody )

/* Include a file containing the font resource : 'Application::FontButton' */
#include "_ApplicationFontButton.h"

/* Table with links to derived variants of the font resource : 'Application::FontButton' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontButton )

/* Include a file containing the font resource : 'Application::FontList' */
#include "_ApplicationFontList.h"

/* Table with links to derived variants of the font resource : 'Application::FontList' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontList )

/* Embedded Wizard */
