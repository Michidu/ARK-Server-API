#pragma once

#include "API/UE/UE.h"
#include "API/UE/Containers/Map.h"

#include "Other.h"

struct __declspec(align(8)) FEngramEntryAutoUnlock
{
	FString EngramClassName;
	int LevelToAutoUnlock;
};

struct UGameViewportClient
{
	TArray<UObject *> ViewPortWidgetsField() { return *GetNativePointerField<TArray<UObject *>*>(this, "UGameViewportClient.ViewPortWidgets"); }
	int& MaxSplitscreenPlayersField() { return *GetNativePointerField<int*>(this, "UGameViewportClient.MaxSplitscreenPlayers"); }
	UWorld * WorldField() { return *GetNativePointerField<UWorld **>(this, "UGameViewportClient.World"); }
	bool& bSuppressTransitionMessageField() { return *GetNativePointerField<bool*>(this, "UGameViewportClient.bSuppressTransitionMessage"); }
	float& ProgressFadeTimeField() { return *GetNativePointerField<float*>(this, "UGameViewportClient.ProgressFadeTime"); }
	int& ViewModeIndexField() { return *GetNativePointerField<int*>(this, "UGameViewportClient.ViewModeIndex"); }
	FName& CurrentBufferVisualizationModeField() { return *GetNativePointerField<FName*>(this, "UGameViewportClient.CurrentBufferVisualizationMode"); }
	bool& bDisableSplitScreenOverrideField() { return *GetNativePointerField<bool*>(this, "UGameViewportClient.bDisableSplitScreenOverride"); }
	TArray<bool>& IgnoreInputValuesField() { return *GetNativePointerField<TArray<bool>*>(this, "UGameViewportClient.IgnoreInputValues"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bShowTitleSafeZone() { return { this, "UGameViewportClient.bShowTitleSafeZone" }; }
	BitFieldValue<bool, unsigned __int32> bIsPlayInEditorViewport() { return { this, "UGameViewportClient.bIsPlayInEditorViewport" }; }
	BitFieldValue<bool, unsigned __int32> bDisableWorldRendering() { return { this, "UGameViewportClient.bDisableWorldRendering" }; }

	// Functions

	bool IsStatEnabled(const wchar_t * InName) { return NativeCall<bool, const wchar_t *>(this, "UGameViewportClient.IsStatEnabled", InName); }
	void SetEnabledStats(TArray<FString> * InEnabledStats) { NativeCall<void, TArray<FString> *>(this, "UGameViewportClient.SetEnabledStats", InEnabledStats); }
	TArray<FString> * GetEnabledStats() { return NativeCall<TArray<FString> *>(this, "UGameViewportClient.GetEnabledStats"); }
	FGuid * GetEngineShowFlags() { return NativeCall<FGuid *>(this, "UGameViewportClient.GetEngineShowFlags"); }
	void PostInitProperties() { NativeCall<void>(this, "UGameViewportClient.PostInitProperties"); }
	void BeginDestroy() { NativeCall<void>(this, "UGameViewportClient.BeginDestroy"); }
	void DetachViewportClient() { NativeCall<void>(this, "UGameViewportClient.DetachViewportClient"); }
	FString * ConsoleCommand(FString * result, FString * Command) { return NativeCall<FString *, FString *, FString *>(this, "UGameViewportClient.ConsoleCommand", result, Command); }
	void SetIsSimulateInEditorViewport(bool bInIsSimulateInEditorViewport) { NativeCall<void, bool>(this, "UGameViewportClient.SetIsSimulateInEditorViewport", bInIsSimulateInEditorViewport); }
	bool GetMousePosition(FVector2D * MousePosition) { return NativeCall<bool, FVector2D *>(this, "UGameViewportClient.GetMousePosition", MousePosition); }
	bool RequiresUncapturedAxisInput() { return NativeCall<bool>(this, "UGameViewportClient.RequiresUncapturedAxisInput"); }
	void SetDropDetail(float DeltaSeconds) { NativeCall<void, float>(this, "UGameViewportClient.SetDropDetail", DeltaSeconds); }
	void GetViewportSize(FVector2D * out_ViewportSize) { NativeCall<void, FVector2D *>(this, "UGameViewportClient.GetViewportSize", out_ViewportSize); }
	void Precache() { NativeCall<void>(this, "UGameViewportClient.Precache"); }
	ULocalPlayer * SetupInitialLocalPlayer(FString * OutError) { return NativeCall<ULocalPlayer *, FString *>(this, "UGameViewportClient.SetupInitialLocalPlayer", OutError); }
	ULocalPlayer * CreatePlayer(int ControllerId, FString * OutError, bool bSpawnActor) { return NativeCall<ULocalPlayer *, int, FString *, bool>(this, "UGameViewportClient.CreatePlayer", ControllerId, OutError, bSpawnActor); }
	bool RemovePlayer(ULocalPlayer * ExPlayer) { return NativeCall<bool, ULocalPlayer *>(this, "UGameViewportClient.RemovePlayer", ExPlayer); }
	void UpdateActiveSplitscreenType() { NativeCall<void>(this, "UGameViewportClient.UpdateActiveSplitscreenType"); }
	void LayoutPlayers() { NativeCall<void>(this, "UGameViewportClient.LayoutPlayers"); }
	void GetSubtitleRegion(FVector2D * MinPos, FVector2D * MaxPos) { NativeCall<void, FVector2D *, FVector2D *>(this, "UGameViewportClient.GetSubtitleRegion", MinPos, MaxPos); }
	void NotifyPlayerAdded(int PlayerIndex, ULocalPlayer * RemovedPlayer) { NativeCall<void, int, ULocalPlayer *>(this, "UGameViewportClient.NotifyPlayerAdded", PlayerIndex, RemovedPlayer); }
	void RemoveAllViewportWidgets() { NativeCall<void>(this, "UGameViewportClient.RemoveAllViewportWidgets"); }
	void VerifyPathRenderingComponents() { NativeCall<void>(this, "UGameViewportClient.VerifyPathRenderingComponents"); }
	bool RequestBugScreenShot(const wchar_t * Cmd, bool bDisplayHUDInfo) { return NativeCall<bool, const wchar_t *, bool>(this, "UGameViewportClient.RequestBugScreenShot", Cmd, bDisplayHUDInfo); }
	void HandleViewportStatCheckEnabled(const wchar_t * InName, bool * bOutCurrentEnabled, bool * bOutOthersEnabled) { NativeCall<void, const wchar_t *, bool *, bool *>(this, "UGameViewportClient.HandleViewportStatCheckEnabled", InName, bOutCurrentEnabled, bOutOthersEnabled); }
	void HandleViewportStatEnabled(const wchar_t * InName) { NativeCall<void, const wchar_t *>(this, "UGameViewportClient.HandleViewportStatEnabled", InName); }
	void HandleViewportStatDisabled(const wchar_t * InName) { NativeCall<void, const wchar_t *>(this, "UGameViewportClient.HandleViewportStatDisabled", InName); }
	void HandleViewportStatDisableAll(const bool bInAnyViewport) { NativeCall<void, const bool>(this, "UGameViewportClient.HandleViewportStatDisableAll", bInAnyViewport); }
	void SetIgnoreInput(bool Ignore, int ControllerId) { NativeCall<void, bool, int>(this, "UGameViewportClient.SetIgnoreInput", Ignore, ControllerId); }
	bool IgnoreInput(int ControllerId) { return NativeCall<bool, int>(this, "UGameViewportClient.IgnoreInput", ControllerId); }
	void OnSplitscreenPlayerJoinFailure(TSharedPtr<FUniqueNetId, 0> * PlayerUniqueNetId, FString * ErrorMsg) { NativeCall<void, TSharedPtr<FUniqueNetId, 0> *, FString *>(this, "UGameViewportClient.OnSplitscreenPlayerJoinFailure", PlayerUniqueNetId, ErrorMsg); }
	int SetStatEnabled(const wchar_t * InName, const bool bEnable, const bool bAll) { return NativeCall<int, const wchar_t *, const bool, const bool>(this, "UGameViewportClient.SetStatEnabled", InName, bEnable, bAll); }
	static void StaticRegisterNativesUGameViewportClient() { NativeCall<void>(nullptr, "UGameViewportClient.StaticRegisterNativesUGameViewportClient"); }
};

struct UGameInstance;
struct FChatMessage;

struct UWorld : UObject
{
	struct InitializationValues
	{
		unsigned __int32 bInitializeScenes : 1;
		unsigned __int32 bAllowAudioPlayback : 1;
		unsigned __int32 bRequiresHitProxies : 1;
		unsigned __int32 bCreatePhysicsScene : 1;
		unsigned __int32 bCreateNavigation : 1;
		unsigned __int32 bCreateAISystem : 1;
		unsigned __int32 bShouldSimulatePhysics : 1;
		unsigned __int32 bEnableTraceCollision : 1;
		unsigned __int32 bTransactional : 1;
		unsigned __int32 bCreateFXSystem : 1;
	};
	
	TArray<TSubclassOf<AActor>> & ActorsClassesAllowedToSaveField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "UWorld.ActorsClassesAllowedToSave"); }
	bool& bIsIdleField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsIdle"); }
	TArray<TWeakObjectPtr<AActor>> & LocalStasisActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>>*>(this, "UWorld.LocalStasisActors"); }
	TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> & LevelNameHashField() { return *GetNativePointerField<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>*>(this, "UWorld.LevelNameHash"); }
	ULevel * PersistentLevelField() { return *GetNativePointerField<ULevel**>(this, "UWorld.PersistentLevel"); }
	AGameState * GameStateField() { return *GetNativePointerField<AGameState**>(this, "UWorld.GameState"); }
	TArray<UObject*> ExtraReferencedObjectsField() { return *GetNativePointerField<TArray<UObject*>*>(this, "UWorld.ExtraReferencedObjects"); }
	FString & StreamingLevelsPrefixField() { return *GetNativePointerField<FString*>(this, "UWorld.StreamingLevelsPrefix"); }
	ULevel * CurrentLevelPendingVisibilityField() { return *GetNativePointerField<ULevel**>(this, "UWorld.CurrentLevelPendingVisibility"); }
	TArray<FVector> & ViewLocationsRenderedLastFrameField() { return *GetNativePointerField<TArray<FVector>*>(this, "UWorld.ViewLocationsRenderedLastFrame"); }
	AGameMode * AuthorityGameModeField() { return *GetNativePointerField<AGameMode**>(this, "UWorld.AuthorityGameMode"); }
	TArray<ULevel*> LevelsField() { return *GetNativePointerField<TArray<ULevel*>*>(this, "UWorld.Levels"); }
	TArray<AActor*> NetworkActorsField() { return *GetNativePointerField<TArray<AActor*>*>(this, "UWorld.NetworkActors"); }
	ULevel * CurrentLevelField() { return *GetNativePointerField<ULevel**>(this, "UWorld.CurrentLevel"); }
	UGameInstance * OwningGameInstanceField() { return *GetNativePointerField<UGameInstance**>(this, "UWorld.OwningGameInstance"); }
	int& FrameCounterField() { return *GetNativePointerField<int*>(this, "UWorld.FrameCounter"); }
	bool& GamePreviewField() { return *GetNativePointerField<bool*>(this, "UWorld.GamePreview"); }
	TMap<FString,TArray<TArray<TArray<unsigned int>>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,TArray<TArray<TArray<unsigned int>>>,0> > & LocalInstancedStaticMeshComponentInstancesVisibilityStateField() { return *GetNativePointerField<TMap<FString,TArray<TArray<TArray<unsigned int>>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,TArray<TArray<TArray<unsigned int>>>,0> >*>(this, "UWorld.LocalInstancedStaticMeshComponentInstancesVisibilityState"); }
	TMap<FName,TWeakObjectPtr<UClass>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,TWeakObjectPtr<UClass>,0> > & PrioritizedObjectMapField() { return *GetNativePointerField<TMap<FName,TWeakObjectPtr<UClass>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,TWeakObjectPtr<UClass>,0> >*>(this, "UWorld.PrioritizedObjectMap"); }
	TArray<TAutoWeakObjectPtr<AController>> & ControllerListField() { return *GetNativePointerField<TArray<TAutoWeakObjectPtr<AController>>*>(this, "UWorld.ControllerList"); }
	TArray<TAutoWeakObjectPtr<APlayerController>> & PlayerControllerListField() { return *GetNativePointerField<TArray<TAutoWeakObjectPtr<APlayerController>>*>(this, "UWorld.PlayerControllerList"); }
	TArray<TAutoWeakObjectPtr<APawn>> & PawnListField() { return *GetNativePointerField<TArray<TAutoWeakObjectPtr<APawn>>*>(this, "UWorld.PawnList"); }
	TSet<TWeakObjectPtr<UActorComponent>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>,0>,FDefaultSetAllocator> & ComponentsThatNeedEndOfFrameUpdateField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UActorComponent>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate"); }
	TSet<TWeakObjectPtr<UActorComponent>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>,0>,FDefaultSetAllocator> & ComponentsThatNeedEndOfFrameUpdate_OnGameThreadField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UActorComponent>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate_OnGameThread"); }
	TMap<TWeakObjectPtr<UBlueprint>,TWeakObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapKeyFuncs<TWeakObjectPtr<UBlueprint>,TWeakObjectPtr<UObject>,0> > & BlueprintObjectsBeingDebuggedField() { return *GetNativePointerField<TMap<TWeakObjectPtr<UBlueprint>,TWeakObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapKeyFuncs<TWeakObjectPtr<UBlueprint>,TWeakObjectPtr<UObject>,0> >*>(this, "UWorld.BlueprintObjectsBeingDebugged"); }
	bool& bRequiresHitProxiesField() { return *GetNativePointerField<bool*>(this, "UWorld.bRequiresHitProxies"); }
	long double& BuildStreamingDataTimerField() { return *GetNativePointerField<long double*>(this, "UWorld.BuildStreamingDataTimer"); }
	bool& bInTickField() { return *GetNativePointerField<bool*>(this, "UWorld.bInTick"); }
	bool& bIsBuiltField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsBuilt"); }
	bool& bTickNewlySpawnedField() { return *GetNativePointerField<bool*>(this, "UWorld.bTickNewlySpawned"); }
	bool& bPostTickComponentUpdateField() { return *GetNativePointerField<bool*>(this, "UWorld.bPostTickComponentUpdate"); }
	int& PlayerNumField() { return *GetNativePointerField<int*>(this, "UWorld.PlayerNum"); }
	float& TimeSinceLastPendingKillPurgeField() { return *GetNativePointerField<float*>(this, "UWorld.TimeSinceLastPendingKillPurge"); }
	bool& FullPurgeTriggeredField() { return *GetNativePointerField<bool*>(this, "UWorld.FullPurgeTriggered"); }
	bool& bShouldDelayGarbageCollectField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldDelayGarbageCollect"); }
	bool& bIsWorldInitializedField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsWorldInitialized"); }
	int& AllowLevelLoadOverrideField() { return *GetNativePointerField<int*>(this, "UWorld.AllowLevelLoadOverride"); }
	int& StreamingVolumeUpdateDelayField() { return *GetNativePointerField<int*>(this, "UWorld.StreamingVolumeUpdateDelay"); }
	bool& bIsLevelStreamingFrozenField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsLevelStreamingFrozen"); }
	bool& bShouldForceUnloadStreamingLevelsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldForceUnloadStreamingLevels"); }
	bool& bShouldForceVisibleStreamingLevelsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldForceVisibleStreamingLevels"); }
	bool& bDoDelayedUpdateCullDistanceVolumesField() { return *GetNativePointerField<bool*>(this, "UWorld.bDoDelayedUpdateCullDistanceVolumes"); }
	TEnumAsByte<enum EWorldType::Type> & WorldTypeField() { return *GetNativePointerField<TEnumAsByte<enum EWorldType::Type>*>(this, "UWorld.WorldType"); }
	bool& bIsRunningConstructionScriptField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsRunningConstructionScript"); }
	bool& bShouldSimulatePhysicsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldSimulatePhysics"); }
	FName & DebugDrawTraceTagField() { return *GetNativePointerField<FName*>(this, "UWorld.DebugDrawTraceTag"); }
	long double& LastTimeUnbuiltLightingWasEncounteredField() { return *GetNativePointerField<long double*>(this, "UWorld.LastTimeUnbuiltLightingWasEncountered"); }
	long double& TimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.TimeSeconds"); }
	long double& LoadedAtTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.LoadedAtTimeSeconds"); }
	long double& RealTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.RealTimeSeconds"); }
	long double& AudioTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.AudioTimeSeconds"); }
	float& DeltaTimeSecondsField() { return *GetNativePointerField<float*>(this, "UWorld.DeltaTimeSeconds"); }
	float& PauseDelayField() { return *GetNativePointerField<float*>(this, "UWorld.PauseDelay"); }
	unsigned int& StasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisThisFrame"); }
	unsigned int& UnStasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.UnStasisThisFrame"); }
	unsigned int& StasisOssilationThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisOssilationThisFrame"); }
	unsigned int& StasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisThisFrameMax"); }
	unsigned int& UnStasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.UnStasisThisFrameMax"); }
	unsigned int& StasisOssilationThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisOssilationThisFrameMax"); }
	float& StasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.StasisThisFrameAvg"); }
	float& UnStasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.UnStasisThisFrameAvg"); }
	float& StasisOssilationThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.StasisOssilationThisFrameAvg"); }
	float& StasisMaxResetTimerField() { return *GetNativePointerField<float*>(this, "UWorld.StasisMaxResetTimer"); }
	unsigned int& LastUnstasisCountField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.LastUnstasisCount"); }
	unsigned int& LoadedSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.LoadedSaveIncrementor"); }
	unsigned int& CurrentSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.CurrentSaveIncrementor"); }
	bool& bBlockAllOnNextLevelStreamingProcessField() { return *GetNativePointerField<bool*>(this, "UWorld.bBlockAllOnNextLevelStreamingProcess"); }
	FIntVector & OriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "UWorld.OriginLocation"); }
	FIntVector & RequestedOriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "UWorld.RequestedOriginLocation"); }
	bool& bOriginOffsetThisFrameField() { return *GetNativePointerField<bool*>(this, "UWorld.bOriginOffsetThisFrame"); }
	bool& bFlushingLevelStreamingField() { return *GetNativePointerField<bool*>(this, "UWorld.bFlushingLevelStreaming"); }
	long double& ForceBlockLoadTimeoutField() { return *GetNativePointerField<long double*>(this, "UWorld.ForceBlockLoadTimeout"); }
	FString & NextURLField() { return *GetNativePointerField<FString*>(this, "UWorld.NextURL"); }
	float& NextSwitchCountdownField() { return *GetNativePointerField<float*>(this, "UWorld.NextSwitchCountdown"); }
	TArray<FName> & PreparingLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UWorld.PreparingLevelNames"); }
	FName & CommittedPersistentLevelNameField() { return *GetNativePointerField<FName*>(this, "UWorld.CommittedPersistentLevelName"); }
	FString & CurrentDayTimeField() { return *GetNativePointerField<FString*>(this, "UWorld.CurrentDayTime"); }
	unsigned int& NumLightingUnbuiltObjectsField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.NumLightingUnbuiltObjects"); }

	// Functions

	UGameInstance * GetGameInstance() { return NativeCall<UGameInstance*>(this, "UWorld.GetGameInstance"); }
	AGameMode * GetAuthGameMode() { return NativeCall<AGameMode*>(this, "UWorld.GetAuthGameMode"); }
	AActor * SpawnActor(UClass * Class, FVector * Location, FRotator * Rotation, FActorSpawnParameters * SpawnParameters) { return NativeCall<AActor*, UClass*, FVector*, FRotator*, FActorSpawnParameters*>(this, "UWorld.SpawnActor", Class, Location, Rotation, SpawnParameters); }
	bool DestroyActor(AActor * ThisActor, bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, AActor*, bool, bool>(this, "UWorld.DestroyActor", ThisActor, bNetForce, bShouldModifyLevel); }
	bool FindTeleportSpot(AActor * TestActor, FVector * TestLocation, FRotator TestRotation, FVector * TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor*, FVector*, FRotator, FVector*>(this, "UWorld.FindTeleportSpot", TestActor, TestLocation, TestRotation, TraceWorldGeometryFromLocation); }
	bool EncroachingBlockingGeometry(AActor * TestActor, FVector TestLocation, FRotator TestRotation, FVector * ProposedAdjustment, FVector * TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor*, FVector, FRotator, FVector*, FVector*>(this, "UWorld.EncroachingBlockingGeometry", TestActor, TestLocation, TestRotation, ProposedAdjustment, TraceWorldGeometryFromLocation); }
	void SetMapNeedsLightingFullyRebuilt(int InNumLightingUnbuiltObjects) { NativeCall<void, int>(this, "UWorld.SetMapNeedsLightingFullyRebuilt", InNumLightingUnbuiltObjects); }
	void TickNetClient(float DeltaSeconds) { NativeCall<void, float>(this, "UWorld.TickNetClient", DeltaSeconds); }
	bool IsPaused() { return NativeCall<bool>(this, "UWorld.IsPaused"); }
	void ProcessLevelStreamingVolumes(FVector * OverrideViewLocation) { NativeCall<void, FVector*>(this, "UWorld.ProcessLevelStreamingVolumes", OverrideViewLocation); }
	void MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent * Component, bool bForceGameThread) { NativeCall<void, UActorComponent*, bool>(this, "UWorld.MarkActorComponentForNeededEndOfFrameUpdate", Component, bForceGameThread); }
	void CleanupActors() { NativeCall<void>(this, "UWorld.CleanupActors"); }
	void ForceGarbageCollection(bool bForcePurge) { NativeCall<void, bool>(this, "UWorld.ForceGarbageCollection", bForcePurge); }
	void UpdateAllReflectionCaptures() { NativeCall<void>(this, "UWorld.UpdateAllReflectionCaptures"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive*>(this, "UWorld.Serialize", Ar); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UWorld.PostDuplicate", bDuplicateForPIE); }
	void FinishDestroy() { NativeCall<void>(this, "UWorld.FinishDestroy"); }
	void PostLoad() { NativeCall<void>(this, "UWorld.PostLoad"); }
	bool PreSaveRoot(const wchar_t* Filename, TArray<FString> * AdditionalPackagesToCook) { return NativeCall<bool, const wchar_t*, TArray<FString>*>(this, "UWorld.PreSaveRoot", Filename, AdditionalPackagesToCook); }
	void PostSaveRoot(bool bCleanupIsRequired) { NativeCall<void, bool>(this, "UWorld.PostSaveRoot", bCleanupIsRequired); }
	void SetupParameterCollectionInstances() { NativeCall<void>(this, "UWorld.SetupParameterCollectionInstances"); }
	void UpdateParameterCollectionInstances(bool bUpdateInstanceUniformBuffers) { NativeCall<void, bool>(this, "UWorld.UpdateParameterCollectionInstances", bUpdateInstanceUniformBuffers); }
	void InitWorld(UWorld::InitializationValues IVS) { NativeCall<void, UWorld::InitializationValues>(this, "UWorld.InitWorld", IVS); }
	void InitializeNewWorld(UWorld::InitializationValues IVS) { NativeCall<void, UWorld::InitializationValues>(this, "UWorld.InitializeNewWorld", IVS); }
	void RemoveActor(AActor * Actor, bool bShouldModifyLevel) { NativeCall<void, AActor*, bool>(this, "UWorld.RemoveActor", Actor, bShouldModifyLevel); }
	bool AllowAudioPlayback() { return NativeCall<bool>(this, "UWorld.AllowAudioPlayback"); }
	void ClearWorldComponents() { NativeCall<void>(this, "UWorld.ClearWorldComponents"); }
	void UpdateWorldComponents(bool bRerunConstructionScripts, bool bCurrentLevelOnly) { NativeCall<void, bool, bool>(this, "UWorld.UpdateWorldComponents", bRerunConstructionScripts, bCurrentLevelOnly); }
	void UpdateCullDistanceVolumes() { NativeCall<void>(this, "UWorld.UpdateCullDistanceVolumes"); }
	void EnsureCollisionTreeIsBuilt() { NativeCall<void>(this, "UWorld.EnsureCollisionTreeIsBuilt"); }
	void AddToWorld(ULevel * Level, FTransform * LevelTransform, bool bAlwaysConsiderTimeLimit) { NativeCall<void, ULevel*, FTransform*, bool>(this, "UWorld.AddToWorld", Level, LevelTransform, bAlwaysConsiderTimeLimit); }
	void RemoveFromWorld(ULevel * Level) { NativeCall<void, ULevel*>(this, "UWorld.RemoveFromWorld", Level); }
	static FString * ConvertToPIEPackageName(FString * result, FString * PackageName, int PIEInstanceID) { return NativeCall<FString*, FString*, FString*, int>(nullptr, "UWorld.ConvertToPIEPackageName", result, PackageName, PIEInstanceID); }
	static FString * StripPIEPrefixFromPackageName(FString * result, FString * PrefixedName, FString * Prefix) { return NativeCall<FString*, FString*, FString*, FString*>(nullptr, "UWorld.StripPIEPrefixFromPackageName", result, PrefixedName, Prefix); }
	static FString * BuildPIEPackagePrefix(FString * result, int PIEInstanceID) { return NativeCall<FString*, FString*, int>(nullptr, "UWorld.BuildPIEPackagePrefix", result, PIEInstanceID); }
	static UWorld * DuplicateWorldForPIE(FString * PackageName, UWorld * OwningWorld) { return NativeCall<UWorld*, FString*, UWorld*>(nullptr, "UWorld.DuplicateWorldForPIE", PackageName, OwningWorld); }
	bool AreAlwaysLoadedLevelsLoaded() { return NativeCall<bool>(this, "UWorld.AreAlwaysLoadedLevelsLoaded"); }
	bool AllowLevelLoadRequests() { return NativeCall<bool>(this, "UWorld.AllowLevelLoadRequests"); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld * NewWorld) { NativeCall<void, bool, bool, UWorld*>(this, "UWorld.CleanupWorld", bSessionEnded, bCleanupResources, NewWorld); }
	UGameViewportClient * GetGameViewport() { return NativeCall<UGameViewportClient*>(this, "UWorld.GetGameViewport"); }
	TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const ,TAutoWeakObjectPtr<AController> const ,int> * GetControllerIterator(TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const ,TAutoWeakObjectPtr<AController> const ,int> * result) { return NativeCall<TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const ,TAutoWeakObjectPtr<AController> const ,int>*, TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const ,TAutoWeakObjectPtr<AController> const ,int>*>(this, "UWorld.GetControllerIterator", result); }
	TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const ,TAutoWeakObjectPtr<APlayerController> const ,int> * GetPlayerControllerIterator(TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const ,TAutoWeakObjectPtr<APlayerController> const ,int> * result) { return NativeCall<TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const ,TAutoWeakObjectPtr<APlayerController> const ,int>*, TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const ,TAutoWeakObjectPtr<APlayerController> const ,int>*>(this, "UWorld.GetPlayerControllerIterator", result); }
	APlayerController * GetFirstPlayerController() { return NativeCall<APlayerController*>(this, "UWorld.GetFirstPlayerController"); }
	ULocalPlayer * GetFirstLocalPlayerFromController() { return NativeCall<ULocalPlayer*>(this, "UWorld.GetFirstLocalPlayerFromController"); }
	void AddController(AController * Controller) { NativeCall<void, AController*>(this, "UWorld.AddController", Controller); }
	void RemoveController(AController * Controller) { NativeCall<void, AController*>(this, "UWorld.RemoveController", Controller); }
	void AddNetworkActor(AActor * Actor) { NativeCall<void, AActor*>(this, "UWorld.AddNetworkActor", Actor); }
	void RemoveNetworkActor(AActor * Actor) { NativeCall<void, AActor*>(this, "UWorld.RemoveNetworkActor", Actor); }
	long double GetTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetTimeSeconds"); }
	long double GetRealTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetRealTimeSeconds"); }
	float GetDeltaSeconds() { return NativeCall<float>(this, "UWorld.GetDeltaSeconds"); }
	long double TimeSince(long double Time) { return NativeCall<long double, long double>(this, "UWorld.TimeSince", Time); }
	void CreatePhysicsScene() { NativeCall<void>(this, "UWorld.CreatePhysicsScene"); }
	AWorldSettings * GetWorldSettings(bool bCheckStreamingPesistent, bool bChecked) { return NativeCall<AWorldSettings*, bool, bool>(this, "UWorld.GetWorldSettings", bCheckStreamingPesistent, bChecked); }
	float GetGravityZ() { return NativeCall<float>(this, "UWorld.GetGravityZ"); }
	float GetDefaultGravityZ() { return NativeCall<float>(this, "UWorld.GetDefaultGravityZ"); }
	FString * GetMapName(FString * result) { return NativeCall<FString*, FString*>(this, "UWorld.GetMapName", result); }
	bool NotifyAcceptingChannel(UChannel * Channel) { return NativeCall<bool, UChannel*>(this, "UWorld.NotifyAcceptingChannel", Channel); }
	void WelcomePlayer(UNetConnection * Connection) { NativeCall<void, UNetConnection*>(this, "UWorld.WelcomePlayer", Connection); }
	bool DestroySwappedPC(UNetConnection * Connection) { return NativeCall<bool, UNetConnection*>(this, "UWorld.DestroySwappedPC", Connection); }
	bool IsPreparingMapChange() { return NativeCall<bool>(this, "UWorld.IsPreparingMapChange"); }
	bool SetNewWorldOrigin(FIntVector InNewOriginLocation) { return NativeCall<bool, FIntVector>(this, "UWorld.SetNewWorldOrigin", InNewOriginLocation); }
	void NavigateTo(FIntVector InLocation) { NativeCall<void, FIntVector>(this, "UWorld.NavigateTo", InLocation); }
	void GetMatineeActors(TArray<AMatineeActor*> * OutMatineeActors) { NativeCall<void, TArray<AMatineeActor*>*>(this, "UWorld.GetMatineeActors", OutMatineeActors); }
	void SeamlessTravel(FString * SeamlessTravelURL, bool bAbsolute, FGuid MapPackageGuid) { NativeCall<void, FString*, bool, FGuid>(this, "UWorld.SeamlessTravel", SeamlessTravelURL, bAbsolute, MapPackageGuid); }
	bool IsInSeamlessTravel() { return NativeCall<bool>(this, "UWorld.IsInSeamlessTravel"); }
	void UpdateConstraintActors() { NativeCall<void>(this, "UWorld.UpdateConstraintActors"); }
	int GetActorCount() { return NativeCall<int>(this, "UWorld.GetActorCount"); }
	int GetNetRelevantActorCount() { return NativeCall<int>(this, "UWorld.GetNetRelevantActorCount"); }
	bool ContainsLevel(ULevel * InLevel) { return NativeCall<bool, ULevel*>(this, "UWorld.ContainsLevel", InLevel); }
	TArray<ULevel*> * GetLevels() { return NativeCall<TArray<ULevel*>*>(this, "UWorld.GetLevels"); }
	void BroadcastLevelsChanged() { NativeCall<void>(this, "UWorld.BroadcastLevelsChanged"); }
	bool IsLevelLoadedByName(FName * LevelName) { return NativeCall<bool, FName*>(this, "UWorld.IsLevelLoadedByName", LevelName); }
	FString * GetLocalURL(FString * result) { return NativeCall<FString*, FString*>(this, "UWorld.GetLocalURL", result); }
	bool IsPlayInEditor() { return NativeCall<bool>(this, "UWorld.IsPlayInEditor"); }
	bool IsGameWorld() { return NativeCall<bool>(this, "UWorld.IsGameWorld"); }
	FString * GetAddressURL(FString * result) { return NativeCall<FString*, FString*>(this, "UWorld.GetAddressURL", result); }
	static FString * RemovePIEPrefix(FString * result, FString * Source) { return NativeCall<FString*, FString*, FString*>(nullptr, "UWorld.RemovePIEPrefix", result, Source); }
	void ServerTravel(FString * FURL, bool bAbsolute, bool bShouldSkipGameNotify) { NativeCall<void, FString*, bool, bool>(this, "UWorld.ServerTravel", FURL, bAbsolute, bShouldSkipGameNotify); }
	UClass * GetModPrioritizedClass(FName * NameIn) { return NativeCall<UClass*, FName*>(this, "UWorld.GetModPrioritizedClass", NameIn); }
	bool LoadFromFile(FString * filename) { return NativeCall<bool, FString*>(this, "UWorld.LoadFromFile", filename); }
	void UpdateInternalOctreeTransform(UPrimitiveComponent * InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UWorld.UpdateInternalOctreeTransform", InComponent); }
	void RemoveFromInternalOctree(UPrimitiveComponent * InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UWorld.RemoveFromInternalOctree", InComponent); }
	bool OverlapMultiInternalOctree(TArray<UPrimitiveComponent*> * OutPrimitives, FBoxCenterAndExtent * InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<UPrimitiveComponent*>*, FBoxCenterAndExtent*, unsigned int, bool>(this, "UWorld.OverlapMultiInternalOctree", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }
	void UpdateInternalSimpleOctreeTransform(FOctreeElementSimple * InElement) { NativeCall<void, FOctreeElementSimple*>(this, "UWorld.UpdateInternalSimpleOctreeTransform", InElement); }
	void RemoveFromInternalSimpleOctree(FOctreeElementSimple * InElement) { NativeCall<void, FOctreeElementSimple*>(this, "UWorld.RemoveFromInternalSimpleOctree", InElement); }
	int OverlapNumInternalOctree(FBoxCenterAndExtent * InBounds, unsigned int InSearchMask) { return NativeCall<int, FBoxCenterAndExtent*, unsigned int>(this, "UWorld.OverlapNumInternalOctree", InBounds, InSearchMask); }
	bool OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple*> * OutPrimitives, FBoxCenterAndExtent * InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<FOctreeElementSimple*>*, FBoxCenterAndExtent*, unsigned int, bool>(this, "UWorld.OverlapMultiInternalSimpleOctree", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }
	bool LineTraceSingle(FHitResult * OutHit, FVector * Start, FVector * End, ECollisionChannel TraceChannel, FCollisionQueryParams * Params, FCollisionResponseParams * ResponseParam, bool bUsePostfilter, float NegativeDistanceTolerance) { return NativeCall<bool, FHitResult*, FVector*, FVector*, ECollisionChannel, FCollisionQueryParams*, FCollisionResponseParams*, bool, float>(this, "UWorld.LineTraceSingle", OutHit, Start, End, TraceChannel, Params, ResponseParam, bUsePostfilter, NegativeDistanceTolerance); }
	bool LineTraceMulti(TArray<FHitResult> * OutHits, FVector * Start, FVector * End, ECollisionChannel TraceChannel, FCollisionQueryParams * Params, FCollisionResponseParams * ResponseParam, bool bDoSort, bool bCullBackfaces, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, TArray<FHitResult>*, FVector*, FVector*, ECollisionChannel, FCollisionQueryParams*, FCollisionResponseParams*, bool, bool, bool, float>(this, "UWorld.LineTraceMulti", OutHits, Start, End, TraceChannel, Params, ResponseParam, bDoSort, bCullBackfaces, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceSingle(FHitResult * OutHit, FVector * Start, FVector * End, FCollisionQueryParams * Params, FCollisionObjectQueryParams * ObjectQueryParams, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, FHitResult*, FVector*, FVector*, FCollisionQueryParams*, FCollisionObjectQueryParams*, bool, float>(this, "UWorld.LineTraceSingle", OutHit, Start, End, Params, ObjectQueryParams, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceMulti(TArray<FHitResult> * OutHits, FVector * Start, FVector * End, FCollisionQueryParams * Params, FCollisionObjectQueryParams * ObjectQueryParams, bool bDoSort, bool bCullBackfaces, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, TArray<FHitResult>*, FVector*, FVector*, FCollisionQueryParams*, FCollisionObjectQueryParams*, bool, bool, bool, float>(this, "UWorld.LineTraceMulti", OutHits, Start, End, Params, ObjectQueryParams, bDoSort, bCullBackfaces, bUsePostFilter, NegativeDistanceTolerance); }
	void StartAsyncTrace() { NativeCall<void>(this, "UWorld.StartAsyncTrace"); }
	void FinishAsyncTrace() { NativeCall<void>(this, "UWorld.FinishAsyncTrace"); }
	void FinishPhysicsSim() { NativeCall<void>(this, "UWorld.FinishPhysicsSim"); }
	static void StaticRegisterNativesUWorld() { NativeCall<void>(nullptr, "UWorld.StaticRegisterNativesUWorld"); }
};

struct UEngine : UObject
{
	UFont * TinyFontField() { return *GetNativePointerField<UFont**>(this, "UEngine.TinyFont"); }
	UFont * SmallFontField() { return *GetNativePointerField<UFont**>(this, "UEngine.SmallFont"); }
	UFont * MediumFontField() { return *GetNativePointerField<UFont**>(this, "UEngine.MediumFont"); }
	UFont * LargeFontField() { return *GetNativePointerField<UFont**>(this, "UEngine.LargeFont"); }
	UFont * SubtitleFontField() { return *GetNativePointerField<UFont**>(this, "UEngine.SubtitleFont"); }
	TArray<UFont*> AdditionalFontsField() { return *GetNativePointerField<TArray<UFont*>*>(this, "UEngine.AdditionalFonts"); }
	TWeakObjectPtr<AMatineeActor> & ActiveMatineeField() { return *GetNativePointerField<TWeakObjectPtr<AMatineeActor>*>(this, "UEngine.ActiveMatinee"); }
	TArray<FString> & AdditionalFontNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.AdditionalFontNames"); }
	TSubclassOf<UConsole> & ConsoleClassField() { return *GetNativePointerField<TSubclassOf<UConsole>*>(this, "UEngine.ConsoleClass"); }
	TSubclassOf<UGameViewportClient> & GameViewportClientClassField() { return *GetNativePointerField<TSubclassOf<UGameViewportClient>*>(this, "UEngine.GameViewportClientClass"); }
	TSubclassOf<ULocalPlayer> & LocalPlayerClassField() { return *GetNativePointerField<TSubclassOf<ULocalPlayer>*>(this, "UEngine.LocalPlayerClass"); }
	TSubclassOf<AWorldSettings> & WorldSettingsClassField() { return *GetNativePointerField<TSubclassOf<AWorldSettings>*>(this, "UEngine.WorldSettingsClass"); }
	TSubclassOf<UGameUserSettings> & GameUserSettingsClassField() { return *GetNativePointerField<TSubclassOf<UGameUserSettings>*>(this, "UEngine.GameUserSettingsClass"); }
	UGameUserSettings * GameUserSettingsField() { return *GetNativePointerField<UGameUserSettings**>(this, "UEngine.GameUserSettings"); }
	TSubclassOf<ALevelScriptActor> & LevelScriptActorClassField() { return *GetNativePointerField<TSubclassOf<ALevelScriptActor>*>(this, "UEngine.LevelScriptActorClass"); }
	UObject * GameSingletonField() { return *GetNativePointerField<UObject**>(this, "UEngine.GameSingleton"); }
	UTireType * DefaultTireTypeField() { return *GetNativePointerField<UTireType**>(this, "UEngine.DefaultTireType"); }
	TSubclassOf<APawn> & DefaultPreviewPawnClassField() { return *GetNativePointerField<TSubclassOf<APawn>*>(this, "UEngine.DefaultPreviewPawnClass"); }
	FString & PlayOnConsoleSaveDirField() { return *GetNativePointerField<FString*>(this, "UEngine.PlayOnConsoleSaveDir"); }
	UTexture2D * DefaultTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UEngine.DefaultTexture"); }
	UTexture * DefaultDiffuseTextureField() { return *GetNativePointerField<UTexture**>(this, "UEngine.DefaultDiffuseTexture"); }
	UTexture2D * DefaultBSPVertexTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UEngine.DefaultBSPVertexTexture"); }
	UTexture2D * HighFrequencyNoiseTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UEngine.HighFrequencyNoiseTexture"); }
	UTexture2D * DefaultBokehTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UEngine.DefaultBokehTexture"); }
	UMaterial * WireframeMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.WireframeMaterial"); }
	UMaterial * DebugMeshMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.DebugMeshMaterial"); }
	UMaterial * LevelColorationLitMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.LevelColorationLitMaterial"); }
	UMaterial * LevelColorationUnlitMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.LevelColorationUnlitMaterial"); }
	UMaterial * LightingTexelDensityMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.LightingTexelDensityMaterial"); }
	UMaterial * ShadedLevelColorationLitMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.ShadedLevelColorationLitMaterial"); }
	UMaterial * ShadedLevelColorationUnlitMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.ShadedLevelColorationUnlitMaterial"); }
	UMaterial * RemoveSurfaceMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.RemoveSurfaceMaterial"); }
	UMaterial * VertexColorMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.VertexColorMaterial"); }
	UMaterial * VertexColorViewModeMaterial_ColorOnlyField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.VertexColorViewModeMaterial_ColorOnly"); }
	UMaterial * VertexColorViewModeMaterial_AlphaAsColorField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.VertexColorViewModeMaterial_AlphaAsColor"); }
	UMaterial * VertexColorViewModeMaterial_RedOnlyField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.VertexColorViewModeMaterial_RedOnly"); }
	UMaterial * VertexColorViewModeMaterial_GreenOnlyField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.VertexColorViewModeMaterial_GreenOnly"); }
	UMaterial * VertexColorViewModeMaterial_BlueOnlyField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.VertexColorViewModeMaterial_BlueOnly"); }
	UMaterial * ConstraintLimitMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.ConstraintLimitMaterial"); }
	UMaterial * InvalidLightmapSettingsMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.InvalidLightmapSettingsMaterial"); }
	UMaterial * PreviewShadowsIndicatorMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.PreviewShadowsIndicatorMaterial"); }
	UMaterial * ArrowMaterialField() { return *GetNativePointerField<UMaterial**>(this, "UEngine.ArrowMaterial"); }
	FLinearColor & LightingOnlyBrightnessField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightingOnlyBrightness"); }
	TArray<FColor> & LightComplexityColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "UEngine.LightComplexityColors"); }
	TArray<FLinearColor> & ShaderComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "UEngine.ShaderComplexityColors"); }
	TArray<FLinearColor> & StationaryLightOverlapColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "UEngine.StationaryLightOverlapColors"); }
	float& MaxPixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxPixelShaderAdditiveComplexityCount"); }
	float& MaxES2PixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxES2PixelShaderAdditiveComplexityCount"); }
	float& MinLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MinLightMapDensity"); }
	float& IdealLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.IdealLightMapDensity"); }
	float& MaxLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MaxLightMapDensity"); }
	float& RenderLightMapDensityGrayscaleScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityGrayscaleScale"); }
	float& RenderLightMapDensityColorScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityColorScale"); }
	FLinearColor & LightMapDensityVertexMappedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensityVertexMappedColor"); }
	FLinearColor & LightMapDensitySelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensitySelectedColor"); }
	TArray<FStatColorMapping> & StatColorMappingsField() { return *GetNativePointerField<TArray<FStatColorMapping>*>(this, "UEngine.StatColorMappings"); }
	UPhysicalMaterial * DefaultPhysMaterialField() { return *GetNativePointerField<UPhysicalMaterial**>(this, "UEngine.DefaultPhysMaterial"); }
	TArray<FGameNameRedirect> & ActiveGameNameRedirectsField() { return *GetNativePointerField<TArray<FGameNameRedirect>*>(this, "UEngine.ActiveGameNameRedirects"); }
	TArray<FClassRedirect> & ActiveClassRedirectsField() { return *GetNativePointerField<TArray<FClassRedirect>*>(this, "UEngine.ActiveClassRedirects"); }
	TArray<FPluginRedirect> & ActivePluginRedirectsField() { return *GetNativePointerField<TArray<FPluginRedirect>*>(this, "UEngine.ActivePluginRedirects"); }
	TArray<FStructRedirect> & ActiveStructRedirectsField() { return *GetNativePointerField<TArray<FStructRedirect>*>(this, "UEngine.ActiveStructRedirects"); }
	UTexture2D * PreIntegratedSkinBRDFTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UEngine.PreIntegratedSkinBRDFTexture"); }
	UTexture2D * MiniFontTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UEngine.MiniFontTexture"); }
	UTexture * WeightMapPlaceholderTextureField() { return *GetNativePointerField<UTexture**>(this, "UEngine.WeightMapPlaceholderTexture"); }
	UTexture2D * LightMapDensityTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UEngine.LightMapDensityTexture"); }
	IEngineLoop * EngineLoopField() { return *GetNativePointerField<IEngineLoop**>(this, "UEngine.EngineLoop"); }
	UGameViewportClient * GameViewportField() { return *GetNativePointerField<UGameViewportClient**>(this, "UEngine.GameViewport"); }
	TArray<FString> & DeferredCommandsField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.DeferredCommands"); }
	int& TickCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.TickCycles"); }
	int& GameCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.GameCycles"); }
	int& ClientCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.ClientCycles"); }
	float& NearClipPlaneField() { return *GetNativePointerField<float*>(this, "UEngine.NearClipPlane"); }
	float& TimeBetweenPurgingPendingKillObjectsField() { return *GetNativePointerField<float*>(this, "UEngine.TimeBetweenPurgingPendingKillObjects"); }
	float& AsyncLoadingTimeLimitField() { return *GetNativePointerField<float*>(this, "UEngine.AsyncLoadingTimeLimit"); }
	float& PriorityAsyncLoadingExtraTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PriorityAsyncLoadingExtraTime"); }
	float& LevelStreamingActorsUpdateTimeLimitField() { return *GetNativePointerField<float*>(this, "UEngine.LevelStreamingActorsUpdateTimeLimit"); }
	int& LevelStreamingComponentsRegistrationGranularityField() { return *GetNativePointerField<int*>(this, "UEngine.LevelStreamingComponentsRegistrationGranularity"); }
	int& MaximumLoopIterationCountField() { return *GetNativePointerField<int*>(this, "UEngine.MaximumLoopIterationCount"); }
	int& NumPawnsAllowedToBeSpawnedInAFrameField() { return *GetNativePointerField<int*>(this, "UEngine.NumPawnsAllowedToBeSpawnedInAFrame"); }
	FColor & C_WorldBoxField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WorldBox"); }
	FColor & C_BrushWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushWire"); }
	FColor & C_AddWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_AddWire"); }
	FColor & C_SubtractWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SubtractWire"); }
	FColor & C_SemiSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SemiSolidWire"); }
	FColor & C_NonSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_NonSolidWire"); }
	FColor & C_WireBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WireBackground"); }
	FColor & C_ScaleBoxHiField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_ScaleBoxHi"); }
	FColor & C_VolumeCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_VolumeCollision"); }
	FColor & C_BSPCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BSPCollision"); }
	FColor & C_OrthoBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_OrthoBackground"); }
	FColor & C_VolumeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_Volume"); }
	FColor & C_BrushShapeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushShape"); }
	float& StreamingDistanceFactorField() { return *GetNativePointerField<float*>(this, "UEngine.StreamingDistanceFactor"); }
	TEnumAsByte<enum ETransitionType> & TransitionTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETransitionType>*>(this, "UEngine.TransitionType"); }
	FString & TransitionDescriptionField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionDescription"); }
	FString & TransitionGameModeField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionGameMode"); }
	float& MeshLODRangeField() { return *GetNativePointerField<float*>(this, "UEngine.MeshLODRange"); }
	float& CameraRotationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraRotationThreshold"); }
	float& CameraTranslationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraTranslationThreshold"); }
	float& PrimitiveProbablyVisibleTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PrimitiveProbablyVisibleTime"); }
	float& MaxOcclusionPixelsFractionField() { return *GetNativePointerField<float*>(this, "UEngine.MaxOcclusionPixelsFraction"); }
	int& MaxParticleResizeField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResize"); }
	int& MaxParticleResizeWarnField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResizeWarn"); }
	TArray<FDropNoteInfo> & PendingDroppedNotesField() { return *GetNativePointerField<TArray<FDropNoteInfo>*>(this, "UEngine.PendingDroppedNotes"); }
	FRigidBodyErrorCorrection & PhysicErrorCorrectionField() { return *GetNativePointerField<FRigidBodyErrorCorrection*>(this, "UEngine.PhysicErrorCorrection"); }
	float& NetClientTicksPerSecondField() { return *GetNativePointerField<float*>(this, "UEngine.NetClientTicksPerSecond"); }
	float& DisplayGammaField() { return *GetNativePointerField<float*>(this, "UEngine.DisplayGamma"); }
	float& MinDesiredFrameRateField() { return *GetNativePointerField<float*>(this, "UEngine.MinDesiredFrameRate"); }
	FLinearColor & DefaultSelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.DefaultSelectedMaterialColor"); }
	FLinearColor & SelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColor"); }
	FLinearColor & SelectionOutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectionOutlineColor"); }
	FLinearColor & SelectedMaterialColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColorOverride"); }
	bool& bIsOverridingSelectedColorField() { return *GetNativePointerField<bool*>(this, "UEngine.bIsOverridingSelectedColor"); }
	unsigned int& bEnableVisualLogRecordingOnStartField() { return *GetNativePointerField<unsigned int*>(this, "UEngine.bEnableVisualLogRecordingOnStart"); }
	UDeviceProfileManager * DeviceProfileManagerField() { return *GetNativePointerField<UDeviceProfileManager**>(this, "UEngine.DeviceProfileManager"); }
	int& ScreenSaverInhibitorSemaphoreField() { return *GetNativePointerField<int*>(this, "UEngine.ScreenSaverInhibitorSemaphore"); }
	FString & MatineeCaptureNameField() { return *GetNativePointerField<FString*>(this, "UEngine.MatineeCaptureName"); }
	FString & MatineePackageCaptureNameField() { return *GetNativePointerField<FString*>(this, "UEngine.MatineePackageCaptureName"); }
	int& MatineeCaptureFPSField() { return *GetNativePointerField<int*>(this, "UEngine.MatineeCaptureFPS"); }
	bool& bNoTextureStreamingField() { return *GetNativePointerField<bool*>(this, "UEngine.bNoTextureStreaming"); }
	FString & ParticleEventManagerClassPathField() { return *GetNativePointerField<FString*>(this, "UEngine.ParticleEventManagerClassPath"); }
	TArray<FScreenMessageString> & PriorityScreenMessagesField() { return *GetNativePointerField<TArray<FScreenMessageString>*>(this, "UEngine.PriorityScreenMessages"); }
	float& SelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensity"); }
	float& BSPSelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.BSPSelectionHighlightIntensity"); }
	float& HoverHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.HoverHighlightIntensity"); }
	float& SelectionHighlightIntensityBillboardsField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensityBillboards"); }
	FString & LastModDownloadTextField() { return *GetNativePointerField<FString*>(this, "UEngine.LastModDownloadText"); }
	FString & PrimalNetAuth_MyIPStrField() { return *GetNativePointerField<FString*>(this, "UEngine.PrimalNetAuth_MyIPStr"); }
	FString & PrimalNetAuth_TokenField() { return *GetNativePointerField<FString*>(this, "UEngine.PrimalNetAuth_Token"); }
	bool& bIsInitializedField() { return *GetNativePointerField<bool*>(this, "UEngine.bIsInitialized"); }
	TMap<int,FScreenMessageString,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FScreenMessageString,0> > & ScreenMessagesField() { return *GetNativePointerField<TMap<int,FScreenMessageString,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FScreenMessageString,0> >*>(this, "UEngine.ScreenMessages"); }
	FAudioDevice * AudioDeviceField() { return *GetNativePointerField<FAudioDevice**>(this, "UEngine.AudioDevice"); }
	TSharedPtr<IStereoRendering,1> & StereoRenderingDeviceField() { return *GetNativePointerField<TSharedPtr<IStereoRendering,1>*>(this, "UEngine.StereoRenderingDevice"); }
	TSharedPtr<IHeadMountedDisplay,1> & HMDDeviceField() { return *GetNativePointerField<TSharedPtr<IHeadMountedDisplay,1>*>(this, "UEngine.HMDDevice"); }
	FRunnableThread * ScreenSaverInhibitorField() { return *GetNativePointerField<FRunnableThread**>(this, "UEngine.ScreenSaverInhibitor"); }
	FScreenSaverInhibitor * ScreenSaverInhibitorRunnableField() { return *GetNativePointerField<FScreenSaverInhibitor**>(this, "UEngine.ScreenSaverInhibitorRunnable"); }
	bool& bPendingHardwareSurveyResultsField() { return *GetNativePointerField<bool*>(this, "UEngine.bPendingHardwareSurveyResults"); }
	TArray<FNetDriverDefinition> & NetDriverDefinitionsField() { return *GetNativePointerField<TArray<FNetDriverDefinition>*>(this, "UEngine.NetDriverDefinitions"); }
	TArray<FString> & ServerActorsField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.ServerActors"); }
	int& NextWorldContextHandleField() { return *GetNativePointerField<int*>(this, "UEngine.NextWorldContextHandle"); }

	// Functions

	void FEngineStatFuncs() { NativeCall<void>(this, "UEngine.FEngineStatFuncs"); }
	FAudioDevice * GetAudioDevice() { return NativeCall<FAudioDevice*>(this, "UEngine.GetAudioDevice"); }
	bool IsInitialized() { return NativeCall<bool>(this, "UEngine.IsInitialized"); }
	FString * GetLastModDownloadText(FString * result) { return NativeCall<FString*, FString*>(this, "UEngine.GetLastModDownloadText", result); }
	void TickFPSChart(float DeltaSeconds) { NativeCall<void, float>(this, "UEngine.TickFPSChart", DeltaSeconds); }
	void StartFPSChart() { NativeCall<void>(this, "UEngine.StartFPSChart"); }
	void StopFPSChart() { NativeCall<void>(this, "UEngine.StopFPSChart"); }
	void DumpFPSChartToLog(float TotalTime, float DeltaTime, int NumFrames, FString * InMapName) { NativeCall<void, float, float, int, FString*>(this, "UEngine.DumpFPSChartToLog", TotalTime, DeltaTime, NumFrames, InMapName); }
	void DumpFPSChart(FString * InMapName, bool bForceDump) { NativeCall<void, FString*, bool>(this, "UEngine.DumpFPSChart", InMapName, bForceDump); }
	void LoadMapRedrawViewports() { NativeCall<void>(this, "UEngine.LoadMapRedrawViewports"); }
	void Tick(float DeltaSeconds, bool bIdleMode) { NativeCall<void, float, bool>(this, "UEngine.Tick", DeltaSeconds, bIdleMode); }
	bool IsHardwareSurveyRequired(int LocalUserNum) { return NativeCall<bool, int>(this, "UEngine.IsHardwareSurveyRequired", LocalUserNum); }
	void Init(IEngineLoop * InEngineLoop) { NativeCall<void, IEngineLoop*>(this, "UEngine.Init", InEngineLoop); }
	void RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame * PendingNetGameToNotify) { NativeCall<void, UPendingNetGame*>(this, "UEngine.RequestAuthTokenThenNotifyPendingNetGame", PendingNetGameToNotify); }
	void OnExternalUIChange(bool bInIsOpening) { NativeCall<void, bool>(this, "UEngine.OnExternalUIChange", bInIsOpening); }
	void ShutdownAudioDevice() { NativeCall<void>(this, "UEngine.ShutdownAudioDevice"); }
	void PreExit() { NativeCall<void>(this, "UEngine.PreExit"); }
	void TickDeferredCommands() { NativeCall<void>(this, "UEngine.TickDeferredCommands"); }
	void UpdateTimeAndHandleMaxTickRate() { NativeCall<void>(this, "UEngine.UpdateTimeAndHandleMaxTickRate"); }
	void ParseCommandline() { NativeCall<void>(this, "UEngine.ParseCommandline"); }
	void InitializeObjectReferences() { NativeCall<void>(this, "UEngine.InitializeObjectReferences"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive*>(this, "UEngine.Serialize", Ar); }
	static UFont * GetSmallFont() { return NativeCall<UFont*>(nullptr, "UEngine.GetSmallFont"); }
	bool InitializeAudioDevice() { return NativeCall<bool>(this, "UEngine.InitializeAudioDevice"); }
	bool UseSound() { return NativeCall<bool>(this, "UEngine.UseSound"); }
	bool InitializeHMDDevice() { return NativeCall<bool>(this, "UEngine.InitializeHMDDevice"); }
	void RecordHMDAnalytics() { NativeCall<void>(this, "UEngine.RecordHMDAnalytics"); }
	bool IsSplitScreen(UWorld * InWorld) { return NativeCall<bool, UWorld*>(this, "UEngine.IsSplitScreen", InWorld); }
	ULocalPlayer * GetLocalPlayerFromControllerId(UGameViewportClient * InViewport, int ControllerId) { return NativeCall<ULocalPlayer*, UGameViewportClient*, int>(this, "UEngine.GetLocalPlayerFromControllerId", InViewport, ControllerId); }
	ULocalPlayer * GetLocalPlayerFromControllerId(UWorld * InWorld, int ControllerId) { return NativeCall<ULocalPlayer*, UWorld*, int>(this, "UEngine.GetLocalPlayerFromControllerId", InWorld, ControllerId); }
	void SwapControllerId(ULocalPlayer * NewPlayer, int CurrentControllerId, int NewControllerID) { NativeCall<void, ULocalPlayer*, int, int>(this, "UEngine.SwapControllerId", NewPlayer, CurrentControllerId, NewControllerID); }
	APlayerController * GetFirstLocalPlayerController(UWorld * InWorld) { return NativeCall<APlayerController*, UWorld*>(this, "UEngine.GetFirstLocalPlayerController", InWorld); }
	void GetAllLocalPlayerControllers(TArray<APlayerController*> * PlayerList) { NativeCall<void, TArray<APlayerController*>*>(this, "UEngine.GetAllLocalPlayerControllers", PlayerList); }
	void OnLostFocusPause(bool EnablePause) { NativeCall<void, bool>(this, "UEngine.OnLostFocusPause", EnablePause); }
	void TickHardwareSurvey() { NativeCall<void>(this, "UEngine.TickHardwareSurvey"); }
	static FString * HardwareSurveyBucketRAM(FString * result, unsigned int MemoryMB) { return NativeCall<FString*, FString*, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketRAM", result, MemoryMB); }
	static FString * HardwareSurveyBucketVRAM(FString * result, unsigned int VidMemoryMB) { return NativeCall<FString*, FString*, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketVRAM", result, VidMemoryMB); }
	static FString * HardwareSurveyBucketResolution(FString * result, unsigned int DisplayWidth, unsigned int DisplayHeight) { return NativeCall<FString*, FString*, unsigned int, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketResolution", result, DisplayWidth, DisplayHeight); }
	void OnHardwareSurveyComplete(FHardwareSurveyResults * SurveyResults) { NativeCall<void, FHardwareSurveyResults*>(this, "UEngine.OnHardwareSurveyComplete", SurveyResults); }
	float GetMaxTickRate(float DeltaTime, bool bAllowFrameRateSmoothing) { return NativeCall<float, float, bool>(this, "UEngine.GetMaxTickRate", DeltaTime, bAllowFrameRateSmoothing); }
	void EnableScreenSaver(bool bEnable) { NativeCall<void, bool>(this, "UEngine.EnableScreenSaver", bEnable); }
	static FGuid * GetPackageGuid(FGuid * result, FName PackageName) { return NativeCall<FGuid*, FGuid*, FName>(nullptr, "UEngine.GetPackageGuid", result, PackageName); }
	void PerformanceCapture(FString * CaptureName) { NativeCall<void, FString*>(this, "UEngine.PerformanceCapture", CaptureName); }
	void WorldAdded(UWorld * InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldAdded", InWorld); }
	void WorldDestroyed(UWorld * InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldDestroyed", InWorld); }
	UWorld * GetWorldFromContextObject(UObject * Object, bool bChecked) { return NativeCall<UWorld*, UObject*, bool>(this, "UEngine.GetWorldFromContextObject", Object, bChecked); }
	TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int> * GetLocalPlayerIterator(TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int> * result, UWorld * World) { return NativeCall<TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int>*, TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int>*, UWorld*>(this, "UEngine.GetLocalPlayerIterator", result, World); }
	TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int> * GetLocalPlayerIterator(TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int> * result, UGameViewportClient * Viewport) { return NativeCall<TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int>*, TIndexedContainerIterator<TArray<ULocalPlayer*> const ,ULocalPlayer* const,int>*, UGameViewportClient*>(this, "UEngine.GetLocalPlayerIterator", result, Viewport); }
	TArray<ULocalPlayer*> * GetGamePlayers(UWorld * World) { return NativeCall<TArray<ULocalPlayer*>*, UWorld*>(this, "UEngine.GetGamePlayers", World); }
	TArray<ULocalPlayer*> * GetGamePlayers(UGameViewportClient * Viewport) { return NativeCall<TArray<ULocalPlayer*>*, UGameViewportClient*>(this, "UEngine.GetGamePlayers", Viewport); }
	ULocalPlayer * FindFirstLocalPlayerFromControllerId(int ControllerId) { return NativeCall<ULocalPlayer*, int>(this, "UEngine.FindFirstLocalPlayerFromControllerId", ControllerId); }
	int GetNumGamePlayers(UWorld * InWorld) { return NativeCall<int, UWorld*>(this, "UEngine.GetNumGamePlayers", InWorld); }
	ULocalPlayer * GetFirstGamePlayer(UWorld * InWorld) { return NativeCall<ULocalPlayer*, UWorld*>(this, "UEngine.GetFirstGamePlayer", InWorld); }
	ULocalPlayer * GetFirstGamePlayer(UPendingNetGame * PendingNetGame) { return NativeCall<ULocalPlayer*, UPendingNetGame*>(this, "UEngine.GetFirstGamePlayer", PendingNetGame); }
	ULocalPlayer * GetDebugLocalPlayer() { return NativeCall<ULocalPlayer*>(this, "UEngine.GetDebugLocalPlayer"); }
	bool CreateNamedNetDriver(UWorld * InWorld, FName NetDriverName, FName NetDriverDefinition) { return NativeCall<bool, UWorld*, FName, FName>(this, "UEngine.CreateNamedNetDriver", InWorld, NetDriverName, NetDriverDefinition); }
	void DestroyNamedNetDriver(UWorld * InWorld, FName NetDriverName) { NativeCall<void, UWorld*, FName>(this, "UEngine.DestroyNamedNetDriver", InWorld, NetDriverName); }
	void SpawnServerActors(UWorld * World) { NativeCall<void, UWorld*>(this, "UEngine.SpawnServerActors", World); }
	bool MakeSureMapNameIsValid(FString * InOutMapName) { return NativeCall<bool, FString*>(this, "UEngine.MakeSureMapNameIsValid", InOutMapName); }
	void CancelPending(FWorldContext * Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPending", Context); }
	void CancelPending(UWorld * InWorld, UPendingNetGame * NewPendingNetGame) { NativeCall<void, UWorld*, UPendingNetGame*>(this, "UEngine.CancelPending", InWorld, NewPendingNetGame); }
	void CancelAllPending() { NativeCall<void>(this, "UEngine.CancelAllPending"); }
	void BrowseToDefaultMap(FWorldContext * Context) { NativeCall<void, FWorldContext*>(this, "UEngine.BrowseToDefaultMap", Context); }
	bool TickWorldTravel(FWorldContext * Context, float DeltaSeconds) { return NativeCall<bool, FWorldContext*, float>(this, "UEngine.TickWorldTravel", Context, DeltaSeconds); }
	void TriggerPostLoadMapEvents() { NativeCall<void>(this, "UEngine.TriggerPostLoadMapEvents"); }
	void CancelPendingMapChange(FWorldContext * Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPendingMapChange", Context); }
	void ClearDebugDisplayProperties() { NativeCall<void>(this, "UEngine.ClearDebugDisplayProperties"); }
	void MovePendingLevel(FWorldContext * Context) { NativeCall<void, FWorldContext*>(this, "UEngine.MovePendingLevel", Context); }
	void UpdateTransitionType(UWorld * CurrentWorld) { NativeCall<void, UWorld*>(this, "UEngine.UpdateTransitionType", CurrentWorld); }
	FWorldContext * CreateNewWorldContext(EWorldType::Type WorldType) { return NativeCall<FWorldContext*, EWorldType::Type>(this, "UEngine.CreateNewWorldContext", WorldType); }
	FWorldContext * GetWorldContextFromHandleChecked(FName WorldContextHandle) { return NativeCall<FWorldContext*, FName>(this, "UEngine.GetWorldContextFromHandleChecked", WorldContextHandle); }
	FWorldContext * GetWorldContextFromWorld(UWorld * InWorld) { return NativeCall<FWorldContext*, UWorld*>(this, "UEngine.GetWorldContextFromWorld", InWorld); }
	FWorldContext * GetWorldContextFromWorldChecked(UWorld * InWorld) { return NativeCall<FWorldContext*, UWorld*>(this, "UEngine.GetWorldContextFromWorldChecked", InWorld); }
	void DestroyWorldContext(UWorld * InWorld) { NativeCall<void, UWorld*>(this, "UEngine.DestroyWorldContext", InWorld); }
	void VerifyLoadMapWorldCleanup() { NativeCall<void>(this, "UEngine.VerifyLoadMapWorldCleanup"); }
	bool PrepareMapChange(FWorldContext * Context, TArray<FName> * LevelNames) { return NativeCall<bool, FWorldContext*, TArray<FName>*>(this, "UEngine.PrepareMapChange", Context, LevelNames); }
	void ConditionalCommitMapChange(FWorldContext * Context) { NativeCall<void, FWorldContext*>(this, "UEngine.ConditionalCommitMapChange", Context); }
	bool CommitMapChange(FWorldContext * Context) { return NativeCall<bool, FWorldContext*>(this, "UEngine.CommitMapChange", Context); }
	FSeamlessTravelHandler * SeamlessTravelHandlerForWorld(UWorld * World) { return NativeCall<FSeamlessTravelHandler*, UWorld*>(this, "UEngine.SeamlessTravelHandlerForWorld", World); }
	void CreateGameUserSettings() { NativeCall<void>(this, "UEngine.CreateGameUserSettings"); }
	UGameUserSettings * GetGameUserSettings() { return NativeCall<UGameUserSettings*>(this, "UEngine.GetGameUserSettings"); }
	bool ShouldAbsorbAuthorityOnlyEvent() { return NativeCall<bool>(this, "UEngine.ShouldAbsorbAuthorityOnlyEvent"); }
	bool ShouldAbsorbCosmeticOnlyEvent() { return NativeCall<bool>(this, "UEngine.ShouldAbsorbCosmeticOnlyEvent"); }
	bool IsEngineStat(FString * InName) { return NativeCall<bool, FString*>(this, "UEngine.IsEngineStat", InName); }
	void RenderEngineStats(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int LHSX, int* InOutLHSY, int RHSX, int* InOutRHSY, FVector * ViewLocation, FRotator * ViewRotation) { NativeCall<void, UWorld*, FViewport*, FCanvas*, int, int*, int, int*, FVector*, FRotator*>(this, "UEngine.RenderEngineStats", World, Viewport, Canvas, LHSX, InOutLHSY, RHSX, InOutRHSY, ViewLocation, ViewRotation); }
	int RenderStatFPS(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatFPS", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatTexture(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatTexture", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatHitches(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatHitches", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatSummary(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatSummary", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatNamedEvents(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatNamedEvents", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatColorList(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatColorList", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatLevels(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatLevels", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatUnit(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatUnit", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatSounds(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatSounds", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatAI(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, FVector * ViewLocation, FRotator * ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatAI", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
};

struct UPrimalGlobals : UObject
{
	UPrimalGameData* PrimalGameDataField() { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameData"); }
	UPrimalGameData* PrimalGameDataOverrideField() { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameDataOverride"); }
	TSubclassOf<UUI_GenericConfirmationDialog>& GlobalGenericConfirmationDialogField() { return *GetNativePointerField<TSubclassOf<UUI_GenericConfirmationDialog>*>(this, "UPrimalGlobals.GlobalGenericConfirmationDialog"); }
	bool& bAllowSingleplayerField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowSingleplayer"); }
	bool& bAllowNonDedicatedHostField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowNonDedicatedHost"); }
	TArray<FString>& UIOnlyShowMapFileNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGlobals.UIOnlyShowMapFileNames"); }
	TArray<FString>& UIOnlyShowModIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGlobals.UIOnlyShowModIDs"); }
	bool& bTotalConversionShowUnofficialServersField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bTotalConversionShowUnofficialServers"); }
	FString& CreditStringField() { return *GetNativePointerField<FString*>(this, "UPrimalGlobals.CreditString"); }
	FLinearColor& AlphaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.AlphaMissionColor"); }
	FLinearColor& BetaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.BetaMissionColor"); }
	FLinearColor& GammaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.GammaMissionColor"); }
	FLinearColor& MissionCompleteMultiUseWheelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.MissionCompleteMultiUseWheelTextColor"); }
	bool& bGameMediaLoadedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bGameMediaLoaded"); }
	bool& bStartedAsyncLoadField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bStartedAsyncLoad"); }
	FStreamableManager& StreamableManagerField() { return *GetNativePointerField<FStreamableManager*>(this, "UPrimalGlobals.StreamableManager"); }

	// Functions

	void AsyncLoadGameMedia() { NativeCall<void>(this, "UPrimalGlobals.AsyncLoadGameMedia"); }
	void FinishLoadGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishLoadGameMedia"); }
	void FinishedLoadingGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishedLoadingGameMedia"); }
	void LoadNextTick(UWorld* ForWorld) { NativeCall<void, UWorld*>(this, "UPrimalGlobals.LoadNextTick", ForWorld); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalGlobals.OnConfirmationDialogClosed", bAccept); }
	static ADayCycleManager* GetDayCycleManager(UWorld* World) { return NativeCall<ADayCycleManager*, UWorld*>(nullptr, "UPrimalGlobals.GetDayCycleManager", World); }
	static ASOTFNotification* GetSOTFNotificationManager(UWorld* World) { return NativeCall<ASOTFNotification*, UWorld*>(nullptr, "UPrimalGlobals.GetSOTFNotificationManager", World); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalGlobals.StaticClass"); }
	static void StaticRegisterNativesUPrimalGlobals() { NativeCall<void>(nullptr, "UPrimalGlobals.StaticRegisterNativesUPrimalGlobals"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UPrimalGlobals.GetPrivateStaticClass", Package); }
};


// Level

struct ULevelBase
{
	TArray<AActor *> GetActorsField() const { return GetNativeField<TArray<AActor *>>(this, "ULevelBase.Actors"); }
};

struct ULevel : ULevelBase
{
};

// Game Mode

struct AGameMode
{
	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameMode.MatchState"); }
	FString& OptionsStringField() { return *GetNativePointerField<FString*>(this, "AGameMode.OptionsString"); }
	TSubclassOf<APawn>& DefaultPawnClassField() { return *GetNativePointerField<TSubclassOf<APawn>*>(this, "AGameMode.DefaultPawnClass"); }
	TSubclassOf<AHUD>& HUDClassField() { return *GetNativePointerField<TSubclassOf<AHUD>*>(this, "AGameMode.HUDClass"); }
	int& NumSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumSpectators"); }
	int& NumPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumPlayers"); }
	int& NumBotsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumBots"); }
	float& MinRespawnDelayField() { return *GetNativePointerField<float*>(this, "AGameMode.MinRespawnDelay"); }
	AGameSession* GameSessionField() { return *GetNativePointerField<AGameSession**>(this, "AGameMode.GameSession"); }
	int& NumTravellingPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumTravellingPlayers"); }
	int& CurrentIDField() { return *GetNativePointerField<int*>(this, "AGameMode.CurrentID"); }
	FString& DefaultPlayerNameField() { return *GetNativePointerField<FString*>(this, "AGameMode.DefaultPlayerName"); }
	TArray<APlayerStart*> PlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*>*>(this, "AGameMode.PlayerStarts"); }
	TSubclassOf<APlayerController>& PlayerControllerClassField() { return *GetNativePointerField<TSubclassOf<APlayerController>*>(this, "AGameMode.PlayerControllerClass"); }
	TSubclassOf<ASpectatorPawn>& SpectatorClassField() { return *GetNativePointerField<TSubclassOf<ASpectatorPawn>*>(this, "AGameMode.SpectatorClass"); }
	TSubclassOf<APlayerState>& PlayerStateClassField() { return *GetNativePointerField<TSubclassOf<APlayerState>*>(this, "AGameMode.PlayerStateClass"); }
	TSubclassOf<AGameState>& GameStateClassField() { return *GetNativePointerField<TSubclassOf<AGameState>*>(this, "AGameMode.GameStateClass"); }
	AGameState* GameStateField() { return *GetNativePointerField<AGameState**>(this, "AGameMode.GameState"); }
	TArray<APlayerState*> InactivePlayerArrayField() { return *GetNativePointerField<TArray<APlayerState*>*>(this, "AGameMode.InactivePlayerArray"); }
	UAntiDupeTransactionLog* AntiDupeTransactionLogField() { return *GetNativePointerField<UAntiDupeTransactionLog**>(this, "AGameMode.AntiDupeTransactionLog"); }
	float& InactivePlayerStateLifeSpanField() { return *GetNativePointerField<float*>(this, "AGameMode.InactivePlayerStateLifeSpan"); }
	TArray<APlayerStart*> UsedPlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*>*>(this, "AGameMode.UsedPlayerStarts"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bUseSeamlessTravel() { return { this, "AGameMode.bUseSeamlessTravel" }; }
	BitFieldValue<bool, unsigned __int32> bPauseable() { return { this, "AGameMode.bPauseable" }; }
	BitFieldValue<bool, unsigned __int32> bStartPlayersAsSpectators() { return { this, "AGameMode.bStartPlayersAsSpectators" }; }
	BitFieldValue<bool, unsigned __int32> bDelayedStart() { return { this, "AGameMode.bDelayedStart" }; }

	// Functions

	FName* GetMatchState(FName* result) { return NativeCall<FName*, FName*>(this, "AGameMode.GetMatchState", result); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AGameMode.StaticClass"); }
	static const wchar_t* StaticConfigName() { return NativeCall<const wchar_t*>(nullptr, "AGameMode.StaticConfigName"); }
	FString* GetNetworkNumber(FString* result) { return NativeCall<FString*, FString*>(this, "AGameMode.GetNetworkNumber", result); }
	void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) { NativeCall<void, APlayerController*, APlayerController*>(this, "AGameMode.SwapPlayerControllers", OldPC, NewPC); }
	void ForceClearUnpauseDelegates(AActor* PauseActor) { NativeCall<void, AActor*>(this, "AGameMode.ForceClearUnpauseDelegates", PauseActor); }
	void InitGame(FString* MapName, FString* Options, FString* ErrorMessage) { NativeCall<void, FString*, FString*, FString*>(this, "AGameMode.InitGame", MapName, Options, ErrorMessage); }
	void RestartGame() { NativeCall<void>(this, "AGameMode.RestartGame"); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameMode.ReturnToMainMenuHost"); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.PostLogin", NewPlayer); }
	bool ShouldStartInCinematicMode(bool* OutHidePlayer, bool* OutHideHUD, bool* OutDisableMovement, bool* OutDisableTurning) { return NativeCall<bool, bool*, bool*, bool*, bool*>(this, "AGameMode.ShouldStartInCinematicMode", OutHidePlayer, OutHideHUD, OutDisableMovement, OutDisableTurning); }
	void SetPlayerDefaults(APawn* PlayerPawn) { NativeCall<void, APawn*>(this, "AGameMode.SetPlayerDefaults", PlayerPawn); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AGameMode.Logout", Exiting); }
	void InitGameState() { NativeCall<void>(this, "AGameMode.InitGameState"); }
	AActor* FindPlayerStart(AController* Player, FString* IncomingName) { return NativeCall<AActor*, AController*, FString*>(this, "AGameMode.FindPlayerStart", Player, IncomingName); }
	void PreInitializeComponents() { NativeCall<void>(this, "AGameMode.PreInitializeComponents"); }
	void RestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AGameMode.RestartPlayer", NewPlayer); }
	void StartPlay() { NativeCall<void>(this, "AGameMode.StartPlay"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameMode.HandleMatchIsWaitingToStart"); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch"); }
	void StartMatch() { NativeCall<void>(this, "AGameMode.StartMatch"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameMode.HandleMatchHasStarted"); }
	void EndMatch() { NativeCall<void>(this, "AGameMode.EndMatch"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameMode.HandleMatchHasEnded"); }
	void StartToLeaveMap() { NativeCall<void>(this, "AGameMode.StartToLeaveMap"); }
	void AbortMatch() { NativeCall<void>(this, "AGameMode.AbortMatch"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameMode.HasMatchStarted"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameMode.IsMatchInProgress"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameMode.HasMatchEnded"); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>(this, "AGameMode.SetMatchState", NewState); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AGameMode.Tick", DeltaSeconds); }
	void ResetLevel() { NativeCall<void>(this, "AGameMode.ResetLevel"); }
	void HandleSeamlessTravelPlayer(AController** C) { NativeCall<void, AController**>(this, "AGameMode.HandleSeamlessTravelPlayer", C); }
	void SetSeamlessTravelViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.SetSeamlessTravelViewTarget", PC); }
	void ProcessServerTravel(FString* URL, bool bAbsolute) { NativeCall<void, FString*, bool>(this, "AGameMode.ProcessServerTravel", URL, bAbsolute); }
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*>* ActorList) { NativeCall<void, bool, TArray<AActor*>*>(this, "AGameMode.GetSeamlessTravelActorList", bToEntry, ActorList); }
	void SetBandwidthLimit(float AsyncIOBandwidthLimit) { NativeCall<void, float>(this, "AGameMode.SetBandwidthLimit", AsyncIOBandwidthLimit); }
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, TSharedPtr<FUniqueNetId, 0>* UniqueId, FString* Options, FString* Portal) { return NativeCall<FString*, FString*, APlayerController*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*>(this, "AGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	bool MustSpectate(APlayerController* NewPlayerController) { return NativeCall<bool, APlayerController*>(this, "AGameMode.MustSpectate", NewPlayerController); }
	APlayerController* Login(UPlayer* NewPlayer, FString* Portal, FString* Options, TSharedPtr<FUniqueNetId, 0>* UniqueId, FString* ErrorMessage) { return NativeCall<APlayerController*, UPlayer*, FString*, FString*, TSharedPtr<FUniqueNetId, 0>*, FString*>(this, "AGameMode.Login", NewPlayer, Portal, Options, UniqueId, ErrorMessage); }
	void Reset() { NativeCall<void>(this, "AGameMode.Reset"); }
	void RemovePlayerControllerFromPlayerCount(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.RemovePlayerControllerFromPlayerCount", PC); }
	int GetNumPlayers() { return NativeCall<int>(this, "AGameMode.GetNumPlayers"); }
	void ClearPause() { NativeCall<void>(this, "AGameMode.ClearPause"); }
	bool GrabOption(FString* Options, FString* Result) { return NativeCall<bool, FString*, FString*>(this, "AGameMode.GrabOption", Options, Result); }
	void GetKeyValue(FString* Pair, FString* Key, FString* Value) { NativeCall<void, FString*, FString*, FString*>(this, "AGameMode.GetKeyValue", Pair, Key, Value); }
	FString* ParseOption(FString* result, FString* Options, FString* InKey) { return NativeCall<FString*, FString*, FString*, FString*>(this, "AGameMode.ParseOption", result, Options, InKey); }
	bool HasOption(FString* Options, FString* InKey) { return NativeCall<bool, FString*, FString*>(this, "AGameMode.HasOption", Options, InKey); }
	int GetIntOption(FString* Options, FString* ParseString, int CurrentValue) { return NativeCall<int, FString*, FString*, int>(this, "AGameMode.GetIntOption", Options, ParseString, CurrentValue); }
	FString* GetDefaultGameClassPath(FString* result, FString* MapName, FString* Options, FString* Portal) { return NativeCall<FString*, FString*, FString*, FString*, FString*>(this, "AGameMode.GetDefaultGameClassPath", result, MapName, Options, Portal); }
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result) { return NativeCall<TSubclassOf<AGameSession>*, TSubclassOf<AGameSession>*>(this, "AGameMode.GetGameSessionClass", result); }
	APlayerController* ProcessClientTravel(FString* FURL, FGuid NextMapGuid, bool bSeamless, bool bAbsolute) { return NativeCall<APlayerController*, FString*, FGuid, bool, bool>(this, "AGameMode.ProcessClientTravel", FURL, NextMapGuid, bSeamless, bAbsolute); }
	void PreLogin(FString* Options, FString* Address, TSharedPtr<FUniqueNetId, 0>* UniqueId, FString* authToken, FString* ErrorMessage) { NativeCall<void, FString*, FString*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*>(this, "AGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage); }
	void RemoveConnectedPlayer(TSharedPtr<FUniqueNetId, 0>* UniqueNetId) { NativeCall<void, TSharedPtr<FUniqueNetId, 0>*>(this, "AGameMode.RemoveConnectedPlayer", UniqueNetId); }
	APlayerController* SpawnPlayerController(FVector* SpawnLocation, FRotator* SpawnRotation) { return NativeCall<APlayerController*, FVector*, FRotator*>(this, "AGameMode.SpawnPlayerController", SpawnLocation, SpawnRotation); }
	TSubclassOf<UObject>* GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject>* result, AController* InController) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, AController*>(this, "AGameMode.GetDefaultPawnClassForController_Implementation", result, InController); }
	APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AGameMode.SpawnDefaultPawnFor", NewPlayer, StartSpot); }
	void GenericPlayerInitialization(AController* C) { NativeCall<void, AController*>(this, "AGameMode.GenericPlayerInitialization", C); }
	void StartNewPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.StartNewPlayer", NewPlayer); }
	void ChangeName(AController* Other, FString* S, bool bNameChange) { NativeCall<void, AController*, FString*, bool>(this, "AGameMode.ChangeName", Other, S, bNameChange); }
	void SendPlayer(APlayerController* aPlayer, FString* FURL) { NativeCall<void, APlayerController*, FString*>(this, "AGameMode.SendPlayer", aPlayer, FURL); }
	void Broadcast(AActor* Sender, FString* Msg, FName Type) { NativeCall<void, AActor*, FString*, FName>(this, "AGameMode.Broadcast", Sender, Msg, Type); }
	bool ShouldSpawnAtStartSpot_Implementation(AController* Player) { return NativeCall<bool, AController*>(this, "AGameMode.ShouldSpawnAtStartSpot_Implementation", Player); }
	void AddPlayerStart(APlayerStart* NewPlayerStart) { NativeCall<void, APlayerStart*>(this, "AGameMode.AddPlayerStart", NewPlayerStart); }
	void RemovePlayerStart(APlayerStart* RemovedPlayerStart) { NativeCall<void, APlayerStart*>(this, "AGameMode.RemovePlayerStart", RemovedPlayerStart); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameMode.ChoosePlayerStart_Implementation", Player); }
	bool PlayerCanRestart(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameMode.PlayerCanRestart", Player); }
	void UpdateGameplayMuteList(APlayerController* aPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.UpdateGameplayMuteList", aPlayer); }
	bool AllowPausing(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameMode.AllowPausing", PC); }
	void AddInactivePlayer(APlayerState* PlayerState, APlayerController* PC) { NativeCall<void, APlayerState*, APlayerController*>(this, "AGameMode.AddInactivePlayer", PlayerState, PC); }
	bool FindInactivePlayer(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameMode.FindInactivePlayer", PC); }
	void OverridePlayerState(APlayerController* PC, APlayerState* OldPlayerState) { NativeCall<void, APlayerController*, APlayerState*>(this, "AGameMode.OverridePlayerState", PC, OldPlayerState); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameMode.PostSeamlessTravel"); }
	static FString* StaticGetFullGameClassName(FString* result, FString* Str) { return NativeCall<FString*, FString*, FString*>(nullptr, "AGameMode.StaticGetFullGameClassName", result, Str); }
	static void StaticRegisterNativesAGameMode() { NativeCall<void>(nullptr, "AGameMode.StaticRegisterNativesAGameMode"); }
	AActor* ChoosePlayerStart(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameMode.ChoosePlayerStart", Player); }
	TSubclassOf<UObject>* GetDefaultPawnClassForController(TSubclassOf<UObject>* result, AController* InController) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, AController*>(this, "AGameMode.GetDefaultPawnClassForController", result, InController); }
	void K2_PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.K2_PostLogin", NewPlayer); }
};

struct AShooterGameMode : AGameMode
{
	int& LastRepopulationIndexToCheckField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastRepopulationIndexToCheck"); }
	FString& AlarmNotificationKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationKey"); }
	FString& AlarmNotificationURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationURL"); }
	TArray<TWeakObjectPtr<APrimalStructure>>& PendingStructureDestroysField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalStructure>>*>(this, "AShooterGameMode.PendingStructureDestroys"); }
	TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>& AllowedAdminIPsField() { return *GetNativePointerField<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.AllowedAdminIPs"); }
	FString& BanFileNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BanFileName"); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >& BannedMapField() { return *GetNativePointerField<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.BannedMap"); }
	long double& LastTimeCheckedForSaveBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeCheckedForSaveBackup"); }
	int& LastDayOfYearBackedUpField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastDayOfYearBackedUp"); }
	long double& TimeLastStartedDoingRemoteBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.TimeLastStartedDoingRemoteBackup"); }
	bool& InitiatedArkTributeAvailabilityCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.InitiatedArkTributeAvailabilityCheck"); }
	URCONServer* RCONSocketField() { return *GetNativePointerField<URCONServer**>(this, "AShooterGameMode.RCONSocket"); }
	FString& PlayersJoinNoCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersJoinNoCheckFilename"); }
	FString& PlayersExclusiveCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersExclusiveCheckFilename"); }
	UShooterCheatManager* GlobalCommandsCheatManagerField() { return *GetNativePointerField<UShooterCheatManager**>(this, "AShooterGameMode.GlobalCommandsCheatManager"); }
	long double& LastUpdatedLoginLocksTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastUpdatedLoginLocksTime"); }
	long double& LastLoginLocksConnectedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastLoginLocksConnectedTime"); }
	FString& CheckGlobalEnablesURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CheckGlobalEnablesURL"); }
	int& TerrainGeneratorVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TerrainGeneratorVersion"); }
	TArray<FUniqueNetIdUInt64>& PlayersJoinNoCheckField() { return *GetNativePointerField<TArray<FUniqueNetIdUInt64>*>(this, "AShooterGameMode.PlayersJoinNoCheck"); }
	TArray<FUniqueNetIdUInt64>& PlayersExclusiveListField() { return *GetNativePointerField<TArray<FUniqueNetIdUInt64>*>(this, "AShooterGameMode.PlayersExclusiveList"); }
	void* GameBackupPipeReadField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeRead"); }
	void* GameBackupPipeWriteField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeWrite"); }
	TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>& TribesIdsField() { return *GetNativePointerField<TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.TribesIds"); }
	TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, unsigned __int64, 0> >& PlayersIdsField() { return *GetNativePointerField<TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, unsigned __int64, 0> >*>(this, "AShooterGameMode.PlayersIds"); }
	TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, int, 0> >& SteamIdsField() { return *GetNativePointerField<TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, int, 0> >*>(this, "AShooterGameMode.SteamIds"); }
	bool& bGlobalDisableLoginLockCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGlobalDisableLoginLockCheck"); }
	bool& bTempDisableLoginLockCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTempDisableLoginLockCheck"); }
	FString& MyServerIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.MyServerId"); }
	TArray<FString>& PendingLoginLockReleasesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.PendingLoginLockReleases"); }
	TMap<FString, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, double, 0> >& ActiveProfilesSavingField() { return *GetNativePointerField<TMap<FString, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, double, 0> >*>(this, "AShooterGameMode.ActiveProfilesSaving"); }
	FString& LaunchOptionsField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LaunchOptions"); }
	TArray<FTribeData>& TribesDataField() { return *GetNativePointerField<TArray<FTribeData>*>(this, "AShooterGameMode.TribesData"); }
	FString& PGMapNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PGMapName"); }
	FString& PGTerrainPropertiesStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PGTerrainPropertiesString"); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >& PGTerrainPropertiesField() { return *GetNativePointerField<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.PGTerrainProperties"); }
	bool& bAutoCreateNewPlayerDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoCreateNewPlayerData"); }
	bool& bIsRestartingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsRestarting"); }
	bool& bProximityVoiceChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityVoiceChat"); }
	bool& bProximityChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityChat"); }
	bool& bAutoRestoreBackupsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoRestoreBackups"); }
	float& DifficultyValueField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValue"); }
	float& DifficultyValueMinField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMin"); }
	float& DifficultyValueMaxField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMax"); }
	float& ProximityRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadius"); }
	float& ProximityRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadiusUnconsiousScale"); }
	float& YellingRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.YellingRadius"); }
	float& WhisperRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WhisperRadius"); }
	unsigned int& VivoxAttenuationModelField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.VivoxAttenuationModel"); }
	float& VivoxMinDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.VivoxMinDistance"); }
	float& VivoxRolloffField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.VivoxRolloff"); }
	TSubclassOf<UCheatManager>& CheatClassField() { return *GetNativePointerField<TSubclassOf<UCheatManager>*>(this, "AShooterGameMode.CheatClass"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsOfficialServer"); }
	bool& bIsConsoleUnOfficialPCServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsConsoleUnOfficialPCServer"); }
	bool& bServerAllowArkDownloadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowArkDownload"); }
	bool& bServerAllowThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowThirdPersonPlayer"); }
	bool& bUseExclusiveListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseExclusiveList"); }
	bool& bAlwaysNotifyPlayerLeftField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerLeft"); }
	bool& bAlwaysNotifyPlayerJoinedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerJoined"); }
	bool& bServerHardcoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerHardcore"); }
	bool& bServerPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerPVE"); }
	bool& bServerCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerCrosshair"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerForceNoHUD"); }
	bool& bMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bMapPlayerLocation"); }
	bool& bAllowFlyerCarryPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerCarryPvE"); }
	bool& bDisableStructureDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructureDecayPvE"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayPvE"); }
	bool& bEnablePvPGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePvPGamma"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisablePvEGamma"); }
	bool& bClampResourceHarvestDamageField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampResourceHarvestDamage"); }
	bool& bPreventStructurePaintingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventStructurePainting"); }
	bool& bAllowCaveBuildingPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvE"); }
	bool& bAllowCaveBuildingPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvP"); }
	bool& bAdminLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAdminLogging"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPStructureDecay"); }
	bool& bAutoDestroyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyStructures"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllStructureLocking"); }
	bool& bAllowDeprecatedStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDeprecatedStructures"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventTribeAlliances"); }
	bool& bAllowHitMarkersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHitMarkers"); }
	bool& bOnlyAutoDestroyCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAutoDestroyCoreStructures"); }
	bool& bPreventMateBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventMateBoost"); }
	bool& bTribeLogDestroyedEnemyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeLogDestroyedEnemyStructures"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowStructuresAtSupplyDrops"); }
	bool& bServerGameLogIncludeTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogIncludeTribeLogs"); }
	bool& bServerRCONOutputTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerRCONOutputTribeLogs"); }
	bool& bUseOptimizedHarvestingHealthField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOptimizedHarvestingHealth"); }
	bool& bClampItemSpoilingTimesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemSpoilingTimes"); }
	bool& bClampItemStatsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemStats"); }
	bool& bAutoDestroyDecayedDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyDecayedDinos"); }
	bool& bAllowMultipleAttachedC4Field() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowMultipleAttachedC4"); }
	bool& bAllowFlyingStaminaRecoveryField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyingStaminaRecovery"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCrossARKAllowForeignDinoDownloads"); }
	bool& bPreventSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventSpawnAnimations"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLegacyServer"); }
	bool& bIdlePlayerKickAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIdlePlayerKickAllowed"); }
	bool& bEnableVictoryCoreDupeCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableVictoryCoreDupeCheck"); }
	bool& bIgnoreLimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnoreLimitMaxStructuresInRangeTypeFlag"); }
	bool& bEnableOfficialOnlyVersioningCodeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableOfficialOnlyVersioningCode"); }
	bool& bEnableCryopodNerfField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryopodNerf"); }
	int& TheMaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TheMaxStructuresInRange"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresInSmallRadius"); }
	bool& bEnableCryoSicknessPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryoSicknessPVE"); }
	float& CryopodNerfDamageMultField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDamageMult"); }
	float& CryopodNerfDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDuration"); }
	bool& bEnableMeshBitingProtectionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableMeshBitingProtection"); }
	float& CryopodNerfIncomingDamageMultPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfIncomingDamageMultPercent"); }
	int& RCONPortField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.RCONPort"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayCycleSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.NightTimeSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayTimeSpeedScale"); }
	float& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEStructureDecayPeriodMultiplier"); }
	float& StructurePreventResourceRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePreventResourceRadiusMultiplier"); }
	float& PvEDinoDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEDinoDecayPeriodMultiplier"); }
	float& ResourcesRespawnPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourcesRespawnPeriodMultiplier"); }
	float& MaxTamedDinosField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxTamedDinos"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ListenServerTetherDistanceMultiplier"); }
	float& PerPlatformMaxStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PerPlatformMaxStructuresMultiplier"); }
	float& AutoDestroyOldStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoDestroyOldStructuresMultiplier"); }
	float& RCONServerGameLogBufferField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RCONServerGameLogBuffer"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OxygenSwimSpeedStatMultiplier"); }
	float& ServerAutoForceRespawnWildDinosIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ServerAutoForceRespawnWildDinosInterval"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RadiusStructuresInSmallRadius"); }
	float& EnableAFKKickPlayerCountPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EnableAFKKickPlayerCountPercent"); }
	float& KickIdlePlayersPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KickIdlePlayersPeriod"); }
	float& MateBoostEffectMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MateBoostEffectMultiplier"); }
	float& AutoSavePeriodMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoSavePeriodMinutes"); }
	float& XPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.XPMultiplier"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.ActiveEvent"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeNameChangeCooldown"); }
	float& PlatformSaddleBuildAreaBoundsMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlatformSaddleBuildAreaBoundsMultiplier"); }
	bool& bAlwaysAllowStructurePickupField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysAllowStructurePickup"); }
	float& StructurePickupTimeAfterPlacementField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupTimeAfterPlacement"); }
	float& StructurePickupHoldDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupHoldDuration"); }
	bool& bAllowIntegratedSPlusStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowIntegratedSPlusStructures"); }
	bool& bAllowHideDamageSourceFromLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHideDamageSourceFromLogs"); }
	float& KillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KillXPMultiplier"); }
	float& HarvestXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestXPMultiplier"); }
	float& CraftXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftXPMultiplier"); }
	float& GenericXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GenericXPMultiplier"); }
	float& SpecialXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SpecialXPMultiplier"); }
	float& RandomAutoSaveSpreadField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RandomAutoSaveSpread"); }
	FString& SteamAPIKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SteamAPIKey"); }
	FString& LastServerNotificationMessageField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastServerNotificationMessage"); }
	long double& LastServerNotificationRecievedAtField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastServerNotificationRecievedAt"); }
	long double& LastExecSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastExecSaveTime"); }
	long double& LastTimeSavedWorldField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeSavedWorld"); }
	FString& LastClaimedGameCodeField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastClaimedGameCode"); }
	TArray<FString>& ArkGameCodesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.ArkGameCodes"); }
	bool& bIsCurrentlyRequestingKeyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsCurrentlyRequestingKey"); }
	FString& SaveDirectoryNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SaveDirectoryName"); }
	TArray<UPrimalPlayerData*> PlayerDatasField() { return *GetNativePointerField<TArray<UPrimalPlayerData*>*>(this, "AShooterGameMode.PlayerDatas"); }
	int& NPCZoneManagerModField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCZoneManagerMod"); }
	bool& bPopulatingSpawnZonesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPopulatingSpawnZones"); }
	bool& bRestartedAPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRestartedAPlayer"); }
	bool& bForceRespawnDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceRespawnDinos"); }
	bool& bFirstSaveWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFirstSaveWorld"); }
	bool& bAllowRaidDinoFeedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowRaidDinoFeeding"); }
	FDateTime& LastBackupTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastBackupTime"); }
	FDateTime& LastSaveWorldTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastSaveWorldTime"); }
	float& TamedDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoDamageMultiplier"); }
	float& DinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoDamageMultiplier"); }
	float& PlayerDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerDamageMultiplier"); }
	float& StructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageMultiplier"); }
	float& PlayerResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerResistanceMultiplier"); }
	float& DinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoResistanceMultiplier"); }
	float& TamedDinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoResistanceMultiplier"); }
	float& StructureResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureResistanceMultiplier"); }
	bool& bJoinInProgressGamesAsSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bJoinInProgressGamesAsSpectator"); }
	float& TamingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamingSpeedMultiplier"); }
	float& HarvestAmountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestAmountMultiplier"); }
	float& HarvestHealthMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestHealthMultiplier"); }
	float& PlayerCharacterWaterDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterWaterDrainMultiplier"); }
	float& PlayerCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterFoodDrainMultiplier"); }
	float& DinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterFoodDrainMultiplier"); }
	float& RaidDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RaidDinoCharacterFoodDrainMultiplier"); }
	float& PlayerCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterStaminaDrainMultiplier"); }
	float& DinoCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterStaminaDrainMultiplier"); }
	float& PlayerCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterHealthRecoveryMultiplier"); }
	float& DinoCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterHealthRecoveryMultiplier"); }
	float& CarnivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivoreNaturalTargetingRangeMultiplier"); }
	float& CarnivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivorePlayerAggroMultiplier"); }
	float& HerbivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivoreNaturalTargetingRangeMultiplier"); }
	float& HerbivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivorePlayerAggroMultiplier"); }
	bool& AIForceTargetPlayersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceTargetPlayers"); }
	bool& AIForceOverlapCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceOverlapCheck"); }
	float& DinoCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCountMultiplier"); }
	bool& bDisableSaveLoadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableSaveLoad"); }
	bool& bDisableXPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableXP"); }
	bool& bDisableDynamicMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDynamicMusic"); }
	TArray<FPlayerDeathReason>& PlayerDeathReasonsField() { return *GetNativePointerField<TArray<FPlayerDeathReason>*>(this, "AShooterGameMode.PlayerDeathReasons"); }
	TArray<FLevelExperienceRamp>& LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp>*>(this, "AShooterGameMode.LevelExperienceRampOverrides"); }
	TArray<int>& OverridePlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.OverridePlayerLevelEngramPoints"); }
	TArray<int>& ExcludeItemIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.ExcludeItemIndices"); }
	TArray<FEngramEntryOverride>& OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameMode.OverrideEngramEntries"); }
	TArray<FEngramEntryOverride>& OverrideNamedEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameMode.OverrideNamedEngramEntries"); }
	TArray<FEngramEntryAutoUnlock>& EngramEntryAutoUnlocksField() { return *GetNativePointerField<TArray<FEngramEntryAutoUnlock>*>(this, "AShooterGameMode.EngramEntryAutoUnlocks"); }
	TArray<FString>& PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.PreventDinoTameClassNames"); }
	TArray<FDinoSpawnWeightMultiplier>& DinoSpawnWeightMultipliersField() { return *GetNativePointerField<TArray<FDinoSpawnWeightMultiplier>*>(this, "AShooterGameMode.DinoSpawnWeightMultipliers"); }
	TArray<FClassMultiplier>& DinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.DinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier>& TamedDinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.TamedDinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier>& DinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.DinoClassDamageMultipliers"); }
	TArray<FClassMultiplier>& TamedDinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.TamedDinoClassDamageMultipliers"); }
	TArray<FClassMultiplier>& HarvestResourceItemAmountClassMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.HarvestResourceItemAmountClassMultipliers"); }
	TArray<FClassNameReplacement>& NPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement>*>(this, "AShooterGameMode.NPCReplacements"); }
	float& PvPZoneStructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvPZoneStructureDamageMultiplier"); }
	bool& bOnlyAllowSpecifiedEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAllowSpecifiedEngrams"); }
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsDino"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalItemDecompositionTimeMultiplier"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalCorpseDecompositionTimeMultiplier"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxFallSpeedMultiplier"); }
	bool& bAutoPvETimerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvETimer"); }
	bool& bAutoPvEUseSystemTimeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvEUseSystemTime"); }
	bool& bUsingStructureDestructionTagField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUsingStructureDestructionTag"); }
	FName& StructureDestructionTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.StructureDestructionTag"); }
	float& AutoPvEStartTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStartTimeSeconds"); }
	float& AutoPvEStopTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStopTimeSeconds"); }
	int& TributeItemExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeItemExpirationSeconds"); }
	int& TributeDinoExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeDinoExpirationSeconds"); }
	int& TributeCharacterExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeCharacterExpirationSeconds"); }
	bool& PreventDownloadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadSurvivors"); }
	bool& PreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadItems"); }
	bool& PreventDownloadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadDinos"); }
	bool& bPreventUploadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadSurvivors"); }
	bool& bPreventUploadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadItems"); }
	bool& bPreventUploadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadDinos"); }
	int& MaxTributeItemsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeItems"); }
	int& MaxTributeDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeDinos"); }
	int& MaxTributeCharactersField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeCharacters"); }
	bool& bIncreasePvPRespawnIntervalField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIncreasePvPRespawnInterval"); }
	float& IncreasePvPRespawnIntervalCheckPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalCheckPeriod"); }
	float& IncreasePvPRespawnIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalMultiplier"); }
	float& IncreasePvPRespawnIntervalBaseAmountField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalBaseAmount"); }
	float& ResourceNoReplenishRadiusStructuresField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusStructures"); }
	float& ResourceNoReplenishRadiusPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusPlayers"); }
	float& CropGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropGrowthSpeedMultiplier"); }
	float& LayEggIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LayEggIntervalMultiplier"); }
	float& PoopIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PoopIntervalMultiplier"); }
	float& CropDecaySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropDecaySpeedMultiplier"); }
	bool& bAllowChatFromDeadNonAdminsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowChatFromDeadNonAdmins"); }
	bool& bAllowDisablingSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDisablingSpectator"); }
	bool& bPvEDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEDisableFriendlyFire"); }
	bool& bFlyerPlatformAllowUnalignedDinoBasingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFlyerPlatformAllowUnalignedDinoBasing"); }
	bool& bAllowUnclaimDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnclaimDinos"); }
	int& MaxPerTribePlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPerTribePlatformSaddleStructureLimit"); }
	int& MaxPlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPlatformSaddleStructureLimit"); }
	int& MaxDinoBaseLevelField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxDinoBaseLevel"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxNumberOfPlayersInTribe"); }
	float& TribeSlotReuseCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeSlotReuseCooldown"); }
	float& MatingIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingIntervalMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EggHatchSpeedMultiplier"); }
	float& BabyMatureSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyMatureSpeedMultiplier"); }
	float& BabyFoodConsumptionSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyFoodConsumptionSpeedMultiplier"); }
	int& CurrentPlatformSaddleStructuresField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentPlatformSaddleStructures"); }
	FieldArray<float, 12> PerLevelStatsMultiplier_PlayerField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_Player" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamedField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AddField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Add" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AffinityField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Affinity" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoWildField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoWild" }; }
	FieldArray<int, 8> ItemStatClampsField() { return { this, "AShooterGameMode.ItemStatClamps" }; }
	bool& bCustomGameModeAllowSpectatorJoinAfterMatchStartField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCustomGameModeAllowSpectatorJoinAfterMatchStart"); }
	bool& bGameplayLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGameplayLogEnabled"); }
	bool& bServerGameLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogEnabled"); }
	TSubclassOf<UPrimalItem>& BonusSupplyCrateItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "AShooterGameMode.BonusSupplyCrateItemClass"); }
	float& BonusSupplyCrateItemGiveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BonusSupplyCrateItemGiveInterval"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageRepairCooldown"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeSkillMultiplier"); }
	FString& BonusSupplyCrateItemStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BonusSupplyCrateItemString"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWar"); }
	bool& bPvEAllowTribeWarCancelField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWarCancel"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCustomRecipes"); }
	bool& bPassiveDefensesDamageRiderlessDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPassiveDefensesDamageRiderlessDinos"); }
	long double& LastBonusSupplyCrateItemGiveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastBonusSupplyCrateItemGiveTime"); }
	bool& bEnableDeathTeamSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableDeathTeamSpectator"); }
	bool& bTribeStoreCharacterConfigurationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeStoreCharacterConfiguration"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >& PvEActiveTribeWarsField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.PvEActiveTribeWars"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >& TribeAlliesField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.TribeAllies"); }
	TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> > IDtoPlayerDatasField() { return *GetNativePointerField<TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> >*>(this, "AShooterGameMode.IDtoPlayerDatas"); }
	int& MaxTribeLogsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribeLogs"); }
	int& MaxPersonalTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPersonalTamedDinos"); }
	int& PersonalTamedDinosSaddleStructureCostField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PersonalTamedDinosSaddleStructureCost"); }
	TArray<FString>& CachedGameLogField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.CachedGameLog"); }
	bool& bDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableFriendlyFire"); }
	bool& bAllowInactiveTribesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowInactiveTribes"); }
	bool& bForceMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceMapPlayerLocation"); }
	float& DinoHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHarvestingDamageMultiplier"); }
	float& PlayerHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerHarvestingDamageMultiplier"); }
	float& DinoTurretDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoTurretDamageMultiplier"); }
	bool& bDisableLootCratesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableLootCrates"); }
	float& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExtinctionEventTimeInterval"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableExtraStructurePreventionVolumes"); }
	unsigned int& NextExtinctionEventUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.NextExtinctionEventUTC"); }
	bool& bForceAllowCaveFlyersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowCaveFlyers"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDoExtinctionEvent"); }
	bool& bPreventOfflinePvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOfflinePvP"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPDinoDecay"); }
	bool& bOverideStructurePlatformPreventionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOverideStructurePlatformPrevention"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowAnyoneBabyImprintCuddle"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableImprintDinoBuff"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFastDecayUnsnappedCoreStructures"); }
	bool& bDestroyUnconnectedWaterPipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDestroyUnconnectedWaterPipes"); }
	bool& bAllowCrateSpawnsOnTopOfStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCrateSpawnsOnTopOfStructures"); }
	bool& bNotifyAdminCommandsInChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNotifyAdminCommandsInChat"); }
	bool& bRandomSupplyCratePointsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRandomSupplyCratePoints"); }
	bool& bOfficialDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOfficialDisableGenesisMissions"); }
	float& PreventOfflinePvPIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPInterval"); }
	bool& bShowFloatingDamageTextField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowFloatingDamageText"); }
	bool& bAllowTekSuitPowersInGenesisField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowTekSuitPowersInGenesis"); }
	FString& CurrentMerticsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentMerticsURL"); }
	FString& CurrentNotificationURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentNotificationURL"); }
	FString& CurrentAdminCommandTrackingAPIKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentAdminCommandTrackingAPIKey"); }
	FString& CurrentAdminCommandTrackingURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentAdminCommandTrackingURL"); }
	TArray<FItemCraftingCostOverride>& OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride>*>(this, "AShooterGameMode.OverrideItemCraftingCosts"); }
	TArray<FConfigItemCraftingCostOverride>& ConfigOverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FConfigItemCraftingCostOverride>*>(this, "AShooterGameMode.ConfigOverrideItemCraftingCosts"); }
	TArray<FConfigMaxItemQuantityOverride>& ConfigOverrideItemMaxQuantityField() { return *GetNativePointerField<TArray<FConfigMaxItemQuantityOverride>*>(this, "AShooterGameMode.ConfigOverrideItemMaxQuantity"); }
	TArray<FConfigSupplyCrateItemsOverride>& ConfigOverrideSupplyCrateItemsField() { return *GetNativePointerField<TArray<FConfigSupplyCrateItemsOverride>*>(this, "AShooterGameMode.ConfigOverrideSupplyCrateItems"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigOverrideNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigOverrideNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigAddNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigAddNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigSubtractNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigSubtractNPCSpawnEntriesContainer"); }
	float& BabyImprintingStatScaleMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintingStatScaleMultiplier"); }
	float& BabyCuddleIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleIntervalMultiplier"); }
	float& BabyCuddleGracePeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleGracePeriodMultiplier"); }
	float& BabyCuddleLoseImprintQualitySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleLoseImprintQualitySpeedMultiplier"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HairGrowthSpeedMultiplier"); }
	bool& bPreventDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventDiseases"); }
	bool& bNonPermanentDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNonPermanentDiseases"); }
	UAllClustersInventory* AllClustersInventoryField() { return *GetNativePointerField<UAllClustersInventory**>(this, "AShooterGameMode.AllClustersInventory"); }
	int& SaveForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveForceRespawnDinosVersion"); }
	unsigned __int64& ServerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterGameMode.ServerID"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LoadForceRespawnDinosVersion"); }
	bool& bIsLoadedServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLoadedServer"); }
	TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FTributePlayerTribeInfo, 0> >& TributePlayerTribeInfosField() { return *GetNativePointerField<TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FTributePlayerTribeInfo, 0> >*>(this, "AShooterGameMode.TributePlayerTribeInfos"); }
	TArray<int>& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.SupportedSpawnRegions"); }
	bool& bServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerUseDinoList"); }
	float& MaxAllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxAllowedRespawnInterval"); }
	bool& bUseDinoLevelUpAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseDinoLevelUpAnimations"); }
	bool& bDisableDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoTaming"); }
	bool& bDisableDinoRidingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoRiding"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumDinoReuploadInterval"); }
	int& SaveGameCustomVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveGameCustomVersion"); }
	float& OverrideOfficialDifficultyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OverrideOfficialDifficulty"); }
	FieldArray<float, 12> PlayerBaseStatMultipliersField() { return { this, "AShooterGameMode.PlayerBaseStatMultipliers" }; }
	int& NPCActiveCountTamedField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCountTamed"); }
	int& NPCActiveCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCount"); }
	int& NPCCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCCount"); }
	float& MatingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FastDecayInterval"); }
	bool& bUseSingleplayerSettingsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseSingleplayerSettings"); }
	bool& bUseCorpseLocatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseCorpseLocator"); }
	bool& bDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGenesisMissions"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructurePlacementCollision"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceUseInventoryAppends"); }
	float& SupplyCrateLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SupplyCrateLootQualityMultiplier"); }
	float& FishingLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FishingLootQualityMultiplier"); }
	float& ItemStackSizeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ItemStackSizeMultiplier"); }
	float& CraftingSkillBonusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftingSkillBonusMultiplier"); }
	bool& bAllowPlatformSaddleMultiFloorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowPlatformSaddleMultiFloors"); }
	bool& bAllowUnlimitedRespecsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnlimitedRespecs"); }
	float& FuelConsumptionIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FuelConsumptionIntervalMultiplier"); }
	int& DestroyTamesOverLevelClampField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DestroyTamesOverLevelClamp"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribesPerAlliance"); }
	bool& bDisableDinoDecayClaimingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayClaiming"); }
	bool& bDisableNonTribePinAccessField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableNonTribePinAccess"); }
	bool& bUseTameLimitForStructuresOnlyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseTameLimitForStructuresOnly"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitTurretsNum"); }
	bool& bHardLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHardLimitTurretsInRange"); }
	bool& bAutoUnlockAllEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoUnlockAllEngrams"); }
	long double& ServerLastForceRespawnWildDinosTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.ServerLastForceRespawnWildDinosTime"); }
	FString& UseStructurePreventionVolumeTagStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UseStructurePreventionVolumeTagString"); }
	float& BaseTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseTemperatureMultiplier"); }
	bool& bForceAllowAllStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAllStructures"); }
	bool& bForceAllowAscensionItemDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAscensionItemDownloads"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowCreativeMode"); }
	float& LimitNonPlayerDroppedItemsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsRange"); }
	int& LimitNonPlayerDroppedItemsCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsCount"); }
	float& GlobalPoweredBatteryDurabilityDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalPoweredBatteryDurabilityDecreasePerSecond"); }
	float& SingleplayerSettingsCorpseLifespanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SingleplayerSettingsCorpseLifespanMultiplier"); }
	float& UseCorpseLifeSpanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UseCorpseLifeSpanMultiplier"); }
	float& TimePeriodToHideDisconnectedPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TimePeriodToHideDisconnectedPlayers"); }
	bool& bUseBPPreSpawnedDinoField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseBPPreSpawnedDino"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& TamedDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoTorporDrainMultiplier"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PassiveTameIntervalMultiplier"); }
	float& TamedDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoTorporDrainMultiplier"); }
	bool& bDisableWeatherFogField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWeatherFog"); }
	float& MeshCheckingRayDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingRayDistance"); }
	float& MeshCheckingSubdivisonsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingSubdivisons"); }
	float& MeshCheckingPercentageToFailField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingPercentageToFail"); }
	bool& bIgnoreStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnoreStructuresPreventionVolumes"); }
	bool& bGenesisUseStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGenesisUseStructuresPreventionVolumes"); }
	bool& bServerEnableMeshCheckingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerEnableMeshChecking"); }
	FString& ArkServerMetricsKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsKey"); }
	FString& ArkServerMetricsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsURL"); }
	TArray<FString>& CachedArkMetricsPayloadsField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.CachedArkMetricsPayloads"); }
	bool& bCollectArkMetricsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCollectArkMetrics"); }
	bool& bLogChatMessagesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLogChatMessages"); }
	int& ChatLogFlushIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFlushIntervalSeconds"); }
	int& ChatLogFileSplitIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFileSplitIntervalSeconds"); }
	int& ChatLogMaxAgeInDaysField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogMaxAgeInDays"); }
	TArray<TSharedPtr<FJsonObject, 0>>& ChatMessageBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject, 0>>*>(this, "AShooterGameMode.ChatMessageBuffer"); }
	FString& CurrentChatLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentChatLogFilename"); }
	FDateTime& LastChatLogFlushTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFlushTime"); }
	FDateTime& LastChatLogFileCreateTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFileCreateTime"); }
	bool& bDamageEventLoggingEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDamageEventLoggingEnabled"); }
	bool& bIsGenesisMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsGenesisMap"); }
	TArray<TSharedPtr<FJsonObject, 0>>& DamageEventBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject, 0>>*>(this, "AShooterGameMode.DamageEventBuffer"); }
	FString& CurrentDamageEventLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentDamageEventLogFilename"); }
	TMap<FName, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, int, 0> >& MissionTagToLeaderboardEntryField() { return *GetNativePointerField<TMap<FName, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, int, 0> >*>(this, "AShooterGameMode.MissionTagToLeaderboardEntry"); }
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.UseStructurePreventionVolumeTag"); }
	bool& bHasCovertedToStoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHasCovertedToStore"); }
	bool& bAllowStoredDatasField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowStoredDatas"); }
	FDataStore<unsigned int>& TribeDataStoreField() { return *GetNativePointerField<FDataStore<unsigned int>*>(this, "AShooterGameMode.TribeDataStore"); }
	FDataStore<unsigned __int64>& PlayerDataStoreField() { return *GetNativePointerField<FDataStore<unsigned __int64>*>(this, "AShooterGameMode.PlayerDataStore"); }
	AOceanDinoManager* TheOceanDinoManagerField() { return *GetNativePointerField<AOceanDinoManager**>(this, "AShooterGameMode.TheOceanDinoManager"); }
	bool& bCheckedForOceanDinoManagerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCheckedForOceanDinoManager"); }
	bool& bParseServerToJsonField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bParseServerToJson"); }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AShooterGameMode.StaticClass"); }
	bool AllowAddXP(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "AShooterGameMode.AllowAddXP", forComp); }
	void CheckArkTributeAvailability() { NativeCall<void>(this, "AShooterGameMode.CheckArkTributeAvailability"); }
	void ArkTributeAvailabilityRequestComplete(TSharedPtr<IHttpRequest, 0> HttpRequest, TSharedPtr<IHttpResponse, 1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 0>, TSharedPtr<IHttpResponse, 1>, bool>(this, "AShooterGameMode.ArkTributeAvailabilityRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void AddToPendingStructureDestroys(APrimalStructure* theStructure) { NativeCall<void, APrimalStructure*>(this, "AShooterGameMode.AddToPendingStructureDestroys", theStructure); }
	void IncrementPreLoginMetric() { NativeCall<void>(this, "AShooterGameMode.IncrementPreLoginMetric"); }
	void InitGame(FString* MapName, FString* Options, FString* ErrorMessage) { NativeCall<void, FString*, FString*, FString*>(this, "AShooterGameMode.InitGame", MapName, Options, ErrorMessage); }
	void InitOptionBool(FString Commandline, FString Section, FString Option, bool bDefaultValue) { NativeCall<void, FString, FString, FString, bool>(this, "AShooterGameMode.InitOptionBool", Commandline, Section, Option, bDefaultValue); }
	void InitOptionString(FString Commandline, FString Section, FString Option) { NativeCall<void, FString, FString, FString>(this, "AShooterGameMode.InitOptionString", Commandline, Section, Option); }
	void InitOptionFloat(FString Commandline, FString Section, FString Option, float CurrentValue) { NativeCall<void, FString, FString, FString, float>(this, "AShooterGameMode.InitOptionFloat", Commandline, Section, Option, CurrentValue); }
	bool GetServerSettingsFloat(FString* Keyvalue, float* OutFloat) { return NativeCall<bool, FString*, float*>(this, "AShooterGameMode.GetServerSettingsFloat", Keyvalue, OutFloat); }
	void SingleplayerSetupValues() { NativeCall<void>(this, "AShooterGameMode.SingleplayerSetupValues"); }
	void InitOptionInteger(FString Commandline, FString Section, FString Option, int CurrentValue) { NativeCall<void, FString, FString, FString, int>(this, "AShooterGameMode.InitOptionInteger", Commandline, Section, Option, CurrentValue); }
	bool GetBoolOption(FString* Options, FString* ParseString, bool CurrentValue) { return NativeCall<bool, FString*, FString*, bool>(this, "AShooterGameMode.GetBoolOption", Options, ParseString, CurrentValue); }
	float GetFloatOption(FString* Options, FString* ParseString, float CurrentValue) { return NativeCall<float, FString*, FString*, float>(this, "AShooterGameMode.GetFloatOption", Options, ParseString, CurrentValue); }
	int GetIntOption(FString* Options, FString* ParseString, int CurrentValue) { return NativeCall<int, FString*, FString*, int>(this, "AShooterGameMode.GetIntOption", Options, ParseString, CurrentValue); }
	void InitOptions(FString Options) { NativeCall<void, FString>(this, "AShooterGameMode.InitOptions", Options); }
	bool GetBoolOptionIni(FString Section, FString OptionName, bool bDefaultValue) { return NativeCall<bool, FString, FString, bool>(this, "AShooterGameMode.GetBoolOptionIni", Section, OptionName, bDefaultValue); }
	float GetFloatOptionIni(FString Section, FString OptionName) { return NativeCall<float, FString, FString>(this, "AShooterGameMode.GetFloatOptionIni", Section, OptionName); }
	int GetIntOptionIni(FString Section, FString OptionName) { return NativeCall<int, FString, FString>(this, "AShooterGameMode.GetIntOptionIni", Section, OptionName); }
	FString* GetStringOption(FString* result, FString Section, FString OptionName) { return NativeCall<FString*, FString*, FString, FString>(this, "AShooterGameMode.GetStringOption", result, Section, OptionName); }
	void SaveWorld() { NativeCall<void>(this, "AShooterGameMode.SaveWorld"); }
	void ClearSavesAndRestart() { NativeCall<void>(this, "AShooterGameMode.ClearSavesAndRestart"); }
	bool LoadWorld() { return NativeCall<bool>(this, "AShooterGameMode.LoadWorld"); }
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result) { return NativeCall<TSubclassOf<AGameSession>*, TSubclassOf<AGameSession>*>(this, "AShooterGameMode.GetGameSessionClass", result); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AShooterGameMode.ReadyToStartMatch"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameMode.HandleMatchHasStarted"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AShooterGameMode.EndPlay", EndPlayReason); }
	void HandleLeavingMap() { NativeCall<void>(this, "AShooterGameMode.HandleLeavingMap"); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameMode.RequestFinishAndExitToMainMenu"); }
	void PreLogin(FString* Options, FString* Address, TSharedPtr<FUniqueNetId, 0>* UniqueId, FString* authToken, FString* ErrorMessage) { NativeCall<void, FString*, FString*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*>(this, "AShooterGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage); }
	bool ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection* Connection) { return NativeCall<bool, UNetConnection*>(this, "AShooterGameMode.ExtraPreLoginChecksBeforeWelcomePlayer", Connection); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.PostLogin", NewPlayer); }
	void RemoveLoginLock(TSharedPtr<FUniqueNetId, 0>* UniqueNetId) { NativeCall<void, TSharedPtr<FUniqueNetId, 0>*>(this, "AShooterGameMode.RemoveLoginLock", UniqueNetId); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >* GetBannedMap(TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >* result) { return NativeCall<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.GetBannedMap", result); }
	TArray<FString>* GetWhiteListedMap(TArray<FString>* result) { return NativeCall<TArray<FString>*, TArray<FString>*>(this, "AShooterGameMode.GetWhiteListedMap", result); }
	void Killed(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, UDamageType* DamageType) { NativeCall<void, AController*, AController*, APawn*, UDamageType*>(this, "AShooterGameMode.Killed", Killer, KilledPlayer, KilledPawn, DamageType); }
	float ModifyDamage(float Damage, AActor* DamagedActor, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, AActor*, FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.ModifyDamage", Damage, DamagedActor, DamageEvent, EventInstigator, DamageCauser); }
	bool CanDealDamage(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.CanDealDamage", SpawnPoint, Player); }
	TSubclassOf<UObject>* GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject>* result, AController* InController) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, AController*>(this, "AShooterGameMode.GetDefaultPawnClassForController_Implementation", result, InController); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AShooterGameMode.ChoosePlayerStart_Implementation", Player); }
	bool CheckJoinInProgress_Implementation(bool bIsFromLogin, APlayerController* NewPlayer) { return NativeCall<bool, bool, APlayerController*>(this, "AShooterGameMode.CheckJoinInProgress_Implementation", bIsFromLogin, NewPlayer); }
	bool IsSpawnpointPreferred(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.IsSpawnpointPreferred", SpawnPoint, Player); }
	bool IsFirstPlayerSpawn(APlayerController* NewPlayer) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.IsFirstPlayerSpawn", NewPlayer); }
	void IncrementNumDeaths(FString* PlayerDataID) { NativeCall<void, FString*>(this, "AShooterGameMode.IncrementNumDeaths", PlayerDataID); }
	int GetNumDeaths(FString* PlayerDataID) { return NativeCall<int, FString*>(this, "AShooterGameMode.GetNumDeaths", PlayerDataID); }
	UPrimalPlayerData* GetPlayerData(FString* PlayerDataID) { return NativeCall<UPrimalPlayerData*, FString*>(this, "AShooterGameMode.GetPlayerData", PlayerDataID); }
	void StartNewPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.StartNewPlayer", NewPlayer); }
	void StartNewShooterPlayer(APlayerController* NewPlayer, bool bForceCreateNewPlayerData, bool bIsFromLogin, FPrimalPlayerCharacterConfigStruct* charConfig, UPrimalPlayerData* ArkPlayerData) { NativeCall<void, APlayerController*, bool, bool, FPrimalPlayerCharacterConfigStruct*, UPrimalPlayerData*>(this, "AShooterGameMode.StartNewShooterPlayer", NewPlayer, bForceCreateNewPlayerData, bIsFromLogin, charConfig, ArkPlayerData); }
	void HandleTransferCharacterDialogResult(bool bAccept, AShooterPlayerController* NewPlayer) { NativeCall<void, bool, AShooterPlayerController*>(this, "AShooterGameMode.HandleTransferCharacterDialogResult", bAccept, NewPlayer); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.Logout", Exiting); }
	FVector* GetTracedSpawnLocation(FVector* result, FVector* SpawnLoc, float CharHalfHeight) { return NativeCall<FVector*, FVector*, FVector*, float>(this, "AShooterGameMode.GetTracedSpawnLocation", result, SpawnLoc, CharHalfHeight); }
	void SetMessageOfTheDay(FString* Message) { NativeCall<void, FString*>(this, "AShooterGameMode.SetMessageOfTheDay", Message); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "AShooterGameMode.ShowMessageOfTheDay"); }
	APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AShooterGameMode.SpawnDefaultPawnFor", NewPlayer, StartSpot); }
	FPrimalPlayerCharacterConfigStruct* ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct* result, FPrimalPlayerCharacterConfigStruct* charConfig) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*>(this, "AShooterGameMode.ValidateCharacterConfig", result, charConfig); }
	FString* GenerateProfileFileName(FString* result, FUniqueNetIdRepl* UniqueId, FString* NetworkAddresss, FString* PlayerName) { return NativeCall<FString*, FString*, FUniqueNetIdRepl*, FString*, FString*>(this, "AShooterGameMode.GenerateProfileFileName", result, UniqueId, NetworkAddresss, PlayerName); }
	UPrimalPlayerData* LoadPlayerData(AShooterPlayerState* PlayerState, bool bIsLoadingBackup) { return NativeCall<UPrimalPlayerData*, AShooterPlayerState*, bool>(this, "AShooterGameMode.LoadPlayerData", PlayerState, bIsLoadingBackup); }
	void DeletePlayerData(AShooterPlayerState* PlayerState) { NativeCall<void, AShooterPlayerState*>(this, "AShooterGameMode.DeletePlayerData", PlayerState); }
	bool GetOrLoadTribeData(int TribeID, FTribeData* LoadedTribeData) { return NativeCall<bool, int, FTribeData*>(this, "AShooterGameMode.GetOrLoadTribeData", TribeID, LoadedTribeData); }
	bool LoadTribeData(int TribeID, FTribeData* LoadedTribeData, bool bIsLoadingBackup, bool bDontCheckDirtyTribeWar) { return NativeCall<bool, int, FTribeData*, bool, bool>(this, "AShooterGameMode.LoadTribeData", TribeID, LoadedTribeData, bIsLoadingBackup, bDontCheckDirtyTribeWar); }
	UPrimalPlayerData* GetPlayerDataFor(AShooterPlayerController* PC, bool* bCreatedNewPlayerData, bool bForceCreateNewPlayerData, FPrimalPlayerCharacterConfigStruct* charConfig, bool bAutoCreateNewData, bool bDontSaveNewData) { return NativeCall<UPrimalPlayerData*, AShooterPlayerController*, bool*, bool, FPrimalPlayerCharacterConfigStruct*, bool, bool>(this, "AShooterGameMode.GetPlayerDataFor", PC, bCreatedNewPlayerData, bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData); }
	void CheckForRepopulation() { NativeCall<void>(this, "AShooterGameMode.CheckForRepopulation"); }
	void ForceRepopulateFoliageAtPoint(FVector AtPoint, float MaxRangeFromPoint, int MaxNumFoliages, TSubclassOf<APrimalEmitterSpawnable> RepopulatedEmitter, FVector* StructureDownTraceVector, FVector* StructureUpTraceVector, bool bDontCheckForOverlaps, int TriggeredByTeamID, bool bForce) { NativeCall<void, FVector, float, int, TSubclassOf<APrimalEmitterSpawnable>, FVector*, FVector*, bool, int, bool>(this, "AShooterGameMode.ForceRepopulateFoliageAtPoint", AtPoint, MaxRangeFromPoint, MaxNumFoliages, RepopulatedEmitter, StructureDownTraceVector, StructureUpTraceVector, bDontCheckForOverlaps, TriggeredByTeamID, bForce); }
	void TickLoginLocks() { NativeCall<void>(this, "AShooterGameMode.TickLoginLocks"); }
	bool IsLoginLockDisabled() { return NativeCall<bool>(this, "AShooterGameMode.IsLoginLockDisabled"); }
	void CheckGlobalEnables() { NativeCall<void>(this, "AShooterGameMode.CheckGlobalEnables"); }
	void HttpCheckGlobalEnablesComplete(TSharedPtr<IHttpRequest, 0> HttpRequest, TSharedPtr<IHttpResponse, 1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 0>, TSharedPtr<IHttpResponse, 1>, bool>(this, "AShooterGameMode.HttpCheckGlobalEnablesComplete", HttpRequest, HttpResponse, bSucceeded); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.Tick", DeltaSeconds); }
	bool StartSaveBackup() { return NativeCall<bool>(this, "AShooterGameMode.StartSaveBackup"); }
	void SendDatadogMetricEvent(FString* Title, FString* Message) { NativeCall<void, FString*, FString*>(this, "AShooterGameMode.SendDatadogMetricEvent", Title, Message); }
	void TickSaveBackup() { NativeCall<void>(this, "AShooterGameMode.TickSaveBackup"); }
	float TimeSinceMissionDeactivated(TSubclassOf<AMissionType> MissionType) { return NativeCall<float, TSubclassOf<AMissionType>>(this, "AShooterGameMode.TimeSinceMissionDeactivated", MissionType); }
	bool IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType> MissionType, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, TSubclassOf<AMissionType>, float, bool>(this, "AShooterGameMode.IsTimeSinceMissionDeactivated", MissionType, CheckTimeSince, bForceTrueAtZeroTime); }
	void ClearLastMissionDeactivatedTime(TSubclassOf<AMissionType> MissionType) { NativeCall<void, TSubclassOf<AMissionType>>(this, "AShooterGameMode.ClearLastMissionDeactivatedTime", MissionType); }
	long double GetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType> MissionType) { return NativeCall<long double, TSubclassOf<AMissionType>>(this, "AShooterGameMode.GetLastMissionDeactivatedUtcTime", MissionType); }
	void SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType> MissionType, long double UtcTime) { NativeCall<void, TSubclassOf<AMissionType>, long double>(this, "AShooterGameMode.SetLastMissionDeactivatedUtcTime", MissionType, UtcTime); }
	unsigned __int64 AddNewTribe(AShooterPlayerState* PlayerOwner, FString* TribeName, FTribeGovernment* TribeGovernment) { return NativeCall<unsigned __int64, AShooterPlayerState*, FString*, FTribeGovernment*>(this, "AShooterGameMode.AddNewTribe", PlayerOwner, TribeName, TribeGovernment); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.RemoveTribe", TribeID); }
	void UpdateTribeData(FTribeData* NewTribeData) { NativeCall<void, FTribeData*>(this, "AShooterGameMode.UpdateTribeData", NewTribeData); }
	void RemovePlayerFromTribe(unsigned __int64 TribeID, unsigned __int64 PlayerDataID, bool bDontUpdatePlayerState) { NativeCall<void, unsigned __int64, unsigned __int64, bool>(this, "AShooterGameMode.RemovePlayerFromTribe", TribeID, PlayerDataID, bDontUpdatePlayerState); }
	int GetTribeIDOfPlayerID(unsigned __int64 PlayerDataID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetTribeIDOfPlayerID", PlayerDataID); }
	FTribeData* GetTribeDataBlueprint(FTribeData* result, int TribeID) { return NativeCall<FTribeData*, FTribeData*, int>(this, "AShooterGameMode.GetTribeDataBlueprint", result, TribeID); }
	FTribeData* GetTribeData(FTribeData* result, unsigned __int64 TribeID) { return NativeCall<FTribeData*, FTribeData*, unsigned __int64>(this, "AShooterGameMode.GetTribeData", result, TribeID); }
	void ArkGlobalCommand(FString Command) { NativeCall<void, FString>(this, "AShooterGameMode.ArkGlobalCommand", Command); }
	void InitializeDatabaseRefs() { NativeCall<void>(this, "AShooterGameMode.InitializeDatabaseRefs"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameMode.BeginPlay"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AShooterGameMode.Serialize", Ar); }
	FLeaderboardEntry* GetOrCreateLeaderboardEntry(FName MissionTag) { return NativeCall<FLeaderboardEntry*, FName>(this, "AShooterGameMode.GetOrCreateLeaderboardEntry", MissionTag); }
	void GetActorSaveGameTypes(TArray<TSubclassOf<AActor>>* saveGameTypes) { NativeCall<void, TArray<TSubclassOf<AActor>>*>(this, "AShooterGameMode.GetActorSaveGameTypes", saveGameTypes); }
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, TSharedPtr<FUniqueNetId, 0>* UniqueId, FString* Options, FString* Portal) { return NativeCall<FString*, FString*, APlayerController*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*>(this, "AShooterGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	void SendServerDirectMessage(FString* PlayerSteamID, FString* MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, FString* PlayerName) { NativeCall<void, FString*, FString*, FLinearColor, bool, int, int, FString*>(this, "AShooterGameMode.SendServerDirectMessage", PlayerSteamID, MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, PlayerName); }
	void SendServerChatMessage(FString* MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID) { NativeCall<void, FString*, FLinearColor, bool, int, int>(this, "AShooterGameMode.SendServerChatMessage", MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID); }
	void SendServerNotification(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard) { NativeCall<void, FString*, FLinearColor, float, float, UTexture2D*, USoundBase*, int, int, bool>(this, "AShooterGameMode.SendServerNotification", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard); }
	void RemovePlayerData(AShooterPlayerState* PlayerState) { NativeCall<void, AShooterPlayerState*>(this, "AShooterGameMode.RemovePlayerData", PlayerState); }
	void InitGameState() { NativeCall<void>(this, "AShooterGameMode.InitGameState"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterGameMode.PreInitializeComponents"); }
	void CheckIsOfficialServer() { NativeCall<void>(this, "AShooterGameMode.CheckIsOfficialServer"); }
	void BeginUnloadingWorld() { NativeCall<void>(this, "AShooterGameMode.BeginUnloadingWorld"); }
	void ApplyLiveTuningOverloads(TSharedPtr<FJsonObject, 0> Overloads) { NativeCall<void, TSharedPtr<FJsonObject, 0>>(this, "AShooterGameMode.ApplyLiveTuningOverloads", Overloads); }
	static FString* GetLiveTuningOverloadsDirectory(FString* result, bool bEnsureDirectoryExists) { return NativeCall<FString*, FString*, bool>(nullptr, "AShooterGameMode.GetLiveTuningOverloadsDirectory", result, bEnsureDirectoryExists); }
	static bool IsSupportedLiveTuningProperty(UProperty* Property, bool bIgnoreLiveTuningFlag) { return NativeCall<bool, UProperty*, bool>(nullptr, "AShooterGameMode.IsSupportedLiveTuningProperty", Property, bIgnoreLiveTuningFlag); }
	void ResetLiveTuningOverloads() { NativeCall<void>(this, "AShooterGameMode.ResetLiveTuningOverloads"); }
	bool DumpAssetProperties(FString* Asset, FString* OutFilename) { return NativeCall<bool, FString*, FString*>(this, "AShooterGameMode.DumpAssetProperties", Asset, OutFilename); }
	void GetServerNotification() { NativeCall<void>(this, "AShooterGameMode.GetServerNotification"); }
	void HttpServerNotificationRequestComplete(TSharedPtr<IHttpRequest, 0> HttpRequest, TSharedPtr<IHttpResponse, 1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 0>, TSharedPtr<IHttpResponse, 1>, bool>(this, "AShooterGameMode.HttpServerNotificationRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void GetDynamicConfig() { NativeCall<void>(this, "AShooterGameMode.GetDynamicConfig"); }
	void HttpGetDynamicConfigComplete(TSharedPtr<IHttpRequest, 0> HttpRequest, TSharedPtr<IHttpResponse, 1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 0>, TSharedPtr<IHttpResponse, 1>, bool>(this, "AShooterGameMode.HttpGetDynamicConfigComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpGetLiveTuningOverloadsComplete(TSharedPtr<IHttpRequest, 0> HttpRequest, TSharedPtr<IHttpResponse, 1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 0>, TSharedPtr<IHttpResponse, 1>, bool>(this, "AShooterGameMode.HttpGetLiveTuningOverloadsComplete", HttpRequest, HttpResponse, bSucceeded); }
	void PostAlarmNotification(FUniqueNetId* SteamID, FString* Title, FString* Message) { NativeCall<void, FUniqueNetId*, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotification(unsigned __int64 SteamID, FString* Title, FString* Message) { NativeCall<void, unsigned __int64, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotification(FString SteamID, FString* Title, FString* Message) { NativeCall<void, FString, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostServerMetrics() { NativeCall<void>(this, "AShooterGameMode.PostServerMetrics"); }
	void AddTrackedAdminCommand(APlayerController* Controller, FString* CommandType, FString* Command) { NativeCall<void, APlayerController*, FString*, FString*>(this, "AShooterGameMode.AddTrackedAdminCommand", Controller, CommandType, Command); }
	void PostAdminTrackedCommands() { NativeCall<void>(this, "AShooterGameMode.PostAdminTrackedCommands"); }
	void AllowPlayerToJoinNoCheck(FUniqueNetIdUInt64* PlayerId) { NativeCall<void, FUniqueNetIdUInt64*>(this, "AShooterGameMode.AllowPlayerToJoinNoCheck", PlayerId); }
	void DisallowPlayerToJoinNoCheck(FUniqueNetIdUInt64* PlayerId) { NativeCall<void, FUniqueNetIdUInt64*>(this, "AShooterGameMode.DisallowPlayerToJoinNoCheck", PlayerId); }
	void SavePlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.SavePlayersJoinNoCheckList"); }
	void LoadPlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.LoadPlayersJoinNoCheckList"); }
	bool IsPlayerAllowedToJoinNoCheck(FUniqueNetIdUInt64* PlayerId) { return NativeCall<bool, FUniqueNetIdUInt64*>(this, "AShooterGameMode.IsPlayerAllowedToJoinNoCheck", PlayerId); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck", ForPlayer); }
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin", ForPlayer); }
	bool KickPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.KickPlayer", PlayerSteamName, PlayerSteamID); }
	void KickPlayerController(APlayerController* thePC, FString* KickMessage) { NativeCall<void, APlayerController*, FString*>(this, "AShooterGameMode.KickPlayerController", thePC, KickMessage); }
	bool BanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.BanPlayer", PlayerSteamName, PlayerSteamID); }
	bool UnbanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.UnbanPlayer", PlayerSteamName, PlayerSteamID); }
	void SaveBannedList() { NativeCall<void>(this, "AShooterGameMode.SaveBannedList"); }
	void LoadBannedList() { NativeCall<void>(this, "AShooterGameMode.LoadBannedList"); }
	FString* GetMapName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetMapName", result); }
	void UpdateSaveBackupFiles() { NativeCall<void>(this, "AShooterGameMode.UpdateSaveBackupFiles"); }
	void LoadTribeIds_Process(unsigned int theTribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.LoadTribeIds_Process", theTribeID); }
	void LoadTribeIds() { NativeCall<void>(this, "AShooterGameMode.LoadTribeIds"); }
	void LoadPlayerIds_Process(unsigned __int64 InPlayerID, TArray<unsigned char>* ReadBytes) { NativeCall<void, unsigned __int64, TArray<unsigned char>*>(this, "AShooterGameMode.LoadPlayerIds_Process", InPlayerID, ReadBytes); }
	void LoadPlayerDataIds() { NativeCall<void>(this, "AShooterGameMode.LoadPlayerDataIds"); }
	void AddPlayerID(int playerDataID, unsigned __int64 netUniqueID) { NativeCall<void, int, unsigned __int64>(this, "AShooterGameMode.AddPlayerID", playerDataID, netUniqueID); }
	unsigned __int64 GetSteamIDForPlayerID(int playerDataID) { return NativeCall<unsigned __int64, int>(this, "AShooterGameMode.GetSteamIDForPlayerID", playerDataID); }
	int GetPlayerIDForSteamID(unsigned __int64 steamID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetPlayerIDForSteamID", steamID); }
	unsigned int GenerateTribeId() { return NativeCall<unsigned int>(this, "AShooterGameMode.GenerateTribeId"); }
	unsigned int GeneratePlayerDataId(unsigned __int64 NetUniqueID) { return NativeCall<unsigned int, unsigned __int64>(this, "AShooterGameMode.GeneratePlayerDataId", NetUniqueID); }
	float ModifyNPCSpawnLimits(FName DinoNameTag, float CurrentLimit) { return NativeCall<float, FName, float>(this, "AShooterGameMode.ModifyNPCSpawnLimits", DinoNameTag, CurrentLimit); }
	float GetExtraDinoSpawnWeight(FName DinoNameTag) { return NativeCall<float, FName>(this, "AShooterGameMode.GetExtraDinoSpawnWeight", DinoNameTag); }
	float GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem> HarvestItemClass) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.GetHarvestResourceItemAmountMultiplier", HarvestItemClass); }
	float GetDinoDamageMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoDamageMultiplier", ForDino); }
	float GetDinoResistanceMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoResistanceMultiplier", ForDino); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassHidden", ForItemClass); }
	bool IsEngramClassGiveToPlayer(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassGiveToPlayer", ForItemClass); }
	void ListenServerClampPlayerLocations() { NativeCall<void>(this, "AShooterGameMode.ListenServerClampPlayerLocations"); }
	FString* ValidateTribeName(FString* result, FString theTribeName) { return NativeCall<FString*, FString*, FString>(this, "AShooterGameMode.ValidateTribeName", result, theTribeName); }
	void AdjustDamage(AActor* Victim, float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float*, FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.AdjustDamage", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	void NotifyDamage(AActor* Victim, float DamageAmount, FDamageEvent* Event, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float, FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.NotifyDamage", Victim, DamageAmount, Event, EventInstigator, DamageCauser); }
	void DamageEventLogFlush() { NativeCall<void>(this, "AShooterGameMode.DamageEventLogFlush"); }
	void SetDamageEventLoggingEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AShooterGameMode.SetDamageEventLoggingEnabled", bEnabled); }
	bool AllowRenameTribe(AShooterPlayerState* ForPlayerState, FString* TribeName) { return NativeCall<bool, AShooterPlayerState*, FString*>(this, "AShooterGameMode.AllowRenameTribe", ForPlayerState, TribeName); }
	void SetTimeOfDay(FString* timeString) { NativeCall<void, FString*>(this, "AShooterGameMode.SetTimeOfDay", timeString); }
	void KickAllPlayersAndReload() { NativeCall<void>(this, "AShooterGameMode.KickAllPlayersAndReload"); }
	void RestartServer() { NativeCall<void>(this, "AShooterGameMode.RestartServer"); }
	void SerializeForSaveFile(int SaveVersion, FArchive* InArchive) { NativeCall<void, int, FArchive*>(this, "AShooterGameMode.SerializeForSaveFile", SaveVersion, InArchive); }
	bool PlayerCanRestart(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.PlayerCanRestart", Player); }
	bool HandleNewPlayer_Implementation(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer_Implementation", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	bool IsPlayerAllowedToCheat(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerAllowedToCheat", ForPlayer); }
	void PrintToGameplayLog(FString* InString) { NativeCall<void, FString*>(this, "AShooterGameMode.PrintToGameplayLog", InString); }
	void PrintToServerGameLog(FString* InString, bool bSendChatToAllAdmins) { NativeCall<void, FString*, bool>(this, "AShooterGameMode.PrintToServerGameLog", InString, bSendChatToAllAdmins); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterGameMode.LoadedFromSaveGame"); }
	void RemoveInactivePlayersAndTribes() { NativeCall<void>(this, "AShooterGameMode.RemoveInactivePlayersAndTribes"); }
	void DDoSDetected() { NativeCall<void>(this, "AShooterGameMode.DDoSDetected"); }
	FString* GetSessionTimeString_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetSessionTimeString_Implementation", result); }
	bool GetLaunchOptionFloat(FString* LaunchOptionKey, float* ReturnVal) { return NativeCall<bool, FString*, float*>(this, "AShooterGameMode.GetLaunchOptionFloat", LaunchOptionKey, ReturnVal); }
	static bool AllowDamage(UWorld* ForWorld, int TargetingTeam1, int TargetingTeam2, bool bIgnoreDamageIfAllied) { return NativeCall<bool, UWorld*, int, int, bool>(nullptr, "AShooterGameMode.AllowDamage", ForWorld, TargetingTeam1, TargetingTeam2, bIgnoreDamageIfAllied); }
	bool IsTribeWar(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.IsTribeWar", TribeID1, TribeID2); }
	void UpdateTribeWars() { NativeCall<void>(this, "AShooterGameMode.UpdateTribeWars"); }
	void AddToTribeLog(int TribeId, FString* NewLog) { NativeCall<void, int, FString*>(this, "AShooterGameMode.AddToTribeLog", TribeId, NewLog); }
	TArray<APrimalDinoCharacter*>* GetOverlappingDinoCharactersOfTeamAndClass(TArray<APrimalDinoCharacter*>* result, FVector* AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<TArray<APrimalDinoCharacter*>*, TArray<APrimalDinoCharacter*>*, FVector*, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass", result, AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	int CountOverlappingDinoCharactersOfTeamAndClass(FVector* AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<int, FVector*, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass", AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	void IncrementNumDinos(int ForTeam, int ByAmount) { NativeCall<void, int, int>(this, "AShooterGameMode.IncrementNumDinos", ForTeam, ByAmount); }
	int GetNumDinosOnTeam(int OnTeam) { return NativeCall<int, int>(this, "AShooterGameMode.GetNumDinosOnTeam", OnTeam); }
	bool AllowTaming(int ForTeam) { return NativeCall<bool, int>(this, "AShooterGameMode.AllowTaming", ForTeam); }
	int ForceAddPlayerToTribe(AShooterPlayerState* ForPlayerState, FString* TribeName) { return NativeCall<int, AShooterPlayerState*, FString*>(this, "AShooterGameMode.ForceAddPlayerToTribe", ForPlayerState, TribeName); }
	int ForceCreateTribe(FString* TribeName, int TeamOverride) { return NativeCall<int, FString*, int>(this, "AShooterGameMode.ForceCreateTribe", TribeName, TeamOverride); }
	int GetNumberOfLivePlayersOnTribe(FString* TribeName) { return NativeCall<int, FString*>(this, "AShooterGameMode.GetNumberOfLivePlayersOnTribe", TribeName); }
	static bool TriggerLevelCustomEvents(UWorld* InWorld, FString* EventName) { return NativeCall<bool, UWorld*, FString*>(nullptr, "AShooterGameMode.TriggerLevelCustomEvents", InWorld, EventName); }
	void UpdateTribeAllianceData(FTribeAlliance* TribeAllianceData, TArray<unsigned int>* OldMembersArray, bool bIsAdd) { NativeCall<void, FTribeAlliance*, TArray<unsigned int>*, bool>(this, "AShooterGameMode.UpdateTribeAllianceData", TribeAllianceData, OldMembersArray, bIsAdd); }
	bool AreTribesAllied(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.AreTribesAllied", TribeID1, TribeID2); }
	void AddTribeWar(int MyTribeID, int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime, bool bForceApprove) { NativeCall<void, int, int, int, int, float, float, bool>(this, "AShooterGameMode.AddTribeWar", MyTribeID, EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime, bForceApprove); }
	void PostAlarmNotificationPlayerID(int PlayerID, FString* Title, FString* Message) { NativeCall<void, int, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotificationPlayerID", PlayerID, Title, Message); }
	void PostAlarmNotificationTribe(int TribeID, FString Title, FString Message) { NativeCall<void, int, FString, FString>(this, "AShooterGameMode.PostAlarmNotificationTribe", TribeID, Title, Message); }
	void SpawnedPawnFor(AController* PC, APawn* SpawnedPawn) { NativeCall<void, AController*, APawn*>(this, "AShooterGameMode.SpawnedPawnFor", PC, SpawnedPawn); }
	void SaveTributePlayerDatas(FString UniqueID) { NativeCall<void, FString>(this, "AShooterGameMode.SaveTributePlayerDatas", UniqueID); }
	void LoadTributePlayerDatas(FString UniqueID) { NativeCall<void, FString>(this, "AShooterGameMode.LoadTributePlayerDatas", UniqueID); }
	void DownloadTransferredPlayer(AShooterPlayerController* NewPlayer) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.DownloadTransferredPlayer", NewPlayer); }
	void CheckForDupedDinos() { NativeCall<void>(this, "AShooterGameMode.CheckForDupedDinos"); }
	void ArkMetricsAppend(FString* Type, TSharedPtr<FJsonObject, 0> Payload) { NativeCall<void, FString*, TSharedPtr<FJsonObject, 0>>(this, "AShooterGameMode.ArkMetricsAppend", Type, Payload); }
	void FlushPrimalStats(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.FlushPrimalStats", ForPC); }
	void ReassertColorization() { NativeCall<void>(this, "AShooterGameMode.ReassertColorization"); }
	void SendAllCachedArkMetrics() { NativeCall<void>(this, "AShooterGameMode.SendAllCachedArkMetrics"); }
	void HttpSendAllCachedArkMetricsRequestComplete(TSharedPtr<IHttpRequest, 0> HttpRequest, TSharedPtr<IHttpResponse, 1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 0>, TSharedPtr<IHttpResponse, 1>, bool>(this, "AShooterGameMode.HttpSendAllCachedArkMetricsRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	FString* GetServerName(FString* result, bool bNumbersAndLettersOnly) { return NativeCall<FString*, FString*, bool>(this, "AShooterGameMode.GetServerName", result, bNumbersAndLettersOnly); }
	void ChatLogAppend(AShooterPlayerController* SenderController, FChatMessage* Msg) { NativeCall<void, AShooterPlayerController*, FChatMessage*>(this, "AShooterGameMode.ChatLogAppend", SenderController, Msg); }
	void ChatLogFlush(bool bFinalize) { NativeCall<void, bool>(this, "AShooterGameMode.ChatLogFlush", bFinalize); }
	bool BPIsSpawnpointAllowed_Implementation(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.BPIsSpawnpointAllowed_Implementation", SpawnPoint, Player); }
	bool BPIsSpawnpointPreferred_Implementation(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.BPIsSpawnpointPreferred_Implementation", SpawnPoint, Player); }
	AOceanDinoManager* GetOceanDinoManager() { return NativeCall<AOceanDinoManager*>(this, "AShooterGameMode.GetOceanDinoManager"); }
	void ReloadAdminIPs() { NativeCall<void>(this, "AShooterGameMode.ReloadAdminIPs"); }
	void ChatLogFlushOnTick() { NativeCall<void>(this, "AShooterGameMode.ChatLogFlushOnTick"); }
	static void StaticRegisterNativesAShooterGameMode() { NativeCall<void>(nullptr, "AShooterGameMode.StaticRegisterNativesAShooterGameMode"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "AShooterGameMode.GetPrivateStaticClass", Package); }
	void BPPreSpawnedDino(APrimalDinoCharacter* theDino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterGameMode.BPPreSpawnedDino", theDino); }
	bool CheckJoinInProgress(bool bIsFromLogin, APlayerController* NewPlayer) { return NativeCall<bool, bool, APlayerController*>(this, "AShooterGameMode.CheckJoinInProgress", bIsFromLogin, NewPlayer); }
	bool HandleNewPlayer(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	void OnLogout(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.OnLogout", Exiting); }
};

struct UPrimalGameData : UObject
{
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModName"); }
	FString& ModDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModDescription"); }
	FieldArray<FPrimalCharacterStatusValueDefinition, 12> StatusValueDefinitionsField() { return { this, "UPrimalGameData.StatusValueDefinitions" }; }
	FieldArray<FPrimalCharacterStatusStateDefinition, 14> StatusStateDefinitionsField() { return { this, "UPrimalGameData.StatusStateDefinitions" }; }
	FieldArray<FPrimalItemStatDefinition, 8> ItemStatDefinitionsField() { return { this, "UPrimalGameData.ItemStatDefinitions" }; }
	FieldArray<FPrimalItemDefinition, 9> ItemTypeDefinitionsField() { return { this, "UPrimalGameData.ItemTypeDefinitions" }; }
	FieldArray<FPrimalEquipmentDefinition, 11> EquipmentTypeDefinitionsField() { return { this, "UPrimalGameData.EquipmentTypeDefinitions" }; }
	TArray<TSubclassOf<UPrimalItem>>& MasterItemListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.MasterItemList"); }
	TArray<FPrimalItemQuality>& ItemQualityDefinitionsField() { return *GetNativePointerField<TArray<FPrimalItemQuality>*>(this, "UPrimalGameData.ItemQualityDefinitions"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& EngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.EngramBlueprintClasses"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& AdditionalEngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.AdditionalEngramBlueprintClasses"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& RemoveEngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.RemoveEngramBlueprintClasses"); }
	TArray<FStatusValueModifierDescription>& StatusValueModifierDescriptionsField() { return *GetNativePointerField<TArray<FStatusValueModifierDescription>*>(this, "UPrimalGameData.StatusValueModifierDescriptions"); }
	TArray<FString>& PlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.PlayerSpawnRegions"); }
	USoundBase* TutorialDisplaySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TutorialDisplaySound"); }
	USoundBase* Sound_StartItemDragField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartItemDrag"); }
	USoundBase* Sound_StopItemDragField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StopItemDrag"); }
	UTexture2D* PreventGrindingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PreventGrindingIcon"); }
	USoundBase* Sound_CancelPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CancelPlacingStructure"); }
	USoundBase* Sound_ChooseStructureRotationField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ChooseStructureRotation"); }
	USoundBase* Sound_FailPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_FailPlacingStructure"); }
	USoundBase* Sound_ConfirmPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ConfirmPlacingStructure"); }
	USoundBase* Sound_StartPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartPlacingStructure"); }
	USoundBase* Sound_CorpseDecomposeField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CorpseDecompose"); }
	USoundBase* Sound_ApplyLevelUpField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelUp"); }
	USoundBase* Sound_ApplyLevelPointField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelPoint"); }
	USoundBase* Sound_LearnedEngramField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_LearnedEngram"); }
	USoundBase* Sound_ReconnectToCharacterField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ReconnectToCharacter"); }
	USoundBase* Sound_DropAllItemsField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropAllItems"); }
	USoundBase* Sound_TransferAllItemsToRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsToRemote"); }
	USoundBase* Sound_TransferAllItemsFromRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsFromRemote"); }
	USoundBase* Sound_TransferItemToRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemToRemote"); }
	USoundBase* Sound_TransferItemFromRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemFromRemote"); }
	USoundBase* Sound_AddItemToSlotField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddItemToSlot"); }
	USoundBase* Sound_RemoveItemFromSlotField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemFromSlot"); }
	USoundBase* Sound_ClearCraftQueueField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ClearCraftQueue"); }
	USoundBase* Sound_AddToCraftQueueField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddToCraftQueue"); }
	USoundBase* Sound_SetRadioFrequencyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetRadioFrequency"); }
	USoundBase* Sound_AddPinToMapField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddPinToMap"); }
	USoundBase* Sound_RemovePinFromMapField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemovePinFromMap"); }
	USoundBase* Sound_ApplyDyeField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyDye"); }
	USoundBase* Sound_ApplyPaintField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyPaint"); }
	USoundBase* Sound_SetTextGenericField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetTextGeneric"); }
	USoundBase* Sound_SplitItemStackField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SplitItemStack"); }
	USoundBase* Sound_MergeItemStackField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_MergeItemStack"); }
	USoundBase* Sound_InputPinDigitField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_InputPinDigit"); }
	USoundBase* Sound_PinValidatedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinValidated"); }
	USoundBase* Sound_PinRejectedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinRejected"); }
	USoundBase* Sound_TribeWarBeginField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarBegin"); }
	USoundBase* Sound_TribeWarEndField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarEnd"); }
	USoundBase* Sound_DropInventoryItemField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropInventoryItem"); }
	USoundBase* Sound_RefillWaterContainerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RefillWaterContainer"); }
	TArray<FAppIDItem>& CoreAppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem>*>(this, "UPrimalGameData.CoreAppIDItems"); }
	TArray<FAppIDItem>& AppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem>*>(this, "UPrimalGameData.AppIDItems"); }
	TArray<UPrimalEngramEntry*> EngramBlueprintEntriesField() { return *GetNativePointerField<TArray<UPrimalEngramEntry*>*>(this, "UPrimalGameData.EngramBlueprintEntries"); }
	TArray<UGenericDataListEntry*> ExplorerNoteEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.ExplorerNoteEntriesObjects"); }
	TArray<UGenericDataListEntry*> HeadHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.HeadHairStylesEntriesObjects"); }
	TArray<UGenericDataListEntry*> FacialHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.FacialHairStylesEntriesObjects"); }
	TSubclassOf<UToolTipWidget>& DefaultToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultToolTipWidget"); }
	TSubclassOf<UPrimalItem>& StarterNoteItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.StarterNoteItem"); }
	TArray<TSubclassOf<UPrimalItem>>& PrimaryResourcesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.PrimaryResources"); }
	TSubclassOf<ADroppedItem>& GenericDroppedItemTemplateField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalGameData.GenericDroppedItemTemplate"); }
	UMaterialInterface* PostProcess_KnockoutBlurField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_KnockoutBlur"); }
	UMaterialInterface* AdditionalDeathPostProcessEffectField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.AdditionalDeathPostProcessEffect"); }
	TArray<UMaterialInterface*> BuffPostProcessEffectsField() { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "UPrimalGameData.BuffPostProcessEffects"); }
	TArray<UMaterialInterface*> AdditionalBuffPostProcessEffectsField() { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "UPrimalGameData.AdditionalBuffPostProcessEffects"); }
	TSubclassOf<ADroppedItemLowQuality>& GenericDroppedItemTemplateLowQualityField() { return *GetNativePointerField<TSubclassOf<ADroppedItemLowQuality>*>(this, "UPrimalGameData.GenericDroppedItemTemplateLowQuality"); }
	TArray<FTutorialDefinition>& TutorialDefinitionsField() { return *GetNativePointerField<TArray<FTutorialDefinition>*>(this, "UPrimalGameData.TutorialDefinitions"); }
	UTexture2D* UnknownIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnknownIcon"); }
	UMaterialInterface* UnknownMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.UnknownMaterial"); }
	UTexture2D* WhiteTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WhiteTexture"); }
	UTexture2D* BlueprintBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BlueprintBackground"); }
	UTexture2D* BabyCuddleIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BabyCuddleIcon"); }
	UTexture2D* ImprintedRiderIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ImprintedRiderIcon"); }
	UTexture2D* WeaponAccessoryActivatedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WeaponAccessoryActivatedIcon"); }
	UTexture2D* EngramBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EngramBackground"); }
	UTexture2D* VoiceChatIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatIcon"); }
	UTexture2D* VoiceChatYellingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatYellingIcon"); }
	UTexture2D* VoiceChatWhisperingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatWhisperingIcon"); }
	UTexture2D* ItemButtonRecentlySelectedBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemButtonRecentlySelectedBackground"); }
	float& GlobalGeneralArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorRatingMultiplier"); }
	float& GlobalGeneralArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorRatingMultiplier"); }
	float& EnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyFoundationPreventionRadius"); }
	TArray<FColorDefinition>& ColorDefinitionsField() { return *GetNativePointerField<TArray<FColorDefinition>*>(this, "UPrimalGameData.ColorDefinitions"); }
	TArray<UObject*> ExtraResourcesField() { return *GetNativePointerField<TArray<UObject*>*>(this, "UPrimalGameData.ExtraResources"); }
	TArray<UObject*> BaseExtraResourcesField() { return *GetNativePointerField<TArray<UObject*>*>(this, "UPrimalGameData.BaseExtraResources"); }
	USoundBase* CombatMusicDayField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay"); }
	USoundBase* CombatMusicNightField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight"); }
	USoundBase* CombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay_Heavy"); }
	USoundBase* CombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight_Heavy"); }
	USoundBase* LevelUpStingerSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.LevelUpStingerSound"); }
	USoundBase* TrackMissionSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TrackMissionSound"); }
	USoundBase* UntrackMissionSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.UntrackMissionSound"); }
	FieldArray<FPlayerCharacterGenderDefinition, 2> PlayerCharacterGenderDefinitionsField() { return { this, "UPrimalGameData.PlayerCharacterGenderDefinitions" }; }
	TSubclassOf<AGameMode>& DefaultGameModeField() { return *GetNativePointerField<TSubclassOf<AGameMode>*>(this, "UPrimalGameData.DefaultGameMode"); }
	FieldArray<FLevelExperienceRamp, 4> LevelExperienceRampsField() { return { this, "UPrimalGameData.LevelExperienceRamps" }; }
	FieldArray<FLevelExperienceRamp, 4> SinglePlayerLevelExperienceRampsField() { return { this, "UPrimalGameData.SinglePlayerLevelExperienceRamps" }; }
	TArray<FNamedTeamDefinition>& NamedTeamDefinitionsField() { return *GetNativePointerField<TArray<FNamedTeamDefinition>*>(this, "UPrimalGameData.NamedTeamDefinitions"); }
	TArray<int>& PlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int>*>(this, "UPrimalGameData.PlayerLevelEngramPoints"); }
	TArray<int>& PlayerLevelEngramPointsSPField() { return *GetNativePointerField<TArray<int>*>(this, "UPrimalGameData.PlayerLevelEngramPointsSP"); }
	TArray<FString>& PreventBuildStructureReasonStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.PreventBuildStructureReasonStrings"); }
	TArray<FExplorerNoteAchievement>& ExplorerNoteAchievementsField() { return *GetNativePointerField<TArray<FExplorerNoteAchievement>*>(this, "UPrimalGameData.ExplorerNoteAchievements"); }
	TArray<FClassRemapping>& Remap_NPCField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_NPC"); }
	TArray<FClassRemapping>& Remap_SupplyCratesField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_SupplyCrates"); }
	TArray<FActiveEventSupplyCrateWeight>& Remap_ActiveEventSupplyCratesField() { return *GetNativePointerField<TArray<FActiveEventSupplyCrateWeight>*>(this, "UPrimalGameData.Remap_ActiveEventSupplyCrates"); }
	TArray<FClassRemapping>& Remap_ResourceComponentsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_ResourceComponents"); }
	TArray<FClassRemapping>& Remap_NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_NPCSpawnEntries"); }
	TArray<FClassRemapping>& Remap_EngramsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_Engrams"); }
	TArray<FClassRemapping>& Remap_ItemsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_Items"); }
	TArray<FClassAddition>& AdditionalStructureEngramsField() { return *GetNativePointerField<TArray<FClassAddition>*>(this, "UPrimalGameData.AdditionalStructureEngrams"); }
	TArray<FBuffAddition>& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition>*>(this, "UPrimalGameData.AdditionalDefaultBuffs"); }
	TArray<FAvailableMission>& AvailableMissionsField() { return *GetNativePointerField<TArray<FAvailableMission>*>(this, "UPrimalGameData.AvailableMissions"); }
	TSubclassOf<AActor>& ActorToSpawnUponEnemyCoreStructureDeathField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.ActorToSpawnUponEnemyCoreStructureDeath"); }
	TArray<TSubclassOf<APrimalStructure>>& AdditionalStructuresToPlaceField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "UPrimalGameData.AdditionalStructuresToPlace"); }
	TArray<TSubclassOf<UPrimalItem_Dye>>& MasterDyeListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem_Dye>>*>(this, "UPrimalGameData.MasterDyeList"); }
	TArray<FColor>& MasterColorTableField() { return *GetNativePointerField<TArray<FColor>*>(this, "UPrimalGameData.MasterColorTable"); }
	float& EnemyCoreStructureDeathActorRadiusBuildCheckField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyCoreStructureDeathActorRadiusBuildCheck"); }
	TSubclassOf<APrimalStructureItemContainer>& DeathDestructionDepositInventoryClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "UPrimalGameData.DeathDestructionDepositInventoryClass"); }
	UTexture2D* MateBoostIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MateBoostIcon"); }
	UTexture2D* EggBoostIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EggBoostIcon"); }
	UTexture2D* MatingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MatingIcon"); }
	UTexture2D* NearFeedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NearFeedIcon"); }
	UTexture2D* BuffedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BuffedIcon"); }
	UTexture2D* TethererdIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TethererdIcon"); }
	UTexture2D* GamepadFaceButtonTopField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.GamepadFaceButtonTop"); }
	UTexture2D* GamepadFaceButtonBottomField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.GamepadFaceButtonBottom"); }
	UTexture2D* GamepadFaceButtonLeftField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.GamepadFaceButtonLeft"); }
	UTexture2D* GamepadFaceButtonRightField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.GamepadFaceButtonRight"); }
	TSubclassOf<UUI_XBoxFooter>& FooterTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_XBoxFooter>*>(this, "UPrimalGameData.FooterTemplate"); }
	float& TribeXPSharePercentField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.TribeXPSharePercent"); }
	int& OverrideServerPhysXSubstepsField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.OverrideServerPhysXSubsteps"); }
	float& OverrideServerPhysXSubstepsDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideServerPhysXSubstepsDeltaTime"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bInitialized"); }
	FieldArray<USoundBase*, 3> Sound_TamedDinosField() { return { this, "UPrimalGameData.Sound_TamedDinos" }; }
	USoundBase* Sound_ItemStartCraftingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartCrafting"); }
	USoundBase* Sound_ItemFinishCraftingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishCrafting"); }
	USoundBase* Sound_ItemStartRepairingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartRepairing"); }
	USoundBase* Sound_ItemFinishRepairingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishRepairing"); }
	TSubclassOf<UUI_Notification>& NotifClassField() { return *GetNativePointerField<TSubclassOf<UUI_Notification>*>(this, "UPrimalGameData.NotifClass"); }
	TSubclassOf<UPrimalStructureToolTipWidget>& StructureDefaultOverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureToolTipWidget>*>(this, "UPrimalGameData.StructureDefaultOverlayToolTipWidget"); }
	float& MinPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinPaintDurationConsumption"); }
	float& MaxPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxPaintDurationConsumption"); }
	float& MinDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinDinoRadiusForPaintConsumption"); }
	float& MaxDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxDinoRadiusForPaintConsumption"); }
	TArray<FDinoBabySetup>& DinoBabySetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup>*>(this, "UPrimalGameData.DinoBabySetups"); }
	TArray<FDinoBabySetup>& DinoGestationSetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup>*>(this, "UPrimalGameData.DinoGestationSetups"); }
	TSubclassOf<UPrimalItem>& SoapItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.SoapItemTemplate"); }
	UTexture2D* NameTagWildcardAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagWildcardAdmin"); }
	UTexture2D* NameTagServerAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagServerAdmin"); }
	UTexture2D* NameTagTribeAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagTribeAdmin"); }
	TArray<UTexture2D*> BadgeGroupsNameTagField() { return *GetNativePointerField<TArray<UTexture2D*>*>(this, "UPrimalGameData.BadgeGroupsNameTag"); }
	TArray<FString>& AchievementIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.AchievementIDs"); }
	TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>& AchievementIDSetField() { return *GetNativePointerField<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>*>(this, "UPrimalGameData.AchievementIDSet"); }
	TArray<float>& AdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalGameData.AdditionalEggWeightsToSpawn"); }
	TArray<TSubclassOf<UPrimalItem>>& AdditionalEggItemsToSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.AdditionalEggItemsToSpawn"); }
	TArray<float>& FertilizedAdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalGameData.FertilizedAdditionalEggWeightsToSpawn"); }
	TArray<TSubclassOf<UPrimalItem>>& FertilizedAdditionalEggItemsToSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.FertilizedAdditionalEggItemsToSpawn"); }
	FString& ItemAchievementsNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ItemAchievementsName"); }
	TArray<TSubclassOf<UPrimalItem>>& ItemAchievementsListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.ItemAchievementsList"); }
	TArray<TSubclassOf<UPrimalItem>>& GlobalCuddleFoodListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.GlobalCuddleFoodList"); }
	TArray<FMultiAchievement>& MultiAchievementsField() { return *GetNativePointerField<TArray<FMultiAchievement>*>(this, "UPrimalGameData.MultiAchievements"); }
	USoundBase* DinoIncrementedImprintingSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.DinoIncrementedImprintingSound"); }
	USoundBase* HitMarkerCharacterSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerCharacterSound"); }
	USoundBase* HitMarkerStructureSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerStructureSound"); }
	TArray<FNPCSpawnEntriesContainerAdditions>& TheNPCSpawnEntriesContainerAdditionsField() { return *GetNativePointerField<TArray<FNPCSpawnEntriesContainerAdditions>*>(this, "UPrimalGameData.TheNPCSpawnEntriesContainerAdditions"); }
	UMaterialInterface* PostProcess_ColorLUTField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_ColorLUT"); }
	TSubclassOf<UPrimalStructureSettings>& DefaultStructureSettingsField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "UPrimalGameData.DefaultStructureSettings"); }
	USoundBase* Sound_DossierUnlockedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DossierUnlocked"); }
	USoundBase* Sound_ItemUseOnItemField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemUseOnItem"); }
	USoundBase* Sound_RemoveItemSkinField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemSkin"); }
	USoundBase* Sound_RemoveClipAmmoField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveClipAmmo"); }
	TArray<FExplorerNoteEntry>& ExplorerNoteEntriesField() { return *GetNativePointerField<TArray<FExplorerNoteEntry>*>(this, "UPrimalGameData.ExplorerNoteEntries"); }
	float& ExplorerNoteXPGainField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.ExplorerNoteXPGain"); }
	FieldArray<UTexture2D* [3], 23> BuffTypeBackgroundsField() { return { this, "UPrimalGameData.BuffTypeBackgrounds" }; }
	FieldArray<UTexture2D* [3], 23> BuffTypeForegroundsField() { return { this, "UPrimalGameData.BuffTypeForegrounds" }; }
	TSubclassOf<APrimalBuff>& ExplorerNoteXPBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "UPrimalGameData.ExplorerNoteXPBuff"); }
	TSubclassOf<APrimalBuff>& SpecialExplorerNoteXPBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "UPrimalGameData.SpecialExplorerNoteXPBuff"); }
	UTexture2D* PerMapExplorerNoteLockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PerMapExplorerNoteLockedIcon"); }
	UTexture2D* TamedDinoUnlockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoUnlockedIcon"); }
	UTexture2D* TamedDinoLockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoLockedIcon"); }
	TArray<FUnlockableEmoteEntry>& UnlockableEmotesField() { return *GetNativePointerField<TArray<FUnlockableEmoteEntry>*>(this, "UPrimalGameData.UnlockableEmotes"); }
	TArray<FClassRemappingWeight>& GlobalNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "UPrimalGameData.GlobalNPCRandomSpawnClassWeights"); }
	UTexture2D* DinoOrderIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.DinoOrderIcon"); }
	TSubclassOf<APrimalEmitterSpawnable>& DinoOrderEffect_MoveToField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "UPrimalGameData.DinoOrderEffect_MoveTo"); }
	TSubclassOf<APrimalEmitterSpawnable>& DinoOrderEffect_AttackTargetField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "UPrimalGameData.DinoOrderEffect_AttackTarget"); }
	TArray<FObjectCorrelation>& AdditionalHumanMaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanFemaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanMaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimMontagesOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanFemaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimMontagesOverrides"); }
	TArray<TSubclassOf<AActor>>& ServerExtraWorldSingletonActorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "UPrimalGameData.ServerExtraWorldSingletonActorClasses"); }
	bool& bForceServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bForceServerUseDinoList"); }
	TArray<TSubclassOf<UPrimalGameData>>& ExtraStackedGameDataClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalGameData>>*>(this, "UPrimalGameData.ExtraStackedGameDataClasses"); }
	TArray<FHairStyleDefinition>& HeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.HeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& FacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.FacialHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& AdditionalHeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.AdditionalHeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& AdditionalFacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.AdditionalFacialHairStyleDefinitions"); }
	USoundBase* GenericWaterPostprocessAmbientSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericWaterPostprocessAmbientSound"); }
	TSubclassOf<UPrimalPlayerData>& OverridePlayerDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalPlayerData>*>(this, "UPrimalGameData.OverridePlayerDataClass"); }
	TArray<FName>& AllDinosAchievementNameTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalGameData.AllDinosAchievementNameTags"); }
	USoundBase* GenericArrowPickedUpSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericArrowPickedUpSound"); }
	UTexture2D* UnlockIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnlockIcon"); }
	FColor& WheelFolderColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelFolderColor"); }
	FColor& WheelBackColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelBackColor"); }
	UTexture2D* MaxInventoryIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MaxInventoryIcon"); }
	UTexture2D* ItemSkinIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemSkinIcon"); }
	TArray<TEnumAsByte<enum ECollisionChannel>>& SkeletalPhysCustomBodyAdditionalIgnoresField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ECollisionChannel>>*>(this, "UPrimalGameData.SkeletalPhysCustomBodyAdditionalIgnores"); }
	USoundBase* ActionWheelClickSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelClickSound"); }
	USoundBase* Sound_GenericBoardPassengerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericBoardPassenger"); }
	USoundBase* Sound_GenericUnboardPassengerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericUnboardPassenger"); }
	USoundBase* Sound_CraftingTabToggleField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CraftingTabToggle"); }
	TSubclassOf<UPrimalItem>& GenericBatteryItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.GenericBatteryItemClass"); }
	TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapKeyFuncs<UClass*, UPrimalEngramEntry*, 0> > ItemEngramMapField() { return *GetNativePointerField<TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapKeyFuncs<UClass*, UPrimalEngramEntry*, 0> >*>(this, "UPrimalGameData.ItemEngramMap"); }
	TArray<TSubclassOf<UPrimalItem>>& GenesisSeasonPassItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.GenesisSeasonPassItems"); }
	TArray<TSubclassOf<UHexagonTradableOption>>& DefaultTradableOptionsField() { return *GetNativePointerField<TArray<TSubclassOf<UHexagonTradableOption>>*>(this, "UPrimalGameData.DefaultTradableOptions"); }
	TArray<TSubclassOf<UHexagonTradableOption>>& AdditionalTradableOptionsField() { return *GetNativePointerField<TArray<TSubclassOf<UHexagonTradableOption>>*>(this, "UPrimalGameData.AdditionalTradableOptions"); }
	bool& bWantsToRunMissionsField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bWantsToRunMissions"); }

	// Functions

	int GetItemQualityIndex(float ItemRating) { return NativeCall<int, float>(this, "UPrimalGameData.GetItemQualityIndex", ItemRating); }
	void Initialize() { NativeCall<void>(this, "UPrimalGameData.Initialize"); }
	FLinearColor* GetColorForDefinition(FLinearColor* result, int DefinitionIndex) { return NativeCall<FLinearColor*, FLinearColor*, int>(this, "UPrimalGameData.GetColorForDefinition", result, DefinitionIndex); }
	int GetDefinitionIndexForColorName(FName ColorName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetDefinitionIndexForColorName", ColorName); }
	bool CanTeamTarget(int attackerTeam, int victimTeam, int originalVictimTargetingTeam, AActor* Attacker, AActor* Victim) { return NativeCall<bool, int, int, int, AActor*, AActor*>(this, "UPrimalGameData.CanTeamTarget", attackerTeam, victimTeam, originalVictimTargetingTeam, Attacker, Victim); }
	bool CanTeamDamage(int attackerTeam, int victimTeam, AActor* Attacker) { return NativeCall<bool, int, int, AActor*>(this, "UPrimalGameData.CanTeamDamage", attackerTeam, victimTeam, Attacker); }
	int GetNamedTargetingTeamIndex(FName TargetingTeamName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetNamedTargetingTeamIndex", TargetingTeamName); }
	float GetTeamTargetingDesirabilityMultiplier(int attackerTeam, int victimTeam) { return NativeCall<float, int, int>(this, "UPrimalGameData.GetTeamTargetingDesirabilityMultiplier", attackerTeam, victimTeam); }
	TSubclassOf<UObject>* GetRedirectedClass(TSubclassOf<UObject>* result, FString* key) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, FString*>(this, "UPrimalGameData.GetRedirectedClass", result, key); }
	USoundBase* GetGenericCombatMusic_Implementation(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*>(this, "UPrimalGameData.GetGenericCombatMusic_Implementation", forCharacter, forEnemy); }
	FLevelExperienceRamp* GetLevelExperienceRamp(ELevelExperienceRampType::Type levelType) { return NativeCall<FLevelExperienceRamp*, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelExperienceRamp", levelType); }
	TArray<int>* GetPlayerLevelEngramPoints() { return NativeCall<TArray<int>*>(this, "UPrimalGameData.GetPlayerLevelEngramPoints"); }
	static TSubclassOf<UObject>* GetRemappedClass(TSubclassOf<UObject>* result, TArray<FClassRemapping>* RemappedClasses, TSubclassOf<UObject> ForClass) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, TArray<FClassRemapping>*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetRemappedClass", result, RemappedClasses, ForClass); }
	static void GetClassAdditions(TArray<TSubclassOf<UObject>>* TheClassAdditions, TArray<FClassAddition>* ClassAdditions, TSubclassOf<UObject> ForClass) { NativeCall<void, TArray<TSubclassOf<UObject>>*, TArray<FClassAddition>*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetClassAdditions", TheClassAdditions, ClassAdditions, ForClass); }
	TArray<FString>* GetPlayerSpawnRegions(UWorld* ForWorld) { return NativeCall<TArray<FString>*, UWorld*>(this, "UPrimalGameData.GetPlayerSpawnRegions", ForWorld); }
	bool MergeModData(UPrimalGameData* InMergeCanidate) { return NativeCall<bool, UPrimalGameData*>(this, "UPrimalGameData.MergeModData", InMergeCanidate); }
	TArray<FColor>* GetGlobalColorTable(TArray<FColor>* result) { return NativeCall<TArray<FColor>*, TArray<FColor>*>(this, "UPrimalGameData.GetGlobalColorTable", result); }
	FDinoBabySetup* GetDinoBabySetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup*, FName>(this, "UPrimalGameData.GetDinoBabySetup", DinoNameTag); }
	FDinoBabySetup* GetDinoGestationSetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup*, FName>(this, "UPrimalGameData.GetDinoGestationSetup", DinoNameTag); }
	static bool LocalIsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsPerMapExplorerNoteUnlocked", ExplorerNoteIndex); }
	bool LocalIsTamedDinoTagUnlocked(FName DinoNameTag) { return NativeCall<bool, FName>(this, "UPrimalGameData.LocalIsTamedDinoTagUnlocked", DinoNameTag); }
	int GetEngramRequirementLevel(UClass* ItemClass) { return NativeCall<int, UClass*>(this, "UPrimalGameData.GetEngramRequirementLevel", ItemClass); }
	static bool LocalIsGlobalExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsGlobalExplorerNoteUnlocked", ExplorerNoteIndex); }
	static UPrimalGameData* BPGetGameData() { return NativeCall<UPrimalGameData*>(nullptr, "UPrimalGameData.BPGetGameData"); }
	int BPGetItemQualityIndex(float ItemRating) { return NativeCall<int, float>(this, "UPrimalGameData.BPGetItemQualityIndex", ItemRating); }
	FString* GetExplorerNoteDescription(FString* result, int ExplorerNoteIndex) { return NativeCall<FString*, FString*, int>(this, "UPrimalGameData.GetExplorerNoteDescription", result, ExplorerNoteIndex); }
	int GetLevelMax(ELevelExperienceRampType::Type levelType) { return NativeCall<int, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelMax", levelType); }
	float GetXPMax(ELevelExperienceRampType::Type levelType) { return NativeCall<float, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetXPMax", levelType); }
	float GetLevelXP(ELevelExperienceRampType::Type levelType, int forLevel) { return NativeCall<float, ELevelExperienceRampType::Type, int>(this, "UPrimalGameData.GetLevelXP", levelType, forLevel); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalGameData.StaticClass"); }
	static void StaticRegisterNativesUPrimalGameData() { NativeCall<void>(nullptr, "UPrimalGameData.StaticRegisterNativesUPrimalGameData"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UPrimalGameData.GetPrivateStaticClass", Package); }
	void BPInitializeGameData() { NativeCall<void>(this, "UPrimalGameData.BPInitializeGameData"); }
	void BPMergeModGameData(UPrimalGameData* AnotherGameData) { NativeCall<void, UPrimalGameData*>(this, "UPrimalGameData.BPMergeModGameData", AnotherGameData); }
	USoundBase* GetGenericCombatMusic(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*>(this, "UPrimalGameData.GetGenericCombatMusic", forCharacter, forEnemy); }
	void LoadedWorld(UWorld* TheWorld) { NativeCall<void, UWorld*>(this, "UPrimalGameData.LoadedWorld", TheWorld); }
	void TickedWorld(UWorld* TheWorld, float DeltaTime) { NativeCall<void, UWorld*, float>(this, "UPrimalGameData.TickedWorld", TheWorld, DeltaTime); }
};

struct ACustomGameMode : AShooterGameMode
{
};

struct UGameInstance : UObject //, FExec
{
	/*FWorldContext *WorldContext;
	TArray<ULocalPlayer *, FDefaultAllocator> LocalPlayers;
	FString PIEMapName;*/
};
