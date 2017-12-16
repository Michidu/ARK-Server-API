#pragma once

#include <windows.h>
#include <unordered_map>

#include "IOffsets.h"

namespace ArkApi
{
	class Offsets : public IOffsets
	{
	public:
		static Offsets& Get();

		Offsets(const Offsets&) = delete;
		Offsets(Offsets&&) = delete;
		Offsets& operator=(const Offsets&) = delete;
		Offsets& operator=(Offsets&&) = delete;

		void Init(std::unordered_map<std::string, intptr_t>&& offsets_dump);

		DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset) override;
		DWORD64 GetAddress(const LPVOID base, const std::string& structure, const std::string& offset) override;
		LPVOID GetAddress(const std::string& structure, const std::string& offset) override;
	private:
		Offsets();

		DWORD64 module_base_;
		std::unordered_map<std::string, intptr_t> offsets_dump_;
	};
}
