#include "Commands.h"

#include <algorithm>

namespace ArkApi
{
	Commands& Commands::Get()
	{
		static Commands instance;
		return instance;
	}

	void Commands::AddChatCommand(const FString& command,
	                              const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>&
	                              callback)
	{
		ChatCommand* chat_command = new ChatCommand{command, callback};
		chat_commands_.push_back(chat_command);
	}

	void Commands::RemoveChatCommand(const FString& command)
	{
		auto& v = chat_commands_;

		auto iter = std::find_if(v.begin(), v.end(), [command](const ChatCommand* data) -> bool
		{
			return data->command == command;
		});

		if (iter != v.end())
		{
			v.erase(std::remove(v.begin(), v.end(), *iter), v.end());
		}
	}

	void Commands::AddConsoleCommand(const FString& command,
	                                 const std::function<void(APlayerController*, FString*, bool)>& callback)
	{
		ConsoleCommand* console_command = new ConsoleCommand{command, callback};
		console_commands_.push_back(console_command);
	}

	void Commands::AddRconCommand(const FString& command,
	                              const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback)
	{
		RconCommand* rcon_command = new RconCommand{command, callback};
		rcon_commands_.push_back(rcon_command);
	}

	void Commands::AddOnTickCallback(const std::function<void(float)>& callback)
	{
		on_tick_callbacks_.push_back(callback);
	}

	void Commands::AddOnTimerCallback(const std::function<void()>& callback)
	{
		on_timer_callbacks_.push_back(callback);
	}

	bool Commands::CheckChatCommands(AShooterPlayerController* a_shooter_player_controller, FString* message,
	                                 EChatSendMode::Type mode)
	{
		bool result = false;

		TArray<FString> parsed;
		message->ParseIntoArray(parsed, L" ", true);

		if (!parsed.IsValidIndex(0))
			return false;

		const FString chat_command = parsed[0];

		for (const auto& command : chat_commands_)
		{
			if (chat_command.EndsWith(command->command, ESearchCase::IgnoreCase))
			{
				command->callback(a_shooter_player_controller, message, mode);

				result = true;
			}
		}

		return result;
	}

	bool Commands::CheckConsoleCommands(APlayerController* a_player_controller, FString* cmd, bool write_to_log)
	{
		bool result = false;

		TArray<FString> parsed;
		cmd->ParseIntoArray(parsed, L" ", true);

		if (!parsed.IsValidIndex(0))
			return false;

		FString console_command = parsed[0];

		for (const auto& command : console_commands_)
		{
			if (console_command.Compare(command->command, ESearchCase::IgnoreCase) == 0)
			{
				command->callback(a_player_controller, cmd, write_to_log);

				result = true;
			}
		}

		return result;
	}

	bool Commands::CheckRconCommands(RCONClientConnection* rcon_client_connection, RCONPacket* rcon_packet,
	                                 UWorld* u_world)
	{
		bool result = false;

		TArray<FString> parsed;
		rcon_packet->Body.ParseIntoArray(parsed, L" ", true);

		if (!parsed.IsValidIndex(0))
			return false;

		FString rcon_command = parsed[0];

		for (const auto& command : rcon_commands_)
		{
			if (rcon_command.Compare(command->command, ESearchCase::IgnoreCase) == 0)
			{
				command->callback(rcon_client_connection, rcon_packet, u_world);

				result = true;
			}
		}

		return result;
	}

	void Commands::CheckOnTickCallbacks(float delta_seconds)
	{
		for (const auto& callback : on_tick_callbacks_)
		{
			callback(delta_seconds);
		}
	}

	void Commands::CheckOnTimerCallbacks()
	{
		for (const auto& callback : on_timer_callbacks_)
		{
			callback();
		}
	}
}
