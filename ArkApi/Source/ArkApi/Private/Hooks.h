#ifndef H_Hooks
#define H_Hooks

#include "ArkApiPrivatePCH.h"
#include <string>
#include "json.hpp"
#include "API/Ark.h"

namespace Hooks
{
	// Init
	void Init();
	void InitBaseAddress();
	void InitHooks();

	// Hook
	void SetHook(const std::string& structure, const std::string& funcName, LPVOID pDetour, LPVOID* ppOriginal);

	// Address helpers
	DWORD64 GetAddress(const void* base, const char* structure, const char* offset);
	DWORD64 GetAddress(LPVOID base, const char* structure, const char* offset);
	LPVOID GetAddress(const char* structure, const char* offset);

	// Hooks declaration
	DECLARE_HOOK(UWorld_InitWorld, void, UWorld*, DWORD64);
	DECLARE_HOOK(UWorld_Tick, void, DWORD64, DWORD64, float);
	DECLARE_HOOK(AShooterGameMode_InitGame, void, AShooterGameMode*, FString*, FString*, FString*);
	DECLARE_HOOK(AShooterPlayerController_ServerSendChatMessage_Impl, void, AShooterPlayerController*, FString*, int);
	DECLARE_HOOK(APlayerController_ConsoleCommand, FString*, APlayerController*, FString*, FString*, bool);
}

#endif