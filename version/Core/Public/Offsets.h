#ifndef OFFSETS_H
#define OFFSETS_H

#include <windows.h>
#include <unordered_map>

#include "API/Base.h"

namespace ArkApi
{
	class Offsets
	{
	public:
		ARK_API static Offsets& Get();

		Offsets(const Offsets&) = delete;
		Offsets(Offsets&&) = delete;
		Offsets& operator=(const Offsets&) = delete;
		Offsets& operator=(Offsets&&) = delete;

		void Init(std::unordered_map<std::string, intptr_t>&& offsets_dump);

		ARK_API DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset);
		ARK_API DWORD64 GetAddress(const LPVOID base, const std::string& structure, const std::string& offset);
		ARK_API LPVOID GetAddress(const std::string& structure, const std::string& offset);
	private:
		Offsets();

		DWORD64 module_base_;
		std::unordered_map<std::string, intptr_t> offsets_dump_;
	};
}

#endif // OFFSETS_H
