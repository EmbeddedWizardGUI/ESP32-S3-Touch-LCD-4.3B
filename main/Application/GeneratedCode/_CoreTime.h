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

#ifndef _CoreTime_H
#define _CoreTime_H

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

/* Forward declaration of the class Core::Time */
#ifndef _CoreTime_
  EW_DECLARE_CLASS( CoreTime )
#define _CoreTime_
#endif


/* The class Core::Time is used for date and time operations. Objects of this class 
   can store the time, convert it and format strings with the time, etc. */
EW_DEFINE_FIELDS( CoreTime, XObject )
  EW_PROPERTY( Second,          XInt32 )
  EW_PROPERTY( Minute,          XInt32 )
  EW_PROPERTY( Hour,            XInt32 )
  EW_PROPERTY( Day,             XInt32 )
  EW_PROPERTY( Month,           XInt32 )
  EW_PROPERTY( Year,            XInt32 )
EW_END_OF_FIELDS( CoreTime )

/* Virtual Method Table (VMT) for the class : 'Core::Time' */
EW_DEFINE_METHODS( CoreTime, XObject )
EW_END_OF_METHODS( CoreTime )

/* 'C' function for method : 'Core::Time.getCurrentTime()' */
XInt64 CoreTime_getCurrentTime( CoreTime _this );

/* 'C' function for method : 'Core::Time.OnSetTime()' */
void CoreTime_OnSetTime( CoreTime _this, XInt64 value );

/* 'C' function for method : 'Core::Time.OnGetCurrentTime()' */
CoreTime CoreTime_OnGetCurrentTime( CoreTime _this );

/* 'C' function for method : 'Core::Time.OnGetDaysInMonth()' */
XInt32 CoreTime_OnGetDaysInMonth( CoreTime _this );

/* 'C' function for method : 'Core::Time.OnSetSecond()' */
void CoreTime_OnSetSecond( CoreTime _this, XInt32 value );

/* 'C' function for method : 'Core::Time.OnSetMinute()' */
void CoreTime_OnSetMinute( CoreTime _this, XInt32 value );

/* 'C' function for method : 'Core::Time.OnSetHour()' */
void CoreTime_OnSetHour( CoreTime _this, XInt32 value );

/* 'C' function for method : 'Core::Time.OnSetDay()' */
void CoreTime_OnSetDay( CoreTime _this, XInt32 value );

/* 'C' function for method : 'Core::Time.OnSetMonth()' */
void CoreTime_OnSetMonth( CoreTime _this, XInt32 value );

/* The method Initialize2() initializes this Core::Time object with the given time 
   and date and returns this object. */
CoreTime CoreTime_Initialize2( CoreTime _this, XInt32 aYear, XInt32 aMonth, XInt32 
  aDay, XInt32 aHour, XInt32 aMinute, XInt32 aSecond );

/* The method Initialize() initializes this Core::Time object with the given time 
   as number of seconds since 1.1.1970 and returns this object. */
CoreTime CoreTime_Initialize( CoreTime _this, XInt64 aTime );

#ifdef __cplusplus
  }
#endif

#endif /* _CoreTime_H */

/* Embedded Wizard */
