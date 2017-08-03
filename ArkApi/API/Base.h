#ifndef H_BaseSdk
#define H_BaseSdk

#include <windows.h>
#include <string>

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
struct AShooterGameSession;
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
struct RCONClientConnection;
struct RCONPacket;
struct URCONServer;
struct FUniqueNetId;
struct UGameplayStatics;
struct UObjectBase;
struct UObjectBaseUtility;
struct UClass;
struct UObject;
struct AActor;
struct UBlueprintCore;
struct Globals;
struct ADroppedItem;
struct UProperty;
struct UStruct;
struct UField;
struct FAssetRegistry;
struct FAssetData;
struct FModuleManager;
struct UTexture2D;
struct USoundBase;
struct USoundCue;
struct FItemMultiplier;
struct UAnimMontage;
struct APrimalBuff;
struct FDinoAncestorsEntry;
struct FCraftingResourceRequirement;
struct APrimalStructureItemContainer;
struct AShooterHUD;
struct UPrimitiveComponent;
struct USkeletalMeshComponent;
struct UActorComponent;
struct UMaterialInterface;
struct FItemCraftQueueEntry;
struct FItemSpawnActorClassOverride;
struct FItemCraftingConsumptionReplenishment;
struct FActorClassAttachmentInfo;
struct FSupplyCrateItemSet;
struct UPrimalSupplyCrateItemSets;
struct FItemAttachmentInfo;
struct FItemStatInfo;
struct FSaddlePassengerSeatDefinition;
struct APrimalStructureTurret;

// Address helpers

ARK_API DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset);
ARK_API DWORD64 GetAddress(LPVOID base, const std::string& structure, const std::string& offset);
ARK_API LPVOID GetAddress(const std::string& structure, const std::string& offset);

#include "Enums.h"
#include "UE.h"
#include "GameMode.h"
#include "GameState.h"
#include "Inventory.h"
#include "Other.h"
#include "Actor.h"
#include "Tribe.h"
#include "PrimalStructure.h"
#include "Ark.h"

#endif
