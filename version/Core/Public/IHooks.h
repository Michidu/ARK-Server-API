#pragma once

#include "API/Base.h"

namespace ArkApi
{
	class ARK_API IHooks
	{
	public:
		virtual ~IHooks() = default;

		virtual bool SetHook(const std::string& structure, const std::string& func_name, const LPVOID p_detour,
		                     LPVOID* pp_original) = 0;
		virtual void DisableHook(const std::string& structure, const std::string& func_name) = 0;
	};

	extern "C" ARK_API IHooks& APIENTRY GetHooks();
}
