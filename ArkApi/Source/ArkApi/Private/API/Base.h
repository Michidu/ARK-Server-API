#ifndef H_BaseSdk
#define H_BaseSdk

#include "ArkApiPrivatePCH.h"
#include <windows.h>

#define ARK_EXPORTS

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport) 
#else
#define ARK_API __declspec(dllimport) 
#endif

// Structs forward declaration

struct AShooterPlayerController;
struct APlayerController;
struct UShooterCheatManager;
struct AShooterCharacter;
struct UPlayer;
struct FItemNetID;
struct UPrimalInventoryComponent;
struct UPrimalItem;
struct APrimalCharacter;
struct APrimalDinoCharacter;
struct FItemNetInfo;
struct APawn;
struct UCheatManager;
struct UShooterCheatManager;
struct ACustomGameMode;
struct AShooterGameMode;
struct AGameMode;
struct AGameState;
struct AGameSession;
struct APlayerStart;
struct APlayerState;
struct AController;
struct AShooterPlayerState;
struct FUniqueNetIdUInt64;
struct UPrimalPlayerData;
struct FTribeGovernment;
struct FTribeData;
struct FPlayerDeathReason;
struct FDamageEvent;
struct UDamageType;
struct APrimalTargetableActor;
struct APrimalStructure;
struct APrimalStructureDoor;
struct FPlacementData;
struct FTribeRankGroup;
struct FTribeAlliance;
struct FPrimalPlayerCharacterConfigStruct;
struct FTribeWar;
struct ACharacter;
struct AShooterWeapon;
struct FActorSpawnParameters;
struct FPrimalPlayerDataStruct;
struct FUniqueNetIdRepl;
struct FPrimalPersistentCharacterStatsStruct;
struct UPrimalCharacterStatusComponent;
struct USceneComponent;
struct ULevel;
struct ULevelBase;
struct FDamageEvent;
struct FHitResult;
struct AShooterGameState;

// Address helpers

ARK_API DWORD64 GetAddress(const void* base, const char* structure, const char* offset);
ARK_API DWORD64 GetAddress(LPVOID base, const char* structure, const char* offset);
ARK_API LPVOID GetAddress(const char* structure, const char* offset);

// Replacement for TWeakObjectPtr

template <typename T>
struct AWeakObjectPtr
{
	int ObjectIndex;
	int ObjectSerialNumber;

	FORCEINLINE T& operator*() const
	{
		return *Get(true);
	}

	FORCEINLINE T* operator->() const
	{
		return Get(true);
	}

	T* Get(bool a1) const { return static_cast<T*(_cdecl*)(DWORD64, bool)>(GetAddress("FWeakObjectPtr", "Get"))((DWORD64)this, a1); }
};

#include "Ark.h"
#include "GameMode.h"
#include "GameState.h"
#include "Inventory.h"
#include "Other.h"
#include "Actor.h"
#include "Tribe.h"
#include "PrimalStructure.h"
#include "Enums.h"

#endif
