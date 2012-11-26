#define STRICT
#define _WIN32_WINNT 0x501
#include <windows.h>
#include <WindowsX.h>
#include <tchar.h>
#include <stdio.h>
#include "HexView.h"


int WINAPI DllMain (HINSTANCE hInstance, DWORD fdwReason, PVOID pvReserved)
{
	
    switch( fdwReason ) 
    { 
        case DLL_PROCESS_ATTACH:
		InitHexView();
            break;

        case DLL_THREAD_ATTACH:
         // Do thread-specific initialization.
            break;

        case DLL_THREAD_DETACH:
         // Do thread-specific cleanup.
            break;

        case DLL_PROCESS_DETACH:
         // Perform any necessary cleanup.
            break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
