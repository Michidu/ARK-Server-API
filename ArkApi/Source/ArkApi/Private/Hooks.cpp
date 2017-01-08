#include "ArkApiPrivatePCH.h"
#include "Hooks.h"
#include "MinHook.h"
#include "ApiUtils.h"
#include "JsonUtils.h"

namespace Hooks
{
	// Module base address
	DWORD64 dwModuleBase;

	// Json
	nlohmann::json json;

	void Init()
	{
		json = JsonUtils::GetJson();

		InitBaseAddress();
		InitHooks();
	}

	void InitBaseAddress()
	{
		dwModuleBase = reinterpret_cast<DWORD64>(GetModuleHandle(nullptr));

		PIMAGE_DOS_HEADER pDOSHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(dwModuleBase);
		PIMAGE_NT_HEADERS pNTHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(dwModuleBase + pDOSHeader->e_lfanew);

		dwModuleBase += pNTHeaders->OptionalHeader.BaseOfCode;
	}

	void InitHooks()
	{
		SetHook("UWorld", "InitWorld", &Hook_UWorld_InitWorld, reinterpret_cast<LPVOID*>(&UWorld_InitWorld_original));
		SetHook("UWorld", "Tick", &Hook_UWorld_Tick, reinterpret_cast<LPVOID*>(&UWorld_Tick_original));
		SetHook("AShooterGameMode", "InitGame", &Hook_AShooterGameMode_InitGame, reinterpret_cast<LPVOID*>(&AShooterGameMode_InitGame_original));
		SetHook("AShooterPlayerController", "ServerSendChatMessage_Implementation", &Hook_AShooterPlayerController_ServerSendChatMessage_Impl, reinterpret_cast<LPVOID*>(&AShooterPlayerController_ServerSendChatMessage_Impl_original));
		SetHook("APlayerController", "ConsoleCommand", &Hook_APlayerController_ConsoleCommand, reinterpret_cast<LPVOID*>(&APlayerController_ConsoleCommand_original));
	}

	void SetHook(const std::string& structure, const std::string& funcName, LPVOID pDetour, LPVOID* ppOriginal)
	{
		DWORD64 offset = static_cast<DWORD64>(json["structures"][structure][funcName]);
		if (!offset)
		{
			std::cerr << funcName << " does not exist in " << structure << std::endl;
			return;
		}

		LPVOID pTarget = reinterpret_cast<LPVOID>(dwModuleBase + offset);

		if (MH_CreateHook(pTarget, pDetour, ppOriginal) != MH_OK)
		{
			std::cerr << "Failed to create hook for " << structure << "::" << funcName << std::endl;
			return;
		}

		if (MH_EnableHook(pTarget) != MH_OK)
		{
			std::cerr << "Failed to enable hook for " << structure << "::" << funcName << std::endl;
		}
	}

	// Address helpers

	DWORD64 GetAddress(const void* base, const char* structure, const char* offset)
	{
		return reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(json["structures"][structure][offset]);
	}

	DWORD64 GetAddress(LPVOID base, const char* structure, const char* offset)
	{
		return reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(json["structures"][structure][offset]);
	}

	LPVOID GetAddress(const char* structure, const char* offset)
	{
		return reinterpret_cast<LPVOID>(dwModuleBase + static_cast<DWORD64>(json["structures"][structure][offset]));
	}

	// Hooks

	void _cdecl Hook_UWorld_InitWorld(UWorld* world, DWORD64 IVS)
	{
		std::cout << "[API] UWorld::InitWorld was called" << std::endl;

		ApiUtils::SetWorld(world);

		UWorld_InitWorld_original(world, IVS);
	}

	void _cdecl Hook_UWorld_Tick(DWORD64 world, DWORD64 TickType, float DeltaSeconds)
	{
		ApiUtils::CheckOnTickCallbacks(DeltaSeconds);

		UWorld_Tick_original(world, TickType, DeltaSeconds);
	}

	void _cdecl Hook_AShooterGameMode_InitGame(AShooterGameMode* _AShooterGameMode, FString* MapName, FString* Options, FString* ErrorMessage)
	{
		ApiUtils::SetGameMode(_AShooterGameMode);

		AShooterGameMode_InitGame_original(_AShooterGameMode, MapName, Options, ErrorMessage);
	}

	void _cdecl Hook_AShooterPlayerController_ServerSendChatMessage_Impl(AShooterPlayerController* _AShooterPlayerController, FString* Message, int Mode)
	{
		if (ApiUtils::CheckChatCommands(TCHAR_TO_ANSI(**Message), _AShooterPlayerController, Message, Mode))
			return;

		AShooterPlayerController_ServerSendChatMessage_Impl_original(_AShooterPlayerController, Message, Mode);
	}

	FString* _cdecl Hook_APlayerController_ConsoleCommand(APlayerController* _APlayerController, FString* result, FString* Cmd, bool bWriteToLog)
	{
		ApiUtils::CheckConsoleCommands(TCHAR_TO_ANSI(**Cmd), _APlayerController, Cmd, bWriteToLog);

		return APlayerController_ConsoleCommand_original(_APlayerController, result, Cmd, bWriteToLog);
	}
}
