#pragma once

#include "Base.h"

struct APrimalTargetableActor
{
	void SetLowHealthPercentage(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "LowHealthPercentage") = a0; };
	float GetLowHealthPercentage() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "LowHealthPercentage"); };
	void SetPassiveDamageHealthReplicationPercentInterval(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "PassiveDamageHealthReplicationPercentInterval") = a0; };
	float GetPassiveDamageHealthReplicationPercentInterval() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "PassiveDamageHealthReplicationPercentInterval"); };
	void SetDamageNotifyTeamAggroMultiplier(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "DamageNotifyTeamAggroMultiplier") = a0; };
	float GetDamageNotifyTeamAggroMultiplier() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "DamageNotifyTeamAggroMultiplier"); };
	void SetDamageNotifyTeamAggroRange(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRange") = a0; };
	float GetDamageNotifyTeamAggroRange() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRange"); };
	void SetDamageNotifyTeamAggroRangeFalloff(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRangeFalloff") = a0; };
	float GetDamageNotifyTeamAggroRangeFalloff() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "DamageNotifyTeamAggroRangeFalloff"); };
	void SetDestructibleMeshLocationOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshLocationOffset") = a0; };
	FVector GetDestructibleMeshLocationOffset() const { return *(FVector*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshLocationOffset"); };
	void SetDestructibleMeshScaleOverride(FVector a0) { *(FVector*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshScaleOverride") = a0; };
	FVector GetDestructibleMeshScaleOverride() const { return *(FVector*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshScaleOverride"); };
	void SetDestructibleMeshRotationOffset(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshRotationOffset") = a0; };
	FRotator GetDestructibleMeshRotationOffset() const { return *(FRotator*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshRotationOffset"); };
	void SetDescriptiveName(FString a0) { *(FString*)GetAddress(this, "APrimalTargetableActor", "DescriptiveName") = a0; };
	FString GetDescriptiveName() const { return *(FString*)GetAddress(this, "APrimalTargetableActor", "DescriptiveName"); };
	void SetReplicatedHealth(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "ReplicatedHealth") = a0; };
	float GetReplicatedHealth() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "ReplicatedHealth"); };
	float GetMaxHealth() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "MaxHealth"); };
	void SetDestructibleMeshDeathImpulseScale(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshDeathImpulseScale") = a0; };
	float GetDestructibleMeshDeathImpulseScale() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "DestructibleMeshDeathImpulseScale"); };
	void SetLastReplicatedHealthValue(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "LastReplicatedHealthValue") = a0; };
	float GetLastReplicatedHealthValue() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "LastReplicatedHealthValue"); };
	void SetLastHealthBeforeTakeDamage(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "LastHealthBeforeTakeDamage") = a0; };
	float GetLastHealthBeforeTakeDamage() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "LastHealthBeforeTakeDamage"); };
	void SetNextAllowRepairTime(double a0) { *(double*)GetAddress(this, "APrimalTargetableActor", "NextAllowRepairTime") = a0; };
	double GetNextAllowRepairTime() const { return *(double*)GetAddress(this, "APrimalTargetableActor", "NextAllowRepairTime"); };
	void SetLastPreBlueprintAdjustmentActualDamage(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "LastPreBlueprintAdjustmentActualDamage") = a0; };
	float GetLastPreBlueprintAdjustmentActualDamage() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "LastPreBlueprintAdjustmentActualDamage"); };
	void SetLastReplicatedHealth(float a0) { *(float*)GetAddress(this, "APrimalTargetableActor", "LastReplicatedHealth") = a0; };
	float GetLastReplicatedHealth() const { return *(float*)GetAddress(this, "APrimalTargetableActor", "LastReplicatedHealth"); };

	// Functions

	void UpdatedHealth(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalTargetableActor", "UpdatedHealth"))((DWORD64)this, a1); }
	float TakeDamage(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<float(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalTargetableActor", "TakeDamage"))((DWORD64)this, a1, a2, a3, a4); }
	void AdjustDamage(float& a1, const FDamageEvent& a2, AController* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float&, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalTargetableActor", "AdjustDamage"))((DWORD64)this, a1, a2, a3, a4); }
	bool CanDie(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<bool(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalTargetableActor", "CanDie"))((DWORD64)this, a1, a2, a3, a4); }
	bool Die(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<bool(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalTargetableActor", "Die"))((DWORD64)this, a1, a2, a3, a4); }
	void FellOutOfWorld(const UDamageType& a1) { static_cast<void(_cdecl*)(DWORD64, const UDamageType&)>(GetAddress("APrimalTargetableActor", "FellOutOfWorld"))((DWORD64)this, a1); }
	float GetMaxHealth() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "GetMaxHealth"))((DWORD64)this); }
	bool IsAlive() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "IsAlive"))((DWORD64)this); }
	float GetLowHealthPercentage() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "GetLowHealthPercentage"))((DWORD64)this); }
	bool IsDead() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "IsDead"))((DWORD64)this); }
	bool IsTargetableDead() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "IsTargetableDead"))((DWORD64)this); }
	float GetHealth() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "GetHealth"))((DWORD64)this); }
	float GetHealthPercentage() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "GetHealthPercentage"))((DWORD64)this); }
	float SetHealth(float a1) { return static_cast<float(_cdecl*)(DWORD64, float)>(GetAddress("APrimalTargetableActor", "SetHealth"))((DWORD64)this, a1); }
	void SetMaxHealth(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalTargetableActor", "SetMaxHealth"))((DWORD64)this, a1); }
	bool IsOfTribe(int a1) { return static_cast<bool(_cdecl*)(DWORD64, int)>(GetAddress("APrimalTargetableActor", "IsOfTribe"))((DWORD64)this, a1); }
	void Suicide() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "Suicide"))((DWORD64)this); }
	bool IsTargetable() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "IsTargetable"))((DWORD64)this); }
	bool IsInvincible() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalTargetableActor", "IsInvincible"))((DWORD64)this); }
};

struct APrimalStructure : APrimalTargetableActor
{
	void SetOverlayTooltipPadding(FVector2D a0) { *(FVector2D*)GetAddress(this, "APrimalStructure", "OverlayTooltipPadding") = a0; };
	FVector2D GetOverlayTooltipPadding() const { return *(FVector2D*)GetAddress(this, "APrimalStructure", "OverlayTooltipPadding"); };
	void SetOverlayTooltipScale(FVector2D a0) { *(FVector2D*)GetAddress(this, "APrimalStructure", "OverlayTooltipScale") = a0; };
	FVector2D GetOverlayTooltipScale() const { return *(FVector2D*)GetAddress(this, "APrimalStructure", "OverlayTooltipScale"); };
	void SetPlacementHitLocOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "PlacementHitLocOffset") = a0; };
	FVector GetPlacementHitLocOffset() const { return *(FVector*)GetAddress(this, "APrimalStructure", "PlacementHitLocOffset"); };
	void SetPlacementEncroachmentCheckOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "PlacementEncroachmentCheckOffset") = a0; };
	FVector GetPlacementEncroachmentCheckOffset() const { return *(FVector*)GetAddress(this, "APrimalStructure", "PlacementEncroachmentCheckOffset"); };
	void SetPlacementEncroachmentBoxExtent(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "PlacementEncroachmentBoxExtent") = a0; };
	FVector GetPlacementEncroachmentBoxExtent() const { return *(FVector*)GetAddress(this, "APrimalStructure", "PlacementEncroachmentBoxExtent"); };
	void SetPlacementTraceScale(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "PlacementTraceScale") = a0; };
	FVector GetPlacementTraceScale() const { return *(FVector*)GetAddress(this, "APrimalStructure", "PlacementTraceScale"); };
	void SetSnapAlternatePlacementTraceScale(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "SnapAlternatePlacementTraceScale") = a0; };
	FVector GetSnapAlternatePlacementTraceScale() const { return *(FVector*)GetAddress(this, "APrimalStructure", "SnapAlternatePlacementTraceScale"); };
	void SetPlacementRotOffset(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalStructure", "PlacementRotOffset") = a0; };
	FRotator GetPlacementRotOffset() const { return *(FRotator*)GetAddress(this, "APrimalStructure", "PlacementRotOffset"); };
	void SetPlacementTraceRotOffset(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalStructure", "PlacementTraceRotOffset") = a0; };
	FRotator GetPlacementTraceRotOffset() const { return *(FRotator*)GetAddress(this, "APrimalStructure", "PlacementTraceRotOffset"); };
	void SetSnappingRotationOffset(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalStructure", "SnappingRotationOffset") = a0; };
	FRotator GetSnappingRotationOffset() const { return *(FRotator*)GetAddress(this, "APrimalStructure", "SnappingRotationOffset"); };
	void SetRepairAmountRemaining(float a0) { *(float*)GetAddress(this, "APrimalStructure", "RepairAmountRemaining") = a0; };
	float GetRepairAmountRemaining() const { return *(float*)GetAddress(this, "APrimalStructure", "RepairAmountRemaining"); };
	void SetRepairCheckInterval(float a0) { *(float*)GetAddress(this, "APrimalStructure", "RepairCheckInterval") = a0; };
	float GetRepairCheckInterval() const { return *(float*)GetAddress(this, "APrimalStructure", "RepairCheckInterval"); };
	void SetPlacementFloorCheckZExtentUp(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PlacementFloorCheckZExtentUp") = a0; };
	float GetPlacementFloorCheckZExtentUp() const { return *(float*)GetAddress(this, "APrimalStructure", "PlacementFloorCheckZExtentUp"); };
	void SetRepairPercentPerInterval(float a0) { *(float*)GetAddress(this, "APrimalStructure", "RepairPercentPerInterval") = a0; };
	float GetRepairPercentPerInterval() const { return *(float*)GetAddress(this, "APrimalStructure", "RepairPercentPerInterval"); };
	void SetDecayDestructionPeriod(float a0) { *(float*)GetAddress(this, "APrimalStructure", "DecayDestructionPeriod") = a0; };
	float GetDecayDestructionPeriod() const { return *(float*)GetAddress(this, "APrimalStructure", "DecayDestructionPeriod"); };
	void SetTraceIgnoreStructuresWithTypeFlags(int a0) { *(int*)GetAddress(this, "APrimalStructure", "TraceIgnoreStructuresWithTypeFlags") = a0; };
	int GetTraceIgnoreStructuresWithTypeFlags() const { return *(int*)GetAddress(this, "APrimalStructure", "TraceIgnoreStructuresWithTypeFlags"); };
	void SetbTraceCheckOnlyUseStructuresWithTypeFlags(int a0) { *(int*)GetAddress(this, "APrimalStructure", "bTraceCheckOnlyUseStructuresWithTypeFlags") = a0; };
	int GetbTraceCheckOnlyUseStructuresWithTypeFlags() const { return *(int*)GetAddress(this, "APrimalStructure", "bTraceCheckOnlyUseStructuresWithTypeFlags"); };
	void SetWaterPlacementMinimumWaterHeight(float a0) { *(float*)GetAddress(this, "APrimalStructure", "WaterPlacementMinimumWaterHeight") = a0; };
	float GetWaterPlacementMinimumWaterHeight() const { return *(float*)GetAddress(this, "APrimalStructure", "WaterPlacementMinimumWaterHeight"); };
	void SetPlacementMaxZDelta(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PlacementMaxZDelta") = a0; };
	float GetPlacementMaxZDelta() const { return *(float*)GetAddress(this, "APrimalStructure", "PlacementMaxZDelta"); };
	void SetPlacementChooseRotationMaxRangeOverride(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PlacementChooseRotationMaxRangeOverride") = a0; };
	float GetPlacementChooseRotationMaxRangeOverride() const { return *(float*)GetAddress(this, "APrimalStructure", "PlacementChooseRotationMaxRangeOverride"); };
	void SetPlacementMaxRange(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PlacementMaxRange") = a0; };
	float GetPlacementMaxRange() const { return *(float*)GetAddress(this, "APrimalStructure", "PlacementMaxRange"); };
	void SetMaxSnapLocRange(float a0) { *(float*)GetAddress(this, "APrimalStructure", "MaxSnapLocRange") = a0; };
	float GetMaxSnapLocRange() const { return *(float*)GetAddress(this, "APrimalStructure", "MaxSnapLocRange"); };
	void SetSnapOverlapCheckRadius(float a0) { *(float*)GetAddress(this, "APrimalStructure", "SnapOverlapCheckRadius") = a0; };
	float GetSnapOverlapCheckRadius() const { return *(float*)GetAddress(this, "APrimalStructure", "SnapOverlapCheckRadius"); };
	void SetMaximumFoundationSupport2DBuildDistance(float a0) { *(float*)GetAddress(this, "APrimalStructure", "MaximumFoundationSupport2DBuildDistance") = a0; };
	float GetMaximumFoundationSupport2DBuildDistance() const { return *(float*)GetAddress(this, "APrimalStructure", "MaximumFoundationSupport2DBuildDistance"); };
	void SetPlacementFloorCheckZExtent(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PlacementFloorCheckZExtent") = a0; };
	float GetPlacementFloorCheckZExtent() const { return *(float*)GetAddress(this, "APrimalStructure", "PlacementFloorCheckZExtent"); };
	void SetLastHealthPercentage(float a0) { *(float*)GetAddress(this, "APrimalStructure", "LastHealthPercentage") = a0; };
	float GetLastHealthPercentage() const { return *(float*)GetAddress(this, "APrimalStructure", "LastHealthPercentage"); };
	void SetTakeGroundNormalRotationOffset(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalStructure", "TakeGroundNormalRotationOffset") = a0; };
	FRotator GetTakeGroundNormalRotationOffset() const { return *(FRotator*)GetAddress(this, "APrimalStructure", "TakeGroundNormalRotationOffset"); };
	void SetDemolishGiveItemCraftingResourcePercentage(float a0) { *(float*)GetAddress(this, "APrimalStructure", "DemolishGiveItemCraftingResourcePercentage") = a0; };
	float GetDemolishGiveItemCraftingResourcePercentage() const { return *(float*)GetAddress(this, "APrimalStructure", "DemolishGiveItemCraftingResourcePercentage"); };
	void SetMaximumHeightAboveWorldGround(float a0) { *(float*)GetAddress(this, "APrimalStructure", "MaximumHeightAboveWorldGround") = a0; };
	float GetMaximumHeightAboveWorldGround() const { return *(float*)GetAddress(this, "APrimalStructure", "MaximumHeightAboveWorldGround"); };
	void SetPreviewCameraRotation(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalStructure", "PreviewCameraRotation") = a0; };
	FRotator GetPreviewCameraRotation() const { return *(FRotator*)GetAddress(this, "APrimalStructure", "PreviewCameraRotation"); };
	void SetPreviewCameraPivotOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "PreviewCameraPivotOffset") = a0; };
	FVector GetPreviewCameraPivotOffset() const { return *(FVector*)GetAddress(this, "APrimalStructure", "PreviewCameraPivotOffset"); };
	void SetPreviewCameraDistanceScaleFactor(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PreviewCameraDistanceScaleFactor") = a0; };
	float GetPreviewCameraDistanceScaleFactor() const { return *(float*)GetAddress(this, "APrimalStructure", "PreviewCameraDistanceScaleFactor"); };
	void SetPreviewCameraDefaultZoomMultiplier(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PreviewCameraDefaultZoomMultiplier") = a0; };
	float GetPreviewCameraDefaultZoomMultiplier() const { return *(float*)GetAddress(this, "APrimalStructure", "PreviewCameraDefaultZoomMultiplier"); };
	void SetPreviewCameraMaxZoomMultiplier(float a0) { *(float*)GetAddress(this, "APrimalStructure", "PreviewCameraMaxZoomMultiplier") = a0; };
	float GetPreviewCameraMaxZoomMultiplier() const { return *(float*)GetAddress(this, "APrimalStructure", "PreviewCameraMaxZoomMultiplier"); };
	void SetReturnDamageAmount(float a0) { *(float*)GetAddress(this, "APrimalStructure", "ReturnDamageAmount") = a0; };
	float GetReturnDamageAmount() const { return *(float*)GetAddress(this, "APrimalStructure", "ReturnDamageAmount"); };
	void SetStructureRangeTypeFlag(int a0) { *(int*)GetAddress(this, "APrimalStructure", "StructureRangeTypeFlag") = a0; };
	int GetStructureRangeTypeFlag() const { return *(int*)GetAddress(this, "APrimalStructure", "StructureRangeTypeFlag"); };
	void SetLimitMaxStructuresInRangeTypeFlag(int a0) { *(int*)GetAddress(this, "APrimalStructure", "LimitMaxStructuresInRangeTypeFlag") = a0; };
	int GetLimitMaxStructuresInRangeTypeFlag() const { return *(int*)GetAddress(this, "APrimalStructure", "LimitMaxStructuresInRangeTypeFlag"); };
	void SetReturnDamageImpulse(float a0) { *(float*)GetAddress(this, "APrimalStructure", "ReturnDamageImpulse") = a0; };
	float GetReturnDamageImpulse() const { return *(float*)GetAddress(this, "APrimalStructure", "ReturnDamageImpulse"); };
	void SetOwningPlayerID(int a0) { *(int*)GetAddress(this, "APrimalStructure", "OwningPlayerID") = a0; };
	int GetOwningPlayerID() const { return *(int*)GetAddress(this, "APrimalStructure", "OwningPlayerID"); };
	void SetOwningPlayerName(FString a0) { *(FString*)GetAddress(this, "APrimalStructure", "OwningPlayerName") = a0; };
	FString GetOwningPlayerName() const { return *(FString*)GetAddress(this, "APrimalStructure", "OwningPlayerName"); };
	void SetLastInAllyRangeTime(double a0) { *(double*)GetAddress(this, "APrimalStructure", "LastInAllyRangeTime") = a0; };
	double GetLastInAllyRangeTime() const { return *(double*)GetAddress(this, "APrimalStructure", "LastInAllyRangeTime"); };
	void SetDecayDestructionPeriodMultiplier(float a0) { *(float*)GetAddress(this, "APrimalStructure", "DecayDestructionPeriodMultiplier") = a0; };
	float GetDecayDestructionPeriodMultiplier() const { return *(float*)GetAddress(this, "APrimalStructure", "DecayDestructionPeriodMultiplier"); };
	//TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr> GetSaddleDino() const { return *(TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*)GetAddress(this, "APrimalStructure", "SaddleDino"); };
	void SetLatchedDinos(TArray<APrimalDinoCharacter *, FDefaultAllocator> a0) { *(TArray<APrimalDinoCharacter *, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "LatchedDinos") = a0; };
	TArray<APrimalDinoCharacter *, FDefaultAllocator> GetLatchedDinos() const { return *(TArray<APrimalDinoCharacter *, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "LatchedDinos"); };
	TArray<FVector, FDefaultAllocator> GetPlacementTraceDirections() const { return *(TArray<FVector, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "PlacementTraceDirections"); };
	void SetLinkedStructures(TArray<APrimalStructure *, FDefaultAllocator> a0) { *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "LinkedStructures") = a0; };
	TArray<APrimalStructure *, FDefaultAllocator> GetLinkedStructures() const { return *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "LinkedStructures"); };
	void SetLinkedStructuresID(TArray<unsigned int, FDefaultAllocator> a0) { *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "LinkedStructuresID") = a0; };
	TArray<unsigned int, FDefaultAllocator> GetLinkedStructuresID() const { return *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "LinkedStructuresID"); };
	void SetStructuresPlacedOnFloor(TArray<APrimalStructure *, FDefaultAllocator> a0) { *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "StructuresPlacedOnFloor") = a0; };
	TArray<APrimalStructure *, FDefaultAllocator> GetStructuresPlacedOnFloor() const { return *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "StructuresPlacedOnFloor"); };
	void SetPlacedOnFloorStructure(APrimalStructure* a0) { *(APrimalStructure**)GetAddress(this, "APrimalStructure", "PlacedOnFloorStructure") = a0; };
	APrimalStructure* GetPlacedOnFloorStructure() const { return *(APrimalStructure**)GetAddress(this, "APrimalStructure", "PlacedOnFloorStructure"); };
	void SetPrimarySnappedStructureChild(APrimalStructure* a0) { *(APrimalStructure**)GetAddress(this, "APrimalStructure", "PrimarySnappedStructureChild") = a0; };
	APrimalStructure* GetPrimarySnappedStructureChild() const { return *(APrimalStructure**)GetAddress(this, "APrimalStructure", "PrimarySnappedStructureChild"); };
	void SetPrimarySnappedStructureParent(APrimalStructure* a0) { *(APrimalStructure**)GetAddress(this, "APrimalStructure", "PrimarySnappedStructureParent") = a0; };
	APrimalStructure* GetPrimarySnappedStructureParent() const { return *(APrimalStructure**)GetAddress(this, "APrimalStructure", "PrimarySnappedStructureParent"); };
	void SetOwnerName(FString a0) { *(FString*)GetAddress(this, "APrimalStructure", "OwnerName") = a0; };
	FString GetOwnerName() const { return *(FString*)GetAddress(this, "APrimalStructure", "OwnerName"); };
	void SetAttachedTo(APawn* a0) { *(APawn**)GetAddress(this, "APrimalStructure", "AttachedTo") = a0; };
	APawn* GetAttachedTo() const { return *(APawn**)GetAddress(this, "APrimalStructure", "AttachedTo"); };
	void SetStructureID(unsigned int a0) { *(unsigned int*)GetAddress(this, "APrimalStructure", "StructureID") = a0; };
	unsigned int GetStructureID() const { return *(unsigned int*)GetAddress(this, "APrimalStructure", "StructureID"); };
	void SetAttachedToDinoID1(unsigned int a0) { *(unsigned int*)GetAddress(this, "APrimalStructure", "AttachedToDinoID1") = a0; };
	unsigned int GetAttachedToDinoID1() const { return *(unsigned int*)GetAddress(this, "APrimalStructure", "AttachedToDinoID1"); };
	void SetTaggedIndex(unsigned int a0) { *(unsigned int*)GetAddress(this, "APrimalStructure", "TaggedIndex") = a0; };
	unsigned int GetTaggedIndex() const { return *(unsigned int*)GetAddress(this, "APrimalStructure", "TaggedIndex"); };
	void SetProcessTreeTag(unsigned int a0) { *(unsigned int*)GetAddress(this, "APrimalStructure", "ProcessTreeTag") = a0; };
	unsigned int GetProcessTreeTag() const { return *(unsigned int*)GetAddress(this, "APrimalStructure", "ProcessTreeTag"); };
	void SetLastStructureStasisTime(double a0) { *(double*)GetAddress(this, "APrimalStructure", "LastStructureStasisTime") = a0; };
	double GetLastStructureStasisTime() const { return *(double*)GetAddress(this, "APrimalStructure", "LastStructureStasisTime"); };
	void SetLastColorizationTime(double a0) { *(double*)GetAddress(this, "APrimalStructure", "LastColorizationTime") = a0; };
	double GetLastColorizationTime() const { return *(double*)GetAddress(this, "APrimalStructure", "LastColorizationTime"); };
	void SetSpawnEmitterLocationOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "SpawnEmitterLocationOffset") = a0; };
	FVector GetSpawnEmitterLocationOffset() const { return *(FVector*)GetAddress(this, "APrimalStructure", "SpawnEmitterLocationOffset"); };
	void SetSpawnEmitterRotationOffset(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalStructure", "SpawnEmitterRotationOffset") = a0; };
	FRotator GetSpawnEmitterRotationOffset() const { return *(FRotator*)GetAddress(this, "APrimalStructure", "SpawnEmitterRotationOffset"); };
	//void SetPickupGivesItem(TSubclassOf<UPrimalItem> a0) { *(TSubclassOf<UPrimalItem>*)GetAddress(this, "APrimalStructure", "PickupGivesItem") = a0; };
	//TSubclassOf<UPrimalItem> GetPickupGivesItem() const { return *(TSubclassOf<UPrimalItem>*)GetAddress(this, "APrimalStructure", "PickupGivesItem"); };
	void SetExcludeInStructuresRadius(float a0) { *(float*)GetAddress(this, "APrimalStructure", "ExcludeInStructuresRadius") = a0; };
	float GetExcludeInStructuresRadius() const { return *(float*)GetAddress(this, "APrimalStructure", "ExcludeInStructuresRadius"); };
	void SetLastFadeOpacity(float a0) { *(float*)GetAddress(this, "APrimalStructure", "LastFadeOpacity") = a0; };
	float GetLastFadeOpacity() const { return *(float*)GetAddress(this, "APrimalStructure", "LastFadeOpacity"); };
	void SetbClientAddedToStructuresArray(bool a0) { *(bool*)GetAddress(this, "APrimalStructure", "bClientAddedToStructuresArray") = a0; };
	bool GetbClientAddedToStructuresArray() const { return *(bool*)GetAddress(this, "APrimalStructure", "bClientAddedToStructuresArray"); };
	void SetLastFailedPinTime(double a0) { *(double*)GetAddress(this, "APrimalStructure", "LastFailedPinTime") = a0; };
	double GetLastFailedPinTime() const { return *(double*)GetAddress(this, "APrimalStructure", "LastFailedPinTime"); };
	void SetPreventBuildStructureReasonStringOverrides(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "PreventBuildStructureReasonStringOverrides") = a0; };
	TArray<FString, FDefaultAllocator> GetPreventBuildStructureReasonStringOverrides() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "APrimalStructure", "PreventBuildStructureReasonStringOverrides"); };
	void SetFloatingHudLocTextOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalStructure", "FloatingHudLocTextOffset") = a0; };
	FVector GetFloatingHudLocTextOffset() const { return *(FVector*)GetAddress(this, "APrimalStructure", "FloatingHudLocTextOffset"); };
	void SetLastBumpedDamageTime(float a0) { *(float*)GetAddress(this, "APrimalStructure", "LastBumpedDamageTime") = a0; };
	float GetLastBumpedDamageTime() const { return *(float*)GetAddress(this, "APrimalStructure", "LastBumpedDamageTime"); };
	void SetForceLimitStructuresInRange(int a0) { *(int*)GetAddress(this, "APrimalStructure", "ForceLimitStructuresInRange") = a0; };
	int GetForceLimitStructuresInRange() const { return *(int*)GetAddress(this, "APrimalStructure", "ForceLimitStructuresInRange"); };
	void SetForcePreventPlacingInOfflineRaidStructuresRadius(float a0) { *(float*)GetAddress(this, "APrimalStructure", "ForcePreventPlacingInOfflineRaidStructuresRadius") = a0; };
	float GetForcePreventPlacingInOfflineRaidStructuresRadius() const { return *(float*)GetAddress(this, "APrimalStructure", "ForcePreventPlacingInOfflineRaidStructuresRadius"); };
	void SetUnstasisAutoDestroyAfterTime(float a0) { *(float*)GetAddress(this, "APrimalStructure", "UnstasisAutoDestroyAfterTime") = a0; };
	float GetUnstasisAutoDestroyAfterTime() const { return *(float*)GetAddress(this, "APrimalStructure", "UnstasisAutoDestroyAfterTime"); };
	void SetTribeGroupStructureRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalStructure", "TribeGroupStructureRank") = a0; };
	unsigned char GetTribeGroupStructureRank() const { return *(unsigned char*)GetAddress(this, "APrimalStructure", "TribeGroupStructureRank"); };
	void SetTribeRankHUDYOffset(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalStructure", "TribeRankHUDYOffset") = a0; };
	unsigned char GetTribeRankHUDYOffset() const { return *(unsigned char*)GetAddress(this, "APrimalStructure", "TribeRankHUDYOffset"); };
	void SetPlaceOnWallUseStaticMeshTag(FName a0) { *(FName*)GetAddress(this, "APrimalStructure", "PlaceOnWallUseStaticMeshTag") = a0; };
	FName GetPlaceOnWallUseStaticMeshTag() const { return *(FName*)GetAddress(this, "APrimalStructure", "PlaceOnWallUseStaticMeshTag"); };
	void SetDemolishActivationTime(float a0) { *(float*)GetAddress(this, "APrimalStructure", "DemolishActivationTime") = a0; };
	float GetDemolishActivationTime() const { return *(float*)GetAddress(this, "APrimalStructure", "DemolishActivationTime"); };

	// Functions

	FString* GetEntryString(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APrimalStructure", "GetEntryString"))((DWORD64)this, res); }
	FString* GetEntryDescription(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APrimalStructure", "GetEntryDescription"))((DWORD64)this, res); }
	void ApplyScale(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalStructure", "ApplyScale"))((DWORD64)this, a1); }
	void SavePlacementData(FVector a1, FRotator a2, FRotator a3, FName a4) { static_cast<void(_cdecl*)(DWORD64, FVector, FRotator, FRotator, FName)>(GetAddress("APrimalStructure", "SavePlacementData"))((DWORD64)this, a1, a2, a3, a4); }
	int GetHitPawnCollisionGroup() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "GetHitPawnCollisionGroup"))((DWORD64)this); }
	bool CanDemolish() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "CanDemolish"))((DWORD64)this); }
	void PrepareAsPlacementPreview() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "PrepareAsPlacementPreview"))((DWORD64)this); }
	int IsAllowedToBuild(APlayerController* a1, FVector a2, FRotator a3, FPlacementData& a4, bool a5, FRotator a6, bool a7) { return static_cast<int(_cdecl*)(DWORD64, APlayerController*, FVector, FRotator, FPlacementData&, bool, FRotator, bool)>(GetAddress("APrimalStructure", "IsAllowedToBuild"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7); }
	bool FinalStructurePlacement(APlayerController* a1, FVector a2, FRotator a3, FRotator a4, APawn* a5, FName a6, bool a7) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, FVector, FRotator, FRotator, APawn*, FName, bool)>(GetAddress("APrimalStructure", "FinalStructurePlacement"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7); }
	void NonPlayerFinalStructurePlacement(int a1, int a2, const FString& a3, APrimalStructure* a4) { static_cast<void(_cdecl*)(DWORD64, int, int, const FString&, APrimalStructure*)>(GetAddress("APrimalStructure", "NonPlayerFinalStructurePlacement"))((DWORD64)this, a1, a2, a3, a4); }
	void SetStaticMobility() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "SetStaticMobility"))((DWORD64)this); }
	void SetStructureCollisionChannels() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "SetStructureCollisionChannels"))((DWORD64)this); }
	void ClientUpdateLinkedStructures(const TArray<unsigned int, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, const TArray<unsigned int, FDefaultAllocator>&)>(GetAddress("APrimalStructure", "ClientUpdateLinkedStructures"))((DWORD64)this, a1); }
	FVector* GetSnapPointLocation(FVector* res, int a1, bool a2, FVector a3, FRotator a4) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*, int, bool, FVector, FRotator)>(GetAddress("APrimalStructure", "GetSnapPointLocation"))((DWORD64)this, res, a1, a2, a3, a4); }
	bool GetSnapToLocation(FVector& a1, FRotator& a2, FPlacementData& a3, APrimalStructure** a4, int* a5, APlayerController* a6, bool a7, int a8) { return static_cast<bool(_cdecl*)(DWORD64, FVector&, FRotator&, FPlacementData&, APrimalStructure**, int*, APlayerController*, bool, int)>(GetAddress("APrimalStructure", "GetSnapToLocation"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8); }
	void GetSnapToParentStructures(FVector a1, FRotator a2, int a3, APrimalStructure* a4, TArray<APrimalStructure *, FDefaultAllocator>& a5, APlayerController* a6) { static_cast<void(_cdecl*)(DWORD64, FVector, FRotator, int, APrimalStructure*, TArray<APrimalStructure *, FDefaultAllocator>&, APlayerController*)>(GetAddress("APrimalStructure", "GetSnapToParentStructures"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	bool GetPlacingGroundLocation(AActor*& a1, FPlacementData& a2, APlayerController* a3, bool a4, int a5) { return static_cast<bool(_cdecl*)(DWORD64, AActor*&, FPlacementData&, APlayerController*, bool, int)>(GetAddress("APrimalStructure", "GetPlacingGroundLocation"))((DWORD64)this, a1, a2, a3, a4, a5); }
	bool ClampBuildLocation(FVector a1, AActor*& a2, FPlacementData& a3, bool a4, APlayerController* a5) { return static_cast<bool(_cdecl*)(DWORD64, FVector, AActor*&, FPlacementData&, bool, APlayerController*)>(GetAddress("APrimalStructure", "ClampBuildLocation"))((DWORD64)this, a1, a2, a3, a4, a5); }
	bool CheckNotEncroaching(FVector a1, FRotator a2, AActor* a3, APrimalStructure* a4, APrimalStructure* a5, bool a6) { return static_cast<bool(_cdecl*)(DWORD64, FVector, FRotator, AActor*, APrimalStructure*, APrimalStructure*, bool)>(GetAddress("APrimalStructure", "CheckNotEncroaching"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	APrimalStructure* GetNearbyFoundation(FPlacementData& a1, APlayerController* a2) { return static_cast<APrimalStructure*(_cdecl*)(DWORD64, FPlacementData&, APlayerController*)>(GetAddress("APrimalStructure", "GetNearbyFoundation"))((DWORD64)this, a1, a2); }
	float TakeDamage(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<float(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalStructure", "TakeDamage"))((DWORD64)this, a1, a2, a3, a4); }
	bool Die(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<bool(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalStructure", "Die"))((DWORD64)this, a1, a2, a3, a4); }
	void RemoveLinkedStructure(APrimalStructure* a1, AController* a2, AActor* a3) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*, AController*, AActor*)>(GetAddress("APrimalStructure", "RemoveLinkedStructure"))((DWORD64)this, a1, a2, a3); }
	void ReprocessTree(TArray<APrimalStructure *, FDefaultAllocator>& a1, AController* a2, AActor* a3) { static_cast<void(_cdecl*)(DWORD64, TArray<APrimalStructure *, FDefaultAllocator>&, AController*, AActor*)>(GetAddress("APrimalStructure", "ReprocessTree"))((DWORD64)this, a1, a2, a3); }
	void FindFoundations(APrimalStructure* a1, TArray<APrimalStructure *, FDefaultAllocator>& a2) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*, TArray<APrimalStructure *, FDefaultAllocator>&)>(GetAddress("APrimalStructure", "FindFoundations"))((DWORD64)this, a1, a2); }
	void CullAgainstFoundations(APrimalStructure*& a1, TArray<APrimalStructure *, FDefaultAllocator>& a2) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*&, TArray<APrimalStructure *, FDefaultAllocator>&)>(GetAddress("APrimalStructure", "CullAgainstFoundations"))((DWORD64)this, a1, a2); }
	void FlagReachable(APrimalStructure* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*)>(GetAddress("APrimalStructure", "FlagReachable"))((DWORD64)this, a1); }
	void FlagReachable(TArray<APrimalStructure *, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, TArray<APrimalStructure *, FDefaultAllocator>&)>(GetAddress("APrimalStructure", "FlagReachable"))((DWORD64)this, a1); }
	void CleanUpTree(APrimalStructure* a1, AController* a2, AActor* a3) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*, AController*, AActor*)>(GetAddress("APrimalStructure", "CleanUpTree"))((DWORD64)this, a1, a2, a3); }
	void RemovedLinkedStructure(APrimalStructure* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*)>(GetAddress("APrimalStructure", "RemovedLinkedStructure"))((DWORD64)this, a1); }
	void AddedLinkedStructure(APrimalStructure* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*)>(GetAddress("APrimalStructure", "AddedLinkedStructure"))((DWORD64)this, a1); }
	bool Internal_IsInSnapChain(APrimalStructure* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalStructure*)>(GetAddress("APrimalStructure", "Internal_IsInSnapChain"))((DWORD64)this, a1); }
	void GetAllLinkedStructures(TArray<APrimalStructure *, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, TArray<APrimalStructure *, FDefaultAllocator>&)>(GetAddress("APrimalStructure", "GetAllLinkedStructures"))((DWORD64)this, a1); }
	void PreInitializeComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "PreInitializeComponents"))((DWORD64)this); }
	void FinalLoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "FinalLoadedFromSaveGame"))((DWORD64)this); }
	void ChangeActorTeam(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalStructure", "ChangeActorTeam"))((DWORD64)this, a1); }
	void PlacedStructure(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalStructure", "PlacedStructure"))((DWORD64)this, a1); }
	void SetContainerActive(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalStructure", "SetContainerActive"))((DWORD64)this, a1); }
	void UpdatedHealth(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalStructure", "UpdatedHealth"))((DWORD64)this, a1); }
	void StartRepair() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "StartRepair"))((DWORD64)this); }
	void RepairCheckTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "RepairCheckTimer"))((DWORD64)this); }
	//void GetNearbyStructuresOfClass(UWorld* a1, TSubclassOf<APrimalStructure> a2, const FVector& a3, float a4, TArray<APrimalStructure *, FDefaultAllocator>& a5) { static_cast<void(_cdecl*)(DWORD64, UWorld*, TSubclassOf<APrimalStructure>, const FVector&, float, TArray<APrimalStructure *, FDefaultAllocator>&)>(GetAddress("APrimalStructure", "GetNearbyStructuresOfClass"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void RefreshStructureColors() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "RefreshStructureColors"))((DWORD64)this); }
	FLinearColor* GetStructureColorForID(FLinearColor* res, int a1, int a2) { return static_cast<FLinearColor*(_cdecl*)(DWORD64, FLinearColor*, int, int)>(GetAddress("APrimalStructure", "GetStructureColorForID"))((DWORD64)this, res, a1, a2); }
	void ServerRequestUseItemWithActor(APlayerController* a1, UObject* a2, int a3) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, UObject*, int)>(GetAddress("APrimalStructure", "ServerRequestUseItemWithActor"))((DWORD64)this, a1, a2, a3); }
	bool AllowColoringBy(APlayerController* a1, UObject* a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, UObject*)>(GetAddress("APrimalStructure", "AllowColoringBy"))((DWORD64)this, a1, a2); }
	void NetUpdateTeamAndOwnerName(int a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, int, const FString&)>(GetAddress("APrimalStructure", "NetUpdateTeamAndOwnerName"))((DWORD64)this, a1, a2); }
	void NetUpdateOriginalOwnerNameAndID(int a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, int, const FString&)>(GetAddress("APrimalStructure", "NetUpdateOriginalOwnerNameAndID"))((DWORD64)this, a1, a2); }
	void NetDoSpawnEffects() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "NetDoSpawnEffects"))((DWORD64)this); }
	bool IsNetRelevantFor(APlayerController* a1, AActor* a2, const FVector& a3) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, AActor*, const FVector&)>(GetAddress("APrimalStructure", "IsNetRelevantFor"))((DWORD64)this, a1, a2, a3); }
	void FadeInEffectTick() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "FadeInEffectTick"))((DWORD64)this); }
	void ProcessEditText(AShooterPlayerController* a1, const FString& a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*, const FString&, bool)>(GetAddress("APrimalStructure", "ProcessEditText"))((DWORD64)this, a1, a2, a3); }
	void Demolish(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APrimalStructure", "Demolish"))((DWORD64)this, a1); }
	void PlacedStructureLocation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "PlacedStructureLocation"))((DWORD64)this); }
	void SetLinkedIDs() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "SetLinkedIDs"))((DWORD64)this); }
	void ApplyLinkedIDs(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalStructure", "ApplyLinkedIDs"))((DWORD64)this, a1); }
	APrimalStructure* GetFromID(UWorld* a1, unsigned int a2) { return static_cast<APrimalStructure*(_cdecl*)(DWORD64, UWorld*, unsigned int)>(GetAddress("APrimalStructure", "GetFromID"))((DWORD64)this, a1, a2); }
	void LoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "LoadedFromSaveGame"))((DWORD64)this); }
	float AddAggroOnBump(APrimalDinoCharacter* a1) { return static_cast<float(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalStructure", "AddAggroOnBump"))((DWORD64)this, a1); }
	bool AllowPickupForItem(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalStructure", "AllowPickupForItem"))((DWORD64)this, a1); }
	int GetNumStructuresInRange(FVector a1, float a2) { return static_cast<int(_cdecl*)(DWORD64, FVector, float)>(GetAddress("APrimalStructure", "GetNumStructuresInRange"))((DWORD64)this, a1, a2); }
	int GetNumStructuresInRangeStructureTypeFlag(FVector a1, int a2, float a3) { return static_cast<int(_cdecl*)(DWORD64, FVector, int, float)>(GetAddress("APrimalStructure", "GetNumStructuresInRangeStructureTypeFlag"))((DWORD64)this, a1, a2, a3); }
	bool IsPrimalStructure() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "IsPrimalStructure"))((DWORD64)this); }
	bool AllowSnappingWith(APrimalStructure* a1, APlayerController* a2) { return static_cast<bool(_cdecl*)(DWORD64, APrimalStructure*, APlayerController*)>(GetAddress("APrimalStructure", "AllowSnappingWith"))((DWORD64)this, a1, a2); }
	bool BPAllowSnappingWith(APrimalStructure* a1, APlayerController* a2) { return static_cast<bool(_cdecl*)(DWORD64, APrimalStructure*, APlayerController*)>(GetAddress("APrimalStructure", "BPAllowSnappingWith"))((DWORD64)this, a1, a2); }
	bool AllowStructureAccess(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APrimalStructure", "AllowStructureAccess"))((DWORD64)this, a1); }
	bool IsPointObstructedByWorldGeometry(UWorld* a1, FVector a2, bool a3, bool a4, bool a5, float a6) { return static_cast<bool(_cdecl*)(DWORD64, UWorld*, FVector, bool, bool, bool, float)>(GetAddress("APrimalStructure", "IsPointObstructedByWorldGeometry"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	bool UseDynamicMobility() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "UseDynamicMobility"))((DWORD64)this); }
	bool CanBePainted() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "CanBePainted"))((DWORD64)this); }
	APrimalStructureDoor* GetLinkedDoor() { return static_cast<APrimalStructureDoor*(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "GetLinkedDoor"))((DWORD64)this); }
	void ApplyColorToRegions(short a1, bool* a2) { static_cast<void(_cdecl*)(DWORD64, short, bool*)>(GetAddress("APrimalStructure", "ApplyColorToRegions"))((DWORD64)this, a1, a2); }
	void SetDinoSaddleAttachment(APrimalDinoCharacter* a1, FName a2, FVector a3, FRotator a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*, FName, FVector, FRotator, bool)>(GetAddress("APrimalStructure", "SetDinoSaddleAttachment"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void ClientHandleNetDestroy() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "ClientHandleNetDestroy"))((DWORD64)this); }
	void DelayedDisableSnapParent() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "DelayedDisableSnapParent"))((DWORD64)this); }
	bool AllowPlacingOnSaddleParentClass(APrimalDinoCharacter* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, APrimalDinoCharacter*, bool)>(GetAddress("APrimalStructure", "AllowPlacingOnSaddleParentClass"))((DWORD64)this, a1, a2); }
	APrimalStructure* GetClosestStructureToPoint(UWorld* a1, FVector a2, float a3) { return static_cast<APrimalStructure*(_cdecl*)(DWORD64, UWorld*, FVector, float)>(GetAddress("APrimalStructure", "GetClosestStructureToPoint"))((DWORD64)this, a1, a2, a3); }
	int BPIsAllowedToBuild(const FPlacementData& a1, int a2) { return static_cast<int(_cdecl*)(DWORD64, const FPlacementData&, int)>(GetAddress("APrimalStructure", "BPIsAllowedToBuild"))((DWORD64)this, a1, a2); }
	float GetStructureDemolishTime() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "GetStructureDemolishTime"))((DWORD64)this); }
	bool CanAutoDemolish() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "CanAutoDemolish"))((DWORD64)this); }
	FString* BPOverrideCantBuildReasonString(FString* res, int a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, int)>(GetAddress("APrimalStructure", "BPOverrideCantBuildReasonString"))((DWORD64)this, res, a1); }
	bool IsItemContainer() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "IsItemContainer"))((DWORD64)this); }
	bool AllowCreateDynamicMaterials() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "AllowCreateDynamicMaterials"))((DWORD64)this); }
	void CreateDynamicMaterials() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "CreateDynamicMaterials"))((DWORD64)this); }
	bool IsValidCraftingResource(UPrimalItem* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("APrimalStructure", "IsValidCraftingResource"))((DWORD64)this, a1); }
	void OnRep_AttachmentReplication() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "OnRep_AttachmentReplication"))((DWORD64)this); }
	bool DoAnyTribePermissionsRestrict(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalStructure", "DoAnyTribePermissionsRestrict"))((DWORD64)this, a1); }
	bool IsPointNearSupplyCrateSpawn(UWorld* a1, FVector a2) { return static_cast<bool(_cdecl*)(DWORD64, UWorld*, FVector)>(GetAddress("APrimalStructure", "IsPointNearSupplyCrateSpawn"))((DWORD64)this, a1, a2); }
	void BPRefreshedStructureColors() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "BPRefreshedStructureColors"))((DWORD64)this); }
	bool IsSeatingStructure() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalStructure", "IsSeatingStructure"))((DWORD64)this); }
};

struct APrimalStructureDoor : APrimalStructure
{
	void SetRotationSpeed(float a0) { *(float*)GetAddress(this, "APrimalStructureDoor", "RotationSpeed") = a0; };
	float GetRotationSpeed() const { return *(float*)GetAddress(this, "APrimalStructureDoor", "RotationSpeed"); };
	void SetCurrentPinCode(unsigned int a0) { *(unsigned int*)GetAddress(this, "APrimalStructureDoor", "CurrentPinCode") = a0; };
	unsigned int GetCurrentPinCode() const { return *(unsigned int*)GetAddress(this, "APrimalStructureDoor", "CurrentPinCode"); };
	void SetDoorOpenState(signed char a0) { *(signed char*)GetAddress(this, "APrimalStructureDoor", "DoorOpenState") = a0; };
	signed char GetDoorOpenState() const { return *(signed char*)GetAddress(this, "APrimalStructureDoor", "DoorOpenState"); };
	void SetClientPrevDoorOpenState(signed char a0) { *(signed char*)GetAddress(this, "APrimalStructureDoor", "ClientPrevDoorOpenState") = a0; };
	signed char GetClientPrevDoorOpenState() const { return *(signed char*)GetAddress(this, "APrimalStructureDoor", "ClientPrevDoorOpenState"); };
	void SetLastLockStateChangeTime(double a0) { *(double*)GetAddress(this, "APrimalStructureDoor", "LastLockStateChangeTime") = a0; };
	double GetLastLockStateChangeTime() const { return *(double*)GetAddress(this, "APrimalStructureDoor", "LastLockStateChangeTime"); };
	void SetSecondDoorDefaultRot(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalStructureDoor", "SecondDoorDefaultRot") = a0; };
	FRotator GetSecondDoorDefaultRot() const { return *(FRotator*)GetAddress(this, "APrimalStructureDoor", "SecondDoorDefaultRot"); };
	void SetCurrentDoorAngle(float a0) { *(float*)GetAddress(this, "APrimalStructureDoor", "CurrentDoorAngle") = a0; };
	float GetCurrentDoorAngle() const { return *(float*)GetAddress(this, "APrimalStructureDoor", "CurrentDoorAngle"); };
	void SetDelayedDoorState(signed char a0) { *(signed char*)GetAddress(this, "APrimalStructureDoor", "DelayedDoorState") = a0; };
	signed char GetDelayedDoorState() const { return *(signed char*)GetAddress(this, "APrimalStructureDoor", "DelayedDoorState"); };

	// Functions

	void GotoDoorState(signed char a1) { static_cast<void(_cdecl*)(DWORD64, signed char)>(GetAddress("APrimalStructureDoor", "GotoDoorState"))((DWORD64)this, a1); }
	void DelayedGotoDoorState(signed char a1, float a2) { static_cast<void(_cdecl*)(DWORD64, signed char, float)>(GetAddress("APrimalStructureDoor", "DelayedGotoDoorState"))((DWORD64)this, a1, a2); }
	bool TryMultiUse(APlayerController* a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, int)>(GetAddress("APrimalStructureDoor", "TryMultiUse"))((DWORD64)this, a1, a2); }
	bool CanOpen(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APrimalStructureDoor", "CanOpen"))((DWORD64)this, a1); }
	bool ApplyPinCode(AShooterPlayerController* a1, int a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, int, bool)>(GetAddress("APrimalStructureDoor", "ApplyPinCode"))((DWORD64)this, a1, a2, a3); }
	void ClientMultiUse(APlayerController* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, int)>(GetAddress("APrimalStructureDoor", "ClientMultiUse"))((DWORD64)this, a1, a2); }
	void SetStaticMobility() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructureDoor", "SetStaticMobility"))((DWORD64)this); }
	bool AllowStructureAccess(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APrimalStructureDoor", "AllowStructureAccess"))((DWORD64)this, a1); }
	bool AllowPickupForItem(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalStructureDoor", "AllowPickupForItem"))((DWORD64)this, a1); }
	void DelayedGotoDoorStateTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalStructureDoor", "DelayedGotoDoorStateTimer"))((DWORD64)this); }
};
