#pragma once

#include "API/Base.h"

namespace ArkApi
{
	class ARK_API IOffsets
	{
	public:
		virtual ~IOffsets() = default;

		virtual DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset) = 0;
		virtual DWORD64 GetAddress(const LPVOID base, const std::string& structure, const std::string& offset) = 0;
		virtual LPVOID GetAddress(const std::string& structure, const std::string& offset) = 0;
	};

	extern "C" ARK_API IOffsets& APIENTRY GetOffsets();
}
