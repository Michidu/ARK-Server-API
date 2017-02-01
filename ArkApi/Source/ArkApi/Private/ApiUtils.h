#ifndef H_ApiUtils
#define H_ApiUtils

#include "ArkApiPrivatePCH.h"
#include "API/Base.h"
#include <vector>

namespace ApiUtils
{
	// Set and Get UWorld

	void SetWorld(UWorld* aUworld);
	UWorld* GetWorld();

	// Set and Get AShooterGameMode

	void SetGameMode(AShooterGameMode* aShooterGameMode);
	AShooterGameMode* GetGameMode();
}

#endif
