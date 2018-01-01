#pragma once

#include "API/ARK/Ark.h"

namespace ArkApi
{
	class ARK_API IApiUtils
	{
	public:
		virtual ~IApiUtils() = default;

		/**
		* \brief Receives a pointer to UWorld
		* \return Pointer to UWorld
		*/
		virtual UWorld* GetWorld() const = 0;

		/**
		* \brief Receives a pointer to AShooterGameMode
		* \return Pointer to AShooterGameMode
		*/
		virtual AShooterGameMode* GetShooterGameMode() const = 0;

		/**
		* \brief Sends server message to the specific player. Using sprintf formatting.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param player_controller Player
		* \param msg_color Message color
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendServerMessage(AShooterPlayerController* player_controller, FLinearColor msg_color, const T* msg,
		                       Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			player_controller->ClientServerChatDirectMessage(&text, msg_color, false);
		}

		/**
		* \brief Sends notification (on-screen message) to the specific player. Using sprintf formatting.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param player_controller Player
		* \param color Message color
		* \param display_scale Size of text
		* \param display_time Display time
		* \param icon Message icon (optional)
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendNotification(AShooterPlayerController* player_controller, FLinearColor color, float display_scale,
		                      float display_time, UTexture2D* icon, const T* msg, Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			player_controller->ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon, nullptr);
		}

		/**
		 * \brief Sends chat message to the specific player. Using sprintf formatting.
		 * \tparam T Either a a char or wchar_t
		 * \tparam Args Optional arguments types
		 * \param player_controller Player
		 * \param sender_name Name of the sender
		 * \param msg Message
		 * \param args Optional arguments
		 */
		template <typename T, typename... Args>
		void SendChatMessage(AShooterPlayerController* player_controller, const FString& sender_name, const T* msg,
		                     Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			const FString text(FormatText(msg, std::forward<Args>(args)...));

			FChatMessage chat_message = FChatMessage();
			chat_message.SenderName = sender_name;
			chat_message.Message = text;

			player_controller->ClientChatMessage(chat_message);
		}

		/**
		* \brief Sends server message to all players. Using sprintf formatting.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param msg_color Message color
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendServerMessageToAll(FLinearColor msg_color, const T* msg,
		                            Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

				shooter_pc->ClientServerChatDirectMessage(&text, msg_color, false);
			}
		}

		/**
		* \brief Sends notification (on-screen message) to all players. Using sprintf formatting.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param color Message color
		* \param display_scale Size of text
		* \param display_time Display time
		* \param icon Message icon (optional)
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendNotificationToAll(FLinearColor color, float display_scale,
		                           float display_time, UTexture2D* icon, const T* msg, Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

				shooter_pc->ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon, nullptr);
			}
		}

		/**
		* \brief Sends chat message to all players. Using sprintf formatting.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param sender_name Name of the sender
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendChatMessageToAll(const FString& sender_name, const T* msg, Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			const FString text(FormatText(msg, std::forward<Args>(args)...));

			FChatMessage chat_message = FChatMessage();
			chat_message.SenderName = sender_name;
			chat_message.Message = text;

			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

				shooter_pc->ClientChatMessage(chat_message);
			}
		}

		/**
		* \brief Formats text using sprintf
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param msg Message
		* \param args Optional arguments
		* \return Formatted text
		*/
		template <typename T, typename... Args>
		FString FormatText(const T* msg, Args&&... args)
		{
			const size_t size = CountTextSize(msg, std::forward<Args>(args)...);

			std::unique_ptr<T[]> buffer(new T[size]);

			if constexpr (std::is_same<T, wchar_t>::value)
				_snwprintf_s(buffer.get(), size, _TRUNCATE, msg, std::forward<Args>(args)...);
			else if constexpr (std::is_same<T, char>::value)
				_snprintf_s(buffer.get(), size, _TRUNCATE, msg, std::forward<Args>(args)...);

			return FString(buffer.get());
		}

		/**
		 * \brief Receives Steam ID from player controller
		 * \param controller Player controller
		 * \return Steam ID
		 */
		static uint64 GetSteamIdFromController(AController* controller)
		{
			uint64 steam_id = 0;

			APlayerState* player_state = controller->PlayerStateField()();
			if (player_state)
			{
				FUniqueNetIdSteam* steam_net_id = static_cast<FUniqueNetIdSteam*>(player_state->UniqueIdField()().UniqueNetId.Object);
				steam_id = steam_net_id->UniqueNetId;
			}

			return steam_id;
		}

		/**
		 * \brief Receives player from steam name
		 * \param steam_name Steam name
		 * \return Pointer to AShooterPlayerController
		 */
		AShooterPlayerController* FindPlayerFromSteamName(const FString& steam_name) const
		{
			AShooterPlayerController* result = nullptr;

			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				const FString current_name = player_controller->PlayerStateField()()->PlayerNameField()();
				if (current_name == steam_name)
				{
					AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

					result = shooter_pc;
					break;
				}
			}

			return result;
		}

		/**
		 * \brief Receives player from steam id
		 * \param steam_id Steam id
		 * \return Pointer to AShooterPlayerController
		 */
		AShooterPlayerController* FindPlayerFromSteamId(uint64 steam_id) const
		{
			AShooterPlayerController* result = nullptr;

			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				APlayerState* player_state = player_controller->PlayerStateField()();

				FUniqueNetIdSteam* steam_net_id = static_cast<FUniqueNetIdSteam*>(player_state->UniqueIdField()().UniqueNetId.Object);
				const uint64 current_steam_id = steam_net_id->UniqueNetId;

				if (current_steam_id == steam_id)
				{
					AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

					result = shooter_pc;
					break;
				}
			}

			return result;
		}

		/*bool SpawnDrop(const wchar_t* blueprint, FVector pos, int amount, float item_quality = 0.0f,
		               bool force_blueprint = false, float life_span = 0.0f) const
		{
			UObject* object = Globals::StaticLoadObject(UObject::StaticClass(), nullptr, blueprint, nullptr, 0, 0, true);

			TSubclassOf<UPrimalItem> archetype;// (reinterpret_cast<UClass*>(object));
			archetype.uClass = reinterpret_cast<UClass*>(object);
			TSubclassOf<ADroppedItem> archetype_dropped;
			archetype_dropped.uClass = reinterpret_cast<UClass*>(object);

			APlayerController* player = GetWorld()->GetFirstPlayerController();
			if (player)
			{
				FVector pos2{1, 1, 1};
				FRotator rot{0, 0, 0};


				UPrimalInventoryComponent::StaticDropNewItem(player, archetype, item_quality, false, amount, force_blueprint,
				                                             archetype_dropped, &rot,
				                                             true, &pos2, &rot, true, false, false, true, nullptr, pos2,
					nullptr, life_span);

				return true;
			}

			return false;
		}*/

		/**
		 * \brief Spawns a dino near player or at specific coordinates
		 * \param player Player. If null, random player will be chosen. At least one player should be on the map
		 * \param blueprint Blueprint path
		 * \param location Spawn position. If null, dino will be spawned near player
		 * \param lvl Level of the dino
		 * \param force_tame Force tame
		 * \return Spawned dino or null
		 */
		APrimalDinoCharacter* SpawnDino(AShooterPlayerController* player, FString blueprint, FVector* location, int lvl,
		                      bool force_tame) const
		{
			if (!player)
			{
				player = static_cast<AShooterPlayerController*>(GetWorld()->GetFirstPlayerController());
				if (!player)
					return nullptr;
			}

			AActor* actor = player->SpawnActor(&blueprint, 100, 0, 0, true);
			if (actor && actor->IsA(APrimalDinoCharacter::GetPrivateStaticClass()))
			{
				APrimalDinoCharacter* dino = static_cast<APrimalDinoCharacter*>(actor);

				dino->AbsoluteBaseLevelField() = lvl;

				if (location && !location->IsZero())
				{
					FRotator rotation{0, 0, 0};
					dino->TeleportTo(location, &rotation, true, false);
				}

				if (force_tame)
				{
					dino->TameDino(player, true, player->TargetingTeamField()());
				}

				dino->BeginPlay();

				return dino;
			}

			return nullptr;
		}

	private:
		template <typename T, typename... Args>
		size_t CountTextSize(const T* msg, Args&&... args)
		{
			size_t size = 0;

			if constexpr (std::is_same<T, wchar_t>::value)
				size = _snwprintf(nullptr, 0, msg, std::forward<Args>(args)...);
			else if constexpr (std::is_same<T, char>::value)
				size = snprintf(nullptr, 0, msg, std::forward<Args>(args)...);

			return size + 1;
		}
	};

	extern "C" ARK_API IApiUtils& APIENTRY GetApiUtils();
}
