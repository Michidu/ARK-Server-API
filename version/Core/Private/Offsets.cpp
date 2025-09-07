#include "Offsets.h"
#include "Logger/Logger.h"

namespace API
{
	Offsets::Offsets()
	{
		module_base_ = data_base_ = reinterpret_cast<DWORD64>(GetModuleHandle(nullptr));

		const auto dos_header = reinterpret_cast<PIMAGE_DOS_HEADER>(module_base_);
		const auto nt_headers = reinterpret_cast<PIMAGE_NT_HEADERS>(module_base_ + dos_header->e_lfanew);

		module_base_ += nt_headers->OptionalHeader.BaseOfCode;

		// get base of .data section
		const auto section_count = nt_headers->FileHeader.NumberOfSections;
		const auto first_section = IMAGE_FIRST_SECTION(nt_headers);
		const auto end_section = first_section + section_count;

		const auto data_section_header = std::find_if(first_section, end_section, [](_IMAGE_SECTION_HEADER hdr)
		{
			auto name = std::string(reinterpret_cast<char*>(hdr.Name), 8);
			name.erase(std::remove(name.begin(), name.end(), '\0'), name.end());

			return name == ".data";
		});

		if (data_section_header == end_section)
		{
			Log::GetLog()->error("Failed to get the base of the .data section.");
			throw;
		}

		data_base_ += data_section_header->VirtualAddress;
	}

	Offsets& Offsets::Get()
	{
		static Offsets instance;
		return instance;
	}

	void Offsets::Init(std::unordered_map<std::string, intptr_t>&& offsets_dump,
	                   std::unordered_map<std::string, BitField>&& bitfields_dump)
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

	LPVOID Offsets::GetDataAddress(const std::string& name)
	{
		return reinterpret_cast<LPVOID>(data_base_ + static_cast<DWORD64>(offsets_dump_[name]));
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
		const auto bf = bitfields_dump_[name];
		auto cf = BitField();
		cf.bit_position = bf.bit_position;
		cf.length = bf.length;
		cf.num_bits = bf.num_bits;
		cf.offset = reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(bf.offset);

		return cf;
	}
} // namespace API
