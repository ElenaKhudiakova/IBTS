#pragma once

//__declspec(dllexport) void OutGroup(void);

extern "C"
{
	__declspec(dllexport) int __stdcall Group();
	__declspec(dllexport) void __stdcall FIO();
}