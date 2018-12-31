#include "ApiUtils.h"

#include "../IBaseApi.h"

namespace AtlasApi
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

	void ApiUtils::SetStatus(ArkApi::ServerStatus status)
	{
		status_ = status;
	}

	ArkApi::ServerStatus ApiUtils::GetStatus() const
	{
		return status_;
	}

	// Free function
	ArkApi::IApiUtils& GetApiUtils()
	{
		return *API::game_api->GetApiUtils();
	}
} // namespace AtlasApi
