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
	long double& LastTookDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalTargetableActor.LastTookDamageTime"); }

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
	FieldArray<char, 6> AllowStructureColorSetsField() { return { this, "APrimalStructure.AllowStructureColorSets" }; }
	FieldArray<char, 6> AlternateStructureColorSetsField() { return { this, "APrimalStructure.AlternateStructureColorSets" }; }
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
	FieldArray<__int16, 6> StructureColorsField() { return { this, "APrimalStructure.StructureColors" }; }
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
	TEnumAsByte<enum EShipSize::Type>& StructureShipSizeClass_MaxField() { return *GetNativePointerField<TEnumAsByte<enum EShipSize::Type>*>(this, "APrimalStructure.StructureShipSizeClass_Max"); }
	TEnumAsByte<enum EShipSize::Type>& StructureShipSizeClass_MinField() { return *GetNativePointerField<TEnumAsByte<enum EShipSize::Type>*>(this, "APrimalStructure.StructureShipSizeClass_Min"); }
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
	BitFieldValue<bool, unsigned __int32> bPreventGivingDemolishResources() { return { this, "APrimalStructure.bPreventGivingDemolishResources" }; }
	BitFieldValue<bool, unsigned __int32> bServerIsTestingForPlacement() { return { this, "APrimalStructure.bServerIsTestingForPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bServerDestroyedFailedPlacement() { return { this, "APrimalStructure.bServerDestroyedFailedPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bPlacedOnShip() { return { this, "APrimalStructure.bPlacedOnShip" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDestructionFoundationCheck() { return { this, "APrimalStructure.bIgnoreDestructionFoundationCheck" }; }

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
	bool CanAutoDemolish(bool bCanImmediatelyAutoDemolish, bool bForceCheckClaimFlagOverlap) { return NativeCall<bool, bool, bool>(this, "APrimalStructure.CanAutoDemolish", bCanImmediatelyAutoDemolish, bForceCheckClaimFlagOverlap); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalStructure.CanBePainted"); }
	bool CanBeRepaired(AShooterPlayerController * ByPC, bool bCurrentlyRepairing) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "APrimalStructure.CanBeRepaired", ByPC, bCurrentlyRepairing); }
	int CanPlaceCriticalShipStructure(APrimalRaft * OnShip) { return NativeCall<int, APrimalRaft *>(this, "APrimalStructure.CanPlaceCriticalShipStructure", OnShip); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructure.ChangeActorTeam", NewTeam); }
	bool CheckNotEncroaching(FVector PlacementLocation, FRotator PlacementRotation, AActor * DinoCharacter, APrimalStructure * SnappedToParentStructure, APrimalStructure * ReplacesStructure, bool bUseAlternatePlacementTraceScale) { return NativeCall<bool, FVector, FRotator, AActor *, APrimalStructure *, APrimalStructure *, bool>(this, "APrimalStructure.CheckNotEncroaching", PlacementLocation, PlacementRotation, DinoCharacter, SnappedToParentStructure, ReplacesStructure, bUseAlternatePlacementTraceScale); }
	void CheckUntilAttachedToValidShip() { NativeCall<void>(this, "APrimalStructure.CheckUntilAttachedToValidShip"); }
	bool ClampBuildLocation(FVector FromLocation, AActor ** OutHitActor, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, APlayerController * PC) { return NativeCall<bool, FVector, AActor **, FPlacementData *, bool, APlayerController *>(this, "APrimalStructure.ClampBuildLocation", FromLocation, OutHitActor, OutPlacementData, bDontAdjustForMaxRange, PC); }
	static void CleanUpTree(TArray<APrimalStructure *> * StartingStructures, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, TArray<APrimalStructure *> *, AController *, AActor *>(nullptr, "APrimalStructure.CleanUpTree", StartingStructures, InstigatorController, DamageCauser); }
	static void CleanUpTree(APrimalStructure * StartingStructure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>(nullptr, "APrimalStructure.CleanUpTree", StartingStructure, InstigatorController, DamageCauser); }
	void ClearCustomColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors_Implementation"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructure.ClientMultiUse", ForPC, UseIndex); }
	void ClientUpdateLinkedStructures_Implementation(TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, TArray<unsigned int> *>(this, "APrimalStructure.ClientUpdateLinkedStructures_Implementation", NewLinkedStructures); }
	void ClientUpdatedStructureColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClientUpdatedStructureColors_Implementation"); }
	void CreateDynamicMaterials() { NativeCall<void>(this, "APrimalStructure.CreateDynamicMaterials"); }
	static void CullAgainstFoundations(TArray<APrimalStructure *> * StartingStructures, TArray<APrimalStructure *> * Foundations) { NativeCall<void, TArray<APrimalStructure *> *, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructures, Foundations); }
	static bool CullAgainstFoundations(APrimalStructure ** StartingStructure, TArray<APrimalStructure *> * Foundations) { return NativeCall<bool, APrimalStructure **, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructure, Foundations); }
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
	FSpawnPointInfo * GetSpawnPointInfo(FSpawnPointInfo * result) { return NativeCall<FSpawnPointInfo *, FSpawnPointInfo *>(this, "APrimalStructure.GetSpawnPointInfo", result); }
	float GetSpoilingTimeMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "APrimalStructure.GetSpoilingTimeMultiplier", anItem); }
	FLinearColor * GetStructureColor(FLinearColor * result, int ColorRegionIndex) { return NativeCall<FLinearColor *, FLinearColor *, int>(this, "APrimalStructure.GetStructureColor", result, ColorRegionIndex); }
	FLinearColor * GetStructureColorForID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>(this, "APrimalStructure.GetStructureColorForID", result, SetNum, ID); }
	int GetStructureColorValue(int ColorRegionIndex) { return NativeCall<int, int>(this, "APrimalStructure.GetStructureColorValue", ColorRegionIndex); }
	TArray<short> * GetStructureColorsArray(TArray<short> * result) { return NativeCall<TArray<short> *, TArray<short> *>(this, "APrimalStructure.GetStructureColorsArray", result); }
	float GetStructureDamageMultiplier() { return NativeCall<float>(this, "APrimalStructure.GetStructureDamageMultiplier"); }
	float GetStructureDemolishTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureDemolishTime"); }
	float GetStructureRepairCooldownTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureRepairCooldownTime"); }
	TEnumAsByte<enum EShipSize::Type> * GetStructureShipMaxSizeClass(TEnumAsByte<enum EShipSize::Type> * result) { return NativeCall<TEnumAsByte<enum EShipSize::Type> *, TEnumAsByte<enum EShipSize::Type> *>(this, "APrimalStructure.GetStructureShipMaxSizeClass", result); }
	TEnumAsByte<enum EShipSize::Type> * GetStructureShipMinSizeClass(TEnumAsByte<enum EShipSize::Type> * result) { return NativeCall<TEnumAsByte<enum EShipSize::Type> *, TEnumAsByte<enum EShipSize::Type> *>(this, "APrimalStructure.GetStructureShipMinSizeClass", result); }
	float GetStructureWeight() { return NativeCall<float>(this, "APrimalStructure.GetStructureWeight"); }
	static void GetStructuresInRange(UWorld * theWorld, FVector AtLocation, float WithinRange, TSubclassOf<APrimalStructure> StructureClass, TArray<APrimalStructure *> * StructuresOut, bool bUseInternalOctree, APrimalStructure * IgnoreStructure) { NativeCall<void, UWorld *, FVector, float, TSubclassOf<APrimalStructure>, TArray<APrimalStructure *> *, bool, APrimalStructure *>(nullptr, "APrimalStructure.GetStructuresInRange", theWorld, AtLocation, WithinRange, StructureClass, StructuresOut, bUseInternalOctree, IgnoreStructure); }
	float GetTargetingDesirability(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>(this, "APrimalStructure.GetTargetingDesirability", Attacker); }
	FString * GetAimedTutorialHintString_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetAimedTutorialHintString_Implementation", result); }
	UObject * GetUObjectInterfaceDataListEntryInterface() { return NativeCall<UObject *>(this, "APrimalStructure.GetUObjectInterfaceDataListEntryInterface"); }
	bool IncludeTransformInHeaderData() { return NativeCall<bool>(this, "APrimalStructure.IncludeTransformInHeaderData"); }
	void InitDynamicMaterials(UMeshComponent * Component) { NativeCall<void, UMeshComponent *>(this, "APrimalStructure.InitDynamicMaterials", Component); }
	bool Internal_IsInSnapChain(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.Internal_IsInSnapChain", theStructure); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement, TArray<FLocRot> * AlternateSnapTransforms, FVector * SnapCheckStartLoc) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool, TArray<FLocRot> *, FVector *>(this, "APrimalStructure.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, AlternateSnapTransforms, SnapCheckStartLoc); }
	bool IsAttachedToShipInDryDock() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToShipInDryDock"); }
	bool IsAttachedToShipInWetDock() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToShipInWetDock"); }
	bool IsAttachedToSunkenShip() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToSunkenShip"); }
	bool IsCheckingForAttachedToValidShip() { return NativeCall<bool>(this, "APrimalStructure.IsCheckingForAttachedToValidShip"); }
	bool IsFullValidWorldStructure() { return NativeCall<bool>(this, "APrimalStructure.IsFullValidWorldStructure"); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, FVector *>(this, "APrimalStructure.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	bool IsOnlyLinkedToFastDecayStructures() { return NativeCall<bool>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructures"); }
	bool IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure *, DefaultKeyFuncs<APrimalStructure *, 0>, FDefaultSetAllocator> * TestedStructures) { return NativeCall<bool, TSet<APrimalStructure *, DefaultKeyFuncs<APrimalStructure *, 0>, FDefaultSetAllocator> *>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal", TestedStructures); }
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
	bool& bInLandClaimedFlagRangeField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBed.bInLandClaimedFlagRange"); }
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
	FSpawnPointInfo * GetSpawnPointInfo(FSpawnPointInfo * result) { return NativeCall<FSpawnPointInfo *, FSpawnPointInfo *>(this, "APrimalStructureBed.GetSpawnPointInfo", result); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement, TArray<FLocRot> * AlternateSnapTransforms, FVector * SnapCheckStartLoc) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool, TArray<FLocRot> *, FVector *>(this, "APrimalStructureBed.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, AlternateSnapTransforms, SnapCheckStartLoc); }
	void OnBedUsed(AShooterPlayerController * PC, AShooterCharacter * ForPawn, unsigned int OriginServerId, FVector2D * FromRelativeLocInOriginServer) { NativeCall<void, AShooterPlayerController *, AShooterCharacter *, unsigned int, FVector2D *>(this, "APrimalStructureBed.OnBedUsed", PC, ForPawn, OriginServerId, FromRelativeLocInOriginServer); }
	void OnDeserializedByGame(EOnDesrializationType::Type DeserializationType) { NativeCall<void, EOnDesrializationType::Type>(this, "APrimalStructureBed.OnDeserializedByGame", DeserializationType); }
	void OnStructurePlacedNotify(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { NativeCall<void, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructureBed.OnStructurePlacedNotify", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureBed.PlacedStructure", PC); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureBed.PostInitializeComponents"); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool __formal, int ExtraID1, int ExtraID2) { NativeCall<void, AShooterPlayerController *, FString *, bool, int, int>(this, "APrimalStructureBed.ProcessEditText", ForPC, TextToUse, __formal, ExtraID1, ExtraID2); }
	void SaddleDinoDied() { NativeCall<void>(this, "APrimalStructureBed.SaddleDinoDied"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureBed.TryMultiUse", ForPC, UseIndex); }
	void UpdateInLandClaimedFlagRange(APrimalStructureClaimFlag * ToIgnore) { NativeCall<void, APrimalStructureClaimFlag *>(this, "APrimalStructureBed.UpdateInLandClaimedFlagRange", ToIgnore); }
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
	BitFieldValue<bool, unsigned __int32> bIsDoorTickActive() { return { this, "APrimalStructureDoor.bIsDoorTickActive" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructureDoor.GetPrivateStaticClass"); }
	bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent * HitComponent, AActor * EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent *, AActor *>(this, "APrimalStructureDoor.AllowIgnoreCharacterEncroachment_Implementation", HitComponent, EncroachingCharacter); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureDoor.AllowPickupForItem", ForPC); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.AllowStructureAccess", ForPC); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BPSetDoorState(int DoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPSetDoorState", DoorState); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureDoor.BeginPlay"); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.CanOpen", ForPC); }
	void CheckLoadingDoorTick() { NativeCall<void>(this, "APrimalStructureDoor.CheckLoadingDoorTick"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureDoor.ClientMultiUse", ForPC, UseIndex); }
	void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState", DoorState, DelayTime); }
	void DelayedGotoDoorStateTimer() { NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer"); }
	void DoorTick() { NativeCall<void>(this, "APrimalStructureDoor.DoorTick"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureDoor.DrawHUD", HUD); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureDoor.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState", DoorState); }
	void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState_Implementation", DoorState); }
	void OnRep_DoorOpenState(char PrevDoorOpenState) { NativeCall<void, char>(this, "APrimalStructureDoor.OnRep_DoorOpenState", PrevDoorOpenState); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents"); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructureDoor.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void SetDoorTickActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureDoor.SetDoorTickActive", bNewActive); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureDoor.SetStaticMobility"); }
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
	BitFieldValue<bool, unsigned __int32> bForceNoStructureLocking() { return { this, "APrimalStructureItemContainer.bForceNoStructureLocking" }; }

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
	FSpawnPointInfo * GetSpawnPointInfo(FSpawnPointInfo * result) { return NativeCall<FSpawnPointInfo *, FSpawnPointInfo *>(this, "APrimalStructureItemContainer.GetSpawnPointInfo", result); }
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
	FieldArray<float, 3> TargetingRangesField() { return { this, "APrimalStructureTurret.TargetingRanges" }; }
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
	FVector * GetAttackingFromLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetAttackingFromLocation", result); }
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
	bool SaddleDinoObstructed(FVector * StartTrace) { return NativeCall<bool, FVector *>(this, "APrimalStructureTurret.SaddleDinoObstructed", StartTrace); }
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
	bool BPTurretPreventsTargeting(APrimalCharacter * PotentialTarget) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalStructureTurret.BPTurretPreventsTargeting", PotentialTarget); }
	void ClientsFireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir, int NewAmmoCount) { NativeCall<void, FVector, FVector_NetQuantizeNormal, int>(this, "APrimalStructureTurret.ClientsFireProjectile", Origin, ShootDir, NewAmmoCount); }
	AActor * FindTarget() { return NativeCall<AActor *>(this, "APrimalStructureTurret.FindTarget"); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructureTurret.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesAPrimalStructureTurret() { NativeCall<void>(nullptr, "APrimalStructureTurret.StaticRegisterNativesAPrimalStructureTurret"); }
};

struct APrimalRaft : APrimalDinoCharacter
{
	UTexture2D * IconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalRaft.Icon"); }
	UTexture2D * OrderFreeFireIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalRaft.OrderFreeFireIcon"); }
	UTexture2D * OrderStandDownIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalRaft.OrderStandDownIcon"); }
	UTexture2D * OrderAttackMyTargetIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalRaft.OrderAttackMyTargetIcon"); }
	UTexture2D * OrderManualFireIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalRaft.OrderManualFireIcon"); }
	UTexture2D * OrderRedAlertIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalRaft.OrderRedAlertIcon"); }
	UTexture2D * OrderUnRedAlertIconField() { return *GetNativePointerField<UTexture2D **>(this, "APrimalRaft.OrderUnRedAlertIcon"); }
	TSubobjectPtr<UAudioComponent>& MovingSoundComponentField() { return *GetNativePointerField<TSubobjectPtr<UAudioComponent>*>(this, "APrimalRaft.MovingSoundComponent"); }
	USoundBase * MovingSoundCueField() { return *GetNativePointerField<USoundBase **>(this, "APrimalRaft.MovingSoundCue"); }
	float& OverrideSaddleStructureMaxFoundationSupport2DBuildDistanceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.OverrideSaddleStructureMaxFoundationSupport2DBuildDistance"); }
	float& WetDockOceanZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalRaft.WetDockOceanZOffset"); }
	FVector& ClientRaftInterpLocField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.ClientRaftInterpLoc"); }
	FRotator& ClientRaftInterpRotField() { return *GetNativePointerField<FRotator*>(this, "APrimalRaft.ClientRaftInterpRot"); }
	TEnumAsByte<enum EShipSize::Type>& ShipSizeClassField() { return *GetNativePointerField<TEnumAsByte<enum EShipSize::Type>*>(this, "APrimalRaft.ShipSizeClass"); }
	TWeakObjectPtr<AShooterCharacter>& DriverField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalRaft.Driver"); }
	FVector& VelocityFromPrevServerField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.VelocityFromPrevServer"); }
	TWeakObjectPtr<AShooterPlayerController>& LocalCaptainControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalRaft.LocalCaptainController"); }
	APrimalStructureSeating_DriverSeat * AttachedDriverSeatField() { return *GetNativePointerField<APrimalStructureSeating_DriverSeat **>(this, "APrimalRaft.AttachedDriverSeat"); }
	TArray<APrimalStructureSeating_DriverSeat *> AttachedCaptiansOrderSeatsField() { return *GetNativePointerField<TArray<APrimalStructureSeating_DriverSeat *>*>(this, "APrimalRaft.AttachedCaptiansOrderSeats"); }
	TArray<APrimalStructure *> AttachedSailsField() { return *GetNativePointerField<TArray<APrimalStructure *>*>(this, "APrimalRaft.AttachedSails"); }
	TArray<APrimalStructure *> AttachedMiscCriticalStructuresField() { return *GetNativePointerField<TArray<APrimalStructure *>*>(this, "APrimalRaft.AttachedMiscCriticalStructures"); }
	float& SailUnits_MaxField() { return *GetNativePointerField<float*>(this, "APrimalRaft.SailUnits_Max"); }
	float& MaxWeightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MaxWeightMultiplier"); }
	int& CollisionImpactWeightClassField() { return *GetNativePointerField<int*>(this, "APrimalRaft.CollisionImpactWeightClass"); }
	float& SailingVelocity_MaxAllowedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.SailingVelocity_MaxAllowed"); }
	float& ShipBowOffsetField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipBowOffset"); }
	float& ThrottleCheckIntervalField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ThrottleCheckInterval"); }
	long double& LastThrottleCheckStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastThrottleCheckStartTime"); }
	float& BaseMovementWeightField() { return *GetNativePointerField<float*>(this, "APrimalRaft.BaseMovementWeight"); }
	float& Sails_MaxThrottleForceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Sails_MaxThrottleForce"); }
	float& Sails_ThrottleForceWindMult_MinField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Sails_ThrottleForceWindMult_Min"); }
	float& Sails_ThrottleForceWindMult_MaxField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Sails_ThrottleForceWindMult_Max"); }
	float& Sails_MaxMovementWeightField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Sails_MaxMovementWeight"); }
	float& Sails_AdditionalMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Sails_AdditionalMaxVelocity"); }
	FVector& Sails_ThrottleForceLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.Sails_ThrottleForceLocation"); }
	FVector& ThrottleForceLocation_OffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.ThrottleForceLocation_Offset"); }
	float& Sails_SteeringForce_AtVelocityMaxField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Sails_SteeringForce_AtVelocityMax"); }
	float& MaxSailRotationField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MaxSailRotation"); }
	float& RotateSailsSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RotateSailsSpeedMultiplier"); }
	float& CurrentSailRotationField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CurrentSailRotation"); }
	float& ReplicatedSailRotationField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ReplicatedSailRotation"); }
	float& Sails_AvgSailRotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Sails_AvgSailRotationSpeed"); }
	float& CaptainSkillSailRotationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CaptainSkillSailRotationMultiplier"); }
	float& CaptainSkillSailOpenMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CaptainSkillSailOpenMultiplier"); }
	float& RudderSteeringRateField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RudderSteeringRate"); }
	float& RudderAutoBackAngleField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RudderAutoBackAngle"); }
	float& RudderSteerForceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RudderSteerForce"); }
	float& FixedThrottleRateField() { return *GetNativePointerField<float*>(this, "APrimalRaft.FixedThrottleRate"); }
	float& SteeringForce_MaxAllowedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.SteeringForce_MaxAllowed"); }
	float& SteeringForce_MinAllowedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.SteeringForce_MinAllowed"); }
	float& RudderAngleThresholdField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RudderAngleThreshold"); }
	FVector& RudderCenterField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.RudderCenter"); }
	float& MinMovingSoundSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MinMovingSoundSpeed"); }
	float& DefaultLinearDampingField() { return *GetNativePointerField<float*>(this, "APrimalRaft.DefaultLinearDamping"); }
	float& DefaultAngularDampingField() { return *GetNativePointerField<float*>(this, "APrimalRaft.DefaultAngularDamping"); }
	float& RaftCharacterBasingAbsoluteMaxDirZField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RaftCharacterBasingAbsoluteMaxDirZ"); }
	float& CurrentAngularDampingField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CurrentAngularDamping"); }
	float& CurrentLinearDampingField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CurrentLinearDamping"); }
	int& RowingSeatCount_MaxField() { return *GetNativePointerField<int*>(this, "APrimalRaft.RowingSeatCount_Max"); }
	TArray<APrimalStructure *> AttachedRowingSeatsField() { return *GetNativePointerField<TArray<APrimalStructure *>*>(this, "APrimalRaft.AttachedRowingSeats"); }
	float& RowingSeatImpulseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RowingSeatImpulseMultiplier"); }
	float& RowingImpulse_MaxField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RowingImpulse_Max"); }
	float& RowingSeats_RowingIntervalField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RowingSeats_RowingInterval"); }
	float& RowingSeats_RowingInputField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RowingSeats_RowingInput"); }
	long double& LastRowTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastRowTime"); }
	float& ShipMaximumAdditionalBedsStatusValueField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipMaximumAdditionalBedsStatusValue"); }
	float& ShipAdditionalBedsCrewPaymentIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipAdditionalBedsCrewPaymentIntervalMin"); }
	float& ShipAdditionalBedsCrewPaymentIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipAdditionalBedsCrewPaymentIntervalMax"); }
	TEnumAsByte<enum EShipType::Type>& ShipTypeField() { return *GetNativePointerField<TEnumAsByte<enum EShipType::Type>*>(this, "APrimalRaft.ShipType"); }
	long double& NetworkCreationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.NetworkCreationTime"); }
	APrimalStructureShipHull * MyShipHullField() { return *GetNativePointerField<APrimalStructureShipHull **>(this, "APrimalRaft.MyShipHull"); }
	APrimalStructure * MyShipDockField() { return *GetNativePointerField<APrimalStructure **>(this, "APrimalRaft.MyShipDock"); }
	APrimalBuff * MySunkenShipBuffField() { return *GetNativePointerField<APrimalBuff **>(this, "APrimalRaft.MySunkenShipBuff"); }
	TSubclassOf<APrimalStructureShipHull>& ShipHullClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureShipHull>*>(this, "APrimalRaft.ShipHullClass"); }
	int& NumberOfBedsField() { return *GetNativePointerField<int*>(this, "APrimalRaft.NumberOfBeds"); }
	int& NumberOfCrewField() { return *GetNativePointerField<int*>(this, "APrimalRaft.NumberOfCrew"); }
	int& AdditionalNumberOfBedsField() { return *GetNativePointerField<int*>(this, "APrimalRaft.AdditionalNumberOfBeds"); }
	int& AdditionalNumberOfCrewField() { return *GetNativePointerField<int*>(this, "APrimalRaft.AdditionalNumberOfCrew"); }
	char& CurrentBedCountField() { return *GetNativePointerField<char*>(this, "APrimalRaft.CurrentBedCount"); }
	long double& DiedAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.DiedAtTime"); }
	float& TimeSinceLastFadeOutField() { return *GetNativePointerField<float*>(this, "APrimalRaft.TimeSinceLastFadeOut"); }
	bool& bUnstasisNoWaterField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bUnstasisNoWater"); }
	int& NoWaterTriesField() { return *GetNativePointerField<int*>(this, "APrimalRaft.NoWaterTries"); }
	int& LastFrameDisabledForcedVelocityDirectionField() { return *GetNativePointerField<int*>(this, "APrimalRaft.LastFrameDisabledForcedVelocityDirection"); }
	long double& LastTakeDamageFromEnemyTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastTakeDamageFromEnemyTime"); }
	long double& LastCauseDamageToEnemyRaftTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastCauseDamageToEnemyRaftTime"); }
	float& ThrottleInputField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ThrottleInput"); }
	float& ThrottleRatio_TargetField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ThrottleRatio_Target"); }
	float& ReplicatedThrottleRatio_TargetField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ReplicatedThrottleRatio_Target"); }
	float& SteeringInputField() { return *GetNativePointerField<float*>(this, "APrimalRaft.SteeringInput"); }
	float& RudderAngleField() { return *GetNativePointerField<float*>(this, "APrimalRaft.RudderAngle"); }
	float& SailTurningInputField() { return *GetNativePointerField<float*>(this, "APrimalRaft.SailTurningInput"); }
	USceneComponent * RudderSteeringComponentField() { return *GetNativePointerField<USceneComponent **>(this, "APrimalRaft.RudderSteeringComponent"); }
	TSubclassOf<UDamageType>& CollisionImpactDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalRaft.CollisionImpactDamageType"); }
	float& CollisionImpactAbsoluteMinImpulseField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactAbsoluteMinImpulse"); }
	float& CollisionImpactMinImpulseField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactMinImpulse"); }
	float& CollisionImpactMaxImpulseField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactMaxImpulse"); }
	float& CollisionImpactMinDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactMinDamageAmount"); }
	float& CollisionImpactMaxDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactMaxDamageAmount"); }
	float& CollisionImpactMinDamageRadiusField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactMinDamageRadius"); }
	float& CollisionImpactMaxDamageRadiusField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactMaxDamageRadius"); }
	float& CollisionImpactMinIntervalField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollisionImpactMinInterval"); }
	long double& LastCollisionImpactTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastCollisionImpactTime"); }
	bool& bIsInDrydockField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bIsInDrydock"); }
	bool& bIsInWetDockField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bIsInWetDock"); }
	bool& bBeganPlayField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bBeganPlay"); }
	bool& bUsingLongRangeStasisField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bUsingLongRangeStasis"); }
	USphereComponent * LongRangeStasisComponentField() { return *GetNativePointerField<USphereComponent **>(this, "APrimalRaft.LongRangeStasisComponent"); }
	TSubclassOf<UPrimalItem>& OpenWaterSpoilingItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalRaft.OpenWaterSpoilingItemClass"); }
	float& LastDistanceToShoreField() { return *GetNativePointerField<float*>(this, "APrimalRaft.LastDistanceToShore"); }
	float& LastOpenWaterSpoilingMultField() { return *GetNativePointerField<float*>(this, "APrimalRaft.LastOpenWaterSpoilingMult"); }
	FVector& PreviousLinearVelocityField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.PreviousLinearVelocity"); }
	FVector& PreviousAngularVelocityField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.PreviousAngularVelocity"); }
	float& MinOpenWaterSpoilingMultField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MinOpenWaterSpoilingMult"); }
	float& MaxOpenWaterSpoilingMultField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MaxOpenWaterSpoilingMult"); }
	float& MinOpenWaterDebuffDistanceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MinOpenWaterDebuffDistance"); }
	float& MaxOpenWaterDebuffDistanceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MaxOpenWaterDebuffDistance"); }
	float& BaseClaimTimeField() { return *GetNativePointerField<float*>(this, "APrimalRaft.BaseClaimTime"); }
	float& BaseUnclaimTimeField() { return *GetNativePointerField<float*>(this, "APrimalRaft.BaseUnclaimTime"); }
	float& ExtraClaimTimePerLevelField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ExtraClaimTimePerLevel"); }
	float& ClaimTimeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ClaimTimeMultiplier"); }
	float& PercentOfWeightForMinSinkingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.PercentOfWeightForMinSinkingSpeed"); }
	float& PercentOfWeightForMaxSinkingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.PercentOfWeightForMaxSinkingSpeed"); }
	float& ShipHullSinkMovementForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipHullSinkMovementForceMultiplier"); }
	FVector& LastPositionField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.LastPosition"); }
	bool& bWasAnchoredOrDryDockedField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bWasAnchoredOrDryDocked"); }
	FVector2D& SailHUDIconYMinMaxField() { return *GetNativePointerField<FVector2D*>(this, "APrimalRaft.SailHUDIconYMinMax"); }
	APrimalStructureItemContainer * MyRepairBoxField() { return *GetNativePointerField<APrimalStructureItemContainer **>(this, "APrimalRaft.MyRepairBox"); }
	APrimalStructureClaimFlag * CurrentClaimFlagField() { return *GetNativePointerField<APrimalStructureClaimFlag **>(this, "APrimalRaft.CurrentClaimFlag"); }
	float& MaximumSwimOntoBaseTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MaximumSwimOntoBaseTraceDistance"); }
	float& AutoAnchorDryDockReleasedGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoAnchorDryDockReleasedGracePeriod"); }
	int& NumBasedCharactersField() { return *GetNativePointerField<int*>(this, "APrimalRaft.NumBasedCharacters"); }
	long double& LastReleasedFromDryDockTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastReleasedFromDryDockTime"); }
	float& ThrottleForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ThrottleForceMultiplier"); }
	bool& bIncrementedAnchoredShipsField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bIncrementedAnchoredShips"); }
	bool& bIncrementedUnanchoredShipsField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bIncrementedUnanchoredShips"); }
	float& MinMaxThrottleRatioToBeachField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MinMaxThrottleRatioToBeach"); }
	float& MinAllowedGroundDistField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MinAllowedGroundDist"); }
	float& GroundDistToStopShipField() { return *GetNativePointerField<float*>(this, "APrimalRaft.GroundDistToStopShip"); }
	float& GlobalSailForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.GlobalSailForceMultiplier"); }
	float& GlobalSteeringForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.GlobalSteeringForceMultiplier"); }
	float& ShipBeachedStartTimeField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipBeachedStartTime"); }
	bool& bPreventsDinosWithStructureSupportingSaddlesField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bPreventsDinosWithStructureSupportingSaddles"); }
	float& ExternalForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ExternalForceMultiplier"); }
	int& LastMarkedFrameCountField() { return *GetNativePointerField<int*>(this, "APrimalRaft.LastMarkedFrameCount"); }
	long double& LastFrameMarkedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastFrameMarkedTime"); }
	long double& LastSentSailRotationToServerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastSentSailRotationToServerTime"); }
	float& LastSentSailRotationToServerValueField() { return *GetNativePointerField<float*>(this, "APrimalRaft.LastSentSailRotationToServerValue"); }
	long double& LastSentThrottleTargetToServerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastSentThrottleTargetToServerTime"); }
	float& LastSentThrottleTargetToServerValueField() { return *GetNativePointerField<float*>(this, "APrimalRaft.LastSentThrottleTargetToServerValue"); }
	float& LastSentSteeringInputToServerValueField() { return *GetNativePointerField<float*>(this, "APrimalRaft.LastSentSteeringInputToServerValue"); }
	float& Teleport_AllowedAboveTopDeckDistField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Teleport_AllowedAboveTopDeckDist"); }
	float& Teleport_AllowedBelowTopDeckDistField() { return *GetNativePointerField<float*>(this, "APrimalRaft.Teleport_AllowedBelowTopDeckDist"); }
	long double& LastWantsForcedMovementTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.LastWantsForcedMovementTime"); }
	int& ForcedMovementDirectionField() { return *GetNativePointerField<int*>(this, "APrimalRaft.ForcedMovementDirection"); }
	TArray<FOrderingGroupInfo>& StationGroupsField() { return *GetNativePointerField<TArray<FOrderingGroupInfo>*>(this, "APrimalRaft.StationGroups"); }
	TArray<unsigned char>& StationGroupsCurrentActiveOrderField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "APrimalRaft.StationGroupsCurrentActiveOrder"); }
	TArray<FVector>& CurrentManualFireLocationsField() { return *GetNativePointerField<TArray<FVector>*>(this, "APrimalRaft.CurrentManualFireLocations"); }
	float& FrontGroupMinYCoordinateField() { return *GetNativePointerField<float*>(this, "APrimalRaft.FrontGroupMinYCoordinate"); }
	float& BackGroupMaxYCoordinateField() { return *GetNativePointerField<float*>(this, "APrimalRaft.BackGroupMaxYCoordinate"); }
	float& MaxTimeToShootAtLocationField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MaxTimeToShootAtLocation"); }
	float& ShipWeightMovementForcePowerField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipWeightMovementForcePower"); }
	unsigned int& ServerStationGroupsUpdateIndexField() { return *GetNativePointerField<unsigned int*>(this, "APrimalRaft.ServerStationGroupsUpdateIndex"); }
	unsigned int& LocalStationGroupsUpdateIndexField() { return *GetNativePointerField<unsigned int*>(this, "APrimalRaft.LocalStationGroupsUpdateIndex"); }
	FVector& CaptainsOrdersCameraOriginTargetingOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.CaptainsOrdersCameraOriginTargetingOffset"); }
	FVector& CapOrdersAdditionTPVOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalRaft.CapOrdersAdditionTPVOffset"); }
	FieldArray<int, 3> CaptainExtraActionsStatesField() { return { this, "APrimalRaft.CaptainExtraActionsStates" }; }
	float& AutoPilot_AllowSnapToHeadingBelowAngularVelocityField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoPilot_AllowSnapToHeadingBelowAngularVelocity"); }
	float& AutoPilot_TargetHeadingErrorRange_SlowField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoPilot_TargetHeadingErrorRange_Slow"); }
	float& AutoPilot_TargetHeadingErrorRange_StopField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoPilot_TargetHeadingErrorRange_Stop"); }
	float& AutoPilot_TargetHeadingErrorRange_ResumeField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoPilot_TargetHeadingErrorRange_Resume"); }
	float& AutoPilot_AngularVelocityMaxInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoPilot_AngularVelocityMaxInterpSpeed"); }
	float& AutoPilot_ForceMinAngularVelocity_MINField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoPilot_ForceMinAngularVelocity_MIN"); }
	float& AutoPilot_ForceMinAngularVelocity_MAXField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoPilot_ForceMinAngularVelocity_MAX"); }
	float& ScaleFloatingHUDMaxDistanceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ScaleFloatingHUDMaxDistance"); }
	float& DrawFloatingHUDMaxDistanceAllyField() { return *GetNativePointerField<float*>(this, "APrimalRaft.DrawFloatingHUDMaxDistanceAlly"); }
	float& DrawFloatingHUDMaxDistanceEnemyField() { return *GetNativePointerField<float*>(this, "APrimalRaft.DrawFloatingHUDMaxDistanceEnemy"); }
	AActor * LastDamageCauserField() { return *GetNativePointerField<AActor **>(this, "APrimalRaft.LastDamageCauser"); }
	long double& ClientStartedInterpolationAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.ClientStartedInterpolationAtTime"); }
	FName& VesselDynamicsCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalRaft.VesselDynamicsCollisionProfileName"); }
	float& OvercrewedIsOverweightMinSinkingPercentField() { return *GetNativePointerField<float*>(this, "APrimalRaft.OvercrewedIsOverweightMinSinkingPercent"); }
	float& CollideOntoEnemyRaftDamageImpulseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.CollideOntoEnemyRaftDamageImpulseMultiplier"); }
	float& FixedBackwardsThrottleForceField() { return *GetNativePointerField<float*>(this, "APrimalRaft.FixedBackwardsThrottleForce"); }
	float& MaxBackwardsVelocityField() { return *GetNativePointerField<float*>(this, "APrimalRaft.MaxBackwardsVelocity"); }
	float& ClientUnanchoringAllowSlowInterpolationPeriodField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ClientUnanchoringAllowSlowInterpolationPeriod"); }
	float& ClientUnanchoringLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ClientUnanchoringLocationInterpSpeed"); }
	float& ClientUnanchoringRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ClientUnanchoringRotationInterpSpeed"); }
	float& ClientUnanchoringInterpSpeedFastField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ClientUnanchoringInterpSpeedFast"); }
	float& ShipStructureHealthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalRaft.ShipStructureHealthMultiplier"); }
	float& UnRedAlertTeleWaitTimeField() { return *GetNativePointerField<float*>(this, "APrimalRaft.UnRedAlertTeleWaitTime"); }
	int& NumOfLieutenantSeatsAllowedField() { return *GetNativePointerField<int*>(this, "APrimalRaft.NumOfLieutenantSeatsAllowed"); }
	FString& KilledNotificationStringField() { return *GetNativePointerField<FString*>(this, "APrimalRaft.KilledNotificationString"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bUseForcestoApply() { return { this, "APrimalRaft.bUseForcestoApply" }; }
	BitFieldValue<bool, unsigned __int32> bIsNPCShip() { return { this, "APrimalRaft.bIsNPCShip" }; }
	BitFieldValue<bool, unsigned __int32> bClientIsInterpolatingRaft() { return { this, "APrimalRaft.bClientIsInterpolatingRaft" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSimulatePhysics() { return { this, "APrimalRaft.bUseBPSimulatePhysics" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseBPSimulatePhysics() { return { this, "APrimalRaft.bOnlyUseBPSimulatePhysics" }; }
	BitFieldValue<bool, unsigned __int32> bIsSmallRaft() { return { this, "APrimalRaft.bIsSmallRaft" }; }
	BitFieldValue<bool, unsigned __int32> bDebugSteering() { return { this, "APrimalRaft.bDebugSteering" }; }
	BitFieldValue<bool, unsigned __int32> bDebugSailing() { return { this, "APrimalRaft.bDebugSailing" }; }
	BitFieldValue<bool, unsigned __int32> bDebugRowing() { return { this, "APrimalRaft.bDebugRowing" }; }
	BitFieldValue<bool, unsigned __int32> bDebugRowing_ForceAllSeatsRowSync() { return { this, "APrimalRaft.bDebugRowing_ForceAllSeatsRowSync" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDriverSeats() { return { this, "APrimalRaft.bAllowDriverSeats" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSails() { return { this, "APrimalRaft.bAllowSails" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRowingSeats() { return { this, "APrimalRaft.bAllowRowingSeats" }; }
	BitFieldValue<bool, unsigned __int32> bAutoFullyBuildInShipYard() { return { this, "APrimalRaft.bAutoFullyBuildInShipYard" }; }
	BitFieldValue<bool, unsigned __int32> bReleaseImmediatelyFromShipyard() { return { this, "APrimalRaft.bReleaseImmediatelyFromShipyard" }; }
	BitFieldValue<bool, unsigned __int32> bAllowReturnToShipyard() { return { this, "APrimalRaft.bAllowReturnToShipyard" }; }
	BitFieldValue<bool, unsigned __int32> bCanMoveWithoutRider() { return { this, "APrimalRaft.bCanMoveWithoutRider" }; }
	BitFieldValue<bool, unsigned __int32> bSailsAffectThrottleLocation() { return { this, "APrimalRaft.bSailsAffectThrottleLocation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_AdjustRowingImpulse() { return { this, "APrimalRaft.bUseBP_AdjustRowingImpulse" }; }
	BitFieldValue<bool, unsigned __int32> bIsCheckingThrottle() { return { this, "APrimalRaft.bIsCheckingThrottle" }; }
	BitFieldValue<bool, unsigned __int32> bTickRowing() { return { this, "APrimalRaft.bTickRowing" }; }
	BitFieldValue<bool, unsigned __int32> bAddedToActiveArray() { return { this, "APrimalRaft.bAddedToActiveArray" }; }
	BitFieldValue<bool, unsigned __int32> bTickRefreshStationGroupOrders() { return { this, "APrimalRaft.bTickRefreshStationGroupOrders" }; }
	BitFieldValue<bool, unsigned __int32> bUsingAutoStationGrouping() { return { this, "APrimalRaft.bUsingAutoStationGrouping" }; }
	BitFieldValue<bool, unsigned __int32> bUsesStationGrouping() { return { this, "APrimalRaft.bUsesStationGrouping" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateCurrentSailRotation() { return { this, "APrimalRaft.bReplicateCurrentSailRotation" }; }
	BitFieldValue<bool, unsigned __int32> bAllowShipForcedMovement() { return { this, "APrimalRaft.bAllowShipForcedMovement" }; }
	BitFieldValue<bool, unsigned __int32> bClientSideSailingForces() { return { this, "APrimalRaft.bClientSideSailingForces" }; }
	BitFieldValue<bool, unsigned __int32> bDeadTicked() { return { this, "APrimalRaft.bDeadTicked" }; }
	BitFieldValue<bool, unsigned __int32> bAnchoredSetToOceanHeight() { return { this, "APrimalRaft.bAnchoredSetToOceanHeight" }; }
	BitFieldValue<bool, unsigned __int32> bUseRaftBPTick() { return { this, "APrimalRaft.bUseRaftBPTick" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetThrottle() { return { this, "APrimalRaft.bUseBPSetThrottle" }; }
	BitFieldValue<bool, unsigned __int32> bHealthPercentageUseHullHealth() { return { this, "APrimalRaft.bHealthPercentageUseHullHealth" }; }
	BitFieldValue<bool, unsigned __int32> bSmallRaftPushAwayPlayers() { return { this, "APrimalRaft.bSmallRaftPushAwayPlayers" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAutoPilot() { return { this, "APrimalRaft.bAllowAutoPilot" }; }

	// Functions

	static UClass * StaticClass() { return NativeCall<UClass *>(nullptr, "APrimalRaft.StaticClass"); }
	bool IsLargeRaft() { return NativeCall<bool>(this, "APrimalRaft.IsLargeRaft"); }
	void ActivateAllHighlights(bool bRequestFromCaptain, int LTSeatIndex, char IconsToActivate) { NativeCall<void, bool, int, char>(this, "APrimalRaft.ActivateAllHighlights", bRequestFromCaptain, LTSeatIndex, IconsToActivate); }
	void ActivateGroup(int GroupIndex, bool bIsForCaptain, bool bNewValue, int LtIndex) { NativeCall<void, int, bool, bool, int>(this, "APrimalRaft.ActivateGroup", GroupIndex, bIsForCaptain, bNewValue, LtIndex); }
	void AddForceToBeApplied(FVector Location, FVector Force, FName ForceName) { NativeCall<void, FVector, FVector, FName>(this, "APrimalRaft.AddForceToBeApplied", Location, Force, ForceName); }
	void AddForceToBeAppliedAtCenterOfGravity(FVector Force, FName ForceName) { NativeCall<void, FVector, FName>(this, "APrimalRaft.AddForceToBeAppliedAtCenterOfGravity", Force, ForceName); }
	void AddForceToBeAppliedAtCustomSocket(FVector Force, FName ForceName, FName SocketName) { NativeCall<void, FVector, FName, FName>(this, "APrimalRaft.AddForceToBeAppliedAtCustomSocket", Force, ForceName, SocketName); }
	void AddForceToShipAtLocation(FVector Force, FVector Location, bool bIgnoreBeachedThrottleForceMultiplier) { NativeCall<void, FVector, FVector, bool>(this, "APrimalRaft.AddForceToShipAtLocation", Force, Location, bIgnoreBeachedThrottleForceMultiplier); }
	void AddImpulseToShipAtLocation(FVector Impulse, FVector Location) { NativeCall<void, FVector, FVector>(this, "APrimalRaft.AddImpulseToShipAtLocation", Impulse, Location); }
	void AddTorqueToBeApplied(FVector Force, FName ForceName) { NativeCall<void, FVector, FName>(this, "APrimalRaft.AddTorqueToBeApplied", Force, ForceName); }
	bool AllowAutoPilot_Tick() { return NativeCall<bool>(this, "APrimalRaft.AllowAutoPilot_Tick"); }
	void ApplyGlobalDamageToShip(float DamageAmount, bool bIsPercent, AController * EventInstigator, AActor * DamageCauser, TSubclassOf<UDamageType> DamageType) { NativeCall<void, float, bool, AController *, AActor *, TSubclassOf<UDamageType>>(this, "APrimalRaft.ApplyGlobalDamageToShip", DamageAmount, bIsPercent, EventInstigator, DamageCauser, DamageType); }
	bool AreAllMannedSailsClosing() { return NativeCall<bool>(this, "APrimalRaft.AreAllMannedSailsClosing"); }
	bool AreAllMannedSailsOpening() { return NativeCall<bool>(this, "APrimalRaft.AreAllMannedSailsOpening"); }
	void AttachToOtherShip(APrimalRaft * OtherShip, TEnumAsByte<enum EAttachLocation::Type> AttachType, bool bAttachAtWorldTransform, FVector AttachAtWorldLoc, FRotator AttachAtWorldRot) { NativeCall<void, APrimalRaft *, TEnumAsByte<enum EAttachLocation::Type>, bool, FVector, FRotator>(this, "APrimalRaft.AttachToOtherShip", OtherShip, AttachType, bAttachAtWorldTransform, AttachAtWorldLoc, AttachAtWorldRot); }
	bool BaseIgnoreWaveLocking(APrimalCharacter * BasedChar) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalRaft.BaseIgnoreWaveLocking", BasedChar); }
	void BeginPlay() { NativeCall<void>(this, "APrimalRaft.BeginPlay"); }
	FVector * CalculateManualFireCannonCenterLocation(FVector * result, TArray<int> * GroupsIndex, FVector TargetLocation) { return NativeCall<FVector *, FVector *, TArray<int> *, FVector>(this, "APrimalRaft.CalculateManualFireCannonCenterLocation", result, GroupsIndex, TargetLocation); }
	void CalculateSailRotation() { NativeCall<void>(this, "APrimalRaft.CalculateSailRotation"); }
	void CalculateSteeringVelocity() { NativeCall<void>(this, "APrimalRaft.CalculateSteeringVelocity"); }
	void CalculateThrottleForce() { NativeCall<void>(this, "APrimalRaft.CalculateThrottleForce"); }
	int CanAddCriticalShipStructure(APrimalStructure * NewStructure) { return NativeCall<int, APrimalStructure *>(this, "APrimalRaft.CanAddCriticalShipStructure", NewStructure); }
	bool CanDoPhysicsRotationAccelerationFollowsRotationDirectMove() { return NativeCall<bool>(this, "APrimalRaft.CanDoPhysicsRotationAccelerationFollowsRotationDirectMove"); }
	bool CanOrder(APrimalCharacter * FromCharacter, bool bBuildingStructures) { return NativeCall<bool, APrimalCharacter *, bool>(this, "APrimalRaft.CanOrder", FromCharacter, bBuildingStructures); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalRaft.ChangeActorTeam", NewTeam); }
	void ChangeGroupName(int GroupIndex, FString NewName) { NativeCall<void, int, FString>(this, "APrimalRaft.ChangeGroupName", GroupIndex, NewName); }
	void CheckForChangeThrottle() { NativeCall<void>(this, "APrimalRaft.CheckForChangeThrottle"); }
	void CheckStructurePlacementOnMe_Implementation(int * AllowReturnValue, APrimalStructure * PlacingStructure, AShooterPlayerController * PC, FVector * AtLocation, FRotator * AtRotation, FPlacementData * PlacementData) { NativeCall<void, int *, APrimalStructure *, AShooterPlayerController *, FVector *, FRotator *, FPlacementData *>(this, "APrimalRaft.CheckStructurePlacementOnMe_Implementation", AllowReturnValue, PlacingStructure, PC, AtLocation, AtRotation, PlacementData); }
	void ClearStationGroup(int GroupIndex, bool bNotifyChange) { NativeCall<void, int, bool>(this, "APrimalRaft.ClearStationGroup", GroupIndex, bNotifyChange); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalRaft.ClientMultiUse", ForPC, UseIndex); }
	void ClientPrepareForSeamlessTravel_Implementation() { NativeCall<void>(this, "APrimalRaft.ClientPrepareForSeamlessTravel_Implementation"); }
	void Destroyed() { NativeCall<void>(this, "APrimalRaft.Destroyed"); }
	void DetachFromShip(bool bDetachAtWorldTransform, FVector DetachAtWorldLoc, FRotator DetachAtWorldRot) { NativeCall<void, bool, FVector, FRotator>(this, "APrimalRaft.DetachFromShip", bDetachAtWorldTransform, DetachAtWorldLoc, DetachAtWorldRot); }
	bool Die(float KillingDamage, FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>(this, "APrimalRaft.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DoImpactDamageToShipStructures(FVector AtLocation, float AtRange, float AtDamage, AActor * DamageCauser) { NativeCall<void, FVector, float, float, AActor *>(this, "APrimalRaft.DoImpactDamageToShipStructures", AtLocation, AtRange, AtDamage, DamageCauser); }
	bool DoesShipHaveBasedPawns(bool bRequireActivePawns) { return NativeCall<bool, bool>(this, "APrimalRaft.DoesShipHaveBasedPawns", bRequireActivePawns); }
	void DrawDinoFloatingHUD(AShooterHUD * HUD, bool bDrawDinoOrderIcon) { NativeCall<void, AShooterHUD *, bool>(this, "APrimalRaft.DrawDinoFloatingHUD", HUD, bDrawDinoOrderIcon); }
	bool EndOrderForGroup(ECaptainOrder::Type CaptainOrder, int GroupIndex, int StationsToFire, AActor * OrderTarget, FVector TargetLocation, bool bUpdateGroupInfos) { return NativeCall<bool, ECaptainOrder::Type, int, int, AActor *, FVector, bool>(this, "APrimalRaft.EndOrderForGroup", CaptainOrder, GroupIndex, StationsToFire, OrderTarget, TargetLocation, bUpdateGroupInfos); }
	void EndOrderForGroups(ECaptainOrder::Type CaptainOrder, TArray<int> * GroupsIndex, TArray<int> * StationsToFire, AActor * OrderTarget, FVector TargetLocation) { NativeCall<void, ECaptainOrder::Type, TArray<int> *, TArray<int> *, AActor *, FVector>(this, "APrimalRaft.EndOrderForGroups", CaptainOrder, GroupsIndex, StationsToFire, OrderTarget, TargetLocation); }
	void ExecuteCaptainOrderForGroup(ECaptainOrder::Type OrderIndex, int GroupIndex, int ForceOnGroup, bool bUpdateGroupInfos) { NativeCall<void, ECaptainOrder::Type, int, int, bool>(this, "APrimalRaft.ExecuteCaptainOrderForGroup", OrderIndex, GroupIndex, ForceOnGroup, bUpdateGroupInfos); }
	void ExecuteCaptainOrderForGroups(ECaptainOrder::Type OrderIndex, TArray<int> * GroupsIndex) { NativeCall<void, ECaptainOrder::Type, TArray<int> *>(this, "APrimalRaft.ExecuteCaptainOrderForGroups", OrderIndex, GroupsIndex); }
	void FinalSeamlessTravelled() { NativeCall<void>(this, "APrimalRaft.FinalSeamlessTravelled"); }
	void FinalizeCaptainOrderForGroup(ECaptainOrder::Type OrderIndex, int GroupIndex, int StationsToFire, AActor * OrderTarget, FVector OrderLocation, int ForceOnGroup, bool bUpdateGroupInfos) { NativeCall<void, ECaptainOrder::Type, int, int, AActor *, FVector, int, bool>(this, "APrimalRaft.FinalizeCaptainOrderForGroup", OrderIndex, GroupIndex, StationsToFire, OrderTarget, OrderLocation, ForceOnGroup, bUpdateGroupInfos); }
	void FinalizeCaptainOrderForGroups(ECaptainOrder::Type OrderIndex, TArray<int> * GroupsIndex, TArray<int> * StationsToFire, AActor * OrderTarget, FVector OrderLocation) { NativeCall<void, ECaptainOrder::Type, TArray<int> *, TArray<int> *, AActor *, FVector>(this, "APrimalRaft.FinalizeCaptainOrderForGroups", OrderIndex, GroupsIndex, StationsToFire, OrderTarget, OrderLocation); }
	static APrimalRaft * FindRaftWithID(UWorld * World, int RaftUniqueId) { return NativeCall<APrimalRaft *, UWorld *, int>(nullptr, "APrimalRaft.FindRaftWithID", World, RaftUniqueId); }
	void FirstTicked() { NativeCall<void>(this, "APrimalRaft.FirstTicked"); }
	bool ForceAllowAddBuffOfClass(TSubclassOf<APrimalBuff> BuffClass) { return NativeCall<bool, TSubclassOf<APrimalBuff>>(this, "APrimalRaft.ForceAllowAddBuffOfClass", BuffClass); }
	void ForceClearAllBasingCharacters(bool bForceSetFalling) { NativeCall<void, bool>(this, "APrimalRaft.ForceClearAllBasingCharacters", bForceSetFalling); }
	void ForceClearBasingCharacter(APrimalCharacter * theChar, bool bForceSetFalling) { NativeCall<void, APrimalCharacter *, bool>(this, "APrimalRaft.ForceClearBasingCharacter", theChar, bForceSetFalling); }
	void ForceMoveShip() { NativeCall<void>(this, "APrimalRaft.ForceMoveShip"); }
	void ForceUpdateBasedPawnsMovements() { NativeCall<void>(this, "APrimalRaft.ForceUpdateBasedPawnsMovements"); }
	FVector2D * GetAutoPilotHeading(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "APrimalRaft.GetAutoPilotHeading", result); }
	float GetAverageMannedSailOpenRatio() { return NativeCall<float>(this, "APrimalRaft.GetAverageMannedSailOpenRatio"); }
	void GetBasedCrewCounts(int * OutPlayers, int * OutCrew) { NativeCall<void, int *, int *>(this, "APrimalRaft.GetBasedCrewCounts", OutPlayers, OutCrew); }
	FString * GetCaptainOrderCommand(FString * result, ECaptainOrder::Type CaptainOrder, bool bFromCaptain) { return NativeCall<FString *, FString *, ECaptainOrder::Type, bool>(this, "APrimalRaft.GetCaptainOrderCommand", result, CaptainOrder, bFromCaptain); }
	float GetCrewPaymentIntervalMultiplier() { return NativeCall<float>(this, "APrimalRaft.GetCrewPaymentIntervalMultiplier"); }
	int GetCurrentBasedCrewCount(bool bOnlyCountNPCs) { return NativeCall<int, bool>(this, "APrimalRaft.GetCurrentBasedCrewCount", bOnlyCountNPCs); }
	UTexture2D * GetCurrentCaptainOrderIcon(ECaptainOrder::Type CurrentCaptainOrder) { return NativeCall<UTexture2D *, ECaptainOrder::Type>(this, "APrimalRaft.GetCurrentCaptainOrderIcon", CurrentCaptainOrder); }
	FVector * GetCurrentManualFireLocationForSeat(FVector * result, APrimalStructureSeating * seatToCheck) { return NativeCall<FVector *, FVector *, APrimalStructureSeating *>(this, "APrimalRaft.GetCurrentManualFireLocationForSeat", result, seatToCheck); }
	int GetCurrentSinkReason() { return NativeCall<int>(this, "APrimalRaft.GetCurrentSinkReason"); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalRaft.GetDescriptiveName", result); }
	APrimalStructureSeating_DriverSeat * GetDominantSeatForGroup(int GroupIndex) { return NativeCall<APrimalStructureSeating_DriverSeat *, int>(this, "APrimalRaft.GetDominantSeatForGroup", GroupIndex); }
	AShooterCharacter * GetDriver() { return NativeCall<AShooterCharacter *>(this, "APrimalRaft.GetDriver"); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalRaft.GetEntryDescription", result); }
	UTexture2D * GetEntryIcon(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D *, UObject *, bool>(this, "APrimalRaft.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalRaft.GetEntryString", result); }
	float GetGroundDistanceFromHullBottom(bool * OutMovingAway) { return NativeCall<float, bool *>(this, "APrimalRaft.GetGroundDistanceFromHullBottom", OutMovingAway); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalRaft.GetHealthPercentage"); }
	FVector * GetInterpolatedVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalRaft.GetInterpolatedVelocity", result); }
	long double GetLastRowTime() { return NativeCall<long double>(this, "APrimalRaft.GetLastRowTime"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalRaft.GetLifetimeReplicatedProps", OutLifetimeProps); }
	APrimalStructureSeating * GetLocalCaptainsSeat() { return NativeCall<APrimalStructureSeating *>(this, "APrimalRaft.GetLocalCaptainsSeat"); }
	APrimalStructure * GetMainDriverSeat() { return NativeCall<APrimalStructure *>(this, "APrimalRaft.GetMainDriverSeat"); }
	int GetMannedSailsCount() { return NativeCall<int>(this, "APrimalRaft.GetMannedSailsCount"); }
	float GetMaxFloatingHUDRange() { return NativeCall<float>(this, "APrimalRaft.GetMaxFloatingHUDRange"); }
	float GetMaxMovementWeight() { return NativeCall<float>(this, "APrimalRaft.GetMaxMovementWeight"); }
	float GetThrottleForce() { return NativeCall<float>(this, "APrimalRaft.GetThrottleForce"); }
	FVector * GetParticleSystemClampingVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalRaft.GetParticleSystemClampingVelocity", result); }
	FString * GetRaftDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalRaft.GetRaftDescriptiveName", result); }
	float GetRotationRateWithAcceleration11(float CurrentRotation, float TargetRotation, float RotationSpeed, float DeltaTime, float CurrentDesiredRotationRate, float DesiredRotationRate) { return NativeCall<float, float, float, float, float, float, float>(this, "APrimalRaft.GetRotationRateWithAcceleration11", CurrentRotation, TargetRotation, RotationSpeed, DeltaTime, CurrentDesiredRotationRate, DesiredRotationRate); }
	float GetRowingInterval() { return NativeCall<float>(this, "APrimalRaft.GetRowingInterval"); }
	float GetRudderAngle() { return NativeCall<float>(this, "APrimalRaft.GetRudderAngle"); }
	float GetSaddleStructureMaximumFoundationSupport2DBuildDistance(APrimalStructure * theStructure) { return NativeCall<float, APrimalStructure *>(this, "APrimalRaft.GetSaddleStructureMaximumFoundationSupport2DBuildDistance", theStructure); }
	void GetSailThrottleForce(APrimalStructureSail * ForSail, float * OutThrottleForceMultiplier, float * OutSteeringForceMultiplier) { NativeCall<void, APrimalStructureSail *, float *, float *>(this, "APrimalRaft.GetSailThrottleForce", ForSail, OutThrottleForceMultiplier, OutSteeringForceMultiplier); }
	float GetSailUnitPercentage() { return NativeCall<float>(this, "APrimalRaft.GetSailUnitPercentage"); }
	TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> > * GetShipAmmoTotals(TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> > * result, TArray<TSubclassOf<UPrimalItem>> ammoTypes) { return NativeCall<TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> > *, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> > *, TArray<TSubclassOf<UPrimalItem>>>(this, "APrimalRaft.GetShipAmmoTotals", result, ammoTypes); }
	TArray<APawn *> * GetShipBasedPawns(TArray<APawn *> * result, USceneComponent * OnComponent, bool bOnlyActivePawns) { return NativeCall<TArray<APawn *> *, TArray<APawn *> *, USceneComponent *, bool>(this, "APrimalRaft.GetShipBasedPawns", result, OnComponent, bOnlyActivePawns); }
	FVector * GetShipForwardVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalRaft.GetShipForwardVector", result); }
	float GetShipMovementForceMult() { return NativeCall<float>(this, "APrimalRaft.GetShipMovementForceMult"); }
	FVector * GetShipRightVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalRaft.GetShipRightVector", result); }
	FRotator * GetShipRotation(FRotator * result, float YawOffset) { return NativeCall<FRotator *, FRotator *, float>(this, "APrimalRaft.GetShipRotation", result, YawOffset); }
	float GetShipRowingInput() { return NativeCall<float>(this, "APrimalRaft.GetShipRowingInput"); }
	int GetShipRowingSeatCount() { return NativeCall<int>(this, "APrimalRaft.GetShipRowingSeatCount"); }
	int GetShipSailCount() { return NativeCall<int>(this, "APrimalRaft.GetShipSailCount"); }
	TEnumAsByte<enum EShipSize::Type> * GetShipSizeClass(TEnumAsByte<enum EShipSize::Type> * result) { return NativeCall<TEnumAsByte<enum EShipSize::Type> *, TEnumAsByte<enum EShipSize::Type> *>(this, "APrimalRaft.GetShipSizeClass", result); }
	float GetShipTargetThrottleRatio() { return NativeCall<float>(this, "APrimalRaft.GetShipTargetThrottleRatio"); }
	FVector * GetShipVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalRaft.GetShipVelocity", result); }
	FVector * GetShipVelocityAtLocation(FVector * result, FVector AtLocation) { return NativeCall<FVector *, FVector *, FVector>(this, "APrimalRaft.GetShipVelocityAtLocation", result, AtLocation); }
	float GetShipWeightPercentage() { return NativeCall<float>(this, "APrimalRaft.GetShipWeightPercentage"); }
	float GetShipWeightSinkingPercentage() { return NativeCall<float>(this, "APrimalRaft.GetShipWeightSinkingPercentage"); }
	float GetSinkTargetPitch() { return NativeCall<float>(this, "APrimalRaft.GetSinkTargetPitch"); }
	float GetSpoilingTimeMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "APrimalRaft.GetSpoilingTimeMultiplier", anItem); }
	FString * GetStationGroupName(FString * result, int groupIndex) { return NativeCall<FString *, FString *, int>(this, "APrimalRaft.GetStationGroupName", result, groupIndex); }
	float GetSteeringForce() { return NativeCall<float>(this, "APrimalRaft.GetSteeringForce"); }
	float GetTimeToResetRudderAngle(float WithInput) { return NativeCall<float, float>(this, "APrimalRaft.GetTimeToResetRudderAngle", WithInput); }
	float GetTotalClaimTime() { return NativeCall<float>(this, "APrimalRaft.GetTotalClaimTime"); }
	float GetTotalSailUnits() { return NativeCall<float>(this, "APrimalRaft.GetTotalSailUnits"); }
	float GetTotalUnclaimTime() { return NativeCall<float>(this, "APrimalRaft.GetTotalUnclaimTime"); }
	bool HasOpenSails() { return NativeCall<bool>(this, "APrimalRaft.HasOpenSails"); }
	bool HasOpenUnMannedSails() { return NativeCall<bool>(this, "APrimalRaft.HasOpenUnMannedSails"); }
	void InitializeStationGroups() { NativeCall<void>(this, "APrimalRaft.InitializeStationGroups"); }
	bool IsAnchored() { return NativeCall<bool>(this, "APrimalRaft.IsAnchored"); }
	bool IsAutoPilotActive() { return NativeCall<bool>(this, "APrimalRaft.IsAutoPilotActive"); }
	bool IsCheatWind() { return NativeCall<bool>(this, "APrimalRaft.IsCheatWind"); }
	bool IsDocked() { return NativeCall<bool>(this, "APrimalRaft.IsDocked"); }
	bool IsDryDocked() { return NativeCall<bool>(this, "APrimalRaft.IsDryDocked"); }
	bool IsPointInsideThisRaft(FVector * TestPoint) { return NativeCall<bool, FVector *>(this, "APrimalRaft.IsPointInsideThisRaft", TestPoint); }
	bool IsShipCheckingForRowing() { return NativeCall<bool>(this, "APrimalRaft.IsShipCheckingForRowing"); }
	bool IsUpdatingComponentTransforms(USceneComponent * InSceneComponent) { return NativeCall<bool, USceneComponent *>(this, "APrimalRaft.IsUpdatingComponentTransforms", InSceneComponent); }
	void MarkForSeamlessTravel(unsigned int DestinationServerId, ESeamlessVolumeSide::Side DestinationServerVolumeSide) { NativeCall<void, unsigned int, ESeamlessVolumeSide::Side>(this, "APrimalRaft.MarkForSeamlessTravel", DestinationServerId, DestinationServerVolumeSide); }
	void Multi_OnShipRow_Implementation() { NativeCall<void>(this, "APrimalRaft.Multi_OnShipRow_Implementation"); }
	void NetClientInterpolateTo_Implementation(FVector NewLocation, FRotator NewRotation) { NativeCall<void, FVector, FRotator>(this, "APrimalRaft.NetClientInterpolateTo_Implementation", NewLocation, NewRotation); }
	void NetForceSyncTransform_Implementation(FVector NewLocation, FRotator NewRotation) { NativeCall<void, FVector, FRotator>(this, "APrimalRaft.NetForceSyncTransform_Implementation", NewLocation, NewRotation); }
	void NetSetGroupsStructuresCaptainOrder_Implementation(ECaptainOrder::Type CaptainOrder, int GroupIndex) { NativeCall<void, ECaptainOrder::Type, int>(this, "APrimalRaft.NetSetGroupsStructuresCaptainOrder_Implementation", CaptainOrder, GroupIndex); }
	void NetUpdateDinoNameStrings_Implementation(FString * NewTamerString, FString * NewTamedName) { NativeCall<void, FString *, FString *>(this, "APrimalRaft.NetUpdateDinoNameStrings_Implementation", NewTamerString, NewTamedName); }
	void OnActivateGroupHighlight(int GroupIndex, bool bActivate, char IconsToActivate) { NativeCall<void, int, bool, char>(this, "APrimalRaft.OnActivateGroupHighlight", GroupIndex, bActivate, IconsToActivate); }
	void OnAddCriticalShipStructure(APrimalStructure * NewStructure) { NativeCall<void, APrimalStructure *>(this, "APrimalRaft.OnAddCriticalShipStructure", NewStructure); }
	void OnDeserializedByGame(EOnDesrializationType::Type DeserializationType) { NativeCall<void, EOnDesrializationType::Type>(this, "APrimalRaft.OnDeserializedByGame", DeserializationType); }
	void OnRemoveCriticalShipStructure(APrimalStructure * OldStructure) { NativeCall<void, APrimalStructure *>(this, "APrimalRaft.OnRemoveCriticalShipStructure", OldStructure); }
	void OnRep_IsInDrydock() { NativeCall<void>(this, "APrimalRaft.OnRep_IsInDrydock"); }
	void OnRep_IsInWetDock() { NativeCall<void>(this, "APrimalRaft.OnRep_IsInWetDock"); }
	void OnSaddleStructuresUpdated(APrimalStructure * SaddleStructure, bool bWasRemoved) { NativeCall<void, APrimalStructure *, bool>(this, "APrimalRaft.OnSaddleStructuresUpdated", SaddleStructure, bWasRemoved); }
	void OnShipRowingStart() { NativeCall<void>(this, "APrimalRaft.OnShipRowingStart"); }
	void OnShipRowingStop() { NativeCall<void>(this, "APrimalRaft.OnShipRowingStop"); }
	void OnStructurePlacedOnShip(APrimalStructure * NewStructure) { NativeCall<void, APrimalStructure *>(this, "APrimalRaft.OnStructurePlacedOnShip", NewStructure); }
	void OnStructureRemovedFromShip(APrimalStructure * OldStructure) { NativeCall<void, APrimalStructure *>(this, "APrimalRaft.OnStructureRemovedFromShip", OldStructure); }
	void OnUpdatedStationGroupInfos() { NativeCall<void>(this, "APrimalRaft.OnUpdatedStationGroupInfos"); }
	UPrimitiveComponent * OverrideBasedProjectileBoundsComponent(UPrimitiveComponent * BasedOnComponent) { return NativeCall<UPrimitiveComponent *, UPrimitiveComponent *>(this, "APrimalRaft.OverrideBasedProjectileBoundsComponent", BasedOnComponent); }
	int OverrideBasedProjectileOutOfBounds(UPrimitiveComponent * ProjectileUpdatedComponent) { return NativeCall<int, UPrimitiveComponent *>(this, "APrimalRaft.OverrideBasedProjectileOutOfBounds", ProjectileUpdatedComponent); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalRaft.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalRaft.PostInitializeComponents"); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalRaft.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool checkedBox, unsigned int ExtraID1, unsigned int ExtraID2) { NativeCall<void, AShooterPlayerController *, FString *, bool, unsigned int, unsigned int>(this, "APrimalRaft.ProcessEditText", ForPC, TextToUse, checkedBox, ExtraID1, ExtraID2); }
	bool RaftStructurePreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalRaft.RaftStructurePreventCharacterBasing", OtherActor, BasedOnComponent); }
	void RefreshLongRangeStasis() { NativeCall<void>(this, "APrimalRaft.RefreshLongRangeStasis"); }
	void RemoveForceToBeApplied(FName ForceName) { NativeCall<void, FName>(this, "APrimalRaft.RemoveForceToBeApplied", ForceName); }
	void RemoveTameUnitCost() { NativeCall<void>(this, "APrimalRaft.RemoveTameUnitCost"); }
	void RemoveTorqueToBeApplied(FName ForceName) { NativeCall<void, FName>(this, "APrimalRaft.RemoveTorqueToBeApplied", ForceName); }
	void ResetSailingInputs() { NativeCall<void>(this, "APrimalRaft.ResetSailingInputs"); }
	void ServerPrepareForSeamlessTravel_Implementation() { NativeCall<void>(this, "APrimalRaft.ServerPrepareForSeamlessTravel_Implementation"); }
	void SetAimLocation(FVector AimLocation) { NativeCall<void, FVector>(this, "APrimalRaft.SetAimLocation", AimLocation); }
	void SetAutoStationGrouping(bool NewValue) { NativeCall<void, bool>(this, "APrimalRaft.SetAutoStationGrouping", NewValue); }
	void SetCharacterStatusTameable(bool bSetTameable, bool bCreateInventory, bool keepInventoryForWakingTame) { NativeCall<void, bool, bool, bool>(this, "APrimalRaft.SetCharacterStatusTameable", bSetTameable, bCreateInventory, keepInventoryForWakingTame); }
	void SetCurrentManualFireLocationForSeat(APrimalStructureSeating * seatToCheck, FVector * location) { NativeCall<void, APrimalStructureSeating *, FVector *>(this, "APrimalRaft.SetCurrentManualFireLocationForSeat", seatToCheck, location); }
	void SetDeath(bool bForceRagdoll) { NativeCall<void, bool>(this, "APrimalRaft.SetDeath", bForceRagdoll); }
	bool SetOrderForGroup(ECaptainOrder::Type CaptainOrder, int GroupIndex, bool bUpdateGroupInfos) { return NativeCall<bool, ECaptainOrder::Type, int, bool>(this, "APrimalRaft.SetOrderForGroup", CaptainOrder, GroupIndex, bUpdateGroupInfos); }
	void SetOrderForGroups(ECaptainOrder::Type CaptainOrder, TArray<int> * GroupsIndex) { NativeCall<void, ECaptainOrder::Type, TArray<int> *>(this, "APrimalRaft.SetOrderForGroups", CaptainOrder, GroupsIndex); }
	void SetShipDriver(AShooterCharacter * NewDriver) { NativeCall<void, AShooterCharacter *>(this, "APrimalRaft.SetShipDriver", NewDriver); }
	void SetShipReleasedState(bool bIsReleased, APlayerController * ForPC) { NativeCall<void, bool, APlayerController *>(this, "APrimalRaft.SetShipReleasedState", bIsReleased, ForPC); }
	void SetShipWetDockReleasedState(bool bIsReleased) { NativeCall<void, bool>(this, "APrimalRaft.SetShipWetDockReleasedState", bIsReleased); }
	void SetSteeringInput(float Val) { NativeCall<void, float>(this, "APrimalRaft.SetSteeringInput", Val); }
	void SetThrottleInput(float Val) { NativeCall<void, float>(this, "APrimalRaft.SetThrottleInput", Val); }
	void SetThrottleRatio(float NewRatio, bool bForceSetNow) { NativeCall<void, float, bool>(this, "APrimalRaft.SetThrottleRatio", NewRatio, bForceSetNow); }
	void SetTurningSailsInput(float Val) { NativeCall<void, float>(this, "APrimalRaft.SetTurningSailsInput", Val); }
	void ShipRow() { NativeCall<void>(this, "APrimalRaft.ShipRow"); }
	void SimulatePhysics(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalRaft.SimulatePhysics", DeltaSeconds); }
	void Stasis() { NativeCall<void>(this, "APrimalRaft.Stasis"); }
	void StopActivateAllHighlights() { NativeCall<void>(this, "APrimalRaft.StopActivateAllHighlights"); }
	void SyncRowingVarsToNPCs() { NativeCall<void>(this, "APrimalRaft.SyncRowingVarsToNPCs"); }
	float TakeDamage(float DamageAmount, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>(this, "APrimalRaft.TakeDamage", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void TeleportSucceeded(bool bIsATest, bool bSimpleTeleport) { NativeCall<void, bool, bool>(this, "APrimalRaft.TeleportSucceeded", bIsATest, bSimpleTeleport); }
	void TempDisableForcedVelocityDirection() { NativeCall<void>(this, "APrimalRaft.TempDisableForcedVelocityDirection"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalRaft.Tick", DeltaSeconds); }
	void TickCriticalShipStructures(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalRaft.TickCriticalShipStructures", DeltaSeconds); }
	void TickRowing() { NativeCall<void>(this, "APrimalRaft.TickRowing"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalRaft.TryMultiUse", ForPC, UseIndex); }
	void UnPossessed() { NativeCall<void>(this, "APrimalRaft.UnPossessed"); }
	void UnseatAllNPCs(bool bIfCannotUse) { NativeCall<void, bool>(this, "APrimalRaft.UnseatAllNPCs", bIfCannotUse); }
	void Unstasis() { NativeCall<void>(this, "APrimalRaft.Unstasis"); }
	void UpdateCaptainSkillSailMultipliers() { NativeCall<void>(this, "APrimalRaft.UpdateCaptainSkillSailMultipliers"); }
	void UpdatePhysicsBase() { NativeCall<void>(this, "APrimalRaft.UpdatePhysicsBase"); }
	void UpdateRaftRelevant() { NativeCall<void>(this, "APrimalRaft.UpdateRaftRelevant"); }
	void UpdateRowingVars() { NativeCall<void>(this, "APrimalRaft.UpdateRowingVars"); }
	void UpdateSailingVars() { NativeCall<void>(this, "APrimalRaft.UpdateSailingVars"); }
	void UpdateShouldTickRowing() { NativeCall<void>(this, "APrimalRaft.UpdateShouldTickRowing"); }
	void UpdateTameUnitCost() { NativeCall<void>(this, "APrimalRaft.UpdateTameUnitCost"); }
	void UpdateTickEnabledForGroup(ECaptainOrder::Type CaptainOrder, int GroupIndex) { NativeCall<void, ECaptainOrder::Type, int>(this, "APrimalRaft.UpdateTickEnabledForGroup", CaptainOrder, GroupIndex); }
	void UpdatedBasedPawns() { NativeCall<void>(this, "APrimalRaft.UpdatedBasedPawns"); }
	void VesselDynamicsOnHit(AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, FHitResult * Hit) { NativeCall<void, AActor *, UPrimitiveComponent *, FVector, FHitResult *>(this, "APrimalRaft.VesselDynamicsOnHit", OtherActor, OtherComp, NormalImpulse, Hit); }
	bool WantsLongRangeStasis() { return NativeCall<bool>(this, "APrimalRaft.WantsLongRangeStasis"); }
	bool WantsVesselPhysics() { return NativeCall<bool>(this, "APrimalRaft.WantsVesselPhysics"); }
	bool BPAllowMovementSound() { return NativeCall<bool>(this, "APrimalRaft.BPAllowMovementSound"); }
	void BPSetAimLocation(FVector AimLocation) { NativeCall<void, FVector>(this, "APrimalRaft.BPSetAimLocation", AimLocation); }
	bool BPSetThrottleInput(float Val) { return NativeCall<bool, float>(this, "APrimalRaft.BPSetThrottleInput", Val); }
	void BPSimulatePhysics(float DeltaTime) { NativeCall<void, float>(this, "APrimalRaft.BPSimulatePhysics", DeltaTime); }
	void BPTick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalRaft.BPTick", DeltaSeconds); }
	void BPVesselDynamicsOnHit(AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, FHitResult * Hit) { NativeCall<void, AActor *, UPrimitiveComponent *, FVector, FHitResult *>(this, "APrimalRaft.BPVesselDynamicsOnHit", OtherActor, OtherComp, NormalImpulse, Hit); }
	void BP_AdjustRowImpulse(int FromRowingSeatIndex, int TotalNumActiveRowers, int CurrentActiveRowerNum, FVector * Location, FVector * Impulse) { NativeCall<void, int, int, int, FVector *, FVector *>(this, "APrimalRaft.BP_AdjustRowImpulse", FromRowingSeatIndex, TotalNumActiveRowers, CurrentActiveRowerNum, Location, Impulse); }
	void BP_OnShipRow() { NativeCall<void>(this, "APrimalRaft.BP_OnShipRow"); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalRaft.GetPrivateStaticClass", Package); }
	void Multi_OnShipRow() { NativeCall<void>(this, "APrimalRaft.Multi_OnShipRow"); }
	void NetClientInterpolateTo(FVector NewLocation, FRotator NewRotation) { NativeCall<void, FVector, FRotator>(this, "APrimalRaft.NetClientInterpolateTo", NewLocation, NewRotation); }
	void NetSetGroupsStructuresCaptainOrder(ECaptainOrder::Type CaptainOrder, int GroupIndex) { NativeCall<void, ECaptainOrder::Type, int>(this, "APrimalRaft.NetSetGroupsStructuresCaptainOrder", CaptainOrder, GroupIndex); }
	static void StaticRegisterNativesAPrimalRaft() { NativeCall<void>(nullptr, "APrimalRaft.StaticRegisterNativesAPrimalRaft"); }
};

struct APrimalStructureSail
{
	TArray<USceneComponent *> Sail_CanvasRootComponentField() { return *GetNativePointerField<TArray<USceneComponent *>*>(this, "APrimalStructureSail.Sail_CanvasRootComponent"); }
	TArray<FVector2D>& Sail_StartEndPercentOfThrottlePerSailField() { return *GetNativePointerField<TArray<FVector2D>*>(this, "APrimalStructureSail.Sail_StartEndPercentOfThrottlePerSail"); }
	TArray<FVector>& Sail_CanvasStartScaleField() { return *GetNativePointerField<TArray<FVector>*>(this, "APrimalStructureSail.Sail_CanvasStartScale"); }
	float& Sail_CanvasHealthField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_CanvasHealth"); }
	float& Sail_CanvasMaxHealthField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_CanvasMaxHealth"); }
	float& Sail_CurrentOpenRatioField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_CurrentOpenRatio"); }
	float& Sail_UnMannedThrottleRatioField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_UnMannedThrottleRatio"); }
	float& SailUnitsField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.SailUnits"); }
	float& Sail_OpenSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_OpenSpeed"); }
	float& Sail_OpenSpeed_MultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_OpenSpeed_Multiplier"); }
	float& Sail_ClientOpenSpeedMultField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_ClientOpenSpeedMult"); }
	float& Sail_InterpStopThresholdField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_InterpStopThreshold"); }
	float& Sail_MaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_MaxVelocity"); }
	float& Sail_AdditionalMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_AdditionalMaxVelocity"); }
	float& Sail_ExtraAdditionalMaxVelocity_MultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_ExtraAdditionalMaxVelocity_Multiplier"); }
	float& Sail_SteeringForce_AtVelocityMax_MultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_SteeringForce_AtVelocityMax_Multiplier"); }
	float& Sail_ThrottleForce_MultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_ThrottleForce_Multiplier"); }
	float& Sail_MaxMovementWeight_MultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_MaxMovementWeight_Multiplier"); }
	float& Sail_ThrottleForceField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_ThrottleForce"); }
	float& Sail_ThrottleForceWindMult_MinField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_ThrottleForceWindMult_Min"); }
	float& Sail_ThrottleForceWindMult_MaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_ThrottleForceWindMult_Max"); }
	float& Sail_WindMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_WindMin"); }
	float& Sail_WindMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_WindMax"); }
	float& Sail_SteeringOpenRatioPowerField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_SteeringOpenRatioPower"); }
	float& Sail_WindThrottleForceScalePowerField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_WindThrottleForceScalePower"); }
	float& WindSpeed_NonOceanVolume_DefaultField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.WindSpeed_NonOceanVolume_Default"); }
	float& Sail_MaxMovementWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_MaxMovementWeight"); }
	float& Sail_SteeringForce_AtVelocityMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_SteeringForce_AtVelocityMax"); }
	float& Sail_ClosedMinZScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_ClosedMinZScale"); }
	char& Sail_NumOfSailsField() { return *GetNativePointerField<char*>(this, "APrimalStructureSail.Sail_NumOfSails"); }
	int& SailCanvasMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureSail.SailCanvasMaterialIndex"); }
	float& MinWindEffectivenessSteeringForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.MinWindEffectivenessSteeringForceMultiplier"); }
	float& WindPercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.WindPercentage"); }
	float& EffectiveWindPctField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.EffectiveWindPct"); }
	float& MaxPossibleRotationAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.MaxPossibleRotationAngle"); }
	float& CurrentRotationAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.CurrentRotationAngle"); }
	float& MaxAcceptableAngleDiffToGatherWindField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.MaxAcceptableAngleDiffToGatherWind"); }
	float& StatMult_MaxAcceptableAngleDiffToGatherWindField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.StatMult_MaxAcceptableAngleDiffToGatherWind"); }
	float& StatMult_MaxMovementWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.StatMult_MaxMovementWeight"); }
	float& StatMult_AccelerationField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.StatMult_Acceleration"); }
	float& StatMult_TurningEffectivenessField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.StatMult_TurningEffectiveness"); }
	float& StatMult_MaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.StatMult_MaxVelocity"); }
	float& PowMultipleForWindFalloffField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.PowMultipleForWindFalloff"); }
	float& PowMultipleForSpeedFalloffFromDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.PowMultipleForSpeedFalloffFromDamage"); }
	float& MinEffectivenessFromWindCapturedField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.MinEffectivenessFromWindCaptured"); }
	float& WindLevelToBeVisiblyFullField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.WindLevelToBeVisiblyFull"); }
	float& SailRotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.SailRotationSpeed"); }
	float& Sail_UnMannedGoalAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_UnMannedGoalAngle"); }
	FRotator& WindDirectionField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureSail.WindDirection"); }
	float& SailRepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.SailRepairPercentPerInterval"); }
	float& AdditionalSailRepairPercentNextIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.AdditionalSailRepairPercentNextInterval"); }
	TArray<FCraftingResourceRequirement>& SailRepairResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "APrimalStructureSail.SailRepairResourceRequirements"); }
	FName& SailCanvasCollisionNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureSail.SailCanvasCollisionName"); }
	float& RepairSailAmountRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.RepairSailAmountRemaining"); }
	bool& IsReservedToBeMannedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSail.IsReservedToBeManned"); }
	UAnimSequence * SeatingAnimLeftField() { return *GetNativePointerField<UAnimSequence **>(this, "APrimalStructureSail.SeatingAnimLeft"); }
	UAnimSequence * SeatingAnimRightField() { return *GetNativePointerField<UAnimSequence **>(this, "APrimalStructureSail.SeatingAnimRight"); }
	bool& bHasPlayedTautSoundField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSail.bHasPlayedTautSound"); }
	TSubclassOf<UPrimalStructureSettings>& SailStructureSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "APrimalStructureSail.SailStructureSettingsClass"); }
	float& NPC_UseLocation_OffsetFromMastField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.NPC_UseLocation_OffsetFromMast"); }
	float& SailAngularDampingField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.SailAngularDamping"); }
	float& SailLinearDampingField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.SailLinearDamping"); }
	TArray<FName>& UnfurledMaterialParamNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructureSail.UnfurledMaterialParamNames"); }
	TArray<FVector2D>& UnfurledMaterialParamsOffOnPercentOpenField() { return *GetNativePointerField<TArray<FVector2D>*>(this, "APrimalStructureSail.UnfurledMaterialParamsOffOnPercentOpen"); }
	TArray<int>& SailMaterialIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "APrimalStructureSail.SailMaterialIndices"); }
	USoundBase * SailTurnSoundField() { return *GetNativePointerField<USoundBase **>(this, "APrimalStructureSail.SailTurnSound"); }
	USoundCue * SailFurlSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalStructureSail.SailFurlSound"); }
	USoundCue * SailUnfurlSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalStructureSail.SailUnfurlSound"); }
	USoundCue * SailBillowSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalStructureSail.SailBillowSound"); }
	USoundCue * SailBillowWithWindSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalStructureSail.SailBillowWithWindSound"); }
	USoundCue * SailTautSoundField() { return *GetNativePointerField<USoundCue **>(this, "APrimalStructureSail.SailTautSound"); }
	bool& bFlushSkeletonField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSail.bFlushSkeleton"); }
	TArray<float>& UnfurlSoundOpenPercentTriggersField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalStructureSail.UnfurlSoundOpenPercentTriggers"); }
	TArray<bool>& HasTriggeredUnfurlAtThresholdIndexField() { return *GetNativePointerField<TArray<bool>*>(this, "APrimalStructureSail.HasTriggeredUnfurlAtThresholdIndex"); }
	float& WindPercentToTriggerTautSFXField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.WindPercentToTriggerTautSFX"); }
	float& SailOpenPercentToTriggerTautSFXField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.SailOpenPercentToTriggerTautSFX"); }
	float& SailOpenPercentToAllowBillowSFXField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.SailOpenPercentToAllowBillowSFX"); }
	float& WindPercentToCutOffBillowSFXField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.WindPercentToCutOffBillowSFX"); }
	UAudioComponent * SailTurnSoundComponentField() { return *GetNativePointerField<UAudioComponent **>(this, "APrimalStructureSail.SailTurnSoundComponent"); }
	UAudioComponent * SailBillowSoundComponentField() { return *GetNativePointerField<UAudioComponent **>(this, "APrimalStructureSail.SailBillowSoundComponent"); }
	UAudioComponent * SailFullWindBillowSoundComponentField() { return *GetNativePointerField<UAudioComponent **>(this, "APrimalStructureSail.SailFullWindBillowSoundComponent"); }
	UAudioComponent * SailFurlUnfurlSoundComponentField() { return *GetNativePointerField<UAudioComponent **>(this, "APrimalStructureSail.SailFurlUnfurlSoundComponent"); }
	float& Sail_PreviousCanvasHealthField() { return *GetNativePointerField<float*>(this, "APrimalStructureSail.Sail_PreviousCanvasHealth"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bIsSailRepairing() { return { this, "APrimalStructureSail.bIsSailRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bReallyCanUseShipThrottleUnmanned() { return { this, "APrimalStructureSail.bReallyCanUseShipThrottleUnmanned" }; }
	BitFieldValue<bool, unsigned __int32> bUpdateSailsVisualsByPercentage() { return { this, "APrimalStructureSail.bUpdateSailsVisualsByPercentage" }; }
	BitFieldValue<bool, unsigned __int32> bFirstTick() { return { this, "APrimalStructureSail.bFirstTick" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreWindEffectiveness() { return { this, "APrimalStructureSail.bIgnoreWindEffectiveness" }; }
	BitFieldValue<bool, unsigned __int32> bSpawnWithFullHealth() { return { this, "APrimalStructureSail.bSpawnWithFullHealth" }; }
	BitFieldValue<bool, unsigned __int32> bPutSailControlsInRootMultiUse() { return { this, "APrimalStructureSail.bPutSailControlsInRootMultiUse" }; }
	BitFieldValue<bool, unsigned __int32> bHideLadderControls() { return { this, "APrimalStructureSail.bHideLadderControls" }; }
	BitFieldValue<bool, unsigned __int32> bUseConstantSailInterpolation() { return { this, "APrimalStructureSail.bUseConstantSailInterpolation" }; }
	BitFieldValue<bool, unsigned __int32> bUseSailSounds() { return { this, "APrimalStructureSail.bUseSailSounds" }; }
	BitFieldValue<bool, unsigned __int32> bRefreshedSeatLocations() { return { this, "APrimalStructureSail.bRefreshedSeatLocations" }; }
	BitFieldValue<bool, unsigned __int32> bUsesBillowMaterialParam() { return { this, "APrimalStructureSail.bUsesBillowMaterialParam" }; }
	BitFieldValue<bool, unsigned __int32> bIsManned() { return { this, "APrimalStructureSail.bIsManned" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructureSail.GetPrivateStaticClass"); }
	bool AddRepairPercentForNextInterval(float Multiplier) { return NativeCall<bool, float>(this, "APrimalStructureSail.AddRepairPercentForNextInterval", Multiplier); }
	void BPGetInfoFromConsumedItemForPlacedStructure_Implementation(UPrimalItem * ItemToConsumed) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureSail.BPGetInfoFromConsumedItemForPlacedStructure_Implementation", ItemToConsumed); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureSail.BeginPlay"); }
	int CanPlaceCriticalShipStructure(APrimalRaft * OnShip) { return NativeCall<int, APrimalRaft *>(this, "APrimalStructureSail.CanPlaceCriticalShipStructure", OnShip); }
	bool CanSailBeRepaired(AShooterPlayerController * ByPC, bool bCurrentlyRepairing) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "APrimalStructureSail.CanSailBeRepaired", ByPC, bCurrentlyRepairing); }
	bool CanUseShipThrottle() { return NativeCall<bool>(this, "APrimalStructureSail.CanUseShipThrottle"); }
	void ClearReservedSeat() { NativeCall<void>(this, "APrimalStructureSail.ClearReservedSeat"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureSail.ClientMultiUse", ForPC, UseIndex); }
	void ConsumeSailRepairRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent, UPrimalInventoryComponent * additionalInventoryComp) { NativeCall<void, UPrimalInventoryComponent *, float, UPrimalInventoryComponent *>(this, "APrimalStructureSail.ConsumeSailRepairRequirementsPercent", invComp, Percent, additionalInventoryComp); }
	void Control(APrimalCharacter * ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, APrimalCharacter *, int, bool>(this, "APrimalStructureSail.Control", ShooterCharacter, SeatNumber, bLockedToSeat); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureSail.DrawHUD", HUD); }
	void DrawPlacementHUD_Implementation(AHUD * HUD) { NativeCall<void, AHUD *>(this, "APrimalStructureSail.DrawPlacementHUD_Implementation", HUD); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureSail.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetSailThrottleWindMult() { return NativeCall<float>(this, "APrimalStructureSail.GetSailThrottleWindMult"); }
	bool IsManned() { return NativeCall<bool>(this, "APrimalStructureSail.IsManned"); }
	void ModifyClientSideMoveToLocation(FVector * MoveToLoc) { NativeCall<void, FVector *>(this, "APrimalStructureSail.ModifyClientSideMoveToLocation", MoveToLoc); }
	bool ModifyMoveToOrderedActorsArray(TArray<UPrimitiveComponent *> * MoveToArray, APrimalCharacter * FromPlayer) { return NativeCall<bool, TArray<UPrimitiveComponent *> *, APrimalCharacter *>(this, "APrimalStructureSail.ModifyMoveToOrderedActorsArray", MoveToArray, FromPlayer); }
	bool NPC_CanUseStructure(APrimalCharacter * ForChar) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalStructureSail.NPC_CanUseStructure", ForChar); }
	void Net_SetUnMannedGoalAngle(float newAngle) { NativeCall<void, float>(this, "APrimalStructureSail.Net_SetUnMannedGoalAngle", newAngle); }
	void Net_SetUnMannedThrottleRatio(float newRatio) { NativeCall<void, float>(this, "APrimalStructureSail.Net_SetUnMannedThrottleRatio", newRatio); }
	void OnRep_SeatedCharacter() { NativeCall<void>(this, "APrimalStructureSail.OnRep_SeatedCharacter"); }
	void OnRep_SetCanvasHealth() { NativeCall<void>(this, "APrimalStructureSail.OnRep_SetCanvasHealth"); }
	void OnStructurePlacedNotify(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { NativeCall<void, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructureSail.OnStructurePlacedNotify", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	float OverrideServerMultiUseAcceptRange() { return NativeCall<float>(this, "APrimalStructureSail.OverrideServerMultiUseAcceptRange"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSail.PostInitializeComponents"); }
	void RefreshSeatsLocations() { NativeCall<void>(this, "APrimalStructureSail.RefreshSeatsLocations"); }
	void Release(APrimalCharacter * ShooterCharacter) { NativeCall<void, APrimalCharacter *>(this, "APrimalStructureSail.Release", ShooterCharacter); }
	void RepairSailCheckTimer() { NativeCall<void>(this, "APrimalStructureSail.RepairSailCheckTimer"); }
	void ServerSetSailCanvasHealth_Implementation(float newHealth, bool fromSpawn) { NativeCall<void, float, bool>(this, "APrimalStructureSail.ServerSetSailCanvasHealth_Implementation", newHealth, fromSpawn); }
	void SetSailOpenRatio(float newRatio) { NativeCall<void, float>(this, "APrimalStructureSail.SetSailOpenRatio", newRatio); }
	void StartSailRepair() { NativeCall<void>(this, "APrimalStructureSail.StartSailRepair"); }
	float TakeDamage(float Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>(this, "APrimalStructureSail.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool TestMeetsSailRepairRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent, UPrimalInventoryComponent * additionalInvComp) { return NativeCall<bool, UPrimalInventoryComponent *, float, UPrimalInventoryComponent *>(this, "APrimalStructureSail.TestMeetsSailRepairRequirementsPercent", invComp, Percent, additionalInvComp); }
	bool TickCriticalShipStructure(float DeltaTime) { return NativeCall<bool, float>(this, "APrimalStructureSail.TickCriticalShipStructure", DeltaTime); }
	void ToggleAllLadders(bool doRetract) { NativeCall<void, bool>(this, "APrimalStructureSail.ToggleAllLadders", doRetract); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureSail.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureSail.Unstasis"); }
	void UpdateBillowSFX() { NativeCall<void>(this, "APrimalStructureSail.UpdateBillowSFX"); }
	void UpdateCanvasCollision() { NativeCall<void>(this, "APrimalStructureSail.UpdateCanvasCollision"); }
	void UpdateCapturedWindPercent() { NativeCall<void>(this, "APrimalStructureSail.UpdateCapturedWindPercent"); }
	void UpdateFurlAndUnfurlSFX(float TargetOpenRatio) { NativeCall<void, float>(this, "APrimalStructureSail.UpdateFurlAndUnfurlSFX", TargetOpenRatio); }
	void UpdateSailCollisionRotation() { NativeCall<void>(this, "APrimalStructureSail.UpdateSailCollisionRotation"); }
	void UpdateSailTautSFX() { NativeCall<void>(this, "APrimalStructureSail.UpdateSailTautSFX"); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructureSail.UpdatedHealth", bDoReplication); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "APrimalStructureSail.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesAPrimalStructureSail() { NativeCall<void>(nullptr, "APrimalStructureSail.StaticRegisterNativesAPrimalStructureSail"); }
};
