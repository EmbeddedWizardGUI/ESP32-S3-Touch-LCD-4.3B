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

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

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

#include "_CoreTimer.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif


/* -----------------------------------------------------------------------------
   DeviceClass - the contract between the GUI and DeviceDriver.c.
   ----------------------------------------------------------------------------- */
EW_DEFINE_FIELDS( ApplicationDeviceClass, XObject )
  EW_OBJECT  ( Pump,            CoreTimer )
  EW_ARRAY   ( ResultSsid,      XString, [20])
  EW_ARRAY   ( ResultBssid,     XString, [20])
  EW_PROPERTY( ResultCount,     XInt32 )
  EW_PROPERTY( LastScanTimestamp, XInt32 )
  EW_ARRAY   ( ResultRssi,      XInt32, [20])
  EW_ARRAY   ( ResultChannel,   XInt32, [20])
  EW_ARRAY   ( ResultAuthmode,  XInt32, [20])
  EW_PROPERTY( IsReady,         XBool )
  EW_PROPERTY( IsScanning,      XBool )
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, XObject )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this );

/* ----- lifecycle: bring up the Wi-Fi BSP and the polling timer ----------- */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg );

/* ----- C -> GUI: push status flags ---------------------------------------- */
void ApplicationDeviceClass_UpdateStatus( ApplicationDeviceClass _this, XBool aIsReady, 
  XBool aIsScanning );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateStatus()' */
void ApplicationDeviceClass__UpdateStatus( void* _this, XBool aIsReady, XBool aIsScanning );

/* The following define announces the presence of the method Application::DeviceClass.UpdateStatus(). */
#define _ApplicationDeviceClass__UpdateStatus_

/* ----- C -> GUI: finalize a scan (count + timestamp, notify observers) ---- */
void ApplicationDeviceClass_FinalizeScanResults( ApplicationDeviceClass _this, XInt32 
  aCount, XInt32 aTimestamp );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.FinalizeScanResults()' */
void ApplicationDeviceClass__FinalizeScanResults( void* _this, XInt32 aCount, XInt32 
  aTimestamp );

/* The following define announces the presence of the method Application::DeviceClass.FinalizeScanResults(). */
#define _ApplicationDeviceClass__FinalizeScanResults_

/* ----- C -> GUI: push one AP record into the arrays ----------------------- */
void ApplicationDeviceClass_UpdateScanResult( ApplicationDeviceClass _this, XInt32 
  aIndex, XString aSsid, XString aBssid, XInt32 aRssi, XInt32 aChannel, XInt32 aAuthmode );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateScanResult()' */
void ApplicationDeviceClass__UpdateScanResult( void* _this, XInt32 aIndex, XString 
  aSsid, XString aBssid, XInt32 aRssi, XInt32 aChannel, XInt32 aAuthmode );

/* The following define announces the presence of the method Application::DeviceClass.UpdateScanResult(). */
#define _ApplicationDeviceClass__UpdateScanResult_

/* ----- GUI -> C: request a manual scan ------------------------------------ */
void ApplicationDeviceClass_RequestScan( ApplicationDeviceClass _this, XObject sender );

/* 'C' function for method : 'Application::DeviceClass.OnPump()' */
void ApplicationDeviceClass_OnPump( ApplicationDeviceClass _this, XObject sender );

/* Default onget method for the property 'IsReady' */
XBool ApplicationDeviceClass_OnGetIsReady( ApplicationDeviceClass _this );

/* Default onset method for the property 'IsReady' */
void ApplicationDeviceClass_OnSetIsReady( ApplicationDeviceClass _this, XBool value );

/* Default onget method for the property 'IsScanning' */
XBool ApplicationDeviceClass_OnGetIsScanning( ApplicationDeviceClass _this );

/* Default onset method for the property 'IsScanning' */
void ApplicationDeviceClass_OnSetIsScanning( ApplicationDeviceClass _this, XBool 
  value );

/* Default onget method for the property 'ResultCount' */
XInt32 ApplicationDeviceClass_OnGetResultCount( ApplicationDeviceClass _this );

/* Default onset method for the property 'ResultCount' */
void ApplicationDeviceClass_OnSetResultCount( ApplicationDeviceClass _this, XInt32 
  value );

/* Default onget method for the property 'LastScanTimestamp' */
XInt32 ApplicationDeviceClass_OnGetLastScanTimestamp( ApplicationDeviceClass _this );

/* Default onset method for the property 'LastScanTimestamp' */
void ApplicationDeviceClass_OnSetLastScanTimestamp( ApplicationDeviceClass _this, 
  XInt32 value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
