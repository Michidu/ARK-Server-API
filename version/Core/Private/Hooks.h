#pragma once

#include "IHooks.h"

namespace ArkApi
{
	class Hooks : public IHooks
	{
	public:
		static Hooks& Get();

		Hooks(const Hooks&) = delete;
		Hooks(Hooks&&) = delete;
		Hooks& operator=(const Hooks&) = delete;
		Hooks& operator=(Hooks&&) = delete;

		bool SetHook(const std::string& structure, const std::string& func_name, const LPVOID p_detour,
		             LPVOID* pp_original) override;
		void DisableHook(const std::string& structure, const std::string& func_name) override;
	private:
		Hooks();
	};
}
