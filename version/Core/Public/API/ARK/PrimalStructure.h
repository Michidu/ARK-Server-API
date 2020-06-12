#pragma once

struct APrimalTargetableActor : AActor
{
	float& LowHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LowHealthPercentage"); }
	TSubclassOf<AActor> & DestructionActorTemplateField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalTargetableActor.DestructionActorTemplate"); }
	float& LifeSpanAfterDeathField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LifeSpanAfterDeath"); }
	USoundCue * DeathSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalTargetableActor.DeathSound"); }
	float& PassiveDamageHealthReplicationPercentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.PassiveDamageHealthReplicationPercentInterval"); }
	float& DamageNotifyTeamAggroMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroMultiplier"); }
	float& DamageNotifyTeamAggroRangeField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroRange"); }
	float& DamageNotifyTeamAggroRangeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroRangeFalloff"); }
	FVector & DestructibleMeshLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalTargetableActor.DestructibleMeshLocationOffset"); }
	FVector & DestructibleMeshScaleOverrideField() { return *GetNativePointerField<FVector*>(this, "APrimalTargetableActor.DestructibleMeshScaleOverride"); }
	FRotator & DestructibleMeshRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalTargetableActor.DestructibleMeshRotationOffset"); }
	FString & DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "APrimalTargetableActor.DescriptiveName"); }
	TSubclassOf<ADestroyedMeshActor> & DestroyedMeshActorClassField() { return *GetNativePointerField<TSubclassOf<ADestroyedMeshActor>*>(this, "APrimalTargetableActor.DestroyedMeshActorClass"); }
	float& ReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.ReplicatedHealth"); }
	float& HealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.Health"); }
	float& MaxHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.MaxHealth"); }
	float& DestructibleMeshDeathImpulseScaleField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DestructibleMeshDeathImpulseScale"); }
	TArray<FBoneDamageAdjuster> & BoneDamageAdjustersField() { return *GetNativePointerField<TArray<FBoneDamageAdjuster>*>(this, "APrimalTargetableActor.BoneDamageAdjusters"); }
	float& LastReplicatedHealthValueField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealthValue"); }
	UPrimalHarvestingComponent * MyHarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalTargetableActor.MyHarvestingComponent"); }
	TEnumAsByte<enum EShooterPhysMaterialType::Type> & TargetableDamageFXDefaultPhysMaterialField() { return *GetNativePointerField<TEnumAsByte<enum EShooterPhysMaterialType::Type>*>(this, "APrimalTargetableActor.TargetableDamageFXDefaultPhysMaterial"); }
	TSubclassOf<UPrimalStructureSettings> & StructureSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "APrimalTargetableActor.StructureSettingsClass"); }
	UPrimalStructureSettings * MyStructureSettingsCDOField() { return *GetNativePointerField<UPrimalStructureSettings**>(this, "APrimalTargetableActor.MyStructureSettingsCDO"); }
	float& LastHealthBeforeTakeDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastHealthBeforeTakeDamage"); }
	long double& NextAllowRepairTimeField() { return *GetNativePointerField<long double*>(this, "APrimalTargetableActor.NextAllowRepairTime"); }
	float& LastPreBlueprintAdjustmentActualDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastPreBlueprintAdjustmentActualDamage"); }
	float& LastReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealth"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bDestructionActorTemplateServerOnly() { return { this, "APrimalTargetableActor.bDestructionActorTemplateServerOnly" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyedMeshUseSkeletalMeshComponent() { return { this, "APrimalTargetableActor.bDestroyedMeshUseSkeletalMeshComponent" }; }
	BitFieldValue<bool, unsigned __int32> bPreventZeroDamageInstigatorSelfDamage() { return { this, "APrimalTargetableActor.bPreventZeroDamageInstigatorSelfDamage" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPDied() { return { this, "APrimalTargetableActor.bUseBPDied" }; }
	BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures() { return { this, "APrimalTargetableActor.BPOverrideDestroyedMeshTextures" }; }

	// Functions

	UObject * GetUObjectInterfaceTargetableInterface() { return NativeCall<UObject*>(this, "APrimalTargetableActor.GetUObjectInterfaceTargetableInterface"); }
	static UClass * StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalTargetableActor.StaticClass"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalTargetableActor.PostInitializeComponents"); }
	void Destroyed() { NativeCall<void>(this, "APrimalTargetableActor.Destroyed"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalTargetableActor.BeginPlay"); }
	void FellOutOfWorld(UDamageType* dmgType) { NativeCall<void, UDamageType*>(this, "APrimalTargetableActor.FellOutOfWorld", dmgType); }
	bool IsDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsDead"); }
	void AdjustDamage(float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	float TakeDamage(float Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool Die(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void PlayDyingGeneric_Implementation(float KillingDamage, FPointDamageEvent DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn*, AActor*>(this, "APrimalTargetableActor.PlayDyingGeneric_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial_Implementation(float KillingDamage, FRadialDamageEvent DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn*, AActor*>(this, "APrimalTargetableActor.PlayDyingRadial_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void GetDestructionEffectTransform(FVector* OutEffectLoc, FRotator* OutEffectRot) { NativeCall<void, FVector*, FRotator*>(this, "APrimalTargetableActor.GetDestructionEffectTransform", OutEffectLoc, OutEffectRot); }
	void PlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent*, APawn*, AActor*>(this, "APrimalTargetableActor.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectPoint_Implementation(float DamageTaken, FPointDamageEvent DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn*, AActor*>(this, "APrimalTargetableActor.PlayHitEffectPoint_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial_Implementation(float DamageTaken, FRadialDamageEvent DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn*, AActor*>(this, "APrimalTargetableActor.PlayHitEffectRadial_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffect(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath) { NativeCall<void, float, FDamageEvent*, APawn*, AActor*, bool>(this, "APrimalTargetableActor.PlayHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalTargetableActor.DrawHUD", HUD); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "APrimalTargetableActor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetMaxHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetMaxHealth"); }
	float GetLowHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetLowHealthPercentage"); }
	bool IsAlive() { return NativeCall<bool>(this, "APrimalTargetableActor.IsAlive"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalTargetableActor.GetDescriptiveName", result); }
	FString* GetShortName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalTargetableActor.GetShortName", result); }
	float GetHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealth"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealthPercentage"); }
	float SetHealth(float newHealth) { return NativeCall<float, float>(this, "APrimalTargetableActor.SetHealth", newHealth); }
	void SetMaxHealth(float newMaxHealth) { NativeCall<void, float>(this, "APrimalTargetableActor.SetMaxHealth", newMaxHealth); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "APrimalTargetableActor.IsOfTribe", ID); }
	void NetUpdatedHealth_Implementation(int NewHealth) { NativeCall<void, int>(this, "APrimalTargetableActor.NetUpdatedHealth_Implementation", NewHealth); }
	bool IsTargetableDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsTargetableDead"); }
	EShooterPhysMaterialType::Type GetTargetableDamageFXDefaultPhysMaterial() { return NativeCall<EShooterPhysMaterialType::Type>(this, "APrimalTargetableActor.GetTargetableDamageFXDefaultPhysMaterial"); }
	void Suicide() { NativeCall<void>(this, "APrimalTargetableActor.Suicide"); }
	bool NetExecCommand(FName CommandName, FNetExecParams* ExecParams) { return NativeCall<bool, FName, FNetExecParams*>(this, "APrimalTargetableActor.NetExecCommand", CommandName, ExecParams); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalTargetableActor.UpdatedHealth", bDoReplication); }
	void OnRep_ReplicatedHealth() { NativeCall<void>(this, "APrimalTargetableActor.OnRep_ReplicatedHealth"); }
	bool AllowRadialDamageWithoutVisiblityTrace() { return NativeCall<bool>(this, "APrimalTargetableActor.AllowRadialDamageWithoutVisiblityTrace"); }
	bool IsInvincible() { return NativeCall<bool>(this, "APrimalTargetableActor.IsInvincible"); }
	void HarvestingDepleted(UPrimalHarvestingComponent* fromComponent) { NativeCall<void, UPrimalHarvestingComponent*>(this, "APrimalTargetableActor.HarvestingDepleted", fromComponent); }
	static void StaticRegisterNativesAPrimalTargetableActor() { NativeCall<void>(nullptr, "APrimalTargetableActor.StaticRegisterNativesAPrimalTargetableActor"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "APrimalTargetableActor.GetPrivateStaticClass", Package); }
	void BPDied(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.BPDied", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void BPHitEffect(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath, UPrimitiveComponent* HitComponent, FVector DamageLoc, FRotator HitNormal) { NativeCall<void, float, FDamageEvent*, APawn*, AActor*, bool, UPrimitiveComponent*, FVector, FRotator>(this, "APrimalTargetableActor.BPHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent, DamageLoc, HitNormal); }
	bool BPSupressImpactEffects(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath, UPrimitiveComponent* HitComponent) { return NativeCall<bool, float, FDamageEvent*, APawn*, AActor*, bool, UPrimitiveComponent*>(this, "APrimalTargetableActor.BPSupressImpactEffects", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent); }
	void OverrideDestroyedMeshTextures(UMeshComponent* meshComp) { NativeCall<void, UMeshComponent*>(this, "APrimalTargetableActor.OverrideDestroyedMeshTextures", meshComp); }
	void PlayHitEffectGeneric(float DamageTaken, FDamageEvent DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent, APawn*, AActor*>(this, "APrimalTargetableActor.PlayHitEffectGeneric", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
};

struct APrimalStructure : APrimalTargetableActor
{
	FVector2D & OverlayTooltipPaddingField() { return *GetNativePointerField<FVector2D*>(this, "APrimalStructure.OverlayTooltipPadding"); }
	FVector2D & OverlayTooltipScaleField() { return *GetNativePointerField<FVector2D*>(this, "APrimalStructure.OverlayTooltipScale"); }
	FName & StructureTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.StructureTag"); }
	TSubclassOf<UPrimalItem> & ConsumesPrimalItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructure.ConsumesPrimalItem"); }
	float& ScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ScaleFactor"); }
	int& StructureSnapTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureSnapTypeFlags"); }
	TArray<FPrimalStructureSnapPoint> & SnapPointsField() { return *GetNativePointerField<TArray<FPrimalStructureSnapPoint>*>(this, "APrimalStructure.SnapPoints"); }
	TArray<FStructureVariant> & VariantsField() { return *GetNativePointerField<TArray<FStructureVariant>*>(this, "APrimalStructure.Variants"); }
	int& CurrentVariantField() { return *GetNativePointerField<int*>(this, "APrimalStructure.CurrentVariant"); }
	float& PlacementOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementOffsetForVerticalGround"); }
	float& PlacementInitialTracePointOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementInitialTracePointOffsetForVerticalGround"); }
	TArray<TSubclassOf<APrimalStructure>> & StructuresAllowedToBeVerticalGroundField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.StructuresAllowedToBeVerticalGround"); }
	float& TraceDistanceFromActorToWallVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.TraceDistanceFromActorToWallVerticalGround"); }
	FVector & PlacementHitLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementHitLocOffset"); }
	FVector & PlacementEncroachmentCheckOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementEncroachmentCheckOffset"); }
	FVector & PlacementEncroachmentBoxExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementEncroachmentBoxExtent"); }
	FVector & PlacementTraceScaleField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementTraceScale"); }
	FVector & SnapAlternatePlacementTraceScaleField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.SnapAlternatePlacementTraceScale"); }
	FRotator & PlacementRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PlacementRotOffset"); }
	FRotator & PlacementTraceRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PlacementTraceRotOffset"); }
	FRotator & SnappingRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.SnappingRotationOffset"); }
	float& RepairAmountRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairAmountRemaining"); }
	float& RepairCheckIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairCheckInterval"); }
	float& PlacementFloorCheckZExtentUpField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtentUp"); }
	float& RepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairPercentPerInterval"); }
	float& DecayDestructionPeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriod"); }
	TArray<TSubclassOf<APrimalStructure>> & PreventPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.PreventPlacingOnFloorClasses"); }
	TArray<TSubclassOf<APrimalStructure>> & AllowPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.AllowPlacingOnFloorClasses"); }
	TSubobjectPtr<USceneComponent> & MyRootTransformField() { return *GetNativePointerField<TSubobjectPtr<USceneComponent>*>(this, "APrimalStructure.MyRootTransform"); }
	int& TraceIgnoreStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.TraceIgnoreStructuresWithTypeFlags"); }
	int& bTraceCheckOnlyUseStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.bTraceCheckOnlyUseStructuresWithTypeFlags"); }
	FieldArray<char, 6> AllowStructureColorSetsField() { return {this, "APrimalStructure.AllowStructureColorSets"}; }
	FVector & WaterVolumeCheckPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.WaterVolumeCheckPointOffset"); }
	float& WaterPlacementMinimumWaterHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.WaterPlacementMinimumWaterHeight"); }
	float& PlacementMaxZDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZDelta"); }
	float& PlacementChooseRotationMaxRangeOverrideField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementChooseRotationMaxRangeOverride"); }
	float& PlacementMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxRange"); }
	float& MaxSnapLocRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaxSnapLocRange"); }
	float& SnapOverlapCheckRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapOverlapCheckRadius"); }
	float& MaximumFoundationSupport2DBuildDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumFoundationSupport2DBuildDistance"); }
	float& PlacementFloorCheckZExtentField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtent"); }
	float& LastHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastHealthPercentage"); }
	FRotator & TakeGroundNormalRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.TakeGroundNormalRotationOffset"); }
	float& DemolishGiveItemCraftingResourcePercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishGiveItemCraftingResourcePercentage"); }
	TSubclassOf<APrimalStructure> & AllowReplacementByStructureClassTypeField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.AllowReplacementByStructureClassType"); }
	TSubclassOf<APrimalStructure> & PreventReplacementOfStructureClassTypeField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.PreventReplacementOfStructureClassType"); }
	float& MaximumHeightAboveWorldGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightAboveWorldGround"); }
	float& MaximumHeightUnderWorldMaxKillZField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightUnderWorldMaxKillZ"); }
	FRotator & PreviewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PreviewCameraRotation"); }
	FVector & PreviewCameraPivotOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PreviewCameraPivotOffset"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDistanceScaleFactor"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraMaxZoomMultiplier"); }
	float& ReturnDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageAmount"); }
	int& StructureRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureRangeTypeFlag"); }
	int& LimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.LimitMaxStructuresInRangeTypeFlag"); }
	float& ReturnDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageImpulse"); }
	TSubclassOf<UDamageType> & ReturnDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructure.ReturnDamageType"); }
	TArray<TSubclassOf<UDamageType>> & ReturnDamageExcludeIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>>*>(this, "APrimalStructure.ReturnDamageExcludeIncomingTypes"); }
	TArray<TSubclassOf<UDamageType>> & ReturnDamageOnlyForIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>>*>(this, "APrimalStructure.ReturnDamageOnlyForIncomingTypes"); }
	int& OwningPlayerIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.OwningPlayerID"); }
	FString & OwningPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwningPlayerName"); }
	long double& LastInAllyRangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastInAllyRangeTime"); }
	long double& PickupAllowedBeforeNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.PickupAllowedBeforeNetworkTime"); }
	float& DecayDestructionPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriodMultiplier"); }
	TWeakObjectPtr<APrimalDinoCharacter> & SaddleDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalStructure.SaddleDino"); }
	TArray<APrimalDinoCharacter*> LatchedDinosField() { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructure.LatchedDinos"); }
	UMaterialInterface * PreviewMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructure.PreviewMaterial"); }
	FName & PreviewMaterialColorParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PreviewMaterialColorParamName"); }
	TArray<FVector> & PlacementTraceDirectionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "APrimalStructure.PlacementTraceDirections"); }
	TArray<APrimalStructure*> LinkedStructuresField() { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructure.LinkedStructures"); }
	TArray<unsigned int> & LinkedStructuresIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "APrimalStructure.LinkedStructuresID"); }
	TArray<APrimalStructure*> StructuresPlacedOnFloorField() { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructure.StructuresPlacedOnFloor"); }
	TArray<TSubclassOf<APrimalStructure>> & SnapToStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.SnapToStructureTypesToExclude"); }
	TArray<TSubclassOf<APrimalStructure>> & SnapFromStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.SnapFromStructureTypesToExclude"); }
	TArray<FName> & SnapToStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.SnapToStructureTagsToExclude"); }
	TArray<FName> & SnapFromStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.SnapFromStructureTagsToExclude"); }
	APrimalStructure * PlacedOnFloorStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PlacedOnFloorStructure"); }
	APrimalStructure * PrimarySnappedStructureChildField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureChild"); }
	APrimalStructure * PrimarySnappedStructureParentField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureParent"); }
	FString & OwnerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwnerName"); }
	FieldArray<__int16, 6> StructureColorsField() { return {this, "APrimalStructure.StructureColors"}; }
	APawn * AttachedToField() { return *GetNativePointerField<APawn**>(this, "APrimalStructure.AttachedTo"); }
	APrimalStructureExplosiveTransGPS * AttachedTransponderField() { return *GetNativePointerField<APrimalStructureExplosiveTransGPS**>(this, "APrimalStructure.AttachedTransponder"); }
	unsigned int& StructureIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.StructureID"); }
	unsigned int& AttachedToDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.AttachedToDinoID1"); }
	TArray<TSubclassOf<APrimalStructure>> & OnlyAllowStructureClassesToAttachField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.OnlyAllowStructureClassesToAttach"); }
	TArray<TSubclassOf<APrimalStructure>> & OnlyAllowStructureClassesFromAttachField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.OnlyAllowStructureClassesFromAttach"); }
	unsigned int& TaggedIndexField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndex"); }
	unsigned int& TaggedIndexTwoField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndexTwo"); }
	unsigned int& ProcessTreeTagField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.ProcessTreeTag"); }
	long double& LastStructureStasisTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastStructureStasisTime"); }
	long double& LastColorizationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastColorizationTime"); }
	UMaterialInterface * StructureIconMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructure.StructureIconMaterial"); }
	FVector & AdvancedRotationPlacementOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.AdvancedRotationPlacementOffset"); }
	TSubclassOf<APrimalEmitterSpawnable> & SpawnEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructure.SpawnEmitter"); }
	FVector & SpawnEmitterLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.SpawnEmitterLocationOffset"); }
	FRotator & SpawnEmitterRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.SpawnEmitterRotationOffset"); }
	TSubclassOf<UPrimalItem> & PickupGivesItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructure.PickupGivesItem"); }
	float& ExcludeInStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ExcludeInStructuresRadius"); }
	TArray<TSubclassOf<APrimalStructure>> & ExcludeInStructuresRadiusClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.ExcludeInStructuresRadiusClasses"); }
	float& LastFadeOpacityField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastFadeOpacity"); }
	bool& bClientAddedToStructuresArrayField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bClientAddedToStructuresArray"); }
	long double& LastFailedPinTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastFailedPinTime"); }
	TWeakObjectPtr<UMeshComponent> & PrimaryMeshComponentField() { return *GetNativePointerField<TWeakObjectPtr<UMeshComponent>*>(this, "APrimalStructure.PrimaryMeshComponent"); }
	UStructurePaintingComponent * PaintingComponentField() { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructure.PaintingComponent"); }
	TArray<FString> & PreventBuildStructureReasonStringOverridesField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalStructure.PreventBuildStructureReasonStringOverrides"); }
	FVector & FloatingHudLocTextOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.FloatingHudLocTextOffset"); }
	float& LastBumpedDamageTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastBumpedDamageTime"); }
	int& ForceLimitStructuresInRangeField() { return *GetNativePointerField<int*>(this, "APrimalStructure.ForceLimitStructuresInRange"); }
	int& PlacementMaterialForwardDirIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructure.PlacementMaterialForwardDirIndex"); }
	float& ForcePreventPlacingInOfflineRaidStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ForcePreventPlacingInOfflineRaidStructuresRadius"); }
	FName & AttachToStaticMeshSocketNameBaseField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.AttachToStaticMeshSocketNameBase"); }
	TSubclassOf<UPrimalHarvestingComponent> & StructureHarvestingComponentField() { return *GetNativePointerField<TSubclassOf<UPrimalHarvestingComponent>*>(this, "APrimalStructure.StructureHarvestingComponent"); }
	UPrimalHarvestingComponent * MyStructureHarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructure.MyStructureHarvestingComponent"); }
	TSubclassOf<AActor> & ItemsUseAlternateActorClassAttachmentField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalStructure.ItemsUseAlternateActorClassAttachment"); }
	float& UnstasisAutoDestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.UnstasisAutoDestroyAfterTime"); }
	char& TribeGroupStructureRankField() { return *GetNativePointerField<char*>(this, "APrimalStructure.TribeGroupStructureRank"); }
	char& TribeRankHUDYOffsetField() { return *GetNativePointerField<char*>(this, "APrimalStructure.TribeRankHUDYOffset"); }
	TArray<TSubclassOf<APrimalDinoCharacter>> & PreventSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalStructure.PreventSaddleDinoClasses"); }
	TArray<TSubclassOf<APrimalDinoCharacter>> & AllowSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalStructure.AllowSaddleDinoClasses"); }
	FName & PlaceOnWallUseStaticMeshTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PlaceOnWallUseStaticMeshTag"); }
	TSubclassOf<APrimalStructure> & SnapStructureClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.SnapStructureClass"); }
	float& DemolishActivationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishActivationTime"); }
	FVector & GroundEncroachmentCheckLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.GroundEncroachmentCheckLocationOffset"); }
	int& StructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureMinAllowedVersion"); }
	int& SavedStructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.SavedStructureMinAllowedVersion"); }
	float& OverrideEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverrideEnemyFoundationPreventionRadius"); }
	float& ExpandEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ExpandEnemyFoundationPreventionRadius"); }
	int& BedIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.BedID"); }
	TArray<TSubclassOf<APrimalStructure>> & ForceAllowWallAttachmentClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.ForceAllowWallAttachmentClasses"); }
	float& LimitMaxStructuresInRangeRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LimitMaxStructuresInRangeRadius"); }
	TArray<TSubclassOf<APrimalStructure>> & FastDecayLinkedStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "APrimalStructure.FastDecayLinkedStructureClasses"); }
	float& PlacementMaxZAbovePlayerHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZAbovePlayerHeight"); }
	TArray<USceneComponent*> OverrideTargetComponentsField() { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructure.OverrideTargetComponents"); }
	float& OverrideApproachRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverrideApproachRadius"); }
	AMissionType * OwnerMissionField() { return *GetNativePointerField<AMissionType**>(this, "APrimalStructure.OwnerMission"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bIsFlippable() { return { this, "APrimalStructure.bIsFlippable" }; }
	BitFieldValue<bool, unsigned __int32> bIsFlipped() { return { this, "APrimalStructure.bIsFlipped" }; }
	BitFieldValue<bool, unsigned __int32> bShowInPlaceableList() { return { this, "APrimalStructure.bShowInPlaceableList" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "APrimalStructure.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedMaterials() { return { this, "APrimalStructure.bInitializedMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowWallAttachments() { return { this, "APrimalStructure.bForceAllowWallAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPRefreshedStructureColors() { return { this, "APrimalStructure.bUseBPRefreshedStructureColors" }; }
	BitFieldValue<bool, unsigned __int32> bIsBed() { return { this, "APrimalStructure.bIsBed" }; }
	BitFieldValue<bool, unsigned __int32> bClientAddPlacedOnFloorStructures() { return { this, "APrimalStructure.bClientAddPlacedOnFloorStructures" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis() { return { this, "APrimalStructure.bUseBPPreventStasis" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnStasis() { return { this, "APrimalStructure.bDestroyOnStasis" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerBPStasis() { return { this, "APrimalStructure.bTriggerBPStasis" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGame() { return { this, "APrimalStructure.bUseBPPostLoadedFromSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementUsesWeaponClipAmmo() { return { this, "APrimalStructure.bPlacementUsesWeaponClipAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished() { return { this, "APrimalStructure.bIgnoreDyingWhenDemolished" }; }
	BitFieldValue<bool, unsigned __int32> bAbsoluteTakeAnythingAsGround() { return { this, "APrimalStructure.bAbsoluteTakeAnythingAsGround" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePlacementOnDynamicsFoliageAndDoors() { return { this, "APrimalStructure.bDisablePlacementOnDynamicsFoliageAndDoors" }; }
	BitFieldValue<bool, unsigned __int32> bSeatedDisableCollisionCheck() { return { this, "APrimalStructure.bSeatedDisableCollisionCheck" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsAllowedToBuildEx() { return { this, "APrimalStructure.bUseBPIsAllowedToBuildEx" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPHandleStructureEnabled() { return { this, "APrimalStructure.bUseBPHandleStructureEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bForcePlacingOnVerticalGround() { return { this, "APrimalStructure.bForcePlacingOnVerticalGround" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementShouldNotBeHorizontal() { return { this, "APrimalStructure.bPlacementShouldNotBeHorizontal" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresGroundedPlacement() { return { this, "APrimalStructure.bRequiresGroundedPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructuresPvPOnly() { return { this, "APrimalStructure.bAllowPlacingOnOtherTeamStructuresPvPOnly" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseSkeletalMeshComponent() { return { this, "APrimalStructure.bForceUseSkeletalMeshComponent" }; }
	BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation() { return { this, "APrimalStructure.UseBPOverrideTargetLocation" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance() { return { this, "APrimalStructure.bOverrideFoundationSupportDistance" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisableFootSound() { return { this, "APrimalStructure.bForceDisableFootSound" }; }
	BitFieldValue<bool, unsigned __int32> bTraceThruEncroachmentPoints() { return { this, "APrimalStructure.bTraceThruEncroachmentPoints" }; }
	BitFieldValue<bool, unsigned __int32> bDidSpawnEffects() { return { this, "APrimalStructure.bDidSpawnEffects" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoPlacementDistanceIncrease() { return { this, "APrimalStructure.bPreventDinoPlacementDistanceIncrease" }; }
	BitFieldValue<bool, unsigned __int32> bPendingRemoval() { return { this, "APrimalStructure.bPendingRemoval" }; }
	BitFieldValue<bool, unsigned __int32> bDontOverrideCollisionProfile() { return { this, "APrimalStructure.bDontOverrideCollisionProfile" }; }
	BitFieldValue<bool, unsigned __int32> bUseAdvancedRotationPlacement() { return { this, "APrimalStructure.bUseAdvancedRotationPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bIsPlacingPlayerStructure() { return { this, "APrimalStructure.bIsPlacingPlayerStructure" }; }
	BitFieldValue<bool, unsigned __int32> bRootFoundationLimitBuildArea() { return { this, "APrimalStructure.bRootFoundationLimitBuildArea" }; }
	BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets() { return { this, "APrimalStructure.bCenterOffscreenFloatingHUDWidgets" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPOnVariantSwitch() { return { this, "APrimalStructure.bUseBPOnVariantSwitch" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresPlacementOnStructureFloors() { return { this, "APrimalStructure.bRequiresPlacementOnStructureFloors" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePlacementOnStructureFloors() { return { this, "APrimalStructure.bDisablePlacementOnStructureFloors" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyStructureIfFloorDestroyed() { return { this, "APrimalStructure.bDestroyStructureIfFloorDestroyed" }; }
	BitFieldValue<bool, unsigned __int32> bUsePlacementCollisionCheck() { return { this, "APrimalStructure.bUsePlacementCollisionCheck" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSnapping() { return { this, "APrimalStructure.bRequiresSnapping" }; }
	BitFieldValue<bool, unsigned __int32> bSnappingRequiresNearbyFoundation() { return { this, "APrimalStructure.bSnappingRequiresNearbyFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSnapRotation() { return { this, "APrimalStructure.bAllowSnapRotation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowSnapRotationForStructure() { return { this, "APrimalStructure.bUseBPAllowSnapRotationForStructure" }; }
	BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation() { return { this, "APrimalStructure.bPlacementChooseRotation" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresPlacingOnWall() { return { this, "APrimalStructure.bRequiresPlacingOnWall" }; }
	BitFieldValue<bool, unsigned __int32> bSnapRequiresPlacementOnGround() { return { this, "APrimalStructure.bSnapRequiresPlacementOnGround" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSnapOntoSameLocation() { return { this, "APrimalStructure.bAllowSnapOntoSameLocation" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyFoundationIfSnappedToFoundation() { return { this, "APrimalStructure.bOnlyFoundationIfSnappedToFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bFoundationRequiresGroundTrace() { return { this, "APrimalStructure.bFoundationRequiresGroundTrace" }; }
	BitFieldValue<bool, unsigned __int32> bPlacingOnGroundRequiresNoStructure() { return { this, "APrimalStructure.bPlacingOnGroundRequiresNoStructure" }; }
	BitFieldValue<bool, unsigned __int32> bTakeGroundNormal() { return { this, "APrimalStructure.bTakeGroundNormal" }; }
	BitFieldValue<bool, unsigned __int32> bTakeGroundNormalDirectly() { return { this, "APrimalStructure.bTakeGroundNormalDirectly" }; }
	BitFieldValue<bool, unsigned __int32> bFinalPlacementDontAdjustForMaxRange() { return { this, "APrimalStructure.bFinalPlacementDontAdjustForMaxRange" }; }
	BitFieldValue<bool, unsigned __int32> bAllowStructureColors() { return { this, "APrimalStructure.bAllowStructureColors" }; }
	BitFieldValue<bool, unsigned __int32> bDebug() { return { this, "APrimalStructure.bDebug" }; }
	BitFieldValue<bool, unsigned __int32> bUseFadeInEffect() { return { this, "APrimalStructure.bUseFadeInEffect" }; }
	BitFieldValue<bool, unsigned __int32> bUsingStructureColors() { return { this, "APrimalStructure.bUsingStructureColors" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDefaultVariant() { return { this, "APrimalStructure.bPreventDefaultVariant" }; }
	BitFieldValue<bool, unsigned __int32> bIsSPlusStructure() { return { this, "APrimalStructure.bIsSPlusStructure" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement() { return { this, "APrimalStructure.bAllowPickingUpStructureAfterPlacement" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePickingUpStructureAfterPlacementOnTryMultiUse() { return { this, "APrimalStructure.bDisablePickingUpStructureAfterPlacementOnTryMultiUse" }; }
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
	BitFieldValue<bool, unsigned __int32> bAllowTargetingByCorruptDinos() { return { this, "APrimalStructure.bAllowTargetingByCorruptDinos" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPTreatAsFoundationForSnappedStructure() { return { this, "APrimalStructure.bUseBPTreatAsFoundationForSnappedStructure" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnStructurePickup() { return { this, "APrimalStructure.bUseBPOnStructurePickup" }; }
	BitFieldValue<bool, unsigned __int32> bPerInstanceSnapPoints() { return { this, "APrimalStructure.bPerInstanceSnapPoints" }; }
	BitFieldValue<bool, unsigned __int32> bSnapToWaterSurface() { return { this, "APrimalStructure.bSnapToWaterSurface" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnStasisUnlessPrevented() { return { this, "APrimalStructure.bDestroyOnStasisUnlessPrevented" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAttachToSaddle() { return { this, "APrimalStructure.bPreventAttachToSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bForcePersonalStructureOwnership() { return { this, "APrimalStructure.bForcePersonalStructureOwnership" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideAllowStructureAccess() { return { this, "APrimalStructure.bBPOverrideAllowStructureAccess" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverideDemolish() { return { this, "APrimalStructure.bBPOverideDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnDemolish() { return { this, "APrimalStructure.bUseBPOnDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWith() { return { this, "APrimalStructure.bBPOverrideAllowSnappingWith" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWithButAlsoCallSuper() { return { this, "APrimalStructure.bBPOverrideAllowSnappingWithButAlsoCallSuper" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnLinkedStructureDestroyed() { return { this, "APrimalStructure.bUseBPOnLinkedStructureDestroyed" }; }
	BitFieldValue<bool, unsigned __int32> bUseTribeGroupStructureRank() { return { this, "APrimalStructure.bUseTribeGroupStructureRank" }; }
	BitFieldValue<bool, unsigned __int32> bForceBlockStationaryTraces() { return { this, "APrimalStructure.bForceBlockStationaryTraces" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocket() { return { this, "APrimalStructure.bAttachToStaticMeshSocket" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocketRotation() { return { this, "APrimalStructure.bAttachToStaticMeshSocketRotation" }; }
	BitFieldValue<bool, unsigned __int32> bForceGroundForFoundation() { return { this, "APrimalStructure.bForceGroundForFoundation" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedToTransform() { return { this, "APrimalStructure.bBPOverrideSnappedToTransform" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedFromTransform() { return { this, "APrimalStructure.bBPOverrideSnappedFromTransform" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverridePlacementRotation() { return { this, "APrimalStructure.bBPOverridePlacementRotation" }; }
	BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm() { return { this, "APrimalStructure.bDisableStructureOnElectricStorm" }; }
	BitFieldValue<bool, unsigned __int32> bNoCollision() { return { this, "APrimalStructure.bNoCollision" }; }
	BitFieldValue<bool, unsigned __int32> bCreatedDynamicMaterials() { return { this, "APrimalStructure.bCreatedDynamicMaterials" }; }
	BitFieldValue<bool, unsigned __int32> bIsPreviewStructure() { return { this, "APrimalStructure.bIsPreviewStructure" }; }
	BitFieldValue<bool, unsigned __int32> bStructureUseAltCollisionChannel() { return { this, "APrimalStructure.bStructureUseAltCollisionChannel" }; }
	BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy() { return { this, "APrimalStructure.bDemolishJustDestroy" }; }
	BitFieldValue<bool, unsigned __int32> bHighPriorityDemolish() { return { this, "APrimalStructure.bHighPriorityDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bDisableSnapStructure() { return { this, "APrimalStructure.bDisableSnapStructure" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis() { return { this, "APrimalStructure.bTriggerBPUnstasis" }; }
	BitFieldValue<bool, unsigned __int32> bBlueprintDrawHUD() { return { this, "APrimalStructure.bBlueprintDrawHUD" }; }
	BitFieldValue<bool, unsigned __int32> bBlueprintDrawPreviewHUD() { return { this, "APrimalStructure.bBlueprintDrawPreviewHUD" }; }
	BitFieldValue<bool, unsigned __int32> bUsesWorldSpaceMaterial() { return { this, "APrimalStructure.bUsesWorldSpaceMaterial" }; }
	BitFieldValue<bool, unsigned __int32> bForceIgnoreStationaryObjectTrace() { return { this, "APrimalStructure.bForceIgnoreStationaryObjectTrace" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowNearSupplyCrateSpawns() { return { this, "APrimalStructure.bForceAllowNearSupplyCrateSpawns" }; }
	BitFieldValue<bool, unsigned __int32> bBPPostSetStructureCollisionChannels() { return { this, "APrimalStructure.bBPPostSetStructureCollisionChannels" }; }
	BitFieldValue<bool, unsigned __int32> bPickupGiveItemRequiresAccess() { return { this, "APrimalStructure.bPickupGiveItemRequiresAccess" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowPickupGiveItem() { return { this, "APrimalStructure.bUseBPAllowPickupGiveItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAttachedChildStructures() { return { this, "APrimalStructure.bPreventAttachedChildStructures" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPreviewIfWeaponPlaced() { return { this, "APrimalStructure.bPreventPreviewIfWeaponPlaced" }; }
	BitFieldValue<bool, unsigned __int32> bStructuresInRangeTypeFlagUseAltCollisionChannel() { return { this, "APrimalStructure.bStructuresInRangeTypeFlagUseAltCollisionChannel" }; }
	BitFieldValue<bool, unsigned __int32> bIsDrawingHUDPickupTimer() { return { this, "APrimalStructure.bIsDrawingHUDPickupTimer" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructure.GetPrivateStaticClass"); }
	static UClass * StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructure.StaticClass"); }
	UObject * GetUObjectInterfaceDataListEntryInterface() { return NativeCall<UObject*>(this, "APrimalStructure.GetUObjectInterfaceDataListEntryInterface"); }
	FRotator * GetPlayerSpawnRotation(FRotator * result) { return NativeCall<FRotator*, FRotator*>(this, "APrimalStructure.GetPlayerSpawnRotation", result); }
	void SetBoundsScale(float NewScale) { NativeCall<void, float>(this, "APrimalStructure.SetBoundsScale", NewScale); }
	void SetContainerActive(bool reset) { NativeCall<void, bool>(this, "APrimalStructure.SetContainerActive", reset); }
	int GetHitPawnCollisionGroup() { return NativeCall<int>(this, "APrimalStructure.GetHitPawnCollisionGroup"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PreInitializeComponents"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructure.BeginPlay"); }
	void DestroyByMeshing() { NativeCall<void>(this, "APrimalStructure.DestroyByMeshing"); }
	void ApplyPrimalItemSettingsToStructure(UMeshComponent * meshToColorize, UPrimalItem * AssociatedPrimalItem) { NativeCall<void, UMeshComponent*, UPrimalItem*>(this, "APrimalStructure.ApplyPrimalItemSettingsToStructure", meshToColorize, AssociatedPrimalItem); }
	void SetLinkedIDs() { NativeCall<void>(this, "APrimalStructure.SetLinkedIDs"); }
	void ApplyLinkedIDs(bool bRelinkParents) { NativeCall<void, bool>(this, "APrimalStructure.ApplyLinkedIDs", bRelinkParents); }
	static APrimalStructure * GetFromID(UWorld * World, unsigned int TheStructureID) { return NativeCall<APrimalStructure*, UWorld*, unsigned int>(nullptr, "APrimalStructure.GetFromID", World, TheStructureID); }
	static APrimalStructure * BPGetFromID(UWorld * World, int TheStructureID) { return NativeCall<APrimalStructure*, UWorld*, int>(nullptr, "APrimalStructure.BPGetFromID", World, TheStructureID); }
	static int BPGetStructureID(APrimalStructure * PrimalStructure) { return NativeCall<int, APrimalStructure*>(nullptr, "APrimalStructure.BPGetStructureID", PrimalStructure); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "APrimalStructure.OnRep_AttachmentReplication"); }
	void SetDinoSaddleAttachment(APrimalDinoCharacter * myDino, FName BoneName, FVector RelLoc, FRotator RelRot, bool bMaintainWorldPosition) { NativeCall<void, APrimalDinoCharacter*, FName, FVector, FRotator, bool>(this, "APrimalStructure.SetDinoSaddleAttachment", myDino, BoneName, RelLoc, RelRot, bMaintainWorldPosition); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructure.PostSpawnInitialize"); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.LoadedFromSaveGame"); }
	void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.SetStructureCollisionChannels"); }
	void ApplyScale(bool bOnlyInitPhysics) { NativeCall<void, bool>(this, "APrimalStructure.ApplyScale", bOnlyInitPhysics); }
	void PostSpawnInitialize(FVector * SpawnLocation, FRotator * SpawnRotation, AActor * InOwner, APawn * InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay) { NativeCall<void, FVector*, FRotator*, AActor*, APawn*, bool, bool, bool, bool>(this, "APrimalStructure.PostSpawnInitialize", SpawnLocation, SpawnRotation, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay); }
	bool UseDynamicMobility() { return NativeCall<bool>(this, "APrimalStructure.UseDynamicMobility"); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructure.SetStaticMobility"); }
	bool IsLinkedToWaterOrPowerSource() { return NativeCall<bool>(this, "APrimalStructure.IsLinkedToWaterOrPowerSource"); }
	void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructure.PrepareAsPlacementPreview"); }
	bool TickPlacingStructure(APrimalStructurePlacer * PlacerActor, float DeltaTime) { return NativeCall<bool, APrimalStructurePlacer*, float>(this, "APrimalStructure.TickPlacingStructure", PlacerActor, DeltaTime); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetDebugInfoString", result); }
	bool ShouldInstance(UProperty * Property) { return NativeCall<bool, UProperty*>(this, "APrimalStructure.ShouldInstance", Property); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement) { return NativeCall<int, APlayerController*, FVector, FRotator, FPlacementData*, bool, FRotator, bool>(this, "APrimalStructure.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement); }
	static bool IsPointNearSupplyCrateSpawn(UWorld * theWorld, FVector AtPoint) { return NativeCall<bool, UWorld*, FVector>(nullptr, "APrimalStructure.IsPointNearSupplyCrateSpawn", theWorld, AtPoint); }
	TSubclassOf<APrimalStructure> * GetBedFilterClass_Implementation(TSubclassOf<APrimalStructure> * result) { return NativeCall<TSubclassOf<APrimalStructure>*, TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.GetBedFilterClass_Implementation", result); }
	FSpawnPointInfo * GetSpawnPointInfo(FSpawnPointInfo * result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructure.GetSpawnPointInfo", result); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PostInitializeComponents"); }
	bool AllowSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructure.AllowSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	void NetUpdateOriginalOwnerNameAndID_Implementation(int NewOriginalOwnerID, FString * NewOriginalOwnerName) { NativeCall<void, int, FString*>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation", NewOriginalOwnerID, NewOriginalOwnerName); }
	void LinkStructure(APrimalStructure * NewLinkedStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.LinkStructure", NewLinkedStructure); }
	void NonPlayerFinalStructurePlacement(int PlacementTargetingTeam, int PlacementOwningPlayerID, FString * PlacementOwningPlayerName, APrimalStructure * ForcePrimaryParent) { NativeCall<void, int, int, FString*, APrimalStructure*>(this, "APrimalStructure.NonPlayerFinalStructurePlacement", PlacementTargetingTeam, PlacementOwningPlayerID, PlacementOwningPlayerName, ForcePrimaryParent); }
	bool FinalStructurePlacement(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bIsFlipped) { return NativeCall<bool, APlayerController*, FVector, FRotator, FRotator, APawn*, FName, bool>(this, "APrimalStructure.FinalStructurePlacement", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bIsFlipped); }
	FVector * GetSnapPointLocation(FVector * result, int SnapPointIndex, bool bOverrideTransform, FVector OverrideLoc, FRotator OverrideRot) { return NativeCall<FVector*, FVector*, int, bool, FVector, FRotator>(this, "APrimalStructure.GetSnapPointLocation", result, SnapPointIndex, bOverrideTransform, OverrideLoc, OverrideRot); }
	bool GetSnapToLocation(FVector * AtLoc, FRotator * AtRotation, FPlacementData * OutPlacementData, APrimalStructure * *OutParentStructure, int* OutSnapToIndex, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, FVector*, FRotator*, FPlacementData*, APrimalStructure**, int*, APlayerController*, bool, int>(this, "APrimalStructure.GetSnapToLocation", AtLoc, AtRotation, OutPlacementData, OutParentStructure, OutSnapToIndex, PC, bFinalPlacement, SnapPointCycle); }
	void GetSnapToParentStructures(FVector AtLocation, FRotator AtRotation, int InitialMySnapIndex, APrimalStructure * InitialParent, TArray<APrimalStructure*> * SnapToParentStructures, APlayerController * PC) { NativeCall<void, FVector, FRotator, int, APrimalStructure*, TArray<APrimalStructure*>*, APlayerController*>(this, "APrimalStructure.GetSnapToParentStructures", AtLocation, AtRotation, InitialMySnapIndex, InitialParent, SnapToParentStructures, PC); }
	bool GetPlacingGroundLocation(AActor * *OutHitActor, FPlacementData * OutPlacementData, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle, UPrimitiveComponent * *OutComponent) { return NativeCall<bool, AActor**, FPlacementData*, APlayerController*, bool, int, UPrimitiveComponent**>(this, "APrimalStructure.GetPlacingGroundLocation", OutHitActor, OutPlacementData, PC, bFinalPlacement, SnapPointCycle, OutComponent); }
	bool ClampBuildLocation(FVector FromLocation, AActor * *OutHitActor, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, APlayerController * PC) { return NativeCall<bool, FVector, AActor**, FPlacementData*, bool, APlayerController*>(this, "APrimalStructure.ClampBuildLocation", FromLocation, OutHitActor, OutPlacementData, bDontAdjustForMaxRange, PC); }
	bool CheckNotEncroaching(FVector PlacementLocation, FRotator PlacementRotation, AActor * DinoCharacter, APrimalStructure * SnappedToParentStructure, APrimalStructure * ReplacesStructure, bool bUseAlternatePlacementTraceScale) { return NativeCall<bool, FVector, FRotator, AActor*, APrimalStructure*, APrimalStructure*, bool>(this, "APrimalStructure.CheckNotEncroaching", PlacementLocation, PlacementRotation, DinoCharacter, SnappedToParentStructure, ReplacesStructure, bUseAlternatePlacementTraceScale); }
	APrimalStructure * GetNearbyFoundation(FPlacementData * PlacementData, APlayerController * ForPC) { return NativeCall<APrimalStructure*, FPlacementData*, APlayerController*>(this, "APrimalStructure.GetNearbyFoundation", PlacementData, ForPC); }
	void NetSpawnCoreStructureDeathActor_Implementation() { NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor_Implementation"); }
	float TakeDamage(float Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, FDamageEvent*, AController*, AActor*>(this, "APrimalStructure.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool Die(float KillingDamage, FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, FDamageEvent*, AController*, AActor*>(this, "APrimalStructure.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent*, APawn*, AActor*>(this, "APrimalStructure.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void DestroyStructuresPlacedOnFloor() { NativeCall<void>(this, "APrimalStructure.DestroyStructuresPlacedOnFloor"); }
	static void ReprocessTree(TArray<APrimalStructure*> * StartingStructures, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, TArray<APrimalStructure*>*, AController*, AActor*>(nullptr, "APrimalStructure.ReprocessTree", StartingStructures, InstigatorController, DamageCauser); }
	static void FindFoundations(TArray<APrimalStructure*> * StartingStructures, TArray<APrimalStructure*> * Foundations) { NativeCall<void, TArray<APrimalStructure*>*, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.FindFoundations", StartingStructures, Foundations); }
	static void FindFoundations(APrimalStructure * StartingStructure, TArray<APrimalStructure*> * Foundations) { NativeCall<void, APrimalStructure*, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.FindFoundations", StartingStructure, Foundations); }
	static void CullAgainstFoundations(TArray<APrimalStructure*> * StartingStructures, TArray<APrimalStructure*> * Foundations) { NativeCall<void, TArray<APrimalStructure*>*, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructures, Foundations); }
	static bool CullAgainstFoundations(APrimalStructure * *StartingStructure, TArray<APrimalStructure*> * Foundations) { return NativeCall<bool, APrimalStructure**, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructure, Foundations); }
	static void FlagConnectionsLessThan(TArray<APrimalStructure*> * Structures, int Connections, TArray<APrimalStructure*> * StructuresToDestroy) { NativeCall<void, TArray<APrimalStructure*>*, int, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.FlagConnectionsLessThan", Structures, Connections, StructuresToDestroy); }
	static void FlagConnectionsLessThan(APrimalStructure * *StartingStructure, int Connections, TArray<APrimalStructure*> * StructuresToDestroy) { NativeCall<void, APrimalStructure**, int, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.FlagConnectionsLessThan", StartingStructure, Connections, StructuresToDestroy); }
	static void FlagReachable(TArray<APrimalStructure*> * Foundations) { NativeCall<void, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.FlagReachable", Foundations); }
	static void FlagReachable(APrimalStructure * StartingStructure) { NativeCall<void, APrimalStructure*>(nullptr, "APrimalStructure.FlagReachable", StartingStructure); }
	static void CleanUpTree(TArray<APrimalStructure*> * StartingStructures, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, TArray<APrimalStructure*>*, AController*, AActor*>(nullptr, "APrimalStructure.CleanUpTree", StartingStructures, InstigatorController, DamageCauser); }
	static void CleanUpTree(APrimalStructure * StartingStructure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure*, AController*, AActor*>(nullptr, "APrimalStructure.CleanUpTree", StartingStructure, InstigatorController, DamageCauser); }
	void RemoveLinkedStructure(APrimalStructure * Structure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure*, AController*, AActor*>(this, "APrimalStructure.RemoveLinkedStructure", Structure, InstigatorController, DamageCauser); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "APrimalStructure.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void OnRep_CurrentVariant() { NativeCall<void>(this, "APrimalStructure.OnRep_CurrentVariant"); }
	void OnRep_StructureColors() { NativeCall<void>(this, "APrimalStructure.OnRep_StructureColors"); }
	void RefreshStructureColors(UMeshComponent * ForceRefreshComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructure.RefreshStructureColors", ForceRefreshComponent); }
	FLinearColor * GetStructureColorForID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int, int>(this, "APrimalStructure.GetStructureColorForID", result, SetNum, ID); }
	bool Internal_IsInSnapChain(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.Internal_IsInSnapChain", theStructure); }
	void GetAllLinkedStructures(TArray<APrimalStructure*> * OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure*>*>(this, "APrimalStructure.GetAllLinkedStructures", OutLinkedStructures); }
	void BPGetAllLinkedStructures(TArray<APrimalStructure*> * OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure*>*>(this, "APrimalStructure.BPGetAllLinkedStructures", OutLinkedStructures); }
	long double GetForceDemolishTime() { return NativeCall<long double>(this, "APrimalStructure.GetForceDemolishTime"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController*, int>(this, "APrimalStructure.TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController*, int>(this, "APrimalStructure.ClientMultiUse", ForPC, UseIndex); }
	void Demolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructure.Demolish", ForPC, DamageCauser); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructure.DrawHUD", HUD); }
	bool DoAnyTribePermissionsRestrict(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.DoAnyTribePermissionsRestrict", ForPC); }
	void DrawStructureTooltip(AShooterHUD * HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD*, bool>(this, "APrimalStructure.DrawStructureTooltip", HUD, bForMultiUseSelector); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructure.ChangeActorTeam", NewTeam); }
	void NetUpdateTeamAndOwnerName_Implementation(int NewTeam, FString * NewOwnerName) { NativeCall<void, int, FString*>(this, "APrimalStructure.NetUpdateTeamAndOwnerName_Implementation", NewTeam, NewOwnerName); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetDescriptiveName", result); }
	bool AllowSnapRotationForStructure(int ThisSnapPointIndex, APrimalStructure * OtherStructure, int OtherStructureSnapPointIndex) { return NativeCall<bool, int, APrimalStructure*, int>(this, "APrimalStructure.AllowSnapRotationForStructure", ThisSnapPointIndex, OtherStructure, OtherStructureSnapPointIndex); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructure.PlacedStructure", PC); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructure.UpdatedHealth", bDoReplication); }
	void SetupDynamicMeshMaterials(UMeshComponent * meshComp) { NativeCall<void, UMeshComponent*>(this, "APrimalStructure.SetupDynamicMeshMaterials", meshComp); }
	void StartRepair() { NativeCall<void>(this, "APrimalStructure.StartRepair"); }
	void RepairCheckTimer() { NativeCall<void>(this, "APrimalStructure.RepairCheckTimer"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalStructure.EndPlay", EndPlayReason); }
	void Stasis() { NativeCall<void>(this, "APrimalStructure.Stasis"); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructure.Destroyed"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructure.Unstasis"); }
	UPrimitiveComponent * GetPrimaryHitComponent() { return NativeCall<UPrimitiveComponent*>(this, "APrimalStructure.GetPrimaryHitComponent"); }
	static void GetNearbyStructuresOfClass(UWorld * World, TSubclassOf<APrimalStructure> StructureClass, FVector * Location, float Range, TArray<APrimalStructure*> * Structures) { NativeCall<void, UWorld*, TSubclassOf<APrimalStructure>, FVector*, float, TArray<APrimalStructure*>*>(nullptr, "APrimalStructure.GetNearbyStructuresOfClass", World, StructureClass, Location, Range, Structures); }
	void ForceReplicateLinkedStructures() { NativeCall<void>(this, "APrimalStructure.ForceReplicateLinkedStructures"); }
	void ClientUpdateLinkedStructures_Implementation(TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, TArray<unsigned int>*>(this, "APrimalStructure.ClientUpdateLinkedStructures_Implementation", NewLinkedStructures); }
	bool AllowColoringBy(APlayerController * ForPC, UObject * anItem) { return NativeCall<bool, APlayerController*, UObject*>(this, "APrimalStructure.AllowColoringBy", ForPC, anItem); }
	void ServerRequestUseItemWithActor(APlayerController * ForPC, UObject * anItem, int AdditionalData) { NativeCall<void, APlayerController*, UObject*, int>(this, "APrimalStructure.ServerRequestUseItemWithActor", ForPC, anItem, AdditionalData); }
	void ApplyColorToRegions(__int16 CustomColorID, bool* ApplyToRegions) { NativeCall<void, __int16, bool*>(this, "APrimalStructure.ApplyColorToRegions", CustomColorID, ApplyToRegions); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, FVector * SrcLocation) { return NativeCall<bool, APlayerController*, AActor*, FVector*>(this, "APrimalStructure.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects_Implementation"); }
	void FadeInEffectTick() { NativeCall<void>(this, "APrimalStructure.FadeInEffectTick"); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController*, FString*, bool>(this, "APrimalStructure.ProcessEditText", ForPC, TextToUse, bCheckedBox); }
	float AddAggroOnBump(APrimalDinoCharacter * BumpedBy) { return NativeCall<float, APrimalDinoCharacter*>(this, "APrimalStructure.AddAggroOnBump", BumpedBy); }
	int GetNumStructuresInRange(FVector AtLocation, float WithinRange) { return NativeCall<int, FVector, float>(this, "APrimalStructure.GetNumStructuresInRange", AtLocation, WithinRange); }
	static void GetStructuresInRange(UWorld * theWorld, FVector AtLocation, float WithinRange, TSubclassOf<APrimalStructure> StructureClass, TArray<APrimalStructure*> * StructuresOut, bool bUseInternalOctree, APrimalStructure * IgnoreStructure) { NativeCall<void, UWorld*, FVector, float, TSubclassOf<APrimalStructure>, TArray<APrimalStructure*>*, bool, APrimalStructure*>(nullptr, "APrimalStructure.GetStructuresInRange", theWorld, AtLocation, WithinRange, StructureClass, StructuresOut, bUseInternalOctree, IgnoreStructure); }
	static int GetNumStructuresInRangeStructureTypeFlag(UWorld * theWorld, FVector AtLocation, int TypeFlag, float WithinRange, bool bCheckBPCountStructureInRange, bool bUseInternalOctree, APrimalStructure * IgnoreStructure, bool bCheckWithAltCollisionChannel) { return NativeCall<int, UWorld*, FVector, int, float, bool, bool, APrimalStructure*, bool>(nullptr, "APrimalStructure.GetNumStructuresInRangeStructureTypeFlag", theWorld, AtLocation, TypeFlag, WithinRange, bCheckBPCountStructureInRange, bUseInternalOctree, IgnoreStructure, bCheckWithAltCollisionChannel); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.AllowPickupForItem", ForPC); }
	bool CanPickupStructureFromRecentPlacement() { return NativeCall<bool>(this, "APrimalStructure.CanPickupStructureFromRecentPlacement"); }
	void DisableStructurePickup() { NativeCall<void>(this, "APrimalStructure.DisableStructurePickup"); }
	void MultiSetPickupAllowedBeforeNetworkTime_Implementation(long double NewTime) { NativeCall<void, long double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime_Implementation", NewTime); }
	bool AllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure*, APlayerController*>(this, "APrimalStructure.AllowSnappingWith", OtherStructure, ForPC); }
	bool SetVariant(int VariantIndex, bool bForceSet) { return NativeCall<bool, int, bool>(this, "APrimalStructure.SetVariant", VariantIndex, bForceSet); }
	void RefreshVariantSettings(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.RefreshVariantSettings", NewVariantIndex); }
	void MultiRefreshVariantSettings_Implementation(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.MultiRefreshVariantSettings_Implementation", NewVariantIndex); }
	FStructureVariant * GetDefaultVariant(FStructureVariant * result) { return NativeCall<FStructureVariant*, FStructureVariant*>(this, "APrimalStructure.GetDefaultVariant", result); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructure.AllowStructureAccess", ForPC); }
	static bool IsPointObstructedByWorldGeometry(UWorld * ForWorld, FVector ThePoint, bool bIgnoreTerrain, bool bOnlyCheckTerrain, bool bIgnoreFoliage, float OBSTRUCTION_CHECK_DIST) { return NativeCall<bool, UWorld*, FVector, bool, bool, bool, float>(nullptr, "APrimalStructure.IsPointObstructedByWorldGeometry", ForWorld, ThePoint, bIgnoreTerrain, bOnlyCheckTerrain, bIgnoreFoliage, OBSTRUCTION_CHECK_DIST); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalStructure.CanBePainted"); }
	UPaintingTexture * GetPaintingTexture() { return NativeCall<UPaintingTexture*>(this, "APrimalStructure.GetPaintingTexture"); }
	APrimalStructureDoor * GetLinkedDoor() { return NativeCall<APrimalStructureDoor*>(this, "APrimalStructure.GetLinkedDoor"); }
	FString * GetEntryString(FString * result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetEntryString", result); }
	UTexture2D * GetEntryIcon(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "APrimalStructure.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	UMaterialInterface * GetEntryIconMaterial(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface*, UObject*, bool>(this, "APrimalStructure.GetEntryIconMaterial", AssociatedDataObject, bIsEnabled); }
	bool CanBeBaseForCharacter(APawn * Pawn) { return NativeCall<bool, APawn*>(this, "APrimalStructure.CanBeBaseForCharacter", Pawn); }
	UObject * GetObjectW() { return NativeCall<UObject*>(this, "APrimalStructure.GetObjectW"); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetEntryDescription", result); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalStructure.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void ClearCustomColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors_Implementation"); }
	bool PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure> FloorClass) { return NativeCall<bool, TSubclassOf<APrimalStructure>>(this, "APrimalStructure.PreventPlacingOnFloorClass", FloorClass); }
	void UpdateTribeGroupStructureRank_Implementation(char NewRank) { NativeCall<void, char>(this, "APrimalStructure.UpdateTribeGroupStructureRank_Implementation", NewRank); }
	bool AllowPlacingOnSaddleParentClass(APrimalDinoCharacter * theDino, bool bForcePrevent) { return NativeCall<bool, APrimalDinoCharacter*, bool>(this, "APrimalStructure.AllowPlacingOnSaddleParentClass", theDino, bForcePrevent); }
	static APrimalStructure * GetClosestStructureToPoint(UWorld * ForWorld, FVector AtPoint, float OverlapRadius) { return NativeCall<APrimalStructure*, UWorld*, FVector, float>(nullptr, "APrimalStructure.GetClosestStructureToPoint", ForWorld, AtPoint, OverlapRadius); }
	float GetStructureDemolishTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureDemolishTime"); }
	bool IsOnlyLinkedToFastDecayStructures() { return NativeCall<bool>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructures"); }
	bool IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator> * TestedStructures) { return NativeCall<bool, TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>*>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal", TestedStructures); }
	bool CanAutoDemolish() { return NativeCall<bool>(this, "APrimalStructure.CanAutoDemolish"); }
	bool IsValidSnapPointFrom_Implementation(APrimalStructure * ChildStructure, int MySnapPointToIndex) { return NativeCall<bool, APrimalStructure*, int>(this, "APrimalStructure.IsValidSnapPointFrom_Implementation", ChildStructure, MySnapPointToIndex); }
	FName * GetSnapPointName(FName * result, int SnapPointIndex) { return NativeCall<FName*, FName*, int>(this, "APrimalStructure.GetSnapPointName", result, SnapPointIndex); }
	ADayCycleManager * GetDayCycleManager() { return NativeCall<ADayCycleManager*>(this, "APrimalStructure.GetDayCycleManager"); }
	void DelayedDisableSnapParent() { NativeCall<void>(this, "APrimalStructure.DelayedDisableSnapParent"); }
	void SetEnabledPrimarySnappedStructureParent_Implementation(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent_Implementation", bEnabled); }
	void SetEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabled", bEnabled); }
	bool AllowCreateDynamicMaterials() { return NativeCall<bool>(this, "APrimalStructure.AllowCreateDynamicMaterials"); }
	void CreateDynamicMaterials(UMeshComponent * ForceCreateForComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructure.CreateDynamicMaterials", ForceCreateForComponent); }
	FLinearColor * GetStructureColor(FLinearColor * result, int ColorRegionIndex) { return NativeCall<FLinearColor*, FLinearColor*, int>(this, "APrimalStructure.GetStructureColor", result, ColorRegionIndex); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.FinalLoadedFromSaveGame"); }
	void UpdateStencilValues() { NativeCall<void>(this, "APrimalStructure.UpdateStencilValues"); }
	int GetStructureColorValue(int ColorRegionIndex) { return NativeCall<int, int>(this, "APrimalStructure.GetStructureColorValue", ColorRegionIndex); }
	void SetStructureColorValue(int ColorRegionIndex, int SetVal) { NativeCall<void, int, int>(this, "APrimalStructure.SetStructureColorValue", ColorRegionIndex, SetVal); }
	void StructureHarvestingDepleted(UPrimalHarvestingComponent * fromComponent) { NativeCall<void, UPrimalHarvestingComponent*>(this, "APrimalStructure.StructureHarvestingDepleted", fromComponent); }
	void SetHarvestingActive(bool bActive, bool bOverrideBaseHealth, float BaseHarvestHealthMult, bool bAssignToTribe, int AssignedToTribeID) { NativeCall<void, bool, bool, float, bool, int>(this, "APrimalStructure.SetHarvestingActive", bActive, bOverrideBaseHealth, BaseHarvestHealthMult, bAssignToTribe, AssignedToTribeID); }
	FVector * GetTargetPathfindingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector*, FVector*, AActor*>(this, "APrimalStructure.GetTargetPathfindingLocation", result, Attacker); }
	FVector * GetTargetingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector*, FVector*, AActor*>(this, "APrimalStructure.GetTargetingLocation", result, Attacker); }
	bool GetClosestTargetOverride(FVector * attackPos, FVector * targetPos) { return NativeCall<bool, FVector*, FVector*>(this, "APrimalStructure.GetClosestTargetOverride", attackPos, targetPos); }
	bool IsDeprecated() { return NativeCall<bool>(this, "APrimalStructure.IsDeprecated"); }
	bool IsActiveEventStructure() { return NativeCall<bool>(this, "APrimalStructure.IsActiveEventStructure"); }
	void DeferredDeprecationCheck() { NativeCall<void>(this, "APrimalStructure.DeferredDeprecationCheck"); }
	static void StaticRegisterNativesAPrimalStructure() { NativeCall<void>(nullptr, "APrimalStructure.StaticRegisterNativesAPrimalStructure"); }
	static UClass * GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "APrimalStructure.GetPrivateStaticClass", Package); }
	void BlueprintDrawHUD(AShooterHUD * HUD, float CenterX, float CenterY) { NativeCall<void, AShooterHUD*, float, float>(this, "APrimalStructure.BlueprintDrawHUD", HUD, CenterX, CenterY); }
	void BlueprintDrawPreviewHUD(AShooterHUD * HUD, float CenterX, float CenterY) { NativeCall<void, AShooterHUD*, float, float>(this, "APrimalStructure.BlueprintDrawPreviewHUD", HUD, CenterX, CenterY); }
	bool BPAllowPickupGiveItem(APlayerController * ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructure.BPAllowPickupGiveItem", ForPC); }
	bool BPAllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure*, APlayerController*>(this, "APrimalStructure.BPAllowSnappingWith", OtherStructure, ForPC); }
	bool BPAllowSnapRotationForStructure(int ThisSnapPointIndex, FName ThisSnapPointName, APrimalStructure * OtherStructure, int OtherStructureSnapPointIndex, FName OtherStructureSnapPointName) { return NativeCall<bool, int, FName, APrimalStructure*, int, FName>(this, "APrimalStructure.BPAllowSnapRotationForStructure", ThisSnapPointIndex, ThisSnapPointName, OtherStructure, OtherStructureSnapPointIndex, OtherStructureSnapPointName); }
	bool BPAllowSwitchToVariant(int VariantIndex) { return NativeCall<bool, int>(this, "APrimalStructure.BPAllowSwitchToVariant", VariantIndex); }
	void BPApplyCustomDurabilityOnPickup(UPrimalItem * pickedup) { NativeCall<void, UPrimalItem*>(this, "APrimalStructure.BPApplyCustomDurabilityOnPickup", pickedup); }
	void BPBeginPreview() { NativeCall<void>(this, "APrimalStructure.BPBeginPreview"); }
	void BPDefaultProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool checkedBox) { NativeCall<void, AShooterPlayerController*, FString*, bool>(this, "APrimalStructure.BPDefaultProcessEditText", ForPC, TextToUse, checkedBox); }
	bool BPForceConsideredEnemyFoundation(APlayerController * PC, APrimalStructure * ForNewStructure, FVector * TestAtLocation) { return NativeCall<bool, APlayerController*, APrimalStructure*, FVector*>(this, "APrimalStructure.BPForceConsideredEnemyFoundation", PC, ForNewStructure, TestAtLocation); }
	void BPGetInfoFromConsumedItemForPlacedStructure(UPrimalItem * ItemToConsumed) { NativeCall<void, UPrimalItem*>(this, "APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure", ItemToConsumed); }
	bool BPHandleBedFastTravel(AShooterPlayerController * ForPC, APrimalStructure * ToBed) { return NativeCall<bool, AShooterPlayerController*, APrimalStructure*>(this, "APrimalStructure.BPHandleBedFastTravel", ForPC, ToBed); }
	void BPHandleStructureEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.BPHandleStructureEnabled", bEnabled); }
	bool BPImpactEffect(FHitResult * HitRes, FVector * ShootDirection) { return NativeCall<bool, FHitResult*, FVector*>(this, "APrimalStructure.BPImpactEffect", HitRes, ShootDirection); }
	int BPIsAllowedToBuild(FPlacementData * OutPlacementData, int CurrentAllowedReason) { return NativeCall<int, FPlacementData*, int>(this, "APrimalStructure.BPIsAllowedToBuild", OutPlacementData, CurrentAllowedReason); }
	int BPIsAllowedToBuildEx(FPlacementData * OutPlacementData, int CurrentAllowedReason, APlayerController * PC, bool bFinalPlacement, bool bChoosingRotation) { return NativeCall<int, FPlacementData*, int, APlayerController*, bool, bool>(this, "APrimalStructure.BPIsAllowedToBuildEx", OutPlacementData, CurrentAllowedReason, PC, bFinalPlacement, bChoosingRotation); }
	void BPOnDemolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructure.BPOnDemolish", ForPC, DamageCauser); }
	void BPOnStructurePickup(APlayerController * PlayerController, TSubclassOf<UPrimalItem> ItemType, UPrimalItem * NewlyPickedUpItem, bool bIsQuickPickup) { NativeCall<void, APlayerController*, TSubclassOf<UPrimalItem>, UPrimalItem*, bool>(this, "APrimalStructure.BPOnStructurePickup", PlayerController, ItemType, NewlyPickedUpItem, bIsQuickPickup); }
	void BPOnVariantSwitch(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.BPOnVariantSwitch", NewVariantIndex); }
	bool BPOverrideAllowStructureAccess(AShooterPlayerController * ForPC, bool bIsAccessAllowed) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "APrimalStructure.BPOverrideAllowStructureAccess", ForPC, bIsAccessAllowed); }
	FString * BPOverrideCantBuildReasonString(FString * result, int CantBuildReason) { return NativeCall<FString*, FString*, int>(this, "APrimalStructure.BPOverrideCantBuildReasonString", result, CantBuildReason); }
	bool BPOverrideDemolish(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.BPOverrideDemolish", ForPC); }
	FRotator * BPOverridePlacementRotation(FRotator * result, FVector ViewPos, FRotator ViewRot) { return NativeCall<FRotator*, FRotator*, FVector, FRotator>(this, "APrimalStructure.BPOverridePlacementRotation", result, ViewPos, ViewRot); }
	bool BPOverrideSnappedFromTransform(APrimalStructure * parentStructure, int ParentSnapFromIndex, FName ParentSnapFromName, FVector UnsnappedPlacementPos, FRotator UnsnappedPlacementRot, FVector SnappedPlacementPos, FRotator SnappedPlacementRot, int SnapToIndex, FName SnapToName, FVector * OutLocation, FRotator * OutRotation, int* bForceInvalidateSnap) { return NativeCall<bool, APrimalStructure*, int, FName, FVector, FRotator, FVector, FRotator, int, FName, FVector*, FRotator*, int*>(this, "APrimalStructure.BPOverrideSnappedFromTransform", parentStructure, ParentSnapFromIndex, ParentSnapFromName, UnsnappedPlacementPos, UnsnappedPlacementRot, SnappedPlacementPos, SnappedPlacementRot, SnapToIndex, SnapToName, OutLocation, OutRotation, bForceInvalidateSnap); }
	bool BPOverrideSnappedToTransform(APrimalStructure * childStructure, int ChildSnapFromIndex, FName ChildSnapFromName, FVector UnsnappedPlacementPos, FRotator UnsnappedPlacementRot, FVector SnappedPlacementPos, FRotator SnappedPlacementRot, int SnapToIndex, FName SnapToName, FVector * OutLocation, FRotator * OutRotation, int* bForceInvalidateSnap) { return NativeCall<bool, APrimalStructure*, int, FName, FVector, FRotator, FVector, FRotator, int, FName, FVector*, FRotator*, int*>(this, "APrimalStructure.BPOverrideSnappedToTransform", childStructure, ChildSnapFromIndex, ChildSnapFromName, UnsnappedPlacementPos, UnsnappedPlacementRot, SnappedPlacementPos, SnappedPlacementRot, SnapToIndex, SnapToName, OutLocation, OutRotation, bForceInvalidateSnap); }
	FVector * BPOverrideTargetLocation(FVector * result, FVector * attackPos) { return NativeCall<FVector*, FVector*, FVector*>(this, "APrimalStructure.BPOverrideTargetLocation", result, attackPos); }
	void BPPlacedStructure(APlayerController * ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructure.BPPlacedStructure", ForPC); }
	void BPPlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent*, APawn*, AActor*>(this, "APrimalStructure.BPPlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void BPPostLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.BPPostLoadedFromSaveGame"); }
	void BPPostSetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.BPPostSetStructureCollisionChannels"); }
	bool BPPreventPlacementOnPawn(APlayerController * PC, APrimalCharacter * ForCharacter, FName ForBone) { return NativeCall<bool, APlayerController*, APrimalCharacter*, FName>(this, "APrimalStructure.BPPreventPlacementOnPawn", PC, ForCharacter, ForBone); }
	bool BPPreventPlacingOnFloorStructure(FPlacementData * theOutPlacementData, APrimalStructure * FloorStructure) { return NativeCall<bool, FPlacementData*, APrimalStructure*>(this, "APrimalStructure.BPPreventPlacingOnFloorStructure", theOutPlacementData, FloorStructure); }
	bool BPPreventPlacingStructureOntoMe(APlayerController * PC, APrimalStructure * ForNewStructure, FHitResult * ForHitResult) { return NativeCall<bool, APlayerController*, APrimalStructure*, FHitResult*>(this, "APrimalStructure.BPPreventPlacingStructureOntoMe", PC, ForNewStructure, ForHitResult); }
	bool BPPreventSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructure.BPPreventSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	bool BPPreventUsingAsFloorForStructure(FPlacementData * theOutPlacementData, APrimalStructure * StructureToPlaceOnMe) { return NativeCall<bool, FPlacementData*, APrimalStructure*>(this, "APrimalStructure.BPPreventUsingAsFloorForStructure", theOutPlacementData, StructureToPlaceOnMe); }
	void BPRefreshedStructureColors() { NativeCall<void>(this, "APrimalStructure.BPRefreshedStructureColors"); }
	void BPStructurePreGetMultiUseEntries(APlayerController * ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructure.BPStructurePreGetMultiUseEntries", ForPC); }
	bool BPTreatAsFoundationForSnappedStructure(APrimalStructure * OtherStructure, FPlacementData * WithPlacementData) { return NativeCall<bool, APrimalStructure*, FPlacementData*>(this, "APrimalStructure.BPTreatAsFoundationForSnappedStructure", OtherStructure, WithPlacementData); }
	void BPTriggerStasisEvent() { NativeCall<void>(this, "APrimalStructure.BPTriggerStasisEvent"); }
	void BPUnstasis() { NativeCall<void>(this, "APrimalStructure.BPUnstasis"); }
	bool BPUseCountStructureInRange() { return NativeCall<bool>(this, "APrimalStructure.BPUseCountStructureInRange"); }
	void ClearCustomColors() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors"); }
	void ClientUpdateLinkedStructures(TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, TArray<unsigned int>*>(this, "APrimalStructure.ClientUpdateLinkedStructures", NewLinkedStructures); }
	TSubclassOf<APrimalStructure> * GetBedFilterClass(TSubclassOf<APrimalStructure> * result) { return NativeCall<TSubclassOf<APrimalStructure>*, TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.GetBedFilterClass", result); }
	bool IsValidForSnappingFrom(APrimalStructure * OtherStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.IsValidForSnappingFrom", OtherStructure); }
	bool IsValidSnapPointFrom(APrimalStructure * ParentStructure, int MySnapPointFromIndex) { return NativeCall<bool, APrimalStructure*, int>(this, "APrimalStructure.IsValidSnapPointFrom", ParentStructure, MySnapPointFromIndex); }
	bool IsValidSnapPointTo(APrimalStructure * ChildStructure, int MySnapPointToIndex) { return NativeCall<bool, APrimalStructure*, int>(this, "APrimalStructure.IsValidSnapPointTo", ChildStructure, MySnapPointToIndex); }
	void MultiAddStructuresPlacedOnFloor(APrimalStructure * structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.MultiAddStructuresPlacedOnFloor", structure); }
	void MultiRefreshVariantSettings(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.MultiRefreshVariantSettings", NewVariantIndex); }
	void MultiSetPickupAllowedBeforeNetworkTime(long double NewTime) { NativeCall<void, long double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime", NewTime); }
	void NetDoSpawnEffects() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects"); }
	void NetSpawnCoreStructureDeathActor() { NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor"); }
	void NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, FString * NewOriginalOwnerName) { NativeCall<void, int, FString*>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NetUpdateTeamAndOwnerName(int NewTeam, FString * NewOwnerName) { NativeCall<void, int, FString*>(this, "APrimalStructure.NetUpdateTeamAndOwnerName", NewTeam, NewOwnerName); }
	void SetEnabledPrimarySnappedStructureParent(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent", bEnabled); }
	void UpdateTribeGroupStructureRank(char NewRank) { NativeCall<void, char>(this, "APrimalStructure.UpdateTribeGroupStructureRank", NewRank); }
};

struct APrimalStructureBed 
{
	FVector& PlayerSpawnLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureBed.PlayerSpawnLocOffset"); }
	FRotator& PlayerSpawnRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureBed.PlayerSpawnRotOffset"); }
	unsigned int& LinkedPlayerIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.LinkedPlayerID"); }
	FString& LinkedPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.LinkedPlayerName"); }
	FString& BedNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.BedName"); }
	float& UseCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownTime"); }
	float& UseCooldownRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownRadius"); }
	float& AttachedToPlatformStructureEnemySpawnPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.AttachedToPlatformStructureEnemySpawnPreventionRadius"); }
	long double& NextAllowedUseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.NextAllowedUseTime"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.LastSignNamingTime"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bDestroyAfterRespawnUse() { return { this, "APrimalStructureBed.bDestroyAfterRespawnUse" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureBed.GetPrivateStaticClass"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureBed.StaticClass"); }
	bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureBed.AllowPickupForItem", ForPC); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "APrimalStructureBed.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController*, int>(this, "APrimalStructureBed.TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController*, int>(this, "APrimalStructureBed.ClientMultiUse", ForPC, UseIndex); }
	void ProcessEditText(AShooterPlayerController* ForPC, FString* TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController*, FString*, bool>(this, "APrimalStructureBed.ProcessEditText", ForPC, TextToUse, __formal); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureBed.DrawHUD", HUD); }
	void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureBed.PlacedStructure", PC); }
	bool AllowSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime, APrimalStructure* FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructureBed.AllowSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	bool AllowSpawnForDownloadedPlayer(unsigned __int64 PlayerDataID, unsigned __int64 TribeID, bool bCheckCooldownTime) { return NativeCall<bool, unsigned __int64, unsigned __int64, bool>(this, "APrimalStructureBed.AllowSpawnForDownloadedPlayer", PlayerDataID, TribeID, bCheckCooldownTime); }
	bool CheckStructureActivateTribeGroupPermission(unsigned __int64 PlayerDataID, unsigned __int64 TribeID) { return NativeCall<bool, unsigned __int64, unsigned __int64>(this, "APrimalStructureBed.CheckStructureActivateTribeGroupPermission", PlayerDataID, TribeID); }
	void SpawnedPlayerFor_Implementation(AShooterPlayerController* PC, APawn* ForPawn) { NativeCall<void, AShooterPlayerController*, APawn*>(this, "APrimalStructureBed.SpawnedPlayerFor_Implementation", PC, ForPawn); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureBed.Destroyed"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureBed.BeginPlay"); }
	FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructureBed.GetSpawnPointInfo", result); }
	static APrimalStructure* FindBedWithID(UWorld* forWorld, int theBedID) { return NativeCall<APrimalStructure*, UWorld*, int>(nullptr, "APrimalStructureBed.FindBedWithID", forWorld, theBedID); }
	FVector* GetPlayerSpawnLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "APrimalStructureBed.GetPlayerSpawnLocation", result); }
	FRotator* GetPlayerSpawnRotation(FRotator* result) { return NativeCall<FRotator*, FRotator*>(this, "APrimalStructureBed.GetPlayerSpawnRotation", result); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureBed.PostInitializeComponents"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureBed.GetDescriptiveName", result); }
	static void StaticRegisterNativesAPrimalStructureBed() { NativeCall<void>(nullptr, "APrimalStructureBed.StaticRegisterNativesAPrimalStructureBed"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "APrimalStructureBed.GetPrivateStaticClass", Package); }
	void SpawnedPlayerFor(AShooterPlayerController* PC, APawn* ForPawn) { NativeCall<void, AShooterPlayerController*, APawn*>(this, "APrimalStructureBed.SpawnedPlayerFor", PC, ForPawn); }
};

struct APrimalStructureDoor : APrimalStructure
{
	TSubobjectPtr<USceneComponent>& MyDoorTransformField() { return *GetNativePointerField<TSubobjectPtr<USceneComponent>*>(this, "APrimalStructureDoor.MyDoorTransform"); }
	float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.RotationSpeed"); }
	USoundCue* DoorOpenSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorOpenSound"); }
	USoundCue* DoorCloseSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorCloseSound"); }
	unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureDoor.CurrentPinCode"); }
	float& DoorStateChangeIgnoreEncroachmentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.DoorStateChangeIgnoreEncroachmentInterval"); }
	char& DoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.DoorOpenState"); }
	char& ClientPrevDoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.ClientPrevDoorOpenState"); }
	long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastLockStateChangeTime"); }
	FRotator& SecondDoorDefaultRotField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureDoor.SecondDoorDefaultRot"); }
	float& CurrentDoorAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.CurrentDoorAngle"); }
	USoundBase* UnlockDoorSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.UnlockDoorSound"); }
	USoundBase* LockDoorSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockDoorSound"); }
	USoundBase* LockedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockedSound"); }
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

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureDoor.GetPrivateStaticClass"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureDoor.StaticClass"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureDoor.BeginPlay"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureDoor.Tick", DeltaSeconds); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureDoor.DrawHUD", HUD); }
	void OnRep_DoorOpenState(char PrevDoorOpenState) { NativeCall<void, char>(this, "APrimalStructureDoor.OnRep_DoorOpenState", PrevDoorOpenState); }
	void GotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState", DoorState); }
	void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState", DoorState, DelayTime); }
	void DelayedGotoDoorStateTimer() { NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer"); }
	bool HasSamePinCode(APrimalStructureItemContainer* otherContainer) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "APrimalStructureDoor.HasSamePinCode", otherContainer); }
	bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureDoor.IsPinLocked"); }
	int GetPinCode() { return NativeCall<int>(this, "APrimalStructureDoor.GetPinCode"); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController*, int>(this, "APrimalStructureDoor.TryMultiUse", ForPC, UseIndex); }
	bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureDoor.CanOpen", ForPC); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureDoor.GetDescriptiveName", result); }
	bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureDoor.SetStaticMobility"); }
	void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState_Implementation", DoorState); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents"); }
	bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureDoor.AllowStructureAccess", ForPC); }
	bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalStructureDoor.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureDoor.AllowPickupForItem", ForPC); }
	void BPSetDoorState(int DoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPSetDoorState", DoorState); }
	bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent* HitComponent, AActor* EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent*, AActor*>(this, "APrimalStructureDoor.AllowIgnoreCharacterEncroachment_Implementation", HitComponent, EncroachingCharacter); }
	static void StaticRegisterNativesAPrimalStructureDoor() { NativeCall<void>(nullptr, "APrimalStructureDoor.StaticRegisterNativesAPrimalStructureDoor"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "APrimalStructureDoor.GetPrivateStaticClass", Package); }
	void BPGotoDoorState(int NewDoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPGotoDoorState", NewDoorState); }
	void NetGotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState", DoorState); }
};

struct APrimalStructureItemContainer : APrimalStructure
{
	UPrimalInventoryComponent* MyInventoryComponentField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalStructureItemContainer.MyInventoryComponent"); }
	float& SolarRefreshIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMin"); }
	float& SolarRefreshIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMax"); }
	float& SolarRefreshIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshInterval"); }
	long double& LastSolarRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSolarRefreshTime"); }
	TSubclassOf<UPrimalItem>& BatteryClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.BatteryClassOverride"); }
	int& PoweredOverrideCounterField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.PoweredOverrideCounter"); }
	float& NotifyNearbyPowerGeneratorDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorDistance"); }
	int& NotifyNearbyPowerGeneratorOctreeGroupField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorOctreeGroup"); }
	TArray<UMaterialInterface*> ActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureItemContainer.ActivateMaterials"); }
	TArray<UMaterialInterface*> InActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureItemContainer.InActivateMaterials"); }
	UChildActorComponent* MyChildEmitterSpawnableField() { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureItemContainer.MyChildEmitterSpawnable"); }
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
	FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureItemContainer.MapMarkerLocationInfo"); }
	float& BasedCharacterDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageInterval"); }
	float& BasedCharacterDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageAmount"); }
	TSubclassOf<UDamageType>& BasedCharacterDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureItemContainer.BasedCharacterDamageType"); }
	TSubclassOf<UPrimalItem>& EngramRequirementClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.EngramRequirementClassOverride"); }
	AActor* LinkedBlueprintSpawnActorPointField() { return *GetNativePointerField<AActor**>(this, "APrimalStructureItemContainer.LinkedBlueprintSpawnActorPoint"); }
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
	USoundBase* ContainerActivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerActivatedSound"); }
	USoundBase* ContainerDeactivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerDeactivatedSound"); }
	TSubclassOf<APrimalStructureItemContainer>& DemolishInventoryDepositClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer.DemolishInventoryDepositClass"); }
	TSubclassOf<UPrimalItem>& FuelItemTrueClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.FuelItemTrueClass"); }
	TSubclassOf<UPrimalItem>& ReplicatedFuelItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemClass"); }
	__int16& ReplicatedFuelItemColorIndexField() { return *GetNativePointerField<__int16*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemColorIndex"); }
	USoundBase* DefaultAudioTemplateField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.DefaultAudioTemplate"); }
	TArray<TSubclassOf<UPrimalItem>>& OverrideParticleTemplateItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "APrimalStructureItemContainer.OverrideParticleTemplateItemClasses"); }
	TArray<USoundBase*> OverrideAudioTemplatesField() { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalStructureItemContainer.OverrideAudioTemplates"); }
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
	TArray<TWeakObjectPtr<AShooterPlayerController>>& ValidatedByPinCodePlayerControllersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterPlayerController>>*>(this, "APrimalStructureItemContainer.ValidatedByPinCodePlayerControllers"); }

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
	BitFieldValue<bool, unsigned __int32> bClientBPNotifyInventoryItemChanges() { return { this, "APrimalStructureItemContainer.bClientBPNotifyInventoryItemChanges" }; }
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
	BitFieldValue<bool, unsigned __int32> bPoweredAllowSolar() { return { this, "APrimalStructureItemContainer.bPoweredAllowSolar" }; }
	BitFieldValue<bool, unsigned __int32> bPoweredUsingSolar() { return { this, "APrimalStructureItemContainer.bPoweredUsingSolar" }; }
	BitFieldValue<bool, unsigned __int32> UseBPApplyPinCode() { return { this, "APrimalStructureItemContainer.UseBPApplyPinCode" }; }
	BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureItemContainer.bIsLocked" }; }
	BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureItemContainer.bIsPinLocked" }; }
	BitFieldValue<bool, unsigned __int32> bHasFuel() { return { this, "APrimalStructureItemContainer.bHasFuel" }; }
	BitFieldValue<bool, unsigned __int32> bIsUnderwater() { return { this, "APrimalStructureItemContainer.bIsUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bDisableActivationUnderwater() { return { this, "APrimalStructureItemContainer.bDisableActivationUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventAutoActivateWhenConnectedToWater() { return { this, "APrimalStructureItemContainer.bForcePreventAutoActivateWhenConnectedToWater" }; }
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
	BitFieldValue<bool, unsigned __int32> bHideAutoActivateToggle() { return { this, "APrimalStructureItemContainer.bHideAutoActivateToggle" }; }
	BitFieldValue<bool, unsigned __int32> bUseCooldownOnTransferAll() { return { this, "APrimalStructureItemContainer.bUseCooldownOnTransferAll" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor() { return { this, "APrimalStructureItemContainer.bUseBPSetPlayerConstructor" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime() { return { this, "APrimalStructureItemContainer.bReplicateLastActivatedTime" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer.GetPrivateStaticClass"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer.StaticClass"); }
	bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPowered"); }
	bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanBeActivated"); }
	bool AllowToggleActivation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.AllowToggleActivation", ForPC); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController*, int>(this, "APrimalStructureItemContainer.TryMultiUse", ForPC, UseIndex); }
	float SubtractWaterFromConnections(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections", Amount, bAllowNetworking); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController*, int>(this, "APrimalStructureItemContainer.ClientMultiUse", ForPC, UseIndex); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer.PreInitializeComponents"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay"); }
	void CheckForDeathCacheEmitter() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckForDeathCacheEmitter"); }
	void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructureItemContainer.PlacedStructureLocation"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Stasis"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Unstasis"); }
	void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer.PlacedStructure", PC); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "APrimalStructureItemContainer.GetLifetimeReplicatedProps", OutLifetimeProps); }
	USoundBase* GetOverrideAudioTemplate() { return NativeCall<USoundBase*>(this, "APrimalStructureItemContainer.GetOverrideAudioTemplate"); }
	bool IsValidWaterSourceForPipe(APrimalStructureWaterPipe* ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe*>(this, "APrimalStructureItemContainer.IsValidWaterSourceForPipe", ForWaterPipe); }
	void SetDelayedActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.SetDelayedActivation"); }
	void TryActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.TryActivation"); }
	void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetContainerActive", bNewActive); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer.GetDebugInfoString", result); }
	bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.CanOpen", ForPC); }
	void ServerCloseRemoteInventory(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer.ServerCloseRemoteInventory", ByPC); }
	bool VerifyPinCode(int pinCode) { return NativeCall<bool, int>(this, "APrimalStructureItemContainer.VerifyPinCode", pinCode); }
	bool HasSamePinCode(APrimalStructureItemContainer* otherContainer) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.HasSamePinCode", otherContainer); }
	bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPinLocked"); }
	int GetPinCode() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetPinCode"); }
	int AddToValidatedByPinCodePlayerControllers(AShooterPlayerController* ForPC) { return NativeCall<int, AShooterPlayerController*>(this, "APrimalStructureItemContainer.AddToValidatedByPinCodePlayerControllers", ForPC); }
	bool IsValidatedPinCodePlayerController(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.IsValidatedPinCodePlayerController", ForPC); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer.GetDescriptiveName", result); }
	bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureItemContainer.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	bool RemoteInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.RemoteInventoryAllowViewing", ForPC); }
	bool RemoteInventoryAllowActivation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.RemoteInventoryAllowActivation", ForPC); }
	void UpdateContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease"); }
	void CheckAutoReactivate() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckAutoReactivate"); }
	void ConsumeFuel(bool bGiveItem) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.ConsumeFuel", bGiveItem); }
	void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureItemContainer.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.NotifyItemAdded", anItem, bEquipItem); }
	void DeferredNotifyItemAdded() { NativeCall<void>(this, "APrimalStructureItemContainer.DeferredNotifyItemAdded"); }
	void CheckFuelSetActive() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckFuelSetActive"); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyItemRemoved", anItem); }
	void ClientNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem* theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.ClientNotifyInventoryItemChange", bIsItemAdd, theItem, bEquipItem); }
	void RefreshFuelState() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshFuelState"); }
	bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers"); }
	void UpdateSolarPower() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateSolarPower"); }
	void CharacterBasedOnUpdate(AActor* characterBasedOnMe, float DeltaSeconds) { NativeCall<void, AActor*, float>(this, "APrimalStructureItemContainer.CharacterBasedOnUpdate", characterBasedOnMe, DeltaSeconds); }
	bool AllowSaving() { return NativeCall<bool>(this, "APrimalStructureItemContainer.AllowSaving"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureItemContainer.DrawHUD", HUD); }
	void ProcessEditText(AShooterPlayerController* ForPC, FString* TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController*, FString*, bool>(this, "APrimalStructureItemContainer.ProcessEditText", ForPC, TextToUse, bCheckedBox); }
	void NetUpdateLocation_Implementation(FVector NewLocation) { NativeCall<void, FVector>(this, "APrimalStructureItemContainer.NetUpdateLocation_Implementation", NewLocation); }
	void NetSetContainerActive_Implementation(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive_Implementation", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
	void NetUpdateBoxName_Implementation(FString* NewName) { NativeCall<void, FString*>(this, "APrimalStructureItemContainer.NetUpdateBoxName_Implementation", NewName); }
	void PlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureItemContainer.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void SetDisabledTimer(float DisabledTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer.SetDisabledTimer", DisabledTime); }
	void EnableActive() { NativeCall<void>(this, "APrimalStructureItemContainer.EnableActive"); }
	void GetBlueprintSpawnActorTransform(FVector* spawnLoc, FRotator* spawnRot) { NativeCall<void, FVector*, FRotator*>(this, "APrimalStructureItemContainer.GetBlueprintSpawnActorTransform", spawnLoc, spawnRot); }
	bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer.OverrideHasWaterSource"); }
	void RefreshPowered(APrimalStructureItemContainer* InDirectPower) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.RefreshPowered", InDirectPower); }
	void MovePowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.MovePowerJunctionLink"); }
	void RefreshPowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshPowerJunctionLink"); }
	void NotifyCraftedItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyCraftedItem", anItem); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructureItemContainer.LoadedFromSaveGame"); }
	void CopyStructureValuesFrom(APrimalStructureItemContainer* otherItemContainer) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.CopyStructureValuesFrom", otherItemContainer); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureItemContainer.PostSpawnInitialize"); }
	void SetPoweredOverrideCounter(int NewPoweredOverrideCounter) { NativeCall<void, int>(this, "APrimalStructureItemContainer.SetPoweredOverrideCounter", NewPoweredOverrideCounter); }
	void TargetingTeamChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.TargetingTeamChanged"); }
	FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructureItemContainer.GetSpawnPointInfo", result); }
	void SetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureItemContainer.SetPlayerConstructor", PC); }
	float GetUsablePriority_Implementation() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetUsablePriority_Implementation"); }
	void RefreshInventoryItemCounts() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshInventoryItemCounts"); }
	bool IsPlayerControllerInPinCodeValidationList(APlayerController* PlayerController) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.IsPlayerControllerInPinCodeValidationList", PlayerController); }
	int GetDeathCacheCharacterID() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetDeathCacheCharacterID"); }
	static void StaticRegisterNativesAPrimalStructureItemContainer() { NativeCall<void>(nullptr, "APrimalStructureItemContainer.StaticRegisterNativesAPrimalStructureItemContainer"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "APrimalStructureItemContainer.GetPrivateStaticClass", Package); }
	bool BPApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureItemContainer.BPApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	bool BPCanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.BPCanBeActivated"); }
	bool BPCanBeActivatedByPlayer(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.BPCanBeActivatedByPlayer", PC); }
	void BPContainerActivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerActivated"); }
	void BPContainerDeactivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerDeactivated"); }
	float BPGetFuelConsumptionMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer.BPGetFuelConsumptionMultiplier"); }
	bool BPIsValidWaterSourceForPipe(APrimalStructureWaterPipe* ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe*>(this, "APrimalStructureItemContainer.BPIsValidWaterSourceForPipe", ForWaterPipe); }
	void BPNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem* theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.BPNotifyInventoryItemChange", bIsItemAdd, theItem, bEquipItem); }
	void BPOnContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.BPOnContainerActiveHealthDecrease"); }
	void BPPreGetMultiUseEntries(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructureItemContainer.BPPreGetMultiUseEntries", ForPC); }
	void BPSetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureItemContainer.BPSetPlayerConstructor", PC); }
	bool IsValidForDinoFeedingContainer(APrimalDinoCharacter* ForDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalStructureItemContainer.IsValidForDinoFeedingContainer", ForDino); }
	void NetSetContainerActive(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
	void NetUpdateBoxName(FString* NewName) { NativeCall<void, FString*>(this, "APrimalStructureItemContainer.NetUpdateBoxName", NewName); }
	void PowerGeneratorBuiltNearbyPoweredStructure(APrimalStructureItemContainer* PoweredStructure) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.PowerGeneratorBuiltNearbyPoweredStructure", PoweredStructure); }
};

struct APrimalStructureTurret : APrimalStructureItemContainer
{
	TWeakObjectPtr<AActor>& TargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalStructureTurret.Target"); }
	TSubclassOf<UPrimalItem>& AmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureTurret.AmmoItemTemplate"); }
	TSubclassOf<APrimalEmitterSpawnable>& MuzzleFlashEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.MuzzleFlashEmitter"); }
	float& FireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireInterval"); }
	long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastFireTime"); }
	float& MaxFireYawDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFireYawDelta"); }
	float& MaxFirePitchDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFirePitchDelta"); }
	FVector& TargetingLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.TargetingLocOffset"); }
	float& TargetingRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.TargetingRotationInterpSpeed"); }
	FieldArray<float, 3> TargetingRangesField() { return { this, "APrimalStructureTurret.TargetingRanges" }; }
	FVector& TargetingTraceOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.TargetingTraceOffset"); }
	TSubclassOf<UDamageType>& FireDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureTurret.FireDamageType"); }
	float& FireDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageAmount"); }
	float& FireDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageImpulse"); }
	FRotator& TurretAimRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurret.TurretAimRotOffset"); }
	FVector& AimTargetLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.AimTargetLocOffset"); }
	FVector& PlayerProneTargetOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.PlayerProneTargetOffset"); }
	float& AimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AimSpread"); }
	char& RangeSettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.RangeSetting"); }
	char& AISettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.AISetting"); }
	char& WarningSettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.WarningSetting"); }
	int& NumBulletsField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBullets"); }
	int& NumBulletsPerShotField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBulletsPerShot"); }
	float& AlwaysEnableFastTurretTargetingOverVelocityField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AlwaysEnableFastTurretTargetingOverVelocity"); }
	TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "APrimalStructureTurret.ProjectileClass"); }
	float& WarningExpirationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.WarningExpirationTime"); }
	TSubclassOf<APrimalEmitterSpawnable>& WarningEmitterShortField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.WarningEmitterShort"); }
	TSubclassOf<APrimalEmitterSpawnable>& WarningEmitterLongField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.WarningEmitterLong"); }
	float& BatteryIntervalFromActivationBeforeFiringField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring"); }
	bool& bWarnedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurret.bWarned"); }
	UChildActorComponent* MyChildEmitterTargetingEffectField() { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureTurret.MyChildEmitterTargetingEffect"); }
	FRotator& DefaultTurretAimRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurret.DefaultTurretAimRotOffset"); }
	FVector& MuzzleLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.MuzzleLocOffset"); }
	long double& LastWarningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastWarningTime"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bClientFireProjectile() { return { this, "APrimalStructureTurret.bClientFireProjectile" }; }
	BitFieldValue<bool, unsigned __int32> bUseInstantDamageShooting() { return { this, "APrimalStructureTurret.bUseInstantDamageShooting" }; }
	BitFieldValue<bool, unsigned __int32> bDisableInElectricalStorm() { return { this, "APrimalStructureTurret.bDisableInElectricalStorm" }; }
	BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffsetOnCharacter() { return { this, "APrimalStructureTurret.bUseBallistaAimOffsetOnCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bIsReloading() { return { this, "APrimalStructureTurret.bIsReloading" }; }
	BitFieldValue<bool, unsigned __int32> bIsFiring() { return { this, "APrimalStructureTurret.bIsFiring" }; }
	BitFieldValue<bool, unsigned __int32> bFireProjectileInvertX() { return { this, "APrimalStructureTurret.bFireProjectileInvertX" }; }
	BitFieldValue<bool, unsigned __int32> bShowProjectileOnlyBasedOnAmmo() { return { this, "APrimalStructureTurret.bShowProjectileOnlyBasedOnAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bHideProjectileBone() { return { this, "APrimalStructureTurret.bHideProjectileBone" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanFire() { return { this, "APrimalStructureTurret.bUseBPCanFire" }; }
	BitFieldValue<bool, unsigned __int32> bHideProjectileBoneOnAttachedModule() { return { this, "APrimalStructureTurret.bHideProjectileBoneOnAttachedModule" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTurret.GetPrivateStaticClass"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurret.BeginPlay"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "APrimalStructureTurret.GetLifetimeReplicatedProps", OutLifetimeProps); }
	AActor* FindTarget() { return NativeCall<AActor*>(this, "APrimalStructureTurret.FindTarget"); }
	void SetTarget(AActor* aTarget) { NativeCall<void, AActor*>(this, "APrimalStructureTurret.SetTarget", aTarget); }
	void WeaponTraceHits(TArray<FHitResult>* HitResults, FVector* StartTrace, FVector* EndTrace) { NativeCall<void, TArray<FHitResult>*, FVector*, FVector*>(this, "APrimalStructureTurret.WeaponTraceHits", HitResults, StartTrace, EndTrace); }
	bool NetExecCommand(FName CommandName, FNetExecParams* ExecParams) { return NativeCall<bool, FName, FNetExecParams*>(this, "APrimalStructureTurret.NetExecCommand", CommandName, ExecParams); }
	void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurret.DoFire", RandomSeed); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "APrimalStructureTurret.DoFireProjectile", Origin, ShootDir); }
	void ClientsFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "APrimalStructureTurret.ClientsFireProjectile_Implementation", Origin, ShootDir); }
	void SpawnImpactEffects(FHitResult* Impact, FVector* ShootDir) { NativeCall<void, FHitResult*, FVector*>(this, "APrimalStructureTurret.SpawnImpactEffects", Impact, ShootDir); }
	void SpawnTrailEffect(FVector* EndPoint) { NativeCall<void, FVector*>(this, "APrimalStructureTurret.SpawnTrailEffect", EndPoint); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "APrimalStructureTurret.ShouldDealDamage", TestActor); }
	void DealDamage(FHitResult* Impact, FVector* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, FHitResult*, FVector*, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurret.DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void StartWarning() { NativeCall<void>(this, "APrimalStructureTurret.StartWarning"); }
	void FinishWarning() { NativeCall<void>(this, "APrimalStructureTurret.FinishWarning"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurret.Tick", DeltaSeconds); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureTurret.DrawHUD", HUD); }
	bool IsValidToFire() { return NativeCall<bool>(this, "APrimalStructureTurret.IsValidToFire"); }
	FRotator* GetMuzzleRotation(FRotator* result) { return NativeCall<FRotator*, FRotator*>(this, "APrimalStructureTurret.GetMuzzleRotation", result); }
	FVector* GetMuzzleLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "APrimalStructureTurret.GetMuzzleLocation", result); }
	FVector* GetAttackingFromLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "APrimalStructureTurret.GetAttackingFromLocation", result); }
	FVector* GetAimPivotLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "APrimalStructureTurret.GetAimPivotLocation", result); }
	FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalStructureTurret.GetMuzzleFlashSocketName", result); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController*, int>(this, "APrimalStructureTurret.TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController*, int>(this, "APrimalStructureTurret.ClientMultiUse", ForPC, UseIndex); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureTurret.NotifyItemRemoved", anItem); }
	void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureTurret.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureTurret.NotifyItemQuantityUpdated", anItem, amount); }
	void UpdateNumBullets() { NativeCall<void>(this, "APrimalStructureTurret.UpdateNumBullets"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurret.PreInitializeComponents"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureTurret.Stasis"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureTurret.Unstasis"); }
	void UpdatedTargeting() { NativeCall<void>(this, "APrimalStructureTurret.UpdatedTargeting"); }
	FVector* GetTargetAimAtLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "APrimalStructureTurret.GetTargetAimAtLocation", result); }
	FVector* GetTargetFireAtLocation(FVector* result, APrimalCharacter* ForTarget) { return NativeCall<FVector*, FVector*, APrimalCharacter*>(this, "APrimalStructureTurret.GetTargetFireAtLocation", result, ForTarget); }
	bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurret.CanFire"); }
	FName* GetTargetAltAimSocket(FName* result, APrimalCharacter* ForTarget) { return NativeCall<FName*, FName*, APrimalCharacter*>(this, "APrimalStructureTurret.GetTargetAltAimSocket", result, ForTarget); }
	bool IsTurretFastTargetingAutoEnabled() { return NativeCall<bool>(this, "APrimalStructureTurret.IsTurretFastTargetingAutoEnabled"); }
	bool UseTurretFastTargeting(bool bCheckFastTargetingAutoEnabled) { return NativeCall<bool, bool>(this, "APrimalStructureTurret.UseTurretFastTargeting", bCheckFastTargetingAutoEnabled); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTurret.StaticClass"); }
	static void StaticRegisterNativesAPrimalStructureTurret() { NativeCall<void>(nullptr, "APrimalStructureTurret.StaticRegisterNativesAPrimalStructureTurret"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "APrimalStructureTurret.GetPrivateStaticClass", Package); }
	bool BPTurretPreventsTargeting(APrimalCharacter* PotentialTarget) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalStructureTurret.BPTurretPreventsTargeting", PotentialTarget); }
};
