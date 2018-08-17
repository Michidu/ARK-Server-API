#pragma once

#include <windows.h>
#include <string>

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport)
#else
#define ARK_API __declspec(dllimport)
#endif

#define API_VERSION "2.7"

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
struct USoundBase{};
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
struct UNetConnection;
struct FRadialDamageEvent{};
struct FMinimalViewInfo;
struct FItemCraftingConsumptionReplenishment{};
struct FActorClassAttachmentInfo{};
struct FSupplyCrateItemSet{};
struct UPrimalSupplyCrateItemSets;
struct FItemAttachmentInfo{};
struct FItemStatInfo;
struct FSaddlePassengerSeatDefinition{};
struct APrimalStructureTurret;
struct FKey{};
struct AWorldSettings;
struct UNetDriver;
struct FNetExecParams{};
struct FLifetimeProperty{};
struct AHUD;
struct FPointDamageEvent{};
struct APrimalStructureExplosive;
struct UPaintingTexture;
struct APrimalStructureExplosiveTransGPS;
struct ITargetableInterface;
struct UAnimSequence;
struct APrimalStructureSeating;
struct UScriptStruct;
struct FTransponderInfo{};
struct APrimalStructureItemContainer_SupplyCrate;
struct UAudioComponent;
struct FQuat;
struct FDinoOrderGroup{};
struct FServerOptions{};
struct ULocalPlayer;
struct ASpectatorPawn;
struct APlayerCameraManager;
struct UAntiDupeTransactionLog;
struct AMatineeActor;
struct ANPCZoneManager;
struct UStaticMesh;
struct UPrimalLocalProfile;
struct UPrimalBuffPersistentData;
struct UCharacterMovementComponent;
struct FDinoExtraDefaultItemList{};
struct FWeaponData{};
struct FAIRequestID{};
struct UPrimalGameData;
struct UEngine;
struct UPrimalGlobals;
struct APrimalStructurePlacer;

struct BitField
{
	DWORD64 offset;
	DWORD bit_position;
	ULONGLONG num_bits;
	ULONGLONG length; //in bytes
};

// Address helpers

ARK_API DWORD64 GetAddress(const void* base, const std::string& name);
ARK_API LPVOID GetAddress(const std::string& name);

ARK_API LPVOID GetDataAddress(const std::string& name);

ARK_API BitField GetBitField(const void* base, const std::string& name);
ARK_API BitField GetBitField(LPVOID base, const std::string& name);
