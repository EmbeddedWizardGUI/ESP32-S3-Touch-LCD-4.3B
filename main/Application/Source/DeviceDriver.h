/*******************************************************************************
*
*   D E V I C E   D R I V E R
*
*   Generic shell required by ewmain.c. All app-specific logic now lives
*   inside each Embedded Wizard project's Application.ewu (see the inline
*   block + DeviceClass.Pump timer in the WifiScanner / HomeBackupControl
*   examples). This file exists only because ewmain.c calls these three
*   hooks unconditionally, and we do not want to fork the TARA template.
*
*******************************************************************************/

#ifndef DEVICEDRIVER_H
#define DEVICEDRIVER_H


#ifdef __cplusplus
  extern "C"
  {
#endif


/* Called from EwInit before the GUI is created. Empty by design. */
void DeviceDriver_Initialize  ( void );

/* Called from EwDone after the GUI has shut down. Empty by design. */
void DeviceDriver_Deinitialize( void );

/* Called from EwProcess on every main-loop iteration. Returns 0 (no
   updates) - the device class's own Core::Timer handles polling now. */
int  DeviceDriver_ProcessData ( void );


#ifdef __cplusplus
  }
#endif

#endif /* DEVICEDRIVER_H */
