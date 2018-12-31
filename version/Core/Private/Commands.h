#pragma once

#include <ICommands.h>

#include <algorithm>
#include <memory>
#include <utility>
#include <vector>

namespace ArkApi
{
	class Commands : public ICommands
	{
	public:
		Commands() = default;
		
		Commands(const Commands&) = delete;
		Commands(Commands&&) = delete;
		Commands& operator=(const Commands&) = delete;
		Commands& operator=(Commands&&) = delete;

		~Commands() override = default;

		void AddChatCommand(const FString& command,
		                    const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>&
		                    callback) override;
		void AddConsoleCommand(const FString& command,
		                       const std::function<void(APlayerController*, FString*, bool)>& callback) override;
		void AddRconCommand(const FString& command,
		                    const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback) override;

		void AddOnTickCallback(const FString& id, const std::function<void(float)>& callback) override;
		void AddOnTimerCallback(const FString& id, const std::function<void()>& callback) override;
		void AddOnChatMessageCallback(const FString& id,
		                              const std::function<bool(AShooterPlayerController*, FString*, EChatSendMode::Type,
		                                                       bool, bool)>& callback) override;

		bool RemoveChatCommand(const FString& command) override;
		bool RemoveConsoleCommand(const FString& command) override;
		bool RemoveRconCommand(const FString& command) override;

		bool RemoveOnTickCallback(const FString& id) override;
		bool RemoveOnTimerCallback(const FString& id) override;
		bool RemoveOnChatMessageCallback(const FString& id) override;

		bool CheckChatCommands(AShooterPlayerController* shooter_player_controller, FString* message,
		                       EChatSendMode::Type mode);
		bool CheckConsoleCommands(APlayerController* a_player_controller, FString* cmd, bool write_to_log);
		bool CheckRconCommands(RCONClientConnection* rcon_client_connection, RCONPacket* rcon_packet,
		                       UWorld* u_world);
		void CheckOnTickCallbacks(float delta_seconds);
		void CheckOnTimerCallbacks();
		bool CheckOnChatMessageCallbacks(AShooterPlayerController* player_controller, FString* message,
		                                 EChatSendMode::Type mode, bool spam_check, bool command_executed);

	private:
		template <typename T>
		struct Command
		{
			Command(FString command, std::function<T> callback)
				: command(std::move(command)),
				  callback(std::move(callback))
			{
			}

			FString command;
			std::function<T> callback;
		};

		using ChatCommand = Command<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>;
		using ConsoleCommand = Command<void(APlayerController*, FString*, bool)>;
		using RconCommand = Command<void(RCONClientConnection*, RCONPacket*, UWorld*)>;

		using OnTickCallback = Command<void(float)>;
		using OnTimerCallback = Command<void()>;
		using OnChatMessageCallback = Command<bool
			(AShooterPlayerController*, FString*, EChatSendMode::Type, bool, bool)>;

		template <typename T>
		bool RemoveCommand(const FString& command, std::vector<std::shared_ptr<T>>& commands)
		{
			auto iter = std::find_if(commands.begin(), commands.end(),
			                         [&command](const std::shared_ptr<T>& data) -> bool
			                         {
				                         return data->command == command;
			                         });

			if (iter != commands.end())
			{
				commands.erase(std::remove(commands.begin(), commands.end(), *iter), commands.end());

				return true;
			}

			return false;
		}

		template <typename T, typename... Args>
		bool CheckCommands(const FString& message, const std::vector<std::shared_ptr<T>>& commands, Args&&... args)
		{
			TArray<FString> parsed;
			message.ParseIntoArray(parsed, L" ", true);

			if (!parsed.IsValidIndex(0))
			{
				return false;
			}

			const FString command_text = parsed[0];

			for (const auto& command : commands)
			{
				if (command_text.Compare(command->command, ESearchCase::IgnoreCase) == 0)
				{
					command->callback(std::forward<Args>(args)...);

					return true;
				}
			}

			return false;
		}

		std::vector<std::shared_ptr<ChatCommand>> chat_commands_;
		std::vector<std::shared_ptr<ConsoleCommand>> console_commands_;
		std::vector<std::shared_ptr<RconCommand>> rcon_commands_;

		std::vector<std::shared_ptr<OnTickCallback>> on_tick_callbacks_;
		std::vector<std::shared_ptr<OnTimerCallback>> on_timer_callbacks_;
		std::vector<std::shared_ptr<OnChatMessageCallback>> on_chat_message_callbacks_;
	};
} // namespace ArkApi
