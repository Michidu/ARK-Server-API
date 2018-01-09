#include "Offsets.h"

namespace ArkApi
{
	Offsets::Offsets()
	{
		module_base_ = reinterpret_cast<DWORD64>(GetModuleHandle(nullptr));

		const auto dos_header = reinterpret_cast<PIMAGE_DOS_HEADER>(module_base_);
		const auto nt_headers = reinterpret_cast<PIMAGE_NT_HEADERS>(module_base_ + dos_header->e_lfanew);

		module_base_ += nt_headers->OptionalHeader.BaseOfCode;
	}

	Offsets& Offsets::Get()
	{
		static Offsets instance;
		return instance;
	}

	void Offsets::Init(std::unordered_map<std::string, intptr_t>&& offsets_dump, std::unordered_map<std::string, BitField>&& bitfields_dump)
	{
		offsets_dump_.swap(offsets_dump);
		bitfields_dump_.swap(bitfields_dump);
	}

	DWORD64 Offsets::GetAddress(const void* base, const std::string& name)
	{
		return reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(offsets_dump_[name]);
	}
	
	LPVOID Offsets::GetAddress(const std::string& name)
	{
		return reinterpret_cast<LPVOID>(module_base_ + static_cast<DWORD64>(offsets_dump_[name]));
	}

	BitField Offsets::GetBitField(const void* base, const std::string& name)
	{
		return GetBitFieldInternal(base, name);
	}

	BitField Offsets::GetBitField(LPVOID base, const std::string& name)
	{
		return GetBitFieldInternal(base, name);
	}

	BitField Offsets::GetBitFieldInternal(const void* base, const std::string& name)
	{
		auto bf = bitfields_dump_[name];
		auto cf = BitField();
		cf.bit_position = bf.bit_position;
		cf.length = bf.length;
		cf.num_bits = bf.num_bits;
		cf.offset = reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(bf.offset);

		return cf;
	}
}
