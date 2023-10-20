#pragma once
#if BUILD_DLL
#define DllExport   __declspec( dllexport )
#else
#define DllExport   __declspec( dllimport )
#endif


