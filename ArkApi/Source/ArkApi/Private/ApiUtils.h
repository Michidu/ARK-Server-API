#ifndef H_ApiUtils
#define H_ApiUtils

#include "ArkApiPrivatePCH.h"
#include "API/Base.h"
#include <vector>

namespace ApiUtils
{
	// Command structures

	struct ChatCommand
	{
		ChatCommand(const std::string& command, const std::function<void(AShooterPlayerController*, FString*, int)>& callback)
			: command(command),
			  callback(callback)
		{
		}

		std::string command;
		std::function<void(AShooterPlayerController*, FString*, int)> callback;
	};

	struct ConsoleCommand
	{
		ConsoleCommand(const std::string& command, const std::function<void(APlayerController*, FString*, bool)>& callback)
			: command(command),
			  callback(callback)
		{
		}

		std::string command;
		std::function<void(APlayerController*, FString*, bool)> callback;
	};

	// Add commands

	void AddChatCommand(const std::string& command, std::function<void(AShooterPlayerController*, FString*, int)> callback);
	void AddConsoleCommand(const std::string& command, std::function<void(APlayerController*, FString*, bool)> callback);
	void AddOnTickCallback(std::function<void(float)> callback);

	// Set and Get UWorld

	void SetWorld(UWorld* aUworld);
	UWorld* GetWorld();

	// Set and Get AShooterGameMode

	void SetGameMode(AShooterGameMode* aShooterGameMode);
	AShooterGameMode* GetGameMode();

	// Check callbacks

	bool CheckChatCommands(const std::string& commandName, AShooterPlayerController* _AShooterPlayerController, FString* Message, int Mode);
	bool CheckConsoleCommands(const std::string& commandName, APlayerController* _APlayerController, FString* Cmd, bool bWriteToLog);
	void CheckOnTickCallbacks(float DeltaSeconds);
}

#endif
