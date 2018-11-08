#pragma once

#include <API/Base.h>

namespace ArkApi
{
	class ARK_API IHooks
	{
	public:
		virtual ~IHooks() = default;

		/**
		* \brief Hooks a function. Hooks are called in the reverse order.
		* \param func_name Function full name
		* \param detour A pointer to the detour function, which will override the target function
		* \param original A pointer to the trampoline function, which will be used to call the original target function
		* \return true if success, false otherwise
		*/
		template <typename T>
		bool SetHook(const std::string& func_name, LPVOID detour, T** original)
		{
			return SetHookInternal(func_name, detour, reinterpret_cast<LPVOID*>(original));
		}

		/**
		 * \brief Removes a hook from a function
		 * \param func_name Function full name
		 * \param detour A pointer to the detour function
		 * \return true if success, false otherwise
		 */
		virtual bool DisableHook(const std::string& func_name, LPVOID detour) = 0;

	private:
		virtual bool SetHookInternal(const std::string& func_name, LPVOID detour,
		                             LPVOID* original) = 0;
	};

	ARK_API IHooks& APIENTRY GetHooks();
} // namespace ArkApi
