#pragma once

#include "Base.h"
#include <functional>

#define DECLARE_HOOK(name, returnType, ...) typedef returnType(__cdecl * name ## _Func)(__VA_ARGS__); \
name ## _Func name ## _original; \
returnType __cdecl Hook_ ## name(__VA_ARGS__)

namespace Ark
{
	ARK_API UWorld* GetWorld();
	ARK_API AShooterGameMode* GetGameMode();

	ARK_API void SetHook(const std::string& structure, const std::string& funcName, LPVOID pDetour, LPVOID* ppOriginal);
	ARK_API void DisableHook(const std::string& structure, const std::string& funcName);

	ARK_API void AddChatCommand(const FString& command, const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>& callback);
	ARK_API void RemoveChatCommand(const FString& command);
	ARK_API void AddConsoleCommand(const FString& command, const std::function<void(APlayerController*, FString*, bool)>& callback);
	ARK_API void AddRconCommand(const FString& command, const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback);

	ARK_API void AddOnTickCallback(const std::function<void(float)>& callback);
	ARK_API void AddOnTimerCallback(const std::function<void()>& callback);
}
