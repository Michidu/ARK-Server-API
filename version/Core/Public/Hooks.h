#ifndef HOOKS_H
#define HOOKS_H

#include "API/Base.h"

namespace ArkApi
{
	class Hooks
	{
	public:
		ARK_API static Hooks& Get();

		Hooks(const Hooks&) = delete;
		Hooks(Hooks&&) = delete;
		Hooks& operator=(const Hooks&) = delete;
		Hooks& operator=(Hooks&&) = delete;

		ARK_API static void SetHook(const std::string& structure, const std::string& func_name, const LPVOID p_detour,
		                    LPVOID* pp_original);
		ARK_API static void DisableHook(const std::string& structure, const std::string& func_name);
	private:
		Hooks();
	};
}

#endif // HOOKS_H
