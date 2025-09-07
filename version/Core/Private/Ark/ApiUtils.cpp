#include "ApiUtils.h"

#include "../IBaseApi.h"

namespace ArkApi
{
	// UWorld

	void ApiUtils::SetWorld(UWorld* uworld)
	{
		u_world_ = uworld;
	}

	UWorld* ApiUtils::GetWorld() const
	{
		return u_world_;
	}

	// AShooterGameMode

	void ApiUtils::SetShooterGameMode(AShooterGameMode* shooter_game_mode)
	{
		shooter_game_mode_ = shooter_game_mode;
	}

	AShooterGameMode* ApiUtils::GetShooterGameMode() const
	{
		return shooter_game_mode_;
	}

	// Status

	void ApiUtils::SetStatus(ServerStatus status)
	{
		status_ = status;
	}

	ServerStatus ApiUtils::GetStatus() const
	{
		return status_;
	}

	// Cheat Manager
	void ApiUtils::SetCheatManager(UShooterCheatManager* cheatmanager)
	{
		cheatmanager_ = cheatmanager;
	}

	void ApiUtils::SetPlayerController(AShooterPlayerController* player_controller)
	{
		if (!player_controller)
			return;

		const uint64 steam_id = ArkApi::IApiUtils::GetSteamIdFromController(player_controller);

		if (steam_id != 0)
		{
			steam_id_map_[steam_id] = player_controller;
		}
	}

	void ApiUtils::RemovePlayerController(AShooterPlayerController* player_controller)
	{
		if (!player_controller)
			return;

		const uint64 steam_id = ArkApi::IApiUtils::GetSteamIdFromController(player_controller);

		if (steam_id != 0)
		{
			steam_id_map_.erase(steam_id);
		}
	}

	AShooterPlayerController* ApiUtils::FindPlayerFromSteamId_Internal(uint64 steam_id) const
	{
		AShooterPlayerController* found_player = nullptr;

		if (steam_id == 0)
			return found_player;

		auto iter = steam_id_map_.find(steam_id);

		if (iter != steam_id_map_.end()
			&& iter->first == steam_id)
		{
			found_player = iter->second;
		}

		return found_player;
	}

	UShooterCheatManager* ApiUtils::GetCheatManager() const
	{
		return cheatmanager_;
	}

	// Free function
	IApiUtils& GetApiUtils()
	{
		return *API::game_api->GetApiUtils();
	}
} // namespace ArkApi