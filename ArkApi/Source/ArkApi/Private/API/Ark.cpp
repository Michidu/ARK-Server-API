#include "ArkApiPrivatePCH.h"
#include "Ark.h"
#include <vector>
#include <functional>
#include "ApiUtils.h"
#include "Hooks.h"

namespace Ark
{
	UWorld* GetWorld()
	{
		return ApiUtils::GetWorld();
	}

	AShooterGameMode* GetGameMode()
	{
		return ApiUtils::GetGameMode();
	}

	void SetHook(const std::string& structure, const std::string& funcName, LPVOID pDetour, LPVOID* ppOriginal)
	{
		Hooks::SetHook(structure, funcName, pDetour, ppOriginal);
	}

	void AddChatCommand(const std::string& command, std::function<void(AShooterPlayerController*, FString*, int)> callback)
	{
		ApiUtils::AddChatCommand(command, callback);
	}

	void AddConsoleCommand(const std::string& command, std::function<void(APlayerController*, FString*, bool)> callback)
	{
		ApiUtils::AddConsoleCommand(command, callback);
	}

	void AddOnTickCallback(std::function<void(float)> callback)
	{
		ApiUtils::AddOnTickCallback(callback);
	}
}
