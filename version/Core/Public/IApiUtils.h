#pragma once

#include <optional>
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
		* \brief Sends server message to the specific player. Using fmt::format.
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
			FString text(FString::Format(msg, std::forward<Args>(args)...));

			player_controller->ClientServerChatDirectMessage(&text, msg_color, false);
		}

		/**
		* \brief Sends notification (on-screen message) to the specific player. Using fmt::format.
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
			FString text(FString::Format(msg, std::forward<Args>(args)...));

			player_controller->ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon, nullptr);
		}

		/**
		 * \brief Sends chat message to the specific player. Using fmt::format.
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
			const FString text(FString::Format(msg, std::forward<Args>(args)...));

			FChatMessage chat_message = FChatMessage();
			chat_message.SenderName = sender_name;
			chat_message.Message = text;

			player_controller->ClientChatMessage(chat_message);
		}

		/**
		* \brief Sends server message to all players. Using fmt::format.
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
			FString text(FString::Format(msg, std::forward<Args>(args)...));

			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

				shooter_pc->ClientServerChatDirectMessage(&text, msg_color, false);
			}
		}

		/**
		* \brief Sends notification (on-screen message) to all players. Using fmt::format.
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
			FString text(FString::Format(msg, std::forward<Args>(args)...));

			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

				shooter_pc->ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon, nullptr);
			}
		}

		/**
		* \brief Sends chat message to all players. Using fmt::format.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param sender_name Name of the sender
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendChatMessageToAll(const FString& sender_name, const T* msg, Args&&... args)
		{
			const FString text(FString::Format(msg, std::forward<Args>(args)...));

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
				FUniqueNetIdSteam* steam_net_id = static_cast<FUniqueNetIdSteam*>(player_state->UniqueIdField()().UniqueNetId.Object
				);
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
		* \brief Receives player from character name
		* \param character_name Character name
		* \param search Type Defaulted To ESearchCase::Type::IgnoreCase
		* \param full_match Will match the full length of the string if true
		* \return Pointer to AShooterPlayerController
		*/
		AShooterPlayerController* FindPlayerFromCharacterName(const FString& character_name,
		                                                      ESearchCase::Type search = ESearchCase::Type::IgnoreCase,
		                                                      bool full_match = false) const
		{
			const auto& player_controllers = GetWorld()->PlayerControllerListField()();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_player = static_cast<AShooterPlayerController*>(player_controller.Get());
				FString char_name = GetCharacterName(shooter_player);

				if (full_match ? char_name.Equals(character_name, search) : char_name.StartsWith(character_name, search))
					return shooter_player;
			}

			return nullptr;
		}

		/**
		* \brief Returns the character name
		* \param player_controller Player
		*/
		static FString GetCharacterName(AShooterPlayerController* player_controller)
		{
			FString name;
			if (player_controller)
				player_controller->GetPlayerCharacterName(&name);

			return name;
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

				FUniqueNetIdSteam* steam_net_id = static_cast<FUniqueNetIdSteam*>(player_state->UniqueIdField()().UniqueNetId.Object
				);
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

		/**
		* \brief Returns true if character is riding a dino, false otherwise
		* \param player_controller Player
		*/
		static bool IsRidingDino(AShooterPlayerController* player_controller)
		{
			return player_controller && player_controller->GetPlayerCharacter()
				&& player_controller->GetPlayerCharacter()->GetRidingDino() != nullptr;
		}

		/**
		* \brief Returns the dino the character is riding
		* \param player_controller Player
		* \return APrimalDinoCharacter*
		*/
		static APrimalDinoCharacter* GetRidingDino(AShooterPlayerController* player_controller)
		{
			return player_controller && player_controller->GetPlayerCharacter()
			       && player_controller->GetPlayerCharacter()->GetRidingDino()
				       ? player_controller->GetPlayerCharacter()->GetRidingDino()
				       : nullptr;
		}

		/**
		* \brief Returns the position of a player
		* \param player_controller Player
		* \return FVector
		*/
		static FVector GetPosition(AShooterPlayerController* player_controller)
		{
			return player_controller ? player_controller->DefaultActorLocationField()() : FVector{0, 0, 0};
		}

		/**
		* \brief Teleport one player to another
		* \param me Player
		* \param him Other Player
		* \param check_for_dino If set true prevents players teleporting with dino's or teleporting to a player on a dino
		* \param max_dist Is the max distance the characters can be away from each other -1 is disabled
		*/
		static std::optional<FString> TeleportToPlayer(AShooterPlayerController* me, AShooterPlayerController* him,
		                                               bool check_for_dino,
		                                               float max_dist = -1)
		{
			if (!(me && him && me->GetPlayerCharacter() && him->GetPlayerCharacter()
				&& !me->GetPlayerCharacter()->IsDead() && !him->GetPlayerCharacter()->IsDead())
				)
			{
				return "One of players is dead";
			}

			if (check_for_dino && (IsRidingDino(me) || IsRidingDino(him)))
			{
				return "One of players is riding a dino";
			}

			if (max_dist != -1 && FVector::Distance(GetPosition(me), GetPosition(him)) > max_dist)
			{
				return "Person is too far away";
			}

			const FVector pos = him->DefaultActorLocationField()();

			me->SetPlayerPos(pos.X, pos.Y, pos.Z);

			return {};
		}

		/**
		* \brief Teleport player to pos
		* \param player_controller Player
		* \param pos New position
		*/
		static bool TeleportToPos(AShooterPlayerController* player_controller, FVector pos)
		{
			if (player_controller && player_controller->GetPlayerCharacter() && !player_controller
			                                                                     ->GetPlayerCharacter()->IsDead())
			{
				player_controller->SetPlayerPos(pos.X, pos.Y, pos.Z);
				return true;
			}

			return false;
		}

		/**
		* \brief Counts a specific items quantity
		* \param player_controller Player
		* \param item_name The name of the item you want to count the quantity of
		*/
		static int GetInventoryItemCount(AShooterPlayerController* player_controller, const FString& item_name)
		{
			if (!player_controller)
				return 0;

			UPrimalInventoryComponent* inventory_component = player_controller
			                                                 ->GetPlayerCharacter()->MyInventoryComponentField()();
			if (!inventory_component)
				return 0;

			FString name;
			int item_count = 0;

			for (UPrimalItem* item : inventory_component->InventoryItemsField()())
			{
				item->GetItemName(&name, true, false, nullptr);

				if (name.Equals(item_name, ESearchCase::IgnoreCase))
					item_count += item->GetItemQuantity();
			}

			return item_count;
		}
	};

	ARK_API IApiUtils& APIENTRY GetApiUtils();
}
