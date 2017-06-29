#include "stdafx.h"
#include "Hooks.h"
#include "MinHook.h"
#include "ApiUtils.h"
#include "JsonUtils.h"
#include "Commands.h"

namespace Hooks
{
	// Hooks declaration
	DECLARE_HOOK(UWorld_InitWorld, void, UWorld*, DWORD64);
	DECLARE_HOOK(UWorld_Tick, void, DWORD64, DWORD64, float);
	DECLARE_HOOK(AShooterGameMode_InitGame, void, AShooterGameMode*, FString*, FString*, FString*);
	DECLARE_HOOK(AShooterPlayerController_ServerSendChatMessage_Impl, void, AShooterPlayerController*, FString*, EChatSendMode::Type);
	DECLARE_HOOK(APlayerController_ConsoleCommand, FString*, APlayerController*, FString*, FString*, bool);
	DECLARE_HOOK(RCONClientConnection_ProcessRCONPacket, void, RCONClientConnection*, RCONPacket*, UWorld*);
	DECLARE_HOOK(AGameState_DefaultTimer, void, AGameState*);

	// Module base address
	DWORD64 dwModuleBase;

	std::vector<Hook> allHooks;

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
		SetHook("RCONClientConnection", "ProcessRCONPacket", &Hook_RCONClientConnection_ProcessRCONPacket, reinterpret_cast<LPVOID*>(&RCONClientConnection_ProcessRCONPacket_original));
		SetHook("AGameState", "DefaultTimer", &Hook_AGameState_DefaultTimer, reinterpret_cast<LPVOID*>(&AGameState_DefaultTimer_original));
	}

	void SetHook(const std::string& structure, const std::string& funcName, LPVOID pDetour, LPVOID* ppOriginal)
	{
		DWORD64 offset = json["structures"][structure].value(funcName, 0);
		if (!offset)
		{
			std::cerr << funcName << " does not exist in " << structure << std::endl;
			return;
		}

		LPVOID pTarget = reinterpret_cast<LPVOID>(dwModuleBase + offset);

		std::vector<Hook>::iterator iter = std::find_if(allHooks.begin(), allHooks.end(), [pTarget](Hook data) -> bool { return data.pTarget == pTarget; });
		if (iter == allHooks.end())
		{
			allHooks.push_back({pTarget , pDetour});
		}
		else
		{
			pTarget = iter->pDetour;

			iter->pDetour = pDetour;
		}

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

	// Will disable all hooks placed on this function
	void DisableHook(const std::string& structure, const std::string& funcName)
	{
		DWORD64 offset = json["structures"][structure].value(funcName, 0);
		if (!offset)
		{
			std::cerr << funcName << " does not exist in " << structure << std::endl;
			return;
		}

		LPVOID pTarget = reinterpret_cast<LPVOID>(dwModuleBase + offset);

		if (MH_RemoveHook(pTarget) != MH_OK)
		{
			std::cerr << "Failed to disable hook for " << structure << "::" << funcName << std::endl;
		}
	}

	// Address helpers

	DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset)
	{
		return reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(json["structures"][structure][offset]);
	}

	DWORD64 GetAddress(LPVOID base, const std::string& structure, const std::string& offset)
	{
		return reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(json["structures"][structure][offset]);
	}

	LPVOID GetAddress(const std::string& structure, const std::string& offset)
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
		Commands::CheckOnTickCallbacks(DeltaSeconds);

		UWorld_Tick_original(world, TickType, DeltaSeconds);
	}

	void _cdecl Hook_AShooterGameMode_InitGame(AShooterGameMode* _AShooterGameMode, FString* MapName, FString* Options, FString* ErrorMessage)
	{
		ApiUtils::SetGameMode(_AShooterGameMode);

		AShooterGameMode_InitGame_original(_AShooterGameMode, MapName, Options, ErrorMessage);
	}

	void _cdecl Hook_AShooterPlayerController_ServerSendChatMessage_Impl(AShooterPlayerController* _AShooterPlayerController, FString* Message, EChatSendMode::Type Mode)
	{
		if (Commands::CheckChatCommands(_AShooterPlayerController, Message, Mode))
			return;

		AShooterPlayerController_ServerSendChatMessage_Impl_original(_AShooterPlayerController, Message, Mode);
	}

	FString* _cdecl Hook_APlayerController_ConsoleCommand(APlayerController* _APlayerController, FString* result, FString* Cmd, bool bWriteToLog)
	{
		Commands::CheckConsoleCommands(_APlayerController, Cmd, bWriteToLog);

		return APlayerController_ConsoleCommand_original(_APlayerController, result, Cmd, bWriteToLog);
	}

	void _cdecl Hook_RCONClientConnection_ProcessRCONPacket(RCONClientConnection* _this, RCONPacket* Packet, UWorld* InWorld)
	{
		Commands::CheckRconCommands(_this, Packet, InWorld);

		RCONClientConnection_ProcessRCONPacket_original(_this, Packet, InWorld);
	}

	void _cdecl Hook_AGameState_DefaultTimer(AGameState* _this)
	{
		Commands::CheckOnTimerCallbacks();

		AGameState_DefaultTimer_original(_this);
	}
}
