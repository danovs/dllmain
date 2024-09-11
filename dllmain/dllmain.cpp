// dllmain.cpp: определяет точку входа для библиотеки DLL.

#include "pch.h"
__declspec(dllexport) void __cdecl TestHello(void);

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        MessageBox(NULL, L"The DLL is loaded", L"DLL Skeleton", MB_OK);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        MessageBox(NULL, L"The DLL is unloaded", L"DLL Skeleton", MB_OK);
        break;
    }
    return TRUE;
}
