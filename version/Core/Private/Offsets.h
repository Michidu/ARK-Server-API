#pragma once

#include <API/Base.h>

#include <unordered_map>

namespace API
{
	class Offsets
	{
	public:
		static Offsets& Get();

		Offsets(const Offsets&) = delete;
		Offsets(Offsets&&) = delete;
		Offsets& operator=(const Offsets&) = delete;
		Offsets& operator=(Offsets&&) = delete;

		void Init(std::unordered_map<std::string, intptr_t>&& offsets_dump,
		          std::unordered_map<std::string, BitField>&& bitfields_dump);

		DWORD64 GetAddress(const void* base, const std::string& name);
		LPVOID GetAddress(const std::string& name);

		LPVOID GetDataAddress(const std::string& name);

		BitField GetBitField(const void* base, const std::string& name);
		BitField GetBitField(LPVOID base, const std::string& name);

	private:
		Offsets();
		~Offsets() = default;

		BitField GetBitFieldInternal(const void* base, const std::string& name);

		DWORD64 module_base_;
		DWORD64 data_base_;

		std::unordered_map<std::string, intptr_t> offsets_dump_;
		std::unordered_map<std::string, BitField> bitfields_dump_;
	};
} // namespace API
