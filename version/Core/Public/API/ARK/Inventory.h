#pragma once

struct UWorld;

struct FItemNetID
{
	unsigned int ItemID1;
	unsigned int ItemID2;
};

struct FCustomItemData
{
	FName CustomDataName;
	TArray<FString> CustomDataStrings;
	TArray<float> CustomDataFloats;
	TArray<UObject *> CustomDataObjects;
	TArray<UClass *> CustomDataClasses;
	TArray<FName> CustomDataNames;
};

struct FItemCraftQueueEntry
{
	FItemNetID ItemID;
	int Quantity;
	bool bIsRepair;
	bool bIgnoreInventoryRequirement;
	float RepairPercentage;
	float RepairSpeedMultiplier;
};

struct FItemSpawnActorClassOverride
{
	TSubclassOf<UPrimalItem> ItemClass;
	TSubclassOf<AActor> ActorClassOverride;
};

struct FLevelExperienceRamp
{
	TArray<float> ExperiencePointsForLevel;
};

struct UAssetUserData : UObject
{
};

struct UActorComponent : UObject
{
	FieldValue<TArray<FName>> ComponentTagsField() { return { this, "UActorComponent.ComponentTags" }; }
	FieldValue<FName> CustomTagField() { return { this, "UActorComponent.CustomTag" }; }
	FieldValue<int> CustomDataField() { return { this, "UActorComponent.CustomData" }; }
	FieldValue<AActor *> CachedOwnerField() { return { this, "UActorComponent.CachedOwner" }; }
	FieldValue<UWorld *> WorldField() { return { this, "UActorComponent.World" }; }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bRegistered() { return { this, "UActorComponent.bRegistered" }; }
	BitFieldValue<bool, unsigned __int32> bRenderStateDirty() { return { this, "UActorComponent.bRenderStateDirty" }; }
	BitFieldValue<bool, unsigned __int32> bRenderTransformDirty() { return { this, "UActorComponent.bRenderTransformDirty" }; }
	BitFieldValue<bool, unsigned __int32> bRenderDynamicDataDirty() { return { this, "UActorComponent.bRenderDynamicDataDirty" }; }
	BitFieldValue<bool, unsigned __int32> bAutoRegister() { return { this, "UActorComponent.bAutoRegister" }; }
	BitFieldValue<bool, unsigned __int32> bTickInEditor() { return { this, "UActorComponent.bTickInEditor" }; }
	BitFieldValue<bool, unsigned __int32> bNeverNeedsRenderUpdate() { return { this, "UActorComponent.bNeverNeedsRenderUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bAllowConcurrentTick() { return { this, "UActorComponent.bAllowConcurrentTick" }; }
	BitFieldValue<bool, unsigned __int32> bCreatedByConstructionScript() { return { this, "UActorComponent.bCreatedByConstructionScript" }; }
	BitFieldValue<bool, unsigned __int32> bAutoActivate() { return { this, "UActorComponent.bAutoActivate" }; }
	BitFieldValue<bool, unsigned __int32> bIsActive() { return { this, "UActorComponent.bIsActive" }; }
	BitFieldValue<bool, unsigned __int32> bWantsInitializeComponent() { return { this, "UActorComponent.bWantsInitializeComponent" }; }
	BitFieldValue<bool, unsigned __int32> bHasBeenCreated() { return { this, "UActorComponent.bHasBeenCreated" }; }
	BitFieldValue<bool, unsigned __int32> bHasBeenInitialized() { return { this, "UActorComponent.bHasBeenInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional() { return { this, "UActorComponent.bAlwaysReplicatePropertyConditional" }; }
	BitFieldValue<bool, unsigned __int32> bHasCachedOwner() { return { this, "UActorComponent.bHasCachedOwner" }; }
	BitFieldValue<bool, unsigned __int32> bRenderStateCreated() { return { this, "UActorComponent.bRenderStateCreated" }; }
	BitFieldValue<bool, unsigned __int32> bPhysicsStateCreated() { return { this, "UActorComponent.bPhysicsStateCreated" }; }
	BitFieldValue<bool, unsigned __int32> bReplicates() { return { this, "UActorComponent.bReplicates" }; }
	BitFieldValue<bool, unsigned __int32> bNetAddressable() { return { this, "UActorComponent.bNetAddressable" }; }

	// Functions

	void PostInitProperties() { NativeCall<void>(this, "UActorComponent.PostInitProperties"); }
	void PostRename(UObject * OldOuter, FName OldName) { NativeCall<void, UObject *, FName>(this, "UActorComponent.PostRename", OldOuter, OldName); }
	AActor * GetOwner() { return NativeCall<AActor *>(this, "UActorComponent.GetOwner"); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UActorComponent.GetWorld"); }
	ULevel * GetComponentLevel() { return NativeCall<ULevel *>(this, "UActorComponent.GetComponentLevel"); }
	FString * GetReadableName(FString * result) { return NativeCall<FString *, FString *>(this, "UActorComponent.GetReadableName", result); }
	void BeginDestroy() { NativeCall<void>(this, "UActorComponent.BeginDestroy"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForClient"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForServer"); }
	void OnRegister() { NativeCall<void>(this, "UActorComponent.OnRegister"); }
	void InitializeComponent() { NativeCall<void>(this, "UActorComponent.InitializeComponent"); }
	void UninitializeComponent() { NativeCall<void>(this, "UActorComponent.UninitializeComponent"); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabled", bEnabled); }
	void SetComponentTickEnabledAsync(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabledAsync", bEnabled); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UActorComponent.RegisterComponentTickFunctions", bRegister, bSaveAndRestoreComponentTickState); }
	void RegisterComponentWithWorld(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UActorComponent.RegisterComponentWithWorld", InWorld); }
	void RegisterComponent() { NativeCall<void>(this, "UActorComponent.RegisterComponent"); }
	void UnregisterComponent() { NativeCall<void>(this, "UActorComponent.UnregisterComponent"); }
	void DestroyComponent() { NativeCall<void>(this, "UActorComponent.DestroyComponent"); }
	void OnComponentCreated() { NativeCall<void>(this, "UActorComponent.OnComponentCreated"); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UActorComponent.OnComponentDestroyed"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.CreateRenderState_Concurrent"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UActorComponent.SendRenderTransform_Concurrent"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UActorComponent.SendRenderDynamicData_Concurrent"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.DestroyRenderState_Concurrent"); }
	void CreatePhysicsState() { NativeCall<void>(this, "UActorComponent.CreatePhysicsState"); }
	void DestroyPhysicsState() { NativeCall<void>(this, "UActorComponent.DestroyPhysicsState"); }
	void ExecuteRegisterEvents() { NativeCall<void>(this, "UActorComponent.ExecuteRegisterEvents"); }
	void ExecuteUnregisterEvents() { NativeCall<void>(this, "UActorComponent.ExecuteUnregisterEvents"); }
	void ReregisterComponent() { NativeCall<void>(this, "UActorComponent.ReregisterComponent"); }
	void RecreateRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.RecreateRenderState_Concurrent"); }
	void RecreatePhysicsState(bool bRestoreBoneTransforms) { NativeCall<void, bool>(this, "UActorComponent.RecreatePhysicsState", bRestoreBoneTransforms); }
	void AddTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor *>(this, "UActorComponent.AddTickPrerequisiteActor", PrerequisiteActor); }
	void AddTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent *>(this, "UActorComponent.AddTickPrerequisiteComponent", PrerequisiteComponent); }
	void RemoveTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor *>(this, "UActorComponent.RemoveTickPrerequisiteActor", PrerequisiteActor); }
	void RemoveTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent *>(this, "UActorComponent.RemoveTickPrerequisiteComponent", PrerequisiteComponent); }
	void DoDeferredRenderUpdates_Concurrent() { NativeCall<void>(this, "UActorComponent.DoDeferredRenderUpdates_Concurrent"); }
	void MarkForNeededEndOfFrameUpdate() { NativeCall<void>(this, "UActorComponent.MarkForNeededEndOfFrameUpdate"); }
	void MarkForNeededEndOfFrameRecreate() { NativeCall<void>(this, "UActorComponent.MarkForNeededEndOfFrameRecreate"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UActorComponent.Activate", bReset); }
	void Deactivate() { NativeCall<void>(this, "UActorComponent.Deactivate"); }
	bool ShouldActivate() { return NativeCall<bool>(this, "UActorComponent.ShouldActivate"); }
	void SetActive(bool bNewActive, bool bReset) { NativeCall<void, bool, bool>(this, "UActorComponent.SetActive", bNewActive, bReset); }
	void ToggleActive() { NativeCall<void>(this, "UActorComponent.ToggleActive"); }
	bool IsActive() { return NativeCall<bool>(this, "UActorComponent.IsActive"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsNameStableForNetworking"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsSupportedForNetworking"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UActorComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool AlwaysReplicatePropertyConditional(UProperty * forProperty) { return NativeCall<bool, UProperty *>(this, "UActorComponent.AlwaysReplicatePropertyConditional", forProperty); }
};

struct UPrimalInventoryComponent : UActorComponent
{
	FieldValue<TArray<TWeakObjectPtr<AShooterPlayerController>>> RemoteViewingInventoryPlayerControllersField() { return { this, "UPrimalInventoryComponent.RemoteViewingInventoryPlayerControllers" }; }
	FieldValue<TArray<UPrimalItem *>> InventoryItemsField() { return { this, "UPrimalInventoryComponent.InventoryItems" }; }
	FieldValue<TArray<UPrimalItem *>> EquippedItemsField() { return { this, "UPrimalInventoryComponent.EquippedItems" }; }
	FieldValue<TArray<UPrimalItem *>> ItemSlotsField() { return { this, "UPrimalInventoryComponent.ItemSlots" }; }
	FieldValue<TArray<UPrimalItem *>> ArkTributeItemsField() { return { this, "UPrimalInventoryComponent.ArkTributeItems" }; }
	FieldValue<TArray<UPrimalItem *>> AllDyeColorItemsField() { return { this, "UPrimalInventoryComponent.AllDyeColorItems" }; }
	FieldValue<TArray<FItemCraftQueueEntry>> ItemCraftQueueEntriesField() { return { this, "UPrimalInventoryComponent.ItemCraftQueueEntries" }; }
	FieldValue<int> OverrideInventoryDefaultTabField() { return { this, "UPrimalInventoryComponent.OverrideInventoryDefaultTab" }; }
	FieldValue<TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>>> EquippableItemTypesField() { return { this, "UPrimalInventoryComponent.EquippableItemTypes" }; }
	FieldValue<float> CraftingItemSpeedField() { return { this, "UPrimalInventoryComponent.CraftingItemSpeed" }; }
	FieldValue<TArray<FItemMultiplier>> ItemSpoilingTimeMultipliersField() { return { this, "UPrimalInventoryComponent.ItemSpoilingTimeMultipliers" }; }
	FieldValue<int> MaxInventoryItemsField() { return { this, "UPrimalInventoryComponent.MaxInventoryItems" }; }
	FieldValue<float> MaxInventoryWeightField() { return { this, "UPrimalInventoryComponent.MaxInventoryWeight" }; }
	FieldValue<char> TribeGroupInventoryRankField() { return { this, "UPrimalInventoryComponent.TribeGroupInventoryRank" }; }
	FieldValue<int> NumSlotsField() { return { this, "UPrimalInventoryComponent.NumSlots" }; }
	FieldValue<int> MaxItemCraftQueueEntriesField() { return { this, "UPrimalInventoryComponent.MaxItemCraftQueueEntries" }; }
	FieldValue<FString> RemoteInventoryDescriptionStringField() { return { this, "UPrimalInventoryComponent.RemoteInventoryDescriptionString" }; }
	FieldValue<TSubclassOf<UPrimalItem>> EngramRequirementClassOverrideField() { return { this, "UPrimalInventoryComponent.EngramRequirementClassOverride" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> RemoteAddItemOnlyAllowItemClassesField() { return { this, "UPrimalInventoryComponent.RemoteAddItemOnlyAllowItemClasses" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> RemoteAddItemPreventItemClassesField() { return { this, "UPrimalInventoryComponent.RemoteAddItemPreventItemClasses" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> DefaultInventoryItemsField() { return { this, "UPrimalInventoryComponent.DefaultInventoryItems" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> DefaultInventoryItems2Field() { return { this, "UPrimalInventoryComponent.DefaultInventoryItems2" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> DefaultInventoryItems3Field() { return { this, "UPrimalInventoryComponent.DefaultInventoryItems3" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> DefaultInventoryItems4Field() { return { this, "UPrimalInventoryComponent.DefaultInventoryItems4" }; }
	FieldValue<TArray<FString>> DefaultInventoryItemsRandomCustomStringsField() { return { this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStrings" }; }
	FieldValue<TArray<float>> DefaultInventoryItemsRandomCustomStringsWeightsField() { return { this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStringsWeights" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> CheatInventoryItemsField() { return { this, "UPrimalInventoryComponent.CheatInventoryItems" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> DefaultEquippedItemsField() { return { this, "UPrimalInventoryComponent.DefaultEquippedItems" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> DefaultEquippedItemSkinsField() { return { this, "UPrimalInventoryComponent.DefaultEquippedItemSkins" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> DefaultSlotItemsField() { return { this, "UPrimalInventoryComponent.DefaultSlotItems" }; }
	FieldValue<TArray<FItemSpawnActorClassOverride>> ItemSpawnActorClassOverridesField() { return { this, "UPrimalInventoryComponent.ItemSpawnActorClassOverrides" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> OnlyAllowCraftingItemClassesField() { return { this, "UPrimalInventoryComponent.OnlyAllowCraftingItemClasses" }; }
	FieldValue<TArray<unsigned char>> DefaultEngramsField() { return { this, "UPrimalInventoryComponent.DefaultEngrams" }; }
	FieldValue<TArray<unsigned char>> DefaultEngrams2Field() { return { this, "UPrimalInventoryComponent.DefaultEngrams2" }; }
	FieldValue<TArray<unsigned char>> DefaultEngrams3Field() { return { this, "UPrimalInventoryComponent.DefaultEngrams3" }; }
	FieldValue<TArray<unsigned char>> DefaultEngrams4Field() { return { this, "UPrimalInventoryComponent.DefaultEngrams4" }; }
	FieldValue<TArray<float>> DefaultInventoryQualitiesField() { return { this, "UPrimalInventoryComponent.DefaultInventoryQualities" }; }
	FieldValue<FString> InventoryNameOverrideField() { return { this, "UPrimalInventoryComponent.InventoryNameOverride" }; }
	FieldValue<float> MaxRemoteInventoryViewingDistanceField() { return { this, "UPrimalInventoryComponent.MaxRemoteInventoryViewingDistance" }; }
	FieldValue<float> ActiveInventoryRefreshIntervalField() { return { this, "UPrimalInventoryComponent.ActiveInventoryRefreshInterval" }; }
	FieldValue<int> AbsoluteMaxInventoryItemsField() { return { this, "UPrimalInventoryComponent.AbsoluteMaxInventoryItems" }; }
	FieldValue<long double> LastInventoryRefreshTimeField() { return { this, "UPrimalInventoryComponent.LastInventoryRefreshTime" }; }
	FieldValue<TSubclassOf<ADroppedItem>> DroppedItemTemplateOverrideField() { return { this, "UPrimalInventoryComponent.DroppedItemTemplateOverride" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> ForceAllowItemStackingsField() { return { this, "UPrimalInventoryComponent.ForceAllowItemStackings" }; }
	FieldValue<FRotator> DropItemRotationOffsetField() { return { this, "UPrimalInventoryComponent.DropItemRotationOffset" }; }
	FieldValue<TArray<FItemCraftingConsumptionReplenishment>> ItemCraftingConsumptionReplenishmentsField() { return { this, "UPrimalInventoryComponent.ItemCraftingConsumptionReplenishments" }; }
	FieldValue<float> MaxItemCooldownTimeClearField() { return { this, "UPrimalInventoryComponent.MaxItemCooldownTimeClear" }; }
	FieldValue<TArray<FItemMultiplier>> MaxItemTemplateQuantitiesField() { return { this, "UPrimalInventoryComponent.MaxItemTemplateQuantities" }; }
	FieldValue<USoundBase *> ItemCraftingSoundOverrideField() { return { this, "UPrimalInventoryComponent.ItemCraftingSoundOverride" }; }
	FieldValue<TArray<FActorClassAttachmentInfo>> WeaponAsEquipmentAttachmentInfosField() { return { this, "UPrimalInventoryComponent.WeaponAsEquipmentAttachmentInfos" }; }
	FieldValue<TArray<UPrimalItem *>> CraftingItemsField() { return { this, "UPrimalInventoryComponent.CraftingItems" }; }
	FieldValue<int> DisplayDefaultItemInventoryCountField() { return { this, "UPrimalInventoryComponent.DisplayDefaultItemInventoryCount" }; }
	FieldValue<bool> bHasBeenRegisteredField() { return { this, "UPrimalInventoryComponent.bHasBeenRegistered" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> LastUsedItemClassesField() { return { this, "UPrimalInventoryComponent.LastUsedItemClasses" }; }
	FieldValue<TArray<double>> LastUsedItemTimesField() { return { this, "UPrimalInventoryComponent.LastUsedItemTimes" }; }
	FieldValue<int> InvUpdatedFrameField() { return { this, "UPrimalInventoryComponent.InvUpdatedFrame" }; }
	FieldValue<long double> LastRefreshCheckItemTimeField() { return { this, "UPrimalInventoryComponent.LastRefreshCheckItemTime" }; }
	FieldValue<bool> bLastPreventUseItemSpoilingTimeMultipliersField() { return { this, "UPrimalInventoryComponent.bLastPreventUseItemSpoilingTimeMultipliers" }; }
	FieldValue<FItemNetID> NextItemSpoilingIDField() { return { this, "UPrimalInventoryComponent.NextItemSpoilingID" }; }
	FieldValue<FItemNetID> NextItemConsumptionIDField() { return { this, "UPrimalInventoryComponent.NextItemConsumptionID" }; }
	FieldValue<float> MinItemSetsField() { return { this, "UPrimalInventoryComponent.MinItemSets" }; }
	FieldValue<float> MaxItemSetsField() { return { this, "UPrimalInventoryComponent.MaxItemSets" }; }
	FieldValue<float> NumItemSetsPowerField() { return { this, "UPrimalInventoryComponent.NumItemSetsPower" }; }
	FieldValue<TArray<FSupplyCrateItemSet>> ItemSetsField() { return { this, "UPrimalInventoryComponent.ItemSets" }; }
	FieldValue<TArray<FSupplyCrateItemSet>> AdditionalItemSetsField() { return { this, "UPrimalInventoryComponent.AdditionalItemSets" }; }
	FieldValue<TSubclassOf<UPrimalSupplyCrateItemSets>> ItemSetsOverrideField() { return { this, "UPrimalInventoryComponent.ItemSetsOverride" }; }
	FieldValue<TArray<float>> SetQuantityWeightsField() { return { this, "UPrimalInventoryComponent.SetQuantityWeights" }; }
	FieldValue<TArray<float>> SetQuantityValuesField() { return { this, "UPrimalInventoryComponent.SetQuantityValues" }; }
	FieldValue<USoundBase *> ItemRemovedBySoundField() { return { this, "UPrimalInventoryComponent.ItemRemovedBySound" }; }
	FieldValue<USoundBase *> OpenInventorySoundField() { return { this, "UPrimalInventoryComponent.OpenInventorySound" }; }
	FieldValue<USoundBase *> CloseInventorySoundField() { return { this, "UPrimalInventoryComponent.CloseInventorySound" }; }
	FieldValue<float> MaxInventoryAccessDistanceField() { return { this, "UPrimalInventoryComponent.MaxInventoryAccessDistance" }; }
	FieldValue<TArray<FString>> ServerCustomFolderField() { return { this, "UPrimalInventoryComponent.ServerCustomFolder" }; }
	FieldValue<TArray<TSubclassOf<UPrimalInventoryComponent>>> ForceAllowCraftingForInventoryComponentsField() { return { this, "UPrimalInventoryComponent.ForceAllowCraftingForInventoryComponents" }; }
	FieldValue<TArray<FItemMultiplier>> ItemClassWeightMultipliersField() { return { this, "UPrimalInventoryComponent.ItemClassWeightMultipliers" }; }
	FieldValue<float> GenerateItemSetsQualityMultiplierMinField() { return { this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMin" }; }
	FieldValue<float> GenerateItemSetsQualityMultiplierMaxField() { return { this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMax" }; }
	FieldValue<float> DefaultCraftingRequirementsMultiplierField() { return { this, "UPrimalInventoryComponent.DefaultCraftingRequirementsMultiplier" }; }
	FieldValue<int> DefaultCraftingQuantityMultiplierField() { return { this, "UPrimalInventoryComponent.DefaultCraftingQuantityMultiplier" }; }
	FieldValue<int> SavedForceDefaultInventoryRefreshVersionField() { return { this, "UPrimalInventoryComponent.SavedForceDefaultInventoryRefreshVersion" }; }
	FieldValue<int> ForceDefaultInventoryRefreshVersionField() { return { this, "UPrimalInventoryComponent.ForceDefaultInventoryRefreshVersion" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> TamedDinoForceConsiderFoodTypesField() { return { this, "UPrimalInventoryComponent.TamedDinoForceConsiderFoodTypes" }; }
	FieldValue<TArray<UPrimalItem *>> DinoAutoHealingItemsField() { return { this, "UPrimalInventoryComponent.DinoAutoHealingItems" }; }
	FieldValue<USoundBase *> OverrideCraftingFinishedSoundField() { return { this, "UPrimalInventoryComponent.OverrideCraftingFinishedSound" }; }
	FieldValue<long double> LastAddToCraftQueueSoundTimeField() { return { this, "UPrimalInventoryComponent.LastAddToCraftQueueSoundTime" }; }
	FieldValue<FString> ForceAddToFolderField() { return { this, "UPrimalInventoryComponent.ForceAddToFolder" }; }
	FieldValue<FVector> GroundDropTraceLocationOffsetField() { return { this, "UPrimalInventoryComponent.GroundDropTraceLocationOffset" }; }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bInitializedMe() { return { this, "UPrimalInventoryComponent.bInitializedMe" }; }
	BitFieldValue<bool, unsigned __int32> bReceivingEquippedItems() { return { this, "UPrimalInventoryComponent.bReceivingEquippedItems" }; }
	BitFieldValue<bool, unsigned __int32> bReceivingInventoryItems() { return { this, "UPrimalInventoryComponent.bReceivingInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bReceivingArkInventoryItems() { return { this, "UPrimalInventoryComponent.bReceivingArkInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bFreeCraftingMode() { return { this, "UPrimalInventoryComponent.bFreeCraftingMode" }; }
	BitFieldValue<bool, unsigned __int32> bCanEquipItems() { return { this, "UPrimalInventoryComponent.bCanEquipItems" }; }
	BitFieldValue<bool, unsigned __int32> bCanUseWeaponAsEquipment() { return { this, "UPrimalInventoryComponent.bCanUseWeaponAsEquipment" }; }
	BitFieldValue<bool, unsigned __int32> bCanInventoryItems() { return { this, "UPrimalInventoryComponent.bCanInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeCraftingRepairingRequirementsOnStart() { return { this, "UPrimalInventoryComponent.bConsumeCraftingRepairingRequirementsOnStart" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemoteCrafting() { return { this, "UPrimalInventoryComponent.bAllowRemoteCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDeactivatedCrafting() { return { this, "UPrimalInventoryComponent.bAllowDeactivatedCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAutoDecreaseDurability() { return { this, "UPrimalInventoryComponent.bPreventAutoDecreaseDurability" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemoteRepairing() { return { this, "UPrimalInventoryComponent.bAllowRemoteRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowItemStacking() { return { this, "UPrimalInventoryComponent.bAllowItemStacking" }; }
	BitFieldValue<bool, unsigned __int32> bUseCraftQueue() { return { this, "UPrimalInventoryComponent.bUseCraftQueue" }; }
	BitFieldValue<bool, unsigned __int32> bShowHiddenRemoteInventoryItems() { return { this, "UPrimalInventoryComponent.bShowHiddenRemoteInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bForceInventoryBlueprints() { return { this, "UPrimalInventoryComponent.bForceInventoryBlueprints" }; }
	BitFieldValue<bool, unsigned __int32> bForceInventoryNonRemovable() { return { this, "UPrimalInventoryComponent.bForceInventoryNonRemovable" }; }
	BitFieldValue<bool, unsigned __int32> bHideDefaultInventoryItemsFromDisplay() { return { this, "UPrimalInventoryComponent.bHideDefaultInventoryItemsFromDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bDataListPadMaxInventoryItems() { return { this, "UPrimalInventoryComponent.bDataListPadMaxInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bAddMaxInventoryItemsToDefaultItems() { return { this, "UPrimalInventoryComponent.bAddMaxInventoryItemsToDefaultItems" }; }
	BitFieldValue<bool, unsigned __int32> bCheckForAutoCraftBlueprints() { return { this, "UPrimalInventoryComponent.bCheckForAutoCraftBlueprints" }; }
	BitFieldValue<bool, unsigned __int32> bIsTributeInventory() { return { this, "UPrimalInventoryComponent.bIsTributeInventory" }; }
	BitFieldValue<bool, unsigned __int32> bEquipmentMustRequireExplicitOwnerClass() { return { this, "UPrimalInventoryComponent.bEquipmentMustRequireExplicitOwnerClass" }; }
	BitFieldValue<bool, unsigned __int32> bEquipmentPlayerForceRequireExplicitOwnerClass() { return { this, "UPrimalInventoryComponent.bEquipmentPlayerForceRequireExplicitOwnerClass" }; }
	BitFieldValue<bool, unsigned __int32> bEquipmentForceIgnoreExplicitOwnerClass() { return { this, "UPrimalInventoryComponent.bEquipmentForceIgnoreExplicitOwnerClass" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInventoryRefresh() { return { this, "UPrimalInventoryComponent.bUseBPInventoryRefresh" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInitializeInventory() { return { this, "UPrimalInventoryComponent.bUseBPInitializeInventory" }; }
	BitFieldValue<bool, unsigned __int32> bCraftingEnabled() { return { this, "UPrimalInventoryComponent.bCraftingEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bRepairingEnabled() { return { this, "UPrimalInventoryComponent.bRepairingEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateComponent() { return { this, "UPrimalInventoryComponent.bReplicateComponent" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyOneCraftQueueItem() { return { this, "UPrimalInventoryComponent.bOnlyOneCraftQueueItem" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowTribe() { return { this, "UPrimalInventoryComponent.bRemoteInventoryOnlyAllowTribe" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideCraftingMinDurabilityRequirement() { return { this, "UPrimalInventoryComponent.bOverrideCraftingMinDurabilityRequirement" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowRemoveItems() { return { this, "UPrimalInventoryComponent.bRemoteInventoryAllowRemoveItems" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowAddItems() { return { this, "UPrimalInventoryComponent.bRemoteInventoryAllowAddItems" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemoteInventory() { return { this, "UPrimalInventoryComponent.bAllowRemoteInventory" }; }
	BitFieldValue<bool, unsigned __int32> bUseCheatInventory() { return { this, "UPrimalInventoryComponent.bUseCheatInventory" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAddingToArkTribute() { return { this, "UPrimalInventoryComponent.bAllowAddingToArkTribute" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowSelf() { return { this, "UPrimalInventoryComponent.bRemoteInventoryOnlyAllowSelf" }; }
	BitFieldValue<bool, unsigned __int32> bMaxInventoryWeightUseCharacterStatus() { return { this, "UPrimalInventoryComponent.bMaxInventoryWeightUseCharacterStatus" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDropInventoryDeposit() { return { this, "UPrimalInventoryComponent.bPreventDropInventoryDeposit" }; }
	BitFieldValue<bool, unsigned __int32> bShowItemDefaultFolders() { return { this, "UPrimalInventoryComponent.bShowItemDefaultFolders" }; }
	BitFieldValue<bool, unsigned __int32> bDisableDropAllItems() { return { this, "UPrimalInventoryComponent.bDisableDropAllItems" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMaxInventoryItems() { return { this, "UPrimalInventoryComponent.bIgnoreMaxInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteOnlyAllowBlueprintsOrItemClasses() { return { this, "UPrimalInventoryComponent.bRemoteOnlyAllowBlueprintsOrItemClasses" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSendingData() { return { this, "UPrimalInventoryComponent.bPreventSendingData" }; }
	BitFieldValue<bool, unsigned __int32> bSupressInventoryItemNetworking() { return { this, "UPrimalInventoryComponent.bSupressInventoryItemNetworking" }; }
	BitFieldValue<bool, unsigned __int32> bPreventInventoryViewTrace() { return { this, "UPrimalInventoryComponent.bPreventInventoryViewTrace" }; }
	BitFieldValue<bool, unsigned __int32> bSpawnActorOnTopOfStructure() { return { this, "UPrimalInventoryComponent.bSpawnActorOnTopOfStructure" }; }
	BitFieldValue<bool, unsigned __int32> bDropPhysicalInventoryDeposit() { return { this, "UPrimalInventoryComponent.bDropPhysicalInventoryDeposit" }; }
	BitFieldValue<bool, unsigned __int32> bUseExtendedCharacterCraftingFunctionality() { return { this, "UPrimalInventoryComponent.bUseExtendedCharacterCraftingFunctionality" }; }
	BitFieldValue<bool, unsigned __int32> bForceGenerateItemSets() { return { this, "UPrimalInventoryComponent.bForceGenerateItemSets" }; }
	BitFieldValue<bool, unsigned __int32> bBPHandleAccessInventory() { return { this, "UPrimalInventoryComponent.bBPHandleAccessInventory" }; }
	BitFieldValue<bool, unsigned __int32> bGivesAchievementItems() { return { this, "UPrimalInventoryComponent.bGivesAchievementItems" }; }
	BitFieldValue<bool, unsigned __int32> bBPAllowUseInInventory() { return { this, "UPrimalInventoryComponent.bBPAllowUseInInventory" }; }
	BitFieldValue<bool, unsigned __int32> bBPRemoteInventoryAllowRemoveItems() { return { this, "UPrimalInventoryComponent.bBPRemoteInventoryAllowRemoveItems" }; }
	BitFieldValue<bool, unsigned __int32> bBPNotifyItemAdded() { return { this, "UPrimalInventoryComponent.bBPNotifyItemAdded" }; }
	BitFieldValue<bool, unsigned __int32> bBPNotifyItemRemoved() { return { this, "UPrimalInventoryComponent.bBPNotifyItemRemoved" }; }
	BitFieldValue<bool, unsigned __int32> bBPNotifyItemQuantityUpdated() { return { this, "UPrimalInventoryComponent.bBPNotifyItemQuantityUpdated" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideItemMinimumUseInterval() { return { this, "UPrimalInventoryComponent.bBPOverrideItemMinimumUseInterval" }; }
	BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowAddItems() { return { this, "UPrimalInventoryComponent.bBPForceCustomRemoteInventoryAllowAddItems" }; }
	BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowRemoveItems() { return { this, "UPrimalInventoryComponent.bBPForceCustomRemoteInventoryAllowRemoveItems" }; }
	BitFieldValue<bool, unsigned __int32> bForceInventoryNotifyCraftingFinished() { return { this, "UPrimalInventoryComponent.bForceInventoryNotifyCraftingFinished" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWorldSettingsInventoryComponentAppends() { return { this, "UPrimalInventoryComponent.bAllowWorldSettingsInventoryComponentAppends" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceConsumption() { return { this, "UPrimalInventoryComponent.bPreventCraftingResourceConsumption" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideInventoryDepositClassDontForceDrop() { return { this, "UPrimalInventoryComponent.bOverrideInventoryDepositClassDontForceDrop" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsCraftingAllowed() { return { this, "UPrimalInventoryComponent.bUseBPIsCraftingAllowed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowCrafting() { return { this, "UPrimalInventoryComponent.bUseBPRemoteInventoryAllowCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bSetsRandomWithoutReplacement() { return { this, "UPrimalInventoryComponent.bSetsRandomWithoutReplacement" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowAllUseInInventory() { return { this, "UPrimalInventoryComponent.bForceAllowAllUseInInventory" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsValidCraftingResource() { return { this, "UPrimalInventoryComponent.bUseBPIsValidCraftingResource" }; }
	BitFieldValue<bool, unsigned __int32> bUseParentStructureIsValidCraftingResource() { return { this, "UPrimalInventoryComponent.bUseParentStructureIsValidCraftingResource" }; }
	BitFieldValue<bool, unsigned __int32> bSetCraftingEnabledCheckForAutoCraftBlueprints() { return { this, "UPrimalInventoryComponent.bSetCraftingEnabledCheckForAutoCraftBlueprints" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowViewing() { return { this, "UPrimalInventoryComponent.bUseBPRemoteInventoryAllowViewing" }; }
	BitFieldValue<bool, unsigned __int32> bAllDefaultInventoryIsEngrams() { return { this, "UPrimalInventoryComponent.bAllDefaultInventoryIsEngrams" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedDefaultInventory() { return { this, "UPrimalInventoryComponent.bInitializedDefaultInventory" }; }
	BitFieldValue<bool, unsigned __int32> bGetDataListEntriesOnlyRootItems() { return { this, "UPrimalInventoryComponent.bGetDataListEntriesOnlyRootItems" }; }
	BitFieldValue<bool, unsigned __int32> bConfigOverriden() { return { this, "UPrimalInventoryComponent.bConfigOverriden" }; }

	// Functions

	static UClass * StaticClass() { return NativeCall<UClass *>(nullptr, "UPrimalInventoryComponent.StaticClass"); }
	void OnRegister() { NativeCall<void>(this, "UPrimalInventoryComponent.OnRegister"); }
	bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.AllowEquippingItemType", equipmentType); }
	bool CanEquipItem(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.CanEquipItem", anItem); }
	bool AllowAddInventoryItem(UPrimalItem * anItem, int * requestedQuantity, bool OnlyAddAll) { return NativeCall<bool, UPrimalItem *, int *, bool>(this, "UPrimalInventoryComponent.AllowAddInventoryItem", anItem, requestedQuantity, OnlyAddAll); }
	UPrimalItem * AddItem(FItemNetInfo * theItemInfo, bool bEquipItem, bool AddToSlot, bool bDontStack, FItemNetID * InventoryInsertAfterItemID, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bForceIncompleteStacking, AShooterCharacter * OwnerPlayer, bool bIgnoreAbsoluteMaxInventory) { return NativeCall<UPrimalItem *, FItemNetInfo *, bool, bool, bool, FItemNetID *, bool, bool, bool, AShooterCharacter *, bool>(this, "UPrimalInventoryComponent.AddItem", theItemInfo, bEquipItem, AddToSlot, bDontStack, InventoryInsertAfterItemID, ShowHUDNotification, bDontRecalcSpoilingTime, bForceIncompleteStacking, OwnerPlayer, bIgnoreAbsoluteMaxInventory); }
	bool IsLocalInventoryViewer() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocalInventoryViewer"); }
	void NotifyItemAdded(UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalItem *, bool>(this, "UPrimalInventoryComponent.NotifyItemAdded", theItem, bEquippedItem); }
	void NotifyArkItemAdded() { NativeCall<void>(this, "UPrimalInventoryComponent.NotifyArkItemAdded"); }
	void NotifyItemRemoved(UPrimalItem * theItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.NotifyItemRemoved", theItem); }
	void RemoveItemSpoilingTimer(UPrimalItem * theItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.RemoveItemSpoilingTimer", theItem); }
	bool LoadAdditionalStructureEngrams() { return NativeCall<bool>(this, "UPrimalInventoryComponent.LoadAdditionalStructureEngrams"); }
	bool RemoveItem(FItemNetID * itemID, bool bDoDrop, bool bSecondryAction, bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, FItemNetID *, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.RemoveItem", itemID, bDoDrop, bSecondryAction, bForceRemoval, showHUDMessage); }
	bool ServerEquipItem(FItemNetID * itemID) { return NativeCall<bool, FItemNetID *>(this, "UPrimalInventoryComponent.ServerEquipItem", itemID); }
	void DropItem(FItemNetInfo * theInfo, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation) { NativeCall<void, FItemNetInfo *, bool, FVector *, FRotator *, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.DropItem", theInfo, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation); }
	static ADroppedItem * StaticDropNewItem(AActor * forActor, TSubclassOf<UPrimalItem> AnItemClass, float ItemQuality, bool bForceNoBlueprint, int QuantityOverride, bool bForceBlueprint, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator * DroppedRotationOffset, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondaryAction, bool bSetItemDropLocation, UStaticMesh * DroppedMeshOverride, FVector DroppedScaleOverride, UMaterialInterface * DroppedMaterialOverride, float DroppedLifeSpanOverride) { return NativeCall<ADroppedItem *, AActor *, TSubclassOf<UPrimalItem>, float, bool, int, bool, TSubclassOf<ADroppedItem>, FRotator *, bool, FVector *, FRotator *, bool, bool, bool, bool, UStaticMesh *, FVector, UMaterialInterface *, float>(nullptr, "UPrimalInventoryComponent.StaticDropNewItem", forActor, AnItemClass, ItemQuality, bForceNoBlueprint, QuantityOverride, bForceBlueprint, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondaryAction, bSetItemDropLocation, DroppedMeshOverride, DroppedScaleOverride, DroppedMaterialOverride, DroppedLifeSpanOverride); }
	static ADroppedItem * StaticDropNewItemWithInfo(AActor * forActor, FItemNetInfo * ItemInfo, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator * DroppedRotationOffset, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondaryAction, bool bSetItemDropLocation, UStaticMesh * DroppedMeshOverride, FVector DroppedScaleOverride, UMaterialInterface * DroppedMaterialOverride, float DroppedLifeSpanOverride) { return NativeCall<ADroppedItem *, AActor *, FItemNetInfo *, TSubclassOf<ADroppedItem>, FRotator *, bool, FVector *, FRotator *, bool, bool, bool, bool, UStaticMesh *, FVector, UMaterialInterface *, float>(nullptr, "UPrimalInventoryComponent.StaticDropNewItemWithInfo", forActor, ItemInfo, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondaryAction, bSetItemDropLocation, DroppedMeshOverride, DroppedScaleOverride, DroppedMaterialOverride, DroppedLifeSpanOverride); }
	static ADroppedItem * StaticDropItem(AActor * forActor, FItemNetInfo * theInfo, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator * DroppedRotationOffset, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation, UStaticMesh * DroppedMeshOverride, FVector * DroppedScaleOverride, UMaterialInterface * DroppedMaterialOverride, float DroppedLifeSpanOverride) { return NativeCall<ADroppedItem *, AActor *, FItemNetInfo *, TSubclassOf<ADroppedItem>, FRotator *, bool, FVector *, FRotator *, bool, bool, bool, bool, UStaticMesh *, FVector *, UMaterialInterface *, float>(nullptr, "UPrimalInventoryComponent.StaticDropItem", forActor, theInfo, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation, DroppedMeshOverride, DroppedScaleOverride, DroppedMaterialOverride, DroppedLifeSpanOverride); }
	AShooterPlayerController * GetOwnerController() { return NativeCall<AShooterPlayerController *>(this, "UPrimalInventoryComponent.GetOwnerController"); }
	void InventoryViewersPlayLocalSound(USoundBase * aSound, bool bAttach) { NativeCall<void, USoundBase *, bool>(this, "UPrimalInventoryComponent.InventoryViewersPlayLocalSound", aSound, bAttach); }
	void InventoryViewersStopLocalSound(USoundBase * aSound) { NativeCall<void, USoundBase *>(this, "UPrimalInventoryComponent.InventoryViewersStopLocalSound", aSound); }
	void UpdateNetWeaponClipAmmo(UPrimalItem * anItem, int ammo) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalInventoryComponent.UpdateNetWeaponClipAmmo", anItem, ammo); }
	void NotifyClientsItemStatus(UPrimalItem * anItem, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, UPrimalItem * anItem2, FItemNetID * InventoryInsertAfterItemID, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalItem *, bool, bool, bool, bool, bool, UPrimalItem *, FItemNetID *, bool, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientsItemStatus", anItem, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, anItem2, InventoryInsertAfterItemID, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void NotifyClientItemArkTributeStatusChanged(UPrimalItem * anItem, bool bRemoved, bool bFromLoad) { NativeCall<void, UPrimalItem *, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientItemArkTributeStatusChanged", anItem, bRemoved, bFromLoad); }
	void ServerRequestItems(AShooterPlayerController * forPC, bool bEquippedItems, bool bIsFirstSpawn) { NativeCall<void, AShooterPlayerController *, bool, bool>(this, "UPrimalInventoryComponent.ServerRequestItems", forPC, bEquippedItems, bIsFirstSpawn); }
	void ClientStartReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientStartReceivingItems", bEquippedItems); }
	void ClientFinishReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientFinishReceivingItems", bEquippedItems); }
	TArray<UPrimalItem *> * FindColorItem(TArray<UPrimalItem *> * result, FColor theColor, bool bEquippedItems) { return NativeCall<TArray<UPrimalItem *> *, TArray<UPrimalItem *> *, FColor, bool>(this, "UPrimalInventoryComponent.FindColorItem", result, theColor, bEquippedItems); }
	TArray<UPrimalItem *> * FindBrushColorItem(TArray<UPrimalItem *> * result, __int16 ArchIndex) { return NativeCall<TArray<UPrimalItem *> *, TArray<UPrimalItem *> *, __int16>(this, "UPrimalInventoryComponent.FindBrushColorItem", result, ArchIndex); }
	UPrimalItem * FindItem(FItemNetID * ItemID, bool bEquippedItems, bool bAllItems, int * itemIdx) { return NativeCall<UPrimalItem *, FItemNetID *, bool, bool, int *>(this, "UPrimalInventoryComponent.FindItem", ItemID, bEquippedItems, bAllItems, itemIdx); }
	void GiveInitialItems(bool SkipEngrams) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.GiveInitialItems", SkipEngrams); }
	void InitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitDefaultInventory"); }
	void InitializeInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitializeInventory"); }
	void CheckRefreshDefaultInventoryItems() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckRefreshDefaultInventoryItems"); }
	void SetEquippedItemsOwnerNoSee(bool bNewOwnerNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.SetEquippedItemsOwnerNoSee", bNewOwnerNoSee, bForceHideFirstPerson); }
	bool RemoteInventoryAllowViewing(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.RemoteInventoryAllowViewing", PC); }
	bool RemoteInventoryAllowAddItems(AShooterPlayerController * PC, UPrimalItem * anItem, int * anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int *, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
	bool RemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer, int * requestedQuantity, bool bRequestedByPlayer, bool bRequestDropping) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int *, bool, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRemoveItems", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer, bRequestDropping); }
	bool RemoteInventoryAllowCraftingItems(AShooterPlayerController * PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowCraftingItems", PC, bIgnoreEnabled); }
	bool RemoteInventoryAllowRepairingItems(AShooterPlayerController * PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController *, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRepairingItems", PC, bIgnoreEnabled); }
	void ServerViewRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerViewRemoteInventory", ByPC); }
	void ServerCloseRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerCloseRemoteInventory", ByPC); }
	void ClientUpdateFreeCraftingMode_Implementation(bool bNewFreeCraftingModeValue) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode_Implementation", bNewFreeCraftingModeValue); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentDestroyed"); }
	void SwapCustomFolder(FString CFolder1, FString CFolder2, int DataListType) { NativeCall<void, FString, FString, int>(this, "UPrimalInventoryComponent.SwapCustomFolder", CFolder1, CFolder2, DataListType); }
	bool AddToFolders(TArray<FString> * FoldersFound, UPrimalItem * anItem) { return NativeCall<bool, TArray<FString> *, UPrimalItem *>(this, "UPrimalInventoryComponent.AddToFolders", FoldersFound, anItem); }
	FString * GetInventoryName(FString * result, bool bIsEquipped) { return NativeCall<FString *, FString *, bool>(this, "UPrimalInventoryComponent.GetInventoryName", result, bIsEquipped); }
	int GetFirstUnoccupiedSlot(AShooterPlayerState * forPlayerState, UPrimalItem * forItem) { return NativeCall<int, AShooterPlayerState *, UPrimalItem *>(this, "UPrimalInventoryComponent.GetFirstUnoccupiedSlot", forPlayerState, forItem); }
	void ServerMakeRecipeItem_Implementation(APrimalStructureItemContainer * Container, FItemNetID NoteToConsume, TSubclassOf<UPrimalItem> RecipeItemTemplate, FString * CustomName, FString * CustomDescription, TArray<FColor> * CustomColors, TArray<FCraftingResourceRequirement> * CustomRequirements) { NativeCall<void, APrimalStructureItemContainer *, FItemNetID, TSubclassOf<UPrimalItem>, FString *, FString *, TArray<FColor> *, TArray<FCraftingResourceRequirement> *>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem_Implementation", Container, NoteToConsume, RecipeItemTemplate, CustomName, CustomDescription, CustomColors, CustomRequirements); }
	void ServerRemoveItemFromSlot_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot_Implementation", ItemID); }
	void ServerAddItemToSlot_Implementation(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerAddItemToSlot_Implementation", ItemID, SlotIndex); }
	UPrimalItem * GetEquippedItemOfType(EPrimalEquipmentType::Type aType) { return NativeCall<UPrimalItem *, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.GetEquippedItemOfType", aType); }
	UPrimalItem * GetEquippedItemOfClass(TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<UPrimalItem *, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetEquippedItemOfClass", ItemClass); }
	int IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, UPrimalItem ** UseSpecificItem, UPrimalItem ** IncrementedItem, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bDontExceedMaxItems) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool, bool, UPrimalItem **, UPrimalItem **, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.IncrementItemTemplateQuantity", ItemTemplate, amount, bReplicateToClient, bIsBlueprint, UseSpecificItem, IncrementedItem, bRequireExactClassMatch, bIsCraftingResourceConsumption, bIsFromUseConsumption, bIsArkTributeItem, ShowHUDNotification, bDontRecalcSpoilingTime, bDontExceedMaxItems); }
	bool IncrementArkTributeItemQuantity(UPrimalItem * NewItem, UPrimalItem ** IncrementedItem) { return NativeCall<bool, UPrimalItem *, UPrimalItem **>(this, "UPrimalInventoryComponent.IncrementArkTributeItemQuantity", NewItem, IncrementedItem); }
	UPrimalItem * GetItemOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate, bool bOnlyInventoryItems, bool bOnlyEquippedItems, bool IgnoreItemsWithFullQuantity, bool bFavorSlotItems, bool bIsBlueprint, UPrimalItem * CheckCanStackWithItem, bool bRequiresExactClassMatch, int * CheckCanStackWithItemQuantityOverride, bool bIgnoreSlotItems, bool bOnlyArkTributeItems, bool bPreferEngram, bool bIsForCraftingConsumption) { return NativeCall<UPrimalItem *, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, UPrimalItem *, bool, int *, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.GetItemOfTemplate", ItemTemplate, bOnlyInventoryItems, bOnlyEquippedItems, IgnoreItemsWithFullQuantity, bFavorSlotItems, bIsBlueprint, CheckCanStackWithItem, bRequiresExactClassMatch, CheckCanStackWithItemQuantityOverride, bIgnoreSlotItems, bOnlyArkTributeItems, bPreferEngram, bIsForCraftingConsumption); }
	int GetCraftQueueResourceCost(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem * IgnoreFirstItem) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem *>(this, "UPrimalInventoryComponent.GetCraftQueueResourceCost", ItemTemplate, IgnoreFirstItem); }
	int GetItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem * IgnoreItem, bool bIgnoreBlueprints, bool bCheckValidForCrafting, bool bRequireExactClassMatch) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem *, bool, bool, bool>(this, "UPrimalInventoryComponent.GetItemTemplateQuantity", ItemTemplate, IgnoreItem, bIgnoreBlueprints, bCheckValidForCrafting, bRequireExactClassMatch); }
	float GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetTotalDurabilityOfTemplate", ItemTemplate); }
	void LocalUseItemSlot(int slotIndex, bool bForceCraft) { NativeCall<void, int, bool>(this, "UPrimalInventoryComponent.LocalUseItemSlot", slotIndex, bForceCraft); }
	float GetTotalEquippedItemStat(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalInventoryComponent.GetTotalEquippedItemStat", statType); }
	float GetEquippedArmorRating(EPrimalEquipmentType::Type equipmentType) { return NativeCall<float, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.GetEquippedArmorRating", equipmentType); }
	void ConsumeArmorDurability(float ConsumptionAmount, bool bAllArmorTypes, EPrimalEquipmentType::Type SpecificArmorType) { NativeCall<void, float, bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.ConsumeArmorDurability", ConsumptionAmount, bAllArmorTypes, SpecificArmorType); }
	void ServerCraftItem(FItemNetID * itemID, AShooterPlayerController * ByPC) { NativeCall<void, FItemNetID *, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerCraftItem", itemID, ByPC); }
	void AddToCraftQueue(UPrimalItem * anItem, AShooterPlayerController * ByPC, bool bIsRepair, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, UPrimalItem *, AShooterPlayerController *, bool, bool, float, float>(this, "UPrimalInventoryComponent.AddToCraftQueue", anItem, ByPC, bIsRepair, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
	void ClearCraftQueue(bool bForceClearActiveCraftRepair) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClearCraftQueue", bForceClearActiveCraftRepair); }
	void ServerRepairItem(FItemNetID * itemID, AShooterPlayerController * ByPC, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, FItemNetID *, AShooterPlayerController *, bool, float, float>(this, "UPrimalInventoryComponent.ServerRepairItem", itemID, ByPC, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
	void ServerUseInventoryItem(FItemNetID * itemID, AShooterPlayerController * ByPC) { NativeCall<void, FItemNetID *, AShooterPlayerController *>(this, "UPrimalInventoryComponent.ServerUseInventoryItem", itemID, ByPC); }
	void ServerUseItemWithItem(FItemNetID * itemID1, FItemNetID * itemID2, int AdditionalData) { NativeCall<void, FItemNetID *, FItemNetID *, int>(this, "UPrimalInventoryComponent.ServerUseItemWithItem", itemID1, itemID2, AdditionalData); }
	void SwapInventoryItems(FItemNetID * itemID1, FItemNetID * itemID2) { NativeCall<void, FItemNetID *, FItemNetID *>(this, "UPrimalInventoryComponent.SwapInventoryItems", itemID1, itemID2); }
	void AddItemCrafting(UPrimalItem * craftingItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.AddItemCrafting", craftingItem); }
	void RemoveItemCrafting(UPrimalItem * craftingItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.RemoveItemCrafting", craftingItem); }
	void StopAllCraftingRepairing() { NativeCall<void>(this, "UPrimalInventoryComponent.StopAllCraftingRepairing"); }
	void TickCraftQueue(float DeltaTime, AShooterGameState * theGameState) { NativeCall<void, float, AShooterGameState *>(this, "UPrimalInventoryComponent.TickCraftQueue", DeltaTime, theGameState); }
	float GetCraftingSpeed() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetCraftingSpeed"); }
	AShooterHUD * GetLocalOwnerHUD() { return NativeCall<AShooterHUD *>(this, "UPrimalInventoryComponent.GetLocalOwnerHUD"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UPrimalInventoryComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool IsLocal() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocal"); }
	bool IsLocalToPlayer(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.IsLocalToPlayer", ForPC); }
	void Unstasised() { NativeCall<void>(this, "UPrimalInventoryComponent.Unstasised"); }
	void CheckForAutoCraftBlueprints() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckForAutoCraftBlueprints"); }
	bool IsCraftingAllowed(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.IsCraftingAllowed", anItem); }
	void SetCraftingEnabled(bool bEnable) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.SetCraftingEnabled", bEnable); }
	float GetInventoryWeight() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetInventoryWeight"); }
	void ServerSplitItemStack_Implementation(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack_Implementation", ItemID, AmountToSplit); }
	void ServerMergeItemStack_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerMergeItemStack_Implementation", ItemID); }
	void ServerForceMergeItemStack_Implementation(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack_Implementation", Item1ID, Item2ID); }
	void RemoteDeleteCustomFolder(FString * CFolderName, int InventoryCompType) { NativeCall<void, FString *, int>(this, "UPrimalInventoryComponent.RemoteDeleteCustomFolder", CFolderName, InventoryCompType); }
	void RemoteAddItemToCustomFolder(FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, FString *, int, FItemNetID>(this, "UPrimalInventoryComponent.RemoteAddItemToCustomFolder", CFolderName, InventoryCompType, ItemId); }
	void RemoteDeleteItemFromCustomFolder(AShooterPlayerController * PC, FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, AShooterPlayerController *, FString *, int, FItemNetID>(this, "UPrimalInventoryComponent.RemoteDeleteItemFromCustomFolder", PC, CFolderName, InventoryCompType, ItemId); }
	UPrimalItem * FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem> ItemClass, bool bFindLeastQuantity, UPrimalItem * StacksWithAndIgnoreItem) { return NativeCall<UPrimalItem *, TSubclassOf<UPrimalItem>, bool, UPrimalItem *>(this, "UPrimalInventoryComponent.FindInventoryStackableItemCompareQuantity", ItemClass, bFindLeastQuantity, StacksWithAndIgnoreItem); }
	UPrimalCharacterStatusComponent * GetCharacterStatusComponent() { return NativeCall<UPrimalCharacterStatusComponent *>(this, "UPrimalInventoryComponent.GetCharacterStatusComponent"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController *, int, int>(this, "UPrimalInventoryComponent.ClientMultiUse", ForPC, UseIndex, hitBodyIndex); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController *, int, int>(this, "UPrimalInventoryComponent.TryMultiUse", ForPC, UseIndex, hitBodyIndex); }
	void ActivePlayerInventoryTick(float DeltaTime) { NativeCall<void, float>(this, "UPrimalInventoryComponent.ActivePlayerInventoryTick", DeltaTime); }
	void InventoryRefresh() { NativeCall<void>(this, "UPrimalInventoryComponent.InventoryRefresh"); }
	void RefreshItemSpoilingTimes() { NativeCall<void>(this, "UPrimalInventoryComponent.RefreshItemSpoilingTimes"); }
	void NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int amount) { NativeCall<void, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.NotifyCraftingItemConsumption", ItemTemplate, amount); }
	float GetSpoilingTimeMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "UPrimalInventoryComponent.GetSpoilingTimeMultiplier", anItem); }
	void UsedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.UsedItem", anItem); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.RegisterComponentTickFunctions", bRegister, bSaveAndRestoreComponentTickState); }
	void UpdatedCraftQueue() { NativeCall<void>(this, "UPrimalInventoryComponent.UpdatedCraftQueue"); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "UPrimalInventoryComponent.LoadedFromSaveGame"); }
	void ClientItemMessageNotification_Implementation(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification_Implementation", ItemID, ItemMessageType); }
	bool IsOwnedByPlayer() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsOwnedByPlayer"); }
	bool DropInventoryDeposit(long double DestroyAtTime, bool bDoPreventSendingData, bool bIgnorEquippedItems, TSubclassOf<APrimalStructureItemContainer> OverrideInventoryDepositClass, APrimalStructureItemContainer * CopyStructureValues, APrimalStructureItemContainer ** DepositStructureResult, AActor * GroundIgnoreActor, FString CurrentCustomFolderFilter, FString CurrentNameFilter, unsigned __int64 DeathCacheCharacterID, float DropInventoryOnGroundTraceDistance, bool bForceDrop) { return NativeCall<bool, long double, bool, bool, TSubclassOf<APrimalStructureItemContainer>, APrimalStructureItemContainer *, APrimalStructureItemContainer **, AActor *, FString, FString, unsigned __int64, float, bool>(this, "UPrimalInventoryComponent.DropInventoryDeposit", DestroyAtTime, bDoPreventSendingData, bIgnorEquippedItems, OverrideInventoryDepositClass, CopyStructureValues, DepositStructureResult, GroundIgnoreActor, CurrentCustomFolderFilter, CurrentNameFilter, DeathCacheCharacterID, DropInventoryOnGroundTraceDistance, bForceDrop); }
	bool DropNotReadyInventoryDeposit(long double DestroyAtTime) { return NativeCall<bool, long double>(this, "UPrimalInventoryComponent.DropNotReadyInventoryDeposit", DestroyAtTime); }
	bool GetGroundLocation(FVector * theGroundLoc, FVector * OffsetUp, FVector * OffsetDown, APrimalStructure ** LandedOnStructure, AActor * IgnoreActor, bool bCheckAnyStationary, UPrimitiveComponent ** LandedOnComponent) { return NativeCall<bool, FVector *, FVector *, FVector *, APrimalStructure **, AActor *, bool, UPrimitiveComponent **>(this, "UPrimalInventoryComponent.GetGroundLocation", theGroundLoc, OffsetUp, OffsetDown, LandedOnStructure, IgnoreActor, bCheckAnyStationary, LandedOnComponent); }
	AActor * CraftedBlueprintSpawnActor(TSubclassOf<UPrimalItem> ForItemClass, TSubclassOf<AActor> ActorClassToSpawn) { return NativeCall<AActor *, TSubclassOf<UPrimalItem>, TSubclassOf<AActor>>(this, "UPrimalInventoryComponent.CraftedBlueprintSpawnActor", ForItemClass, ActorClassToSpawn); }
	bool GenerateCrateItems(float MinQualityMultiplier, float MaxQualityMultiplier, int NumPasses, float QuantityMultiplier, float SetPowerWeight, float MaxItemDifficultyClamp) { return NativeCall<bool, float, float, int, float, float, float>(this, "UPrimalInventoryComponent.GenerateCrateItems", MinQualityMultiplier, MaxQualityMultiplier, NumPasses, QuantityMultiplier, SetPowerWeight, MaxItemDifficultyClamp); }
	UPrimalItem * FindArkTributeItem(FItemNetID * ItemID) { return NativeCall<UPrimalItem *, FItemNetID *>(this, "UPrimalInventoryComponent.FindArkTributeItem", ItemID); }
	void SetNextItemSpoilingID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID_Implementation", NextItemID); }
	void SetNextItemConsumptionID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID_Implementation", NextItemID); }
	void CheckReplenishSlotIndex(int slotIndex, TSubclassOf<UPrimalItem> ClassCheckOverride) { NativeCall<void, int, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.CheckReplenishSlotIndex", slotIndex, ClassCheckOverride); }
	void OnArkTributeItemsRemoved(bool Success, TArray<FItemNetInfo> * RemovedItems, TArray<FItemNetInfo> * NotFoundItems, int FailureResponseCode, FString * FailureResponseMessage, bool bAllowForcedItemDownload) { NativeCall<void, bool, TArray<FItemNetInfo> *, TArray<FItemNetInfo> *, int, FString *, bool>(this, "UPrimalInventoryComponent.OnArkTributeItemsRemoved", Success, RemovedItems, NotFoundItems, FailureResponseCode, FailureResponseMessage, bAllowForcedItemDownload); }
	void ClientOnArkTributeItemsAdded_Implementation() { NativeCall<void>(this, "UPrimalInventoryComponent.ClientOnArkTributeItemsAdded_Implementation"); }
	void OnArkTributeItemsAdded(bool Success, TArray<FItemNetInfo> * AddedItems) { NativeCall<void, bool, TArray<FItemNetInfo> *>(this, "UPrimalInventoryComponent.OnArkTributeItemsAdded", Success, AddedItems); }
	bool RemoveArkTributeItem(FItemNetID * itemID, unsigned int Quantity) { return NativeCall<bool, FItemNetID *, unsigned int>(this, "UPrimalInventoryComponent.RemoveArkTributeItem", itemID, Quantity); }
	bool ServerAddToArkTributeInventory(FItemNetID * itemID, TArray<unsigned __int64> SteamItemUserIds, FItemNetInfo * AlternateItemInfo) { return NativeCall<bool, FItemNetID *, TArray<unsigned __int64>, FItemNetInfo *>(this, "UPrimalInventoryComponent.ServerAddToArkTributeInventory", itemID, SteamItemUserIds, AlternateItemInfo); }
	UPrimalItem * AddAfterRemovingFromArkTributeInventory(UPrimalItem * Item, FItemNetInfo * MyItem, bool bAllowForcedItemDownload) { return NativeCall<UPrimalItem *, UPrimalItem *, FItemNetInfo *, bool>(this, "UPrimalInventoryComponent.AddAfterRemovingFromArkTributeInventory", Item, MyItem, bAllowForcedItemDownload); }
	bool ServerAddFromArkTributeInventory(FItemNetID * itemID, int Quantity) { return NativeCall<bool, FItemNetID *, int>(this, "UPrimalInventoryComponent.ServerAddFromArkTributeInventory", itemID, Quantity); }
	void RequestAddArkTributeItem(FItemNetInfo * theItemInfo, bool bFromLoad) { NativeCall<void, FItemNetInfo *, bool>(this, "UPrimalInventoryComponent.RequestAddArkTributeItem", theItemInfo, bFromLoad); }
	void AddArkTributeItem(FItemNetInfo * theItemInfo, bool bFromLoad) { NativeCall<void, FItemNetInfo *, bool>(this, "UPrimalInventoryComponent.AddArkTributeItem", theItemInfo, bFromLoad); }
	void LoadArkTriuteItems(TArray<FItemNetInfo> * ItemInfos) { NativeCall<void, TArray<FItemNetInfo> *>(this, "UPrimalInventoryComponent.LoadArkTriuteItems", ItemInfos); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalInventoryComponent.NotifyItemQuantityUpdated", anItem, amount); }
	bool IsServerCustomFolder(int InventoryCompType) { return NativeCall<bool, int>(this, "UPrimalInventoryComponent.IsServerCustomFolder", InventoryCompType); }
	void AddCustomFolder(FString CFolder, int InventoryCompType) { NativeCall<void, FString, int>(this, "UPrimalInventoryComponent.AddCustomFolder", CFolder, InventoryCompType); }
	void RemoveCustomFolder(AShooterPlayerController * PC, FString FolderName, int InventoryCompType) { NativeCall<void, AShooterPlayerController *, FString, int>(this, "UPrimalInventoryComponent.RemoveCustomFolder", PC, FolderName, InventoryCompType); }
	TArray<FString> * GetCustomFolders(TArray<FString> * result, int InventoryCompType) { return NativeCall<TArray<FString> *, TArray<FString> *, int>(this, "UPrimalInventoryComponent.GetCustomFolders", result, InventoryCompType); }
	void DeleteItemFromCustomFolder(AShooterPlayerController * PC, FString CFolder, FItemNetID ItemId, int InventoryCompType) { NativeCall<void, AShooterPlayerController *, FString, FItemNetID, int>(this, "UPrimalInventoryComponent.DeleteItemFromCustomFolder", PC, CFolder, ItemId, InventoryCompType); }
	bool HasItemsEquipped(TArray<TSubclassOf<UPrimalItem>> * ItemTemplates, bool bRequiresExactClassMatch, bool bOnlyArkItems, bool bEnsureAllItems) { return NativeCall<bool, TArray<TSubclassOf<UPrimalItem>> *, bool, bool, bool>(this, "UPrimalInventoryComponent.HasItemsEquipped", ItemTemplates, bRequiresExactClassMatch, bOnlyArkItems, bEnsureAllItems); }
	bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.OverrideBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.AllowCraftingResourceConsumption", ItemTemplate, ItemQuantity); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetDamageTorpidityIncreaseMultiplierScale"); }
	float GetIndirectTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetIndirectTorpidityIncreaseMultiplierScale"); }
	float GetItemWeightMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "UPrimalInventoryComponent.GetItemWeightMultiplier", anItem); }
	void UpdateTribeGroupInventoryRank_Implementation(char NewRank) { NativeCall<void, char>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank_Implementation", NewRank); }
	float OverrideItemMinimumUseInterval(UPrimalItem * theItem) { return NativeCall<float, UPrimalItem *>(this, "UPrimalInventoryComponent.OverrideItemMinimumUseInterval", theItem); }
	UPrimalItem * AddItemObject(UPrimalItem * anItem) { return NativeCall<UPrimalItem *, UPrimalItem *>(this, "UPrimalInventoryComponent.AddItemObject", anItem); }
	UPrimalItem * AddItemObjectEx(UPrimalItem * anItem, bool bEquipItem, bool AddToSlot, bool bDontStack, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bForceIncompleteStacking, AShooterCharacter * OwnerPlayer) { return NativeCall<UPrimalItem *, UPrimalItem *, bool, bool, bool, bool, bool, bool, AShooterCharacter *>(this, "UPrimalInventoryComponent.AddItemObjectEx", anItem, bEquipItem, AddToSlot, bDontStack, ShowHUDNotification, bDontRecalcSpoilingTime, bForceIncompleteStacking, OwnerPlayer); }
	UPrimalItem * BPFindItemWithID(int ItemID1, int ItemID2) { return NativeCall<UPrimalItem *, int, int>(this, "UPrimalInventoryComponent.BPFindItemWithID", ItemID1, ItemID2); }
	bool IsValidCraftingResource(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalInventoryComponent.IsValidCraftingResource", theItem); }
	void OnComponentCreated() { NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentCreated"); }
	bool IsAtMaxInventoryItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsAtMaxInventoryItems"); }
	void BPCraftingFinishedNotification(UPrimalItem * itemToBeCrafted) { NativeCall<void, UPrimalItem *>(this, "UPrimalInventoryComponent.BPCraftingFinishedNotification", itemToBeCrafted); }
	bool BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController * PC, UPrimalItem * anItem, int anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
	bool BPCustomRemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer, int requestedQuantity, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowRemoveItems", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer); }
	bool BPRemoteInventoryAllowCrafting(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowCrafting", PC); }
	void BPRequestedInventoryItems(AShooterPlayerController * forPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalInventoryComponent.BPRequestedInventoryItems", forPC); }
	void ClientItemMessageNotification(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification", ItemID, ItemMessageType); }
	void ServerAddItemToSlot(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerAddItemToSlot", ItemID, SlotIndex); }
	void ServerForceMergeItemStack(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack", Item1ID, Item2ID); }
	void ServerRemoveItemFromSlot(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot", ItemID); }
	void ServerSplitItemStack(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack", ItemID, AmountToSplit); }
	void UpdateTribeGroupInventoryRank(char NewRank) { NativeCall<void, char>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank", NewRank); }
};

struct UPrimalItem : UObject
{
	FieldValue<float> DinoAutoHealingThresholdPercentField() { return { this, "UPrimalItem.DinoAutoHealingThresholdPercent" }; }
	FieldValue<float> DinoAutoHealingUseTimeIntervalField() { return { this, "UPrimalItem.DinoAutoHealingUseTimeInterval" }; }
	FieldValue<int> ArkTributeVersionField() { return { this, "UPrimalItem.ArkTributeVersion" }; }
	FieldValue<TArray<TSubclassOf<AActor>>> EquipRequiresExplicitOwnerClassesField() { return { this, "UPrimalItem.EquipRequiresExplicitOwnerClasses" }; }
	FieldValue<TArray<FName>> EquipRequiresExplicitOwnerTagsField() { return { this, "UPrimalItem.EquipRequiresExplicitOwnerTags" }; }
	FieldValue<unsigned int> ExpirationTimeUTCField() { return { this, "UPrimalItem.ExpirationTimeUTC" }; }
	FieldValue<int> BlueprintAllowMaxCraftingsField() { return { this, "UPrimalItem.BlueprintAllowMaxCraftings" }; }
	FieldValue<FString> AbstractItemCraftingDescriptionField() { return { this, "UPrimalItem.AbstractItemCraftingDescription" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> ItemSkinUseOnItemClassesField() { return { this, "UPrimalItem.ItemSkinUseOnItemClasses" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> ItemSkinPreventOnItemClassesField() { return { this, "UPrimalItem.ItemSkinPreventOnItemClasses" }; }
	FieldValue<USoundBase *> ItemBrokenSoundField() { return { this, "UPrimalItem.ItemBrokenSound" }; }
	FieldValue<USoundCue *> UseItemSoundField() { return { this, "UPrimalItem.UseItemSound" }; }
	FieldValue<USoundBase *> EquipSoundField() { return { this, "UPrimalItem.EquipSound" }; }
	FieldValue<USoundBase *> UnEquipSoundField() { return { this, "UPrimalItem.UnEquipSound" }; }
	FieldValue<USoundBase *> UsedOnOtherItemSoundField() { return { this, "UPrimalItem.UsedOnOtherItemSound" }; }
	FieldValue<USoundBase *> RemovedFromOtherItemSoundField() { return { this, "UPrimalItem.RemovedFromOtherItemSound" }; }
	FieldValue<float> RandomChanceToBeBlueprintField() { return { this, "UPrimalItem.RandomChanceToBeBlueprint" }; }
	FieldValue<TArray<FActorClassAttachmentInfo>> ActorClassAttachmentInfosField() { return { this, "UPrimalItem.ActorClassAttachmentInfos" }; }
	FieldValue<TArray<FItemAttachmentInfo> *> ItemAttachmentInfosField() { return { this, "UPrimalItem.ItemAttachmentInfos" }; }
	FieldValue<TArray<FItemAttachmentInfo>> DynamicItemAttachmentInfosField() { return { this, "UPrimalItem.DynamicItemAttachmentInfos" }; }
	FieldValue<TArray<FItemAttachmentInfo>> ItemSkinAddItemAttachmentsField() { return { this, "UPrimalItem.ItemSkinAddItemAttachments" }; }
	FieldValue<TEnumAsByte<enum EPrimalItemType::Type>> MyItemTypeField() { return { this, "UPrimalItem.MyItemType" }; }
	FieldValue<TEnumAsByte<enum EPrimalConsumableType::Type>> MyConsumableTypeField() { return { this, "UPrimalItem.MyConsumableType" }; }
	FieldValue<TEnumAsByte<enum EPrimalEquipmentType::Type>> MyEquipmentTypeField() { return { this, "UPrimalItem.MyEquipmentType" }; }
	FieldValue<int> ExtraItemCategoryFlagsField() { return { this, "UPrimalItem.ExtraItemCategoryFlags" }; }
	FieldValue<FVector> BlockingShieldFPVTranslationField() { return { this, "UPrimalItem.BlockingShieldFPVTranslation" }; }
	FieldValue<FRotator> BlockingShieldFPVRotationField() { return { this, "UPrimalItem.BlockingShieldFPVRotation" }; }
	FieldValue<float> ShieldBlockDamagePercentageField() { return { this, "UPrimalItem.ShieldBlockDamagePercentage" }; }
	FieldValue<float> ShieldDamageToDurabilityRatioField() { return { this, "UPrimalItem.ShieldDamageToDurabilityRatio" }; }
	FieldValue<UAnimMontage *> PlayAnimationOnUseField() { return { this, "UPrimalItem.PlayAnimationOnUse" }; }
	FieldValue<int> CraftingMinLevelRequirementField() { return { this, "UPrimalItem.CraftingMinLevelRequirement" }; }
	FieldValue<float> CraftingCooldownIntervalField() { return { this, "UPrimalItem.CraftingCooldownInterval" }; }
	FieldValue<TSubclassOf<AActor>> CraftingActorToSpawnField() { return { this, "UPrimalItem.CraftingActorToSpawn" }; }
	FieldValue<UTexture2D *> BlueprintBackgroundOverrideTextureField() { return { this, "UPrimalItem.BlueprintBackgroundOverrideTexture" }; }
	FieldValue<FString> CraftItemButtonStringOverrideField() { return { this, "UPrimalItem.CraftItemButtonStringOverride" }; }
	FieldValue<TSubclassOf<AActor>> UseSpawnActorClassField() { return { this, "UPrimalItem.UseSpawnActorClass" }; }
	FieldValue<FVector> UseSpawnActorLocOffsetField() { return { this, "UPrimalItem.UseSpawnActorLocOffset" }; }
	FieldValue<int> SlotIndexField() { return { this, "UPrimalItem.SlotIndex" }; }
	FieldValue<FItemNetID> ItemIDField() { return { this, "UPrimalItem.ItemID" }; }
	FieldValue<int> ItemCustomDataField() { return { this, "UPrimalItem.ItemCustomData" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ItemCustomClassField() { return { this, "UPrimalItem.ItemCustomClass" }; }
	FieldValue<int> ItemSkinTemplateIndexField() { return { this, "UPrimalItem.ItemSkinTemplateIndex" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ItemSkinTemplateField() { return { this, "UPrimalItem.ItemSkinTemplate" }; }
	FieldValue<float> ItemRatingField() { return { this, "UPrimalItem.ItemRating" }; }
	FieldValue<unsigned __int16> CraftQueueField() { return { this, "UPrimalItem.CraftQueue" }; }
	FieldValue<float> CraftingSkillField() { return { this, "UPrimalItem.CraftingSkill" }; }
	FieldValue<FString> CustomItemNameField() { return { this, "UPrimalItem.CustomItemName" }; }
	FieldValue<FString> CustomItemDescriptionField() { return { this, "UPrimalItem.CustomItemDescription" }; }
	FieldValue<TArray<FColor>> CustomColorsField() { return { this, "UPrimalItem.CustomColors" }; }
	FieldValue<TArray<FCraftingResourceRequirement>> CustomResourceRequirementsField() { return { this, "UPrimalItem.CustomResourceRequirements" }; }
	FieldValue<long double> NextCraftCompletionTimeField() { return { this, "UPrimalItem.NextCraftCompletionTime" }; }
	FieldValue<TWeakObjectPtr<UPrimalInventoryComponent>> OwnerInventoryField() { return { this, "UPrimalItem.OwnerInventory" }; }
	FieldValue<char> ItemQualityIndexField() { return { this, "UPrimalItem.ItemQualityIndex" }; }
	FieldValue<TSubclassOf<UPrimalItem>> SupportDragOntoItemClassField() { return { this, "UPrimalItem.SupportDragOntoItemClass" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> SupportDragOntoItemClassesField() { return { this, "UPrimalItem.SupportDragOntoItemClasses" }; }
	FieldValue<TArray<TSubclassOf<AShooterWeapon>>> SkinWeaponTemplatesField() { return { this, "UPrimalItem.SkinWeaponTemplates" }; }
	FieldValue<TSubclassOf<AShooterWeapon>> AmmoSupportDragOntoWeaponItemWeaponTemplateField() { return { this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplate" }; }
	FieldValue<TArray<TSubclassOf<AShooterWeapon>>> AmmoSupportDragOntoWeaponItemWeaponTemplatesField() { return { this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplates" }; }
	FieldValue<float> Ingredient_WeightIncreasePerQuantityField() { return { this, "UPrimalItem.Ingredient_WeightIncreasePerQuantity" }; }
	FieldValue<float> Ingredient_FoodIncreasePerQuantityField() { return { this, "UPrimalItem.Ingredient_FoodIncreasePerQuantity" }; }
	FieldValue<float> Ingredient_HealthIncreasePerQuantityField() { return { this, "UPrimalItem.Ingredient_HealthIncreasePerQuantity" }; }
	FieldValue<float> Ingredient_WaterIncreasePerQuantityField() { return { this, "UPrimalItem.Ingredient_WaterIncreasePerQuantity" }; }
	FieldValue<float> Ingredient_StaminaIncreasePerQuantityField() { return { this, "UPrimalItem.Ingredient_StaminaIncreasePerQuantity" }; }
	FieldValue<FString> DescriptiveNameBaseField() { return { this, "UPrimalItem.DescriptiveNameBase" }; }
	FieldValue<FString> ItemDescriptionField() { return { this, "UPrimalItem.ItemDescription" }; }
	FieldValue<FString> DurabilityStringShortField() { return { this, "UPrimalItem.DurabilityStringShort" }; }
	FieldValue<FString> DurabilityStringField() { return { this, "UPrimalItem.DurabilityString" }; }
	FieldValue<float> DroppedItemLifeSpanOverrideField() { return { this, "UPrimalItem.DroppedItemLifeSpanOverride" }; }
	FieldValue<UStaticMesh *> DroppedMeshOverrideField() { return { this, "UPrimalItem.DroppedMeshOverride" }; }
	FieldValue<UMaterialInterface *> DroppedMeshMaterialOverrideField() { return { this, "UPrimalItem.DroppedMeshMaterialOverride" }; }
	FieldValue<FVector> DroppedMeshOverrideScale3DField() { return { this, "UPrimalItem.DroppedMeshOverrideScale3D" }; }
	FieldValue<TSubclassOf<UPrimalItem>> SpoilingItemField() { return { this, "UPrimalItem.SpoilingItem" }; }
	FieldValue<TArray<TSubclassOf<AActor>>> UseRequiresOwnerActorClassesField() { return { this, "UPrimalItem.UseRequiresOwnerActorClasses" }; }
	FieldValue<TSubclassOf<UPrimalItem>> PreservingItemClassField() { return { this, "UPrimalItem.PreservingItemClass" }; }
	FieldValue<float> PreservingItemSpoilingTimeMultiplierField() { return { this, "UPrimalItem.PreservingItemSpoilingTimeMultiplier" }; }
	FieldValue<float> SpoilingTimeField() { return { this, "UPrimalItem.SpoilingTime" }; }
	FieldValue<int> CraftingConsumesDurabilityField() { return { this, "UPrimalItem.CraftingConsumesDurability" }; }
	FieldValue<float> RepairResourceRequirementMultiplierField() { return { this, "UPrimalItem.RepairResourceRequirementMultiplier" }; }
	FieldValue<float> BaseItemWeightField() { return { this, "UPrimalItem.BaseItemWeight" }; }
	FieldValue<float> DurabilityIncreaseMultiplierField() { return { this, "UPrimalItem.DurabilityIncreaseMultiplier" }; }
	FieldValue<float> NewItemDurabilityOverrideField() { return { this, "UPrimalItem.NewItemDurabilityOverride" }; }
	FieldValue<float> DurabilityDecreaseMultiplierField() { return { this, "UPrimalItem.DurabilityDecreaseMultiplier" }; }
	FieldValue<float> UseDecreaseDurabilityField() { return { this, "UPrimalItem.UseDecreaseDurability" }; }
	FieldValue<float> AutoDurabilityDecreaseIntervalField() { return { this, "UPrimalItem.AutoDurabilityDecreaseInterval" }; }
	FieldValue<float> AutoDecreaseMinDurabilityField() { return { this, "UPrimalItem.AutoDecreaseMinDurability" }; }
	FieldValue<float> AutoDecreaseDurabilityAmountPerIntervalField() { return { this, "UPrimalItem.AutoDecreaseDurabilityAmountPerInterval" }; }
	FieldValue<float> UseDecreaseDurabilityMinField() { return { this, "UPrimalItem.UseDecreaseDurabilityMin" }; }
	FieldValue<float> UseMinDurabilityRequirementField() { return { this, "UPrimalItem.UseMinDurabilityRequirement" }; }
	FieldValue<float> ResourceRarityField() { return { this, "UPrimalItem.ResourceRarity" }; }
	FieldValue<float> BlueprintTimeToCraftField() { return { this, "UPrimalItem.BlueprintTimeToCraft" }; }
	FieldValue<float> MinBlueprintTimeToCraftField() { return { this, "UPrimalItem.MinBlueprintTimeToCraft" }; }
	FieldValue<float> BlueprintWeightField() { return { this, "UPrimalItem.BlueprintWeight" }; }
	FieldValue<float> MinimumUseIntervalField() { return { this, "UPrimalItem.MinimumUseInterval" }; }
	FieldValue<float> TimeForFullRepairField() { return { this, "UPrimalItem.TimeForFullRepair" }; }
	FieldValue<float> BaseCraftingXPField() { return { this, "UPrimalItem.BaseCraftingXP" }; }
	FieldValue<float> BaseRepairingXPField() { return { this, "UPrimalItem.BaseRepairingXP" }; }
	FieldValue<TArray<FCraftingResourceRequirement>> BaseCraftingResourceRequirementsField() { return { this, "UPrimalItem.BaseCraftingResourceRequirements" }; }
	FieldValue<TArray<FCraftingResourceRequirement>> OverrideRepairingRequirementsField() { return { this, "UPrimalItem.OverrideRepairingRequirements" }; }
	FieldArray<FItemStatInfo, 8> ItemStatInfosField() { return { this, "UPrimalItem.ItemStatInfos" }; }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return { this, "UPrimalItem.ItemStatValues" }; }
	FieldValue<unsigned int> WeaponClipAmmoField() { return { this, "UPrimalItem.WeaponClipAmmo" }; }
	FieldValue<float> WeaponFrequencyField() { return { this, "UPrimalItem.WeaponFrequency" }; }
	FieldValue<long double> LastTimeToShowInfoField() { return { this, "UPrimalItem.LastTimeToShowInfo" }; }
	FieldValue<char> ItemVersionField() { return { this, "UPrimalItem.ItemVersion" }; }
	FieldValue<float> ItemDurabilityField() { return { this, "UPrimalItem.ItemDurability" }; }
	FieldValue<float> MinItemDurabilityField() { return { this, "UPrimalItem.MinItemDurability" }; }
	FieldValue<float> SavedDurabilityField() { return { this, "UPrimalItem.SavedDurability" }; }
	FieldValue<TSubclassOf<AShooterWeapon>> WeaponTemplateField() { return { this, "UPrimalItem.WeaponTemplate" }; }
	FieldValue<UTexture2D *> BrokenIconField() { return { this, "UPrimalItem.BrokenIcon" }; }
	FieldValue<UTexture2D *> ItemIconField() { return { this, "UPrimalItem.ItemIcon" }; }
	FieldValue<UTexture2D *> AlternateItemIconBelowDurabilityField() { return { this, "UPrimalItem.AlternateItemIconBelowDurability" }; }
	FieldValue<float> AlternateItemIconBelowDurabilityValueField() { return { this, "UPrimalItem.AlternateItemIconBelowDurabilityValue" }; }
	FieldValue<UMaterialInterface *> ItemIconMaterialParentField() { return { this, "UPrimalItem.ItemIconMaterialParent" }; }
	FieldArray<__int16, 6> ItemColorIDField() { return { this, "UPrimalItem.ItemColorID" }; }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return { this, "UPrimalItem.PreSkinItemColorID" }; }
	FieldArray<char, 6> bUseItemColorField() { return { this, "UPrimalItem.bUseItemColor" }; }
	FieldValue<int> ItemQuantityField() { return { this, "UPrimalItem.ItemQuantity" }; }
	FieldValue<int> MaxItemQuantityField() { return { this, "UPrimalItem.MaxItemQuantity" }; }
	FieldValue<TArray<unsigned __int64>> SteamItemUserIDsField() { return { this, "UPrimalItem.SteamItemUserIDs" }; }
	FieldValue<TSubclassOf<APrimalStructure>> StructureToBuildField() { return { this, "UPrimalItem.StructureToBuild" }; }
	FieldValue<TSubclassOf<UPrimalItem>> GiveItemWhenUsedField() { return { this, "UPrimalItem.GiveItemWhenUsed" }; }
	FieldValue<TArray<TSubclassOf<UPrimalInventoryComponent>>> CraftingRequiresInventoryComponentField() { return { this, "UPrimalItem.CraftingRequiresInventoryComponent" }; }
	FieldValue<TSubclassOf<ADroppedItem>> DroppedItemTemplateOverrideField() { return { this, "UPrimalItem.DroppedItemTemplateOverride" }; }
	FieldValue<TSubclassOf<ADroppedItem>> DroppedItemTemplateForSecondryActionField() { return { this, "UPrimalItem.DroppedItemTemplateForSecondryAction" }; }
	FieldValue<TSubclassOf<APrimalBuff>> BuffToGiveOwnerCharacterField() { return { this, "UPrimalItem.BuffToGiveOwnerCharacter" }; }
	FieldValue<FRotator> PreviewCameraRotationField() { return { this, "UPrimalItem.PreviewCameraRotation" }; }
	FieldValue<FVector> PreviewCameraPivotOffsetField() { return { this, "UPrimalItem.PreviewCameraPivotOffset" }; }
	FieldValue<float> PreviewCameraDistanceScaleFactorField() { return { this, "UPrimalItem.PreviewCameraDistanceScaleFactor" }; }
	FieldValue<float> PreviewCameraDefaultZoomMultiplierField() { return { this, "UPrimalItem.PreviewCameraDefaultZoomMultiplier" }; }
	FieldValue<float> PreviewCameraMaxZoomMultiplierField() { return { this, "UPrimalItem.PreviewCameraMaxZoomMultiplier" }; }
	FieldValue<FName> PlayerMeshTextureMaskParamNameField() { return { this, "UPrimalItem.PlayerMeshTextureMaskParamName" }; }
	FieldValue<UTexture2D *> PlayerMeshTextureMaskField() { return { this, "UPrimalItem.PlayerMeshTextureMask" }; }
	FieldValue<UTexture2D *> PlayerMeshNoItemDefaultTextureMaskField() { return { this, "UPrimalItem.PlayerMeshNoItemDefaultTextureMask" }; }
	FieldValue<int> PlayerMeshTextureMaskMaterialIndexField() { return { this, "UPrimalItem.PlayerMeshTextureMaskMaterialIndex" }; }
	FieldValue<FName> FPVHandsMeshTextureMaskParamNameField() { return { this, "UPrimalItem.FPVHandsMeshTextureMaskParamName" }; }
	FieldValue<UTexture2D *> FPVHandsMeshTextureMaskField() { return { this, "UPrimalItem.FPVHandsMeshTextureMask" }; }
	FieldValue<int> FPVHandsMeshTextureMaskMaterialIndexField() { return { this, "UPrimalItem.FPVHandsMeshTextureMaskMaterialIndex" }; }
	FieldValue<UPrimalItem *> WeaponAmmoOverrideItemCDOField() { return { this, "UPrimalItem.WeaponAmmoOverrideItemCDO" }; }
	FieldValue<long double> CreationTimeField() { return { this, "UPrimalItem.CreationTime" }; }
	FieldValue<long double> LastAutoDurabilityDecreaseTimeField() { return { this, "UPrimalItem.LastAutoDurabilityDecreaseTime" }; }
	FieldValue<long double> LastUseTimeField() { return { this, "UPrimalItem.LastUseTime" }; }
	FieldValue<long double> LastLocalUseTimeField() { return { this, "UPrimalItem.LastLocalUseTime" }; }
	FieldValue<int> TempSlotIndexField() { return { this, "UPrimalItem.TempSlotIndex" }; }
	FieldValue<TWeakObjectPtr<AShooterWeapon>> AssociatedWeaponField() { return { this, "UPrimalItem.AssociatedWeapon" }; }
	FieldValue<UPrimalItem *> MyItemSkinField() { return { this, "UPrimalItem.MyItemSkin" }; }
	FieldValue<TWeakObjectPtr<AShooterCharacter>> LastOwnerPlayerField() { return { this, "UPrimalItem.LastOwnerPlayer" }; }
	FieldValue<float> CropGrowingFertilizerConsumptionRateField() { return { this, "UPrimalItem.CropGrowingFertilizerConsumptionRate" }; }
	FieldValue<float> CropMaxFruitFertilizerConsumptionRateField() { return { this, "UPrimalItem.CropMaxFruitFertilizerConsumptionRate" }; }
	FieldValue<float> CropGrowingWaterConsumptionRateField() { return { this, "UPrimalItem.CropGrowingWaterConsumptionRate" }; }
	FieldValue<float> CropMaxFruitWaterConsumptionRateField() { return { this, "UPrimalItem.CropMaxFruitWaterConsumptionRate" }; }
	FieldValue<int> CropMaxFruitsField() { return { this, "UPrimalItem.CropMaxFruits" }; }
	FieldValue<float> CropNoFertilizerOrWaterCacheReductionRateField() { return { this, "UPrimalItem.CropNoFertilizerOrWaterCacheReductionRate" }; }
	FieldValue<float> FertilizerEffectivenessMultiplierField() { return { this, "UPrimalItem.FertilizerEffectivenessMultiplier" }; }
	FieldValue<float> EggAlertDinosAggroAmountField() { return { this, "UPrimalItem.EggAlertDinosAggroAmount" }; }
	FieldValue<float> EggAlertDinosAggroRadiusField() { return { this, "UPrimalItem.EggAlertDinosAggroRadius" }; }
	FieldValue<TArray<FName>> EggAlertDinosAggroTagsField() { return { this, "UPrimalItem.EggAlertDinosAggroTags" }; }
	FieldValue<float> EggAlertDinosForcedAggroTimeField() { return { this, "UPrimalItem.EggAlertDinosForcedAggroTime" }; }
	FieldValue<float> EggMaximumDistanceFromOriginalDropToAlertDinosField() { return { this, "UPrimalItem.EggMaximumDistanceFromOriginalDropToAlertDinos" }; }
	FieldValue<TSubclassOf<UPrimalItem>> BrokenGiveItemClassField() { return { this, "UPrimalItem.BrokenGiveItemClass" }; }
	FieldValue<float> ClearColorDurabilityThresholdField() { return { this, "UPrimalItem.ClearColorDurabilityThreshold" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ItemClassToUseAsInitialCustomDataField() { return { this, "UPrimalItem.ItemClassToUseAsInitialCustomData" }; }
	FieldValue<FVector> OriginalItemDropLocationField() { return { this, "UPrimalItem.OriginalItemDropLocation" }; }
	FieldValue<FLinearColor> DurabilityBarColorForegroundField() { return { this, "UPrimalItem.DurabilityBarColorForeground" }; }
	FieldValue<FLinearColor> DurabilityBarColorBackgroundField() { return { this, "UPrimalItem.DurabilityBarColorBackground" }; }
	FieldValue<TSubclassOf<UPrimalItem>> OverrideCooldownTimeItemClassField() { return { this, "UPrimalItem.OverrideCooldownTimeItemClass" }; }
	FieldValue<float> MinDurabilityForCraftingResourceField() { return { this, "UPrimalItem.MinDurabilityForCraftingResource" }; }
	FieldValue<float> ResourceRequirementIncreaseRatingPowerField() { return { this, "UPrimalItem.ResourceRequirementIncreaseRatingPower" }; }
	FieldValue<float> ResourceRequirementRatingScaleField() { return { this, "UPrimalItem.ResourceRequirementRatingScale" }; }
	FieldValue<float> ResourceRequirementRatingIncreasePercentageField() { return { this, "UPrimalItem.ResourceRequirementRatingIncreasePercentage" }; }
	FieldValue<long double> NextSpoilingTimeField() { return { this, "UPrimalItem.NextSpoilingTime" }; }
	FieldValue<long double> LastSpoilingTimeField() { return { this, "UPrimalItem.LastSpoilingTime" }; }
	FieldValue<TArray<FString>> DefaultFolderPathsField() { return { this, "UPrimalItem.DefaultFolderPaths" }; }
	FieldValue<FString> ItemRatingStringField() { return { this, "UPrimalItem.ItemRatingString" }; }
	FieldValue<FName> DefaultWeaponMeshNameField() { return { this, "UPrimalItem.DefaultWeaponMeshName" }; }
	FieldValue<int> LastCalculatedTotalAmmoInvUpdatedFrameField() { return { this, "UPrimalItem.LastCalculatedTotalAmmoInvUpdatedFrame" }; }
	FieldValue<int> WeaponTotalAmmoField() { return { this, "UPrimalItem.WeaponTotalAmmo" }; }
	FieldValue<TSubclassOf<UPrimalItem>> EngramRequirementItemClassOverrideField() { return { this, "UPrimalItem.EngramRequirementItemClassOverride" }; }
	FieldValue<TArray<unsigned short>> CraftingResourceRequirementsField() { return { this, "UPrimalItem.CraftingResourceRequirements" }; }
	FieldValue<USoundBase *> ExtraThrowItemSoundField() { return { this, "UPrimalItem.ExtraThrowItemSound" }; }
	FieldValue<FVector> SpawnOnWaterEncroachmentBoxExtentField() { return { this, "UPrimalItem.SpawnOnWaterEncroachmentBoxExtent" }; }
	FieldValue<TArray<TSubclassOf<AActor>>> OnlyUsableOnSpecificClassesField() { return { this, "UPrimalItem.OnlyUsableOnSpecificClasses" }; }
	FieldValue<TArray<FSaddlePassengerSeatDefinition>> SaddlePassengerSeatsField() { return { this, "UPrimalItem.SaddlePassengerSeats" }; }
	FieldValue<FName> SaddleOverrideRiderSocketNameField() { return { this, "UPrimalItem.SaddleOverrideRiderSocketName" }; }
	FieldValue<TSubclassOf<APrimalDinoCharacter>> EggDinoClassToSpawnField() { return { this, "UPrimalItem.EggDinoClassToSpawn" }; }
	FieldArray<char, 12> EggNumberOfLevelUpPointsAppliedField() { return { this, "UPrimalItem.EggNumberOfLevelUpPointsApplied" }; }
	FieldValue<float> EggTamedIneffectivenessModifierField() { return { this, "UPrimalItem.EggTamedIneffectivenessModifier" }; }
	FieldArray<char, 6> EggColorSetIndicesField() { return { this, "UPrimalItem.EggColorSetIndices" }; }
	FieldValue<float> EggLoseDurabilityPerSecondField() { return { this, "UPrimalItem.EggLoseDurabilityPerSecond" }; }
	FieldValue<float> ExtraEggLoseDurabilityPerSecondMultiplierField() { return { this, "UPrimalItem.ExtraEggLoseDurabilityPerSecondMultiplier" }; }
	FieldValue<float> EggMinTemperatureField() { return { this, "UPrimalItem.EggMinTemperature" }; }
	FieldValue<float> EggMaxTemperatureField() { return { this, "UPrimalItem.EggMaxTemperature" }; }
	FieldValue<float> EggDroppedInvalidTempLoseItemRatingSpeedField() { return { this, "UPrimalItem.EggDroppedInvalidTempLoseItemRatingSpeed" }; }
	FieldValue<USoundBase *> ShieldHitSoundField() { return { this, "UPrimalItem.ShieldHitSound" }; }
	FieldValue<float> RecipeCraftingSkillScaleField() { return { this, "UPrimalItem.RecipeCraftingSkillScale" }; }
	FieldValue<int> CustomItemIDField() { return { this, "UPrimalItem.CustomItemID" }; }
	FieldValue<float> AddDinoTargetingRangeField() { return { this, "UPrimalItem.AddDinoTargetingRange" }; }
	FieldValue<float> DamageTorpidityArmorRatingField() { return { this, "UPrimalItem.DamageTorpidityArmorRating" }; }
	FieldValue<float> IndirectTorpidityArmorRatingField() { return { this, "UPrimalItem.IndirectTorpidityArmorRating" }; }
	FieldValue<FName> UseParticleEffectSocketNameField() { return { this, "UPrimalItem.UseParticleEffectSocketName" }; }
	FieldValue<float> UseGiveDinoTameAffinityPercentField() { return { this, "UPrimalItem.UseGiveDinoTameAffinityPercent" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> CraftingAdditionalItemsToGiveField() { return { this, "UPrimalItem.CraftingAdditionalItemsToGive" }; }
	FieldValue<int> LastValidItemVersionField() { return { this, "UPrimalItem.LastValidItemVersion" }; }
	FieldValue<float> GlobalTameAffinityMultiplierField() { return { this, "UPrimalItem.GlobalTameAffinityMultiplier" }; }
	FieldValue<int> CraftingGiveItemCountField() { return { this, "UPrimalItem.CraftingGiveItemCount" }; }
	FieldValue<int> CraftingGivesItemQuantityOverrideField() { return { this, "UPrimalItem.CraftingGivesItemQuantityOverride" }; }
	FieldValue<USoundBase *> UseItemOnItemSoundField() { return { this, "UPrimalItem.UseItemOnItemSound" }; }
	FieldValue<FName> UseUnlocksEmoteNameField() { return { this, "UPrimalItem.UseUnlocksEmoteName" }; }
	FieldValue<long double> ClusterSpoilingTimeUTCField() { return { this, "UPrimalItem.ClusterSpoilingTimeUTC" }; }
	FieldValue<TArray<FDinoAncestorsEntry>> EggDinoAncestorsField() { return { this, "UPrimalItem.EggDinoAncestors" }; }
	FieldValue<TArray<FDinoAncestorsEntry>> EggDinoAncestorsMaleField() { return { this, "UPrimalItem.EggDinoAncestorsMale" }; }
	FieldValue<int> EggRandomMutationsFemaleField() { return { this, "UPrimalItem.EggRandomMutationsFemale" }; }
	FieldValue<int> EggRandomMutationsMaleField() { return { this, "UPrimalItem.EggRandomMutationsMale" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> EquippingRequiresEngramsField() { return { this, "UPrimalItem.EquippingRequiresEngrams" }; }
	FieldValue<TArray<FCustomItemData>> CustomItemDatasField() { return { this, "UPrimalItem.CustomItemDatas" }; }
	FieldValue<FString> OverrideUseStringField() { return { this, "UPrimalItem.OverrideUseString" }; }
	FieldValue<TSubclassOf<UPrimalItem>> SendToClientClassOverrideField() { return { this, "UPrimalItem.SendToClientClassOverride" }; }
	FieldValue<FString> CrafterCharacterNameField() { return { this, "UPrimalItem.CrafterCharacterName" }; }
	FieldValue<FString> CrafterTribeNameField() { return { this, "UPrimalItem.CrafterTribeName" }; }
	FieldValue<float> CraftedSkillBonusField() { return { this, "UPrimalItem.CraftedSkillBonus" }; }
	FieldValue<float> CraftingSkillQualityMultiplierMinField() { return { this, "UPrimalItem.CraftingSkillQualityMultiplierMin" }; }
	FieldValue<float> CraftingSkillQualityMultiplierMaxField() { return { this, "UPrimalItem.CraftingSkillQualityMultiplierMax" }; }
	FieldValue<float> SinglePlayerCraftingSpeedMultiplierField() { return { this, "UPrimalItem.SinglePlayerCraftingSpeedMultiplier" }; }
	FieldValue<int> NoLevelEngramSortingPriorityField() { return { this, "UPrimalItem.NoLevelEngramSortingPriority" }; }
	FieldValue<int> CustomFlagsField() { return { this, "UPrimalItem.CustomFlags" }; }
	FieldValue<FName> CustomTagField() { return { this, "UPrimalItem.CustomTag" }; }
	FieldValue<float> EquippedReduceDurabilityIntervalField() { return { this, "UPrimalItem.EquippedReduceDurabilityInterval" }; }
	FieldValue<long double> LastEquippedReduceDurabilityTimeField() { return { this, "UPrimalItem.LastEquippedReduceDurabilityTime" }; }
	FieldValue<float> EquippedReduceDurabilityPerIntervalField() { return { this, "UPrimalItem.EquippedReduceDurabilityPerInterval" }; }
	FieldValue<float> MaxDurabiltiyOverrideField() { return { this, "UPrimalItem.MaxDurabiltiyOverride" }; }
	FieldValue<long double> LastItemAdditionTimeField() { return { this, "UPrimalItem.LastItemAdditionTime" }; }
	FieldValue<long double> UploadEarliestValidTimeField() { return { this, "UPrimalItem.UploadEarliestValidTime" }; }
	FieldValue<float> NextRepairPercentageField() { return { this, "UPrimalItem.NextRepairPercentage" }; }
	FieldValue<UStaticMesh *> NetDroppedMeshOverrideField() { return { this, "UPrimalItem.NetDroppedMeshOverride" }; }
	FieldValue<UMaterialInterface *> NetDroppedMeshMaterialOverrideField() { return { this, "UPrimalItem.NetDroppedMeshMaterialOverride" }; }
	FieldValue<FVector> NetDroppedMeshOverrideScale3DField() { return { this, "UPrimalItem.NetDroppedMeshOverrideScale3D" }; }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bCanBuildStructures() { return { this, "UPrimalItem.bCanBuildStructures" }; }
	BitFieldValue<bool, unsigned __int32> bAllowEquppingItem() { return { this, "UPrimalItem.bAllowEquppingItem" }; }
	BitFieldValue<bool, unsigned __int32> bAllowInventoryItem() { return { this, "UPrimalItem.bAllowInventoryItem" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "UPrimalItem.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bEquippedItem() { return { this, "UPrimalItem.bEquippedItem" }; }
	BitFieldValue<bool, unsigned __int32> bCanSlot() { return { this, "UPrimalItem.bCanSlot" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemColors() { return { this, "UPrimalItem.bUseItemColors" }; }
	BitFieldValue<bool, unsigned __int32> bForceDediAttachments() { return { this, "UPrimalItem.bForceDediAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCustomColors() { return { this, "UPrimalItem.bAllowCustomColors" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowRemovalWhenDead() { return { this, "UPrimalItem.bForceAllowRemovalWhenDead" }; }
	BitFieldValue<bool, unsigned __int32> bAutoCraftBlueprint() { return { this, "UPrimalItem.bAutoCraftBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay() { return { this, "UPrimalItem.bHideFromInventoryDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemStats() { return { this, "UPrimalItem.bUseItemStats" }; }
	BitFieldValue<bool, unsigned __int32> bUseSpawnActorWhenRiding() { return { this, "UPrimalItem.bUseSpawnActorWhenRiding" }; }
	BitFieldValue<bool, unsigned __int32> bUseSpawnActor() { return { this, "UPrimalItem.bUseSpawnActor" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDefaultCharacterAttachment() { return { this, "UPrimalItem.bAllowDefaultCharacterAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemDurability() { return { this, "UPrimalItem.bUseItemDurability" }; }
	BitFieldValue<bool, unsigned __int32> bNewWeaponAutoFillClipAmmo() { return { this, "UPrimalItem.bNewWeaponAutoFillClipAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyBrokenItem() { return { this, "UPrimalItem.bDestroyBrokenItem" }; }
	BitFieldValue<bool, unsigned __int32> bThrowOnHotKeyUse() { return { this, "UPrimalItem.bThrowOnHotKeyUse" }; }
	BitFieldValue<bool, unsigned __int32> bIsBlueprint() { return { this, "UPrimalItem.bIsBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeBlueprint() { return { this, "UPrimalItem.bCanBeBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUpload() { return { this, "UPrimalItem.bPreventUpload" }; }
	BitFieldValue<bool, unsigned __int32> bIsEngram() { return { this, "UPrimalItem.bIsEngram" }; }
	BitFieldValue<bool, unsigned __int32> bIsCustomRecipe() { return { this, "UPrimalItem.bIsCustomRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsFoodRecipe() { return { this, "UPrimalItem.bIsFoodRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bTekItem() { return { this, "UPrimalItem.bTekItem" }; }
	BitFieldValue<bool, unsigned __int32> bAllowUseInInventory() { return { this, "UPrimalItem.bAllowUseInInventory" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemoteUseInInventory() { return { this, "UPrimalItem.bAllowRemoteUseInInventory" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintEquippedNotifications() { return { this, "UPrimalItem.bUseBlueprintEquippedNotifications" }; }
	BitFieldValue<bool, unsigned __int32> bUseInWaterRestoreDurability() { return { this, "UPrimalItem.bUseInWaterRestoreDurability" }; }
	BitFieldValue<bool, unsigned __int32> bValidCraftingResource() { return { this, "UPrimalItem.bValidCraftingResource" }; }
	BitFieldValue<bool, unsigned __int32> bDurabilityRequirementIgnoredInWater() { return { this, "UPrimalItem.bDurabilityRequirementIgnoredInWater" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRepair() { return { this, "UPrimalItem.bAllowRepair" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory() { return { this, "UPrimalItem.bAllowRemovalFromInventory" }; }
	BitFieldValue<bool, unsigned __int32> bFromSteamInventory() { return { this, "UPrimalItem.bFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory() { return { this, "UPrimalItem.bIsFromAllClustersInventory" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeItemOnUse() { return { this, "UPrimalItem.bConsumeItemOnUse" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyCanUseInWater() { return { this, "UPrimalItem.bOnlyCanUseInWater" }; }
	BitFieldValue<bool, unsigned __int32> bCanUseSwimming() { return { this, "UPrimalItem.bCanUseSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bIsDescriptionOnlyItem() { return { this, "UPrimalItem.bIsDescriptionOnlyItem" }; }
	BitFieldValue<bool, unsigned __int32> bRestoreDurabilityWhenColorized() { return { this, "UPrimalItem.bRestoreDurabilityWhenColorized" }; }
	BitFieldValue<bool, unsigned __int32> bAppendPrimaryColorToName() { return { this, "UPrimalItem.bAppendPrimaryColorToName" }; }
	BitFieldValue<bool, unsigned __int32> bUseScaleStatEffectivenessByDurability() { return { this, "UPrimalItem.bUseScaleStatEffectivenessByDurability" }; }
	BitFieldValue<bool, unsigned __int32> bUsesCreationTime() { return { this, "UPrimalItem.bUsesCreationTime" }; }
	BitFieldValue<bool, unsigned __int32> bAllowUseWhileRiding() { return { this, "UPrimalItem.bAllowUseWhileRiding" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceAtFullDurability() { return { this, "UPrimalItem.bPreventCraftingResourceAtFullDurability" }; }
	BitFieldValue<bool, unsigned __int32> bGiveItemWhenUsedCopyItemStats() { return { this, "UPrimalItem.bGiveItemWhenUsedCopyItemStats" }; }
	BitFieldValue<bool, unsigned __int32> bHideFromRemoteInventoryDisplay() { return { this, "UPrimalItem.bHideFromRemoteInventoryDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bAutoDecreaseDurabilityOverTime() { return { this, "UPrimalItem.bAutoDecreaseDurabilityOverTime" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDragOntoOtherItemIfSameCustomData() { return { this, "UPrimalItem.bPreventDragOntoOtherItemIfSameCustomData" }; }
	BitFieldValue<bool, unsigned __int32> bUseOnItemWeaponRemoveClipAmmo() { return { this, "UPrimalItem.bUseOnItemWeaponRemoveClipAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bUseOnItemSetIndexAsDestinationItemCustomData() { return { this, "UPrimalItem.bUseOnItemSetIndexAsDestinationItemCustomData" }; }
	BitFieldValue<bool, unsigned __int32> bSupportDragOntoOtherItem() { return { this, "UPrimalItem.bSupportDragOntoOtherItem" }; }
	BitFieldValue<bool, unsigned __int32> bIsItemSkin() { return { this, "UPrimalItem.bIsItemSkin" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinIgnoreSkinIcon() { return { this, "UPrimalItem.bItemSkinIgnoreSkinIcon" }; }
	BitFieldValue<bool, unsigned __int32> bPickupEggAlertsDinos() { return { this, "UPrimalItem.bPickupEggAlertsDinos" }; }
	BitFieldValue<bool, unsigned __int32> bHideCustomDescription() { return { this, "UPrimalItem.bHideCustomDescription" }; }
	BitFieldValue<bool, unsigned __int32> bCopyCustomDescriptionIntoSpoiledItem() { return { this, "UPrimalItem.bCopyCustomDescriptionIntoSpoiledItem" }; }
	BitFieldValue<bool, unsigned __int32> bCopyDurabilityIntoSpoiledItem() { return { this, "UPrimalItem.bCopyDurabilityIntoSpoiledItem" }; }
	BitFieldValue<bool, unsigned __int32> bCraftedRequestCustomItemDescription() { return { this, "UPrimalItem.bCraftedRequestCustomItemDescription" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedItem() { return { this, "UPrimalItem.bInitializedItem" }; }
	BitFieldValue<bool, unsigned __int32> bIsDroppedItem() { return { this, "UPrimalItem.bIsDroppedItem" }; }
	BitFieldValue<bool, unsigned __int32> bEggIsTooCold() { return { this, "UPrimalItem.bEggIsTooCold" }; }
	BitFieldValue<bool, unsigned __int32> bEggIsTooHot() { return { this, "UPrimalItem.bEggIsTooHot" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventUseOntoItem() { return { this, "UPrimalItem.bUseBPPreventUseOntoItem" }; }
	BitFieldValue<bool, unsigned __int32> bSkinDisableWhenSubmerged() { return { this, "UPrimalItem.bSkinDisableWhenSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bIsAbstractItem() { return { this, "UPrimalItem.bIsAbstractItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventItemSkins() { return { this, "UPrimalItem.bPreventItemSkins" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyCanUseInFalling() { return { this, "UPrimalItem.bOnlyCanUseInFalling" }; }
	BitFieldValue<bool, unsigned __int32> bForceDropDestruction() { return { this, "UPrimalItem.bForceDropDestruction" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeArkTributeItem() { return { this, "UPrimalItem.bCanBeArkTributeItem" }; }
	BitFieldValue<bool, unsigned __int32> bAllowInvalidItemVersion() { return { this, "UPrimalItem.bAllowInvalidItemVersion" }; }
	BitFieldValue<bool, unsigned __int32> bUseSpawnActorRelativeLoc() { return { this, "UPrimalItem.bUseSpawnActorRelativeLoc" }; }
	BitFieldValue<bool, unsigned __int32> bUseSpawnActorTakeOwnerRotation() { return { this, "UPrimalItem.bUseSpawnActorTakeOwnerRotation" }; }
	BitFieldValue<bool, unsigned __int32> bUseEquippedItemBlueprintTick() { return { this, "UPrimalItem.bUseEquippedItemBlueprintTick" }; }
	BitFieldValue<bool, unsigned __int32> bUseEquippedItemNativeTick() { return { this, "UPrimalItem.bUseEquippedItemNativeTick" }; }
	BitFieldValue<bool, unsigned __int32> bSpawnActorOnWaterOnly() { return { this, "UPrimalItem.bSpawnActorOnWaterOnly" }; }
	BitFieldValue<bool, unsigned __int32> bAutoTameSpawnedActor() { return { this, "UPrimalItem.bAutoTameSpawnedActor" }; }
	BitFieldValue<bool, unsigned __int32> bShowItemRatingAsPercent() { return { this, "UPrimalItem.bShowItemRatingAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bPreventArmorDurabiltyConsumption() { return { this, "UPrimalItem.bPreventArmorDurabiltyConsumption" }; }
	BitFieldValue<bool, unsigned __int32> bIsEgg() { return { this, "UPrimalItem.bIsEgg" }; }
	BitFieldValue<bool, unsigned __int32> bIsCookingIngredient() { return { this, "UPrimalItem.bIsCookingIngredient" }; }
	BitFieldValue<bool, unsigned __int32> bDragClearDyedItem() { return { this, "UPrimalItem.bDragClearDyedItem" }; }
	BitFieldValue<bool, unsigned __int32> bDeprecateItem() { return { this, "UPrimalItem.bDeprecateItem" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedRecipeStats() { return { this, "UPrimalItem.bInitializedRecipeStats" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalWeaponTemplate() { return { this, "UPrimalItem.bItemSkinKeepOriginalWeaponTemplate" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalIcon() { return { this, "UPrimalItem.bItemSkinKeepOriginalIcon" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintEvents() { return { this, "UPrimalItem.bItemSkinReceiveOwnerEquippedBlueprintEvents" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintTick() { return { this, "UPrimalItem.bItemSkinReceiveOwnerEquippedBlueprintTick" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinAllowEquipping() { return { this, "UPrimalItem.bItemSkinAllowEquipping" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisplayInInventory() { return { this, "UPrimalItem.bForceDisplayInInventory" }; }
	BitFieldValue<bool, unsigned __int32> bDroppedItemAllowDinoPickup() { return { this, "UPrimalItem.bDroppedItemAllowDinoPickup" }; }
	BitFieldValue<bool, unsigned __int32> bCraftDontActuallyGiveItem() { return { this, "UPrimalItem.bCraftDontActuallyGiveItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUseWhenSleeping() { return { this, "UPrimalItem.bPreventUseWhenSleeping" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideRepairingRequirements() { return { this, "UPrimalItem.bOverrideRepairingRequirements" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseItemAddCharacterStatsOnDinos() { return { this, "UPrimalItem.bForceUseItemAddCharacterStatsOnDinos" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyEquipWhenUnconscious() { return { this, "UPrimalItem.bOnlyEquipWhenUnconscious" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventConsumableWhileHandcuffed() { return { this, "UPrimalItem.bForcePreventConsumableWhileHandcuffed" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideExactClassCraftingRequirement() { return { this, "UPrimalItem.bOverrideExactClassCraftingRequirement" }; }
	BitFieldValue<bool, unsigned __int32> bPreventConsumeItemOnDrag() { return { this, "UPrimalItem.bPreventConsumeItemOnDrag" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowGrinding() { return { this, "UPrimalItem.bForceAllowGrinding" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventGrinding() { return { this, "UPrimalItem.bForcePreventGrinding" }; }
	BitFieldValue<bool, unsigned __int32> bDeprecateBlueprint() { return { this, "UPrimalItem.bDeprecateBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoAutoConsume() { return { this, "UPrimalItem.bPreventDinoAutoConsume" }; }
	BitFieldValue<bool, unsigned __int32> bIsDinoAutoHealingItem() { return { this, "UPrimalItem.bIsDinoAutoHealingItem" }; }
	BitFieldValue<bool, unsigned __int32> bBPAllowRemoteAddToInventory() { return { this, "UPrimalItem.bBPAllowRemoteAddToInventory" }; }
	BitFieldValue<bool, unsigned __int32> bBPAllowRemoteRemoveFromInventory() { return { this, "UPrimalItem.bBPAllowRemoteRemoveFromInventory" }; }
	BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemHeadHair() { return { this, "UPrimalItem.bEquipmentHatHideItemHeadHair" }; }
	BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemFacialHair() { return { this, "UPrimalItem.bEquipmentHatHideItemFacialHair" }; }
	BitFieldValue<bool, unsigned __int32> bEquipmentForceHairHiding() { return { this, "UPrimalItem.bEquipmentForceHairHiding" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemoveFromSteamInventory() { return { this, "UPrimalItem.bAllowRemoveFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bBPInventoryNotifyCraftingFinished() { return { this, "UPrimalItem.bBPInventoryNotifyCraftingFinished" }; }
	BitFieldValue<bool, unsigned __int32> bCheckBPAllowCrafting() { return { this, "UPrimalItem.bCheckBPAllowCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowAddToInventory() { return { this, "UPrimalItem.bUseBPAllowAddToInventory" }; }
	BitFieldValue<bool, unsigned __int32> bPreventItemBlueprint() { return { this, "UPrimalItem.bPreventItemBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUseByDinos() { return { this, "UPrimalItem.bPreventUseByDinos" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUseByHumans() { return { this, "UPrimalItem.bPreventUseByHumans" }; }
	BitFieldValue<bool, unsigned __int32> bBPCanUse() { return { this, "UPrimalItem.bBPCanUse" }; }
	BitFieldValue<bool, unsigned __int32> bAllowOverrideItemAutoDecreaseDurability() { return { this, "UPrimalItem.bAllowOverrideItemAutoDecreaseDurability" }; }
	BitFieldValue<bool, unsigned __int32> bCopyItemDurabilityFromCraftingResource() { return { this, "UPrimalItem.bCopyItemDurabilityFromCraftingResource" }; }
	BitFieldValue<bool, unsigned __int32> bIsInitialItem() { return { this, "UPrimalItem.bIsInitialItem" }; }
	BitFieldValue<bool, unsigned __int32> bPickupEggForceAggro() { return { this, "UPrimalItem.bPickupEggForceAggro" }; }
	BitFieldValue<bool, unsigned __int32> bClearSkinOnInventoryRemoval() { return { this, "UPrimalItem.bClearSkinOnInventoryRemoval" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetText() { return { this, "UPrimalItem.bUseBPCustomInventoryWidgetText" }; }
	BitFieldValue<bool, unsigned __int32> bUseSkinnedBPCustomInventoryWidgetText() { return { this, "UPrimalItem.bUseSkinnedBPCustomInventoryWidgetText" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInitFromItemNetInfo() { return { this, "UPrimalItem.bUseBPInitFromItemNetInfo" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInitializeItem() { return { this, "UPrimalItem.bUseBPInitializeItem" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetItemNetInfo() { return { this, "UPrimalItem.bUseBPGetItemNetInfo" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalItemName() { return { this, "UPrimalItem.bItemSkinKeepOriginalItemName" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUploadingWeaponClipAmmo() { return { this, "UPrimalItem.bPreventUploadingWeaponClipAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bPreventNativeItemBroken() { return { this, "UPrimalItem.bPreventNativeItemBroken" }; }
	BitFieldValue<bool, unsigned __int32> bResourcePreventGivingFromDemolition() { return { this, "UPrimalItem.bResourcePreventGivingFromDemolition" }; }
	BitFieldValue<bool, unsigned __int32> bNameForceNoStatQualityRank() { return { this, "UPrimalItem.bNameForceNoStatQualityRank" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysLearnedEngram() { return { this, "UPrimalItem.bAlwaysLearnedEngram" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMinimumUseIntervalForDinoAutoEatingFood() { return { this, "UPrimalItem.bIgnoreMinimumUseIntervalForDinoAutoEatingFood" }; }
	BitFieldValue<bool, unsigned __int32> bUnappliedItemSkinIgnoreItemAttachments() { return { this, "UPrimalItem.bUnappliedItemSkinIgnoreItemAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bHideMoreOptionsIfNonRemovable() { return { this, "UPrimalItem.bHideMoreOptionsIfNonRemovable" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetItemDescription() { return { this, "UPrimalItem.bUseBPGetItemDescription" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCrafted() { return { this, "UPrimalItem.bUseBPCrafted" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetItemName() { return { this, "UPrimalItem.bUseBPGetItemName" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUseAtTameLimit() { return { this, "UPrimalItem.bPreventUseAtTameLimit" }; }
	BitFieldValue<bool, unsigned __int32> bDivideTimeToCraftByGlobalCropGrowthSpeed() { return { this, "UPrimalItem.bDivideTimeToCraftByGlobalCropGrowthSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCheatGive() { return { this, "UPrimalItem.bPreventCheatGive" }; }
	BitFieldValue<bool, unsigned __int32> bUsingRequiresStandingOnSolidGround() { return { this, "UPrimalItem.bUsingRequiresStandingOnSolidGround" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAddedAttachments() { return { this, "UPrimalItem.bUseBPAddedAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPConsumeProjectileImpact() { return { this, "UPrimalItem.bUseBPConsumeProjectileImpact" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyDropped() { return { this, "UPrimalItem.bUseBPNotifyDropped" }; }
	BitFieldValue<bool, unsigned __int32> bThrowUsesSecondaryActionDrop() { return { this, "UPrimalItem.bThrowUsesSecondaryActionDrop" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetItemIcon() { return { this, "UPrimalItem.bUseBPGetItemIcon" }; }
	BitFieldValue<bool, unsigned __int32> bUseSlottedTick() { return { this, "UPrimalItem.bUseSlottedTick" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDrawItemIcon() { return { this, "UPrimalItem.bUseBPDrawItemIcon" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPForceAllowRemoteAddToInventory() { return { this, "UPrimalItem.bUseBPForceAllowRemoteAddToInventory" }; }
	BitFieldValue<bool, unsigned __int32> bSkinAddWeightToSkinnedItem() { return { this, "UPrimalItem.bSkinAddWeightToSkinnedItem" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsValidForCrafting() { return { this, "UPrimalItem.bUseBPIsValidForCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideCraftingConsumption() { return { this, "UPrimalItem.bUseBPOverrideCraftingConsumption" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDrawingItemButtonIcon() { return { this, "UPrimalItem.bIgnoreDrawingItemButtonIcon" }; }
	BitFieldValue<bool, unsigned __int32> bCensoredItemSkin() { return { this, "UPrimalItem.bCensoredItemSkin" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "UPrimalItem.GetPrivateStaticClass"); }
	FItemNetInfo * GetItemNetInfo(FItemNetInfo * result, bool bIsForSendingToClient) { return NativeCall<FItemNetInfo *, FItemNetInfo *, bool>(this, "UPrimalItem.GetItemNetInfo", result, bIsForSendingToClient); }
	void InitFromNetInfo(FItemNetInfo * theInfo) { NativeCall<void, FItemNetInfo *>(this, "UPrimalItem.InitFromNetInfo", theInfo); }
	void AddItemDurability(float durabilityToAdd) { NativeCall<void, float>(this, "UPrimalItem.AddItemDurability", durabilityToAdd); }
	void InitNewItem(float ItemQuality, UPrimalInventoryComponent * toInventory, float MaxItemDifficultyClamp) { NativeCall<void, float, UPrimalInventoryComponent *, float>(this, "UPrimalItem.InitNewItem", ItemQuality, toInventory, MaxItemDifficultyClamp); }
	bool AllowEquipItem(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.AllowEquipItem", toInventory); }
	bool AllowInventoryItem(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.AllowInventoryItem", toInventory); }
	void AddToInventory(UPrimalInventoryComponent * toInventory, bool bEquipItem, bool AddToSlotItems, FItemNetID * InventoryInsertAfterItemID, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bIgnoreAbsoluteMaxInventory) { NativeCall<void, UPrimalInventoryComponent *, bool, bool, FItemNetID *, bool, bool, bool>(this, "UPrimalItem.AddToInventory", toInventory, bEquipItem, AddToSlotItems, InventoryInsertAfterItemID, ShowHUDNotification, bDontRecalcSpoilingTime, bIgnoreAbsoluteMaxInventory); }
	bool RemoveItemFromArkTributeInventory() { return NativeCall<bool>(this, "UPrimalItem.RemoveItemFromArkTributeInventory"); }
	bool RemoveItemFromInventory(bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, bool, bool>(this, "UPrimalItem.RemoveItemFromInventory", bForceRemoval, showHUDMessage); }
	float GetSpoilingTime() { return NativeCall<float>(this, "UPrimalItem.GetSpoilingTime"); }
	static UPrimalItem * AddNewItem(TSubclassOf<UPrimalItem> ItemArchetype, UPrimalInventoryComponent * GiveToInventory, bool bEquipItem, bool bDontStack, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint, float MaxItemDifficultyClamp, bool CreateOnClient, TSubclassOf<UPrimalItem> ApplyItemSkin) { return NativeCall<UPrimalItem *, TSubclassOf<UPrimalItem>, UPrimalInventoryComponent *, bool, bool, float, bool, int, bool, float, bool, TSubclassOf<UPrimalItem>>(nullptr, "UPrimalItem.AddNewItem", ItemArchetype, GiveToInventory, bEquipItem, bDontStack, ItemQuality, bForceNoBlueprint, quantityOverride, bForceBlueprint, MaxItemDifficultyClamp, CreateOnClient, ApplyItemSkin); }
	static UPrimalItem * CreateItemFromNetInfo(FItemNetInfo * newItemInfo) { return NativeCall<UPrimalItem *, FItemNetInfo *>(nullptr, "UPrimalItem.CreateItemFromNetInfo", newItemInfo); }
	FString * GetItemName(FString * result, bool bIncludeQuantity, bool bShortName, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, bool, bool, AShooterPlayerController *>(this, "UPrimalItem.GetItemName", result, bIncludeQuantity, bShortName, ForPC); }
	FLinearColor * GetItemQualityColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "UPrimalItem.GetItemQualityColor", result); }
	FString * GetItemDescription(FString * result, bool bGetLongDescription, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, bool, AShooterPlayerController *>(this, "UPrimalItem.GetItemDescription", result, bGetLongDescription, ForPC); }
	UTexture2D * GetItemIcon(AShooterPlayerController * ForPC) { return NativeCall<UTexture2D *, AShooterPlayerController *>(this, "UPrimalItem.GetItemIcon", ForPC); }
	void EquippedItem() { NativeCall<void>(this, "UPrimalItem.EquippedItem"); }
	void UnequippedItem() { NativeCall<void>(this, "UPrimalItem.UnequippedItem"); }
	void UpdatedItem() { NativeCall<void>(this, "UPrimalItem.UpdatedItem"); }
	void SetOwnerNoSee(bool bNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalItem.SetOwnerNoSee", bNoSee, bForceHideFirstPerson); }
	void RemoveAttachments(AActor * UseOtherActor, bool bRefreshDefaultAttachments) { NativeCall<void, AActor *, bool>(this, "UPrimalItem.RemoveAttachments", UseOtherActor, bRefreshDefaultAttachments); }
	UActorComponent * GetAttachedComponent(int attachmentIndex, AActor * UseOtherActor) { return NativeCall<UActorComponent *, int, AActor *>(this, "UPrimalItem.GetAttachedComponent", attachmentIndex, UseOtherActor); }
	UActorComponent * GetComponentToAttach(int attachmentIndex, AActor * UseOtherActor) { return NativeCall<UActorComponent *, int, AActor *>(this, "UPrimalItem.GetComponentToAttach", attachmentIndex, UseOtherActor); }
	AActor * GetOwnerActor() { return NativeCall<AActor *>(this, "UPrimalItem.GetOwnerActor"); }
	UTexture2D * GetEntryIcon(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D *, UObject *, bool>(this, "UPrimalItem.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetEntryString", result); }
	float GetItemWeight(bool bJustOneQuantity, bool bForceNotBlueprintWeight) { return NativeCall<float, bool, bool>(this, "UPrimalItem.GetItemWeight", bJustOneQuantity, bForceNotBlueprintWeight); }
	void AddToSlot(int theSlotIndex, bool bForce) { NativeCall<void, int, bool>(this, "UPrimalItem.AddToSlot", theSlotIndex, bForce); }
	void RemoveFromSlot(bool bForce) { NativeCall<void, bool>(this, "UPrimalItem.RemoveFromSlot", bForce); }
	bool AllowSlotting(UPrimalInventoryComponent * toInventory, bool bForce) { return NativeCall<bool, UPrimalInventoryComponent *, bool>(this, "UPrimalItem.AllowSlotting", toInventory, bForce); }
	bool IsBroken() { return NativeCall<bool>(this, "UPrimalItem.IsBroken"); }
	int GetExplicitEntryIndexType() { return NativeCall<int>(this, "UPrimalItem.GetExplicitEntryIndexType"); }
	float GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalItem.GetUseItemAddCharacterStatusValue", valueType); }
	void Use(bool bOverridePlayerInput) { NativeCall<void, bool>(this, "UPrimalItem.Use", bOverridePlayerInput); }
	float GetRemainingCooldownTime() { return NativeCall<float>(this, "UPrimalItem.GetRemainingCooldownTime"); }
	bool CanSpawnOverWater(AActor * ownerActor, FTransform * SpawnTransform) { return NativeCall<bool, AActor *, FTransform *>(this, "UPrimalItem.CanSpawnOverWater", ownerActor, SpawnTransform); }
	bool IsCooldownReadyForUse() { return NativeCall<bool>(this, "UPrimalItem.IsCooldownReadyForUse"); }
	bool CanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem.CanUse", bIgnoreCooldown); }
	void LocalUse(AShooterPlayerController * ForPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalItem.LocalUse", ForPC); }
	void UnequipWeapon(bool bDelayedUnequip) { NativeCall<void, bool>(this, "UPrimalItem.UnequipWeapon", bDelayedUnequip); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetEntryDescription", result); }
	void AddedToInventory() { NativeCall<void>(this, "UPrimalItem.AddedToInventory"); }
	void InitializeItem(bool bForceReinit, UWorld * OptionalInitWorld) { NativeCall<void, bool, UWorld *>(this, "UPrimalItem.InitializeItem", bForceReinit, OptionalInitWorld); }
	void InitItemIcon() { NativeCall<void>(this, "UPrimalItem.InitItemIcon"); }
	FLinearColor * GetColorForItemColorID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>(this, "UPrimalItem.GetColorForItemColorID", result, SetNum, ID); }
	static FLinearColor * StaticGetColorForItemColorID(FLinearColor * result, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int>(nullptr, "UPrimalItem.StaticGetColorForItemColorID", result, ID); }
	UMaterialInterface * GetEntryIconMaterial(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface *, UObject *, bool>(this, "UPrimalItem.GetEntryIconMaterial", AssociatedDataObject, bIsEnabled); }
	int GetItemQuantity() { return NativeCall<int>(this, "UPrimalItem.GetItemQuantity"); }
	float GetMiscInfoFontScale() { return NativeCall<float>(this, "UPrimalItem.GetMiscInfoFontScale"); }
	FString * GetMiscInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetMiscInfoString", result); }
	int IncrementItemQuantity(int amount, bool bReplicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption) { return NativeCall<int, int, bool, bool, bool, bool, bool>(this, "UPrimalItem.IncrementItemQuantity", amount, bReplicateToClient, bDontUpdateWeight, bIsFromUseConsumption, bIsArkTributeItem, bIsFromCraftingConsumption); }
	FString * GetItemTypeString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetItemTypeString", result); }
	FString * GetItemSubtypeString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetItemSubtypeString", result); }
	FString * GetItemStatsString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetItemStatsString", result); }
	bool MeetBlueprintCraftingRequirements(UPrimalInventoryComponent * compareInventoryComp, int CraftAmountOverride, AShooterPlayerController * ForPlayer, bool bIsForCraftQueueAddition, bool bTestFullQueue) { return NativeCall<bool, UPrimalInventoryComponent *, int, AShooterPlayerController *, bool, bool>(this, "UPrimalItem.MeetBlueprintCraftingRequirements", compareInventoryComp, CraftAmountOverride, ForPlayer, bIsForCraftQueueAddition, bTestFullQueue); }
	bool TestMeetsCraftingRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent) { return NativeCall<bool, UPrimalInventoryComponent *, float>(this, "UPrimalItem.TestMeetsCraftingRequirementsPercent", invComp, Percent); }
	void ConsumeCraftingRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent) { NativeCall<void, UPrimalInventoryComponent *, float>(this, "UPrimalItem.ConsumeCraftingRequirementsPercent", invComp, Percent); }
	FString * GetCraftingRequirementsString(FString * result, UPrimalInventoryComponent * compareInventoryComp) { return NativeCall<FString *, FString *, UPrimalInventoryComponent *>(this, "UPrimalItem.GetCraftingRequirementsString", result, compareInventoryComp); }
	bool MeetRepairingRequirements(UPrimalInventoryComponent * compareInventoryComp, bool bIsForCraftQueueAddition) { return NativeCall<bool, UPrimalInventoryComponent *, bool>(this, "UPrimalItem.MeetRepairingRequirements", compareInventoryComp, bIsForCraftQueueAddition); }
	FString * GetRepairingRequirementsString(FString * result, UPrimalInventoryComponent * compareInventoryComp, bool bUseBaseRequeriments, float OverrideRepairPercent) { return NativeCall<FString *, FString *, UPrimalInventoryComponent *, bool, float>(this, "UPrimalItem.GetRepairingRequirementsString", result, compareInventoryComp, bUseBaseRequeriments, OverrideRepairPercent); }
	float GetItemStatModifier(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatModifier", statType); }
	FString * GetItemStatString(FString * result, EPrimalItemStat::Type statType) { return NativeCall<FString *, FString *, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatString", result, statType); }
	bool UsesDurability() { return NativeCall<bool>(this, "UPrimalItem.UsesDurability"); }
	bool CanRepair(bool bIgnoreInventoryRequirement) { return NativeCall<bool, bool>(this, "UPrimalItem.CanRepair", bIgnoreInventoryRequirement); }
	bool CanRepairInInventory(UPrimalInventoryComponent * invComp) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.CanRepairInInventory", invComp); }
	float GetDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.GetDurabilityPercentage"); }
	void CraftBlueprint(bool bConsumeResources) { NativeCall<void, bool>(this, "UPrimalItem.CraftBlueprint", bConsumeResources); }
	bool CanFullyCraft() { return NativeCall<bool>(this, "UPrimalItem.CanFullyCraft"); }
	void StopCraftingRepairing(bool bCheckIfCraftingOrRepairing) { NativeCall<void, bool>(this, "UPrimalItem.StopCraftingRepairing", bCheckIfCraftingOrRepairing); }
	UPrimalItem * FinishCraftingBlueprint() { return NativeCall<UPrimalItem *>(this, "UPrimalItem.FinishCraftingBlueprint"); }
	float GetTimeToCraftBlueprint() { return NativeCall<float>(this, "UPrimalItem.GetTimeToCraftBlueprint"); }
	float GetTimeForFullRepair() { return NativeCall<float>(this, "UPrimalItem.GetTimeForFullRepair"); }
	static void GenerateItemID(FItemNetID * TheItemID) { NativeCall<void, FItemNetID *>(nullptr, "UPrimalItem.GenerateItemID", TheItemID); }
	void TickCraftingItem(float DeltaTime, AShooterGameState * theGameState) { NativeCall<void, float, AShooterGameState *>(this, "UPrimalItem.TickCraftingItem", DeltaTime, theGameState); }
	float GetCraftingPercent() { return NativeCall<float>(this, "UPrimalItem.GetCraftingPercent"); }
	float GetRepairingPercent() { return NativeCall<float>(this, "UPrimalItem.GetRepairingPercent"); }
	void SetQuantity(int NewQuantity, bool ShowHUDNotification) { NativeCall<void, int, bool>(this, "UPrimalItem.SetQuantity", NewQuantity, ShowHUDNotification); }
	void RepairItem(bool bIgnoreInventoryRequirement, float UseNextRepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, bool, float, float>(this, "UPrimalItem.RepairItem", bIgnoreInventoryRequirement, UseNextRepairPercentage, RepairSpeedMultiplier); }
	void FinishRepairing() { NativeCall<void>(this, "UPrimalItem.FinishRepairing"); }
	void Used(UPrimalItem * DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem *, int>(this, "UPrimalItem.Used", DestinationItem, AdditionalData); }
	void RemoveWeaponAccessory() { NativeCall<void>(this, "UPrimalItem.RemoveWeaponAccessory"); }
	void ServerRemoveItemSkin() { NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkin"); }
	void ServerRemoveItemSkinOnly() { NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkinOnly"); }
	void ServerRemoveWeaponAccessoryOnly() { NativeCall<void>(this, "UPrimalItem.ServerRemoveWeaponAccessoryOnly"); }
	void RemoveClipAmmo(bool bDontUpdateItem) { NativeCall<void, bool>(this, "UPrimalItem.RemoveClipAmmo", bDontUpdateItem); }
	bool CanStackWithItem(UPrimalItem * otherItem, int * QuantityOverride) { return NativeCall<bool, UPrimalItem *, int *>(this, "UPrimalItem.CanStackWithItem", otherItem, QuantityOverride); }
	bool CheckAutoCraftBlueprint() { return NativeCall<bool>(this, "UPrimalItem.CheckAutoCraftBlueprint"); }
	bool CanCraft() { return NativeCall<bool>(this, "UPrimalItem.CanCraft"); }
	bool CanCraftInInventory(UPrimalInventoryComponent * invComp) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.CanCraftInInventory", invComp); }
	FString * GetCraftRepairInvReqString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetCraftRepairInvReqString", result); }
	bool AllowUseInInventory(bool bIsRemoteInventory, AShooterPlayerController * ByPC, bool DontCheckActor) { return NativeCall<bool, bool, AShooterPlayerController *, bool>(this, "UPrimalItem.AllowUseInInventory", bIsRemoteInventory, ByPC, DontCheckActor); }
	bool CanBeArkTributeItem() { return NativeCall<bool>(this, "UPrimalItem.CanBeArkTributeItem"); }
	void SetEngramBlueprint() { NativeCall<void>(this, "UPrimalItem.SetEngramBlueprint"); }
	bool CanSpoil() { return NativeCall<bool>(this, "UPrimalItem.CanSpoil"); }
	void RecalcSpoilingTime(long double TimeSeconds, float SpoilPercent, UPrimalInventoryComponent * forComp) { NativeCall<void, long double, float, UPrimalInventoryComponent *>(this, "UPrimalItem.RecalcSpoilingTime", TimeSeconds, SpoilPercent, forComp); }
	void InventoryRefreshCheckItem() { NativeCall<void>(this, "UPrimalItem.InventoryRefreshCheckItem"); }
	bool IsValidForCrafting() { return NativeCall<bool>(this, "UPrimalItem.IsValidForCrafting"); }
	bool IsOwnerInWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInWater"); }
	bool IsOwnerInNoPainWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInNoPainWater"); }
	bool AllowRemoteAddToInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, bool>(this, "UPrimalItem.AllowRemoteAddToInventory", invComp, ByPC, bRequestedByPlayer); }
	bool CanDrop() { return NativeCall<bool>(this, "UPrimalItem.CanDrop"); }
	void PickupAlertDinos(AActor * groundItem) { NativeCall<void, AActor *>(this, "UPrimalItem.PickupAlertDinos", groundItem); }
	void GetItemAttachmentInfos(AActor * OwnerActor) { NativeCall<void, AActor *>(this, "UPrimalItem.GetItemAttachmentInfos", OwnerActor); }
	void SetAttachedMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "UPrimalItem.SetAttachedMeshesMaterialScalarParamValue", ParamName, Value); }
	bool CanUseWithItemSource(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalItem.CanUseWithItemSource", DestinationItem); }
	bool CanUseWithItemDestination(UPrimalItem * SourceItem) { return NativeCall<bool, UPrimalItem *>(this, "UPrimalItem.CanUseWithItemDestination", SourceItem); }
	bool UseItemOntoItem(UPrimalItem * DestinationItem, int AdditionalData) { return NativeCall<bool, UPrimalItem *, int>(this, "UPrimalItem.UseItemOntoItem", DestinationItem, AdditionalData); }
	void LocalUseItemOntoItem(AShooterPlayerController * ForPC, UPrimalItem * DestinationItem) { NativeCall<void, AShooterPlayerController *, UPrimalItem *>(this, "UPrimalItem.LocalUseItemOntoItem", ForPC, DestinationItem); }
	FString * GetPrimaryColorName(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.GetPrimaryColorName", result); }
	bool ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool __formal) { return NativeCall<bool, AShooterPlayerController *, FString *, bool>(this, "UPrimalItem.ProcessEditText", ForPC, TextToUse, __formal); }
	void NotifyEditText(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalItem.NotifyEditText", PC); }
	void AddToArkTributeInvenroty(UPrimalInventoryComponent * toInventory, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent *, bool>(this, "UPrimalItem.AddToArkTributeInvenroty", toInventory, bFromLoad); }
	int GetMaximumAdditionalCrafting(UPrimalInventoryComponent * forComp, AShooterPlayerController * PC) { return NativeCall<int, UPrimalInventoryComponent *, AShooterPlayerController *>(this, "UPrimalItem.GetMaximumAdditionalCrafting", forComp, PC); }
	void EquippedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.EquippedTick", DeltaSeconds); }
	float GetWeaponTemplateMeleeDamageAmount() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateMeleeDamageAmount"); }
	float GetWeaponTemplateDurabilityToConsumePerMeleeHit() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateDurabilityToConsumePerMeleeHit"); }
	TSubclassOf<UDamageType> * GetWeaponTemplateMeleeDamageType(TSubclassOf<UDamageType> * result) { return NativeCall<TSubclassOf<UDamageType> *, TSubclassOf<UDamageType> *>(this, "UPrimalItem.GetWeaponTemplateMeleeDamageType", result); }
	TSubclassOf<UDamageType> * GetWeaponTemplateHarvestDamageType(TSubclassOf<UDamageType> * result) { return NativeCall<TSubclassOf<UDamageType> *, TSubclassOf<UDamageType> *>(this, "UPrimalItem.GetWeaponTemplateHarvestDamageType", result); }
	float GetWeaponTemplateHarvestDamageMultiplier() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateHarvestDamageMultiplier"); }
	void CalcRecipeStats() { NativeCall<void>(this, "UPrimalItem.CalcRecipeStats"); }
	bool IsUsableConsumable() { return NativeCall<bool>(this, "UPrimalItem.IsUsableConsumable"); }
	bool CanEquipWeapon() { return NativeCall<bool>(this, "UPrimalItem.CanEquipWeapon"); }
	void RemoveCustomItemData(FName CustomDataName) { NativeCall<void, FName>(this, "UPrimalItem.RemoveCustomItemData", CustomDataName); }
	bool GetCustomItemData(FName CustomDataName, FCustomItemData * OutData) { return NativeCall<bool, FName, FCustomItemData *>(this, "UPrimalItem.GetCustomItemData", CustomDataName, OutData); }
	void SetCustomItemData(FCustomItemData * InData) { NativeCall<void, FCustomItemData *>(this, "UPrimalItem.SetCustomItemData", InData); }
	int GetEngramRequirementLevel() { return NativeCall<int>(this, "UPrimalItem.GetEngramRequirementLevel"); }
	void BPSetWeaponClipAmmo(int NewClipAmmo) { NativeCall<void, int>(this, "UPrimalItem.BPSetWeaponClipAmmo", NewClipAmmo); }
	void Crafted_Implementation(bool bWasCraftedFromEngram) { NativeCall<void, bool>(this, "UPrimalItem.Crafted_Implementation", bWasCraftedFromEngram); }
	UMaterialInterface * GetHUDIconMaterial() { return NativeCall<UMaterialInterface *>(this, "UPrimalItem.GetHUDIconMaterial"); }
	float GetEggHatchTimeRemaining(UWorld * theWorld) { return NativeCall<float, UWorld *>(this, "UPrimalItem.GetEggHatchTimeRemaining", theWorld); }
	bool IsReadyToUpload(UWorld * theWorld) { return NativeCall<bool, UWorld *>(this, "UPrimalItem.IsReadyToUpload", theWorld); }
	float GetTimeUntilUploadAllowed(UWorld * theWorld) { return NativeCall<float, UWorld *>(this, "UPrimalItem.GetTimeUntilUploadAllowed", theWorld); }
	float HandleShieldDamageBlocking_Implementation(AShooterCharacter * ForShooterCharacter, float DamageIn, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AShooterCharacter *, float, FDamageEvent *, AController *, AActor *>(this, "UPrimalItem.HandleShieldDamageBlocking_Implementation", ForShooterCharacter, DamageIn, DamageEvent, EventInstigator, DamageCauser); }
	TArray<FLinearColor> * GetItemDyeColors(TArray<FLinearColor> * result) { return NativeCall<TArray<FLinearColor> *, TArray<FLinearColor> *>(this, "UPrimalItem.GetItemDyeColors", result); }
	static void StaticRegisterNativesUPrimalItem() { NativeCall<void>(nullptr, "UPrimalItem.StaticRegisterNativesUPrimalItem"); }
	void BlueprintEquipped(bool bIsFromSaveGame) { NativeCall<void, bool>(this, "UPrimalItem.BlueprintEquipped", bIsFromSaveGame); }
	FString * BPAllowCrafting(FString * result, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, AShooterPlayerController *>(this, "UPrimalItem.BPAllowCrafting", result, ForPC); }
	bool BPAllowRemoteAddToInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, bool>(this, "UPrimalItem.BPAllowRemoteAddToInventory", invComp, ByPC, bRequestedByPlayer); }
	bool BPAllowRemoteRemoveFromInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, bool>(this, "UPrimalItem.BPAllowRemoteRemoveFromInventory", invComp, ByPC, bRequestedByPlayer); }
	bool BPCanAddToInventory(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "UPrimalItem.BPCanAddToInventory", toInventory); }
	FString * BPGetCustomInventoryWidgetText(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.BPGetCustomInventoryWidgetText", result); }
	FString * BPGetItemDescription(FString * result, FString * InDescription, bool bGetLongDescription, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, FString *, bool, AShooterPlayerController *>(this, "UPrimalItem.BPGetItemDescription", result, InDescription, bGetLongDescription, ForPC); }
	FString * BPGetItemName(FString * result, FString * ItemNameIn, AShooterPlayerController * ForPC) { return NativeCall<FString *, FString *, FString *, AShooterPlayerController *>(this, "UPrimalItem.BPGetItemName", result, ItemNameIn, ForPC); }
	FString * BPGetSkinnedCustomInventoryWidgetText(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem.BPGetSkinnedCustomInventoryWidgetText", result); }
	float HandleShieldDamageBlocking(AShooterCharacter * ForShooterCharacter, float DamageIn, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AShooterCharacter *, float, FDamageEvent *, AController *, AActor *>(this, "UPrimalItem.HandleShieldDamageBlocking", ForShooterCharacter, DamageIn, DamageEvent, EventInstigator, DamageCauser); }
	USoundBase * OverrideCrouchingSound(USoundBase * InSound, bool bIsProne, int soundState) { return NativeCall<USoundBase *, USoundBase *, bool, int>(this, "UPrimalItem.OverrideCrouchingSound", InSound, bIsProne, soundState); }
};

struct FItemNetInfo
{
	FieldValue<TSubclassOf<UPrimalItem>> ItemArchetypeField() { return { this, "FItemNetInfo.ItemArchetype" }; }
	FieldValue<FItemNetID> ItemIDField() { return { this, "FItemNetInfo.ItemID" }; }
	FieldValue<unsigned int> ExpirationTimeUTCField() { return { this, "FItemNetInfo.ExpirationTimeUTC" }; }
	FieldValue<TArray<FCustomItemData>> CustomItemDatasField() { return { this, "FItemNetInfo.CustomItemDatas" }; }
	FieldValue<unsigned __int64> OwnerPlayerDataIdField() { return { this, "FItemNetInfo.OwnerPlayerDataId" }; }
	FieldValue<int> SlotIndexField() { return { this, "FItemNetInfo.SlotIndex" }; }
	FieldValue<unsigned int> WeaponClipAmmoField() { return { this, "FItemNetInfo.WeaponClipAmmo" }; }
	FieldValue<long double> CreationTimeField() { return { this, "FItemNetInfo.CreationTime" }; }
	FieldValue<float> ItemDurabilityField() { return { this, "FItemNetInfo.ItemDurability" }; }
	FieldValue<float> ItemRatingField() { return { this, "FItemNetInfo.ItemRating" }; }
	FieldValue<char> ItemQualityIndexField() { return { this, "FItemNetInfo.ItemQualityIndex" }; }
	FieldValue<unsigned int> ItemQuantityField() { return { this, "FItemNetInfo.ItemQuantity" }; }
	FieldValue<unsigned __int16> CraftQueueField() { return { this, "FItemNetInfo.CraftQueue" }; }
	FieldValue<long double> NextCraftCompletionTimeField() { return { this, "FItemNetInfo.NextCraftCompletionTime" }; }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return { this, "FItemNetInfo.ItemStatValues" }; }
	FieldArray<__int16, 6> ItemColorIDField() { return { this, "FItemNetInfo.ItemColorID" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ItemCustomClassField() { return { this, "FItemNetInfo.ItemCustomClass" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ItemSkinTemplateField() { return { this, "FItemNetInfo.ItemSkinTemplate" }; }
	FieldValue<float> CraftingSkillField() { return { this, "FItemNetInfo.CraftingSkill" }; }
	FieldValue<FString> CustomItemNameField() { return { this, "FItemNetInfo.CustomItemName" }; }
	FieldValue<FString> CustomItemDescriptionField() { return { this, "FItemNetInfo.CustomItemDescription" }; }
	FieldValue<TArray<FColor>> CustomItemColorsField() { return { this, "FItemNetInfo.CustomItemColors" }; }
	FieldValue<TArray<FCraftingResourceRequirement>> CustomResourceRequirementsField() { return { this, "FItemNetInfo.CustomResourceRequirements" }; }
	FieldValue<long double> NextSpoilingTimeField() { return { this, "FItemNetInfo.NextSpoilingTime" }; }
	FieldValue<long double> LastSpoilingTimeField() { return { this, "FItemNetInfo.LastSpoilingTime" }; }
	FieldValue<long double> UploadEarliestValidTimeField() { return { this, "FItemNetInfo.UploadEarliestValidTime" }; }
	FieldValue<TWeakObjectPtr<AShooterCharacter>> LastOwnerPlayerField() { return { this, "FItemNetInfo.LastOwnerPlayer" }; }
	FieldValue<long double> LastAutoDurabilityDecreaseTimeField() { return { this, "FItemNetInfo.LastAutoDurabilityDecreaseTime" }; }
	FieldValue<FVector> OriginalItemDropLocationField() { return { this, "FItemNetInfo.OriginalItemDropLocation" }; }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return { this, "FItemNetInfo.PreSkinItemColorID" }; }
	FieldArray<char, 12> EggNumberOfLevelUpPointsAppliedField() { return { this, "FItemNetInfo.EggNumberOfLevelUpPointsApplied" }; }
	FieldValue<float> EggTamedIneffectivenessModifierField() { return { this, "FItemNetInfo.EggTamedIneffectivenessModifier" }; }
	FieldArray<char, 6> EggColorSetIndicesField() { return { this, "FItemNetInfo.EggColorSetIndices" }; }
	FieldValue<char> ItemVersionField() { return { this, "FItemNetInfo.ItemVersion" }; }
	FieldValue<int> CustomItemIDField() { return { this, "FItemNetInfo.CustomItemID" }; }
	FieldValue<TArray<unsigned __int64>> SteamUserItemIDField() { return { this, "FItemNetInfo.SteamUserItemID" }; }
	FieldValue<long double> ClusterSpoilingTimeUTCField() { return { this, "FItemNetInfo.ClusterSpoilingTimeUTC" }; }
	FieldValue<TArray<FDinoAncestorsEntry>> EggDinoAncestorsField() { return { this, "FItemNetInfo.EggDinoAncestors" }; }
	FieldValue<TArray<FDinoAncestorsEntry>> EggDinoAncestorsMaleField() { return { this, "FItemNetInfo.EggDinoAncestorsMale" }; }
	FieldValue<int> EggRandomMutationsFemaleField() { return { this, "FItemNetInfo.EggRandomMutationsFemale" }; }
	FieldValue<int> EggRandomMutationsMaleField() { return { this, "FItemNetInfo.EggRandomMutationsMale" }; }
	FieldValue<char> ItemProfileVersionField() { return { this, "FItemNetInfo.ItemProfileVersion" }; }
	FieldValue<FString> CrafterCharacterNameField() { return { this, "FItemNetInfo.CrafterCharacterName" }; }
	FieldValue<FString> CrafterTribeNameField() { return { this, "FItemNetInfo.CrafterTribeName" }; }
	FieldValue<float> CraftedSkillBonusField() { return { this, "FItemNetInfo.CraftedSkillBonus" }; }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bIsBlueprint() { return { this, "FItemNetInfo.bIsBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bIsEngram() { return { this, "FItemNetInfo.bIsEngram" }; }
	BitFieldValue<bool, unsigned __int32> bIsCustomRecipe() { return { this, "FItemNetInfo.bIsCustomRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsFoodRecipe() { return { this, "FItemNetInfo.bIsFoodRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "FItemNetInfo.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory() { return { this, "FItemNetInfo.bAllowRemovalFromInventory" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromSteamInventory() { return { this, "FItemNetInfo.bAllowRemovalFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay() { return { this, "FItemNetInfo.bHideFromInventoryDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bFromSteamInventory() { return { this, "FItemNetInfo.bFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory() { return { this, "FItemNetInfo.bIsFromAllClustersInventory" }; }
	BitFieldValue<bool, unsigned __int32> bIsEquipped() { return { this, "FItemNetInfo.bIsEquipped" }; }
	BitFieldValue<bool, unsigned __int32> bIsSlot() { return { this, "FItemNetInfo.bIsSlot" }; }
	BitFieldValue<bool, unsigned __int32> bIsInitialItem() { return { this, "FItemNetInfo.bIsInitialItem" }; }

	// Functions

	FItemNetInfo * operator=(FItemNetInfo * __that) { return NativeCall<FItemNetInfo *, FItemNetInfo *>(this, "FItemNetInfo.operator=", __that); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FItemNetInfo.StaticStruct"); }
};

struct FItemStatInfo
{
	FieldValue<int> DefaultModifierValueField() { return { this, "FItemStatInfo.DefaultModifierValue" }; }
	FieldValue<int> RandomizerRangeOverrideField() { return { this, "FItemStatInfo.RandomizerRangeOverride" }; }
	FieldValue<float> RandomizerRangeMultiplierField() { return { this, "FItemStatInfo.RandomizerRangeMultiplier" }; }
	FieldValue<float> TheRandomizerPowerField() { return { this, "FItemStatInfo.TheRandomizerPower" }; }
	FieldValue<float> StateModifierScaleField() { return { this, "FItemStatInfo.StateModifierScale" }; }
	FieldValue<float> InitialValueConstantField() { return { this, "FItemStatInfo.InitialValueConstant" }; }
	FieldValue<float> RatingValueMultiplierField() { return { this, "FItemStatInfo.RatingValueMultiplier" }; }
	FieldValue<float> AbsoluteMaxValueField() { return { this, "FItemStatInfo.AbsoluteMaxValue" }; }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bUsed() { return { this, "FItemStatInfo.bUsed" }; }
	BitFieldValue<bool, unsigned __int32> bCalculateAsPercent() { return { this, "FItemStatInfo.bCalculateAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayAsPercent() { return { this, "FItemStatInfo.bDisplayAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSubmerged() { return { this, "FItemStatInfo.bRequiresSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bPreventIfSubmerged() { return { this, "FItemStatInfo.bPreventIfSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bHideStatFromTooltip() { return { this, "FItemStatInfo.bHideStatFromTooltip" }; }

	// Functions

	float GetItemStatModifier(unsigned __int16 ItemStatValue) { return NativeCall<float, unsigned __int16>(this, "FItemStatInfo.GetItemStatModifier", ItemStatValue); }
	unsigned __int16 GetRandomValue(float QualityLevel, float * outRandonMultiplier) { return NativeCall<unsigned __int16, float, float *>(this, "FItemStatInfo.GetRandomValue", QualityLevel, outRandonMultiplier); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FItemStatInfo.StaticStruct"); }
};
