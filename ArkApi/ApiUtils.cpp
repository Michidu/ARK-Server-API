#include "stdafx.h"
#include "ApiUtils.h"
#include "API/Base.h"

namespace ApiUtils
{
	namespace
	{
		// Game objects

		UWorld* uWorld;
		AShooterGameMode* aShooterGameMode;
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
}
