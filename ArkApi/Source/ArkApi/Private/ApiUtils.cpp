#include "ArkApiPrivatePCH.h"
#include "ApiUtils.h"
#include "API/Base.h"

namespace ApiUtils
{
	// Game objects

	UWorld* uWorld;
	AShooterGameMode* aShooterGameMode;

	// Commands containers

	std::vector<ChatCommand> chatCommands;
	std::vector<ConsoleCommand> consoleCommands;
	std::vector<std::function<void(float)>> onTickCallbacks;

	// Add commands

	void AddChatCommand(const std::string& command, std::function<void(AShooterPlayerController*, FString*, int)> callback)
	{
		ChatCommand chatCommand = {command, callback};
		chatCommands.push_back(chatCommand);
	}

	void AddConsoleCommand(const std::string& command, std::function<void(APlayerController*, FString*, bool)> callback)
	{
		ConsoleCommand consoleCommand = {command, callback};
		consoleCommands.push_back(consoleCommand);
	}

	void AddOnTickCallback(std::function<void(float)> callback)
	{
		onTickCallbacks.push_back(callback);
	}

	// UWorld

	void SetWorld(UWorld* aUworld)
	{
		uWorld = aUworld;
	}

	UWorld* GetWorld()
	{
		return uWorld;
	}

	// AShooterGameMode

	void SetGameMode(AShooterGameMode* _aShooterGameMode)
	{
		aShooterGameMode = _aShooterGameMode;
	}

	AShooterGameMode* GetGameMode()
	{
		return aShooterGameMode;
	}

	// Callbacks

	bool CheckChatCommands(const std::string& commandName, AShooterPlayerController* _AShooterPlayerController, FString* Message, int Mode)
	{
		bool result = false;

		for (auto command : chatCommands)
		{
			if (command.command == commandName)
			{
				command.callback(_AShooterPlayerController, Message, Mode);

				result = true;
			}
		}

		return result;
	}

	bool CheckConsoleCommands(const std::string& commandName, APlayerController* _APlayerController, FString* Cmd, bool bWriteToLog)
	{
		bool result = false;

		for (auto command : consoleCommands)
		{
			if (command.command == commandName)
			{
				command.callback(_APlayerController, Cmd, bWriteToLog);

				result = true;
			}
		}

		return result;
	}

	void CheckOnTickCallbacks(float DeltaSeconds)
	{
		for (auto callback : onTickCallbacks)
		{
			callback(DeltaSeconds);
		}
	}
}
