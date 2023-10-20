#pragma once
#ifdef BUILD_DLL
#define DllExport   __declspec( dllexport )
#else
#define DllExport   __declspec( dllimport )
#endif


