#include "ArkApiPrivatePCH.h"
#include "Base.h"
#include "../Hooks.h"

DWORD64 GetAddress(const void* base, const char* structure, const char* offset)
{
	return Hooks::GetAddress(base, structure, offset);
}

DWORD64 GetAddress(LPVOID base, const char* structure, const char* offset)
{
	return Hooks::GetAddress(base, structure, offset);
}

LPVOID GetAddress(const char* structure, const char* offset)
{
	return Hooks::GetAddress(structure, offset);
}