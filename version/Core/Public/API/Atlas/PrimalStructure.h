#pragma once

struct APrimalTargetableActor : AActor
{
	float& LowHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LowHealthPercentage"); }
	TSubclassOf<AActor>& DestructionActorTemplateField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalTargetableActor.DestructionActorTemplate"); }
	float& LifeSpanAfterDeathField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LifeSpanAfterDeath"); }
	USoundCue * DeathSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalTargetableActor.DeathSound"); }
	float& PassiveDamageHealthReplicationPercentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.PassiveDamageHealthReplicationPercentInterval"); }
	float& PassiveDamageHealthReplicationPercentIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.PassiveDamageHealthReplicationPercentIntervalMax"); }
	float& DamageNotifyTeamAggroMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroMultiplier"); }
	float& DamageNotifyTeamAggroRangeField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroRange"); }
	float& DamageNotifyTeamAggroRangeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroRangeFalloff"); }
	FVector& NewDestructibleMeshLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalTargetableActor.NewDestructibleMeshLocationOffset"); }
	FVector& NewDestructibleMeshScaleOverrideField() { return *GetNativePointerField<FVector*>(this, "APrimalTargetableActor.NewDestructibleMeshScaleOverride"); }
	FRotator& NewDestructibleMeshRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalTargetableActor.NewDestructibleMeshRotationOffset"); }
	FString& DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "APrimalTargetableActor.DescriptiveName"); }
	TSubclassOf<ADestroyedMeshActor>& DestroyedMeshActorClassField() { return *GetNativePointerField<TSubclassOf<ADestroyedMeshActor>*>(this, "APrimalTargetableActor.DestroyedMeshActorClass"); }
	bool& bPreventDestructionMeshField() { return *GetNativePointerField<bool*>(this, "APrimalTargetableActor.bPreventDestructionMesh"); }
	bool& bUseSimpleFadingDestructionMeshField() { return *GetNativePointerField<bool*>(this, "APrimalTargetableActor.bUseSimpleFadingDestructionMesh"); }
	float& ReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.ReplicatedHealth"); }
	float& HealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.Health"); }
	float& MaxHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.MaxHealth"); }
	float& NewDestructibleMeshDeathImpulseScaleField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.NewDestructibleMeshDeathImpulseScale"); }
	float& NewMinDestructibleDeathImpulseField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.NewMinDestructibleDeathImpulse"); }
	float& DestructibleImpulseReplacementForZeroDeathImpulseField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DestructibleImpulseReplacementForZeroDeathImpulse"); }
	float& DestructibleMeshImpulseZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DestructibleMeshImpulseZOffset"); }
	float& LastReplicatedHealthValueField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealthValue"); }
	TSubclassOf<UPrimalStructureSettings>& StructureSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "APrimalTargetableActor.StructureSettingsClass"); }
	TSubclassOf<UPrimalStructureSettings>& ShipStructureSettingsClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "APrimalTargetableActor.ShipStructureSettingsClassOverride"); }
	UPrimalStructureSettings * MyStructureSettingsCDOField() { return *GetNativePointerField<UPrimalStructureSettings **>(this, "APrimalTargetableActor.MyStructureSettingsCDO"); }
	float& LastHealthBeforeTakeDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastHealthBeforeTakeDamage"); }
	long double& NextAllowRepairTimeField() { return *GetNativePointerField<long double*>(this, "APrimalTargetableActor.NextAllowRepairTime"); }
	float& BaseTargetingDesirabilityField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.BaseTargetingDesirability"); }
	float& LastPreBlueprintAdjustmentActualDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastPreBlueprintAdjustmentActualDamage"); }
	float& LastReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealth"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bDestructionActorTemplateServerOnly() { return { this, "APrimalTargetableActor.bDestructionActorTemplateServerOnly" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyedMeshUseSkeletalMeshComponent() { return { this, "APrimalTargetableActor.bDestroyedMeshUseSkeletalMeshComponent" }; }
	BitFieldValue<bool, unsigned __int32> bPreventZeroDamageInstigatorSelfDamage() { return { this, "APrimalTargetableActor.bPreventZeroDamageInstigatorSelfDamage" }; }
	BitFieldValue<bool, unsigned __int32> bWasDamaged() { return { this, "APrimalTargetableActor.bWasDamaged" }; }
	BitFieldValue<bool, unsigned __int32> bIsDead() { return { this, "APrimalTargetableActor.bIsDead" }; }
	BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAI() { return { this, "APrimalTargetableActor.bDamageNotifyTeamAggroAI" }; }
	BitFieldValue<bool, unsigned __int32> bSetWithinPreventionVolume() { return { this, "APrimalTargetableActor.bSetWithinPreventionVolume" }; }
	BitFieldValue<bool, unsigned __int32> bWithinPreventionVolume() { return { this, "APrimalTargetableActor.bWithinPreventionVolume" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDamageByFriendlyDinos() { return { this, "APrimalTargetableActor.bAllowDamageByFriendlyDinos" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage() { return { this, "APrimalTargetableActor.bUseBPAdjustDamage" }; }
	BitFieldValue<bool, unsigned __int32> bForceZeroDamageProcessing() { return { this, "APrimalTargetableActor.bForceZeroDamageProcessing" }; }
	BitFieldValue<bool, unsigned __int32> bForceFloatingDamageNumbers() { return { this, "APrimalTargetableActor.bForceFloatingDamageNumbers" }; }
	BitFieldValue<bool, unsigned __int32> bDoAllowRadialDamageWithoutVisiblityTrace() { return { this, "APrimalTargetableActor.bDoAllowRadialDamageWithoutVisiblityTrace" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDestructionEffects() { return { this, "APrimalTargetableActor.bIgnoreDestructionEffects" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDamageRepairCooldown() { return { this, "APrimalTargetableActor.bIgnoreDamageRepairCooldown" }; }
	BitFieldValue<bool, unsigned __int32> bUseHarvestingComponent() { return { this, "APrimalTargetableActor.bUseHarvestingComponent" }; }
	BitFieldValue<bool, unsigned __int32> bPreventHUD() { return { this, "APrimalTargetableActor.bPreventHUD" }; }
	BitFieldValue<bool, unsigned __int32> bDrawHealthBar() { return { this, "APrimalTargetableActor.bDrawHealthBar" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideHealthBarHealthPercent() { return { this, "APrimalTargetableActor.bUseBPOverrideHealthBarHealthPercent" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideGetOwningDino() { return { this, "APrimalTargetableActor.bBPOverrideGetOwningDino" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideGetLocation() { return { this, "APrimalTargetableActor.bBPOverrideGetLocation" }; }
	BitFieldValue<bool, unsigned __int32> bDestructibleMeshImpulseUseBoundsCenter() { return { this, "APrimalTargetableActor.bDestructibleMeshImpulseUseBoundsCenter" }; }
	BitFieldValue<bool, unsigned __int32> bBlueprintDrawHUD() { return { this, "APrimalTargetableActor.bBlueprintDrawHUD" }; }

	// Functions

	UObject * GetUObjectInterfaceTargetableInterface() { return NativeCall<UObject *>(this, "APrimalTargetableActor.GetUObjectInterfaceTargetableInterface"); }
	void AdjustDamage(float * Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float *, FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool AllowRadialDamageWithoutVisiblityTrace(FHitResult * Hit) { return NativeCall<bool, FHitResult *>(this, "APrimalTargetableActor.AllowRadialDamageWithoutVisiblityTrace", Hit); }
	void BeginPlay() { NativeCall<void>(this, "APrimalTargetableActor.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "APrimalTargetableActor.Destroyed"); }
	bool Die(float KillingDamage, FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalTargetableActor.DrawHUD", HUD); }
	void FellOutOfWorld(UDamageType * dmgType) { NativeCall<void, UDamageType *>(this, "APrimalTargetableActor.FellOutOfWorld", dmgType); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalTargetableActor.GetDescriptiveName", result); }
	float GetHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealth"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealthPercentage"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalTargetableActor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetMaxHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetMaxHealth"); }
	float GetStructureRepairCooldownTime() { return NativeCall<float>(this, "APrimalTargetableActor.GetStructureRepairCooldownTime"); }
	float GetTargetingDesirability(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>(this, "APrimalTargetableActor.GetTargetingDesirability", Attacker); }
	bool IsAlive() { return NativeCall<bool>(this, "APrimalTargetableActor.IsAlive"); }
	bool IsDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsDead"); }
	bool IsInvincible() { return NativeCall<bool>(this, "APrimalTargetableActor.IsInvincible"); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "APrimalTargetableActor.IsOfTribe", ID); }
	bool IsTargetableDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsTargetableDead"); }
	bool NetExecCommand(FName CommandName, FNetExecParams * ExecParams) { return NativeCall<bool, FName, FNetExecParams *>(this, "APrimalTargetableActor.NetExecCommand", CommandName, ExecParams); }
	void NetUpdatedHealth_Implementation(int NewHealth) { NativeCall<void, int>(this, "APrimalTargetableActor.NetUpdatedHealth_Implementation", NewHealth); }
	void OnRep_ReplicatedHealth() { NativeCall<void>(this, "APrimalTargetableActor.OnRep_ReplicatedHealth"); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingGeneric_Implementation(float KillingDamage, FPointDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingGeneric_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial_Implementation(float KillingDamage, FRadialDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingRadial_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffect(float DamageTaken, FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *, bool>(this, "APrimalTargetableActor.PlayHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void PlayHitEffectPoint_Implementation(float DamageTaken, FPointDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectPoint_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial_Implementation(float DamageTaken, FRadialDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectRadial_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalTargetableActor.PostInitializeComponents"); }
	float SetHealth(float newHealth) { return NativeCall<float, float>(this, "APrimalTargetableActor.SetHealth", newHealth); }
	void SetMaxHealth(float newMaxHealth) { NativeCall<void, float>(this, "APrimalTargetableActor.SetMaxHealth", newMaxHealth); }
	void Suicide() { NativeCall<void>(this, "APrimalTargetableActor.Suicide"); }
	float TakeDamage(float Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalTargetableActor.UpdatedHealth", bDoReplication); }
	long double BPGetLastDamagedTime() { return NativeCall<long double>(this, "APrimalTargetableActor.BPGetLastDamagedTime"); }
	APrimalDinoCharacter * BPGetOwningDino() { return NativeCall<APrimalDinoCharacter *>(this, "APrimalTargetableActor.BPGetOwningDino"); }
	void BPHitEffect(float DamageTaken, FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath, UPrimitiveComponent * HitComponent, FVector DamageLoc, FRotator HitNormal) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *, bool, UPrimitiveComponent *, FVector, FRotator>(this, "APrimalTargetableActor.BPHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent, DamageLoc, HitNormal); }
	FVector * BPOverrideGetLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalTargetableActor.BPOverrideGetLocation", result); }
	float BPOverrideHealthBarHealthPercent() { return NativeCall<float>(this, "APrimalTargetableActor.BPOverrideHealthBarHealthPercent"); }
	bool BPShouldShowHealthBar() { return NativeCall<bool>(this, "APrimalTargetableActor.BPShouldShowHealthBar"); }
	void BPSpawnedDestroyedMeshActor(AActor * DestroyedMeshActor) { NativeCall<void, AActor *>(this, "APrimalTargetableActor.BPSpawnedDestroyedMeshActor", DestroyedMeshActor); }
	bool BPSupressImpactEffects(float DamageTaken, FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath, UPrimitiveComponent * HitComponent) { return NativeCall<bool, float, FDamageEvent *, APawn *, AActor *, bool, UPrimitiveComponent *>(this, "APrimalTargetableActor.BPSupressImpactEffects", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent); }
	void BlueprintDrawHUD(AShooterHUD * HUD, float CenterX, float CenterY) { NativeCall<void, AShooterHUD *, float, float>(this, "APrimalTargetableActor.BlueprintDrawHUD", HUD, CenterX, CenterY); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalTargetableActor.GetPrivateStaticClass", Package); }
	void PlayDyingRadial(float KillingDamage, FRadialDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingRadial", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectGeneric(float DamageTaken, FDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectGeneric", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial(float DamageTaken, FRadialDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectRadial", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	static void StaticRegisterNativesAPrimalTargetableActor() { NativeCall<void>(nullptr, "APrimalTargetableActor.StaticRegisterNativesAPrimalTargetableActor"); }
	void GetDestructionEffectTransform(FVector * OutEffectLoc, FRotator * OutEffectRot) { NativeCall<void, FVector *, FRotator *>(this, "APrimalTargetableActor.GetDestructionEffectTransform", OutEffectLoc, OutEffectRot); }
	FString * GetShortName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalTargetableActor.GetShortName", result); }
	float GetLowHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetLowHealthPercentage"); }
};

struct APrimalStructure : APrimalTargetableActor
{
	FVector2D& OverlayTooltipPaddingField() { return *GetNativePointerField<FVector2D*>(this, "APrimalStructure.OverlayTooltipPadding"); }
	FVector2D& OverlayTooltipScaleField() { return *GetNativePointerField<FVector2D*>(this, "APrimalStructure.OverlayTooltipScale"); }
	FString& StatsPanelStructureTitleField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.StatsPanelStructureTitle"); }
	FString& RemoteInventoryTitleField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.RemoteInventoryTitle"); }
	bool& bHideStatusBarsField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bHideStatusBars"); }
	TSubclassOf<UPrimalStructureSnapSettings>& StructureSnapSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSnapSettings>*>(this, "APrimalStructure.StructureSnapSettingsClass"); }
	TSubclassOf<UPrimalItem>& ConsumesPrimalItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructure.ConsumesPrimalItem"); }
	float& ScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ScaleFactor"); }
	int& StructureSnapTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureSnapTypeFlags"); }
	TArray<FPrimalStructureSnapPoint>& SnapPointsField() { return *GetNativePointerField<TArray<FPrimalStructureSnapPoint>*>(this, "APrimalStructure.SnapPoints"); }
	float& PlacementOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementOffsetForVerticalGround"); }
	float& PlacementInitialTracePointOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementInitialTracePointOffsetForVerticalGround"); }
	TArray<TSubclassOf<APrimalStructure>>& StructuresAllowedToBeVerticalGroundField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.StructuresAllowedToBeVerticalGround"); }
	float& TraceDistanceFromActorToWallVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.TraceDistanceFromActorToWallVerticalGround"); }
	FVector& PlacementHitLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementHitLocOffset"); }
	FVector& PlacementEncroachmentCheckOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementEncroachmentCheckOffset"); }
	FVector& PlacementEncroachmentBoxExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementEncroachmentBoxExtent"); }
	FVector& PlacementTraceScaleField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementTraceScale"); }
	FVector& SnapAlternatePlacementTraceScaleField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.SnapAlternatePlacementTraceScale"); }
	FRotator& PlacementRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PlacementRotOffset"); }
	FRotator& PlacementTraceRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PlacementTraceRotOffset"); }
	FRotator& SnappingRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.SnappingRotationOffset"); }
	float& RepairAmountRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairAmountRemaining"); }
	float& RepairCheckIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairCheckInterval"); }
	float& PlacementFloorCheckZExtentUpField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtentUp"); }
	float& RepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairPercentPerInterval"); }
	float& DecayDestructionPeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriod"); }
	TArray<TSubclassOf<APrimalStructure>>& PreventPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.PreventPlacingOnFloorClasses"); }
	TArray<FName>& PreventPlacingOnFloorTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.PreventPlacingOnFloorTags"); }
	TArray<TSubclassOf<APrimalStructure>>& AllowPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.AllowPlacingOnFloorClasses"); }
	TSubobjectPtr<USceneComponent>& MyRootTransformField() { return *GetNativePointerField<TSubobjectPtr<USceneComponent>*>(this, "APrimalStructure.MyRootTransform"); }
	int& TraceIgnoreStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.TraceIgnoreStructuresWithTypeFlags"); }
	int& bTraceCheckOnlyUseStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.bTraceCheckOnlyUseStructuresWithTypeFlags"); }
	FieldArray<char, 6> AllowStructureColorSetsField() { return {this, "APrimalStructure.AllowStructureColorSets"}; }
	FieldArray<char, 6> AlternateStructureColorSetsField() { return {this, "APrimalStructure.AlternateStructureColorSets"}; }
	FVector& WaterVolumeCheckPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.WaterVolumeCheckPointOffset"); }
	float& WaterPlacementMinimumWaterHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.WaterPlacementMinimumWaterHeight"); }
	float& PlacementMaxZDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZDelta"); }
	float& PlacementChooseRotationMaxRangeOverrideField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementChooseRotationMaxRangeOverride"); }
	float& PlacementMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxRange"); }
	float& MaxSnapLocRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaxSnapLocRange"); }
	float& SnapOverlapCheckRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapOverlapCheckRadius"); }
	float& MaximumFoundationSupport2DBuildDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumFoundationSupport2DBuildDistance"); }
	float& AdditionalFoundationSupportDistanceForLinkedStructuresField() { return *GetNativePointerField<float*>(this, "APrimalStructure.AdditionalFoundationSupportDistanceForLinkedStructures"); }
	float& PlacementFloorCheckZExtentField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtent"); }
	FVector2D& PlacementFloorCheckXYExtentField() { return *GetNativePointerField<FVector2D*>(this, "APrimalStructure.PlacementFloorCheckXYExtent"); }
	float& LastHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastHealthPercentage"); }
	FRotator& TakeGroundNormalRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.TakeGroundNormalRotationOffset"); }
	FVector& ForceSnappedStructureToGroundCheckExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.ForceSnappedStructureToGroundCheckExtent"); }
	float& BarrierPlacementPreventionDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructure.BarrierPlacementPreventionDistance"); }
	FVector& OverrideCheckStructurePlacementOverlapForceEncroachmentExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.OverrideCheckStructurePlacementOverlapForceEncroachmentExtent"); }
	float& DemolishGiveItemCraftingResourcePercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishGiveItemCraftingResourcePercentage"); }
	TSubclassOf<APrimalStructure>& AllowReplacementByStructureClassTypeField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.AllowReplacementByStructureClassType"); }
	TSubclassOf<APrimalStructure>& PreventReplacementOfStructureClassTypeField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.PreventReplacementOfStructureClassType"); }
	TArray<TSubclassOf<APrimalStructure>>& PreventReplacementOfStructureClassTypesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.PreventReplacementOfStructureClassTypes"); }
	TArray<TSubclassOf<APrimalStructure>>& PreventReplacementByStructureClassTypesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.PreventReplacementByStructureClassTypes"); }
	TArray<TSubclassOf<APrimalStructure>>& AllowReplacementByStructureClassTypesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.AllowReplacementByStructureClassTypes"); }
	TArray<TSubclassOf<APrimalStructure>>& AllowReplacementOfStructureClassTypesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.AllowReplacementOfStructureClassTypes"); }
	FVector& ReplacementCheckOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.ReplacementCheckOffset"); }
	float& MaximumHeightAboveWorldGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightAboveWorldGround"); }
	float& MaximumHeightUnderWorldMaxKillZField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightUnderWorldMaxKillZ"); }
	FRotator& PreviewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PreviewCameraRotation"); }
	FVector& PreviewCameraPivotOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PreviewCameraPivotOffset"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDistanceScaleFactor"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraMaxZoomMultiplier"); }
	float& ReturnDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageAmount"); }
	int& StructureRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureRangeTypeFlag"); }
	int& LimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.LimitMaxStructuresInRangeTypeFlag"); }
	float& ReturnDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageImpulse"); }
	TSubclassOf<UDamageType>& ReturnDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructure.ReturnDamageType"); }
	TArray<TSubclassOf<UDamageType>>& ReturnDamageExcludeIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>>*>(this, "APrimalStructure.ReturnDamageExcludeIncomingTypes"); }
	TArray<TSubclassOf<UDamageType>>& ReturnDamageOnlyForIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>>*>(this, "APrimalStructure.ReturnDamageOnlyForIncomingTypes"); }
	int& OwningPlayerIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.OwningPlayerID"); }
	FString& OwningPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwningPlayerName"); }
	long double& LastInAllyRangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastInAllyRangeTime"); }
	int& LastInAllyRangeTimeSerializedField() { return *GetNativePointerField<int*>(this, "APrimalStructure.LastInAllyRangeTimeSerialized"); }
	float& DecayDestructionPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriodMultiplier"); }
	TWeakObjectPtr<APrimalDinoCharacter>& SaddleDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalStructure.SaddleDino"); }
	TArray<APrimalDinoCharacter *> LatchedDinosField() { return *GetNativePointerField<TArray<APrimalDinoCharacter *>*>(this, "APrimalStructure.LatchedDinos"); }
	UMaterialInterface * PreviewMaterialField() { return *GetNativePointerField<UMaterialInterface **>(this, "APrimalStructure.PreviewMaterial"); }
	FVector& PreviewGizmoMeshOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PreviewGizmoMeshOffset"); }
	float& PreviewGizmoMeshScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewGizmoMeshScale"); }
	TArray<APrimalStructure *> LinkedStructuresField() { return *GetNativePointerField<TArray<APrimalStructure *>*>(this, "APrimalStructure.LinkedStructures"); }
	TArray<unsigned int>& LinkedStructuresIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "APrimalStructure.LinkedStructuresID"); }
	TArray<APrimalStructure *> StructuresPlacedOnFloorField() { return *GetNativePointerField<TArray<APrimalStructure *>*>(this, "APrimalStructure.StructuresPlacedOnFloor"); }
	TArray<TSubclassOf<APrimalStructure>>& SnapToStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.SnapToStructureTypesToExclude"); }
	TArray<TSubclassOf<APrimalStructure>>& SnapFromStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.SnapFromStructureTypesToExclude"); }
	APrimalStructure * PlacedOnFloorStructureField() { return *GetNativePointerField<APrimalStructure **>(this, "APrimalStructure.PlacedOnFloorStructure"); }
	APrimalStructure * PrimarySnappedStructureChildField() { return *GetNativePointerField<APrimalStructure **>(this, "APrimalStructure.PrimarySnappedStructureChild"); }
	APrimalStructure * PrimarySnappedStructureParentField() { return *GetNativePointerField<APrimalStructure **>(this, "APrimalStructure.PrimarySnappedStructureParent"); }
	FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwnerName"); }
	FieldArray<__int16, 6> StructureColorsField() { return {this, "APrimalStructure.StructureColors"}; }
	APawn * AttachedToField() { return *GetNativePointerField<APawn **>(this, "APrimalStructure.AttachedTo"); }
	APrimalStructureExplosiveTransGPS * AttachedTransponderField() { return *GetNativePointerField<APrimalStructureExplosiveTransGPS **>(this, "APrimalStructure.AttachedTransponder"); }
	unsigned int& StructureIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.StructureID"); }
	unsigned int& AttachedToDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.AttachedToDinoID1"); }
	TArray<TSubclassOf<APrimalStructure>>& OnlyAllowStructureClassesToAttachField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.OnlyAllowStructureClassesToAttach"); }
	TArray<TSubclassOf<APrimalStructure>>& OnlyAllowStructureClassesFromAttachField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.OnlyAllowStructureClassesFromAttach"); }
	unsigned int& TaggedIndexField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndex"); }
	unsigned int& TaggedIndexTwoField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndexTwo"); }
	unsigned int& ProcessTreeTagField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.ProcessTreeTag"); }
	long double& LastStructureStasisTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastStructureStasisTime"); }
	long double& LastColorizationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastColorizationTime"); }
	UMaterialInterface * StructureIconMaterialField() { return *GetNativePointerField<UMaterialInterface **>(this, "APrimalStructure.StructureIconMaterial"); }
	UPhysicalMaterial * ForceComponentsPhysMaterialField() { return *GetNativePointerField<UPhysicalMaterial **>(this, "APrimalStructure.ForceComponentsPhysMaterial"); }
	float& ColorizationRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ColorizationRangeMultiplier"); }
	FVector& AdvancedRotationPlacementOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.AdvancedRotationPlacementOffset"); }
	FVector& SpawnEmitterLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.SpawnEmitterLocationOffset"); }
	FRotator& SpawnEmitterRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.SpawnEmitterRotationOffset"); }
	USoundBase * PlacementSoundField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructure.PlacementSound"); }
	TSubclassOf<UPrimalItem>& PickupGivesItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructure.PickupGivesItem"); }
	float& ExcludeInStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ExcludeInStructuresRadius"); }
	TArray<TSubclassOf<APrimalStructure>>& ExcludeInStructuresRadiusClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.ExcludeInStructuresRadiusClasses"); }
	float& LastFadeOpacityField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastFadeOpacity"); }
	bool& bClientAddedToStructuresArrayField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bClientAddedToStructuresArray"); }
	long double& LastFailedPinTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastFailedPinTime"); }
	TWeakObjectPtr<UMeshComponent>& PrimaryMeshComponentField() { return *GetNativePointerField<TWeakObjectPtr<UMeshComponent>*>(this, "APrimalStructure.PrimaryMeshComponent"); }
	FVector& WorldGeometryObstructionCheckOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.WorldGeometryObstructionCheckOffset"); }
	TArray<FString>& PreventBuildStructureReasonStringOverridesField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalStructure.PreventBuildStructureReasonStringOverrides"); }
	FVector& FloatingHudLocTextOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.FloatingHudLocTextOffset"); }
	float& LastBumpedDamageTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastBumpedDamageTime"); }
	int& ForceLimitStructuresInRangeField() { return *GetNativePointerField<int*>(this, "APrimalStructure.ForceLimitStructuresInRange"); }
	int& PlacementMaterialForwardDirIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructure.PlacementMaterialForwardDirIndex"); }
	float& ForcePreventPlacingInOfflineRaidStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ForcePreventPlacingInOfflineRaidStructuresRadius"); }
	FName& AttachToStaticMeshSocketNameBaseField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.AttachToStaticMeshSocketNameBase"); }
	TSubclassOf<AActor>& ItemsUseAlternateActorClassAttachmentField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalStructure.ItemsUseAlternateActorClassAttachment"); }
	float& UnstasisAutoDestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.UnstasisAutoDestroyAfterTime"); }
	char& TribeGroupStructureRankField() { return *GetNativePointerField<char*>(this, "APrimalStructure.TribeGroupStructureRank"); }
	char& TribeRankHUDYOffsetField() { return *GetNativePointerField<char*>(this, "APrimalStructure.TribeRankHUDYOffset"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& PreventSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalStructure.PreventSaddleDinoClasses"); }
	TArray<FName>& PreventSaddleDinoTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.PreventSaddleDinoTags"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& AllowSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalStructure.AllowSaddleDinoClasses"); }
	FName& PlaceOnWallUseStaticMeshTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PlaceOnWallUseStaticMeshTag"); }
	TSubclassOf<APrimalStructure>& SnapStructureClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.SnapStructureClass"); }
	float& DemolishActivationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishActivationTime"); }
	FVector& GroundEncroachmentCheckLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.GroundEncroachmentCheckLocationOffset"); }
	TWeakObjectPtr<APrimalCharacter>& TempBasedPawnWaitingForAttachmentParentReplicationField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalStructure.TempBasedPawnWaitingForAttachmentParentReplication"); }
	int& StructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureMinAllowedVersion"); }
	int& SavedStructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.SavedStructureMinAllowedVersion"); }
	float& OverrideEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverrideEnemyFoundationPreventionRadius"); }
	TArray<TSubclassOf<APrimalStructure>>& ForceAllowWallAttachmentClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.ForceAllowWallAttachmentClasses"); }
	float& LimitMaxStructuresInRangeRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LimitMaxStructuresInRangeRadius"); }
	float& BaseStructureWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.BaseStructureWeight"); }
	TArray<TSubclassOf<APrimalStructure>>& FastDecayLinkedStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.FastDecayLinkedStructureClasses"); }
	float& PlacementMaxZAbovePlayerHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZAbovePlayerHeight"); }
	float& LandClaimPlacementRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LandClaimPlacementRadius"); }
	TWeakObjectPtr<APrimalRaft>& LastAttachedShipField() { return *GetNativePointerField<TWeakObjectPtr<APrimalRaft>*>(this, "APrimalStructure.LastAttachedShip"); }
	float& SnapToWaterSurface_ZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapToWaterSurface_ZOffset"); }
	float& NoClaimFlagDecayDestructionPeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructure.NoClaimFlagDecayDestructionPeriod"); }
	float& NoClaimFlagDecayDestructionPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.NoClaimFlagDecayDestructionPeriodMultiplier"); }
	TWeakObjectPtr<APrimalStructureClaimFlag>& LinkedToClaimFlagField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureClaimFlag>*>(this, "APrimalStructure.LinkedToClaimFlag"); }
	float& MyExtraShipStructureHealthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MyExtraShipStructureHealthMultiplier"); }
	//TEnumAsByte<enum EShipSize::Type>& StructureShipSizeClass_MaxField() { return *GetNativePointerField<TEnumAsByte<enum EShipSize::Type>*>(this, "APrimalStructure.StructureShipSizeClass_Max"); }
	//TEnumAsByte<enum EShipSize::Type>& StructureShipSizeClass_MinField() { return *GetNativePointerField<TEnumAsByte<enum EShipSize::Type>*>(this, "APrimalStructure.StructureShipSizeClass_Min"); }
	int& RequirePlacementOnShipDeckIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructure.RequirePlacementOnShipDeckIndex"); }
	int& SnapToShipDeckIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructure.SnapToShipDeckIndex"); }
	UStaticMesh * MyStaticMeshOverrideField() { return *GetNativePointerField<UStaticMesh **>(this, "APrimalStructure.MyStaticMeshOverride"); }
	TArray<FName>& EncroachmentCheckIgnoreStructureTypeTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.EncroachmentCheckIgnoreStructureTypeTags"); }
	FName& StructureTypeTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.StructureTypeTag"); }
	long double& CheckUntilAttachedToShipStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.CheckUntilAttachedToShipStartTime"); }
	float& ShipPlacementRotationOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ShipPlacementRotationOffset"); }
	TArray<FPrimalStructureSnapPointOverride>& SnapToModelOverridesField() { return *GetNativePointerField<TArray<FPrimalStructureSnapPointOverride>*>(this, "APrimalStructure.SnapToModelOverrides"); }
	TArray<FPrimalStructureSnapPointOverride>& SnapFromModelOverridesField() { return *GetNativePointerField<TArray<FPrimalStructureSnapPointOverride>*>(this, "APrimalStructure.SnapFromModelOverrides"); }
	TArray<APrimalStructure *> AlternateSnapPreviewsField() { return *GetNativePointerField<TArray<APrimalStructure *>*>(this, "APrimalStructure.AlternateSnapPreviews"); }
	UStaticMesh * PreviewDefaultStaticMeshField() { return *GetNativePointerField<UStaticMesh **>(this, "APrimalStructure.PreviewDefaultStaticMesh"); }
	float& SnapCheckIntervalDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapCheckIntervalDistance"); }
	float& TimeToAllowFreePickupField() { return *GetNativePointerField<float*>(this, "APrimalStructure.TimeToAllowFreePickup"); }
	float& FreePickupTextYOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructure.FreePickupTextYOffset"); }
	float& AdditionalRepairPercentNextIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.AdditionalRepairPercentNextInterval"); }
	float& MaxAdditionalRepairPercentField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaxAdditionalRepairPercent"); }
	float& FlatAdditionalRepairPercentField() { return *GetNativePointerField<float*>(this, "APrimalStructure.FlatAdditionalRepairPercent"); }
	UMeshComponent * PreviewGizmoComponentField() { return *GetNativePointerField<UMeshComponent **>(this, "APrimalStructure.PreviewGizmoComponent"); }
	UPrimalItem * CraftedFromStatItemField() { return *GetNativePointerField<UPrimalItem **>(this, "APrimalStructure.CraftedFromStatItem"); }
	FName& PaintingFileNameOverrideField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PaintingFileNameOverride"); }
	float& NPC_AdditionalUseRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.NPC_AdditionalUseRadius"); }
	FString& TutorialHintStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.TutorialHintString"); }
	int& PreviewLastPlacementResultField() { return *GetNativePointerField<int*>(this, "APrimalStructure.PreviewLastPlacementResult"); }
	TArray<TSubclassOf<APrimalStructure>>& PreventParentStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.PreventParentStructureClasses"); }
	TArray<TSubclassOf<APrimalStructure>>& AllowParentStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.AllowParentStructureClasses"); }
	TArray<TSubclassOf<APrimalStructure>>& PreventChildStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.PreventChildStructureClasses"); }
	TArray<TSubclassOf<APrimalStructure>>& AllowChildStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.AllowChildStructureClasses"); }
	float& ShipStructureOffsetFromHUDBottomYField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ShipStructureOffsetFromHUDBottomY"); }
	float& PlacementFloorCheckStartOffsetZField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckStartOffsetZ"); }
	float& PlacementFloorCheckEndOffsetZField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckEndOffsetZ"); }
	float& ShipPlacementMaxBelowZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ShipPlacementMaxBelowZOffset"); }
	float& TraceDistanceFromActorToCeilingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.TraceDistanceFromActorToCeiling"); }
	float& PlacementInitialTracePointOffsetForCeilingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementInitialTracePointOffsetForCeiling"); }
	float& PlacementOffsetForCeilingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementOffsetForCeiling"); }
	TArray<TSubclassOf<APrimalStructure>>& StructuresAllowedToBeCeilingField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.StructuresAllowedToBeCeiling"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bIsFlippable() { return { this, "APrimalStructure.bIsFlippable" }; }
	BitFieldValue<bool, unsigned __int32> bIsFlipped() { return { this, "APrimalStructure.bIsFlipped" }; }
	BitFieldValue<bool, unsigned __int32> bShowInPlaceableList() { return { this, "APrimalStructure.bShowInPlaceableList" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "APrimalStructure.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedMaterials() { return { this, "APrimalStructure.bInitializedMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowWallAttachments() { return { this, "APrimalStructure.bForceAllowWallAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPRefreshedStructureColors() { return { this, "APrimalStructure.bUseBPRefreshedStructureColors" }; }
	BitFieldValue<bool, unsigned __int32> bClientAddPlacedOnFloorStructures() { return { this, "APrimalStructure.bClientAddPlacedOnFloorStructures" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis() { return { this, "APrimalStructure.bUseBPPreventStasis" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnStasis() { return { this, "APrimalStructure.bDestroyOnStasis" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerBPStasis() { return { this, "APrimalStructure.bTriggerBPStasis" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGame() { return { this, "APrimalStructure.bUseBPPostLoadedFromSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementUsesWeaponClipAmmo() { return { this, "APrimalStructure.bPlacementUsesWeaponClipAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished() { return { this, "APrimalStructure.bIgnoreDyingWhenDemolished" }; }
	BitFieldValue<bool, unsigned __int32> bAbsoluteTakeAnythingAsGround() { return { this, "APrimalStructure.bAbsoluteTakeAnythingAsGround" }; }
	BitFieldValue<bool, unsigned __int32> bUseAdvancedRotationPlacement() { return { this, "APrimalStructure.bUseAdvancedRotationPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePlacementOnDynamicsFoliageAndDoors() { return { this, "APrimalStructure.bDisablePlacementOnDynamicsFoliageAndDoors" }; }
	BitFieldValue<bool, unsigned __int32> bSeatedDisableCollisionCheck() { return { this, "APrimalStructure.bSeatedDisableCollisionCheck" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsAllowedToBuildEx() { return { this, "APrimalStructure.bUseBPIsAllowedToBuildEx" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPHandleStructureEnabled() { return { this, "APrimalStructure.bUseBPHandleStructureEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bForcePlacingOnVerticalGround() { return { this, "APrimalStructure.bForcePlacingOnVerticalGround" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementShouldNotBeHorizontal() { return { this, "APrimalStructure.bPlacementShouldNotBeHorizontal" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresGroundedPlacement() { return { this, "APrimalStructure.bRequiresGroundedPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructuresPvPOnly() { return { this, "APrimalStructure.bAllowPlacingOnOtherTeamStructuresPvPOnly" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseSkeletalMeshComponent() { return { this, "APrimalStructure.bForceUseSkeletalMeshComponent" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisableFootSound() { return { this, "APrimalStructure.bForceDisableFootSound" }; }
	BitFieldValue<bool, unsigned __int32> bTraceThruEncroachmentPoints() { return { this, "APrimalStructure.bTraceThruEncroachmentPoints" }; }
	BitFieldValue<bool, unsigned __int32> bDidSpawnEffects() { return { this, "APrimalStructure.bDidSpawnEffects" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoPlacementDistanceIncrease() { return { this, "APrimalStructure.bPreventDinoPlacementDistanceIncrease" }; }
	BitFieldValue<bool, unsigned __int32> bPendingRemoval() { return { this, "APrimalStructure.bPendingRemoval" }; }
	BitFieldValue<bool, unsigned __int32> bDontOverrideCollisionProfile() { return { this, "APrimalStructure.bDontOverrideCollisionProfile" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAttachToPawn() { return { this, "APrimalStructure.bAllowAttachToPawn" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle() { return { this, "APrimalStructure.bAllowAttachToSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementTraceIgnorePawns() { return { this, "APrimalStructure.bPlacementTraceIgnorePawns" }; }
	BitFieldValue<bool, unsigned __int32> bRequireFreePrimarySnappedStructure() { return { this, "APrimalStructure.bRequireFreePrimarySnappedStructure" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyAllowPlacementInWater() { return { this, "APrimalStructure.bOnlyAllowPlacementInWater" }; }
	BitFieldValue<bool, unsigned __int32> bForcePlacingOnGround() { return { this, "APrimalStructure.bForcePlacingOnGround" }; }
	BitFieldValue<bool, unsigned __int32> bTakeAnythingAsGround() { return { this, "APrimalStructure.bTakeAnythingAsGround" }; }
	BitFieldValue<bool, unsigned __int32> bIsFoundation() { return { this, "APrimalStructure.bIsFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bForceCheckNearbyEnemyFoundation() { return { this, "APrimalStructure.bForceCheckNearbyEnemyFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bIsFloor() { return { this, "APrimalStructure.bIsFloor" }; }
	BitFieldValue<bool, unsigned __int32> bForceFloorCollisionGroup() { return { this, "APrimalStructure.bForceFloorCollisionGroup" }; }
	BitFieldValue<bool, unsigned __int32> bIsWall() { return { this, "APrimalStructure.bIsWall" }; }
	BitFieldValue<bool, unsigned __int32> bDisallowPreventCropsBiomes() { return { this, "APrimalStructure.bDisallowPreventCropsBiomes" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeRepaired() { return { this, "APrimalStructure.bCanBeRepaired" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeRepairedByAnyTeam() { return { this, "APrimalStructure.bCanBeRepairedByAnyTeam" }; }
	BitFieldValue<bool, unsigned __int32> bReturnDamageOnHitFromPawn() { return { this, "APrimalStructure.bReturnDamageOnHitFromPawn" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStasis() { return { this, "APrimalStructure.bPreventStasis" }; }
	BitFieldValue<bool, unsigned __int32> bAllowUseFromRidingDino() { return { this, "APrimalStructure.bAllowUseFromRidingDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsFenceFoundation() { return { this, "APrimalStructure.bIsFenceFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bUseFenceFoundation() { return { this, "APrimalStructure.bUseFenceFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bUseOnlyBlockSelfTraceChannel() { return { this, "APrimalStructure.bUseOnlyBlockSelfTraceChannel" }; }
	BitFieldValue<bool, unsigned __int32> bWasPlacementSnapped() { return { this, "APrimalStructure.bWasPlacementSnapped" }; }
	BitFieldValue<bool, unsigned __int32> bIsCoreStructure() { return { this, "APrimalStructure.bIsCoreStructure" }; }
	BitFieldValue<bool, unsigned __int32> bDeprecateStructure() { return { this, "APrimalStructure.bDeprecateStructure" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresToBeInsideZoneVolume() { return { this, "APrimalStructure.bRequiresToBeInsideZoneVolume" }; }
	BitFieldValue<bool, unsigned __int32> bAllowLoadBearing() { return { this, "APrimalStructure.bAllowLoadBearing" }; }
	BitFieldValue<bool, unsigned __int32> bIsEnvironmentStructure() { return { this, "APrimalStructure.bIsEnvironmentStructure" }; }
	BitFieldValue<bool, unsigned __int32> bDemolished() { return { this, "APrimalStructure.bDemolished" }; }
	BitFieldValue<bool, unsigned __int32> bSetStaticMobility() { return { this, "APrimalStructure.bSetStaticMobility" }; }
	BitFieldValue<bool, unsigned __int32> bIsPvE() { return { this, "APrimalStructure.bIsPvE" }; }
	BitFieldValue<bool, unsigned __int32> bBeginPlayIgnoreApplyScale() { return { this, "APrimalStructure.bBeginPlayIgnoreApplyScale" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresPlacementOnStructureFloors() { return { this, "APrimalStructure.bRequiresPlacementOnStructureFloors" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePlacementOnStructureFloors() { return { this, "APrimalStructure.bDisablePlacementOnStructureFloors" }; }
	BitFieldValue<bool, unsigned __int32> bUsePlacementCollisionCheck() { return { this, "APrimalStructure.bUsePlacementCollisionCheck" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSnapping() { return { this, "APrimalStructure.bRequiresSnapping" }; }
	BitFieldValue<bool, unsigned __int32> bSnappingRequiresNearbyFoundation() { return { this, "APrimalStructure.bSnappingRequiresNearbyFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSnapRotation() { return { this, "APrimalStructure.bAllowSnapRotation" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation() { return { this, "APrimalStructure.bPlacementChooseRotation" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyWhenLostFoundationAndPlacementChooseRotation() { return { this, "APrimalStructure.bDestroyWhenLostFoundationAndPlacementChooseRotation" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresPlacingOnWall() { return { this, "APrimalStructure.bRequiresPlacingOnWall" }; }
	BitFieldValue<bool, unsigned __int32> bSnapRequiresPlacementOnGround() { return { this, "APrimalStructure.bSnapRequiresPlacementOnGround" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSnapOntoSameLocation() { return { this, "APrimalStructure.bAllowSnapOntoSameLocation" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyFoundationIfSnappedToFoundation() { return { this, "APrimalStructure.bOnlyFoundationIfSnappedToFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bFoundationRequiresGroundTrace() { return { this, "APrimalStructure.bFoundationRequiresGroundTrace" }; }
	BitFieldValue<bool, unsigned __int32> bPlacingOnGroundRequiresNoStructure() { return { this, "APrimalStructure.bPlacingOnGroundRequiresNoStructure" }; }
	BitFieldValue<bool, unsigned __int32> bTakeGroundNormal() { return { this, "APrimalStructure.bTakeGroundNormal" }; }
	BitFieldValue<bool, unsigned __int32> bTakeGroundNormalDirectly() { return { this, "APrimalStructure.bTakeGroundNormalDirectly" }; }
	BitFieldValue<bool, unsigned __int32> bFinalPlacementDontAdjustForMaxRange() { return { this, "APrimalStructure.bFinalPlacementDontAdjustForMaxRange" }; }
	BitFieldValue<bool, unsigned __int32> bCheckForOverlappingStructuresOnPlacement() { return { this, "APrimalStructure.bCheckForOverlappingStructuresOnPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bBlockOverlappingStructuresOnPlacement() { return { this, "APrimalStructure.bBlockOverlappingStructuresOnPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bAllowStructureColors() { return { this, "APrimalStructure.bAllowStructureColors" }; }
	BitFieldValue<bool, unsigned __int32> bDebug() { return { this, "APrimalStructure.bDebug" }; }
	BitFieldValue<bool, unsigned __int32> bUseFadeInEffect() { return { this, "APrimalStructure.bUseFadeInEffect" }; }
	BitFieldValue<bool, unsigned __int32> bUsingStructureColors() { return { this, "APrimalStructure.bUsingStructureColors" }; }
	BitFieldValue<bool, unsigned __int32> bUsesHealth() { return { this, "APrimalStructure.bUsesHealth" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreSnappedToOtherFloorStructures() { return { this, "APrimalStructure.bIgnoreSnappedToOtherFloorStructures" }; }
	BitFieldValue<bool, unsigned __int32> bEnforceStructureLinkExactRotation() { return { this, "APrimalStructure.bEnforceStructureLinkExactRotation" }; }
	BitFieldValue<bool, unsigned __int32> bForceSnappedStructureToGround() { return { this, "APrimalStructure.bForceSnappedStructureToGround" }; }
	BitFieldValue<bool, unsigned __int32> bForceBlockIK() { return { this, "APrimalStructure.bForceBlockIK" }; }
	BitFieldValue<bool, unsigned __int32> bStationaryStructure() { return { this, "APrimalStructure.bStationaryStructure" }; }
	BitFieldValue<bool, unsigned __int32> bIgnorePawns() { return { this, "APrimalStructure.bIgnorePawns" }; }
	BitFieldValue<bool, unsigned __int32> bCanDemolish() { return { this, "APrimalStructure.bCanDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructures() { return { this, "APrimalStructure.bAllowPlacingOnOtherTeamStructures" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPlacementInWater() { return { this, "APrimalStructure.bPreventPlacementInWater" }; }
	BitFieldValue<bool, unsigned __int32> bAllowInRegularStructurePreventionZones() { return { this, "APrimalStructure.bAllowInRegularStructurePreventionZones" }; }
	BitFieldValue<bool, unsigned __int32> bDontSetStructureCollisionChannels() { return { this, "APrimalStructure.bDontSetStructureCollisionChannels" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventEnemyStructuresNearby() { return { this, "APrimalStructure.bForcePreventEnemyStructuresNearby" }; }
	BitFieldValue<bool, unsigned __int32> bAllowEnemyDemolish() { return { this, "APrimalStructure.bAllowEnemyDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bDontActuallySnapJustPlacement() { return { this, "APrimalStructure.bDontActuallySnapJustPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInRange() { return { this, "APrimalStructure.bIgnoreMaxStructuresInRange" }; }
	BitFieldValue<bool, unsigned __int32> bPaintingUseSkeletalMesh() { return { this, "APrimalStructure.bPaintingUseSkeletalMesh" }; }
	BitFieldValue<bool, unsigned __int32> bUsesPaintingComponent() { return { this, "APrimalStructure.bUsesPaintingComponent" }; }
	BitFieldValue<bool, unsigned __int32> bCanBuildUpon() { return { this, "APrimalStructure.bCanBuildUpon" }; }
	BitFieldValue<bool, unsigned __int32> bHasResetDecayTime() { return { this, "APrimalStructure.bHasResetDecayTime" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowInPreventionVolumes() { return { this, "APrimalStructure.bForceAllowInPreventionVolumes" }; }
	BitFieldValue<bool, unsigned __int32> bForceCreateDynamicMaterials() { return { this, "APrimalStructure.bForceCreateDynamicMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetInfoFromConsumedItemForPlacedStructure() { return { this, "APrimalStructure.bUseBPGetInfoFromConsumedItemForPlacedStructure" }; }
	BitFieldValue<bool, unsigned __int32> bImmuneToAutoDemolish() { return { this, "APrimalStructure.bImmuneToAutoDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInSmallRadius() { return { this, "APrimalStructure.bIgnoreMaxStructuresInSmallRadius" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAttachToSaddle() { return { this, "APrimalStructure.bPreventAttachToSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bForcePersonalStructureOwnership() { return { this, "APrimalStructure.bForcePersonalStructureOwnership" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideAllowStructureAccess() { return { this, "APrimalStructure.bBPOverrideAllowStructureAccess" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverideDemolish() { return { this, "APrimalStructure.bBPOverideDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWith() { return { this, "APrimalStructure.bBPOverrideAllowSnappingWith" }; }
	BitFieldValue<bool, unsigned __int32> bUseTribeGroupStructureRank() { return { this, "APrimalStructure.bUseTribeGroupStructureRank" }; }
	BitFieldValue<bool, unsigned __int32> bForceBlockStationaryTraces() { return { this, "APrimalStructure.bForceBlockStationaryTraces" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocket() { return { this, "APrimalStructure.bAttachToStaticMeshSocket" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocketRotation() { return { this, "APrimalStructure.bAttachToStaticMeshSocketRotation" }; }
	BitFieldValue<bool, unsigned __int32> bForceGroundForFoundation() { return { this, "APrimalStructure.bForceGroundForFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedToTransform() { return { this, "APrimalStructure.bBPOverrideSnappedToTransform" }; }
	BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm() { return { this, "APrimalStructure.bDisableStructureOnElectricStorm" }; }
	BitFieldValue<bool, unsigned __int32> bNoCollision() { return { this, "APrimalStructure.bNoCollision" }; }
	BitFieldValue<bool, unsigned __int32> bCreatedDynamicMaterials() { return { this, "APrimalStructure.bCreatedDynamicMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bIsPreviewStructure() { return { this, "APrimalStructure.bIsPreviewStructure" }; }
	BitFieldValue<bool, unsigned __int32> bStructureUseAltCollisionChannel() { return { this, "APrimalStructure.bStructureUseAltCollisionChannel" }; }
	BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy() { return { this, "APrimalStructure.bDemolishJustDestroy" }; }
	BitFieldValue<bool, unsigned __int32> bHighPriorityDemolish() { return { this, "APrimalStructure.bHighPriorityDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bDisableSnapStructure() { return { this, "APrimalStructure.bDisableSnapStructure" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis() { return { this, "APrimalStructure.bTriggerBPUnstasis" }; }
	BitFieldValue<bool, unsigned __int32> bUsesWorldSpaceMaterial() { return { this, "APrimalStructure.bUsesWorldSpaceMaterial" }; }
	BitFieldValue<bool, unsigned __int32> bForceIgnoreStationaryObjectTrace() { return { this, "APrimalStructure.bForceIgnoreStationaryObjectTrace" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowNearSupplyCrateSpawns() { return { this, "APrimalStructure.bForceAllowNearSupplyCrateSpawns" }; }
	BitFieldValue<bool, unsigned __int32> bBPPostSetStructureCollisionChannels() { return { this, "APrimalStructure.bBPPostSetStructureCollisionChannels" }; }
	BitFieldValue<bool, unsigned __int32> bPickupGiveItemRequiresAccess() { return { this, "APrimalStructure.bPickupGiveItemRequiresAccess" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowPickupGiveItem() { return { this, "APrimalStructure.bUseBPAllowPickupGiveItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAttachedChildStructures() { return { this, "APrimalStructure.bPreventAttachedChildStructures" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPreviewIfWeaponPlaced() { return { this, "APrimalStructure.bPreventPreviewIfWeaponPlaced" }; }
	BitFieldValue<bool, unsigned __int32> bShowHullTooltip() { return { this, "APrimalStructure.bShowHullTooltip" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanPlaceOnStructureSaddle() { return { this, "APrimalStructure.bUseBPCanPlaceOnStructureSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bUseStructureClassForParentActorClassAttachments() { return { this, "APrimalStructure.bUseStructureClassForParentActorClassAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bSetAttachmentTimer() { return { this, "APrimalStructure.bSetAttachmentTimer" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetStructureWeight() { return { this, "APrimalStructure.bUseBPGetStructureWeight" }; }
	BitFieldValue<bool, unsigned __int32> bPostSpawnInitialized() { return { this, "APrimalStructure.bPostSpawnInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bBeganPlay() { return { this, "APrimalStructure.bBeganPlay" }; }
	BitFieldValue<bool, unsigned __int32> bResetSnapCycle() { return { this, "APrimalStructure.bResetSnapCycle" }; }
	BitFieldValue<bool, unsigned __int32> bStructurePlacedNotifyParentStructure() { return { this, "APrimalStructure.bStructurePlacedNotifyParentStructure" }; }
	BitFieldValue<bool, unsigned __int32> bPaintingUseTaggedMeshComponent() { return { this, "APrimalStructure.bPaintingUseTaggedMeshComponent" }; }
	BitFieldValue<bool, unsigned __int32> bCheckStructurePlacementOverlapForceEncroachment() { return { this, "APrimalStructure.bCheckStructurePlacementOverlapForceEncroachment" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDamageByShipImpact() { return { this, "APrimalStructure.bAllowDamageByShipImpact" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPlacementOutsideShipBounds() { return { this, "APrimalStructure.bAllowPlacementOutsideShipBounds" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideAttachedTurretYawLimits() { return { this, "APrimalStructure.bOverrideAttachedTurretYawLimits" }; }
	BitFieldValue<bool, unsigned __int32> bCraftedFromStatItem() { return { this, "APrimalStructure.bCraftedFromStatItem" }; }
	BitFieldValue<bool, unsigned __int32> bClientRequestedStatItem() { return { this, "APrimalStructure.bClientRequestedStatItem" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPlacementOnOtherTeamDinos() { return { this, "APrimalStructure.bAllowPlacementOnOtherTeamDinos" }; }
	BitFieldValue<bool, unsigned __int32> bDontSetStructureCollisionChannelsCreateDynamicMaterials() { return { this, "APrimalStructure.bDontSetStructureCollisionChannelsCreateDynamicMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bLandPlacementRequiresLandClaim() { return { this, "APrimalStructure.bLandPlacementRequiresLandClaim" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMaxSaddleStructuresNum() { return { this, "APrimalStructure.bIgnoreMaxSaddleStructuresNum" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreParentStructureDestruction() { return { this, "APrimalStructure.bIgnoreParentStructureDestruction" }; }
	BitFieldValue<bool, unsigned __int32> bGroundTraceAllowCollisionWithWater() { return { this, "APrimalStructure.bGroundTraceAllowCollisionWithWater" }; }
	BitFieldValue<bool, unsigned __int32> bUseSnapFromPlacementOverrideEvenWhenNotSnapped() { return { this, "APrimalStructure.bUseSnapFromPlacementOverrideEvenWhenNotSnapped" }; }
	BitFieldValue<bool, unsigned __int32> bClientMobileStructure() { return { this, "APrimalStructure.bClientMobileStructure" }; }
	BitFieldValue<bool, unsigned __int32> bSnapToWaterSurface() { return { this, "APrimalStructure.bSnapToWaterSurface" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDurabilityHealthScaling() { return { this, "APrimalStructure.bPreventDurabilityHealthScaling" }; }
	BitFieldValue<bool, unsigned __int32> bSnappedSeatStructuresIgnoreGroundForStandingLocation() { return { this, "APrimalStructure.bSnappedSeatStructuresIgnoreGroundForStandingLocation" }; }
	BitFieldValue<bool, unsigned __int32> bFlippedIgnoreComponentOffsets() { return { this, "APrimalStructure.bFlippedIgnoreComponentOffsets" }; }
	BitFieldValue<bool, unsigned __int32> bFlipOnlyMyStaticMesh() { return { this, "APrimalStructure.bFlipOnlyMyStaticMesh" }; }
	BitFieldValue<bool, unsigned __int32> bSetFlippedComponentOffsets() { return { this, "APrimalStructure.bSetFlippedComponentOffsets" }; }
	BitFieldValue<bool, unsigned __int32> bForcePlacingOnCeiling() { return { this, "APrimalStructure.bForcePlacingOnCeiling" }; }
	BitFieldValue<bool, unsigned __int32> bTryPlacingOnCeiling() { return { this, "APrimalStructure.bTryPlacingOnCeiling" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSpawingStructureDeathActor() { return { this, "APrimalStructure.bPreventSpawingStructureDeathActor" }; }
	BitFieldValue<bool, unsigned __int32> bForceSpawningStructureDeathActor() { return { this, "APrimalStructure.bForceSpawningStructureDeathActor" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetDynamicMaterialParams() { return { this, "APrimalStructure.bUseBPSetDynamicMaterialParams" }; }
	BitFieldValue<bool, unsigned __int32> bUseAlternateStructureColorSetOnShips() { return { this, "APrimalStructure.bUseAlternateStructureColorSetOnShips" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresPlacementOnShip() { return { this, "APrimalStructure.bRequiresPlacementOnShip" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPlacementOnShip() { return { this, "APrimalStructure.bPreventPlacementOnShip" }; }
	BitFieldValue<bool, unsigned __int32> bAlignWithShipRotation() { return { this, "APrimalStructure.bAlignWithShipRotation" }; }
	BitFieldValue<bool, unsigned __int32> bIsCriticalShipStructure() { return { this, "APrimalStructure.bIsCriticalShipStructure" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_TickCriticalStructure() { return { this, "APrimalStructure.bUseBP_TickCriticalStructure" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideAttachedTurretCameraSocketName() { return { this, "APrimalStructure.bOverrideAttachedTurretCameraSocketName" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPlacementWhileSeated() { return { this, "APrimalStructure.bAllowPlacementWhileSeated" }; }
	BitFieldValue<bool, unsigned __int32> bUseSkeletalMeshForSocketSnapPoints() { return { this, "APrimalStructure.bUseSkeletalMeshForSocketSnapPoints" }; }
	BitFieldValue<bool, unsigned __int32> bShowAttachedToShipMultiUse() { return { this, "APrimalStructure.bShowAttachedToShipMultiUse" }; }
	BitFieldValue<bool, unsigned __int32> bPreventEnemyTeamPainting() { return { this, "APrimalStructure.bPreventEnemyTeamPainting" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowPlacementWhenUsingClimbingPickOrFalling() { return { this, "APrimalStructure.bForceAllowPlacementWhenUsingClimbingPickOrFalling" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementWantsToBeFlipped() { return { this, "APrimalStructure.bPlacementWantsToBeFlipped" }; }
	BitFieldValue<bool, unsigned __int32> bTryVerticalGround() { return { this, "APrimalStructure.bTryVerticalGround" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowSaddleStructureBasing() { return { this, "APrimalStructure.bForceAllowSaddleStructureBasing" }; }
	BitFieldValue<bool, unsigned __int32> bPlayerPlacementRequiresBeingOnStructurePlacerArray() { return { this, "APrimalStructure.bPlayerPlacementRequiresBeingOnStructurePlacerArray" }; }
	BitFieldValue<bool, unsigned __int32> bSeatedForceDisableCollisionCheck() { return { this, "APrimalStructure.bSeatedForceDisableCollisionCheck" }; }
	BitFieldValue<bool, unsigned __int32> bUseShipStructureHealthMultiplier() { return { this, "APrimalStructure.bUseShipStructureHealthMultiplier" }; }
	BitFieldValue<bool, unsigned __int32> bForceOnChildStructurePlacedNotify() { return { this, "APrimalStructure.bForceOnChildStructurePlacedNotify" }; }
	BitFieldValue<bool, unsigned __int32> bMobileStructureForceAllowAsGround() { return { this, "APrimalStructure.bMobileStructureForceAllowAsGround" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCreationOfDynamicMaterials() { return { this, "APrimalStructure.bPreventCreationOfDynamicMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSkipPartialWorldSave() { return { this, "APrimalStructure.bAllowSkipPartialWorldSave" }; }
	BitFieldValue<bool, unsigned __int32> bStructureSaveDirty() { return { this, "APrimalStructure.bStructureSaveDirty" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructure.GetPrivateStaticClass"); }
	static UClass * StaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructure.StaticClass"); }
	float AddAggroOnBump(APrimalDinoCharacter * BumpedBy) { return NativeCall<float, APrimalDinoCharacter *>(this, "APrimalStructure.AddAggroOnBump", BumpedBy); }
	bool AddRepairPercentForNextInterval(float Multiplier) { return NativeCall<bool, float>(this, "APrimalStructure.AddRepairPercentForNextInterval", Multiplier); }
	bool AllowBeginPlacementBy_Implementation(AShooterPlayerController * ByPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.AllowBeginPlacementBy_Implementation", ByPC); }
	bool AllowColoringBy(APlayerController * ForPC, UObject * anItem) { return NativeCall<bool, APlayerController *, UObject *>(this, "APrimalStructure.AllowColoringBy", ForPC, anItem); }
	bool AllowCreateDynamicMaterials() { return NativeCall<bool>(this, "APrimalStructure.AllowCreateDynamicMaterials"); }
	bool AllowJumpOutOfWaterOnto(AActor * Jumper) { return NativeCall<bool, AActor *>(this, "APrimalStructure.AllowJumpOutOfWaterOnto", Jumper); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.AllowPickupForItem", ForPC); }
	bool AllowPlacingMeOnStructure_Implementation(APrimalStructure * ParentStructure, FPlacementData * ThePlacementData) { return NativeCall<bool, APrimalStructure *, FPlacementData *>(this, "APrimalStructure.AllowPlacingMeOnStructure_Implementation", ParentStructure, ThePlacementData); }
	bool AllowPlacingOnSaddleParentClass(APrimalDinoCharacter * theDino, bool bForcePrevent) { return NativeCall<bool, APrimalDinoCharacter *, bool>(this, "APrimalStructure.AllowPlacingOnSaddleParentClass", theDino, bForcePrevent); }
	bool AllowPlacingStructureOnMe_Implementation(APrimalStructure * ChildStructure, FPlacementData * ThePlacementData) { return NativeCall<bool, APrimalStructure *, FPlacementData *>(this, "APrimalStructure.AllowPlacingStructureOnMe_Implementation", ChildStructure, ThePlacementData); }
	bool AllowSaving() { return NativeCall<bool>(this, "APrimalStructure.AllowSaving"); }
	bool AllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>(this, "APrimalStructure.AllowSnappingWith", OtherStructure, ForPC); }
	bool AllowSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructure.AllowSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructure.AllowStructureAccess", ForPC); }
	void ApplyColorToRegions(__int16 CustomColorID, bool * ApplyToRegions) { NativeCall<void, __int16, bool *>(this, "APrimalStructure.ApplyColorToRegions", CustomColorID, ApplyToRegions); }
	void ApplyLinkedIDs(bool bRelinkParents) { NativeCall<void, bool>(this, "APrimalStructure.ApplyLinkedIDs", bRelinkParents); }
	void ApplyPrimalItemSettingsToStructure(UMeshComponent * meshToColorize, UPrimalItem * AssociatedPrimalItem) { NativeCall<void, UMeshComponent *, UPrimalItem *>(this, "APrimalStructure.ApplyPrimalItemSettingsToStructure", meshToColorize, AssociatedPrimalItem); }
	void ApplyScale(bool bOnlyInitPhysics) { NativeCall<void, bool>(this, "APrimalStructure.ApplyScale", bOnlyInitPhysics); }
	void BPGetAllLinkedStructures(TArray<APrimalStructure *> * OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure *> *>(this, "APrimalStructure.BPGetAllLinkedStructures", OutLinkedStructures); }
	static APrimalStructure * BPGetFromID(UWorld * World, int TheStructureID) { return NativeCall<APrimalStructure *, UWorld *, int>(nullptr, "APrimalStructure.BPGetFromID", World, TheStructureID); }
	void BPGetInfoFromConsumedItemForPlacedStructure_Implementation(UPrimalItem * ItemToConsumed) { NativeCall<void, UPrimalItem *>(this, "APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure_Implementation", ItemToConsumed); }
	TArray<int> * BPGetLinkedStructureIDs(TArray<int> * result) { return NativeCall<TArray<int> *, TArray<int> *>(this, "APrimalStructure.BPGetLinkedStructureIDs", result); }
	TArray<FPrimalStructureSnapPoint> * BPGetSnappingPoints() { return NativeCall<TArray<FPrimalStructureSnapPoint> *>(this, "APrimalStructure.BPGetSnappingPoints"); }
	static int BPGetStructureID(APrimalStructure * PrimalStructure) { return NativeCall<int, APrimalStructure *>(nullptr, "APrimalStructure.BPGetStructureID", PrimalStructure); }
	FPlacementData * BPPlacingWallAttachmentOnMe_Implementation(FPlacementData * result, APrimalStructure * AttachedStructure, FPlacementData * OutPlacementData) { return NativeCall<FPlacementData *, FPlacementData *, APrimalStructure *, FPlacementData *>(this, "APrimalStructure.BPPlacingWallAttachmentOnMe_Implementation", result, AttachedStructure, OutPlacementData); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructure.BeginPlay"); }
	bool CanAutoDemolish(bool bCanImmediatelyAutoDemolish) { return NativeCall<bool, bool>(this, "APrimalStructure.CanAutoDemolish", bCanImmediatelyAutoDemolish); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalStructure.CanBePainted"); }
	bool CanBeRepaired(AShooterPlayerController * ByPC, bool bCurrentlyRepairing) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "APrimalStructure.CanBeRepaired", ByPC, bCurrentlyRepairing); }
	int CanPlaceCriticalShipStructure(APrimalRaft * OnShip) { return NativeCall<int, APrimalRaft *>(this, "APrimalStructure.CanPlaceCriticalShipStructure", OnShip); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructure.ChangeActorTeam", NewTeam); }
	bool CheckNotEncroaching(FVector PlacementLocation, FRotator PlacementRotation, AActor * DinoCharacter, APrimalStructure * SnappedToParentStructure, APrimalStructure * ReplacesStructure, bool bUseAlternatePlacementTraceScale) { return NativeCall<bool, FVector, FRotator, AActor *, APrimalStructure *, APrimalStructure *, bool>(this, "APrimalStructure.CheckNotEncroaching", PlacementLocation, PlacementRotation, DinoCharacter, SnappedToParentStructure, ReplacesStructure, bUseAlternatePlacementTraceScale); }
	void CheckUntilAttachedToValidShip() { NativeCall<void>(this, "APrimalStructure.CheckUntilAttachedToValidShip"); }
	bool ClampBuildLocation(FVector FromLocation, AActor ** OutHitActor, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, APlayerController * PC) { return NativeCall<bool, FVector, AActor **, FPlacementData *, bool, APlayerController *>(this, "APrimalStructure.ClampBuildLocation", FromLocation, OutHitActor, OutPlacementData, bDontAdjustForMaxRange, PC); }
	static void CleanUpTree(APrimalStructure * StartingStructure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>(nullptr, "APrimalStructure.CleanUpTree", StartingStructure, InstigatorController, DamageCauser); }
	void ClearCustomColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors_Implementation"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructure.ClientMultiUse", ForPC, UseIndex); }
	void ClientUpdateLinkedStructures_Implementation(TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, TArray<unsigned int> *>(this, "APrimalStructure.ClientUpdateLinkedStructures_Implementation", NewLinkedStructures); }
	void ClientUpdatedStructureColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClientUpdatedStructureColors_Implementation"); }
	void CreateDynamicMaterials() { NativeCall<void>(this, "APrimalStructure.CreateDynamicMaterials"); }
	static void CullAgainstFoundations(APrimalStructure ** StartingStructure, TArray<APrimalStructure *> * Foundations) { NativeCall<void, APrimalStructure **, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructure, Foundations); }
	void DelayedClientAttachParentReplicationFixupCheck(APrimalCharacter * PawnToCheck, float Timeout) { NativeCall<void, APrimalCharacter *, float>(this, "APrimalStructure.DelayedClientAttachParentReplicationFixupCheck", PawnToCheck, Timeout); }
	void DelayedDisableSnapParent() { NativeCall<void>(this, "APrimalStructure.DelayedDisableSnapParent"); }
	void Demolish(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.Demolish", ForPC); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructure.Destroyed"); }
	bool Die(float KillingDamage, FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>(this, "APrimalStructure.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool DoAnyTribePermissionsRestrict(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.DoAnyTribePermissionsRestrict", ForPC); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructure.DrawHUD", HUD); }
	void DrawStructureTooltip(AShooterHUD * HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD *, bool>(this, "APrimalStructure.DrawStructureTooltip", HUD, bForMultiUseSelector); }
	void FadeInEffectTick() { NativeCall<void>(this, "APrimalStructure.FadeInEffectTick"); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.FinalLoadedFromSaveGame"); }
	bool FinalStructurePlacement(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bIsFlipped, UClass ** ClassOverride) { return NativeCall<bool, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool, UClass **>(this, "APrimalStructure.FinalStructurePlacement", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bIsFlipped, ClassOverride); }
	static void FindFoundations(APrimalStructure * StartingStructure, TArray<APrimalStructure *> * Foundations) { NativeCall<void, APrimalStructure *, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FindFoundations", StartingStructure, Foundations); }
	static void FlagReachable(APrimalStructure * StartingStructure) { NativeCall<void, APrimalStructure *>(nullptr, "APrimalStructure.FlagReachable", StartingStructure); }
	FString * GetAimedTutorialHintString_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetAimedTutorialHintString_Implementation", result); }
	void GetAllLinkedStructures(TArray<APrimalStructure *> * OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure *> *>(this, "APrimalStructure.GetAllLinkedStructures", OutLinkedStructures); }
	APrimalRaft * GetAttachedToShip() { return NativeCall<APrimalRaft *>(this, "APrimalStructure.GetAttachedToShip"); }
	FName * GetAttachedTurretCameraSocketNameOverride_Implementation(FName * result, APrimalStructure * ForStructure) { return NativeCall<FName *, FName *, APrimalStructure *>(this, "APrimalStructure.GetAttachedTurretCameraSocketNameOverride_Implementation", result, ForStructure); }
	TSubclassOf<APrimalStructure> * GetBedFilterClass_Implementation(TSubclassOf<APrimalStructure> * result) { return NativeCall<TSubclassOf<APrimalStructure> *, TSubclassOf<APrimalStructure> *>(this, "APrimalStructure.GetBedFilterClass_Implementation", result); }
	static APrimalStructure * GetClosestStructureToPoint(UWorld * ForWorld, FVector AtPoint, float OverlapRadius) { return NativeCall<APrimalStructure *, UWorld *, FVector, float>(nullptr, "APrimalStructure.GetClosestStructureToPoint", ForWorld, AtPoint, OverlapRadius); }
	ADayCycleManager * GetDayCycleManager() { return NativeCall<ADayCycleManager *>(this, "APrimalStructure.GetDayCycleManager"); }
	float GetDemolishGivesResourcesMultiplier(APlayerController * ForPC) { return NativeCall<float, APlayerController *>(this, "APrimalStructure.GetDemolishGivesResourcesMultiplier", ForPC); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetDescriptiveName", result); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetEntryDescription", result); }
	UTexture2D * GetEntryIcon(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D *, UObject *, bool>(this, "APrimalStructure.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	UMaterialInterface * GetEntryIconMaterial(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface *, UObject *, bool>(this, "APrimalStructure.GetEntryIconMaterial", AssociatedDataObject, bIsEnabled); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetEntryString", result); }
	static APrimalStructure * GetFromID(UWorld * World, unsigned int TheStructureID) { return NativeCall<APrimalStructure *, UWorld *, unsigned int>(nullptr, "APrimalStructure.GetFromID", World, TheStructureID); }
	int GetHitPawnCollisionGroup() { return NativeCall<int>(this, "APrimalStructure.GetHitPawnCollisionGroup"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructure.GetLifetimeReplicatedProps", OutLifetimeProps); }
	APrimalStructureDoor * GetLinkedDoor() { return NativeCall<APrimalStructureDoor *>(this, "APrimalStructure.GetLinkedDoor"); }
	APrimalStructure * GetNearbyFoundation(FPlacementData * PlacementData, APlayerController * ForPC) { return NativeCall<APrimalStructure *, FPlacementData *, APlayerController *>(this, "APrimalStructure.GetNearbyFoundation", PlacementData, ForPC); }
	static void GetNearbyStructuresOfClass(UWorld * World, TSubclassOf<APrimalStructure> StructureClass, FVector * Location, float Range, TArray<APrimalStructure *> * Structures) { NativeCall<void, UWorld *, TSubclassOf<APrimalStructure>, FVector *, float, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.GetNearbyStructuresOfClass", World, StructureClass, Location, Range, Structures); }
	float GetNoClaimFlagDecayPeriod() { return NativeCall<float>(this, "APrimalStructure.GetNoClaimFlagDecayPeriod"); }
	int GetNumStructuresInRange(FVector AtLocation, float WithinRange) { return NativeCall<int, FVector, float>(this, "APrimalStructure.GetNumStructuresInRange", AtLocation, WithinRange); }
	static int GetNumStructuresInRangeStructureTypeFlag(UWorld * theWorld, FVector AtLocation, int TypeFlag, float WithinRange, bool bCheckBPCountStructureInRange, bool bUseInternalOctree, APrimalStructure * IgnoreStructure) { return NativeCall<int, UWorld *, FVector, int, float, bool, bool, APrimalStructure *>(nullptr, "APrimalStructure.GetNumStructuresInRangeStructureTypeFlag", theWorld, AtLocation, TypeFlag, WithinRange, bCheckBPCountStructureInRange, bUseInternalOctree, IgnoreStructure); }
	UPaintingTexture * GetPaintingTexture() { return NativeCall<UPaintingTexture *>(this, "APrimalStructure.GetPaintingTexture"); }
	USceneComponent * GetParticleBaseComponent() { return NativeCall<USceneComponent *>(this, "APrimalStructure.GetParticleBaseComponent"); }
	FVector * GetParticleSystemClampingVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructure.GetParticleSystemClampingVelocity", result); }
	int GetPinCode() { return NativeCall<int>(this, "APrimalStructure.GetPinCode"); }
	bool GetPlacingGroundLocation(AActor ** OutHitActor, FPlacementData * OutPlacementData, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle, TArray<FLocRot> * AlternateSnapTransforms, bool bIgnoreSnapCheckDistanceInterval) { return NativeCall<bool, AActor **, FPlacementData *, APlayerController *, bool, int, TArray<FLocRot> *, bool>(this, "APrimalStructure.GetPlacingGroundLocation", OutHitActor, OutPlacementData, PC, bFinalPlacement, SnapPointCycle, AlternateSnapTransforms, bIgnoreSnapCheckDistanceInterval); }
	UPrimitiveComponent * GetPrimaryHitComponent() { return NativeCall<UPrimitiveComponent *>(this, "APrimalStructure.GetPrimaryHitComponent"); }
	bool GetSnapPlacementMeshOverride(FPlacementData * PlacementData, UStaticMesh ** OutStaticMesh, UClass ** OutReplacementClass, FVector * PreviewLocOffset, FRotator * PreviewRotOffset) { return NativeCall<bool, FPlacementData *, UStaticMesh **, UClass **, FVector *, FRotator *>(this, "APrimalStructure.GetSnapPlacementMeshOverride", PlacementData, OutStaticMesh, OutReplacementClass, PreviewLocOffset, PreviewRotOffset); }
	FVector * GetSnapPointLocation(FVector * result, int SnapPointIndex, bool bOverrideTransform, FVector OverrideLoc, FRotator OverrideRot) { return NativeCall<FVector *, FVector *, int, bool, FVector, FRotator>(this, "APrimalStructure.GetSnapPointLocation", result, SnapPointIndex, bOverrideTransform, OverrideLoc, OverrideRot); }
	UMeshComponent * GetSnapSocketMeshComponent() { return NativeCall<UMeshComponent *>(this, "APrimalStructure.GetSnapSocketMeshComponent"); }
	bool GetSnapToLocation(FVector * AtLoc, FRotator * AtRotation, FPlacementData * OutPlacementData, APrimalStructure ** OutParentStructure, int * OutSnapToIndex, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle, TArray<FLocRot> * AlternateSnapTransforms) { return NativeCall<bool, FVector *, FRotator *, FPlacementData *, APrimalStructure **, int *, APlayerController *, bool, int, TArray<FLocRot> *>(this, "APrimalStructure.GetSnapToLocation", AtLoc, AtRotation, OutPlacementData, OutParentStructure, OutSnapToIndex, PC, bFinalPlacement, SnapPointCycle, AlternateSnapTransforms); }
	void GetSnapToParentStructures(FVector AtLocation, FRotator AtRotation, int InitialMySnapIndex, APrimalStructure * InitialParent, TArray<APrimalStructure *> * SnapToParentStructures, APlayerController * PC) { NativeCall<void, FVector, FRotator, int, APrimalStructure *, TArray<APrimalStructure *> *, APlayerController *>(this, "APrimalStructure.GetSnapToParentStructures", AtLocation, AtRotation, InitialMySnapIndex, InitialParent, SnapToParentStructures, PC); }
	float GetSpoilingTimeMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "APrimalStructure.GetSpoilingTimeMultiplier", anItem); }
	FLinearColor * GetStructureColor(FLinearColor * result, int ColorRegionIndex) { return NativeCall<FLinearColor *, FLinearColor *, int>(this, "APrimalStructure.GetStructureColor", result, ColorRegionIndex); }
	FLinearColor * GetStructureColorForID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>(this, "APrimalStructure.GetStructureColorForID", result, SetNum, ID); }
	int GetStructureColorValue(int ColorRegionIndex) { return NativeCall<int, int>(this, "APrimalStructure.GetStructureColorValue", ColorRegionIndex); }
	TArray<short> * GetStructureColorsArray(TArray<short> * result) { return NativeCall<TArray<short> *, TArray<short> *>(this, "APrimalStructure.GetStructureColorsArray", result); }
	float GetStructureDamageMultiplier() { return NativeCall<float>(this, "APrimalStructure.GetStructureDamageMultiplier"); }
	float GetStructureDemolishTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureDemolishTime"); }
	float GetStructureRepairCooldownTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureRepairCooldownTime"); }
	//TEnumAsByte<enum EShipSize::Type> * GetStructureShipMaxSizeClass(TEnumAsByte<enum EShipSize::Type> * result) { return NativeCall<TEnumAsByte<enum EShipSize::Type> *, TEnumAsByte<enum EShipSize::Type> *>(this, "APrimalStructure.GetStructureShipMaxSizeClass", result); }
	TEnumAsByte<enum EShipSize::Type> * GetStructureShipMinSizeClass(TEnumAsByte<enum EShipSize::Type> * result) { return NativeCall<TEnumAsByte<enum EShipSize::Type> *, TEnumAsByte<enum EShipSize::Type> *>(this, "APrimalStructure.GetStructureShipMinSizeClass", result); }
	float GetStructureWeight() { return NativeCall<float>(this, "APrimalStructure.GetStructureWeight"); }
	static void GetStructuresInRange(UWorld * theWorld, FVector AtLocation, float WithinRange, TSubclassOf<APrimalStructure> StructureClass, TArray<APrimalStructure *> * StructuresOut, bool bUseInternalOctree, APrimalStructure * IgnoreStructure) { NativeCall<void, UWorld *, FVector, float, TSubclassOf<APrimalStructure>, TArray<APrimalStructure *> *, bool, APrimalStructure *>(nullptr, "APrimalStructure.GetStructuresInRange", theWorld, AtLocation, WithinRange, StructureClass, StructuresOut, bUseInternalOctree, IgnoreStructure); }
	float GetTargetingDesirability(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>(this, "APrimalStructure.GetTargetingDesirability", Attacker); }
	UObject * GetUObjectInterfaceDataListEntryInterface() { return NativeCall<UObject *>(this, "APrimalStructure.GetUObjectInterfaceDataListEntryInterface"); }
	bool IncludeTransformInHeaderData() { return NativeCall<bool>(this, "APrimalStructure.IncludeTransformInHeaderData"); }
	void InitDynamicMaterials(UMeshComponent * Component) { NativeCall<void, UMeshComponent *>(this, "APrimalStructure.InitDynamicMaterials", Component); }
	bool Internal_IsInSnapChain(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.Internal_IsInSnapChain", theStructure); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement, TArray<FLocRot> * AlternateSnapTransforms, FVector * SnapCheckStartLoc) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool, TArray<FLocRot> *, FVector *>(this, "APrimalStructure.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, AlternateSnapTransforms, SnapCheckStartLoc); }
	bool IsAttachedToShipInDryDock() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToShipInDryDock"); }
	bool IsAttachedToShipInWetDock() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToShipInWetDock"); }
	bool IsAttachedToSunkenShip() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToSunkenShip"); }
	bool IsCheckingForAttachedToValidShip() { return NativeCall<bool>(this, "APrimalStructure.IsCheckingForAttachedToValidShip"); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, FVector *>(this, "APrimalStructure.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	bool IsOnlyLinkedToFastDecayStructures() { return NativeCall<bool>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructures"); }
	bool IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> * TestedStructures) { return NativeCall<bool, TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> *>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal", TestedStructures); }
	static bool IsPointNearSupplyCrateSpawn(UWorld * theWorld, FVector AtPoint) { return NativeCall<bool, UWorld *, FVector>(nullptr, "APrimalStructure.IsPointNearSupplyCrateSpawn", theWorld, AtPoint); }
	static bool IsPointObstructedByWorldGeometry(UWorld * ForWorld, FVector ThePoint, bool bIgnoreTerrain, bool bOnlyCheckTerrain, bool bIgnoreFoliage, float OBSTRUCTION_CHECK_DIST) { return NativeCall<bool, UWorld *, FVector, bool, bool, bool, float>(nullptr, "APrimalStructure.IsPointObstructedByWorldGeometry", ForWorld, ThePoint, bIgnoreTerrain, bOnlyCheckTerrain, bIgnoreFoliage, OBSTRUCTION_CHECK_DIST); }
	bool IsShipStructure() { return NativeCall<bool>(this, "APrimalStructure.IsShipStructure"); }
	void ModifyClientSideMoveToLocation(FVector * MoveToLoc) { NativeCall<void, FVector *>(this, "APrimalStructure.ModifyClientSideMoveToLocation", MoveToLoc); }
	bool ModifyMoveToOrderedActorsArray(TArray<UPrimitiveComponent *> * MoveToArray, APrimalCharacter * FromPlayer) { return NativeCall<bool, TArray<UPrimitiveComponent *> *, APrimalCharacter *>(this, "APrimalStructure.ModifyMoveToOrderedActorsArray", MoveToArray, FromPlayer); }
	void NPC_OnArrivedAtStructure(APrimalCharacter * ForChar) { NativeCall<void, APrimalCharacter *>(this, "APrimalStructure.NPC_OnArrivedAtStructure", ForChar); }
	void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects_Implementation"); }
	void NetSpawnCoreStructureDeathActor_Implementation(float BuffTimeReductionMultiplier) { NativeCall<void, float>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor_Implementation", BuffTimeReductionMultiplier); }
	void NetUpdateOriginalOwnerNameAndID_Implementation(int NewOriginalOwnerID, FString * NewOriginalOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NetUpdateTeamAndOwnerName_Implementation(int NewTeam, FString * NewOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateTeamAndOwnerName_Implementation", NewTeam, NewOwnerName); }
	void NonPlayerFinalStructurePlacement(int PlacementTargetingTeam, int PlacementOwningPlayerID, FString * PlacementOwningPlayerName, APrimalStructure * ForcePrimaryParent, bool bLinkToParent) { NativeCall<void, int, int, FString *, APrimalStructure *, bool>(this, "APrimalStructure.NonPlayerFinalStructurePlacement", PlacementTargetingTeam, PlacementOwningPlayerID, PlacementOwningPlayerName, ForcePrimaryParent, bLinkToParent); }
	float OffsetHUDFromBottomScreenY_Implementation(AHUD * ForHUD) { return NativeCall<float, AHUD *>(this, "APrimalStructure.OffsetHUDFromBottomScreenY_Implementation", ForHUD); }
	void OnAttachedShipDeath() { NativeCall<void>(this, "APrimalStructure.OnAttachedShipDeath"); }
	void OnAttachedToRaft() { NativeCall<void>(this, "APrimalStructure.OnAttachedToRaft"); }
	void OnAttachedToValidShip() { NativeCall<void>(this, "APrimalStructure.OnAttachedToValidShip"); }
	void OnDeserializedByGame(EOnDesrializationType::Type DeserializationType) { NativeCall<void, EOnDesrializationType::Type>(this, "APrimalStructure.OnDeserializedByGame", DeserializationType); }
	void OnFailedToAttachToValidShip() { NativeCall<void>(this, "APrimalStructure.OnFailedToAttachToValidShip"); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "APrimalStructure.OnRep_AttachmentReplication"); }
	void OnStructurePlacedNotify(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { NativeCall<void, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructure.OnStructurePlacedNotify", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	void PlacedStructureLocation(APlayerController * ByPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.PlacedStructureLocation", ByPC); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalStructure.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PostInitializeComponents"); }
	void PostSpawnInitialize(FVector * SpawnLocation, FRotator * SpawnRotation, AActor * InOwner, APawn * InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay) { NativeCall<void, FVector *, FRotator *, AActor *, APawn *, bool, bool, bool, bool>(this, "APrimalStructure.PostSpawnInitialize", SpawnLocation, SpawnRotation, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructure.PostSpawnInitialize"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PreInitializeComponents"); }
	void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructure.PrepareAsPlacementPreview"); }
	void PrepareForSaving() { NativeCall<void>(this, "APrimalStructure.PrepareForSaving"); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructure.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	bool PreventChoosingRotation(APrimalStructurePlacer * ForPlacer) { return NativeCall<bool, APrimalStructurePlacer *>(this, "APrimalStructure.PreventChoosingRotation", ForPlacer); }
	bool PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure> FloorClass) { return NativeCall<bool, TSubclassOf<APrimalStructure>>(this, "APrimalStructure.PreventPlacingOnFloorClass", FloorClass); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool checkedBox, int ExtraID1, int ExtraID2) { NativeCall<void, AShooterPlayerController *, FString *, bool, int, int>(this, "APrimalStructure.ProcessEditText", ForPC, TextToUse, checkedBox, ExtraID1, ExtraID2); }
	void RefreshStructureColors() { NativeCall<void>(this, "APrimalStructure.RefreshStructureColors"); }
	void RemoveLinkedStructure(APrimalStructure * Structure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>(this, "APrimalStructure.RemoveLinkedStructure", Structure, InstigatorController, DamageCauser); }
	void RepairCheckTimer() { NativeCall<void>(this, "APrimalStructure.RepairCheckTimer"); }
	static void ReprocessTree(TArray<APrimalStructure *> * StartingStructures, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, TArray<APrimalStructure *> *, AController *, AActor *>(nullptr, "APrimalStructure.ReprocessTree", StartingStructures, InstigatorController, DamageCauser); }
	void SaddleDinoDied() { NativeCall<void>(this, "APrimalStructure.SaddleDinoDied"); }
	void ServerRequestUseItemWithActor(APlayerController * ForPC, UObject * anItem, int AdditionalData) { NativeCall<void, APlayerController *, UObject *, int>(this, "APrimalStructure.ServerRequestUseItemWithActor", ForPC, anItem, AdditionalData); }
	void SetAllowStructureColorSet(TArray<int> newColorSet) { NativeCall<void, TArray<int>>(this, "APrimalStructure.SetAllowStructureColorSet", newColorSet); }
	void SetDinoSaddleAttachment(APrimalDinoCharacter * myDino, FName BoneName, FVector RelLoc, FRotator RelRot, bool bMaintainWorldPosition) { NativeCall<void, APrimalDinoCharacter *, FName, FVector, FRotator, bool>(this, "APrimalStructure.SetDinoSaddleAttachment", myDino, BoneName, RelLoc, RelRot, bMaintainWorldPosition); }
	void SetEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabled", bEnabled); }
	void SetEnabledPrimarySnappedStructureParent_Implementation(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent_Implementation", bEnabled); }
	void SetLinkedIDs() { NativeCall<void>(this, "APrimalStructure.SetLinkedIDs"); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructure.SetStaticMobility"); }
	void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.SetStructureCollisionChannels"); }
	void SetStructureColorValue(int ColorRegionIndex, int SetVal) { NativeCall<void, int, int>(this, "APrimalStructure.SetStructureColorValue", ColorRegionIndex, SetVal); }
	void SetStructureColors(TArray<short> InStructureColors) { NativeCall<void, TArray<short>>(this, "APrimalStructure.SetStructureColors", InStructureColors); }
	void SetupComponentCollisionChannels(UPrimitiveComponent * PrimitiveComponent, bool bSetupDestructionMesh, bool bSetupMeshMaterials) { NativeCall<void, UPrimitiveComponent *, bool, bool>(this, "APrimalStructure.SetupComponentCollisionChannels", PrimitiveComponent, bSetupDestructionMesh, bSetupMeshMaterials); }
	void SetupDynamicMeshMaterials(UMeshComponent * meshComp, bool bDisableWorldSpaceEffects) { NativeCall<void, UMeshComponent *, bool>(this, "APrimalStructure.SetupDynamicMeshMaterials", meshComp, bDisableWorldSpaceEffects); }
	bool SkipDuringPartialWorldSave() { return NativeCall<bool>(this, "APrimalStructure.SkipDuringPartialWorldSave"); }
	void StartRepair() { NativeCall<void>(this, "APrimalStructure.StartRepair"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructure.Stasis"); }
	float TakeDamage(float Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>(this, "APrimalStructure.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool TickCriticalShipStructure(float DeltaTime) { return NativeCall<bool, float>(this, "APrimalStructure.TickCriticalShipStructure", DeltaTime); }
	void TickPlacingShipStructure(APrimalRaft * OnShip, FVector LastPlacementHitLoc) { NativeCall<void, APrimalRaft *, FVector>(this, "APrimalStructure.TickPlacingShipStructure", OnShip, LastPlacementHitLoc); }
	bool TickPlacingStructure(APrimalStructurePlacer * PlacerActor, float DeltaTime) { return NativeCall<bool, APrimalStructurePlacer *, float>(this, "APrimalStructure.TickPlacingStructure", PlacerActor, DeltaTime); }
	void TimeoutFor_DelayedClientAttachParentReplicationFixupCheck() { NativeCall<void>(this, "APrimalStructure.TimeoutFor_DelayedClientAttachParentReplicationFixupCheck"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructure.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructure.Unstasis"); }
	void UpdateStencilValues() { NativeCall<void>(this, "APrimalStructure.UpdateStencilValues"); }
	void UpdateTribeGroupStructureRank_Implementation(char NewRank) { NativeCall<void, char>(this, "APrimalStructure.UpdateTribeGroupStructureRank_Implementation", NewRank); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructure.UpdatedHealth", bDoReplication); }
	bool UseDynamicMobility() { return NativeCall<bool>(this, "APrimalStructure.UseDynamicMobility"); }
	bool AllowBeginPlacementBy(AShooterPlayerController * ByPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.AllowBeginPlacementBy", ByPC); }
	bool AllowPlacingMeOnStructure(APrimalStructure * ParentStructure, FPlacementData * ThePlacementData) { return NativeCall<bool, APrimalStructure *, FPlacementData *>(this, "APrimalStructure.AllowPlacingMeOnStructure", ParentStructure, ThePlacementData); }
	bool AllowPlacingStructureOnMe(APrimalStructure * ChildStructure, FPlacementData * ThePlacementData) { return NativeCall<bool, APrimalStructure *, FPlacementData *>(this, "APrimalStructure.AllowPlacingStructureOnMe", ChildStructure, ThePlacementData); }
	bool BPAllowJumpOutOfWaterOnto(AActor * Jumper) { return NativeCall<bool, AActor *>(this, "APrimalStructure.BPAllowJumpOutOfWaterOnto", Jumper); }
	bool BPAllowPickupGiveItem(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructure.BPAllowPickupGiveItem", ForPC); }
	bool BPAllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>(this, "APrimalStructure.BPAllowSnappingWith", OtherStructure, ForPC); }
	void BPApplyCustomDurabilityOnPickup(UPrimalItem * pickedup) { NativeCall<void, UPrimalItem *>(this, "APrimalStructure.BPApplyCustomDurabilityOnPickup", pickedup); }
	bool BPCanFinalPlaceOnStructureSaddle(FPlacementData * data, APawn * AttachToPawn) { return NativeCall<bool, FPlacementData *, APawn *>(this, "APrimalStructure.BPCanFinalPlaceOnStructureSaddle", data, AttachToPawn); }
	bool BPForceConsideredEnemyFoundation(APlayerController * PC, APrimalStructure * ForNewStructure, FVector * TestAtLocation) { return NativeCall<bool, APlayerController *, APrimalStructure *, FVector *>(this, "APrimalStructure.BPForceConsideredEnemyFoundation", PC, ForNewStructure, TestAtLocation); }
	void BPGetInfoFromConsumedItemForPlacedStructure(UPrimalItem * ItemToConsumed) { NativeCall<void, UPrimalItem *>(this, "APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure", ItemToConsumed); }
	void BPGetSnapFromPlacementMeshOverride(APrimalStructure * ParentStructure, FPlacementData * OutPlacementData, UStaticMesh ** OutMeshOverride, TSubclassOf<APrimalStructure> * OutClassOverride, FVector * PreviewLocOffset, FRotator * PreviewRotOffset) { NativeCall<void, APrimalStructure *, FPlacementData *, UStaticMesh **, TSubclassOf<APrimalStructure> *, FVector *, FRotator *>(this, "APrimalStructure.BPGetSnapFromPlacementMeshOverride", ParentStructure, OutPlacementData, OutMeshOverride, OutClassOverride, PreviewLocOffset, PreviewRotOffset); }
	void BPGetSnapToPlacementMeshOverride(APrimalStructure * ChildStructure, FPlacementData * OutPlacementData, UStaticMesh ** OutMeshOverride, TSubclassOf<APrimalStructure> * OutClassOverride, FVector * PreviewLocOffset, FRotator * PreviewRotOffset) { NativeCall<void, APrimalStructure *, FPlacementData *, UStaticMesh **, TSubclassOf<APrimalStructure> *, FVector *, FRotator *>(this, "APrimalStructure.BPGetSnapToPlacementMeshOverride", ChildStructure, OutPlacementData, OutMeshOverride, OutClassOverride, PreviewLocOffset, PreviewRotOffset); }
	float BPGetStructureWeight() { return NativeCall<float>(this, "APrimalStructure.BPGetStructureWeight"); }
	bool BPHandleBedFastTravel(AShooterPlayerController * ForPC, APrimalStructure * ToBed) { return NativeCall<bool, AShooterPlayerController *, APrimalStructure *>(this, "APrimalStructure.BPHandleBedFastTravel", ForPC, ToBed); }
	void BPHandleStructureEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.BPHandleStructureEnabled", bEnabled); }
	bool BPImpactEffect(FHitResult * HitRes, FVector * ShootDirection) { return NativeCall<bool, FHitResult *, FVector *>(this, "APrimalStructure.BPImpactEffect", HitRes, ShootDirection); }
	int BPIsAllowedToBuild(FPlacementData * OutPlacementData, int CurrentAllowedReason) { return NativeCall<int, FPlacementData *, int>(this, "APrimalStructure.BPIsAllowedToBuild", OutPlacementData, CurrentAllowedReason); }
	int BPIsAllowedToBuildEx(FPlacementData * OutPlacementData, int CurrentAllowedReason, APlayerController * PC, bool bFinalPlacement) { return NativeCall<int, FPlacementData *, int, APlayerController *, bool>(this, "APrimalStructure.BPIsAllowedToBuildEx", OutPlacementData, CurrentAllowedReason, PC, bFinalPlacement); }
	bool BPOverrideAllowStructureAccess(AShooterPlayerController * ForPC, bool bIsAccessAllowed) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "APrimalStructure.BPOverrideAllowStructureAccess", ForPC, bIsAccessAllowed); }
	FString * BPOverrideCantBuildReasonString(FString * result, int CantBuildReason) { return NativeCall<FString *, FString *, int>(this, "APrimalStructure.BPOverrideCantBuildReasonString", result, CantBuildReason); }
	bool BPOverrideDemolish(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.BPOverrideDemolish", ForPC); }
	FVector * BPOverridePlacementLocation(FVector * result, FVector PlacementLocation) { return NativeCall<FVector *, FVector *, FVector>(this, "APrimalStructure.BPOverridePlacementLocation", result, PlacementLocation); }
	bool BPOverrideSnappedToTransform(APrimalStructure * childStructure, int ChildSnapFromIndex, FVector UnsnappedPlacementPos, FRotator UnsnappedPlacementRot, FVector SnappedPlacementPos, FRotator SnappedPlacementRot, int SnapToIndex, FVector * OutLocation, FRotator * OutRotation, int * bForceInvalidateSnap) { return NativeCall<bool, APrimalStructure *, int, FVector, FRotator, FVector, FRotator, int, FVector *, FRotator *, int *>(this, "APrimalStructure.BPOverrideSnappedToTransform", childStructure, ChildSnapFromIndex, UnsnappedPlacementPos, UnsnappedPlacementRot, SnappedPlacementPos, SnappedPlacementRot, SnapToIndex, OutLocation, OutRotation, bForceInvalidateSnap); }
	void BPPlacedStructureLocation(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { NativeCall<void, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructure.BPPlacedStructureLocation", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	FPlacementData * BPPlacingWallAttachmentOnMe(FPlacementData * result, APrimalStructure * AttachedStructure, FPlacementData * OutPlacementData) { return NativeCall<FPlacementData *, FPlacementData *, APrimalStructure *, FPlacementData *>(this, "APrimalStructure.BPPlacingWallAttachmentOnMe", result, AttachedStructure, OutPlacementData); }
	void BPPlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalStructure.BPPlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void BPPostLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.BPPostLoadedFromSaveGame"); }
	void BPPostSetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.BPPostSetStructureCollisionChannels"); }
	bool BPPreventPlacementOnPawn(APlayerController * PC, APrimalCharacter * ForCharacter, FName ForBone) { return NativeCall<bool, APlayerController *, APrimalCharacter *, FName>(this, "APrimalStructure.BPPreventPlacementOnPawn", PC, ForCharacter, ForBone); }
	bool BPPreventPlacingOnFloorStructure(FPlacementData * theOutPlacementData, APrimalStructure * FloorStructure) { return NativeCall<bool, FPlacementData *, APrimalStructure *>(this, "APrimalStructure.BPPreventPlacingOnFloorStructure", theOutPlacementData, FloorStructure); }
	bool BPPreventPlacingStructureOntoMe(APlayerController * PC, APrimalStructure * ForNewStructure, FHitResult * ForHitResult) { return NativeCall<bool, APlayerController *, APrimalStructure *, FHitResult *>(this, "APrimalStructure.BPPreventPlacingStructureOntoMe", PC, ForNewStructure, ForHitResult); }
	bool BPPreventReplacementBy(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.BPPreventReplacementBy", theStructure); }
	bool BPPreventReplacementOf(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.BPPreventReplacementOf", theStructure); }
	bool BPPreventSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructure.BPPreventSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	bool BPPreventUsingAsFloorForStructure(FPlacementData * theOutPlacementData, APrimalStructure * StructureToPlaceOnMe) { return NativeCall<bool, FPlacementData *, APrimalStructure *>(this, "APrimalStructure.BPPreventUsingAsFloorForStructure", theOutPlacementData, StructureToPlaceOnMe); }
	void BPProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool checkedBox, int ExtraID1, int ExtraID2) { NativeCall<void, AShooterPlayerController *, FString *, bool, int, int>(this, "APrimalStructure.BPProcessEditText", ForPC, TextToUse, checkedBox, ExtraID1, ExtraID2); }
	void BPRefreshedStructureColors() { NativeCall<void>(this, "APrimalStructure.BPRefreshedStructureColors"); }
	void BPSaddleDinoDied() { NativeCall<void>(this, "APrimalStructure.BPSaddleDinoDied"); }
	void BPStructurePreGetMultiUseEntries(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.BPStructurePreGetMultiUseEntries", ForPC); }
	void BPTriggerStasisEvent() { NativeCall<void>(this, "APrimalStructure.BPTriggerStasisEvent"); }
	void BPUnstasis() { NativeCall<void>(this, "APrimalStructure.BPUnstasis"); }
	bool BPUseCountStructureInRange() { return NativeCall<bool>(this, "APrimalStructure.BPUseCountStructureInRange"); }
	int BP_CanPlaceCriticalShipStructure(APrimalRaft * OnShip) { return NativeCall<int, APrimalRaft *>(this, "APrimalStructure.BP_CanPlaceCriticalShipStructure", OnShip); }
	bool BP_ModifyClientSideMoveToLocation(FVector * MoveToLoc) { return NativeCall<bool, FVector *>(this, "APrimalStructure.BP_ModifyClientSideMoveToLocation", MoveToLoc); }
	bool BP_ModifyMoveToOrderedActorsArray(TArray<UPrimitiveComponent *> * MoveToArray, APrimalCharacter * FromPlayer) { return NativeCall<bool, TArray<UPrimitiveComponent *> *, APrimalCharacter *>(this, "APrimalStructure.BP_ModifyMoveToOrderedActorsArray", MoveToArray, FromPlayer); }
	void BP_OnAttachedShipDeath() { NativeCall<void>(this, "APrimalStructure.BP_OnAttachedShipDeath"); }
	void BP_OnAttachedToValidShip() { NativeCall<void>(this, "APrimalStructure.BP_OnAttachedToValidShip"); }
	void BP_OnDemolished(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.BP_OnDemolished", ForPC); }
	void BP_OnFailedToAttachToValidShip() { NativeCall<void>(this, "APrimalStructure.BP_OnFailedToAttachToValidShip"); }
	void BP_OnRepair(float RepairAmount) { NativeCall<void, float>(this, "APrimalStructure.BP_OnRepair", RepairAmount); }
	void BP_OnStructurePlacedNotify(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { NativeCall<void, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructure.BP_OnStructurePlacedNotify", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	bool BP_PreventChoosingRotation(APrimalStructurePlacer * ForPlacer) { return NativeCall<bool, APrimalStructurePlacer *>(this, "APrimalStructure.BP_PreventChoosingRotation", ForPlacer); }
	void BP_TickCriticalShipStructure(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructure.BP_TickCriticalShipStructure", DeltaTime); }
	void ClearCustomColors() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors"); }
	void ClientUpdateLinkedStructures(TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, TArray<unsigned int> *>(this, "APrimalStructure.ClientUpdateLinkedStructures", NewLinkedStructures); }
	void ClientUpdatedStructureColors() { NativeCall<void>(this, "APrimalStructure.ClientUpdatedStructureColors"); }
	void DrawPlacementHUD(AHUD * HUD) { NativeCall<void, AHUD *>(this, "APrimalStructure.DrawPlacementHUD", HUD); }
	FName * GetAttachedTurretCameraSocketNameOverride(FName * result, APrimalStructure * ForStructure) { return NativeCall<FName *, FName *, APrimalStructure *>(this, "APrimalStructure.GetAttachedTurretCameraSocketNameOverride", result, ForStructure); }
	FVector * GetAttachedTurretYawLimitsOverride(FVector * result, APrimalStructure * ForStructure) { return NativeCall<FVector *, FVector *, APrimalStructure *>(this, "APrimalStructure.GetAttachedTurretYawLimitsOverride", result, ForStructure); }
	TSubclassOf<APrimalStructure> * GetBedFilterClass(TSubclassOf<APrimalStructure> * result) { return NativeCall<TSubclassOf<APrimalStructure> *, TSubclassOf<APrimalStructure> *>(this, "APrimalStructure.GetBedFilterClass", result); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructure.GetPrivateStaticClass", Package); }
	FString * GetTutorialHintString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetTutorialHintString", result); }
	bool IsValidForSnappingFrom(APrimalStructure * OtherStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.IsValidForSnappingFrom", OtherStructure); }
	bool IsValidSnapPointFrom(APrimalStructure * ParentStructure, int MySnapPointFromIndex) { return NativeCall<bool, APrimalStructure *, int>(this, "APrimalStructure.IsValidSnapPointFrom", ParentStructure, MySnapPointFromIndex); }
	bool IsValidSnapPointTo(APrimalStructure * ChildStructure, int MySnapPointToIndex) { return NativeCall<bool, APrimalStructure *, int>(this, "APrimalStructure.IsValidSnapPointTo", ChildStructure, MySnapPointToIndex); }
	void MultiAddStructuresPlacedOnFloor(APrimalStructure * structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructure.MultiAddStructuresPlacedOnFloor", structure); }
	void NetDoSpawnEffects() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects"); }
	void NetSpawnCoreStructureDeathActor(float BuffTimeReductionMultiplier) { NativeCall<void, float>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor", BuffTimeReductionMultiplier); }
	void NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, FString * NewOriginalOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NetUpdateTeamAndOwnerName(int NewTeam, FString * NewOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateTeamAndOwnerName", NewTeam, NewOwnerName); }
	void OnChildStructurePlacedNotify(APrimalStructure * ChildStructure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructure.OnChildStructurePlacedNotify", ChildStructure); }
	void OnShipImpactedStructure(APrimalRaft * Ship, UPrimitiveComponent * OtherComp, FVector NormalImpulse, FHitResult * Hit) { NativeCall<void, APrimalRaft *, UPrimitiveComponent *, FVector, FHitResult *>(this, "APrimalStructure.OnShipImpactedStructure", Ship, OtherComp, NormalImpulse, Hit); }
	void PlacedOnDino(APrimalDinoCharacter * OnChar) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalStructure.PlacedOnDino", OnChar); }
	void SetEnabledPrimarySnappedStructureParent(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent", bEnabled); }
	static void StaticRegisterNativesAPrimalStructure() { NativeCall<void>(nullptr, "APrimalStructure.StaticRegisterNativesAPrimalStructure"); }
	bool StructurePlacementOverlapForceEncroachment(APrimalStructure * PlacingStructure, AActor * OnDinoCharacter, APrimalStructure * SnappedToParentStructure, APrimalStructure * ReplacesStructure, FVector * PlacementLocation, FVector * EncroachmentCheckLocation, FVector * EncroachmentCheckExtent) { return NativeCall<bool, APrimalStructure *, AActor *, APrimalStructure *, APrimalStructure *, FVector *, FVector *, FVector *>(this, "APrimalStructure.StructurePlacementOverlapForceEncroachment", PlacingStructure, OnDinoCharacter, SnappedToParentStructure, ReplacesStructure, PlacementLocation, EncroachmentCheckLocation, EncroachmentCheckExtent); }
	void UpdateTribeGroupStructureRank(char NewRank) { NativeCall<void, char>(this, "APrimalStructure.UpdateTribeGroupStructureRank", NewRank); }
};

struct APrimalStructureBed : APrimalStructure
{
	FVector& PlayerSpawnLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureBed.PlayerSpawnLocOffset"); }
	FRotator& PlayerSpawnRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureBed.PlayerSpawnRotOffset"); }
	unsigned int& LinkedPlayerIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.LinkedPlayerID"); }
	FString& LinkedPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.LinkedPlayerName"); }
	FString& BedNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.BedName"); }
	float& UseCooldownRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownRadius"); }
	float& AttachedToPlatformStructureEnemySpawnPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.AttachedToPlatformStructureEnemySpawnPreventionRadius"); }
	unsigned int& PlacedOnShipIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.PlacedOnShipID"); }
	unsigned int& NextAllowedUseTimeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.NextAllowedUseTime"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.LastSignNamingTime"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bDestroyAfterRespawnUse() { return { this, "APrimalStructureBed.bDestroyAfterRespawnUse" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructureBed.GetPrivateStaticClass"); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureBed.AllowPickupForItem", ForPC); }
	bool AllowSpawnForDownloadedPlayer(unsigned __int64 PlayerDataID, unsigned __int64 TribeID, bool bCheckCooldownTime) { return NativeCall<bool, unsigned __int64, unsigned __int64, bool>(this, "APrimalStructureBed.AllowSpawnForDownloadedPlayer", PlayerDataID, TribeID, bCheckCooldownTime); }
	bool AllowSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructureBed.AllowSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureBed.BeginPlay"); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructureBed.ChangeActorTeam", NewTeam); }
	bool CheckStructureActivateTribeGroupPermission(unsigned __int64 PlayerDataID, unsigned __int64 TribeID) { return NativeCall<bool, unsigned __int64, unsigned __int64>(this, "APrimalStructureBed.CheckStructureActivateTribeGroupPermission", PlayerDataID, TribeID); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureBed.ClientMultiUse", ForPC, UseIndex); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureBed.Destroyed"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureBed.DrawHUD", HUD); }
	bool FastTravelAllowSpawnForPlayer(unsigned int PlayerDataID, bool bCheckCooldownTime) { return NativeCall<bool, unsigned int, bool>(this, "APrimalStructureBed.FastTravelAllowSpawnForPlayer", PlayerDataID, bCheckCooldownTime); }
	static APrimalStructureBed * FindBedWithID(UWorld * forWorld, int theBedID) { return NativeCall<APrimalStructureBed *, UWorld *, int>(nullptr, "APrimalStructureBed.FindBedWithID", forWorld, theBedID); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureBed.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureBed.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FVector * GetPlayerSpawnLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureBed.GetPlayerSpawnLocation", result); }
	FRotator * GetPlayerSpawnRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructureBed.GetPlayerSpawnRotation", result); }
	FVector2D * GetRelativeLocationInServer(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "APrimalStructureBed.GetRelativeLocationInServer", result); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement, TArray<FLocRot> * AlternateSnapTransforms, FVector * SnapCheckStartLoc) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool, TArray<FLocRot> *, FVector *>(this, "APrimalStructureBed.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, AlternateSnapTransforms, SnapCheckStartLoc); }
	void OnBedUsed(AShooterPlayerController * PC, AShooterCharacter * ForPawn, unsigned int OriginServerId, FVector2D * FromRelativeLocInOriginServer) { NativeCall<void, AShooterPlayerController *, AShooterCharacter *, unsigned int, FVector2D *>(this, "APrimalStructureBed.OnBedUsed", PC, ForPawn, OriginServerId, FromRelativeLocInOriginServer); }
	void OnDeserializedByGame(EOnDesrializationType::Type DeserializationType) { NativeCall<void, EOnDesrializationType::Type>(this, "APrimalStructureBed.OnDeserializedByGame", DeserializationType); }
	void OnStructurePlacedNotify(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { NativeCall<void, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructureBed.OnStructurePlacedNotify", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureBed.PlacedStructure", PC); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureBed.PostInitializeComponents"); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool __formal, int ExtraID1, int ExtraID2) { NativeCall<void, AShooterPlayerController *, FString *, bool, int, int>(this, "APrimalStructureBed.ProcessEditText", ForPC, TextToUse, __formal, ExtraID1, ExtraID2); }
	void SaddleDinoDied() { NativeCall<void>(this, "APrimalStructureBed.SaddleDinoDied"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureBed.TryMultiUse", ForPC, UseIndex); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructureBed.GetPrivateStaticClass", Package); }
	void SpawnedPlayerFor(AShooterPlayerController * PC, APawn * ForPawn) { NativeCall<void, AShooterPlayerController *, APawn *>(this, "APrimalStructureBed.SpawnedPlayerFor", PC, ForPawn); }
	static void StaticRegisterNativesAPrimalStructureBed() { NativeCall<void>(nullptr, "APrimalStructureBed.StaticRegisterNativesAPrimalStructureBed"); }
};

struct APrimalStructureDoor : APrimalStructure
{
	TSubobjectPtr<USceneComponent>& MyDoorTransformField() { return *GetNativePointerField<TSubobjectPtr<USceneComponent>*>(this, "APrimalStructureDoor.MyDoorTransform"); }
	float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.RotationSpeed"); }
	USoundCue * DoorOpenSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalStructureDoor.DoorOpenSound"); }
	USoundCue * DoorCloseSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalStructureDoor.DoorCloseSound"); }
	unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureDoor.CurrentPinCode"); }
	float& DoorStateChangeIgnoreEncroachmentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.DoorStateChangeIgnoreEncroachmentInterval"); }
	char& DoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.DoorOpenState"); }
	char& ClientPrevDoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.ClientPrevDoorOpenState"); }
	long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastLockStateChangeTime"); }
	FRotator& SecondDoorDefaultRotField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureDoor.SecondDoorDefaultRot"); }
	float& CurrentDoorAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.CurrentDoorAngle"); }
	USoundBase * UnlockDoorSoundField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructureDoor.UnlockDoorSound"); }
	USoundBase * LockDoorSoundField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructureDoor.LockDoorSound"); }
	USoundBase * LockedSoundField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructureDoor.LockedSound"); }
	long double& LastPinOpenSuccessTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastPinOpenSuccessTime"); }
	long double& LastDoorStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastDoorStateChangeTime"); }
	char& DelayedDoorStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.DelayedDoorState"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bInvertOpenCloseDirection() { return { this, "APrimalStructureDoor.bInvertOpenCloseDirection" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsLocking() { return { this, "APrimalStructureDoor.bSupportsLocking" }; }
	BitFieldValue<bool, unsigned __int32> bUseSecondDoor() { return { this, "APrimalStructureDoor.bUseSecondDoor" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsPinLocking() { return { this, "APrimalStructureDoor.bSupportsPinLocking" }; }
	BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureDoor.bIsLocked" }; }
	BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureDoor.bIsPinLocked" }; }
	BitFieldValue<bool, unsigned __int32> bAdminOnlyAccess() { return { this, "APrimalStructureDoor.bAdminOnlyAccess" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeForcedOpenByDino() { return { this, "APrimalStructureDoor.bCanBeForcedOpenByDino" }; }
	BitFieldValue<bool, unsigned __int32> bPreventBasingWhileMoving() { return { this, "APrimalStructureDoor.bPreventBasingWhileMoving" }; }
	BitFieldValue<bool, unsigned __int32> bForceDoorOpenIn() { return { this, "APrimalStructureDoor.bForceDoorOpenIn" }; }
	BitFieldValue<bool, unsigned __int32> bForceDoorOpenOut() { return { this, "APrimalStructureDoor.bForceDoorOpenOut" }; }
	BitFieldValue<bool, unsigned __int32> bIsDoorMoving() { return { this, "APrimalStructureDoor.bIsDoorMoving" }; }
	BitFieldValue<bool, unsigned __int32> bForceStaticMobility() { return { this, "APrimalStructureDoor.bForceStaticMobility" }; }
	BitFieldValue<bool, unsigned __int32> bRotatePitch() { return { this, "APrimalStructureDoor.bRotatePitch" }; }
	BitFieldValue<bool, unsigned __int32> bRotateRoll() { return { this, "APrimalStructureDoor.bRotateRoll" }; }
	BitFieldValue<bool, unsigned __int32> bRotateYaw() { return { this, "APrimalStructureDoor.bRotateYaw" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedRotation() { return { this, "APrimalStructureDoor.bInitializedRotation" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDoorInterpolation() { return { this, "APrimalStructureDoor.bPreventDoorInterpolation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGotoDoorState() { return { this, "APrimalStructureDoor.bUseBPGotoDoorState" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructureDoor.GetPrivateStaticClass"); }
	bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent * HitComponent, AActor * EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent *, AActor *>(this, "APrimalStructureDoor.AllowIgnoreCharacterEncroachment_Implementation", HitComponent, EncroachingCharacter); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureDoor.AllowPickupForItem", ForPC); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.AllowStructureAccess", ForPC); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BPSetDoorState(int DoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPSetDoorState", DoorState); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureDoor.BeginPlay"); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.CanOpen", ForPC); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureDoor.ClientMultiUse", ForPC, UseIndex); }
	void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState", DoorState, DelayTime); }
	void DelayedGotoDoorStateTimer() { NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureDoor.DrawHUD", HUD); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureDoor.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState", DoorState); }
	void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState_Implementation", DoorState); }
	void OnRep_DoorOpenState(char PrevDoorOpenState) { NativeCall<void, char>(this, "APrimalStructureDoor.OnRep_DoorOpenState", PrevDoorOpenState); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents"); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructureDoor.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureDoor.SetStaticMobility"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureDoor.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureDoor.TryMultiUse", ForPC, UseIndex); }
	void BPGotoDoorState(int NewDoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPGotoDoorState", NewDoorState); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructureDoor.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesAPrimalStructureDoor() { NativeCall<void>(nullptr, "APrimalStructureDoor.StaticRegisterNativesAPrimalStructureDoor"); }
};

struct APrimalStructureItemContainer : APrimalStructure
{
	UPrimalInventoryComponent * MyInventoryComponentField() { return *GetNativePointerField<UPrimalInventoryComponent **>(this, "APrimalStructureItemContainer.MyInventoryComponent"); }
	FString& HasPowerStringOverrideField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.HasPowerStringOverride"); }
	FString& NoPowerStringOverrideField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.NoPowerStringOverride"); }
	TSubclassOf<UPrimalItem>& BatteryClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.BatteryClassOverride"); }
	int& PoweredOverrideCounterField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.PoweredOverrideCounter"); }
	float& NotifyNearbyPowerGeneratorDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorDistance"); }
	int& NotifyNearbyPowerGeneratorOctreeGroupField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorOctreeGroup"); }
	TArray<UMaterialInterface *> ActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface *>*>(this, "APrimalStructureItemContainer.ActivateMaterials"); }
	TArray<UMaterialInterface *> InActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface *>*>(this, "APrimalStructureItemContainer.InActivateMaterials"); }
	UChildActorComponent * MyChildEmitterSpawnableField() { return *GetNativePointerField<UChildActorComponent **>(this, "APrimalStructureItemContainer.MyChildEmitterSpawnable"); }
	FString& BoxNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxName"); }
	float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.InsulationRange"); }
	float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HyperThermiaInsulation"); }
	float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HypoThermiaInsulation"); }
	float& ContainerActiveDecreaseHealthSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ContainerActiveDecreaseHealthSpeed"); }
	float& FuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.FuelConsumptionIntervalsMultiplier"); }
	float& DropInventoryOnDestructionLifespanField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryOnDestructionLifespan"); }
	FString& ActivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.ActivateContainerString"); }
	FString& DeactivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DeactivateContainerString"); }
	TSubclassOf<UDamageType>& ContainerActiveHealthDecreaseDamageTypePassiveField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureItemContainer.ContainerActiveHealthDecreaseDamageTypePassive"); }
	TArray<TSubclassOf<UPrimalItem>>& ActiveRequiresFuelItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "APrimalStructureItemContainer.ActiveRequiresFuelItems"); }
	TArray<float>& FuelItemsConsumeIntervalField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalStructureItemContainer.FuelItemsConsumeInterval"); }
	TArray<TSubclassOf<UPrimalItem>>& FuelItemsConsumedGiveItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "APrimalStructureItemContainer.FuelItemsConsumedGiveItems"); }
	long double& NetDestructionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.NetDestructionTime"); }
	unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureItemContainer.CurrentPinCode"); }
	long double& CurrentFuelTimeCacheField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.CurrentFuelTimeCache"); }
	long double& LastCheckedFuelTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastCheckedFuelTime"); }
	int& LinkedPowerJunctionStructureIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructureID"); }
	int& CurrentItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.CurrentItemCount"); }
	int& MaxItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxItemCount"); }
	TWeakObjectPtr<APrimalStructure>& LinkedPowerJunctionStructureField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructure>*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructure"); }
	TSubclassOf<UPrimalItem>& NextConsumeFuelGiveItemTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.NextConsumeFuelGiveItemType"); }
	long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastLockStateChangeTime"); }
	long double& LastActiveStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActiveStateChangeTime"); }
	int& LastPowerJunctionLinkIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastPowerJunctionLinkID"); }
	float& BasedCharacterDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageInterval"); }
	float& BasedCharacterDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageAmount"); }
	TSubclassOf<UDamageType>& BasedCharacterDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureItemContainer.BasedCharacterDamageType"); }
	TSubclassOf<UPrimalItem>& EngramRequirementClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.EngramRequirementClassOverride"); }
	AActor * LinkedBlueprintSpawnActorPointField() { return *GetNativePointerField<AActor **>(this, "APrimalStructureItemContainer.LinkedBlueprintSpawnActorPoint"); }
	TSubclassOf<APrimalStructureItemContainer>& PoweredNearbyStructureTemplateField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureTemplate"); }
	float& PoweredNearbyStructureRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureRange"); }
	FString& OpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.OpenSceneActionName"); }
	FString& DisabledOpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionName"); }
	TSubclassOf<UPrimalItem>& RequiresItemForOpenSceneActionField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.RequiresItemForOpenSceneAction"); }
	long double& DeathCacheCreationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.DeathCacheCreationTime"); }
	long double& LastBasedCharacterDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageTime"); }
	int& LastBasedCharacterDamageFrameField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageFrame"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSignNamingTime"); }
	FVector& JunctionCableBeamOffsetStartField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetStart"); }
	FVector& JunctionCableBeamOffsetEndField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetEnd"); }
	USoundBase * ContainerActivatedSoundField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructureItemContainer.ContainerActivatedSound"); }
	USoundBase * ContainerDeactivatedSoundField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructureItemContainer.ContainerDeactivatedSound"); }
	TSubclassOf<APrimalStructureItemContainer>& DemolishInventoryDepositClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer.DemolishInventoryDepositClass"); }
	TSubclassOf<UPrimalItem>& FuelItemTrueClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.FuelItemTrueClass"); }
	TSubclassOf<UPrimalItem>& ReplicatedFuelItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemClass"); }
	__int16& ReplicatedFuelItemColorIndexField() { return *GetNativePointerField<__int16*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemColorIndex"); }
	USoundBase * DefaultAudioTemplateField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructureItemContainer.DefaultAudioTemplate"); }
	TArray<TSubclassOf<UPrimalItem>>& OverrideParticleTemplateItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "APrimalStructureItemContainer.OverrideParticleTemplateItemClasses"); }
	TArray<USoundBase *> OverrideAudioTemplatesField() { return *GetNativePointerField<TArray<USoundBase *>*>(this, "APrimalStructureItemContainer.OverrideAudioTemplates"); }
	float& MaxActivationDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.MaxActivationDistance"); }
	FString& BoxNamePrefaceStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxNamePrefaceString"); }
	char& TribeGroupInventoryRankField() { return *GetNativePointerField<char*>(this, "APrimalStructureItemContainer.TribeGroupInventoryRank"); }
	TArray<float>& FuelConsumeDecreaseDurabilityAmountsField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalStructureItemContainer.FuelConsumeDecreaseDurabilityAmounts"); }
	float& RandomFuelUpdateTimeMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMin"); }
	float& RandomFuelUpdateTimeMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMax"); }
	long double& LastDeactivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastDeactivatedTime"); }
	long double& LastActivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActivatedTime"); }
	float& ValidCraftingResourceMaxDurabilityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ValidCraftingResourceMaxDurability"); }
	float& ActivationCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ActivationCooldownTime"); }
	float& UsablePriorityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.UsablePriority"); }
	unsigned __int64& DeathCacheCharacterIDField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructureItemContainer.DeathCacheCharacterID"); }
	float& SinglePlayerFuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
	float& PoweredBatteryDurabilityToDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredBatteryDurabilityToDecreasePerSecond"); }
	float& DropInventoryDepositTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryDepositTraceDistance"); }
	TEnumAsByte<enum ECaptainOtherActions::Type>& CaptainOrdersActivationGroupField() { return *GetNativePointerField<TEnumAsByte<enum ECaptainOtherActions::Type>*>(this, "APrimalStructureItemContainer.CaptainOrdersActivationGroup"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bAutoActivateContainer() { return { this, "APrimalStructureItemContainer.bAutoActivateContainer" }; }
	BitFieldValue<bool, unsigned __int32> bCanToggleActivation() { return { this, "APrimalStructureItemContainer.bCanToggleActivation" }; }
	BitFieldValue<bool, unsigned __int32> bAutoActivateWhenFueled() { return { this, "APrimalStructureItemContainer.bAutoActivateWhenFueled" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCustomName() { return { this, "APrimalStructureItemContainer.bAllowCustomName" }; }
	BitFieldValue<bool, unsigned __int32> bContainerActivated() { return { this, "APrimalStructureItemContainer.bContainerActivated" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseSpoilingMultipliersIfActivated() { return { this, "APrimalStructureItemContainer.bOnlyUseSpoilingMultipliersIfActivated" }; }
	BitFieldValue<bool, unsigned __int32> bCraftingSubstractConnectedWater() { return { this, "APrimalStructureItemContainer.bCraftingSubstractConnectedWater" }; }
	BitFieldValue<bool, unsigned __int32> bForceNoPinLocking() { return { this, "APrimalStructureItemContainer.bForceNoPinLocking" }; }
	BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChanges() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChanges" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUI() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUI" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetFuelConsumptionMultiplier() { return { this, "APrimalStructureItemContainer.bUseBPGetFuelConsumptionMultiplier" }; }
	BitFieldValue<bool, unsigned __int32> bPreventToggleActivation() { return { this, "APrimalStructureItemContainer.bPreventToggleActivation" }; }
	BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantity() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChangesUseQuantity" }; }
	BitFieldValue<bool, unsigned __int32> bStartedUnderwater() { return { this, "APrimalStructureItemContainer.bStartedUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bCheckStartedUnderwater() { return { this, "APrimalStructureItemContainer.bCheckStartedUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUISecondary() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUISecondary" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUITertiary() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUITertiary" }; }
	BitFieldValue<bool, unsigned __int32> bFuelAllowActivationWhenNoPower() { return { this, "APrimalStructureItemContainer.bFuelAllowActivationWhenNoPower" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredAllowBattery() { return { this, "APrimalStructureItemContainer.bPoweredAllowBattery" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredUsingBattery() { return { this, "APrimalStructureItemContainer.bPoweredUsingBattery" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredHasBattery() { return { this, "APrimalStructureItemContainer.bPoweredHasBattery" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredAllowNPC() { return { this, "APrimalStructureItemContainer.bPoweredAllowNPC" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredUsingNPC() { return { this, "APrimalStructureItemContainer.bPoweredUsingNPC" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredHasNPC() { return { this, "APrimalStructureItemContainer.bPoweredHasNPC" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideHasPowerString() { return { this, "APrimalStructureItemContainer.bOverrideHasPowerString" }; }
	BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureItemContainer.bIsLocked" }; }
	BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureItemContainer.bIsPinLocked" }; }
	BitFieldValue<bool, unsigned __int32> bHasFuel() { return { this, "APrimalStructureItemContainer.bHasFuel" }; }
	BitFieldValue<bool, unsigned __int32> bIsUnderwater() { return { this, "APrimalStructureItemContainer.bIsUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bDisableActivationUnderwater() { return { this, "APrimalStructureItemContainer.bDisableActivationUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsLocking() { return { this, "APrimalStructureItemContainer.bSupportsLocking" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsPinLocking() { return { this, "APrimalStructureItemContainer.bSupportsPinLocking" }; }
	BitFieldValue<bool, unsigned __int32> bDropInventoryOnDestruction() { return { this, "APrimalStructureItemContainer.bDropInventoryOnDestruction" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemoved() { return { this, "APrimalStructureItemContainer.bDestroyWhenAllItemsRemoved" }; }
	BitFieldValue<bool, unsigned __int32> bDrinkingWater() { return { this, "APrimalStructureItemContainer.bDrinkingWater" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredWaterSourceWhenActive() { return { this, "APrimalStructureItemContainer.bPoweredWaterSourceWhenActive" }; }
	BitFieldValue<bool, unsigned __int32> bActiveRequiresPower() { return { this, "APrimalStructureItemContainer.bActiveRequiresPower" }; }
	BitFieldValue<bool, unsigned __int32> bIsPowerJunction() { return { this, "APrimalStructureItemContainer.bIsPowerJunction" }; }
	BitFieldValue<bool, unsigned __int32> bAutoActivateIfPowered() { return { this, "APrimalStructureItemContainer.bAutoActivateIfPowered" }; }
	BitFieldValue<bool, unsigned __int32> bLastToggleActivated() { return { this, "APrimalStructureItemContainer.bLastToggleActivated" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsPinActivation() { return { this, "APrimalStructureItemContainer.bSupportsPinActivation" }; }
	BitFieldValue<bool, unsigned __int32> bIsPowered() { return { this, "APrimalStructureItemContainer.bIsPowered" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyAllowTeamActivation() { return { this, "APrimalStructureItemContainer.bOnlyAllowTeamActivation" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateItemFuelClass() { return { this, "APrimalStructureItemContainer.bReplicateItemFuelClass" }; }
	BitFieldValue<bool, unsigned __int32> bUseOpenSceneAction() { return { this, "APrimalStructureItemContainer.bUseOpenSceneAction" }; }
	BitFieldValue<bool, unsigned __int32> bHandledDestruction() { return { this, "APrimalStructureItemContainer.bHandledDestruction" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPActivated() { return { this, "APrimalStructureItemContainer.bUseBPActivated" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivated() { return { this, "APrimalStructureItemContainer.bUseBPCanBeActivated" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivatedByPlayer() { return { this, "APrimalStructureItemContainer.bUseBPCanBeActivatedByPlayer" }; }
	BitFieldValue<bool, unsigned __int32> bBPOnContainerActiveHealthDecrease() { return { this, "APrimalStructureItemContainer.bBPOnContainerActiveHealthDecrease" }; }
	BitFieldValue<bool, unsigned __int32> bBPIsValidWaterSourceForPipe() { return { this, "APrimalStructureItemContainer.bBPIsValidWaterSourceForPipe" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAutoActivateWhenNoPower() { return { this, "APrimalStructureItemContainer.bAllowAutoActivateWhenNoPower" }; }
	BitFieldValue<bool, unsigned __int32> bAutoActivateWhenNoPower() { return { this, "APrimalStructureItemContainer.bAutoActivateWhenNoPower" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresItemExactClass() { return { this, "APrimalStructureItemContainer.bRequiresItemExactClass" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemovedExceptDefaults() { return { this, "APrimalStructureItemContainer.bDestroyWhenAllItemsRemovedExceptDefaults" }; }
	BitFieldValue<bool, unsigned __int32> bInventoryForcePreventRemoteAddItems() { return { this, "APrimalStructureItemContainer.bInventoryForcePreventRemoteAddItems" }; }
	BitFieldValue<bool, unsigned __int32> bInventoryForcePreventItemAppends() { return { this, "APrimalStructureItemContainer.bInventoryForcePreventItemAppends" }; }
	BitFieldValue<bool, unsigned __int32> bDidSetContainerActive() { return { this, "APrimalStructureItemContainer.bDidSetContainerActive" }; }
	BitFieldValue<bool, unsigned __int32> bUseDeathCacheCharacterID() { return { this, "APrimalStructureItemContainer.bUseDeathCacheCharacterID" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetQuantityOfItemWithoutCheckingInventory() { return { this, "APrimalStructureItemContainer.bUseBPGetQuantityOfItemWithoutCheckingInventory" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor() { return { this, "APrimalStructureItemContainer.bUseBPSetPlayerConstructor" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime() { return { this, "APrimalStructureItemContainer.bReplicateLastActivatedTime" }; }
	BitFieldValue<bool, unsigned __int32> bIsAmmoContainer() { return { this, "APrimalStructureItemContainer.bIsAmmoContainer" }; }
	BitFieldValue<bool, unsigned __int32> bForceDropInventoryOnDeath() { return { this, "APrimalStructureItemContainer.bForceDropInventoryOnDeath" }; }
	BitFieldValue<bool, unsigned __int32> bStructureEnableActorTickWhenActivated() { return { this, "APrimalStructureItemContainer.bStructureEnableActorTickWhenActivated" }; }
	BitFieldValue<bool, unsigned __int32> bCraftingSubstractOwnWater() { return { this, "APrimalStructureItemContainer.bCraftingSubstractOwnWater" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructureItemContainer.GetPrivateStaticClass"); }
	bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPowered"); }
	bool AllowSaving() { return NativeCall<bool>(this, "APrimalStructureItemContainer.AllowSaving"); }
	bool AllowToggleActivation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.AllowToggleActivation", ForPC); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureItemContainer.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay"); }
	bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanBeActivated"); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer.CanOpen", ForPC); }
	void CharacterBasedOnUpdate(AActor * characterBasedOnMe, float DeltaSeconds) { NativeCall<void, AActor *, float>(this, "APrimalStructureItemContainer.CharacterBasedOnUpdate", characterBasedOnMe, DeltaSeconds); }
	void CheckAutoReactivate() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckAutoReactivate"); }
	void CheckForDeathCacheEmitter() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckForDeathCacheEmitter"); }
	void CheckFuelSetActive() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckFuelSetActive"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureItemContainer.ClientMultiUse", ForPC, UseIndex); }
	void ConsumeFuel(bool bGiveItem) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.ConsumeFuel", bGiveItem); }
	void ContainerActivated() { NativeCall<void>(this, "APrimalStructureItemContainer.ContainerActivated"); }
	void ContainerDeactivated() { NativeCall<void>(this, "APrimalStructureItemContainer.ContainerDeactivated"); }
	void CopyStructureValuesFrom(APrimalStructureItemContainer * otherItemContainer) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.CopyStructureValuesFrom", otherItemContainer); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureItemContainer.DrawHUD", HUD); }
	void EnableActive() { NativeCall<void>(this, "APrimalStructureItemContainer.EnableActive"); }
	void GetBlueprintSpawnActorTransform(FVector * spawnLoc, FRotator * spawnRot) { NativeCall<void, FVector *, FRotator *>(this, "APrimalStructureItemContainer.GetBlueprintSpawnActorTransform", spawnLoc, spawnRot); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureItemContainer.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureItemContainer.GetLifetimeReplicatedProps", OutLifetimeProps); }
	USoundBase * GetOverrideAudioTemplate() { return NativeCall<USoundBase *>(this, "APrimalStructureItemContainer.GetOverrideAudioTemplate"); }
	float GetStructureWeight() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetStructureWeight"); }
	float GetUsablePriority() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetUsablePriority"); }
	bool IsValidWaterSourceForPipe(APrimalStructureWaterPipe * ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe *>(this, "APrimalStructureItemContainer.IsValidWaterSourceForPipe", ForWaterPipe); }
	void MovePowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.MovePowerJunctionLink"); }
	void NetSetContainerActive_Implementation(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive_Implementation", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
	void NetUpdateBoxName_Implementation(FString * NewName) { NativeCall<void, FString *>(this, "APrimalStructureItemContainer.NetUpdateBoxName_Implementation", NewName); }
	void NetUpdateLocation_Implementation(FVector NewLocation) { NativeCall<void, FVector>(this, "APrimalStructureItemContainer.NetUpdateLocation_Implementation", NewLocation); }
	void NotifyCraftedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer.NotifyCraftedItem", anItem); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureItemContainer.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalStructureItemContainer.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer.NotifyItemRemoved", anItem); }
	void OnDeserializedByGame(EOnDesrializationType::Type DeserializationType) { NativeCall<void, EOnDesrializationType::Type>(this, "APrimalStructureItemContainer.OnDeserializedByGame", DeserializationType); }
	bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer.OverrideHasWaterSource"); }
	void PlacedStructureLocation(APlayerController * ByPC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.PlacedStructureLocation", ByPC); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureItemContainer.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureItemContainer.PostSpawnInitialize"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer.PreInitializeComponents"); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool bCheckedBox, int ExtraID1, int ExtraID2) { NativeCall<void, AShooterPlayerController *, FString *, bool, int, int>(this, "APrimalStructureItemContainer.ProcessEditText", ForPC, TextToUse, bCheckedBox, ExtraID1, ExtraID2); }
	void RefreshFuelState() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshFuelState"); }
	void RefreshInventoryItemCounts() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshInventoryItemCounts"); }
	void RefreshPowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshPowerJunctionLink"); }
	void RefreshPowered(APrimalStructureItemContainer * InDirectPower) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.RefreshPowered", InDirectPower); }
	bool RemoteInventoryAllowActivation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.RemoteInventoryAllowActivation", ForPC); }
	void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetContainerActive", bNewActive); }
	void SetDelayedActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.SetDelayedActivation"); }
	void SetDisabledTimer(float DisabledTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer.SetDisabledTimer", DisabledTime); }
	void SetPlayerConstructor(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.SetPlayerConstructor", PC); }
	void SetPoweredOverrideCounter(int NewPoweredOverrideCounter) { NativeCall<void, int>(this, "APrimalStructureItemContainer.SetPoweredOverrideCounter", NewPoweredOverrideCounter); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Stasis"); }
	float SubtractWaterFromConnections(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections", Amount, bAllowNetworking); }
	void TargetingTeamChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.TargetingTeamChanged"); }
	void TryActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.TryActivation"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureItemContainer.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Unstasis"); }
	void UpdateContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease"); }
	bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers"); }
	bool BPCanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.BPCanBeActivated"); }
	bool BPCanBeActivatedByPlayer(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.BPCanBeActivatedByPlayer", PC); }
	void BPClientRequestInventoryUpdate(AShooterPlayerController * FromPC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureItemContainer.BPClientRequestInventoryUpdate", FromPC); }
	void BPContainerActivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerActivated"); }
	void BPContainerDeactivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerDeactivated"); }
	float BPGetFuelConsumptionMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer.BPGetFuelConsumptionMultiplier"); }
	int BPGetQuantityOfItemWithoutCheckingInventory(TSubclassOf<UPrimalItem> ItemToCheckFor) { return NativeCall<int, TSubclassOf<UPrimalItem>>(this, "APrimalStructureItemContainer.BPGetQuantityOfItemWithoutCheckingInventory", ItemToCheckFor); }
	bool BPIsValidWaterSourceForPipe(APrimalStructureWaterPipe * ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe *>(this, "APrimalStructureItemContainer.BPIsValidWaterSourceForPipe", ForWaterPipe); }
	void BPNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem * theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem *, bool>(this, "APrimalStructureItemContainer.BPNotifyInventoryItemChange", bIsItemAdd, theItem, bEquipItem); }
	void BPOnContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.BPOnContainerActiveHealthDecrease"); }
	void BPPreGetMultiUseEntries(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.BPPreGetMultiUseEntries", ForPC); }
	void BPSetPlayerConstructor(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.BPSetPlayerConstructor", PC); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructureItemContainer.GetPrivateStaticClass", Package); }
	float GetReloadRateMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetReloadRateMultiplier"); }
	bool IsValidForDinoFeedingContainer(APrimalDinoCharacter * ForDino) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalStructureItemContainer.IsValidForDinoFeedingContainer", ForDino); }
	void NetSetContainerActive(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
	void NetUpdateBoxName(FString * NewName) { NativeCall<void, FString *>(this, "APrimalStructureItemContainer.NetUpdateBoxName", NewName); }
	void PowerGeneratorBuiltNearbyPoweredStructure(APrimalStructureItemContainer * PoweredStructure) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.PowerGeneratorBuiltNearbyPoweredStructure", PoweredStructure); }
	static void StaticRegisterNativesAPrimalStructureItemContainer() { NativeCall<void>(nullptr, "APrimalStructureItemContainer.StaticRegisterNativesAPrimalStructureItemContainer"); }
};

struct APrimalStructureTurret : APrimalStructureItemContainer
{
	TWeakObjectPtr<AActor>& TargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalStructureTurret.Target"); }
	TWeakObjectPtr<AActor>& LastTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalStructureTurret.LastTarget"); }
	TSubclassOf<UPrimalItem>& AmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureTurret.AmmoItemTemplate"); }
	float& FireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireInterval"); }
	long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastFireTime"); }
	float& MaxFireYawDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFireYawDelta"); }
	float& MaxFirePitchDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFirePitchDelta"); }
	FVector& TargetingLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.TargetingLocOffset"); }
	float& TargetingRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.TargetingRotationInterpSpeed"); }
	FieldArray<float, 3> TargetingRangesField() { return {this, "APrimalStructureTurret.TargetingRanges"}; }
	float& ShipTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.ShipTargetingRange"); }
	FVector& TargetingTraceOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.TargetingTraceOffset"); }
	TSubclassOf<UDamageType>& FireDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureTurret.FireDamageType"); }
	float& FireDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageAmount"); }
	float& FireDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageImpulse"); }
	FRotator& TurretAimRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurret.TurretAimRotOffset"); }
	FVector& AimTargetLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.AimTargetLocOffset"); }
	FVector& PlayerProneTargetOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.PlayerProneTargetOffset"); }
	float& AimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AimSpread"); }
	FName& SocketNameCheckForObstructionFromSeatedCharacterField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurret.SocketNameCheckForObstructionFromSeatedCharacter"); }
	FName& AimPivotSocketField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurret.AimPivotSocket"); }
	FName& MuzzleSocketField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurret.MuzzleSocket"); }
	char& RangeSettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.RangeSetting"); }
	char& AISettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.AISetting"); }
	char& WarningSettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.WarningSetting"); }
	char& bUseAlternateRotationFunctionField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.bUseAlternateRotationFunction"); }
	int& NumBulletsField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBullets"); }
	int& NumBulletsPerShotField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBulletsPerShot"); }
	float& WarningExpirationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.WarningExpirationTime"); }
	float& BatteryIntervalFromActivationBeforeFiringField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring"); }
	bool& bWarnedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurret.bWarned"); }
	UChildActorComponent * MyChildEmitterTargetingEffectField() { return *GetNativePointerField<UChildActorComponent **>(this, "APrimalStructureTurret.MyChildEmitterTargetingEffect"); }
	FRotator& DefaultTurretAimRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurret.DefaultTurretAimRotOffset"); }
	FVector& MuzzleLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.MuzzleLocOffset"); }
	long double& LastWarningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastWarningTime"); }
	long double& TimeLastTargetWasSetField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.TimeLastTargetWasSet"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bUseNoWarning() { return { this, "APrimalStructureTurret.bUseNoWarning" }; }
	BitFieldValue<bool, unsigned __int32> bUseNoAmmo() { return { this, "APrimalStructureTurret.bUseNoAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bHasOmniDirectionalFire() { return { this, "APrimalStructureTurret.bHasOmniDirectionalFire" }; }
	BitFieldValue<bool, unsigned __int32> bFireProjectiles() { return { this, "APrimalStructureTurret.bFireProjectiles" }; }
	BitFieldValue<bool, unsigned __int32> bClientFireProjectile() { return { this, "APrimalStructureTurret.bClientFireProjectile" }; }
	BitFieldValue<bool, unsigned __int32> bIsTargeting() { return { this, "APrimalStructureTurret.bIsTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bInWaterOnlyTargetWater() { return { this, "APrimalStructureTurret.bInWaterOnlyTargetWater" }; }
	BitFieldValue<bool, unsigned __int32> bTurretIgnoreProjectiles() { return { this, "APrimalStructureTurret.bTurretIgnoreProjectiles" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPTurretPreventsTargeting() { return { this, "APrimalStructureTurret.bUseBPTurretPreventsTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bAimIgnoreSockets() { return { this, "APrimalStructureTurret.bAimIgnoreSockets" }; }
	BitFieldValue<bool, unsigned __int32> bCanTargetShips() { return { this, "APrimalStructureTurret.bCanTargetShips" }; }
	BitFieldValue<bool, unsigned __int32> bCanTargetIfBlockedByStructure() { return { this, "APrimalStructureTurret.bCanTargetIfBlockedByStructure" }; }
	BitFieldValue<bool, unsigned __int32> bUseMuzzleLocationToTraceForValidTarget() { return { this, "APrimalStructureTurret.bUseMuzzleLocationToTraceForValidTarget" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysAttackShip() { return { this, "APrimalStructureTurret.bAlwaysAttackShip" }; }
	BitFieldValue<bool, unsigned __int32> bSkipTurretSuperTick() { return { this, "APrimalStructureTurret.bSkipTurretSuperTick" }; }
	BitFieldValue<bool, unsigned __int32> bShipTurretAllowTargetingCharactersWhenUnanchored() { return { this, "APrimalStructureTurret.bShipTurretAllowTargetingCharactersWhenUnanchored" }; }
	BitFieldValue<bool, unsigned __int32> bUseDifferentFireFunction() { return { this, "APrimalStructureTurret.bUseDifferentFireFunction" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructureTurret.GetPrivateStaticClass"); }
	AActor * BPNativeFindTarget() { return NativeCall<AActor *>(this, "APrimalStructureTurret.BPNativeFindTarget"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurret.BeginPlay"); }
	bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurret.CanFire"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureTurret.ClientMultiUse", ForPC, UseIndex); }
	void ClientsFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir, int NewAmmoCount) { NativeCall<void, FVector, FVector_NetQuantizeNormal, int>(this, "APrimalStructureTurret.ClientsFireProjectile_Implementation", Origin, ShootDir, NewAmmoCount); }
	void DealDamage(FHitResult * Impact, FVector * ShootDir, float DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse, AActor * DamageCauserOverride) { NativeCall<void, FHitResult *, FVector *, float, TSubclassOf<UDamageType>, float, AActor *>(this, "APrimalStructureTurret.DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse, DamageCauserOverride); }
	void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurret.DoFire", RandomSeed); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "APrimalStructureTurret.DoFireProjectile", Origin, ShootDir); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureTurret.DrawHUD", HUD); }
	AActor * FindTargetLoop(TArray<UPrimitiveComponent *> * PrimComps, TArray<UPrimitiveComponent *> * GrenadeComps, TArray<AActor *> * ActorsToIgnore, bool * bBestTargetIsInRotationRange, AActor * BestTarget) { return NativeCall<AActor *, TArray<UPrimitiveComponent *> *, TArray<UPrimitiveComponent *> *, TArray<AActor *> *, bool *, AActor *>(this, "APrimalStructureTurret.FindTargetLoop", PrimComps, GrenadeComps, ActorsToIgnore, bBestTargetIsInRotationRange, BestTarget); }
	AActor * FindTarget_Implementation() { return NativeCall<AActor *>(this, "APrimalStructureTurret.FindTarget_Implementation"); }
	void FinishWarning() { NativeCall<void>(this, "APrimalStructureTurret.FinishWarning"); }
	FVector * GetAimPivotLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetAimPivotLocation", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureTurret.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FName * GetMuzzleFlashSocketName(FName * result) { return NativeCall<FName *, FName *>(this, "APrimalStructureTurret.GetMuzzleFlashSocketName", result); }
	FVector * GetMuzzleLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetMuzzleLocation", result); }
	FRotator * GetMuzzleRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructureTurret.GetMuzzleRotation", result); }
	AActor * GetRandomStructureOnSameBoatAsActor(AActor * CurrentTarget) { return NativeCall<AActor *, AActor *>(this, "APrimalStructureTurret.GetRandomStructureOnSameBoatAsActor", CurrentTarget); }
	FVector * GetTargetAimAtLocation(FVector * result, bool bDontUseTargetLocation) { return NativeCall<FVector *, FVector *, bool>(this, "APrimalStructureTurret.GetTargetAimAtLocation", result, bDontUseTargetLocation); }
	FName * GetTargetAltAimSocket(FName * result, APrimalCharacter * ForTarget) { return NativeCall<FName *, FName *, APrimalCharacter *>(this, "APrimalStructureTurret.GetTargetAltAimSocket", result, ForTarget); }
	FVector * GetTargetFireAtLocation(FVector * result, APrimalCharacter * ForTarget) { return NativeCall<FVector *, FVector *, APrimalCharacter *>(this, "APrimalStructureTurret.GetTargetFireAtLocation", result, ForTarget); }
	bool HasAmmo() { return NativeCall<bool>(this, "APrimalStructureTurret.HasAmmo"); }
	bool IsValidToFire(bool bAllowNoTarget) { return NativeCall<bool, bool>(this, "APrimalStructureTurret.IsValidToFire", bAllowNoTarget); }
	bool NetExecCommand(FName CommandName, FNetExecParams * ExecParams) { return NativeCall<bool, FName, FNetExecParams *>(this, "APrimalStructureTurret.NetExecCommand", CommandName, ExecParams); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureTurret.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalStructureTurret.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureTurret.NotifyItemRemoved", anItem); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurret.PreInitializeComponents"); }
	void SetTarget(AActor * aTarget) { NativeCall<void, AActor *>(this, "APrimalStructureTurret.SetTarget", aTarget); }
	bool ShouldDealDamage(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "APrimalStructureTurret.ShouldDealDamage", TestActor); }
	void SpawnImpactEffects(FHitResult * Impact, FVector * ShootDir) { NativeCall<void, FHitResult *, FVector *>(this, "APrimalStructureTurret.SpawnImpactEffects", Impact, ShootDir); }
	void SpawnTrailEffect(FVector * EndPoint) { NativeCall<void, FVector *>(this, "APrimalStructureTurret.SpawnTrailEffect", EndPoint); }
	void StartWarning() { NativeCall<void>(this, "APrimalStructureTurret.StartWarning"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureTurret.Stasis"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurret.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureTurret.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureTurret.Unstasis"); }
	void UpdateNumBullets() { NativeCall<void>(this, "APrimalStructureTurret.UpdateNumBullets"); }
	void UpdatedTargeting() { NativeCall<void>(this, "APrimalStructureTurret.UpdatedTargeting"); }
	bool UseTurretFastTargeting() { return NativeCall<bool>(this, "APrimalStructureTurret.UseTurretFastTargeting"); }
	void WeaponTraceHits(TArray<FHitResult> * HitResults, FVector * StartTrace, FVector * EndTrace) { NativeCall<void, TArray<FHitResult> *, FVector *, FVector *>(this, "APrimalStructureTurret.WeaponTraceHits", HitResults, StartTrace, EndTrace); }
	FVector * GetAttackingFromLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetAttackingFromLocation", result); }
	bool BPTurretPreventsTargeting(APrimalCharacter * PotentialTarget) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalStructureTurret.BPTurretPreventsTargeting", PotentialTarget); }
	void ClientsFireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir, int NewAmmoCount) { NativeCall<void, FVector, FVector_NetQuantizeNormal, int>(this, "APrimalStructureTurret.ClientsFireProjectile", Origin, ShootDir, NewAmmoCount); }
	AActor * FindTarget() { return NativeCall<AActor *>(this, "APrimalStructureTurret.FindTarget"); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructureTurret.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesAPrimalStructureTurret() { NativeCall<void>(nullptr, "APrimalStructureTurret.StaticRegisterNativesAPrimalStructureTurret"); }
};



struct APrimalStructureClaimFlag : APrimalStructureItemContainer
{
	float& ClaimProgressField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.ClaimProgress"); }
	long double& LastLandDeClaimTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureClaimFlag.LastLandDeClaimTime"); }
	long double& LastTimeTeamInRangeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureClaimFlag.LastTimeTeamInRange"); }
	long double& LastTimeEnemyTeamInRangeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureClaimFlag.LastTimeEnemyTeamInRange"); }
	long double& LastEnemyDeClaimTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureClaimFlag.LastEnemyDeClaimTime"); }
	FString& TribeMessageStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureClaimFlag.TribeMessageString"); }
	float& TaxationRatePercentField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.TaxationRatePercent"); }
	float& MaxClaimTaxRateField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.MaxClaimTaxRate"); }
	int& TerritoryMessageAllowanceIntervalField() { return *GetNativePointerField<int*>(this, "APrimalStructureClaimFlag.TerritoryMessageAllowanceInterval"); }
	float& ExtraBonusClaimRateMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.ExtraBonusClaimRateMultiplier"); }
	float& AdminBonusClaimRateMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.AdminBonusClaimRateMultiplier"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureClaimFlag.LastSignNamingTime"); }
	APrimalStructureItemContainer * TaxationContainerField() { return *GetNativePointerField<APrimalStructureItemContainer **>(this, "APrimalStructureClaimFlag.TaxationContainer"); }
	float& TaxDepositIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.TaxDepositIntervalMin"); }
	float& TaxDepositIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.TaxDepositIntervalMax"); }
	float& LandClaimTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.LandClaimTime"); }
	float& LandDeClaimTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.LandDeClaimTime"); }
	float& LandUnclaimTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.LandUnclaimTime"); }
	float& LandClaimRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.LandClaimRadius"); }
	float& ResetDeClaimGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.ResetDeClaimGracePeriod"); }
	UTexture2D * ContestedIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalStructureClaimFlag.ContestedIcon"); }
	UTexture2D * ClaimingIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalStructureClaimFlag.ClaimingIcon"); }
	UTexture2D * ClaimedEnemyIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalStructureClaimFlag.ClaimedEnemyIcon"); }
	UTexture2D * ClaimedAllyIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalStructureClaimFlag.ClaimedAllyIcon"); }
	UTexture2D * UnclaimingIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalStructureClaimFlag.UnclaimingIcon"); }
	float& ClaimingBroadcastIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.ClaimingBroadcastInterval"); }
	float& TeamInRangeUnclaimGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.TeamInRangeUnclaimGracePeriod"); }
	float& EnemyTeamInRangeUnclaimGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.EnemyTeamInRangeUnclaimGracePeriod"); }
	float& TeamLandFlagMinimumDistanceIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.TeamLandFlagMinimumDistanceInterval"); }
	FVector& IconFloatingHudLocTextOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureClaimFlag.IconFloatingHudLocTextOffset"); }
	float& AbsoluteMaxSearchRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.AbsoluteMaxSearchRadius"); }
	float& BonusClaimRateMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.BonusClaimRateMultiplier"); }
	long double& LastClaimingBroadcastTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureClaimFlag.LastClaimingBroadcastTime"); }
	TWeakObjectPtr<AShooterPlayerController>& LastPlayerControllerInRangeField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalStructureClaimFlag.LastPlayerControllerInRange"); }
	TWeakObjectPtr<AShooterPlayerController>& OriginalPlacerPlayerControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalStructureClaimFlag.OriginalPlacerPlayerController"); }
	int& LastLandDeClaimFrameField() { return *GetNativePointerField<int*>(this, "APrimalStructureClaimFlag.LastLandDeClaimFrame"); }
	bool& bAddedToArrayField() { return *GetNativePointerField<bool*>(this, "APrimalStructureClaimFlag.bAddedToArray"); }
	TArray<UMaterialInterface *> ClaimedMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface *>*>(this, "APrimalStructureClaimFlag.ClaimedMaterials"); }
	float& ClaimRateTempBoost_MultField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.ClaimRateTempBoost_Mult"); }
	float& ClaimRateTempBoost_DurationField() { return *GetNativePointerField<float*>(this, "APrimalStructureClaimFlag.ClaimRateTempBoost_Duration"); }
	long double& LastClaimRateTempBoostStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureClaimFlag.LastClaimRateTempBoostStartTime"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bClaimed() { return { this, "APrimalStructureClaimFlag.bClaimed" }; }
	BitFieldValue<bool, unsigned __int32> bIsShipClaim() { return { this, "APrimalStructureClaimFlag.bIsShipClaim" }; }
	BitFieldValue<bool, unsigned __int32> bIsContested() { return { this, "APrimalStructureClaimFlag.bIsContested" }; }
	BitFieldValue<bool, unsigned __int32> bIsUnclaiming() { return { this, "APrimalStructureClaimFlag.bIsUnclaiming" }; }
	BitFieldValue<bool, unsigned __int32> bWantsToResume() { return { this, "APrimalStructureClaimFlag.bWantsToResume" }; }
	BitFieldValue<bool, unsigned __int32> bIsStealing() { return { this, "APrimalStructureClaimFlag.bIsStealing" }; }
	BitFieldValue<bool, unsigned __int32> bIsWaterClaim() { return { this, "APrimalStructureClaimFlag.bIsWaterClaim" }; }
	BitFieldValue<bool, unsigned __int32> bHasMyTeamInRange() { return { this, "APrimalStructureClaimFlag.bHasMyTeamInRange" }; }
	BitFieldValue<bool, unsigned __int32> bHasEnemyTeamInRange() { return { this, "APrimalStructureClaimFlag.bHasEnemyTeamInRange" }; }
	BitFieldValue<bool, unsigned __int32> bHasTaxationContainer() { return { this, "APrimalStructureClaimFlag.bHasTaxationContainer" }; }
	BitFieldValue<bool, unsigned __int32> bDepositTimerSet() { return { this, "APrimalStructureClaimFlag.bDepositTimerSet" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructureClaimFlag.GetPrivateStaticClass"); }
	static void ApplyClaimTax(UWorld * ForWorld, AActor * InstigatorActor, int InstigatorTeam, UPrimalItem * FromItem, FVector * AtLocation) { NativeCall<void, UWorld *, AActor *, int, UPrimalItem *, FVector *>(nullptr, "APrimalStructureClaimFlag.ApplyClaimTax", ForWorld, InstigatorActor, InstigatorTeam, FromItem, AtLocation); }
	static void ApplyClaimTaxArray(UWorld * ForWorld, AActor * InstigatorActor, int InstigatorTeam, FVector * AtLocation, TArray<UPrimalItem *> * ItemsArray) { NativeCall<void, UWorld *, AActor *, int, FVector *, TArray<UPrimalItem *> *>(nullptr, "APrimalStructureClaimFlag.ApplyClaimTaxArray", ForWorld, InstigatorActor, InstigatorTeam, AtLocation, ItemsArray); }
	static int ApplyClaimTaxClass(UWorld * ForWorld, AActor * InstigatorActor, int InstigatorTeam, TSubclassOf<UPrimalItem> ItemClass, int ItemQuantity, FVector * AtLocation) { return NativeCall<int, UWorld *, AActor *, int, TSubclassOf<UPrimalItem>, int, FVector *>(nullptr, "APrimalStructureClaimFlag.ApplyClaimTaxClass", ForWorld, InstigatorActor, InstigatorTeam, ItemClass, ItemQuantity, AtLocation); }
	int BPIsAllowedToBuildEx_Implementation(FPlacementData * OutPlacementData, int CurrentAllowedReason, APlayerController * PC, bool bFinalPlacement) { return NativeCall<int, FPlacementData *, int, APlayerController *, bool>(this, "APrimalStructureClaimFlag.BPIsAllowedToBuildEx_Implementation", OutPlacementData, CurrentAllowedReason, PC, bFinalPlacement); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureClaimFlag.BeginPlay"); }
	void BoostClaimSpeedForTime(float boostMult, float boostDuration) { NativeCall<void, float, float>(this, "APrimalStructureClaimFlag.BoostClaimSpeedForTime", boostMult, boostDuration); }
	//void BroadcastTribeFlagNotifications(TEnumAsByte<enum EFlagNotify::Type> NotifyType, AActor * ClaimActor, int TribeID_Override) { NativeCall<void, TEnumAsByte<enum EFlagNotify::Type>, AActor *, int>(this, "APrimalStructureClaimFlag.BroadcastTribeFlagNotifications", NotifyType, ClaimActor, TribeID_Override); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructureClaimFlag.ChangeActorTeam", NewTeam); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureClaimFlag.ClientMultiUse", ForPC, UseIndex); }
	void Demolish(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructureClaimFlag.Demolish", ForPC); }
	void DepositTaxItems() { NativeCall<void>(this, "APrimalStructureClaimFlag.DepositTaxItems"); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureClaimFlag.Destroyed"); }
	void DrawFloatingHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureClaimFlag.DrawFloatingHUD", HUD); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureClaimFlag.DrawHUD", HUD); }
	void DrawPlacementHUD_Implementation(AHUD * HUD) { NativeCall<void, AHUD *>(this, "APrimalStructureClaimFlag.DrawPlacementHUD_Implementation", HUD); }
	bool FinalStructurePlacement(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bIsFlipped, UClass ** ClassOverride) { return NativeCall<bool, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool, UClass **>(this, "APrimalStructureClaimFlag.FinalStructurePlacement", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bIsFlipped, ClassOverride); }
	void FinishClaim() { NativeCall<void>(this, "APrimalStructureClaimFlag.FinishClaim"); }
	FString * GetEditTextString_Implementation(FString * result, APlayerController * ForPC, UObject * AssociatedObject1, int ExtraID1, int ExtraID2) { return NativeCall<FString *, FString *, APlayerController *, UObject *, int, int>(this, "APrimalStructureClaimFlag.GetEditTextString_Implementation", result, ForPC, AssociatedObject1, ExtraID1, ExtraID2); }
	static APrimalStructureClaimFlag * GetLandClaim(UWorld * ForWorld, FVector * AtLocation, float SearchRadius) { return NativeCall<APrimalStructureClaimFlag *, UWorld *, FVector *, float>(nullptr, "APrimalStructureClaimFlag.GetLandClaim", ForWorld, AtLocation, SearchRadius); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureClaimFlag.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetOtherFlagsInRadius(TArray<APrimalStructureClaimFlag *> * OtherFlags, int MyTargetingTeam, bool bLookForEnemies, FVector * AtLocation, float MaxSearchRadius, float MinSearchRadius) { NativeCall<void, TArray<APrimalStructureClaimFlag *> *, int, bool, FVector *, float, float>(this, "APrimalStructureClaimFlag.GetOtherFlagsInRadius", OtherFlags, MyTargetingTeam, bLookForEnemies, AtLocation, MaxSearchRadius, MinSearchRadius); }
	float GetTotalClaimTime() { return NativeCall<float>(this, "APrimalStructureClaimFlag.GetTotalClaimTime"); }
	float GetTotalUnclaimTime() { return NativeCall<float>(this, "APrimalStructureClaimFlag.GetTotalUnclaimTime"); }
	void InitClaimTimer() { NativeCall<void>(this, "APrimalStructureClaimFlag.InitClaimTimer"); }
	void InitDynamicMaterials(UMeshComponent * Component) { NativeCall<void, UMeshComponent *>(this, "APrimalStructureClaimFlag.InitDynamicMaterials", Component); }
	static APrimalStructureClaimFlag * IsInLandClaimedFlagRadius(UWorld * ForWorld, FVector * AtLocation, int TargetingTeamFilter, float SearchRadius) { return NativeCall<APrimalStructureClaimFlag *, UWorld *, FVector *, int, float>(nullptr, "APrimalStructureClaimFlag.IsInLandClaimedFlagRadius", ForWorld, AtLocation, TargetingTeamFilter, SearchRadius); }
	void Net_UpdateTempClaimRateBoost(float NewRateMult) { NativeCall<void, float>(this, "APrimalStructureClaimFlag.Net_UpdateTempClaimRateBoost", NewRateMult); }
	void OnFlagDestroyed(bool bNotifyOwners, bool bNotifyNearbyEnemies) { NativeCall<void, bool, bool>(this, "APrimalStructureClaimFlag.OnFlagDestroyed", bNotifyOwners, bNotifyNearbyEnemies); }
	void OnRep_Claimed() { NativeCall<void>(this, "APrimalStructureClaimFlag.OnRep_Claimed"); }
	void OnStructurePlacedNotify(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { NativeCall<void, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructureClaimFlag.OnStructurePlacedNotify", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	void PlacedStructureLocation(APlayerController * ByPC) { NativeCall<void, APlayerController *>(this, "APrimalStructureClaimFlag.PlacedStructureLocation", ByPC); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool __formal, int ExtraID1, int ExtraID2) { NativeCall<void, AShooterPlayerController *, FString *, bool, int, int>(this, "APrimalStructureClaimFlag.ProcessEditText", ForPC, TextToUse, __formal, ExtraID1, ExtraID2); }
	void ResetDeClaim() { NativeCall<void>(this, "APrimalStructureClaimFlag.ResetDeClaim"); }
	bool SkipDuringPartialWorldSave() { return NativeCall<bool>(this, "APrimalStructureClaimFlag.SkipDuringPartialWorldSave"); }
	void SyncClaimValuesFromTeam() { NativeCall<void>(this, "APrimalStructureClaimFlag.SyncClaimValuesFromTeam"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureClaimFlag.Unstasis"); }
	void UpdateBonusClaimRateMultiplier(float NewBonusMultiplier) { NativeCall<void, float>(this, "APrimalStructureClaimFlag.UpdateBonusClaimRateMultiplier", NewBonusMultiplier); }
	void UpdateClaiming() { NativeCall<void>(this, "APrimalStructureClaimFlag.UpdateClaiming"); }
	void UpdateLandDeClaiming() { NativeCall<void>(this, "APrimalStructureClaimFlag.UpdateLandDeClaiming"); }
	void UpdateTeamInRange() { NativeCall<void>(this, "APrimalStructureClaimFlag.UpdateTeamInRange"); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructureClaimFlag.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesAPrimalStructureClaimFlag() { NativeCall<void>(nullptr, "APrimalStructureClaimFlag.StaticRegisterNativesAPrimalStructureClaimFlag"); }
};