/*******************************************************************************
*
*   D E V I C E   D R I V E R
*
*   Generic shell - see header. The three functions below exist only to
*   satisfy ewmain.c; every app-specific binding now lives inside the
*   corresponding Application.ewu's inline block + DeviceClass methods,
*   driven by a Core::Timer running on the GUI task.
*
*******************************************************************************/

#include "DeviceDriver.h"


void DeviceDriver_Initialize( void )
{
}


void DeviceDriver_Deinitialize( void )
{
}


int DeviceDriver_ProcessData( void )
{
  return 0;
}
