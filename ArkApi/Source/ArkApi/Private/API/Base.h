#ifndef H_BaseSdk
#define H_BaseSdk

#include "ArkApiPrivatePCH.h"
#include <windows.h>
#include <string>

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport) 
#else
#define ARK_API __declspec(dllimport) 
#endif

// Structs forward declaration

struct AShooterPlayerController;
class APlayerController;
struct UShooterCheatManager;
struct AShooterCharacter;
struct UPlayer;
struct FItemNetID;
struct UPrimalInventoryComponent;
struct UPrimalItem;
struct APrimalCharacter;
struct APrimalDinoCharacter;
struct FItemNetInfo;
class APawn;
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
class USceneComponent;
class ULevel;
struct ULevelBase;
struct FDamageEvent;
struct FHitResult;
struct AShooterGameState;
struct RCONClientConnection;
struct RCONPacket;
struct URCONServer;
class FUniqueNetId;
struct UGameplayStatics;
class UObjectBase;
class UObjectBaseUtility;
class UClass;

// Address helpers

ARK_API DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset);
ARK_API DWORD64 GetAddress(LPVOID base, const std::string& structure, const std::string& offset);
ARK_API LPVOID GetAddress(const std::string& structure, const std::string& offset);

#include "UE.h"
#include "Ark.h"
#include "Enums.h"
#include "GameMode.h"
#include "GameState.h"
#include "Inventory.h"
#include "Other.h"
#include "Actor.h"
#include "Tribe.h"
#include "PrimalStructure.h"

#endif
