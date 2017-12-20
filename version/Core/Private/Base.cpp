#include "../Public/API/Base.h"
#include "Offsets.h"

DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset)
{
	return ArkApi::Offsets::Get().GetAddress(base, structure, offset);
}

LPVOID GetAddress(const std::string& structure, const std::string& offset)
{
	return ArkApi::Offsets::Get().GetAddress(structure, offset);
}

//BitField GetBitField(const void* base, const std::string& structure, const std::string& offset)
//{
	//return ArkApi::Offsets::Get().GetBitField(base, structure, offset);
//}

//BitField GetBitField(LPVOID base, const std::string& structure, const std::string& offset)
//{
	//return ArkApi::Hooks::Get().GetBitField(base, structure, offset);
//}