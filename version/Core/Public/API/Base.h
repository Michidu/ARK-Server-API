#pragma once

#include <windows.h>
#include <string>

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport)
#else
#define ARK_API __declspec(dllimport)
#endif

// Structs forward declaration

struct UWorld;
struct AShooterPlayerController;
struct APlayerController;
struct UShooterCheatManager;
struct AShooterCharacter;
struct UPlayer;
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
struct ADroppedItemEgg;
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
struct UNetConnection;
struct FRadialDamageEvent {};
struct FMinimalViewInfo;
struct FItemCraftingConsumptionReplenishment {};
struct FActorClassAttachmentInfo {};
struct FSupplyCrateItemSet {};
struct UPrimalSupplyCrateItemSets;
struct FItemAttachmentInfo {};
struct FItemStatInfo;
struct FSaddlePassengerSeatDefinition {};
struct APrimalStructureTurret;
struct FKey {};
struct AWorldSettings;
struct UNetDriver;
struct FNetExecParams {};
struct FLifetimeProperty {};
struct AHUD;
struct FPointDamageEvent {};
struct APrimalStructureExplosive;
struct UPaintingTexture;
struct APrimalStructureExplosiveTransGPS;
struct ITargetableInterface;
struct UAnimSequence;
struct APrimalStructureSeating;
struct UScriptStruct;
struct FTransponderInfo {};
struct APrimalStructureItemContainer_SupplyCrate;
struct UAudioComponent;
struct FQuat;
struct FDinoOrderGroup {};
struct FServerOptions {};
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
struct FDinoExtraDefaultItemList {};
struct FWeaponData {};
struct FAIRequestID {};
struct UPrimalGameData;
struct UEngine;
struct UPrimalGlobals;
struct APrimalStructurePlacer;
struct UActorChannel;
struct UPrimalColorSet {};
struct FDinoSaddleStruct {};
struct APrimalStructureShipHull {};
struct APrimalStructureSail;
struct FCollisionResponseSet;
struct FDinoMapMarkerInfo {};
struct FStatValuePair {};
struct FHUDElement {};
struct FConfigMaxItemQuantityOverride {};
struct FJsonObject {};
struct FItemMaxItemQuantityOverride {};
struct FMaxItemQuantityOverride {};
struct FEventItem {};
struct FPrimalSnapshotPose {};
struct ULeaderboard {};
struct FReplicatePingData {};
struct FTargetingTeamChanged {};
struct FArchive {};
struct FSpawnPointInfo;
struct FPrimalPlayerCharacterConfigStructReplicated;
struct UPlayerInput {};
struct FPlayerMuteList {};
struct FBox2D {};
struct IOnlineSubsystem {};
struct FSteamInventoryItemInfo {};
struct FPingData {};
struct UUserWidget {};
struct APointOfInterestCosmeticActor {};
struct FPointOfInterestData_ForCompanion {};
struct FMissionWaypointInfo {};
struct UShooterPersistentUser {};
struct APrimalStructureMovingContainer {};
struct FPrimalMapMarkerEntryData {};
struct FLeaderboardRow {};
struct UStructurePaintingComponent {};
struct FPaintItem {};
struct APrimalStructureElevatorPlatform {};
struct FBoneDamageAdjuster {};
struct AShooterProjectile {};
struct APrimalBuff_Grappled {};
struct APrimalStructureLadder {};
struct APrimalProjectileBoomerang {};
struct FWeaponEvent {};
struct APrimalStructureTurretBallista {};
struct FLatestMissionScore {};
struct FObjectReader {};
struct FObjectWriter {};
struct FPrimalCharacterStatusStateThresholds {};
struct UPrimalDinoSettings;
struct FPrimalSaddleStructure {};
struct FSlateColor {};
struct FInstantWeaponData {};
struct ABrush;
struct UShooterDamageType;
struct UChannel {};
struct FBoxCenterAndExtent {};
struct UFont {};
struct FLeaderboardEntry {};
struct FAvailableMission;
struct FActiveEventSupplyCrateWeight {};
struct APrimalEmitterSpawnable {};
struct UHexagonTradableOption {};
struct UAllClustersInventory {};
struct FGameIniData {};
struct FMassTeleportData {};
struct FTeleportDestination {};
struct UPrimalWorldSettingsEventOverrides {};
struct FCropItemPhaseData {};
struct FStructureVariant {};
struct AMissionType;

template <typename T>
struct FDataStore;

// Atlas

struct ADirectionalLight;
struct ACustomActorList;
struct ADestroyedMeshActor;

struct ALevelScriptActor;
struct ADayCycleManager;
struct ASOTFNotification;
struct ATreasureMapManager;
struct AShipPathManager;
struct AOceanDinoManager;
struct AOceanVolume;
struct ASeamlessVolumeManager;

struct APrimalStructureWaterPipe;
struct APrimalStructureClaimFlag;
struct APrimalStructureSeating_DriverSeat;
struct APrimalRaft;

struct ADroppedItemLowQuality;



struct FComponentBeginOverlapSignature;
struct FComponentEndOverlapSignature;
struct FComponentBeginCursorOverSignature;
struct FComponentEndCursorOverSignature;
struct FComponentOnClickedSignature;
struct FComponentOnReleasedSignature;
struct FComponentOnInputTouchBeginSignature;
struct FComponentOnInputTouchEndSignature;
struct FComponentBeginTouchOverSignature;
struct FComponentEndTouchOverSignature;
struct FWalkableSlopeOverride;

struct FNetworkPredictionData_Client;
struct FNetworkPredictionData_Client_Character;
struct FNetworkPredictionData_Server;
struct FNetworkPredictionData_Server_Character;
struct FStoredMoveData;

struct FBodyInstance;
struct FVector4; //UE
struct FAsyncSharedLogCleanup;
struct FQualityTierCraftingResourceRequirements;
struct FStatValPair;
struct FStatColorMapping;
struct FItemStatGroupValue;
struct FCustomItemData;
struct FNetworkGUID {};
struct FLevelActorVisibilityState {};
struct FShorelineProps;
struct FShorelineMetadata;
struct FAtlasSaveObjectData;
struct FOctreeElementSimple;
struct FTraceHandle;
struct FTraceDatum;
struct FGameNameRedirect;
struct FClassRedirect;
struct FPluginRedirect;
struct FStructRedirect;
struct FDropNoteInfo;
struct FRigidBodyErrorCorrection;
struct FScreenMessageString;
struct FAudioDevice;
struct FRunnableThread;
struct FScreenSaverInhibitor;
struct FNetDriverDefinition;
struct FWorldContext;
struct FViewport;
struct FHardwareSurveyResults;
struct FCanvas;
struct FSeamlessTravelHandler;
struct FEvent;
struct FStreamableManager;
struct FTribeNotification;
struct FQueuedThreadPool;
struct FLevelExperienceRamp;
struct FEngramEntryOverride;
struct FEngramEntryAutoUnlock;
struct FDinoSpawnWeightMultiplier;
struct FClassMultiplier;
struct FClassNameReplacement;
struct FItemCraftingCostOverride;
struct FConfigItemCraftingCostOverride;
struct FConfigSupplyCrateItemsOverride;
struct FConfigNPCSpawnEntriesContainer;
struct FTameUnitCounts {};
struct FSeamlessTravelPlayerData;
struct FTickCallbacks;
struct FGridCellServerInfo;
struct FRegionGeneralOverrides;
struct FDisciplineDefinition;
struct FShipTypeDisplayInformation;
struct FBonePresetSlider;
struct FAdvancedBoneModifierSlider;
struct FSoilTypeDescription;
struct FLockedFeat;
struct FSoilTypeRegionMapping;
struct FReplicatedFoliageOverride;
struct FTransformedSubLevel;
struct FAsyncUpdatableTexture2D;
struct FOnHTTPGetProcessed;
struct FOnHTTPPostResponse;
struct FPlayerLocatorEffectMap;
struct FGlobalGameplaySetup;
struct F2DByteArray;
struct FLocRot;
struct FAssetMatcher;
struct FFeatCooldown;
struct FRelativePositionEntry {};
struct FHandIkTarget;
struct FMatineeActorFinished;
struct FMatineeActorStopped;
struct FOrderingGroupInfo;
struct FRHITexture2D;
struct FPlane; //UE
struct FBlueprintTimerDynamicDelegate {};
struct FSlotAnimationTrack;
struct FInstalledItemInfo;
struct FShooterSessionData;
struct FShooterGameSessionParams;
struct FShooterOnlineSessionSettings;
struct FShooterOnlineSearchSettings;
struct FOnlineSessionSearchResult;
struct FMemoryArchive;

struct FAttachmentPoint;

struct FShownTreasureData;

struct FDodgeMovementInfo;

struct FTimespan {};

struct FSupplyCrateValuesOverride;

struct FExplorerNoteEntry;
struct FExplorerNoteAchievement;
struct FMultiAchievement;
struct FClassRemapping;
struct FClassAddition;
struct FBuffAddition;

struct FClassRemappingWeight;
struct FObjectCorrelation;
struct FHairStyleDefinition;
struct FNamedTeamDefinition;
struct FTutorialDefinition;
struct FColorDefinition;

struct FDebugFloatHistory;
struct FPubSub_TribeNotification_Chat;
struct FFloatingTextEntry;

struct FDefaultItemEntry;
struct FDiscoveredZone;

struct FDinoBaseLevelWeightEntry;

struct FPlayerCharacterGenderDefinition;

struct FMeleeHitInfo;
struct FWeaponAttack {};
struct FPenetrationTraceHit;

struct FRecoveryRateOverride;

struct FDamagePrimalCharacterStatusValueModifier;
struct FMaxStatScaler;
struct FPrimalCharacterNotifyAttackStarted;
struct FPrimalCharacterNotifyAttackEnded;
struct FPrimalStructureSnapPointOverride;
struct FPrimalCharacterStatusValueModifier;
struct FPrimalCharacterStatusValueDefinition;
struct FPrimalCharacterStatusStateDefinition;
struct FPrimalItemStatDefinition;
struct FPrimalItemDefinition;
struct FPrimalEquipmentDefinition;
struct FPrimalItemQuality;
struct FPrimalStatGroupDefinition;

struct FBuffStatEntry;
struct FEngramEntries;
struct FEngramItemEntry;
struct FEngramBuffEntry;
struct FEngramStatEntry;

struct FPostProcessMaterialAdjuster;

struct FItemSlotTypeDefinition;
struct FInventoryComponentDefaultItemsAppend;
struct FStatusValueModifierDescription;

struct FAppIDItem;

struct FUnlockableEmoteEntry;

struct FLatentActionInfo {};
struct FDialogueContext;

struct FDatabase_ClusterInfo_Server;
struct FTribeEntity;
struct FTributePlayerTribeInfo;
struct FPlayerFlagData;
struct FDatabase_TravelEntry;
struct FTribeTravelCount;
struct FServerTribeAtMax;
struct FDatabase_AllianceWrapper;
struct FDatabase_TribeWrapper;
struct FDatabase_TribeEntities;
struct FDatabase_PlayerJoinedTribe;
struct FDatabase_PlayerRemovedFromTribe;
struct FDatabase_LogEntryWrapper;
struct FDatabase_CreateShapshot;

struct FDinoBabySetup;
struct FNPCSpawnEntriesContainerAdditions;


struct IEngineLoop;
struct IStereoRendering;
struct IHeadMountedDisplay;
struct IDelegateInstance;


struct UWeaponAttackData;

struct UPrimalItem_Dye;
struct UPrimalItem_Shield;
struct UPrimalEngramEntry;
struct UPrimalStructureSettings;
struct UPrimalStructureSnapSettings;
struct FPrimalStructureSnapPoint;

struct UWaveWorksComponent;
struct UUI_HostSession;
struct UConsole;
struct UGameUserSettings;
struct UTireType;
struct UTexture;
struct UMaterial;
struct UPhysicalMaterial;
struct UDeviceProfileManager;
struct UPendingNetGame;
struct UUI_GenericConfirmationDialog;
struct USoundClass;
struct UPubSub_TribeNotifications;
struct UPubSub_GeneralNotifications;
struct USeamlessDataServer;
struct UPaintingCache;
struct UMeshComponent;
struct USoundMix;

struct UDatabase_SharedLog;
struct UDatabase_TravelData;
struct UDatabase_TribeDataManager;
struct UDatabase_TerritoryMap;
struct UDatabase_RemoteFileManager;

struct UGenericDataListEntry;
struct UToolTipWidget;
struct UUI_XBoxFooter;
struct UUI_Notification;
struct UPrimalStructureToolTipWidget;
struct UChildActorComponent;
struct UInterface;
struct UDialogueWave;
struct USoundAttenuation;

struct UShooterGameUserSettings;
struct UDiscoveryZoneDataListEntry;
struct FTribeLogEntry;

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
struct ADroppedItemEgg;
struct UProperty;
struct UStruct;
struct UField;
struct FAssetRegistry;
struct FAssetData;
struct FModuleManager;
struct UTexture2D;
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
struct FMinimalViewInfo;
struct UPrimalSupplyCrateItemSets;
struct FItemStatInfo;
struct APrimalStructureTurret;
struct AWorldSettings;
struct UNetDriver;
struct AHUD;
struct APrimalStructureExplosive;
struct UPaintingTexture;
struct APrimalStructureExplosiveTransGPS;
struct ITargetableInterface;
struct UAnimSequence;
struct APrimalStructureSeating;
struct UScriptStruct;
struct APrimalStructureItemContainer_SupplyCrate;
struct UAudioComponent;
struct FQuat;
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
struct UPrimalGameData;
struct UEngine;
struct UPrimalGlobals;
struct APrimalStructurePlacer;

struct UPrimalHarvestingComponent;
struct FHarvestResourceEntry;
struct FOceanHarvestEntry;
struct FOceanHarvestedEntry;
struct AOceanHarvestManager;
struct FAttachedInstancedHarvestingElement;


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

#define DECLARE_HOOK(name, returnType, ...) typedef returnType(__fastcall * name ## _Func)(__VA_ARGS__); \
inline name ## _Func name ## _original; \
returnType __fastcall Hook_ ## name(__VA_ARGS__)