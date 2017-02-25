#include "stdafx.h"
#include "Base.h"
#include "../Hooks.h"

DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset)
{
	return Hooks::GetAddress(base, structure, offset);
}

DWORD64 GetAddress(LPVOID base, const std::string& structure, const std::string& offset)
{
	return Hooks::GetAddress(base, structure, offset);
}

LPVOID GetAddress(const std::string& structure, const std::string& offset)
{
	return Hooks::GetAddress(structure, offset);
}
