#pragma once

#include "Base.h"

struct APrimalTargetableActor : AActor
{
	//TArray<FDamageTypeAdjuster> GetDamageTypeAdjustersField() const { return GetNativeField<TArray<FDamageTypeAdjuster>>(this, "APrimalTargetableActor", "DamageTypeAdjusters"); }
	float GetLowHealthPercentageField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "LowHealthPercentage"); }
	void SetLowHealthPercentageField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "LowHealthPercentage", newValue); }
	TSubclassOf<AActor> GetDestructionActorTemplateField() const { return GetNativeField<TSubclassOf<AActor>>(this, "APrimalTargetableActor", "DestructionActorTemplate"); }
	void SetDestructionActorTemplateField(TSubclassOf<AActor> newValue) { SetNativeField(this, "APrimalTargetableActor", "DestructionActorTemplate", newValue); }
	float GetLifeSpanAfterDeathField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "LifeSpanAfterDeath"); }
	void SetLifeSpanAfterDeathField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "LifeSpanAfterDeath", newValue); }
	float GetPassiveDamageHealthReplicationPercentIntervalField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "PassiveDamageHealthReplicationPercentInterval"); }
	void SetPassiveDamageHealthReplicationPercentIntervalField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "PassiveDamageHealthReplicationPercentInterval", newValue); }
	float GetDamageNotifyTeamAggroMultiplierField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "DamageNotifyTeamAggroMultiplier"); }
	void SetDamageNotifyTeamAggroMultiplierField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "DamageNotifyTeamAggroMultiplier", newValue); }
	float GetDamageNotifyTeamAggroRangeField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRange"); }
	void SetDamageNotifyTeamAggroRangeField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRange", newValue); }
	float GetDamageNotifyTeamAggroRangeFalloffField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRangeFalloff"); }
	void SetDamageNotifyTeamAggroRangeFalloffField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRangeFalloff", newValue); }
	FVector GetDestructibleMeshLocationOffsetField() const { return GetNativeField<FVector>(this, "APrimalTargetableActor", "DestructibleMeshLocationOffset"); }
	void SetDestructibleMeshLocationOffsetField(FVector newValue) { SetNativeField(this, "APrimalTargetableActor", "DestructibleMeshLocationOffset", newValue); }
	FVector GetDestructibleMeshScaleOverrideField() const { return GetNativeField<FVector>(this, "APrimalTargetableActor", "DestructibleMeshScaleOverride"); }
	void SetDestructibleMeshScaleOverrideField(FVector newValue) { SetNativeField(this, "APrimalTargetableActor", "DestructibleMeshScaleOverride", newValue); }
	FRotator GetDestructibleMeshRotationOffsetField() const { return GetNativeField<FRotator>(this, "APrimalTargetableActor", "DestructibleMeshRotationOffset"); }
	void SetDestructibleMeshRotationOffsetField(FRotator newValue) { SetNativeField(this, "APrimalTargetableActor", "DestructibleMeshRotationOffset", newValue); }
	FString GetDescriptiveNameField() const { return GetNativeField<FString>(this, "APrimalTargetableActor", "DescriptiveName"); }
	float GetReplicatedHealthField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "ReplicatedHealth"); }
	void SetReplicatedHealthField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "ReplicatedHealth", newValue); }
	float GetHealthField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "Health"); }
	void SetHealthField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "Health", newValue); }
	float GetMaxHealthField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "MaxHealth"); }
	void SetMaxHealthField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "MaxHealth", newValue); }
	float GetDestructibleMeshDeathImpulseScaleField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "DestructibleMeshDeathImpulseScale"); }
	void SetDestructibleMeshDeathImpulseScaleField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "DestructibleMeshDeathImpulseScale", newValue); }
	//TArray<FBoneDamageAdjuster> GetBoneDamageAdjustersField() const { return GetNativeField<TArray<FBoneDamageAdjuster>>(this, "APrimalTargetableActor", "BoneDamageAdjusters"); }
	float GetLastReplicatedHealthValueField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "LastReplicatedHealthValue"); }
	void SetLastReplicatedHealthValueField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "LastReplicatedHealthValue", newValue); }
	//TSubclassOf<UPrimalStructureSettings> GetStructureSettingsClassField() const { return GetNativeField<TSubclassOf<UPrimalStructureSettings>>(this, "APrimalTargetableActor", "StructureSettingsClass"); }
	//UPrimalStructureSettings * GetMyStructureSettingsCDOField() const { return GetNativeField<UPrimalStructureSettings *>(this, "APrimalTargetableActor", "MyStructureSettingsCDO"); }
	float GetLastHealthBeforeTakeDamageField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "LastHealthBeforeTakeDamage"); }
	void SetLastHealthBeforeTakeDamageField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "LastHealthBeforeTakeDamage", newValue); }
	long double GetNextAllowRepairTimeField() const { return GetNativeField<long double>(this, "APrimalTargetableActor", "NextAllowRepairTime"); }
	void SetNextAllowRepairTimeField(long double newValue) { SetNativeField(this, "APrimalTargetableActor", "NextAllowRepairTime", newValue); }
	float GetLastPreBlueprintAdjustmentActualDamageField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "LastPreBlueprintAdjustmentActualDamage"); }
	void SetLastPreBlueprintAdjustmentActualDamageField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "LastPreBlueprintAdjustmentActualDamage", newValue); }
	float GetLastReplicatedHealthField() const { return GetNativeField<float>(this, "APrimalTargetableActor", "LastReplicatedHealth"); }
	void SetLastReplicatedHealthField(float newValue) { SetNativeField(this, "APrimalTargetableActor", "LastReplicatedHealth", newValue); }

	// Functions

	static UField* StaticClass() { return NativeCall<UField *>(nullptr, "APrimalTargetableActor", "StaticClass"); }
	UObject* GetUObjectInterfaceTargetableInterface() { return NativeCall<UObject *>((DWORD64)this, "APrimalTargetableActor", "GetUObjectInterfaceTargetableInterface"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "PostInitializeComponents"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "Destroyed"); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "BeginPlay"); }
	void FellOutOfWorld(UDamageType* dmgType) { NativeCall<void, UDamageType *>((DWORD64)this, "APrimalTargetableActor", "FellOutOfWorld", dmgType); }
	bool IsDead() { return NativeCall<bool>((DWORD64)this, "APrimalTargetableActor", "IsDead"); }
	void AdjustDamage(float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float *, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalTargetableActor", "AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	float TakeDamage(float Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalTargetableActor", "TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool Die(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalTargetableActor", "Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void PlayDyingGeneric_Implementation() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "PlayDyingGeneric_Implementation"); }
	void PlayDyingRadial_Implementation() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "PlayDyingRadial_Implementation"); }
	void GetDestructionEffectTransform(FVector* OutLocation, FRotator* OutRotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "APrimalTargetableActor", "GetDestructionEffectTransform", OutLocation, OutRotation); }
	void PlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "APrimalTargetableActor", "PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectPoint_Implementation() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "PlayHitEffectPoint_Implementation"); }
	void PlayHitEffectRadial_Implementation() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "PlayHitEffectRadial_Implementation"); }
	void PlayHitEffect(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *, bool>((DWORD64)this, "APrimalTargetableActor", "PlayHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	float GetMaxHealth() { return NativeCall<float>((DWORD64)this, "APrimalTargetableActor", "GetMaxHealth"); }
	float GetLowHealthPercentage() { return NativeCall<float>((DWORD64)this, "APrimalTargetableActor", "GetLowHealthPercentage"); }
	bool IsAlive() { return NativeCall<bool>((DWORD64)this, "APrimalTargetableActor", "IsAlive"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalTargetableActor", "GetDescriptiveName", result); }
	float GetHealth() { return NativeCall<float>((DWORD64)this, "APrimalTargetableActor", "GetHealth"); }
	float GetHealthPercentage() { return NativeCall<float>((DWORD64)this, "APrimalTargetableActor", "GetHealthPercentage"); }
	float SetHealth(float newHealth) { return NativeCall<float, float>((DWORD64)this, "APrimalTargetableActor", "SetHealth", newHealth); }
	void SetMaxHealth(float newMaxHealth) { NativeCall<void, float>((DWORD64)this, "APrimalTargetableActor", "SetMaxHealth", newMaxHealth); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>((DWORD64)this, "APrimalTargetableActor", "IsOfTribe", ID); }
	void NetUpdatedHealth_Implementation(int NewHealth) { NativeCall<void, int>((DWORD64)this, "APrimalTargetableActor", "NetUpdatedHealth_Implementation", NewHealth); }
	bool IsTargetableDead() { return NativeCall<bool>((DWORD64)this, "APrimalTargetableActor", "IsTargetableDead"); }
	//EShooterPhysMaterialType::Type GetTargetableDamageFXDefaultPhysMaterial() { return NativeCall<EShooterPhysMaterialType::Type>((DWORD64)this, "APrimalTargetableActor", "GetTargetableDamageFXDefaultPhysMaterial"); }
	void Suicide() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "Suicide"); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>((DWORD64)this, "APrimalTargetableActor", "UpdatedHealth", bDoReplication); }
	bool AllowRadialDamageWithoutVisiblityTrace() { return NativeCall<bool>((DWORD64)this, "APrimalTargetableActor", "AllowRadialDamageWithoutVisiblityTrace"); }
	bool IsInvincible() { return NativeCall<bool>((DWORD64)this, "APrimalTargetableActor", "IsInvincible"); }
	void PlayHitEffectGeneric() { NativeCall<void>((DWORD64)this, "APrimalTargetableActor", "PlayHitEffectGeneric"); }
};

struct APrimalStructure : APrimalTargetableActor
{
	FVector2D GetOverlayTooltipPaddingField() const { return GetNativeField<FVector2D>(this, "APrimalStructure", "OverlayTooltipPadding"); }
	void SetOverlayTooltipPaddingField(FVector2D newValue) { SetNativeField(this, "APrimalStructure", "OverlayTooltipPadding", newValue); }
	FVector2D GetOverlayTooltipScaleField() const { return GetNativeField<FVector2D>(this, "APrimalStructure", "OverlayTooltipScale"); }
	void SetOverlayTooltipScaleField(FVector2D newValue) { SetNativeField(this, "APrimalStructure", "OverlayTooltipScale", newValue); }
	TSubclassOf<UPrimalItem> GetConsumesPrimalItemField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalStructure", "ConsumesPrimalItem"); }
	void SetConsumesPrimalItemField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalStructure", "ConsumesPrimalItem", newValue); }
	float GetScaleFactorField() const { return GetNativeField<float>(this, "APrimalStructure", "ScaleFactor"); }
	void SetScaleFactorField(float newValue) { SetNativeField(this, "APrimalStructure", "ScaleFactor", newValue); }
	int GetStructureSnapTypeFlagsField() const { return GetNativeField<int>(this, "APrimalStructure", "StructureSnapTypeFlags"); }
	void SetStructureSnapTypeFlagsField(int newValue) { SetNativeField(this, "APrimalStructure", "StructureSnapTypeFlags", newValue); }
	//TArray<FPrimalStructureSnapPoint> GetSnapPointsField() const { return GetNativeField<TArray<FPrimalStructureSnapPoint>>(this, "APrimalStructure", "SnapPoints"); }
	//void SetSnapPointsField(TArray<FPrimalStructureSnapPoint> newValue) { SetNativeField(this, "APrimalStructure", "SnapPoints", newValue); }
	FVector GetPlacementHitLocOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructure", "PlacementHitLocOffset"); }
	void SetPlacementHitLocOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructure", "PlacementHitLocOffset", newValue); }
	FVector GetPlacementEncroachmentCheckOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructure", "PlacementEncroachmentCheckOffset"); }
	void SetPlacementEncroachmentCheckOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructure", "PlacementEncroachmentCheckOffset", newValue); }
	FVector GetPlacementEncroachmentBoxExtentField() const { return GetNativeField<FVector>(this, "APrimalStructure", "PlacementEncroachmentBoxExtent"); }
	void SetPlacementEncroachmentBoxExtentField(FVector newValue) { SetNativeField(this, "APrimalStructure", "PlacementEncroachmentBoxExtent", newValue); }
	FVector GetPlacementTraceScaleField() const { return GetNativeField<FVector>(this, "APrimalStructure", "PlacementTraceScale"); }
	void SetPlacementTraceScaleField(FVector newValue) { SetNativeField(this, "APrimalStructure", "PlacementTraceScale", newValue); }
	FVector GetSnapAlternatePlacementTraceScaleField() const { return GetNativeField<FVector>(this, "APrimalStructure", "SnapAlternatePlacementTraceScale"); }
	void SetSnapAlternatePlacementTraceScaleField(FVector newValue) { SetNativeField(this, "APrimalStructure", "SnapAlternatePlacementTraceScale", newValue); }
	FRotator GetPlacementRotOffsetField() const { return GetNativeField<FRotator>(this, "APrimalStructure", "PlacementRotOffset"); }
	void SetPlacementRotOffsetField(FRotator newValue) { SetNativeField(this, "APrimalStructure", "PlacementRotOffset", newValue); }
	FRotator GetPlacementTraceRotOffsetField() const { return GetNativeField<FRotator>(this, "APrimalStructure", "PlacementTraceRotOffset"); }
	void SetPlacementTraceRotOffsetField(FRotator newValue) { SetNativeField(this, "APrimalStructure", "PlacementTraceRotOffset", newValue); }
	FRotator GetSnappingRotationOffsetField() const { return GetNativeField<FRotator>(this, "APrimalStructure", "SnappingRotationOffset"); }
	void SetSnappingRotationOffsetField(FRotator newValue) { SetNativeField(this, "APrimalStructure", "SnappingRotationOffset", newValue); }
	float GetRepairAmountRemainingField() const { return GetNativeField<float>(this, "APrimalStructure", "RepairAmountRemaining"); }
	void SetRepairAmountRemainingField(float newValue) { SetNativeField(this, "APrimalStructure", "RepairAmountRemaining", newValue); }
	float GetRepairCheckIntervalField() const { return GetNativeField<float>(this, "APrimalStructure", "RepairCheckInterval"); }
	void SetRepairCheckIntervalField(float newValue) { SetNativeField(this, "APrimalStructure", "RepairCheckInterval", newValue); }
	float GetPlacementFloorCheckZExtentUpField() const { return GetNativeField<float>(this, "APrimalStructure", "PlacementFloorCheckZExtentUp"); }
	void SetPlacementFloorCheckZExtentUpField(float newValue) { SetNativeField(this, "APrimalStructure", "PlacementFloorCheckZExtentUp", newValue); }
	float GetRepairPercentPerIntervalField() const { return GetNativeField<float>(this, "APrimalStructure", "RepairPercentPerInterval"); }
	void SetRepairPercentPerIntervalField(float newValue) { SetNativeField(this, "APrimalStructure", "RepairPercentPerInterval", newValue); }
	float GetDecayDestructionPeriodField() const { return GetNativeField<float>(this, "APrimalStructure", "DecayDestructionPeriod"); }
	void SetDecayDestructionPeriodField(float newValue) { SetNativeField(this, "APrimalStructure", "DecayDestructionPeriod", newValue); }
	TArray<TSubclassOf<APrimalStructure>> GetPreventPlacingOnFloorClassesField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalStructure", "PreventPlacingOnFloorClasses"); }
	void SetPreventPlacingOnFloorClassesField(TArray<TSubclassOf<APrimalStructure>> newValue) { SetNativeField(this, "APrimalStructure", "PreventPlacingOnFloorClasses", newValue); }
	TArray<TSubclassOf<APrimalStructure>> GetAllowPlacingOnFloorClassesField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalStructure", "AllowPlacingOnFloorClasses"); }
	void SetAllowPlacingOnFloorClassesField(TArray<TSubclassOf<APrimalStructure>> newValue) { SetNativeField(this, "APrimalStructure", "AllowPlacingOnFloorClasses", newValue); }
	int GetTraceIgnoreStructuresWithTypeFlagsField() const { return GetNativeField<int>(this, "APrimalStructure", "TraceIgnoreStructuresWithTypeFlags"); }
	void SetTraceIgnoreStructuresWithTypeFlagsField(int newValue) { SetNativeField(this, "APrimalStructure", "TraceIgnoreStructuresWithTypeFlags", newValue); }
	int GetbTraceCheckOnlyUseStructuresWithTypeFlagsField() const { return GetNativeField<int>(this, "APrimalStructure", "bTraceCheckOnlyUseStructuresWithTypeFlags"); }
	void SetbTraceCheckOnlyUseStructuresWithTypeFlagsField(int newValue) { SetNativeField(this, "APrimalStructure", "bTraceCheckOnlyUseStructuresWithTypeFlags", newValue); }
	FVector GetWaterVolumeCheckPointOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructure", "WaterVolumeCheckPointOffset"); }
	void SetWaterVolumeCheckPointOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructure", "WaterVolumeCheckPointOffset", newValue); }
	float GetWaterPlacementMinimumWaterHeightField() const { return GetNativeField<float>(this, "APrimalStructure", "WaterPlacementMinimumWaterHeight"); }
	void SetWaterPlacementMinimumWaterHeightField(float newValue) { SetNativeField(this, "APrimalStructure", "WaterPlacementMinimumWaterHeight", newValue); }
	float GetPlacementMaxZDeltaField() const { return GetNativeField<float>(this, "APrimalStructure", "PlacementMaxZDelta"); }
	void SetPlacementMaxZDeltaField(float newValue) { SetNativeField(this, "APrimalStructure", "PlacementMaxZDelta", newValue); }
	float GetPlacementChooseRotationMaxRangeOverrideField() const { return GetNativeField<float>(this, "APrimalStructure", "PlacementChooseRotationMaxRangeOverride"); }
	void SetPlacementChooseRotationMaxRangeOverrideField(float newValue) { SetNativeField(this, "APrimalStructure", "PlacementChooseRotationMaxRangeOverride", newValue); }
	float GetPlacementMaxRangeField() const { return GetNativeField<float>(this, "APrimalStructure", "PlacementMaxRange"); }
	void SetPlacementMaxRangeField(float newValue) { SetNativeField(this, "APrimalStructure", "PlacementMaxRange", newValue); }
	float GetMaxSnapLocRangeField() const { return GetNativeField<float>(this, "APrimalStructure", "MaxSnapLocRange"); }
	void SetMaxSnapLocRangeField(float newValue) { SetNativeField(this, "APrimalStructure", "MaxSnapLocRange", newValue); }
	float GetSnapOverlapCheckRadiusField() const { return GetNativeField<float>(this, "APrimalStructure", "SnapOverlapCheckRadius"); }
	void SetSnapOverlapCheckRadiusField(float newValue) { SetNativeField(this, "APrimalStructure", "SnapOverlapCheckRadius", newValue); }
	float GetMaximumFoundationSupport2DBuildDistanceField() const { return GetNativeField<float>(this, "APrimalStructure", "MaximumFoundationSupport2DBuildDistance"); }
	void SetMaximumFoundationSupport2DBuildDistanceField(float newValue) { SetNativeField(this, "APrimalStructure", "MaximumFoundationSupport2DBuildDistance", newValue); }
	float GetPlacementFloorCheckZExtentField() const { return GetNativeField<float>(this, "APrimalStructure", "PlacementFloorCheckZExtent"); }
	void SetPlacementFloorCheckZExtentField(float newValue) { SetNativeField(this, "APrimalStructure", "PlacementFloorCheckZExtent", newValue); }
	float GetLastHealthPercentageField() const { return GetNativeField<float>(this, "APrimalStructure", "LastHealthPercentage"); }
	void SetLastHealthPercentageField(float newValue) { SetNativeField(this, "APrimalStructure", "LastHealthPercentage", newValue); }
	FRotator GetTakeGroundNormalRotationOffsetField() const { return GetNativeField<FRotator>(this, "APrimalStructure", "TakeGroundNormalRotationOffset"); }
	void SetTakeGroundNormalRotationOffsetField(FRotator newValue) { SetNativeField(this, "APrimalStructure", "TakeGroundNormalRotationOffset", newValue); }
	float GetDemolishGiveItemCraftingResourcePercentageField() const { return GetNativeField<float>(this, "APrimalStructure", "DemolishGiveItemCraftingResourcePercentage"); }
	void SetDemolishGiveItemCraftingResourcePercentageField(float newValue) { SetNativeField(this, "APrimalStructure", "DemolishGiveItemCraftingResourcePercentage", newValue); }
	TSubclassOf<APrimalStructure> GetAllowReplacementByStructureClassTypeField() const { return GetNativeField<TSubclassOf<APrimalStructure>>(this, "APrimalStructure", "AllowReplacementByStructureClassType"); }
	void SetAllowReplacementByStructureClassTypeField(TSubclassOf<APrimalStructure> newValue) { SetNativeField(this, "APrimalStructure", "AllowReplacementByStructureClassType", newValue); }
	TSubclassOf<APrimalStructure> GetPreventReplacementOfStructureClassTypeField() const { return GetNativeField<TSubclassOf<APrimalStructure>>(this, "APrimalStructure", "PreventReplacementOfStructureClassType"); }
	void SetPreventReplacementOfStructureClassTypeField(TSubclassOf<APrimalStructure> newValue) { SetNativeField(this, "APrimalStructure", "PreventReplacementOfStructureClassType", newValue); }
	float GetMaximumHeightAboveWorldGroundField() const { return GetNativeField<float>(this, "APrimalStructure", "MaximumHeightAboveWorldGround"); }
	void SetMaximumHeightAboveWorldGroundField(float newValue) { SetNativeField(this, "APrimalStructure", "MaximumHeightAboveWorldGround", newValue); }
	FRotator GetPreviewCameraRotationField() const { return GetNativeField<FRotator>(this, "APrimalStructure", "PreviewCameraRotation"); }
	void SetPreviewCameraRotationField(FRotator newValue) { SetNativeField(this, "APrimalStructure", "PreviewCameraRotation", newValue); }
	FVector GetPreviewCameraPivotOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructure", "PreviewCameraPivotOffset"); }
	void SetPreviewCameraPivotOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructure", "PreviewCameraPivotOffset", newValue); }
	float GetPreviewCameraDistanceScaleFactorField() const { return GetNativeField<float>(this, "APrimalStructure", "PreviewCameraDistanceScaleFactor"); }
	void SetPreviewCameraDistanceScaleFactorField(float newValue) { SetNativeField(this, "APrimalStructure", "PreviewCameraDistanceScaleFactor", newValue); }
	float GetPreviewCameraDefaultZoomMultiplierField() const { return GetNativeField<float>(this, "APrimalStructure", "PreviewCameraDefaultZoomMultiplier"); }
	void SetPreviewCameraDefaultZoomMultiplierField(float newValue) { SetNativeField(this, "APrimalStructure", "PreviewCameraDefaultZoomMultiplier", newValue); }
	float GetPreviewCameraMaxZoomMultiplierField() const { return GetNativeField<float>(this, "APrimalStructure", "PreviewCameraMaxZoomMultiplier"); }
	void SetPreviewCameraMaxZoomMultiplierField(float newValue) { SetNativeField(this, "APrimalStructure", "PreviewCameraMaxZoomMultiplier", newValue); }
	float GetReturnDamageAmountField() const { return GetNativeField<float>(this, "APrimalStructure", "ReturnDamageAmount"); }
	void SetReturnDamageAmountField(float newValue) { SetNativeField(this, "APrimalStructure", "ReturnDamageAmount", newValue); }
	int GetStructureRangeTypeFlagField() const { return GetNativeField<int>(this, "APrimalStructure", "StructureRangeTypeFlag"); }
	void SetStructureRangeTypeFlagField(int newValue) { SetNativeField(this, "APrimalStructure", "StructureRangeTypeFlag", newValue); }
	int GetLimitMaxStructuresInRangeTypeFlagField() const { return GetNativeField<int>(this, "APrimalStructure", "LimitMaxStructuresInRangeTypeFlag"); }
	void SetLimitMaxStructuresInRangeTypeFlagField(int newValue) { SetNativeField(this, "APrimalStructure", "LimitMaxStructuresInRangeTypeFlag", newValue); }
	float GetReturnDamageImpulseField() const { return GetNativeField<float>(this, "APrimalStructure", "ReturnDamageImpulse"); }
	void SetReturnDamageImpulseField(float newValue) { SetNativeField(this, "APrimalStructure", "ReturnDamageImpulse", newValue); }
	TSubclassOf<UDamageType> GetReturnDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalStructure", "ReturnDamageType"); }
	void SetReturnDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalStructure", "ReturnDamageType", newValue); }
	TArray<TSubclassOf<UDamageType>> GetReturnDamageExcludeIncomingTypesField() const { return GetNativeField<TArray<TSubclassOf<UDamageType>>>(this, "APrimalStructure", "ReturnDamageExcludeIncomingTypes"); }
	void SetReturnDamageExcludeIncomingTypesField(TArray<TSubclassOf<UDamageType>> newValue) { SetNativeField(this, "APrimalStructure", "ReturnDamageExcludeIncomingTypes", newValue); }
	TArray<TSubclassOf<UDamageType>> GetReturnDamageOnlyForIncomingTypesField() const { return GetNativeField<TArray<TSubclassOf<UDamageType>>>(this, "APrimalStructure", "ReturnDamageOnlyForIncomingTypes"); }
	void SetReturnDamageOnlyForIncomingTypesField(TArray<TSubclassOf<UDamageType>> newValue) { SetNativeField(this, "APrimalStructure", "ReturnDamageOnlyForIncomingTypes", newValue); }
	int GetOwningPlayerIDField() const { return GetNativeField<int>(this, "APrimalStructure", "OwningPlayerID"); }
	void SetOwningPlayerIDField(int newValue) { SetNativeField(this, "APrimalStructure", "OwningPlayerID", newValue); }
	FString GetOwningPlayerNameField() const { return GetNativeField<FString>(this, "APrimalStructure", "OwningPlayerName"); }
	void SetOwningPlayerNameField(FString newValue) { SetNativeField(this, "APrimalStructure", "OwningPlayerName", newValue); }
	long double GetLastInAllyRangeTimeField() const { return GetNativeField<long double>(this, "APrimalStructure", "LastInAllyRangeTime"); }
	void SetLastInAllyRangeTimeField(long double newValue) { SetNativeField(this, "APrimalStructure", "LastInAllyRangeTime", newValue); }
	float GetDecayDestructionPeriodMultiplierField() const { return GetNativeField<float>(this, "APrimalStructure", "DecayDestructionPeriodMultiplier"); }
	void SetDecayDestructionPeriodMultiplierField(float newValue) { SetNativeField(this, "APrimalStructure", "DecayDestructionPeriodMultiplier", newValue); }
	TWeakObjectPtr<APrimalDinoCharacter> GetSaddleDinoField() const { return GetNativeField<TWeakObjectPtr<APrimalDinoCharacter>>(this, "APrimalStructure", "SaddleDino"); }
	TArray<APrimalDinoCharacter *> GetLatchedDinosField() const { return GetNativeField<TArray<APrimalDinoCharacter *>>(this, "APrimalStructure", "LatchedDinos"); }
	FName GetPreviewMaterialColorParamNameField() const { return GetNativeField<FName>(this, "APrimalStructure", "PreviewMaterialColorParamName"); }
	void SetPreviewMaterialColorParamNameField(FName newValue) { SetNativeField(this, "APrimalStructure", "PreviewMaterialColorParamName", newValue); }
	TArray<FVector> GetPlacementTraceDirectionsField() const { return GetNativeField<TArray<FVector>>(this, "APrimalStructure", "PlacementTraceDirections"); }
	void SetPlacementTraceDirectionsField(TArray<FVector> newValue) { SetNativeField(this, "APrimalStructure", "PlacementTraceDirections", newValue); }
	TArray<APrimalStructure *> GetLinkedStructuresField() const { return GetNativeField<TArray<APrimalStructure *>>(this, "APrimalStructure", "LinkedStructures"); }
	TArray<unsigned int> GetLinkedStructuresIDField() const { return GetNativeField<TArray<unsigned int>>(this, "APrimalStructure", "LinkedStructuresID"); }
	TArray<APrimalStructure *> GetStructuresPlacedOnFloorField() const { return GetNativeField<TArray<APrimalStructure *>>(this, "APrimalStructure", "StructuresPlacedOnFloor"); }
	void SetStructuresPlacedOnFloorField(TArray<APrimalStructure *> newValue) { SetNativeField(this, "APrimalStructure", "StructuresPlacedOnFloor", newValue); }
	TArray<TSubclassOf<APrimalStructure>> GetSnapToStructureTypesToExcludeField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalStructure", "SnapToStructureTypesToExclude"); }
	TArray<TSubclassOf<APrimalStructure>> GetSnapFromStructureTypesToExcludeField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalStructure", "SnapFromStructureTypesToExclude"); }
	void SetSnapFromStructureTypesToExcludeField(TArray<TSubclassOf<APrimalStructure>> newValue) { SetNativeField(this, "APrimalStructure", "SnapFromStructureTypesToExclude", newValue); }
	APrimalStructure* GetPlacedOnFloorStructureField() const { return GetNativeField<APrimalStructure *>(this, "APrimalStructure", "PlacedOnFloorStructure"); }
	void SetPlacedOnFloorStructureField(APrimalStructure* newValue) { SetNativeField(this, "APrimalStructure", "PlacedOnFloorStructure", newValue); }
	APrimalStructure* GetPrimarySnappedStructureChildField() const { return GetNativeField<APrimalStructure *>(this, "APrimalStructure", "PrimarySnappedStructureChild"); }
	void SetPrimarySnappedStructureChildField(APrimalStructure* newValue) { SetNativeField(this, "APrimalStructure", "PrimarySnappedStructureChild", newValue); }
	APrimalStructure* GetPrimarySnappedStructureParentField() const { return GetNativeField<APrimalStructure *>(this, "APrimalStructure", "PrimarySnappedStructureParent"); }
	void SetPrimarySnappedStructureParentField(APrimalStructure* newValue) { SetNativeField(this, "APrimalStructure", "PrimarySnappedStructureParent", newValue); }
	FString GetOwnerNameField() const { return GetNativeField<FString>(this, "APrimalStructure", "OwnerName"); }
	void SetOwnerNameField(FString newValue) { SetNativeField(this, "APrimalStructure", "OwnerName", newValue); }
	//__int16[6] GetStructureColorsField() const { return GetNativeField<__int16[6]>(this, "APrimalStructure", "StructureColors"); }
	APawn* GetAttachedToField() const { return GetNativeField<APawn *>(this, "APrimalStructure", "AttachedTo"); }
	void SetAttachedToField(APawn* newValue) { SetNativeField(this, "APrimalStructure", "AttachedTo", newValue); }
	//APrimalStructureExplosiveTransGPS * GetAttachedTransponderField() const { return GetNativeField<APrimalStructureExplosiveTransGPS *>(this, "APrimalStructure", "AttachedTransponder"); }
	unsigned int GetStructureIDField() const { return GetNativeField<unsigned int>(this, "APrimalStructure", "StructureID"); }
	unsigned int GetAttachedToDinoID1Field() const { return GetNativeField<unsigned int>(this, "APrimalStructure", "AttachedToDinoID1"); }
	void SetAttachedToDinoID1Field(unsigned int newValue) { SetNativeField(this, "APrimalStructure", "AttachedToDinoID1", newValue); }
	TArray<TSubclassOf<APrimalStructure>> GetOnlyAllowStructureClassesToAttachField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalStructure", "OnlyAllowStructureClassesToAttach"); }
	void SetOnlyAllowStructureClassesToAttachField(TArray<TSubclassOf<APrimalStructure>> newValue) { SetNativeField(this, "APrimalStructure", "OnlyAllowStructureClassesToAttach", newValue); }
	TArray<TSubclassOf<APrimalStructure>> GetOnlyAllowStructureClassesFromAttachField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalStructure", "OnlyAllowStructureClassesFromAttach"); }
	void SetOnlyAllowStructureClassesFromAttachField(TArray<TSubclassOf<APrimalStructure>> newValue) { SetNativeField(this, "APrimalStructure", "OnlyAllowStructureClassesFromAttach", newValue); }
	unsigned int GetTaggedIndexField() const { return GetNativeField<unsigned int>(this, "APrimalStructure", "TaggedIndex"); }
	void SetTaggedIndexField(unsigned int newValue) { SetNativeField(this, "APrimalStructure", "TaggedIndex", newValue); }
	unsigned int GetProcessTreeTagField() const { return GetNativeField<unsigned int>(this, "APrimalStructure", "ProcessTreeTag"); }
	void SetProcessTreeTagField(unsigned int newValue) { SetNativeField(this, "APrimalStructure", "ProcessTreeTag", newValue); }
	long double GetLastStructureStasisTimeField() const { return GetNativeField<long double>(this, "APrimalStructure", "LastStructureStasisTime"); }
	void SetLastStructureStasisTimeField(long double newValue) { SetNativeField(this, "APrimalStructure", "LastStructureStasisTime", newValue); }
	long double GetLastColorizationTimeField() const { return GetNativeField<long double>(this, "APrimalStructure", "LastColorizationTime"); }
	void SetLastColorizationTimeField(long double newValue) { SetNativeField(this, "APrimalStructure", "LastColorizationTime", newValue); }
	FVector GetSpawnEmitterLocationOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructure", "SpawnEmitterLocationOffset"); }
	void SetSpawnEmitterLocationOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructure", "SpawnEmitterLocationOffset", newValue); }
	FRotator GetSpawnEmitterRotationOffsetField() const { return GetNativeField<FRotator>(this, "APrimalStructure", "SpawnEmitterRotationOffset"); }
	void SetSpawnEmitterRotationOffsetField(FRotator newValue) { SetNativeField(this, "APrimalStructure", "SpawnEmitterRotationOffset", newValue); }
	TSubclassOf<UPrimalItem> GetPickupGivesItemField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalStructure", "PickupGivesItem"); }
	void SetPickupGivesItemField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalStructure", "PickupGivesItem", newValue); }
	float GetExcludeInStructuresRadiusField() const { return GetNativeField<float>(this, "APrimalStructure", "ExcludeInStructuresRadius"); }
	void SetExcludeInStructuresRadiusField(float newValue) { SetNativeField(this, "APrimalStructure", "ExcludeInStructuresRadius", newValue); }
	TArray<TSubclassOf<APrimalStructure>> GetExcludeInStructuresRadiusClassesField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalStructure", "ExcludeInStructuresRadiusClasses"); }
	void SetExcludeInStructuresRadiusClassesField(TArray<TSubclassOf<APrimalStructure>> newValue) { SetNativeField(this, "APrimalStructure", "ExcludeInStructuresRadiusClasses", newValue); }
	float GetLastFadeOpacityField() const { return GetNativeField<float>(this, "APrimalStructure", "LastFadeOpacity"); }
	void SetLastFadeOpacityField(float newValue) { SetNativeField(this, "APrimalStructure", "LastFadeOpacity", newValue); }
	bool GetbClientAddedToStructuresArrayField() const { return GetNativeField<bool>(this, "APrimalStructure", "bClientAddedToStructuresArray"); }
	void SetbClientAddedToStructuresArrayField(bool newValue) { SetNativeField(this, "APrimalStructure", "bClientAddedToStructuresArray", newValue); }
	long double GetLastFailedPinTimeField() const { return GetNativeField<long double>(this, "APrimalStructure", "LastFailedPinTime"); }
	void SetLastFailedPinTimeField(long double newValue) { SetNativeField(this, "APrimalStructure", "LastFailedPinTime", newValue); }
	//UStructurePaintingComponent * GetPaintingComponentField() const { return GetNativeField<UStructurePaintingComponent *>(this, "APrimalStructure", "PaintingComponent"); }
	TArray<FString> GetPreventBuildStructureReasonStringOverridesField() const { return GetNativeField<TArray<FString>>(this, "APrimalStructure", "PreventBuildStructureReasonStringOverrides"); }
	void SetPreventBuildStructureReasonStringOverridesField(TArray<FString> newValue) { SetNativeField(this, "APrimalStructure", "PreventBuildStructureReasonStringOverrides", newValue); }
	FVector GetFloatingHudLocTextOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructure", "FloatingHudLocTextOffset"); }
	void SetFloatingHudLocTextOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructure", "FloatingHudLocTextOffset", newValue); }
	float GetLastBumpedDamageTimeField() const { return GetNativeField<float>(this, "APrimalStructure", "LastBumpedDamageTime"); }
	void SetLastBumpedDamageTimeField(float newValue) { SetNativeField(this, "APrimalStructure", "LastBumpedDamageTime", newValue); }
	int GetForceLimitStructuresInRangeField() const { return GetNativeField<int>(this, "APrimalStructure", "ForceLimitStructuresInRange"); }
	void SetForceLimitStructuresInRangeField(int newValue) { SetNativeField(this, "APrimalStructure", "ForceLimitStructuresInRange", newValue); }
	float GetForcePreventPlacingInOfflineRaidStructuresRadiusField() const { return GetNativeField<float>(this, "APrimalStructure", "ForcePreventPlacingInOfflineRaidStructuresRadius"); }
	void SetForcePreventPlacingInOfflineRaidStructuresRadiusField(float newValue) { SetNativeField(this, "APrimalStructure", "ForcePreventPlacingInOfflineRaidStructuresRadius", newValue); }
	FName GetAttachToStaticMeshSocketNameBaseField() const { return GetNativeField<FName>(this, "APrimalStructure", "AttachToStaticMeshSocketNameBase"); }
	void SetAttachToStaticMeshSocketNameBaseField(FName newValue) { SetNativeField(this, "APrimalStructure", "AttachToStaticMeshSocketNameBase", newValue); }
	TSubclassOf<AActor> GetItemsUseAlternateActorClassAttachmentField() const { return GetNativeField<TSubclassOf<AActor>>(this, "APrimalStructure", "ItemsUseAlternateActorClassAttachment"); }
	void SetItemsUseAlternateActorClassAttachmentField(TSubclassOf<AActor> newValue) { SetNativeField(this, "APrimalStructure", "ItemsUseAlternateActorClassAttachment", newValue); }
	float GetUnstasisAutoDestroyAfterTimeField() const { return GetNativeField<float>(this, "APrimalStructure", "UnstasisAutoDestroyAfterTime"); }
	void SetUnstasisAutoDestroyAfterTimeField(float newValue) { SetNativeField(this, "APrimalStructure", "UnstasisAutoDestroyAfterTime", newValue); }
	char GetTribeGroupStructureRankField() const { return GetNativeField<char>(this, "APrimalStructure", "TribeGroupStructureRank"); }
	void SetTribeGroupStructureRankField(char newValue) { SetNativeField(this, "APrimalStructure", "TribeGroupStructureRank", newValue); }
	char GetTribeRankHUDYOffsetField() const { return GetNativeField<char>(this, "APrimalStructure", "TribeRankHUDYOffset"); }
	void SetTribeRankHUDYOffsetField(char newValue) { SetNativeField(this, "APrimalStructure", "TribeRankHUDYOffset", newValue); }
	TArray<TSubclassOf<APrimalDinoCharacter>> GetPreventSaddleDinoClassesField() const { return GetNativeField<TArray<TSubclassOf<APrimalDinoCharacter>>>(this, "APrimalStructure", "PreventSaddleDinoClasses"); }
	void SetPreventSaddleDinoClassesField(TArray<TSubclassOf<APrimalDinoCharacter>> newValue) { SetNativeField(this, "APrimalStructure", "PreventSaddleDinoClasses", newValue); }
	TArray<TSubclassOf<APrimalDinoCharacter>> GetAllowSaddleDinoClassesField() const { return GetNativeField<TArray<TSubclassOf<APrimalDinoCharacter>>>(this, "APrimalStructure", "AllowSaddleDinoClasses"); }
	void SetAllowSaddleDinoClassesField(TArray<TSubclassOf<APrimalDinoCharacter>> newValue) { SetNativeField(this, "APrimalStructure", "AllowSaddleDinoClasses", newValue); }
	FName GetPlaceOnWallUseStaticMeshTagField() const { return GetNativeField<FName>(this, "APrimalStructure", "PlaceOnWallUseStaticMeshTag"); }
	void SetPlaceOnWallUseStaticMeshTagField(FName newValue) { SetNativeField(this, "APrimalStructure", "PlaceOnWallUseStaticMeshTag", newValue); }
	TSubclassOf<APrimalStructure> GetSnapStructureClassField() const { return GetNativeField<TSubclassOf<APrimalStructure>>(this, "APrimalStructure", "SnapStructureClass"); }
	void SetSnapStructureClassField(TSubclassOf<APrimalStructure> newValue) { SetNativeField(this, "APrimalStructure", "SnapStructureClass", newValue); }
	float GetDemolishActivationTimeField() const { return GetNativeField<float>(this, "APrimalStructure", "DemolishActivationTime"); }
	void SetDemolishActivationTimeField(float newValue) { SetNativeField(this, "APrimalStructure", "DemolishActivationTime", newValue); }
	FVector GetGroundEncroachmentCheckLocationOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructure", "GroundEncroachmentCheckLocationOffset"); }
	void SetGroundEncroachmentCheckLocationOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructure", "GroundEncroachmentCheckLocationOffset", newValue); }
	int GetStructureMinAllowedVersionField() const { return GetNativeField<int>(this, "APrimalStructure", "StructureMinAllowedVersion"); }
	void SetStructureMinAllowedVersionField(int newValue) { SetNativeField(this, "APrimalStructure", "StructureMinAllowedVersion", newValue); }
	int GetSavedStructureMinAllowedVersionField() const { return GetNativeField<int>(this, "APrimalStructure", "SavedStructureMinAllowedVersion"); }
	void SetSavedStructureMinAllowedVersionField(int newValue) { SetNativeField(this, "APrimalStructure", "SavedStructureMinAllowedVersion", newValue); }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalStructure", "GetPrivateStaticClass"); }
	int GetHitPawnCollisionGroup() { return NativeCall<int>((DWORD64)this, "APrimalStructure", "GetHitPawnCollisionGroup"); }
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "APrimalStructure", "PreInitializeComponents"); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "APrimalStructure", "BeginPlay"); }
	void SetLinkedIDs() { NativeCall<void>((DWORD64)this, "APrimalStructure", "SetLinkedIDs"); }
	void ApplyLinkedIDs(bool bRelinkParents) { NativeCall<void, bool>((DWORD64)this, "APrimalStructure", "ApplyLinkedIDs", bRelinkParents); }
	static APrimalStructure* GetFromID(UWorld* World, unsigned int TheStructureID) { return NativeCall<APrimalStructure *, UWorld *, unsigned int>(nullptr, "APrimalStructure", "GetFromID", World, TheStructureID); }
	void OnRep_AttachmentReplication() { NativeCall<void>((DWORD64)this, "APrimalStructure", "OnRep_AttachmentReplication"); }
	void SetDinoSaddleAttachment() { NativeCall<void>((DWORD64)this, "APrimalStructure", "SetDinoSaddleAttachment"); }
	void PostSpawnInitialize() { NativeCall<void>((DWORD64)this, "APrimalStructure", "PostSpawnInitialize"); }
	void LoadedFromSaveGame() { NativeCall<void>((DWORD64)this, "APrimalStructure", "LoadedFromSaveGame"); }
	void SetStructureCollisionChannels() { NativeCall<void>((DWORD64)this, "APrimalStructure", "SetStructureCollisionChannels"); }
	void ApplyScale(bool bOnlyInitPhysics) { NativeCall<void, bool>((DWORD64)this, "APrimalStructure", "ApplyScale", bOnlyInitPhysics); }
	void PostSpawnInitialize(FVector* SpawnLocation, FRotator* SpawnRotation, AActor* InOwner, APawn* InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay) { NativeCall<void, FVector *, FRotator *, AActor *, APawn *, bool, bool, bool, bool>((DWORD64)this, "APrimalStructure", "PostSpawnInitialize", SpawnLocation, SpawnRotation, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay); }
	bool UseDynamicMobility() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "UseDynamicMobility"); }
	void SetStaticMobility() { NativeCall<void>((DWORD64)this, "APrimalStructure", "SetStaticMobility"); }
	void PrepareAsPlacementPreview() { NativeCall<void>((DWORD64)this, "APrimalStructure", "PrepareAsPlacementPreview"); }
	int IsAllowedToBuild() { return NativeCall<int>((DWORD64)this, "APrimalStructure", "IsAllowedToBuild"); }
	bool IsPointNearSupplyCrateSpawn() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "IsPointNearSupplyCrateSpawn"); }
	void NetUpdateOriginalOwnerNameAndID_Implementation(int NewOriginalOwnerID, FString* NewOriginalOwnerName) { NativeCall<void, int, FString *>((DWORD64)this, "APrimalStructure", "NetUpdateOriginalOwnerNameAndID_Implementation", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NonPlayerFinalStructurePlacement(int PlacementTargetingTeam, int PlacementOwningPlayerID, FString* PlacementOwningPlayerName, APrimalStructure* ForcePrimaryParent) { NativeCall<void, int, int, FString *, APrimalStructure *>((DWORD64)this, "APrimalStructure", "NonPlayerFinalStructurePlacement", PlacementTargetingTeam, PlacementOwningPlayerID, PlacementOwningPlayerName, ForcePrimaryParent); }
	bool FinalStructurePlacement() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "FinalStructurePlacement"); }
	FVector* GetSnapPointLocation() { return NativeCall<FVector *>((DWORD64)this, "APrimalStructure", "GetSnapPointLocation"); }
	bool GetSnapToLocation(FVector* AtLoc, FRotator* AtRotation, FPlacementData* OutPlacementData, APrimalStructure** OutParentStructure, int* OutSnapToIndex, APlayerController* PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, FVector *, FRotator *, FPlacementData *, APrimalStructure **, int *, APlayerController *, bool, int>((DWORD64)this, "APrimalStructure", "GetSnapToLocation", AtLoc, AtRotation, OutPlacementData, OutParentStructure, OutSnapToIndex, PC, bFinalPlacement, SnapPointCycle); }
	void GetSnapToParentStructures() { NativeCall<void>((DWORD64)this, "APrimalStructure", "GetSnapToParentStructures"); }
	bool GetPlacingGroundLocation(AActor** OutHitActor, FPlacementData* OutPlacementData, APlayerController* PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, AActor **, FPlacementData *, APlayerController *, bool, int>((DWORD64)this, "APrimalStructure", "GetPlacingGroundLocation", OutHitActor, OutPlacementData, PC, bFinalPlacement, SnapPointCycle); }
	bool ClampBuildLocation() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "ClampBuildLocation"); }
	bool CheckNotEncroaching() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "CheckNotEncroaching"); }
	APrimalStructure* GetNearbyFoundation(FPlacementData* PlacementData, APlayerController* ForPC) { return NativeCall<APrimalStructure *, FPlacementData *, APlayerController *>((DWORD64)this, "APrimalStructure", "GetNearbyFoundation", PlacementData, ForPC); }
	void NetSpawnCoreStructureDeathActor_Implementation() { NativeCall<void>((DWORD64)this, "APrimalStructure", "NetSpawnCoreStructureDeathActor_Implementation"); }
	float TakeDamage(float Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalStructure", "TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool Die(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalStructure", "Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void PlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "APrimalStructure", "PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	//void FindFoundations(APrimalStructure * StartingStructure TArray<APrimalStructure *> * Foundations) { NativeCall<void, APrimalStructure *, TArray<APrimalStructure *> *>((DWORD64)this, "APrimalStructure", "FindFoundations", StartingStructure, Foundations); }
	//void CullAgainstFoundations(APrimalStructure ** StartingStructure TArray<APrimalStructure *> * Foundations) { NativeCall<void, APrimalStructure **, TArray<APrimalStructure *> *>((DWORD64)this, "APrimalStructure", "CullAgainstFoundations", StartingStructure, Foundations); }
	void FlagReachable(TArray<APrimalStructure *>* Foundations) { NativeCall<void, TArray<APrimalStructure *> *>((DWORD64)this, "APrimalStructure", "FlagReachable", Foundations); }
	void FlagReachable(APrimalStructure* StartingStructure) { NativeCall<void, APrimalStructure *>((DWORD64)this, "APrimalStructure", "FlagReachable", StartingStructure); }
	//void CleanUpTree(APrimalStructure * StartingStructure AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>((DWORD64)this, "APrimalStructure", "CleanUpTree", StartingStructure, InstigatorController, DamageCauser); }
	void RemoveLinkedStructure(APrimalStructure* Structure, AController* InstigatorController, AActor* DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>((DWORD64)this, "APrimalStructure", "RemoveLinkedStructure", Structure, InstigatorController, DamageCauser); }
	void RefreshStructureColors() { NativeCall<void>((DWORD64)this, "APrimalStructure", "RefreshStructureColors"); }
	FLinearColor* GetStructureColorForID(FLinearColor* result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>((DWORD64)this, "APrimalStructure", "GetStructureColorForID", result, SetNum, ID); }
	bool Internal_IsInSnapChain(APrimalStructure* theStructure) { return NativeCall<bool, APrimalStructure *>((DWORD64)this, "APrimalStructure", "Internal_IsInSnapChain", theStructure); }
	void GetAllLinkedStructures(TArray<APrimalStructure *>* OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure *> *>((DWORD64)this, "APrimalStructure", "GetAllLinkedStructures", OutLinkedStructures); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>((DWORD64)this, "APrimalStructure", "TryMultiUse", ForPC, UseIndex); }
	void Demolish(APlayerController* ForPC) { NativeCall<void, APlayerController *>((DWORD64)this, "APrimalStructure", "Demolish", ForPC); }
	bool DoAnyTribePermissionsRestrict(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "APrimalStructure", "DoAnyTribePermissionsRestrict", ForPC); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>((DWORD64)this, "APrimalStructure", "ChangeActorTeam", NewTeam); }
	void NetUpdateTeamAndOwnerName_Implementation(int NewTeam, FString* NewOwnerName) { NativeCall<void, int, FString *>((DWORD64)this, "APrimalStructure", "NetUpdateTeamAndOwnerName_Implementation", NewTeam, NewOwnerName); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalStructure", "GetDescriptiveName", result); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>((DWORD64)this, "APrimalStructure", "UpdatedHealth", bDoReplication); }
	void StartRepair() { NativeCall<void>((DWORD64)this, "APrimalStructure", "StartRepair"); }
	void RepairCheckTimer() { NativeCall<void>((DWORD64)this, "APrimalStructure", "RepairCheckTimer"); }
	void Stasis() { NativeCall<void>((DWORD64)this, "APrimalStructure", "Stasis"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "APrimalStructure", "Destroyed"); }
	void Unstasis() { NativeCall<void>((DWORD64)this, "APrimalStructure", "Unstasis"); }
	//void GetNearbyStructuresOfClass(UWorld * World TSubclassOf<APrimalStructure> StructureClass, FVector * Location, float Range, TArray<APrimalStructure *> * Structures) { NativeCall<void, UWorld *, TSubclassOf<APrimalStructure>, FVector *, float, TArray<APrimalStructure *> *>((DWORD64)this, "APrimalStructure", "GetNearbyStructuresOfClass", World, StructureClass, Location, Range, Structures); }
	void ClientUpdateLinkedStructures_Implementation(TArray<unsigned int>* NewLinkedStructures) { NativeCall<void, TArray<unsigned int> *>((DWORD64)this, "APrimalStructure", "ClientUpdateLinkedStructures_Implementation", NewLinkedStructures); }
	bool AllowColoringBy(APlayerController* ForPC, UObject* anItem) { return NativeCall<bool, APlayerController *, UObject *>((DWORD64)this, "APrimalStructure", "AllowColoringBy", ForPC, anItem); }
	void ServerRequestUseItemWithActor(APlayerController* ForPC, UObject* anItem, int AdditionalData) { NativeCall<void, APlayerController *, UObject *, int>((DWORD64)this, "APrimalStructure", "ServerRequestUseItemWithActor", ForPC, anItem, AdditionalData); }
	void ApplyColorToRegions(__int16 CustomColorID, bool* ApplyToRegions) { NativeCall<void, __int16, bool *>((DWORD64)this, "APrimalStructure", "ApplyColorToRegions", CustomColorID, ApplyToRegions); }
	bool IsNetRelevantFor(APlayerController* RealViewer, AActor* Viewer, FVector* SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, FVector *>((DWORD64)this, "APrimalStructure", "IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	void NetDoSpawnEffects_Implementation() { NativeCall<void>((DWORD64)this, "APrimalStructure", "NetDoSpawnEffects_Implementation"); }
	void FadeInEffectTick() { NativeCall<void>((DWORD64)this, "APrimalStructure", "FadeInEffectTick"); }
	float AddAggroOnBump(APrimalDinoCharacter* BumpedBy) { return NativeCall<float, APrimalDinoCharacter *>((DWORD64)this, "APrimalStructure", "AddAggroOnBump", BumpedBy); }
	int GetNumStructuresInRange() { return NativeCall<int>((DWORD64)this, "APrimalStructure", "GetNumStructuresInRange"); }
	int GetNumStructuresInRangeStructureTypeFlag() { return NativeCall<int>((DWORD64)this, "APrimalStructure", "GetNumStructuresInRangeStructureTypeFlag"); }
	bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "APrimalStructure", "AllowPickupForItem", ForPC); }
	bool AllowSnappingWith(APrimalStructure* OtherStructure, APlayerController* ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>((DWORD64)this, "APrimalStructure", "AllowSnappingWith", OtherStructure, ForPC); }
	bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController *>((DWORD64)this, "APrimalStructure", "AllowStructureAccess", ForPC); }
	bool IsPointObstructedByWorldGeometry() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "IsPointObstructedByWorldGeometry"); }
	bool CanBePainted() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "CanBePainted"); }
	//UPaintingTexture * GetPaintingTexture() { return NativeCall<UPaintingTexture *>((DWORD64)this, "APrimalStructure", "GetPaintingTexture"); }
	APrimalStructureDoor* GetLinkedDoor() { return NativeCall<APrimalStructureDoor *>((DWORD64)this, "APrimalStructure", "GetLinkedDoor"); }
	FString* GetEntryString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalStructure", "GetEntryString", result); }
	UObject* GetUObjectInterfaceDataListEntryInterface() { return NativeCall<UObject *>((DWORD64)this, "APrimalStructure", "GetUObjectInterfaceDataListEntryInterface"); }
	FString* GetEntryDescription(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalStructure", "GetEntryDescription", result); }
	//bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>((DWORD64)this, "APrimalStructure", "PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void ClearCustomColors_Implementation() { NativeCall<void>((DWORD64)this, "APrimalStructure", "ClearCustomColors_Implementation"); }
	bool PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure> FloorClass) { return NativeCall<bool, TSubclassOf<APrimalStructure>>((DWORD64)this, "APrimalStructure", "PreventPlacingOnFloorClass", FloorClass); }
	void UpdateTribeGroupStructureRank_Implementation(char NewRank) { NativeCall<void, char>((DWORD64)this, "APrimalStructure", "UpdateTribeGroupStructureRank_Implementation", NewRank); }
	bool AllowPlacingOnSaddleParentClass(APrimalDinoCharacter* theDino, bool bForcePrevent) { return NativeCall<bool, APrimalDinoCharacter *, bool>((DWORD64)this, "APrimalStructure", "AllowPlacingOnSaddleParentClass", theDino, bForcePrevent); }
	bool GetAttachedToStaticMeshTransform() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "GetAttachedToStaticMeshTransform"); }
	APrimalStructure* GetClosestStructureToPoint() { return NativeCall<APrimalStructure *>((DWORD64)this, "APrimalStructure", "GetClosestStructureToPoint"); }
	float GetStructureDemolishTime() { return NativeCall<float>((DWORD64)this, "APrimalStructure", "GetStructureDemolishTime"); }
	bool CanAutoDemolish() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "CanAutoDemolish"); }
	void DelayedDisableSnapParent() { NativeCall<void>((DWORD64)this, "APrimalStructure", "DelayedDisableSnapParent"); }
	void SetEnabledPrimarySnappedStructureParent_Implementation(bool bEnabled) { NativeCall<void, bool>((DWORD64)this, "APrimalStructure", "SetEnabledPrimarySnappedStructureParent_Implementation", bEnabled); }
	bool AllowCreateDynamicMaterials() { return NativeCall<bool>((DWORD64)this, "APrimalStructure", "AllowCreateDynamicMaterials"); }
	void CreateDynamicMaterials() { NativeCall<void>((DWORD64)this, "APrimalStructure", "CreateDynamicMaterials"); }
	bool BPAllowSnappingWith(APrimalStructure* OtherStructure, APlayerController* ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>((DWORD64)this, "APrimalStructure", "BPAllowSnappingWith", OtherStructure, ForPC); }
	int BPIsAllowedToBuild(FPlacementData* OutPlacementData, int CurrentAllowedReason) { return NativeCall<int, FPlacementData *, int>((DWORD64)this, "APrimalStructure", "BPIsAllowedToBuild", OutPlacementData, CurrentAllowedReason); }
	FString* BPOverrideCantBuildReasonString(FString* result, int CantBuildReason) { return NativeCall<FString *, FString *, int>((DWORD64)this, "APrimalStructure", "BPOverrideCantBuildReasonString", result, CantBuildReason); }
	bool BPPreventPlacingOnFloorStructure(FPlacementData* theOutPlacementData, APrimalStructure* FloorStructure) { return NativeCall<bool, FPlacementData *, APrimalStructure *>((DWORD64)this, "APrimalStructure", "BPPreventPlacingOnFloorStructure", theOutPlacementData, FloorStructure); }
	bool BPPreventUsingAsFloorForStructure(FPlacementData* theOutPlacementData, APrimalStructure* StructureToPlaceOnMe) { return NativeCall<bool, FPlacementData *, APrimalStructure *>((DWORD64)this, "APrimalStructure", "BPPreventUsingAsFloorForStructure", theOutPlacementData, StructureToPlaceOnMe); }
	void BPRefreshedStructureColors() { NativeCall<void>((DWORD64)this, "APrimalStructure", "BPRefreshedStructureColors"); }
	void ClientUpdateLinkedStructures(TArray<unsigned int>* NewLinkedStructures) { NativeCall<void, TArray<unsigned int> *>((DWORD64)this, "APrimalStructure", "ClientUpdateLinkedStructures", NewLinkedStructures); }
	void NetDoSpawnEffects() { NativeCall<void>((DWORD64)this, "APrimalStructure", "NetDoSpawnEffects"); }
	void NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, FString* NewOriginalOwnerName) { NativeCall<void, int, FString *>((DWORD64)this, "APrimalStructure", "NetUpdateOriginalOwnerNameAndID", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NetUpdateTeamAndOwnerName(int NewTeam, FString* NewOwnerName) { NativeCall<void, int, FString *>((DWORD64)this, "APrimalStructure", "NetUpdateTeamAndOwnerName", NewTeam, NewOwnerName); }
};

struct APrimalStructureDoor : APrimalStructure
{
	float GetRotationSpeedField() const { return GetNativeField<float>(this, "APrimalStructureDoor", "RotationSpeed"); }
	void SetRotationSpeedField(float newValue) { SetNativeField(this, "APrimalStructureDoor", "RotationSpeed", newValue); }
	unsigned int GetCurrentPinCodeField() const { return GetNativeField<unsigned int>(this, "APrimalStructureDoor", "CurrentPinCode"); }
	void SetCurrentPinCodeField(unsigned int newValue) { SetNativeField(this, "APrimalStructureDoor", "CurrentPinCode", newValue); }
	char GetDoorOpenStateField() const { return GetNativeField<char>(this, "APrimalStructureDoor", "DoorOpenState"); }
	void SetDoorOpenStateField(char newValue) { SetNativeField(this, "APrimalStructureDoor", "DoorOpenState", newValue); }
	char GetClientPrevDoorOpenStateField() const { return GetNativeField<char>(this, "APrimalStructureDoor", "ClientPrevDoorOpenState"); }
	void SetClientPrevDoorOpenStateField(char newValue) { SetNativeField(this, "APrimalStructureDoor", "ClientPrevDoorOpenState", newValue); }
	long double GetLastLockStateChangeTimeField() const { return GetNativeField<long double>(this, "APrimalStructureDoor", "LastLockStateChangeTime"); }
	void SetLastLockStateChangeTimeField(long double newValue) { SetNativeField(this, "APrimalStructureDoor", "LastLockStateChangeTime", newValue); }
	FRotator GetSecondDoorDefaultRotField() const { return GetNativeField<FRotator>(this, "APrimalStructureDoor", "SecondDoorDefaultRot"); }
	void SetSecondDoorDefaultRotField(FRotator newValue) { SetNativeField(this, "APrimalStructureDoor", "SecondDoorDefaultRot", newValue); }
	float GetCurrentDoorAngleField() const { return GetNativeField<float>(this, "APrimalStructureDoor", "CurrentDoorAngle"); }
	void SetCurrentDoorAngleField(float newValue) { SetNativeField(this, "APrimalStructureDoor", "CurrentDoorAngle", newValue); }
	char GetDelayedDoorStateField() const { return GetNativeField<char>(this, "APrimalStructureDoor", "DelayedDoorState"); }
	void SetDelayedDoorStateField(char newValue) { SetNativeField(this, "APrimalStructureDoor", "DelayedDoorState", newValue); }

	// Functions

	void BeginPlay() { NativeCall<void>((DWORD64)this, "APrimalStructureDoor", "BeginPlay"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APrimalStructureDoor", "Tick", DeltaSeconds); }
	void GotoDoorState(char DoorState) { NativeCall<void, char>((DWORD64)this, "APrimalStructureDoor", "GotoDoorState", DoorState); }
	void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>((DWORD64)this, "APrimalStructureDoor", "DelayedGotoDoorState", DoorState, DelayTime); }
	void DelayedGotoDoorStateTimer() { NativeCall<void>((DWORD64)this, "APrimalStructureDoor", "DelayedGotoDoorStateTimer"); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>((DWORD64)this, "APrimalStructureDoor", "TryMultiUse", ForPC, UseIndex); }
	bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController *>((DWORD64)this, "APrimalStructureDoor", "CanOpen", ForPC); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalStructureDoor", "GetDescriptiveName", result); }
	bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting) { return NativeCall<bool, AShooterPlayerController *, int, bool>((DWORD64)this, "APrimalStructureDoor", "ApplyPinCode", ForPC, appledPinCode, bIsSetting); }
	void SetStaticMobility() { NativeCall<void>((DWORD64)this, "APrimalStructureDoor", "SetStaticMobility"); }
	void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>((DWORD64)this, "APrimalStructureDoor", "NetGotoDoorState_Implementation", DoorState); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "APrimalStructureDoor", "PostInitializeComponents"); }
	bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController *>((DWORD64)this, "APrimalStructureDoor", "AllowStructureAccess", ForPC); }
	//bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>((DWORD64)this, "APrimalStructureDoor", "PreventCharacterBasing", OtherActor, BasedOnComponent); }
	bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "APrimalStructureDoor", "AllowPickupForItem", ForPC); }
	void StaticRegisterNativesAPrimalStructureDoor() { NativeCall<void>((DWORD64)this, "APrimalStructureDoor", "StaticRegisterNativesAPrimalStructureDoor"); }
};

struct APrimalStructureTurret
{
	TWeakObjectPtr<AActor> GetTargetField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "APrimalStructureTurret", "Target"); }
	void SetTargetField(TWeakObjectPtr<AActor> newValue) { SetNativeField(this, "APrimalStructureTurret", "Target", newValue); }
	TSubclassOf<UPrimalItem> GetAmmoItemTemplateField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalStructureTurret", "AmmoItemTemplate"); }
	void SetAmmoItemTemplateField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalStructureTurret", "AmmoItemTemplate", newValue); }
	float GetFireIntervalField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "FireInterval"); }
	void SetFireIntervalField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "FireInterval", newValue); }
	long double GetLastFireTimeField() const { return GetNativeField<long double>(this, "APrimalStructureTurret", "LastFireTime"); }
	void SetLastFireTimeField(long double newValue) { SetNativeField(this, "APrimalStructureTurret", "LastFireTime", newValue); }
	float GetMaxFireYawDeltaField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "MaxFireYawDelta"); }
	void SetMaxFireYawDeltaField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "MaxFireYawDelta", newValue); }
	float GetMaxFirePitchDeltaField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "MaxFirePitchDelta"); }
	void SetMaxFirePitchDeltaField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "MaxFirePitchDelta", newValue); }
	FVector GetTargetingLocOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructureTurret", "TargetingLocOffset"); }
	void SetTargetingLocOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructureTurret", "TargetingLocOffset", newValue); }
	float GetTargetingRotationInterpSpeedField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "TargetingRotationInterpSpeed"); }
	void SetTargetingRotationInterpSpeedField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "TargetingRotationInterpSpeed", newValue); }
	FVector GetTargetingTraceOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructureTurret", "TargetingTraceOffset"); }
	void SetTargetingTraceOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructureTurret", "TargetingTraceOffset", newValue); }
	TSubclassOf<UDamageType> GetFireDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalStructureTurret", "FireDamageType"); }
	void SetFireDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalStructureTurret", "FireDamageType", newValue); }
	float GetFireDamageAmountField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "FireDamageAmount"); }
	void SetFireDamageAmountField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "FireDamageAmount", newValue); }
	float GetFireDamageImpulseField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "FireDamageImpulse"); }
	void SetFireDamageImpulseField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "FireDamageImpulse", newValue); }
	FRotator GetTurretAimRotOffsetField() const { return GetNativeField<FRotator>(this, "APrimalStructureTurret", "TurretAimRotOffset"); }
	void SetTurretAimRotOffsetField(FRotator newValue) { SetNativeField(this, "APrimalStructureTurret", "TurretAimRotOffset", newValue); }
	FVector GetAimTargetLocOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructureTurret", "AimTargetLocOffset"); }
	void SetAimTargetLocOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructureTurret", "AimTargetLocOffset", newValue); }
	FVector GetPlayerProneTargetOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructureTurret", "PlayerProneTargetOffset"); }
	void SetPlayerProneTargetOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructureTurret", "PlayerProneTargetOffset", newValue); }
	float GetAimSpreadField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "AimSpread"); }
	void SetAimSpreadField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "AimSpread", newValue); }
	char GetRangeSettingField() const { return GetNativeField<char>(this, "APrimalStructureTurret", "RangeSetting"); }
	void SetRangeSettingField(char newValue) { SetNativeField(this, "APrimalStructureTurret", "RangeSetting", newValue); }
	char GetAISettingField() const { return GetNativeField<char>(this, "APrimalStructureTurret", "AISetting"); }
	void SetAISettingField(char newValue) { SetNativeField(this, "APrimalStructureTurret", "AISetting", newValue); }
	char GetWarningSettingField() const { return GetNativeField<char>(this, "APrimalStructureTurret", "WarningSetting"); }
	void SetWarningSettingField(char newValue) { SetNativeField(this, "APrimalStructureTurret", "WarningSetting", newValue); }
	int GetNumBulletsField() const { return GetNativeField<int>(this, "APrimalStructureTurret", "NumBullets"); }
	void SetNumBulletsField(int newValue) { SetNativeField(this, "APrimalStructureTurret", "NumBullets", newValue); }
	float GetWarningExpirationTimeField() const { return GetNativeField<float>(this, "APrimalStructureTurret", "WarningExpirationTime"); }
	void SetWarningExpirationTimeField(float newValue) { SetNativeField(this, "APrimalStructureTurret", "WarningExpirationTime", newValue); }
	USkeletalMeshComponent* GetMySkeletalMeshCompField() const { return GetNativeField<USkeletalMeshComponent *>(this, "APrimalStructureTurret", "MySkeletalMeshComp"); }
	void SetMySkeletalMeshCompField(USkeletalMeshComponent* newValue) { SetNativeField(this, "APrimalStructureTurret", "MySkeletalMeshComp", newValue); }
	bool GetbWarnedField() const { return GetNativeField<bool>(this, "APrimalStructureTurret", "bWarned"); }
	void SetbWarnedField(bool newValue) { SetNativeField(this, "APrimalStructureTurret", "bWarned", newValue); }
	FRotator GetDefaultTurretAimRotOffsetField() const { return GetNativeField<FRotator>(this, "APrimalStructureTurret", "DefaultTurretAimRotOffset"); }
	void SetDefaultTurretAimRotOffsetField(FRotator newValue) { SetNativeField(this, "APrimalStructureTurret", "DefaultTurretAimRotOffset", newValue); }
	FVector GetMuzzleLocOffsetField() const { return GetNativeField<FVector>(this, "APrimalStructureTurret", "MuzzleLocOffset"); }
	void SetMuzzleLocOffsetField(FVector newValue) { SetNativeField(this, "APrimalStructureTurret", "MuzzleLocOffset", newValue); }
	long double GetLastWarningTimeField() const { return GetNativeField<long double>(this, "APrimalStructureTurret", "LastWarningTime"); }
	void SetLastWarningTimeField(long double newValue) { SetNativeField(this, "APrimalStructureTurret", "LastWarningTime", newValue); }

	// Functions

	void BeginPlay() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "BeginPlay"); }
	AActor* FindTarget() { return NativeCall<AActor *>((DWORD64)this, "APrimalStructureTurret", "FindTarget"); }
	void SetTarget(AActor* aTarget) { NativeCall<void, AActor *>((DWORD64)this, "APrimalStructureTurret", "SetTarget", aTarget); }
	void DoFire(int RandomSeed) { NativeCall<void, int>((DWORD64)this, "APrimalStructureTurret", "DoFire", RandomSeed); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>((DWORD64)this, "APrimalStructureTurret", "DoFireProjectile", Origin, ShootDir); }
	void SpawnImpactEffects(FHitResult* Impact, FVector* ShootDir) { NativeCall<void, FHitResult *, FVector *>((DWORD64)this, "APrimalStructureTurret", "SpawnImpactEffects", Impact, ShootDir); }
	void SpawnTrailEffect(FVector* EndPoint) { NativeCall<void, FVector *>((DWORD64)this, "APrimalStructureTurret", "SpawnTrailEffect", EndPoint); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor *>((DWORD64)this, "APrimalStructureTurret", "ShouldDealDamage", TestActor); }
	void DealDamage(FHitResult* Impact, FVector* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, FHitResult *, FVector *, int, TSubclassOf<UDamageType>, float>((DWORD64)this, "APrimalStructureTurret", "DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void StartWarning() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "StartWarning"); }
	void FinishWarning() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "FinishWarning"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APrimalStructureTurret", "Tick", DeltaSeconds); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD *>((DWORD64)this, "APrimalStructureTurret", "DrawHUD", HUD); }
	bool IsValidToFire() { return NativeCall<bool>((DWORD64)this, "APrimalStructureTurret", "IsValidToFire"); }
	FRotator* GetMuzzleRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "APrimalStructureTurret", "GetMuzzleRotation", result); }
	FVector* GetMuzzleLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalStructureTurret", "GetMuzzleLocation", result); }
	FVector* GetAttackingFromLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalStructureTurret", "GetAttackingFromLocation", result); }
	FVector* GetAimPivotLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalStructureTurret", "GetAimPivotLocation", result); }
	FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName *, FName *>((DWORD64)this, "APrimalStructureTurret", "GetMuzzleFlashSocketName", result); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>((DWORD64)this, "APrimalStructureTurret", "TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>((DWORD64)this, "APrimalStructureTurret", "ClientMultiUse", ForPC, UseIndex); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "APrimalStructureTurret", "NotifyItemRemoved", anItem); }
	void UpdateNumBullets() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "UpdateNumBullets"); }
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "PreInitializeComponents"); }
	void Stasis() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "Stasis"); }
	void Unstasis() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "Unstasis"); }
	void UpdatedTargeting() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "UpdatedTargeting"); }
	FVector* GetTargetAimAtLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalStructureTurret", "GetTargetAimAtLocation", result); }
	FVector* GetTargetFireAtLocation(FVector* result, APrimalCharacter* ForTarget) { return NativeCall<FVector *, FVector *, APrimalCharacter *>((DWORD64)this, "APrimalStructureTurret", "GetTargetFireAtLocation", result, ForTarget); }
	bool CanFire() { return NativeCall<bool>((DWORD64)this, "APrimalStructureTurret", "CanFire"); }
	FName* GetTargetAltAimSocket(FName* result, APrimalCharacter* ForTarget) { return NativeCall<FName *, FName *, APrimalCharacter *>((DWORD64)this, "APrimalStructureTurret", "GetTargetAltAimSocket", result, ForTarget); }
	USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent *>((DWORD64)this, "APrimalStructureTurret", "GetSkeletalMeshComponent"); }
	void StaticRegisterNativesAPrimalStructureTurret() { NativeCall<void>((DWORD64)this, "APrimalStructureTurret", "StaticRegisterNativesAPrimalStructureTurret"); }
};
