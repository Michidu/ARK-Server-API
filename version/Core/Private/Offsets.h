#pragma once

#include <unordered_map>
#include "../Public/API/Base.h"

namespace ArkApi
{
	class Offsets
	{
	public:
		static Offsets& Get();

		Offsets(const Offsets&) = delete;
		Offsets(Offsets&&) = delete;
		Offsets& operator=(const Offsets&) = delete;
		Offsets& operator=(Offsets&&) = delete;

		void Init(std::unordered_map<std::string, intptr_t>&& offsets_dump, std::unordered_map<std::string, BitField>&& bitfields_dump, const bool PluginReloadEnabled, const int PluginReloadSeconds);

		DWORD64 GetAddress(const void* base, const std::string& name);
		LPVOID GetAddress(const std::string& name);

		BitField GetBitField(const void* base, const std::string& name);
		BitField GetBitField(LPVOID base, const std::string& name);

		//Plugin Reload
		const bool IsPluginReloadEnabled() { return PluginReloadEnabled; }
		const int PluginReloadDelaySeconds() { return PluginReloadSeconds; }
	private:
		Offsets();
		~Offsets() = default;

		BitField GetBitFieldInternal(const void* base, const std::string& name);

		DWORD64 module_base_;
		std::unordered_map<std::string, intptr_t> offsets_dump_;
		std::unordered_map<std::string, BitField> bitfields_dump_;

		//Plugin Reload
		int PluginReloadSeconds;
		bool PluginReloadEnabled;
	};
}
