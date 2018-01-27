#include "ApiUtils.h"

namespace ArkApi
{
	ApiUtils& ApiUtils::Get()
	{
		static ApiUtils instance;
		return instance;
	}

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

	// Free function
	IApiUtils& GetApiUtils()
	{
		return ApiUtils::Get();
	}
}
