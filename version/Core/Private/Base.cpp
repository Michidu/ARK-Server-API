#include <API/Base.h>

#include "Offsets.h"

DWORD64 GetAddress(const void* base, const std::string& name)
{
	return API::Offsets::Get().GetAddress(base, name);
}

LPVOID GetAddress(const std::string& name)
{
	return API::Offsets::Get().GetAddress(name);
}

LPVOID GetDataAddress(const std::string& name)
{
	return API::Offsets::Get().GetDataAddress(name);
}

BitField GetBitField(const void* base, const std::string& name)
{
	return API::Offsets::Get().GetBitField(base, name);
}

BitField GetBitField(LPVOID base, const std::string& name)
{
	return API::Offsets::Get().GetBitField(base, name);
}
