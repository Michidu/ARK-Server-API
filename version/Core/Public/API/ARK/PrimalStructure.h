#pragma once

struct APrimalTargetableActor : AActor
{
	FieldValue<float> LowHealthPercentageField() { return { this, "APrimalTargetableActor.LowHealthPercentage" }; }
	FieldValue<TSubclassOf<AActor>> DestructionActorTemplateField() { return { this, "APrimalTargetableActor.DestructionActorTemplate" }; }
	FieldValue<float> LifeSpanAfterDeathField() { return { this, "APrimalTargetableActor.LifeSpanAfterDeath" }; }
	FieldValue<USoundCue *> DeathSoundField() { return { this, "APrimalTargetableActor.DeathSound" }; }
	FieldValue<float> PassiveDamageHealthReplicationPercentIntervalField() { return { this, "APrimalTargetableActor.PassiveDamageHealthReplicationPercentInterval" }; }
	FieldValue<float> DamageNotifyTeamAggroMultiplierField() { return { this, "APrimalTargetableActor.DamageNotifyTeamAggroMultiplier" }; }
	FieldValue<float> DamageNotifyTeamAggroRangeField() { return { this, "APrimalTargetableActor.DamageNotifyTeamAggroRange" }; }
	FieldValue<float> DamageNotifyTeamAggroRangeFalloffField() { return { this, "APrimalTargetableActor.DamageNotifyTeamAggroRangeFalloff" }; }
	FieldValue<FVector> DestructibleMeshLocationOffsetField() { return { this, "APrimalTargetableActor.DestructibleMeshLocationOffset" }; }
	FieldValue<FVector> DestructibleMeshScaleOverrideField() { return { this, "APrimalTargetableActor.DestructibleMeshScaleOverride" }; }
	FieldValue<FRotator> DestructibleMeshRotationOffsetField() { return { this, "APrimalTargetableActor.DestructibleMeshRotationOffset" }; }
	FieldValue<FString> DescriptiveNameField() { return { this, "APrimalTargetableActor.DescriptiveName" }; }
	FieldValue<float> ReplicatedHealthField() { return { this, "APrimalTargetableActor.ReplicatedHealth" }; }
	FieldValue<float> HealthField() { return { this, "APrimalTargetableActor.Health" }; }
	FieldValue<float> MaxHealthField() { return { this, "APrimalTargetableActor.MaxHealth" }; }
	FieldValue<float> DestructibleMeshDeathImpulseScaleField() { return { this, "APrimalTargetableActor.DestructibleMeshDeathImpulseScale" }; }
	FieldValue<float> LastReplicatedHealthValueField() { return { this, "APrimalTargetableActor.LastReplicatedHealthValue" }; }
	FieldValue<TEnumAsByte<enum EShooterPhysMaterialType::Type>> TargetableDamageFXDefaultPhysMaterialField() { return { this, "APrimalTargetableActor.TargetableDamageFXDefaultPhysMaterial" }; }
	//FieldValue<TSubclassOf<UPrimalStructureSettings>> StructureSettingsClassField() { return { this, "APrimalTargetableActor.StructureSettingsClass" }; }
	//FieldValue<UPrimalStructureSettings *> MyStructureSettingsCDOField() { return { this, "APrimalTargetableActor.MyStructureSettingsCDO" }; }
	FieldValue<float> LastHealthBeforeTakeDamageField() { return { this, "APrimalTargetableActor.LastHealthBeforeTakeDamage" }; }
	FieldValue<long double> NextAllowRepairTimeField() { return { this, "APrimalTargetableActor.NextAllowRepairTime" }; }
	FieldValue<float> LastPreBlueprintAdjustmentActualDamageField() { return { this, "APrimalTargetableActor.LastPreBlueprintAdjustmentActualDamage" }; }
	FieldValue<float> LastReplicatedHealthField() { return { this, "APrimalTargetableActor.LastReplicatedHealth" }; }

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

	// Functions

	UField * StaticClass() { return NativeCall<UField *>(this, "APrimalTargetableActor.StaticClass"); }
	UObject * GetUObjectInterfaceTargetableInterface() { return NativeCall<UObject *>(this, "APrimalTargetableActor.GetUObjectInterfaceTargetableInterface"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalTargetableActor.PostInitializeComponents"); }
	void Destroyed() { NativeCall<void>(this, "APrimalTargetableActor.Destroyed"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalTargetableActor.BeginPlay"); }
	void FellOutOfWorld(UDamageType * dmgType) { NativeCall<void, UDamageType *>(this, "APrimalTargetableActor.FellOutOfWorld", dmgType); }
	bool IsDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsDead"); }
	void AdjustDamage(float * Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float *, FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	float TakeDamage(float Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool Die(float KillingDamage, FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void PlayDyingGeneric_Implementation(float KillingDamage, FPointDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingGeneric_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial_Implementation(float KillingDamage, FRadialDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingRadial_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void GetDestructionEffectTransform(FVector * OutLocation, FRotator * OutRotation) { NativeCall<void, FVector *, FRotator *>(this, "APrimalTargetableActor.GetDestructionEffectTransform", OutLocation, OutRotation); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectPoint_Implementation(float DamageTaken, FPointDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectPoint_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial_Implementation(float DamageTaken, FRadialDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectRadial_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffect(float DamageTaken, FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *, bool>(this, "APrimalTargetableActor.PlayHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalTargetableActor.DrawHUD", HUD); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalTargetableActor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetMaxHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetMaxHealth"); }
	float GetLowHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetLowHealthPercentage"); }
	bool IsAlive() { return NativeCall<bool>(this, "APrimalTargetableActor.IsAlive"); }
	FString * GetShortName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalTargetableActor.GetShortName", result); }
	float GetHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealth"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealthPercentage"); }
	float SetHealth(float newHealth) { return NativeCall<float, float>(this, "APrimalTargetableActor.SetHealth", newHealth); }
	void SetMaxHealth(float newMaxHealth) { NativeCall<void, float>(this, "APrimalTargetableActor.SetMaxHealth", newMaxHealth); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "APrimalTargetableActor.IsOfTribe", ID); }
	void NetUpdatedHealth_Implementation(int NewHealth) { NativeCall<void, int>(this, "APrimalTargetableActor.NetUpdatedHealth_Implementation", NewHealth); }
	bool IsTargetableDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsTargetableDead"); }
	EShooterPhysMaterialType::Type GetTargetableDamageFXDefaultPhysMaterial() { return NativeCall<EShooterPhysMaterialType::Type>(this, "APrimalTargetableActor.GetTargetableDamageFXDefaultPhysMaterial"); }
	void Suicide() { NativeCall<void>(this, "APrimalTargetableActor.Suicide"); }
	bool NetExecCommand(FName CommandName, FNetExecParams * ExecParams) { return NativeCall<bool, FName, FNetExecParams *>(this, "APrimalTargetableActor.NetExecCommand", CommandName, ExecParams); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalTargetableActor.UpdatedHealth", bDoReplication); }
	bool AllowRadialDamageWithoutVisiblityTrace() { return NativeCall<bool>(this, "APrimalTargetableActor.AllowRadialDamageWithoutVisiblityTrace"); }
	bool IsInvincible() { return NativeCall<bool>(this, "APrimalTargetableActor.IsInvincible"); }
	void PlayHitEffectGeneric(float DamageTaken, FDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectGeneric", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	bool BPSupressImpactEffects(float DamageTaken, FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath, UPrimitiveComponent * HitComponent) { return NativeCall<bool, float, FDamageEvent *, APawn *, AActor *, bool, UPrimitiveComponent *>(this, "APrimalTargetableActor.BPSupressImpactEffects", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent); }
};

struct APrimalStructure : APrimalTargetableActor
{
	FieldValue<FVector2D> OverlayTooltipPaddingField() { return { this, "APrimalStructure.OverlayTooltipPadding" }; }
	FieldValue<FVector2D> OverlayTooltipScaleField() { return { this, "APrimalStructure.OverlayTooltipScale" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ConsumesPrimalItemField() { return { this, "APrimalStructure.ConsumesPrimalItem" }; }
	FieldValue<float> ScaleFactorField() { return { this, "APrimalStructure.ScaleFactor" }; }
	FieldValue<int> StructureSnapTypeFlagsField() { return { this, "APrimalStructure.StructureSnapTypeFlags" }; }
	//FieldValue<TArray<FPrimalStructureSnapPoint>> SnapPointsField() { return { this, "APrimalStructure.SnapPoints" }; }
	FieldValue<float> PlacementOffsetForVerticalGroundField() { return { this, "APrimalStructure.PlacementOffsetForVerticalGround" }; }
	FieldValue<float> PlacementInitialTracePointOffsetForVerticalGroundField() { return { this, "APrimalStructure.PlacementInitialTracePointOffsetForVerticalGround" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> StructuresAllowedToBeVerticalGroundField() { return { this, "APrimalStructure.StructuresAllowedToBeVerticalGround" }; }
	FieldValue<float> TraceDistanceFromActorToWallVerticalGroundField() { return { this, "APrimalStructure.TraceDistanceFromActorToWallVerticalGround" }; }
	FieldValue<FVector> PlacementHitLocOffsetField() { return { this, "APrimalStructure.PlacementHitLocOffset" }; }
	FieldValue<FVector> PlacementEncroachmentCheckOffsetField() { return { this, "APrimalStructure.PlacementEncroachmentCheckOffset" }; }
	FieldValue<FVector> PlacementEncroachmentBoxExtentField() { return { this, "APrimalStructure.PlacementEncroachmentBoxExtent" }; }
	FieldValue<FVector> PlacementTraceScaleField() { return { this, "APrimalStructure.PlacementTraceScale" }; }
	FieldValue<FVector> SnapAlternatePlacementTraceScaleField() { return { this, "APrimalStructure.SnapAlternatePlacementTraceScale" }; }
	FieldValue<FRotator> PlacementRotOffsetField() { return { this, "APrimalStructure.PlacementRotOffset" }; }
	FieldValue<FRotator> PlacementTraceRotOffsetField() { return { this, "APrimalStructure.PlacementTraceRotOffset" }; }
	FieldValue<FRotator> SnappingRotationOffsetField() { return { this, "APrimalStructure.SnappingRotationOffset" }; }
	FieldValue<float> RepairAmountRemainingField() { return { this, "APrimalStructure.RepairAmountRemaining" }; }
	FieldValue<float> RepairCheckIntervalField() { return { this, "APrimalStructure.RepairCheckInterval" }; }
	FieldValue<float> PlacementFloorCheckZExtentUpField() { return { this, "APrimalStructure.PlacementFloorCheckZExtentUp" }; }
	FieldValue<float> RepairPercentPerIntervalField() { return { this, "APrimalStructure.RepairPercentPerInterval" }; }
	FieldValue<float> DecayDestructionPeriodField() { return { this, "APrimalStructure.DecayDestructionPeriod" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> PreventPlacingOnFloorClassesField() { return { this, "APrimalStructure.PreventPlacingOnFloorClasses" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> AllowPlacingOnFloorClassesField() { return { this, "APrimalStructure.AllowPlacingOnFloorClasses" }; }
	FieldValue<TSubobjectPtr<USceneComponent>> MyRootTransformField() { return { this, "APrimalStructure.MyRootTransform" }; }
	FieldValue<int> TraceIgnoreStructuresWithTypeFlagsField() { return { this, "APrimalStructure.TraceIgnoreStructuresWithTypeFlags" }; }
	FieldValue<int> bTraceCheckOnlyUseStructuresWithTypeFlagsField() { return { this, "APrimalStructure.bTraceCheckOnlyUseStructuresWithTypeFlags" }; }
	FieldArray<char, 6> AllowStructureColorSetsField() { return { this, "APrimalStructure.AllowStructureColorSets" }; }
	FieldValue<FVector> WaterVolumeCheckPointOffsetField() { return { this, "APrimalStructure.WaterVolumeCheckPointOffset" }; }
	FieldValue<float> WaterPlacementMinimumWaterHeightField() { return { this, "APrimalStructure.WaterPlacementMinimumWaterHeight" }; }
	FieldValue<float> PlacementMaxZDeltaField() { return { this, "APrimalStructure.PlacementMaxZDelta" }; }
	FieldValue<float> PlacementChooseRotationMaxRangeOverrideField() { return { this, "APrimalStructure.PlacementChooseRotationMaxRangeOverride" }; }
	FieldValue<float> PlacementMaxRangeField() { return { this, "APrimalStructure.PlacementMaxRange" }; }
	FieldValue<float> MaxSnapLocRangeField() { return { this, "APrimalStructure.MaxSnapLocRange" }; }
	FieldValue<float> SnapOverlapCheckRadiusField() { return { this, "APrimalStructure.SnapOverlapCheckRadius" }; }
	FieldValue<float> MaximumFoundationSupport2DBuildDistanceField() { return { this, "APrimalStructure.MaximumFoundationSupport2DBuildDistance" }; }
	FieldValue<float> PlacementFloorCheckZExtentField() { return { this, "APrimalStructure.PlacementFloorCheckZExtent" }; }
	FieldValue<float> LastHealthPercentageField() { return { this, "APrimalStructure.LastHealthPercentage" }; }
	FieldValue<FRotator> TakeGroundNormalRotationOffsetField() { return { this, "APrimalStructure.TakeGroundNormalRotationOffset" }; }
	FieldValue<float> DemolishGiveItemCraftingResourcePercentageField() { return { this, "APrimalStructure.DemolishGiveItemCraftingResourcePercentage" }; }
	FieldValue<TSubclassOf<APrimalStructure>> AllowReplacementByStructureClassTypeField() { return { this, "APrimalStructure.AllowReplacementByStructureClassType" }; }
	FieldValue<TSubclassOf<APrimalStructure>> PreventReplacementOfStructureClassTypeField() { return { this, "APrimalStructure.PreventReplacementOfStructureClassType" }; }
	FieldValue<float> MaximumHeightAboveWorldGroundField() { return { this, "APrimalStructure.MaximumHeightAboveWorldGround" }; }
	FieldValue<float> MaximumHeightUnderWorldMaxKillZField() { return { this, "APrimalStructure.MaximumHeightUnderWorldMaxKillZ" }; }
	FieldValue<FRotator> PreviewCameraRotationField() { return { this, "APrimalStructure.PreviewCameraRotation" }; }
	FieldValue<FVector> PreviewCameraPivotOffsetField() { return { this, "APrimalStructure.PreviewCameraPivotOffset" }; }
	FieldValue<float> PreviewCameraDistanceScaleFactorField() { return { this, "APrimalStructure.PreviewCameraDistanceScaleFactor" }; }
	FieldValue<float> PreviewCameraDefaultZoomMultiplierField() { return { this, "APrimalStructure.PreviewCameraDefaultZoomMultiplier" }; }
	FieldValue<float> PreviewCameraMaxZoomMultiplierField() { return { this, "APrimalStructure.PreviewCameraMaxZoomMultiplier" }; }
	FieldValue<float> ReturnDamageAmountField() { return { this, "APrimalStructure.ReturnDamageAmount" }; }
	FieldValue<int> StructureRangeTypeFlagField() { return { this, "APrimalStructure.StructureRangeTypeFlag" }; }
	FieldValue<int> LimitMaxStructuresInRangeTypeFlagField() { return { this, "APrimalStructure.LimitMaxStructuresInRangeTypeFlag" }; }
	FieldValue<float> ReturnDamageImpulseField() { return { this, "APrimalStructure.ReturnDamageImpulse" }; }
	FieldValue<TSubclassOf<UDamageType>> ReturnDamageTypeField() { return { this, "APrimalStructure.ReturnDamageType" }; }
	FieldValue<TArray<TSubclassOf<UDamageType>>> ReturnDamageExcludeIncomingTypesField() { return { this, "APrimalStructure.ReturnDamageExcludeIncomingTypes" }; }
	FieldValue<TArray<TSubclassOf<UDamageType>>> ReturnDamageOnlyForIncomingTypesField() { return { this, "APrimalStructure.ReturnDamageOnlyForIncomingTypes" }; }
	FieldValue<int> OwningPlayerIDField() { return { this, "APrimalStructure.OwningPlayerID" }; }
	FieldValue<FString> OwningPlayerNameField() { return { this, "APrimalStructure.OwningPlayerName" }; }
	FieldValue<long double> LastInAllyRangeTimeField() { return { this, "APrimalStructure.LastInAllyRangeTime" }; }
	FieldValue<float> DecayDestructionPeriodMultiplierField() { return { this, "APrimalStructure.DecayDestructionPeriodMultiplier" }; }
	FieldValue<TWeakObjectPtr<APrimalDinoCharacter>> SaddleDinoField() { return { this, "APrimalStructure.SaddleDino" }; }
	FieldValue<TArray<APrimalDinoCharacter *>> LatchedDinosField() { return { this, "APrimalStructure.LatchedDinos" }; }
	FieldValue<UMaterialInterface *> PreviewMaterialField() { return { this, "APrimalStructure.PreviewMaterial" }; }
	FieldValue<FName> PreviewMaterialColorParamNameField() { return { this, "APrimalStructure.PreviewMaterialColorParamName" }; }
	FieldValue<TArray<FVector>> PlacementTraceDirectionsField() { return { this, "APrimalStructure.PlacementTraceDirections" }; }
	FieldValue<TArray<APrimalStructure *>> LinkedStructuresField() { return { this, "APrimalStructure.LinkedStructures" }; }
	FieldValue<TArray<unsigned int>> LinkedStructuresIDField() { return { this, "APrimalStructure.LinkedStructuresID" }; }
	FieldValue<TArray<APrimalStructure *>> StructuresPlacedOnFloorField() { return { this, "APrimalStructure.StructuresPlacedOnFloor" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> SnapToStructureTypesToExcludeField() { return { this, "APrimalStructure.SnapToStructureTypesToExclude" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> SnapFromStructureTypesToExcludeField() { return { this, "APrimalStructure.SnapFromStructureTypesToExclude" }; }
	FieldValue<APrimalStructure *> PlacedOnFloorStructureField() { return { this, "APrimalStructure.PlacedOnFloorStructure" }; }
	FieldValue<APrimalStructure *> PrimarySnappedStructureChildField() { return { this, "APrimalStructure.PrimarySnappedStructureChild" }; }
	FieldValue<APrimalStructure *> PrimarySnappedStructureParentField() { return { this, "APrimalStructure.PrimarySnappedStructureParent" }; }
	FieldValue<FString> OwnerNameField() { return { this, "APrimalStructure.OwnerName" }; }
	FieldArray<__int16, 6> StructureColorsField() { return { this, "APrimalStructure.StructureColors" }; }
	FieldValue<APawn *> AttachedToField() { return { this, "APrimalStructure.AttachedTo" }; }
	FieldValue<APrimalStructureExplosiveTransGPS *> AttachedTransponderField() { return { this, "APrimalStructure.AttachedTransponder" }; }
	FieldValue<unsigned int> StructureIDField() { return { this, "APrimalStructure.StructureID" }; }
	FieldValue<unsigned int> AttachedToDinoID1Field() { return { this, "APrimalStructure.AttachedToDinoID1" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> OnlyAllowStructureClassesToAttachField() { return { this, "APrimalStructure.OnlyAllowStructureClassesToAttach" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> OnlyAllowStructureClassesFromAttachField() { return { this, "APrimalStructure.OnlyAllowStructureClassesFromAttach" }; }
	FieldValue<unsigned int> TaggedIndexField() { return { this, "APrimalStructure.TaggedIndex" }; }
	FieldValue<unsigned int> TaggedIndexTwoField() { return { this, "APrimalStructure.TaggedIndexTwo" }; }
	FieldValue<unsigned int> ProcessTreeTagField() { return { this, "APrimalStructure.ProcessTreeTag" }; }
	FieldValue<long double> LastStructureStasisTimeField() { return { this, "APrimalStructure.LastStructureStasisTime" }; }
	FieldValue<long double> LastColorizationTimeField() { return { this, "APrimalStructure.LastColorizationTime" }; }
	FieldValue<UMaterialInterface *> StructureIconMaterialField() { return { this, "APrimalStructure.StructureIconMaterial" }; }
	FieldValue<FVector> SpawnEmitterLocationOffsetField() { return { this, "APrimalStructure.SpawnEmitterLocationOffset" }; }
	FieldValue<FRotator> SpawnEmitterRotationOffsetField() { return { this, "APrimalStructure.SpawnEmitterRotationOffset" }; }
	FieldValue<TSubclassOf<UPrimalItem>> PickupGivesItemField() { return { this, "APrimalStructure.PickupGivesItem" }; }
	FieldValue<float> ExcludeInStructuresRadiusField() { return { this, "APrimalStructure.ExcludeInStructuresRadius" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> ExcludeInStructuresRadiusClassesField() { return { this, "APrimalStructure.ExcludeInStructuresRadiusClasses" }; }
	FieldValue<float> LastFadeOpacityField() { return { this, "APrimalStructure.LastFadeOpacity" }; }
	FieldValue<bool> bClientAddedToStructuresArrayField() { return { this, "APrimalStructure.bClientAddedToStructuresArray" }; }
	FieldValue<long double> LastFailedPinTimeField() { return { this, "APrimalStructure.LastFailedPinTime" }; }
	FieldValue<TArray<FString>> PreventBuildStructureReasonStringOverridesField() { return { this, "APrimalStructure.PreventBuildStructureReasonStringOverrides" }; }
	FieldValue<FVector> FloatingHudLocTextOffsetField() { return { this, "APrimalStructure.FloatingHudLocTextOffset" }; }
	FieldValue<float> LastBumpedDamageTimeField() { return { this, "APrimalStructure.LastBumpedDamageTime" }; }
	FieldValue<int> ForceLimitStructuresInRangeField() { return { this, "APrimalStructure.ForceLimitStructuresInRange" }; }
	FieldValue<int> PlacementMaterialForwardDirIndexField() { return { this, "APrimalStructure.PlacementMaterialForwardDirIndex" }; }
	FieldValue<float> ForcePreventPlacingInOfflineRaidStructuresRadiusField() { return { this, "APrimalStructure.ForcePreventPlacingInOfflineRaidStructuresRadius" }; }
	FieldValue<FName> AttachToStaticMeshSocketNameBaseField() { return { this, "APrimalStructure.AttachToStaticMeshSocketNameBase" }; }
	FieldValue<TSubclassOf<AActor>> ItemsUseAlternateActorClassAttachmentField() { return { this, "APrimalStructure.ItemsUseAlternateActorClassAttachment" }; }
	FieldValue<float> UnstasisAutoDestroyAfterTimeField() { return { this, "APrimalStructure.UnstasisAutoDestroyAfterTime" }; }
	FieldValue<char> TribeGroupStructureRankField() { return { this, "APrimalStructure.TribeGroupStructureRank" }; }
	FieldValue<char> TribeRankHUDYOffsetField() { return { this, "APrimalStructure.TribeRankHUDYOffset" }; }
	FieldValue<TArray<TSubclassOf<APrimalDinoCharacter>>> PreventSaddleDinoClassesField() { return { this, "APrimalStructure.PreventSaddleDinoClasses" }; }
	FieldValue<TArray<TSubclassOf<APrimalDinoCharacter>>> AllowSaddleDinoClassesField() { return { this, "APrimalStructure.AllowSaddleDinoClasses" }; }
	FieldValue<FName> PlaceOnWallUseStaticMeshTagField() { return { this, "APrimalStructure.PlaceOnWallUseStaticMeshTag" }; }
	FieldValue<TSubclassOf<APrimalStructure>> SnapStructureClassField() { return { this, "APrimalStructure.SnapStructureClass" }; }
	FieldValue<float> DemolishActivationTimeField() { return { this, "APrimalStructure.DemolishActivationTime" }; }
	FieldValue<FVector> GroundEncroachmentCheckLocationOffsetField() { return { this, "APrimalStructure.GroundEncroachmentCheckLocationOffset" }; }
	FieldValue<int> StructureMinAllowedVersionField() { return { this, "APrimalStructure.StructureMinAllowedVersion" }; }
	FieldValue<int> SavedStructureMinAllowedVersionField() { return { this, "APrimalStructure.SavedStructureMinAllowedVersion" }; }
	FieldValue<float> OverrideEnemyFoundationPreventionRadiusField() { return { this, "APrimalStructure.OverrideEnemyFoundationPreventionRadius" }; }
	FieldValue<int> BedIDField() { return { this, "APrimalStructure.BedID" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> ForceAllowWallAttachmentClassesField() { return { this, "APrimalStructure.ForceAllowWallAttachmentClasses" }; }
	FieldValue<float> LimitMaxStructuresInRangeRadiusField() { return { this, "APrimalStructure.LimitMaxStructuresInRangeRadius" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> FastDecayLinkedStructureClassesField() { return { this, "APrimalStructure.FastDecayLinkedStructureClasses" }; }
	FieldValue<float> PlacementMaxZAbovePlayerHeightField() { return { this, "APrimalStructure.PlacementMaxZAbovePlayerHeight" }; }

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
	BitFieldValue<bool, unsigned __int32> bBlueprintDrawHUD() { return { this, "APrimalStructure.bBlueprintDrawHUD" }; }
	BitFieldValue<bool, unsigned __int32> bUsesWorldSpaceMaterial() { return { this, "APrimalStructure.bUsesWorldSpaceMaterial" }; }
	BitFieldValue<bool, unsigned __int32> bForceIgnoreStationaryObjectTrace() { return { this, "APrimalStructure.bForceIgnoreStationaryObjectTrace" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowNearSupplyCrateSpawns() { return { this, "APrimalStructure.bForceAllowNearSupplyCrateSpawns" }; }
	BitFieldValue<bool, unsigned __int32> bBPPostSetStructureCollisionChannels() { return { this, "APrimalStructure.bBPPostSetStructureCollisionChannels" }; }
	BitFieldValue<bool, unsigned __int32> bPickupGiveItemRequiresAccess() { return { this, "APrimalStructure.bPickupGiveItemRequiresAccess" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowPickupGiveItem() { return { this, "APrimalStructure.bUseBPAllowPickupGiveItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAttachedChildStructures() { return { this, "APrimalStructure.bPreventAttachedChildStructures" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPreviewIfWeaponPlaced() { return { this, "APrimalStructure.bPreventPreviewIfWeaponPlaced" }; }
	BitFieldValue<bool, unsigned __int32> bStructuresInRangeTypeFlagUseAltCollisionChannel() { return { this, "APrimalStructure.bStructuresInRangeTypeFlagUseAltCollisionChannel" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructure.GetPrivateStaticClass"); }
	int GetHitPawnCollisionGroup() { return NativeCall<int>(this, "APrimalStructure.GetHitPawnCollisionGroup"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PreInitializeComponents"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructure.BeginPlay"); }
	void SetLinkedIDs() { NativeCall<void>(this, "APrimalStructure.SetLinkedIDs"); }
	void ApplyLinkedIDs(bool bRelinkParents) { NativeCall<void, bool>(this, "APrimalStructure.ApplyLinkedIDs", bRelinkParents); }
	static APrimalStructure * GetFromID(UWorld * World, unsigned int TheStructureID) { return NativeCall<APrimalStructure *, UWorld *, unsigned int>(nullptr, "APrimalStructure.GetFromID", World, TheStructureID); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "APrimalStructure.OnRep_AttachmentReplication"); }
	void SetDinoSaddleAttachment(APrimalDinoCharacter * myDino, FName BoneName, FVector RelLoc, FRotator RelRot, bool bMaintainWorldPosition) { NativeCall<void, APrimalDinoCharacter *, FName, FVector, FRotator, bool>(this, "APrimalStructure.SetDinoSaddleAttachment", myDino, BoneName, RelLoc, RelRot, bMaintainWorldPosition); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.LoadedFromSaveGame"); }
	void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.SetStructureCollisionChannels"); }
	void ApplyScale(bool bOnlyInitPhysics) { NativeCall<void, bool>(this, "APrimalStructure.ApplyScale", bOnlyInitPhysics); }
	void PostSpawnInitialize(FVector * SpawnLocation, FRotator * SpawnRotation, AActor * InOwner, APawn * InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay) { NativeCall<void, FVector *, FRotator *, AActor *, APawn *, bool, bool, bool, bool>(this, "APrimalStructure.PostSpawnInitialize", SpawnLocation, SpawnRotation, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay); }
	bool UseDynamicMobility() { return NativeCall<bool>(this, "APrimalStructure.UseDynamicMobility"); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructure.SetStaticMobility"); }
	void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructure.PrepareAsPlacementPreview"); }
	bool TickPlacingStructure(APrimalStructurePlacer * PlacerActor, float DeltaTime) { return NativeCall<bool, APrimalStructurePlacer *, float>(this, "APrimalStructure.TickPlacingStructure", PlacerActor, DeltaTime); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool>(this, "APrimalStructure.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement); }
	static bool IsPointNearSupplyCrateSpawn(UWorld * theWorld, FVector AtPoint) { return NativeCall<bool, UWorld *, FVector>(nullptr, "APrimalStructure.IsPointNearSupplyCrateSpawn", theWorld, AtPoint); }
	TSubclassOf<APrimalStructure> * GetBedFilterClass_Implementation(TSubclassOf<APrimalStructure> * result) { return NativeCall<TSubclassOf<APrimalStructure> *, TSubclassOf<APrimalStructure> *>(this, "APrimalStructure.GetBedFilterClass_Implementation", result); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PostInitializeComponents"); }
	bool AllowSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructure.AllowSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	void NetUpdateOriginalOwnerNameAndID_Implementation(int NewOriginalOwnerID, FString * NewOriginalOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NonPlayerFinalStructurePlacement(int PlacementTargetingTeam, int PlacementOwningPlayerID, FString * PlacementOwningPlayerName, APrimalStructure * ForcePrimaryParent) { NativeCall<void, int, int, FString *, APrimalStructure *>(this, "APrimalStructure.NonPlayerFinalStructurePlacement", PlacementTargetingTeam, PlacementOwningPlayerID, PlacementOwningPlayerName, ForcePrimaryParent); }
	bool FinalStructurePlacement(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bIsFlipped) { return NativeCall<bool, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructure.FinalStructurePlacement", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bIsFlipped); }
	FVector * GetSnapPointLocation(FVector * result, int SnapPointIndex, bool bOverrideTransform, FVector OverrideLoc, FRotator OverrideRot) { return NativeCall<FVector *, FVector *, int, bool, FVector, FRotator>(this, "APrimalStructure.GetSnapPointLocation", result, SnapPointIndex, bOverrideTransform, OverrideLoc, OverrideRot); }
	bool GetSnapToLocation(FVector * AtLoc, FRotator * AtRotation, FPlacementData * OutPlacementData, APrimalStructure ** OutParentStructure, int * OutSnapToIndex, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, FVector *, FRotator *, FPlacementData *, APrimalStructure **, int *, APlayerController *, bool, int>(this, "APrimalStructure.GetSnapToLocation", AtLoc, AtRotation, OutPlacementData, OutParentStructure, OutSnapToIndex, PC, bFinalPlacement, SnapPointCycle); }
	void GetSnapToParentStructures(FVector AtLocation, FRotator AtRotation, int InitialMySnapIndex, APrimalStructure * InitialParent, TArray<APrimalStructure *> * SnapToParentStructures, APlayerController * PC) { NativeCall<void, FVector, FRotator, int, APrimalStructure *, TArray<APrimalStructure *> *, APlayerController *>(this, "APrimalStructure.GetSnapToParentStructures", AtLocation, AtRotation, InitialMySnapIndex, InitialParent, SnapToParentStructures, PC); }
	bool GetPlacingGroundLocation(AActor ** OutHitActor, FPlacementData * OutPlacementData, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, AActor **, FPlacementData *, APlayerController *, bool, int>(this, "APrimalStructure.GetPlacingGroundLocation", OutHitActor, OutPlacementData, PC, bFinalPlacement, SnapPointCycle); }
	bool ClampBuildLocation(FVector FromLocation, AActor ** OutHitActor, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, APlayerController * PC) { return NativeCall<bool, FVector, AActor **, FPlacementData *, bool, APlayerController *>(this, "APrimalStructure.ClampBuildLocation", FromLocation, OutHitActor, OutPlacementData, bDontAdjustForMaxRange, PC); }
	bool CheckNotEncroaching(FVector PlacementLocation, FRotator PlacementRotation, AActor * DinoCharacter, APrimalStructure * SnappedToParentStructure, APrimalStructure * ReplacesStructure, bool bUseAlternatePlacementTraceScale) { return NativeCall<bool, FVector, FRotator, AActor *, APrimalStructure *, APrimalStructure *, bool>(this, "APrimalStructure.CheckNotEncroaching", PlacementLocation, PlacementRotation, DinoCharacter, SnappedToParentStructure, ReplacesStructure, bUseAlternatePlacementTraceScale); }
	APrimalStructure * GetNearbyFoundation(FPlacementData * PlacementData, APlayerController * ForPC) { return NativeCall<APrimalStructure *, FPlacementData *, APlayerController *>(this, "APrimalStructure.GetNearbyFoundation", PlacementData, ForPC); }
	void NetSpawnCoreStructureDeathActor_Implementation() { NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor_Implementation"); }
	float TakeDamage(float Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>(this, "APrimalStructure.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool Die(float KillingDamage, FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>(this, "APrimalStructure.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalStructure.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	static void ReprocessTree(TArray<APrimalStructure *> * StartingStructures, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, TArray<APrimalStructure *> *, AController *, AActor *>(nullptr, "APrimalStructure.ReprocessTree", StartingStructures, InstigatorController, DamageCauser); }
	static void FindFoundations(APrimalStructure * StartingStructure, TArray<APrimalStructure *> * Foundations) { NativeCall<void, APrimalStructure *, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FindFoundations", StartingStructure, Foundations); }
	static void CullAgainstFoundations(APrimalStructure ** StartingStructure, TArray<APrimalStructure *> * Foundations) { NativeCall<void, APrimalStructure **, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructure, Foundations); }
	static void FlagReachable(TArray<APrimalStructure *> * Foundations) { NativeCall<void, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FlagReachable", Foundations); }
	static void FlagReachable(APrimalStructure * StartingStructure) { NativeCall<void, APrimalStructure *>(nullptr, "APrimalStructure.FlagReachable", StartingStructure); }
	static void CleanUpTree(APrimalStructure * StartingStructure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>(nullptr, "APrimalStructure.CleanUpTree", StartingStructure, InstigatorController, DamageCauser); }
	void RemoveLinkedStructure(APrimalStructure * Structure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>(this, "APrimalStructure.RemoveLinkedStructure", Structure, InstigatorController, DamageCauser); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructure.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void RefreshStructureColors() { NativeCall<void>(this, "APrimalStructure.RefreshStructureColors"); }
	FLinearColor * GetStructureColorForID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>(this, "APrimalStructure.GetStructureColorForID", result, SetNum, ID); }
	bool Internal_IsInSnapChain(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.Internal_IsInSnapChain", theStructure); }
	void GetAllLinkedStructures(TArray<APrimalStructure *> * OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure *> *>(this, "APrimalStructure.GetAllLinkedStructures", OutLinkedStructures); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructure.TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructure.ClientMultiUse", ForPC, UseIndex); }
	void Demolish(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.Demolish", ForPC); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructure.DrawHUD", HUD); }
	bool DoAnyTribePermissionsRestrict(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.DoAnyTribePermissionsRestrict", ForPC); }
	void DrawStructureTooltip(AShooterHUD * HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD *, bool>(this, "APrimalStructure.DrawStructureTooltip", HUD, bForMultiUseSelector); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructure.ChangeActorTeam", NewTeam); }
	void NetUpdateTeamAndOwnerName_Implementation(int NewTeam, FString * NewOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateTeamAndOwnerName_Implementation", NewTeam, NewOwnerName); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetDescriptiveName", result); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructure.UpdatedHealth", bDoReplication); }
	void StartRepair() { NativeCall<void>(this, "APrimalStructure.StartRepair"); }
	void RepairCheckTimer() { NativeCall<void>(this, "APrimalStructure.RepairCheckTimer"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructure.Stasis"); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructure.Destroyed"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructure.Unstasis"); }
	UPrimitiveComponent * GetPrimaryHitComponent() { return NativeCall<UPrimitiveComponent *>(this, "APrimalStructure.GetPrimaryHitComponent"); }
	static void GetNearbyStructuresOfClass(UWorld * World, TSubclassOf<APrimalStructure> StructureClass, FVector * Location, float Range, TArray<APrimalStructure *> * Structures) { NativeCall<void, UWorld *, TSubclassOf<APrimalStructure>, FVector *, float, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.GetNearbyStructuresOfClass", World, StructureClass, Location, Range, Structures); }
	void ClientUpdateLinkedStructures_Implementation(TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, TArray<unsigned int> *>(this, "APrimalStructure.ClientUpdateLinkedStructures_Implementation", NewLinkedStructures); }
	bool AllowColoringBy(APlayerController * ForPC, UObject * anItem) { return NativeCall<bool, APlayerController *, UObject *>(this, "APrimalStructure.AllowColoringBy", ForPC, anItem); }
	void ServerRequestUseItemWithActor(APlayerController * ForPC, UObject * anItem, int AdditionalData) { NativeCall<void, APlayerController *, UObject *, int>(this, "APrimalStructure.ServerRequestUseItemWithActor", ForPC, anItem, AdditionalData); }
	void ApplyColorToRegions(__int16 CustomColorID, bool * ApplyToRegions) { NativeCall<void, __int16, bool *>(this, "APrimalStructure.ApplyColorToRegions", CustomColorID, ApplyToRegions); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, FVector *>(this, "APrimalStructure.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects_Implementation"); }
	void FadeInEffectTick() { NativeCall<void>(this, "APrimalStructure.FadeInEffectTick"); }
	float AddAggroOnBump(APrimalDinoCharacter * BumpedBy) { return NativeCall<float, APrimalDinoCharacter *>(this, "APrimalStructure.AddAggroOnBump", BumpedBy); }
	int GetNumStructuresInRange(FVector AtLocation, float WithinRange) { return NativeCall<int, FVector, float>(this, "APrimalStructure.GetNumStructuresInRange", AtLocation, WithinRange); }
	static void GetStructuresInRange(UWorld * theWorld, FVector AtLocation, float WithinRange, TSubclassOf<APrimalStructure> StructureClass, TArray<APrimalStructure *> * StructuresOut, bool bUseInternalOctree, APrimalStructure * IgnoreStructure) { NativeCall<void, UWorld *, FVector, float, TSubclassOf<APrimalStructure>, TArray<APrimalStructure *> *, bool, APrimalStructure *>(nullptr, "APrimalStructure.GetStructuresInRange", theWorld, AtLocation, WithinRange, StructureClass, StructuresOut, bUseInternalOctree, IgnoreStructure); }
	static int GetNumStructuresInRangeStructureTypeFlag(UWorld * theWorld, FVector AtLocation, int TypeFlag, float WithinRange, bool bCheckBPCountStructureInRange, bool bUseInternalOctree, APrimalStructure * IgnoreStructure, bool bCheckWithAltCollisionChannel) { return NativeCall<int, UWorld *, FVector, int, float, bool, bool, APrimalStructure *, bool>(nullptr, "APrimalStructure.GetNumStructuresInRangeStructureTypeFlag", theWorld, AtLocation, TypeFlag, WithinRange, bCheckBPCountStructureInRange, bUseInternalOctree, IgnoreStructure, bCheckWithAltCollisionChannel); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.AllowPickupForItem", ForPC); }
	bool AllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>(this, "APrimalStructure.AllowSnappingWith", OtherStructure, ForPC); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructure.AllowStructureAccess", ForPC); }
	static bool IsPointObstructedByWorldGeometry(UWorld * ForWorld, FVector ThePoint, bool bIgnoreTerrain, bool bOnlyCheckTerrain, bool bIgnoreFoliage, float OBSTRUCTION_CHECK_DIST) { return NativeCall<bool, UWorld *, FVector, bool, bool, bool, float>(nullptr, "APrimalStructure.IsPointObstructedByWorldGeometry", ForWorld, ThePoint, bIgnoreTerrain, bOnlyCheckTerrain, bIgnoreFoliage, OBSTRUCTION_CHECK_DIST); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalStructure.CanBePainted"); }
	UPaintingTexture * GetPaintingTexture() { return NativeCall<UPaintingTexture *>(this, "APrimalStructure.GetPaintingTexture"); }
	APrimalStructureDoor * GetLinkedDoor() { return NativeCall<APrimalStructureDoor *>(this, "APrimalStructure.GetLinkedDoor"); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetEntryString", result); }
	UTexture2D * GetEntryIcon(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D *, UObject *, bool>(this, "APrimalStructure.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	UMaterialInterface * GetEntryIconMaterial(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface *, UObject *, bool>(this, "APrimalStructure.GetEntryIconMaterial", AssociatedDataObject, bIsEnabled); }
	UObject * GetUObjectInterfaceDataListEntryInterface() { return NativeCall<UObject *>(this, "APrimalStructure.GetUObjectInterfaceDataListEntryInterface"); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetEntryDescription", result); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructure.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void ClearCustomColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors_Implementation"); }
	bool PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure> FloorClass) { return NativeCall<bool, TSubclassOf<APrimalStructure>>(this, "APrimalStructure.PreventPlacingOnFloorClass", FloorClass); }
	void UpdateTribeGroupStructureRank_Implementation(char NewRank) { NativeCall<void, char>(this, "APrimalStructure.UpdateTribeGroupStructureRank_Implementation", NewRank); }
	bool AllowPlacingOnSaddleParentClass(APrimalDinoCharacter * theDino, bool bForcePrevent) { return NativeCall<bool, APrimalDinoCharacter *, bool>(this, "APrimalStructure.AllowPlacingOnSaddleParentClass", theDino, bForcePrevent); }
	static APrimalStructure * GetClosestStructureToPoint(UWorld * ForWorld, FVector AtPoint, float OverlapRadius) { return NativeCall<APrimalStructure *, UWorld *, FVector, float>(nullptr, "APrimalStructure.GetClosestStructureToPoint", ForWorld, AtPoint, OverlapRadius); }
	float GetStructureDemolishTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureDemolishTime"); }
	bool IsOnlyLinkedToFastDecayStructures() { return NativeCall<bool>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructures"); }
	bool IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure *, DefaultKeyFuncs<APrimalStructure *, 0>, FDefaultSetAllocator> * TestedStructures) { return NativeCall<bool, TSet<APrimalStructure *, DefaultKeyFuncs<APrimalStructure *, 0>, FDefaultSetAllocator> *>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal", TestedStructures); }
	bool CanAutoDemolish() { return NativeCall<bool>(this, "APrimalStructure.CanAutoDemolish"); }
	void DelayedDisableSnapParent() { NativeCall<void>(this, "APrimalStructure.DelayedDisableSnapParent"); }
	void SetEnabledPrimarySnappedStructureParent_Implementation(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent_Implementation", bEnabled); }
	void SetEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabled", bEnabled); }
	bool AllowCreateDynamicMaterials() { return NativeCall<bool>(this, "APrimalStructure.AllowCreateDynamicMaterials"); }
	void CreateDynamicMaterials() { NativeCall<void>(this, "APrimalStructure.CreateDynamicMaterials"); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.FinalLoadedFromSaveGame"); }
	void UpdateStencilValues() { NativeCall<void>(this, "APrimalStructure.UpdateStencilValues"); }
	FRotator * GetPlayerSpawnRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructure.GetPlayerSpawnRotation", result); }
	void BPPlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalStructure.BPPlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	static void StaticRegisterNativesAPrimalStructure() { NativeCall<void>(nullptr, "APrimalStructure.StaticRegisterNativesAPrimalStructure"); }
	bool BPAllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>(this, "APrimalStructure.BPAllowSnappingWith", OtherStructure, ForPC); }
	bool BPForceConsideredEnemyFoundation(APlayerController * PC, APrimalStructure * ForNewStructure, FVector * TestAtLocation) { return NativeCall<bool, APlayerController *, APrimalStructure *, FVector *>(this, "APrimalStructure.BPForceConsideredEnemyFoundation", PC, ForNewStructure, TestAtLocation); }
	bool BPImpactEffect(FHitResult * HitRes, FVector * ShootDirection) { return NativeCall<bool, FHitResult *, FVector *>(this, "APrimalStructure.BPImpactEffect", HitRes, ShootDirection); }
	int BPIsAllowedToBuild(FPlacementData * OutPlacementData, int CurrentAllowedReason) { return NativeCall<int, FPlacementData *, int>(this, "APrimalStructure.BPIsAllowedToBuild", OutPlacementData, CurrentAllowedReason); }
	int BPIsAllowedToBuildEx(FPlacementData * OutPlacementData, int CurrentAllowedReason, APlayerController * PC, bool bFinalPlacement) { return NativeCall<int, FPlacementData *, int, APlayerController *, bool>(this, "APrimalStructure.BPIsAllowedToBuildEx", OutPlacementData, CurrentAllowedReason, PC, bFinalPlacement); }
	FString * BPOverrideCantBuildReasonString(FString * result, int CantBuildReason) { return NativeCall<FString *, FString *, int>(this, "APrimalStructure.BPOverrideCantBuildReasonString", result, CantBuildReason); }
	bool BPPreventPlacingOnFloorStructure(FPlacementData * theOutPlacementData, APrimalStructure * FloorStructure) { return NativeCall<bool, FPlacementData *, APrimalStructure *>(this, "APrimalStructure.BPPreventPlacingOnFloorStructure", theOutPlacementData, FloorStructure); }
	bool BPPreventPlacingStructureOntoMe(APlayerController * PC, APrimalStructure * ForNewStructure, FHitResult * ForHitResult) { return NativeCall<bool, APlayerController *, APrimalStructure *, FHitResult *>(this, "APrimalStructure.BPPreventPlacingStructureOntoMe", PC, ForNewStructure, ForHitResult); }
	bool BPPreventSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructure.BPPreventSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	bool BPPreventUsingAsFloorForStructure(FPlacementData * theOutPlacementData, APrimalStructure * StructureToPlaceOnMe) { return NativeCall<bool, FPlacementData *, APrimalStructure *>(this, "APrimalStructure.BPPreventUsingAsFloorForStructure", theOutPlacementData, StructureToPlaceOnMe); }
	void BPRefreshedStructureColors() { NativeCall<void>(this, "APrimalStructure.BPRefreshedStructureColors"); }
	bool BPUseCountStructureInRange() { return NativeCall<bool>(this, "APrimalStructure.BPUseCountStructureInRange"); }
	void ClientUpdateLinkedStructures(TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, TArray<unsigned int> *>(this, "APrimalStructure.ClientUpdateLinkedStructures", NewLinkedStructures); }
	void MultiAddStructuresPlacedOnFloor(APrimalStructure * structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructure.MultiAddStructuresPlacedOnFloor", structure); }
	void NetDoSpawnEffects() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects"); }
	void NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, FString * NewOriginalOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NetUpdateTeamAndOwnerName(int NewTeam, FString * NewOwnerName) { NativeCall<void, int, FString *>(this, "APrimalStructure.NetUpdateTeamAndOwnerName", NewTeam, NewOwnerName); }
};

struct APrimalStructureDoor : APrimalStructure
{
	FieldValue<TSubobjectPtr<USceneComponent>> MyDoorTransformField() { return { this, "APrimalStructureDoor.MyDoorTransform" }; }
	FieldValue<float> RotationSpeedField() { return { this, "APrimalStructureDoor.RotationSpeed" }; }
	FieldValue<USoundCue *> DoorOpenSoundField() { return { this, "APrimalStructureDoor.DoorOpenSound" }; }
	FieldValue<USoundCue *> DoorCloseSoundField() { return { this, "APrimalStructureDoor.DoorCloseSound" }; }
	FieldValue<unsigned int> CurrentPinCodeField() { return { this, "APrimalStructureDoor.CurrentPinCode" }; }
	FieldValue<float> DoorStateChangeIgnoreEncroachmentIntervalField() { return { this, "APrimalStructureDoor.DoorStateChangeIgnoreEncroachmentInterval" }; }
	FieldValue<char> DoorOpenStateField() { return { this, "APrimalStructureDoor.DoorOpenState" }; }
	FieldValue<char> ClientPrevDoorOpenStateField() { return { this, "APrimalStructureDoor.ClientPrevDoorOpenState" }; }
	FieldValue<long double> LastLockStateChangeTimeField() { return { this, "APrimalStructureDoor.LastLockStateChangeTime" }; }
	FieldValue<FRotator> SecondDoorDefaultRotField() { return { this, "APrimalStructureDoor.SecondDoorDefaultRot" }; }
	FieldValue<float> CurrentDoorAngleField() { return { this, "APrimalStructureDoor.CurrentDoorAngle" }; }
	FieldValue<USoundBase *> UnlockDoorSoundField() { return { this, "APrimalStructureDoor.UnlockDoorSound" }; }
	FieldValue<USoundBase *> LockDoorSoundField() { return { this, "APrimalStructureDoor.LockDoorSound" }; }
	FieldValue<USoundBase *> LockedSoundField() { return { this, "APrimalStructureDoor.LockedSound" }; }
	FieldValue<long double> LastPinOpenSuccessTimeField() { return { this, "APrimalStructureDoor.LastPinOpenSuccessTime" }; }
	FieldValue<long double> LastDoorStateChangeTimeField() { return { this, "APrimalStructureDoor.LastDoorStateChangeTime" }; }
	FieldValue<char> DelayedDoorStateField() { return { this, "APrimalStructureDoor.DelayedDoorState" }; }

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

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureDoor.BeginPlay"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureDoor.Tick", DeltaSeconds); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureDoor.DrawHUD", HUD); }
	void GotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState", DoorState); }
	void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState", DoorState, DelayTime); }
	void DelayedGotoDoorStateTimer() { NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureDoor.TryMultiUse", ForPC, UseIndex); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.CanOpen", ForPC); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureDoor.GetDescriptiveName", result); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureDoor.SetStaticMobility"); }
	void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState_Implementation", DoorState); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents"); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.AllowStructureAccess", ForPC); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructureDoor.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureDoor.AllowPickupForItem", ForPC); }
	bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent * HitComponent, AActor * EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent *, AActor *>(this, "APrimalStructureDoor.AllowIgnoreCharacterEncroachment_Implementation", HitComponent, EncroachingCharacter); }
	static void StaticRegisterNativesAPrimalStructureDoor() { NativeCall<void>(nullptr, "APrimalStructureDoor.StaticRegisterNativesAPrimalStructureDoor"); }
};

struct APrimalStructureItemContainer : APrimalStructure
{
	FieldValue<UPrimalInventoryComponent *> MyInventoryComponentField() { return { this, "APrimalStructureItemContainer.MyInventoryComponent" }; }
	FieldValue<TSubclassOf<UPrimalItem>> BatteryClassOverrideField() { return { this, "APrimalStructureItemContainer.BatteryClassOverride" }; }
	FieldValue<int> PoweredOverrideCounterField() { return { this, "APrimalStructureItemContainer.PoweredOverrideCounter" }; }
	FieldValue<float> NotifyNearbyPowerGeneratorDistanceField() { return { this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorDistance" }; }
	FieldValue<int> NotifyNearbyPowerGeneratorOctreeGroupField() { return { this, "APrimalStructureItemContainer.NotifyNearbyPowerGeneratorOctreeGroup" }; }
	FieldValue<TArray<UMaterialInterface *>> ActivateMaterialsField() { return { this, "APrimalStructureItemContainer.ActivateMaterials" }; }
	FieldValue<TArray<UMaterialInterface *>> InActivateMaterialsField() { return { this, "APrimalStructureItemContainer.InActivateMaterials" }; }
	FieldValue<FString> BoxNameField() { return { this, "APrimalStructureItemContainer.BoxName" }; }
	FieldValue<float> InsulationRangeField() { return { this, "APrimalStructureItemContainer.InsulationRange" }; }
	FieldValue<float> HyperThermiaInsulationField() { return { this, "APrimalStructureItemContainer.HyperThermiaInsulation" }; }
	FieldValue<float> HypoThermiaInsulationField() { return { this, "APrimalStructureItemContainer.HypoThermiaInsulation" }; }
	FieldValue<float> ContainerActiveDecreaseHealthSpeedField() { return { this, "APrimalStructureItemContainer.ContainerActiveDecreaseHealthSpeed" }; }
	FieldValue<float> FuelConsumptionIntervalsMultiplierField() { return { this, "APrimalStructureItemContainer.FuelConsumptionIntervalsMultiplier" }; }
	FieldValue<float> DropInventoryOnDestructionLifespanField() { return { this, "APrimalStructureItemContainer.DropInventoryOnDestructionLifespan" }; }
	FieldValue<FString> ActivateContainerStringField() { return { this, "APrimalStructureItemContainer.ActivateContainerString" }; }
	FieldValue<FString> DeactivateContainerStringField() { return { this, "APrimalStructureItemContainer.DeactivateContainerString" }; }
	FieldValue<TSubclassOf<UDamageType>> ContainerActiveHealthDecreaseDamageTypePassiveField() { return { this, "APrimalStructureItemContainer.ContainerActiveHealthDecreaseDamageTypePassive" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> ActiveRequiresFuelItemsField() { return { this, "APrimalStructureItemContainer.ActiveRequiresFuelItems" }; }
	FieldValue<TArray<float>> FuelItemsConsumeIntervalField() { return { this, "APrimalStructureItemContainer.FuelItemsConsumeInterval" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> FuelItemsConsumedGiveItemsField() { return { this, "APrimalStructureItemContainer.FuelItemsConsumedGiveItems" }; }
	FieldValue<long double> NetDestructionTimeField() { return { this, "APrimalStructureItemContainer.NetDestructionTime" }; }
	FieldValue<unsigned int> CurrentPinCodeField() { return { this, "APrimalStructureItemContainer.CurrentPinCode" }; }
	FieldValue<long double> CurrentFuelTimeCacheField() { return { this, "APrimalStructureItemContainer.CurrentFuelTimeCache" }; }
	FieldValue<long double> LastCheckedFuelTimeField() { return { this, "APrimalStructureItemContainer.LastCheckedFuelTime" }; }
	FieldValue<int> LinkedPowerJunctionStructureIDField() { return { this, "APrimalStructureItemContainer.LinkedPowerJunctionStructureID" }; }
	FieldValue<int> CurrentItemCountField() { return { this, "APrimalStructureItemContainer.CurrentItemCount" }; }
	FieldValue<int> MaxItemCountField() { return { this, "APrimalStructureItemContainer.MaxItemCount" }; }
	FieldValue<TWeakObjectPtr<APrimalStructure>> LinkedPowerJunctionStructureField() { return { this, "APrimalStructureItemContainer.LinkedPowerJunctionStructure" }; }
	FieldValue<TSubclassOf<UPrimalItem>> NextConsumeFuelGiveItemTypeField() { return { this, "APrimalStructureItemContainer.NextConsumeFuelGiveItemType" }; }
	FieldValue<long double> LastLockStateChangeTimeField() { return { this, "APrimalStructureItemContainer.LastLockStateChangeTime" }; }
	FieldValue<long double> LastActiveStateChangeTimeField() { return { this, "APrimalStructureItemContainer.LastActiveStateChangeTime" }; }
	FieldValue<int> LastPowerJunctionLinkIDField() { return { this, "APrimalStructureItemContainer.LastPowerJunctionLinkID" }; }
	FieldValue<float> BasedCharacterDamageIntervalField() { return { this, "APrimalStructureItemContainer.BasedCharacterDamageInterval" }; }
	FieldValue<float> BasedCharacterDamageAmountField() { return { this, "APrimalStructureItemContainer.BasedCharacterDamageAmount" }; }
	FieldValue<TSubclassOf<UDamageType>> BasedCharacterDamageTypeField() { return { this, "APrimalStructureItemContainer.BasedCharacterDamageType" }; }
	FieldValue<TSubclassOf<UPrimalItem>> EngramRequirementClassOverrideField() { return { this, "APrimalStructureItemContainer.EngramRequirementClassOverride" }; }
	FieldValue<AActor *> LinkedBlueprintSpawnActorPointField() { return { this, "APrimalStructureItemContainer.LinkedBlueprintSpawnActorPoint" }; }
	FieldValue<TSubclassOf<APrimalStructureItemContainer>> PoweredNearbyStructureTemplateField() { return { this, "APrimalStructureItemContainer.PoweredNearbyStructureTemplate" }; }
	FieldValue<float> PoweredNearbyStructureRangeField() { return { this, "APrimalStructureItemContainer.PoweredNearbyStructureRange" }; }
	FieldValue<FString> OpenSceneActionNameField() { return { this, "APrimalStructureItemContainer.OpenSceneActionName" }; }
	FieldValue<FString> DisabledOpenSceneActionNameField() { return { this, "APrimalStructureItemContainer.DisabledOpenSceneActionName" }; }
	FieldValue<TSubclassOf<UPrimalItem>> RequiresItemForOpenSceneActionField() { return { this, "APrimalStructureItemContainer.RequiresItemForOpenSceneAction" }; }
	FieldValue<long double> DeathCacheCreationTimeField() { return { this, "APrimalStructureItemContainer.DeathCacheCreationTime" }; }
	FieldValue<long double> LastBasedCharacterDamageTimeField() { return { this, "APrimalStructureItemContainer.LastBasedCharacterDamageTime" }; }
	FieldValue<int> LastBasedCharacterDamageFrameField() { return { this, "APrimalStructureItemContainer.LastBasedCharacterDamageFrame" }; }
	FieldValue<long double> LastSignNamingTimeField() { return { this, "APrimalStructureItemContainer.LastSignNamingTime" }; }
	FieldValue<FVector> JunctionCableBeamOffsetStartField() { return { this, "APrimalStructureItemContainer.JunctionCableBeamOffsetStart" }; }
	FieldValue<FVector> JunctionCableBeamOffsetEndField() { return { this, "APrimalStructureItemContainer.JunctionCableBeamOffsetEnd" }; }
	FieldValue<USoundBase *> ContainerActivatedSoundField() { return { this, "APrimalStructureItemContainer.ContainerActivatedSound" }; }
	FieldValue<USoundBase *> ContainerDeactivatedSoundField() { return { this, "APrimalStructureItemContainer.ContainerDeactivatedSound" }; }
	FieldValue<TSubclassOf<APrimalStructureItemContainer>> DemolishInventoryDepositClassField() { return { this, "APrimalStructureItemContainer.DemolishInventoryDepositClass" }; }
	FieldValue<TSubclassOf<UPrimalItem>> FuelItemTrueClassField() { return { this, "APrimalStructureItemContainer.FuelItemTrueClass" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ReplicatedFuelItemClassField() { return { this, "APrimalStructureItemContainer.ReplicatedFuelItemClass" }; }
	FieldValue<__int16> ReplicatedFuelItemColorIndexField() { return { this, "APrimalStructureItemContainer.ReplicatedFuelItemColorIndex" }; }
	FieldValue<USoundBase *> DefaultAudioTemplateField() { return { this, "APrimalStructureItemContainer.DefaultAudioTemplate" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> OverrideParticleTemplateItemClassesField() { return { this, "APrimalStructureItemContainer.OverrideParticleTemplateItemClasses" }; }
	FieldValue<TArray<USoundBase *>> OverrideAudioTemplatesField() { return { this, "APrimalStructureItemContainer.OverrideAudioTemplates" }; }
	FieldValue<float> MaxActivationDistanceField() { return { this, "APrimalStructureItemContainer.MaxActivationDistance" }; }
	FieldValue<FString> BoxNamePrefaceStringField() { return { this, "APrimalStructureItemContainer.BoxNamePrefaceString" }; }
	FieldValue<char> TribeGroupInventoryRankField() { return { this, "APrimalStructureItemContainer.TribeGroupInventoryRank" }; }
	FieldValue<TArray<float>> FuelConsumeDecreaseDurabilityAmountsField() { return { this, "APrimalStructureItemContainer.FuelConsumeDecreaseDurabilityAmounts" }; }
	FieldValue<float> RandomFuelUpdateTimeMinField() { return { this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMin" }; }
	FieldValue<float> RandomFuelUpdateTimeMaxField() { return { this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMax" }; }
	FieldValue<long double> LastDeactivatedTimeField() { return { this, "APrimalStructureItemContainer.LastDeactivatedTime" }; }
	FieldValue<long double> LastActivatedTimeField() { return { this, "APrimalStructureItemContainer.LastActivatedTime" }; }
	FieldValue<float> ValidCraftingResourceMaxDurabilityField() { return { this, "APrimalStructureItemContainer.ValidCraftingResourceMaxDurability" }; }
	FieldValue<float> ActivationCooldownTimeField() { return { this, "APrimalStructureItemContainer.ActivationCooldownTime" }; }
	FieldValue<float> UsablePriorityField() { return { this, "APrimalStructureItemContainer.UsablePriority" }; }
	FieldValue<unsigned __int64> DeathCacheCharacterIDField() { return { this, "APrimalStructureItemContainer.DeathCacheCharacterID" }; }
	FieldValue<float> SinglePlayerFuelConsumptionIntervalsMultiplierField() { return { this, "APrimalStructureItemContainer.SinglePlayerFuelConsumptionIntervalsMultiplier" }; }
	FieldValue<float> PoweredBatteryDurabilityToDecreasePerSecondField() { return { this, "APrimalStructureItemContainer.PoweredBatteryDurabilityToDecreasePerSecond" }; }
	FieldValue<float> DropInventoryDepositTraceDistanceField() { return { this, "APrimalStructureItemContainer.DropInventoryDepositTraceDistance" }; }

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
	BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor() { return { this, "APrimalStructureItemContainer.bUseBPSetPlayerConstructor" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime() { return { this, "APrimalStructureItemContainer.bReplicateLastActivatedTime" }; }

	// Functions

	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureItemContainer.PostSpawnInitialize"); }
	bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPowered"); }
	bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanBeActivated"); }
	bool AllowToggleActivation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.AllowToggleActivation", ForPC); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureItemContainer.TryMultiUse", ForPC, UseIndex); }
	float SubtractWaterFromConnections(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections", Amount, bAllowNetworking); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureItemContainer.ClientMultiUse", ForPC, UseIndex); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer.PreInitializeComponents"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay"); }
	void CheckForDeathCacheEmitter() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckForDeathCacheEmitter"); }
	void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructureItemContainer.PlacedStructureLocation"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Stasis"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Unstasis"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureItemContainer.GetLifetimeReplicatedProps", OutLifetimeProps); }
	USoundBase * GetOverrideAudioTemplate() { return NativeCall<USoundBase *>(this, "APrimalStructureItemContainer.GetOverrideAudioTemplate"); }
	void SetDelayedActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.SetDelayedActivation"); }
	void TryActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.TryActivation"); }
	void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetContainerActive", bNewActive); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureItemContainer.CanOpen", ForPC); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureItemContainer.GetDescriptiveName", result); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureItemContainer.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	bool RemoteInventoryAllowActivation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureItemContainer.RemoteInventoryAllowActivation", ForPC); }
	void UpdateContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease"); }
	void CheckAutoReactivate() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckAutoReactivate"); }
	void ConsumeFuel(bool bGiveItem) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.ConsumeFuel", bGiveItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalStructureItemContainer.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureItemContainer.NotifyItemAdded", anItem, bEquipItem); }
	void CheckFuelSetActive() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckFuelSetActive"); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer.NotifyItemRemoved", anItem); }
	void RefreshFuelState() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshFuelState"); }
	bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers"); }
	void CharacterBasedOnUpdate(AActor * characterBasedOnMe, float DeltaSeconds) { NativeCall<void, AActor *, float>(this, "APrimalStructureItemContainer.CharacterBasedOnUpdate", characterBasedOnMe, DeltaSeconds); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureItemContainer.DrawHUD", HUD); }
	void ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController *, FString *, bool>(this, "APrimalStructureItemContainer.ProcessEditText", ForPC, TextToUse, __formal); }
	void NetUpdateLocation_Implementation(FVector NewLocation) { NativeCall<void, FVector>(this, "APrimalStructureItemContainer.NetUpdateLocation_Implementation", NewLocation); }
	void NetSetContainerActive_Implementation(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive_Implementation", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
	void NetUpdateBoxName_Implementation(FString * NewName) { NativeCall<void, FString *>(this, "APrimalStructureItemContainer.NetUpdateBoxName_Implementation", NewName); }
	void PlayDying(float KillingDamage, FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureItemContainer.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void SetDisabledTimer(float DisabledTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer.SetDisabledTimer", DisabledTime); }
	void EnableActive() { NativeCall<void>(this, "APrimalStructureItemContainer.EnableActive"); }
	void GetBlueprintSpawnActorTransform(FVector * spawnLoc, FRotator * spawnRot) { NativeCall<void, FVector *, FRotator *>(this, "APrimalStructureItemContainer.GetBlueprintSpawnActorTransform", spawnLoc, spawnRot); }
	bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer.OverrideHasWaterSource"); }
	void RefreshPowered(APrimalStructureItemContainer * InDirectPower) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.RefreshPowered", InDirectPower); }
	void MovePowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.MovePowerJunctionLink"); }
	void RefreshPowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshPowerJunctionLink"); }
	void NotifyCraftedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer.NotifyCraftedItem", anItem); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructureItemContainer.LoadedFromSaveGame"); }
	void CopyStructureValuesFrom(APrimalStructureItemContainer * otherItemContainer) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.CopyStructureValuesFrom", otherItemContainer); }
	void TargetingTeamChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.TargetingTeamChanged"); }
	void SetPlayerConstructor(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APrimalStructureItemContainer.SetPlayerConstructor", PC); }
	float GetUsablePriority() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetUsablePriority"); }
	void RefreshInventoryItemCounts() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshInventoryItemCounts"); }
	void NetUpdateBoxName(FString * NewName) { NativeCall<void, FString *>(this, "APrimalStructureItemContainer.NetUpdateBoxName", NewName); }
	static void StaticRegisterNativesAPrimalStructureItemContainer() { NativeCall<void>(nullptr, "APrimalStructureItemContainer.StaticRegisterNativesAPrimalStructureItemContainer"); }
	void PowerGeneratorBuiltNearbyPoweredStructure(APrimalStructureItemContainer * PoweredStructure) { NativeCall<void, APrimalStructureItemContainer *>(this, "APrimalStructureItemContainer.PowerGeneratorBuiltNearbyPoweredStructure", PoweredStructure); }
};

struct APrimalStructureTurret : APrimalStructureItemContainer
{
	FieldValue<TWeakObjectPtr<AActor>> TargetField() { return { this, "APrimalStructureTurret.Target" }; }
	FieldValue<TSubclassOf<UPrimalItem>> AmmoItemTemplateField() { return { this, "APrimalStructureTurret.AmmoItemTemplate" }; }
	FieldValue<float> FireIntervalField() { return { this, "APrimalStructureTurret.FireInterval" }; }
	FieldValue<long double> LastFireTimeField() { return { this, "APrimalStructureTurret.LastFireTime" }; }
	FieldValue<float> MaxFireYawDeltaField() { return { this, "APrimalStructureTurret.MaxFireYawDelta" }; }
	FieldValue<float> MaxFirePitchDeltaField() { return { this, "APrimalStructureTurret.MaxFirePitchDelta" }; }
	FieldValue<FVector> TargetingLocOffsetField() { return { this, "APrimalStructureTurret.TargetingLocOffset" }; }
	FieldValue<float> TargetingRotationInterpSpeedField() { return { this, "APrimalStructureTurret.TargetingRotationInterpSpeed" }; }
	FieldArray<float, 3> TargetingRangesField() { return { this, "APrimalStructureTurret.TargetingRanges" }; }
	FieldValue<FVector> TargetingTraceOffsetField() { return { this, "APrimalStructureTurret.TargetingTraceOffset" }; }
	FieldValue<TSubclassOf<UDamageType>> FireDamageTypeField() { return { this, "APrimalStructureTurret.FireDamageType" }; }
	FieldValue<float> FireDamageAmountField() { return { this, "APrimalStructureTurret.FireDamageAmount" }; }
	FieldValue<float> FireDamageImpulseField() { return { this, "APrimalStructureTurret.FireDamageImpulse" }; }
	FieldValue<FRotator> TurretAimRotOffsetField() { return { this, "APrimalStructureTurret.TurretAimRotOffset" }; }
	FieldValue<FVector> AimTargetLocOffsetField() { return { this, "APrimalStructureTurret.AimTargetLocOffset" }; }
	FieldValue<FVector> PlayerProneTargetOffsetField() { return { this, "APrimalStructureTurret.PlayerProneTargetOffset" }; }
	FieldValue<float> AimSpreadField() { return { this, "APrimalStructureTurret.AimSpread" }; }
	FieldValue<char> RangeSettingField() { return { this, "APrimalStructureTurret.RangeSetting" }; }
	FieldValue<char> AISettingField() { return { this, "APrimalStructureTurret.AISetting" }; }
	FieldValue<char> WarningSettingField() { return { this, "APrimalStructureTurret.WarningSetting" }; }
	FieldValue<int> NumBulletsField() { return { this, "APrimalStructureTurret.NumBullets" }; }
	FieldValue<int> NumBulletsPerShotField() { return { this, "APrimalStructureTurret.NumBulletsPerShot" }; }
	FieldValue<float> WarningExpirationTimeField() { return { this, "APrimalStructureTurret.WarningExpirationTime" }; }
	FieldValue<float> BatteryIntervalFromActivationBeforeFiringField() { return { this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring" }; }
	FieldValue<bool> bWarnedField() { return { this, "APrimalStructureTurret.bWarned" }; }
	FieldValue<FRotator> DefaultTurretAimRotOffsetField() { return { this, "APrimalStructureTurret.DefaultTurretAimRotOffset" }; }
	FieldValue<FVector> MuzzleLocOffsetField() { return { this, "APrimalStructureTurret.MuzzleLocOffset" }; }
	FieldValue<long double> LastWarningTimeField() { return { this, "APrimalStructureTurret.LastWarningTime" }; }

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

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurret.BeginPlay"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureTurret.GetLifetimeReplicatedProps", OutLifetimeProps); }
	AActor * FindTarget() { return NativeCall<AActor *>(this, "APrimalStructureTurret.FindTarget"); }
	void SetTarget(AActor * aTarget) { NativeCall<void, AActor *>(this, "APrimalStructureTurret.SetTarget", aTarget); }
	void WeaponTraceHits(TArray<FHitResult> * HitResults, FVector * StartTrace, FVector * EndTrace) { NativeCall<void, TArray<FHitResult> *, FVector *, FVector *>(this, "APrimalStructureTurret.WeaponTraceHits", HitResults, StartTrace, EndTrace); }
	bool NetExecCommand(FName CommandName, FNetExecParams * ExecParams) { return NativeCall<bool, FName, FNetExecParams *>(this, "APrimalStructureTurret.NetExecCommand", CommandName, ExecParams); }
	void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurret.DoFire", RandomSeed); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "APrimalStructureTurret.DoFireProjectile", Origin, ShootDir); }
	void ClientsFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "APrimalStructureTurret.ClientsFireProjectile_Implementation", Origin, ShootDir); }
	void SpawnImpactEffects(FHitResult * Impact, FVector * ShootDir) { NativeCall<void, FHitResult *, FVector *>(this, "APrimalStructureTurret.SpawnImpactEffects", Impact, ShootDir); }
	void SpawnTrailEffect(FVector * EndPoint) { NativeCall<void, FVector *>(this, "APrimalStructureTurret.SpawnTrailEffect", EndPoint); }
	bool ShouldDealDamage(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "APrimalStructureTurret.ShouldDealDamage", TestActor); }
	void DealDamage(FHitResult * Impact, FVector * ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, FHitResult *, FVector *, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurret.DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void StartWarning() { NativeCall<void>(this, "APrimalStructureTurret.StartWarning"); }
	void FinishWarning() { NativeCall<void>(this, "APrimalStructureTurret.FinishWarning"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurret.Tick", DeltaSeconds); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureTurret.DrawHUD", HUD); }
	bool IsValidToFire() { return NativeCall<bool>(this, "APrimalStructureTurret.IsValidToFire"); }
	FRotator * GetMuzzleRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructureTurret.GetMuzzleRotation", result); }
	FVector * GetMuzzleLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetMuzzleLocation", result); }
	FVector * GetAttackingFromLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetAttackingFromLocation", result); }
	FVector * GetAimPivotLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetAimPivotLocation", result); }
	FName * GetMuzzleFlashSocketName(FName * result) { return NativeCall<FName *, FName *>(this, "APrimalStructureTurret.GetMuzzleFlashSocketName", result); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureTurret.TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureTurret.ClientMultiUse", ForPC, UseIndex); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureTurret.NotifyItemRemoved", anItem); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureTurret.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalStructureTurret.NotifyItemQuantityUpdated", anItem, amount); }
	void UpdateNumBullets() { NativeCall<void>(this, "APrimalStructureTurret.UpdateNumBullets"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurret.PreInitializeComponents"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureTurret.Stasis"); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureTurret.Unstasis"); }
	void UpdatedTargeting() { NativeCall<void>(this, "APrimalStructureTurret.UpdatedTargeting"); }
	FVector * GetTargetAimAtLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetTargetAimAtLocation", result); }
	FVector * GetTargetFireAtLocation(FVector * result, APrimalCharacter * ForTarget) { return NativeCall<FVector *, FVector *, APrimalCharacter *>(this, "APrimalStructureTurret.GetTargetFireAtLocation", result, ForTarget); }
	bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurret.CanFire"); }
	FName * GetTargetAltAimSocket(FName * result, APrimalCharacter * ForTarget) { return NativeCall<FName *, FName *, APrimalCharacter *>(this, "APrimalStructureTurret.GetTargetAltAimSocket", result, ForTarget); }
	bool UseTurretFastTargeting() { return NativeCall<bool>(this, "APrimalStructureTurret.UseTurretFastTargeting"); }
	static void StaticRegisterNativesAPrimalStructureTurret() { NativeCall<void>(nullptr, "APrimalStructureTurret.StaticRegisterNativesAPrimalStructureTurret"); }
};
