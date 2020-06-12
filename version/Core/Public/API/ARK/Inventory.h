#pragma once

struct UWorld;

struct  FItemCount
{
	FString StringRef;
	int StackSize;
	int NumStacks;
	float Quality;
	bool bAutoEquip;
};

struct FItemNetID
{
	unsigned int ItemID1;
	unsigned int ItemID2;
};

struct FCustomItemByteArray
{
	TArray<unsigned char, FDefaultAllocator> Bytes;
};


struct FCustomItemByteArrays
{
	TArray<FCustomItemByteArray, FDefaultAllocator> ByteArrays;
};

struct FCustomItemDoubles
{
	TArray<double, FDefaultAllocator> Doubles;
};

struct FCustomItemData
{
	FName CustomDataName;
	TArray<FString, FDefaultAllocator> CustomDataStrings;
	TArray<float, FDefaultAllocator> CustomDataFloats;
	TArray<UObject*, FDefaultAllocator> CustomDataObjects;
	TArray<UClass*, FDefaultAllocator> CustomDataClasses;
	TArray<FName, FDefaultAllocator> CustomDataNames;
	FCustomItemByteArrays CustomDataBytes;
	FCustomItemDoubles CustomDataDoubles;
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

struct FUseItemAddCharacterStatusValue
{
	float BaseAmountToAdd;
	unsigned __int32 bPercentOfMaxStatusValue : 1;
	unsigned __int32 bPercentOfCurrentStatusValue : 1;
	unsigned __int32 bUseItemQuality : 1;
	unsigned __int32 bDontRequireLessThanMaxToUse : 1;
	unsigned __int32 bAddOverTime : 1;
	unsigned __int32 bAddOverTimeSpeedInSeconds : 1;
	unsigned __int32 bContinueOnUnchangedValue : 1;
	unsigned __int32 bSetValue : 1;
	unsigned __int32 bSetAdditionalValue : 1;
	unsigned __int32 bResetExistingModifierDescriptionIndex : 1;
	unsigned __int32 bForceUseStatOnDinos : 1;
	float LimitExistingModifierDescriptionToMaxAmount;
	float AddOverTimeSpeed;
	float PercentAbsoluteMaxValue;
	float PercentAbsoluteMinValue;
	int StatusValueModifierDescriptionIndex;
	float ItemQualityAddValueMultiplier;
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StatusValueType;
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StopAtValueNearMax;
	TSubclassOf<UDamageType> ScaleValueByCharacterDamageType;
};

struct UAssetUserData : UObject
{
};

struct UActorComponent : UObject
{
	TArray<FName> & ComponentTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UActorComponent.ComponentTags"); }
	TArray<UAssetUserData*> AssetUserDataField() { return *GetNativePointerField<TArray<UAssetUserData*>*>(this, "UActorComponent.AssetUserData"); }
	FName & CustomTagField() { return *GetNativePointerField<FName*>(this, "UActorComponent.CustomTag"); }
	int& CustomDataField() { return *GetNativePointerField<int*>(this, "UActorComponent.CustomData"); }
	AActor * CachedOwnerField() { return *GetNativePointerField<AActor**>(this, "UActorComponent.CachedOwner"); }
	UWorld * WorldField() { return *GetNativePointerField<UWorld**>(this, "UActorComponent.World"); }

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
	BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick() { return { this, "UActorComponent.bUseBPOnComponentTick" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed() { return { this, "UActorComponent.bUseBPOnComponentDestroyed" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication() { return { this, "UActorComponent.bOnlyInitialReplication" }; }
	BitFieldValue<bool, unsigned __int32> bHasCachedOwner() { return { this, "UActorComponent.bHasCachedOwner" }; }
	BitFieldValue<bool, unsigned __int32> bRenderStateCreated() { return { this, "UActorComponent.bRenderStateCreated" }; }
	BitFieldValue<bool, unsigned __int32> bPhysicsStateCreated() { return { this, "UActorComponent.bPhysicsStateCreated" }; }
	BitFieldValue<bool, unsigned __int32> bReplicates() { return { this, "UActorComponent.bReplicates" }; }
	BitFieldValue<bool, unsigned __int32> bNetAddressable() { return { this, "UActorComponent.bNetAddressable" }; }

	// Functions

	void InvalidateLightingCache() { NativeCall<void>(this, "UActorComponent.InvalidateLightingCache"); }
	bool IsPhysicsStateCreated() { return NativeCall<bool>(this, "UActorComponent.IsPhysicsStateCreated"); }
	void PostInitProperties() { NativeCall<void>(this, "UActorComponent.PostInitProperties"); }
	void PostRename(UObject * OldOuter, FName OldName) { NativeCall<void, UObject*, FName>(this, "UActorComponent.PostRename", OldOuter, OldName); }
	AActor * GetOwner() { return NativeCall<AActor*>(this, "UActorComponent.GetOwner"); }
	UWorld * GetWorld() { return NativeCall<UWorld*>(this, "UActorComponent.GetWorld"); }
	bool ComponentHasTag(FName Tag) { return NativeCall<bool, FName>(this, "UActorComponent.ComponentHasTag", Tag); }
	FString * GetReadableName(FString * result) { return NativeCall<FString*, FString*>(this, "UActorComponent.GetReadableName", result); }
	void BeginDestroy() { NativeCall<void>(this, "UActorComponent.BeginDestroy"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForClient"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForServer"); }
	void OnRegister() { NativeCall<void>(this, "UActorComponent.OnRegister"); }
	void InitializeComponent() { NativeCall<void>(this, "UActorComponent.InitializeComponent"); }
	void UninitializeComponent() { NativeCall<void>(this, "UActorComponent.UninitializeComponent"); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabled", bEnabled); }
	void SetComponentTickEnabledAsync(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabledAsync", bEnabled); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UActorComponent.RegisterComponentTickFunctions", bRegister, bSaveAndRestoreComponentTickState); }
	void RegisterComponentWithWorld(UWorld * InWorld) { NativeCall<void, UWorld*>(this, "UActorComponent.RegisterComponentWithWorld", InWorld); }
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
	void AddTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor*>(this, "UActorComponent.AddTickPrerequisiteActor", PrerequisiteActor); }
	void AddTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent*>(this, "UActorComponent.AddTickPrerequisiteComponent", PrerequisiteComponent); }
	void RemoveTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor*>(this, "UActorComponent.RemoveTickPrerequisiteActor", PrerequisiteActor); }
	void RemoveTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent*>(this, "UActorComponent.RemoveTickPrerequisiteComponent", PrerequisiteComponent); }
	void DoDeferredRenderUpdates_Concurrent() { NativeCall<void>(this, "UActorComponent.DoDeferredRenderUpdates_Concurrent"); }
	void MarkRenderDynamicDataDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderDynamicDataDirty"); }
	void MarkForNeededEndOfFrameUpdate() { NativeCall<void>(this, "UActorComponent.MarkForNeededEndOfFrameUpdate"); }
	void MarkForNeededEndOfFrameRecreate() { NativeCall<void>(this, "UActorComponent.MarkForNeededEndOfFrameRecreate"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UActorComponent.Activate", bReset); }
	void Deactivate() { NativeCall<void>(this, "UActorComponent.Deactivate"); }
	bool ShouldActivate() { return NativeCall<bool>(this, "UActorComponent.ShouldActivate"); }
	void SetActive(bool bNewActive, bool bReset) { NativeCall<void, bool, bool>(this, "UActorComponent.SetActive", bNewActive, bReset); }
	void ToggleActive() { NativeCall<void>(this, "UActorComponent.ToggleActive"); }
	bool IsActive() { return NativeCall<bool>(this, "UActorComponent.IsActive"); }
	void AddAssetUserData(UAssetUserData * InUserData) { NativeCall<void, UAssetUserData*>(this, "UActorComponent.AddAssetUserData", InUserData); }
	UAssetUserData * GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData*, TSubclassOf<UAssetUserData>>(this, "UActorComponent.GetAssetUserDataOfClass", InUserDataClass); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "UActorComponent.RemoveUserDataOfClass", InUserDataClass); }
	void SetNetAddressable() { NativeCall<void>(this, "UActorComponent.SetNetAddressable"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsNameStableForNetworking"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsSupportedForNetworking"); }
	void SetIsReplicated(bool ShouldReplicate) { NativeCall<void, bool>(this, "UActorComponent.SetIsReplicated", ShouldReplicate); }
	bool GetIsReplicated() { return NativeCall<bool>(this, "UActorComponent.GetIsReplicated"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "UActorComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool AlwaysReplicatePropertyConditional(UProperty * forProperty) { return NativeCall<bool, UProperty*>(this, "UActorComponent.AlwaysReplicatePropertyConditional", forProperty); }
	static void StaticRegisterNativesUActorComponent() { NativeCall<void>(nullptr, "UActorComponent.StaticRegisterNativesUActorComponent"); }
	void AddedAsPrimalItemAttachment() { NativeCall<void>(this, "UActorComponent.AddedAsPrimalItemAttachment"); }
};

struct UPrimalInventoryComponent : UActorComponent
{
	TArray<TWeakObjectPtr<AShooterPlayerController>> & RemoteViewingInventoryPlayerControllersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterPlayerController>>*>(this, "UPrimalInventoryComponent.RemoteViewingInventoryPlayerControllers"); }
	TArray<UPrimalItem*> InventoryItemsField() { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.InventoryItems"); }
	TArray<UPrimalItem*> EquippedItemsField() { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.EquippedItems"); }
	TArray<UPrimalItem*> ItemSlotsField() { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.ItemSlots"); }
	TArray<UPrimalItem*> ArkTributeItemsField() { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.ArkTributeItems"); }
	TArray<UPrimalItem*> AllDyeColorItemsField() { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.AllDyeColorItems"); }
	TArray<FItemCraftQueueEntry> & ItemCraftQueueEntriesField() { return *GetNativePointerField<TArray<FItemCraftQueueEntry>*>(this, "UPrimalInventoryComponent.ItemCraftQueueEntries"); }
	int& OverrideInventoryDefaultTabField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.OverrideInventoryDefaultTab"); }
	TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>> & EquippableItemTypesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>>*>(this, "UPrimalInventoryComponent.EquippableItemTypes"); }
	float& CraftingItemSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.CraftingItemSpeed"); }
	TArray<FItemMultiplier> & ItemSpoilingTimeMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "UPrimalInventoryComponent.ItemSpoilingTimeMultipliers"); }
	UGenericDataListEntry * ExtraItemDisplayField() { return *GetNativePointerField<UGenericDataListEntry**>(this, "UPrimalInventoryComponent.ExtraItemDisplay"); }
	int& MaxInventoryItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxInventoryItems"); }
	float& MaxInventoryWeightField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryWeight"); }
	char& TribeGroupInventoryRankField() { return *GetNativePointerField<char*>(this, "UPrimalInventoryComponent.TribeGroupInventoryRank"); }
	int& NumSlotsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.NumSlots"); }
	int& MaxItemCraftQueueEntriesField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxItemCraftQueueEntries"); }
	FString & RemoteInventoryDescriptionStringField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.RemoteInventoryDescriptionString"); }
	TSubclassOf<UPrimalItem> & EngramRequirementClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalInventoryComponent.EngramRequirementClassOverride"); }
	TArray<TSubclassOf<UPrimalItem>> & RemoteAddItemOnlyAllowItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.RemoteAddItemOnlyAllowItemClasses"); }
	TArray<TSubclassOf<UPrimalItem>> & RemoteAddItemPreventItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.RemoteAddItemPreventItemClasses"); }
	TArray<FEventItem> & EventItemsField() { return *GetNativePointerField<TArray<FEventItem>*>(this, "UPrimalInventoryComponent.EventItems"); }
	TArray<TSubclassOf<UPrimalItem>> & DefaultInventoryItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems"); }
	TArray<TSubclassOf<UPrimalItem>> & DefaultInventoryItems2Field() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems2"); }
	TArray<TSubclassOf<UPrimalItem>> & DefaultInventoryItems3Field() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems3"); }
	TArray<TSubclassOf<UPrimalItem>> & DefaultInventoryItems4Field() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems4"); }
	TArray<FString> & DefaultInventoryItemsRandomCustomStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStrings"); }
	TArray<float> & DefaultInventoryItemsRandomCustomStringsWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStringsWeights"); }
	TArray<TSubclassOf<UPrimalItem>> & CheatInventoryItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.CheatInventoryItems"); }
	TArray<TSubclassOf<UPrimalItem>> & DefaultEquippedItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.DefaultEquippedItems"); }
	TArray<TSubclassOf<UPrimalItem>> & DefaultEquippedItemSkinsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.DefaultEquippedItemSkins"); }
	TArray<TSubclassOf<UPrimalItem>> & DefaultSlotItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.DefaultSlotItems"); }
	TArray<FItemSpawnActorClassOverride> & ItemSpawnActorClassOverridesField() { return *GetNativePointerField<TArray<FItemSpawnActorClassOverride>*>(this, "UPrimalInventoryComponent.ItemSpawnActorClassOverrides"); }
	TArray<TSubclassOf<UPrimalItem>> & OnlyAllowCraftingItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.OnlyAllowCraftingItemClasses"); }
	TArray<unsigned char> & DefaultEngramsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams"); }
	TArray<unsigned char> & DefaultEngrams2Field() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams2"); }
	TArray<unsigned char> & DefaultEngrams3Field() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams3"); }
	TArray<unsigned char> & DefaultEngrams4Field() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalInventoryComponent.DefaultEngrams4"); }
	TArray<float> & DefaultInventoryQualitiesField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.DefaultInventoryQualities"); }
	FString & InventoryNameOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.InventoryNameOverride"); }
	float& MaxRemoteInventoryViewingDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxRemoteInventoryViewingDistance"); }
	float& ActiveInventoryRefreshIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.ActiveInventoryRefreshInterval"); }
	int& AbsoluteMaxInventoryItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.AbsoluteMaxInventoryItems"); }
	long double& LastInventoryRefreshTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastInventoryRefreshTime"); }
	TSubclassOf<ADroppedItem> & DroppedItemTemplateOverrideField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalInventoryComponent.DroppedItemTemplateOverride"); }
	TArray<TSubclassOf<UPrimalItem>> & ForceAllowItemStackingsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.ForceAllowItemStackings"); }
	FRotator & DropItemRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "UPrimalInventoryComponent.DropItemRotationOffset"); }
	TArray<FItemCraftingConsumptionReplenishment> & ItemCraftingConsumptionReplenishmentsField() { return *GetNativePointerField<TArray<FItemCraftingConsumptionReplenishment>*>(this, "UPrimalInventoryComponent.ItemCraftingConsumptionReplenishments"); }
	float& MaxItemCooldownTimeClearField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemCooldownTimeClear"); }
	TArray<FItemMultiplier> & MaxItemTemplateQuantitiesField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "UPrimalInventoryComponent.MaxItemTemplateQuantities"); }
	USoundBase * ItemCraftingSoundOverrideField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.ItemCraftingSoundOverride"); }
	TArray<FActorClassAttachmentInfo> & WeaponAsEquipmentAttachmentInfosField() { return *GetNativePointerField<TArray<FActorClassAttachmentInfo>*>(this, "UPrimalInventoryComponent.WeaponAsEquipmentAttachmentInfos"); }
	TArray<UPrimalItem*> CraftingItemsField() { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.CraftingItems"); }
	int& DisplayDefaultItemInventoryCountField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DisplayDefaultItemInventoryCount"); }
	bool& bHasBeenRegisteredField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bHasBeenRegistered"); }
	TArray<TSubclassOf<UPrimalItem>> & LastUsedItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.LastUsedItemClasses"); }
	TArray<double> & LastUsedItemTimesField() { return *GetNativePointerField<TArray<double>*>(this, "UPrimalInventoryComponent.LastUsedItemTimes"); }
	int& InvUpdatedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.InvUpdatedFrame"); }
	long double& LastRefreshCheckItemTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastRefreshCheckItemTime"); }
	bool& bLastPreventUseItemSpoilingTimeMultipliersField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bLastPreventUseItemSpoilingTimeMultipliers"); }
	FItemNetID & NextItemSpoilingIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalInventoryComponent.NextItemSpoilingID"); }
	FItemNetID & NextItemConsumptionIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalInventoryComponent.NextItemConsumptionID"); }
	float& MinItemSetsField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MinItemSets"); }
	float& MaxItemSetsField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemSets"); }
	float& NumItemSetsPowerField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.NumItemSetsPower"); }
	TArray<FSupplyCrateItemSet> & ItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "UPrimalInventoryComponent.ItemSets"); }
	TArray<FSupplyCrateItemSet> & AdditionalItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "UPrimalInventoryComponent.AdditionalItemSets"); }
	TSubclassOf<UPrimalSupplyCrateItemSets> & ItemSetsOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSets>*>(this, "UPrimalInventoryComponent.ItemSetsOverride"); }
	TArray<float> & SetQuantityWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.SetQuantityWeights"); }
	TArray<float> & SetQuantityValuesField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalInventoryComponent.SetQuantityValues"); }
	USoundBase * ItemRemovedBySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.ItemRemovedBySound"); }
	USoundBase * OpenInventorySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.OpenInventorySound"); }
	USoundBase * CloseInventorySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.CloseInventorySound"); }
	float& MaxInventoryAccessDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryAccessDistance"); }
	TArray<FString> & ServerCustomFolderField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalInventoryComponent.ServerCustomFolder"); }
	TArray<TSubclassOf<UPrimalInventoryComponent>> & ForceAllowCraftingForInventoryComponentsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalInventoryComponent>>*>(this, "UPrimalInventoryComponent.ForceAllowCraftingForInventoryComponents"); }
	TArray<FItemMultiplier> & ItemClassWeightMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "UPrimalInventoryComponent.ItemClassWeightMultipliers"); }
	float& GenerateItemSetsQualityMultiplierMinField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMin"); }
	float& GenerateItemSetsQualityMultiplierMaxField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMax"); }
	float& DefaultCraftingRequirementsMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.DefaultCraftingRequirementsMultiplier"); }
	int& DefaultCraftingQuantityMultiplierField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DefaultCraftingQuantityMultiplier"); }
	int& ActionWheelAccessInventoryPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ActionWheelAccessInventoryPriority"); }
	int& SavedForceDefaultInventoryRefreshVersionField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.SavedForceDefaultInventoryRefreshVersion"); }
	int& ForceDefaultInventoryRefreshVersionField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ForceDefaultInventoryRefreshVersion"); }
	TArray<TSubclassOf<UPrimalItem>> & TamedDinoForceConsiderFoodTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalInventoryComponent.TamedDinoForceConsiderFoodTypes"); }
	TArray<UPrimalItem*> DinoAutoHealingItemsField() { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.DinoAutoHealingItems"); }
	USoundBase * OverrideCraftingFinishedSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.OverrideCraftingFinishedSound"); }
	long double& LastAddToCraftQueueSoundTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastAddToCraftQueueSoundTime"); }
	FString & ForceAddToFolderField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.ForceAddToFolder"); }
	FVector & GroundDropTraceLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalInventoryComponent.GroundDropTraceLocationOffset"); }

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
	BitFieldValue<bool, unsigned __int32> bUseBPAllowAddInventoryItem() { return { this, "UPrimalInventoryComponent.bUseBPAllowAddInventoryItem" }; }
	BitFieldValue<bool, unsigned __int32> bHideSaddleFromInventoryDisplay() { return { this, "UPrimalInventoryComponent.bHideSaddleFromInventoryDisplay" }; }
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
	BitFieldValue<bool, unsigned __int32> bIsSecondaryInventory() { return { this, "UPrimalInventoryComponent.bIsSecondaryInventory" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryGetMaxVisibleSlots() { return { this, "UPrimalInventoryComponent.bUseBPRemoteInventoryGetMaxVisibleSlots" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetExtraItemDisplay() { return { this, "UPrimalInventoryComponent.bUseBPGetExtraItemDisplay" }; }
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
	BitFieldValue<bool, unsigned __int32> bNotifyAddedOnClientReceive() { return { this, "UPrimalInventoryComponent.bNotifyAddedOnClientReceive" }; }
	BitFieldValue<bool, unsigned __int32> bIsTaxidermyBase() { return { this, "UPrimalInventoryComponent.bIsTaxidermyBase" }; }
	BitFieldValue<bool, unsigned __int32> bDeferCheckForAutoCraftBlueprintsOnInventoryChange() { return { this, "UPrimalInventoryComponent.bDeferCheckForAutoCraftBlueprintsOnInventoryChange" }; }
	BitFieldValue<bool, unsigned __int32> bSetsRandomWithoutReplacement() { return { this, "UPrimalInventoryComponent.bSetsRandomWithoutReplacement" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowAllUseInInventory() { return { this, "UPrimalInventoryComponent.bForceAllowAllUseInInventory" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsValidCraftingResource() { return { this, "UPrimalInventoryComponent.bUseBPIsValidCraftingResource" }; }
	BitFieldValue<bool, unsigned __int32> bUseParentStructureIsValidCraftingResource() { return { this, "UPrimalInventoryComponent.bUseParentStructureIsValidCraftingResource" }; }
	BitFieldValue<bool, unsigned __int32> bSetCraftingEnabledCheckForAutoCraftBlueprints() { return { this, "UPrimalInventoryComponent.bSetCraftingEnabledCheckForAutoCraftBlueprints" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowViewing() { return { this, "UPrimalInventoryComponent.bUseBPRemoteInventoryAllowViewing" }; }
	BitFieldValue<bool, unsigned __int32> bAllDefaultInventoryIsEngrams() { return { this, "UPrimalInventoryComponent.bAllDefaultInventoryIsEngrams" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanGrindItems() { return { this, "UPrimalInventoryComponent.bUseBPCanGrindItems" }; }
	BitFieldValue<bool, unsigned __int32> bGrinderCanGrindAll() { return { this, "UPrimalInventoryComponent.bGrinderCanGrindAll" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedDefaultInventory() { return { this, "UPrimalInventoryComponent.bInitializedDefaultInventory" }; }
	BitFieldValue<bool, unsigned __int32> bGetDataListEntriesOnlyRootItems() { return { this, "UPrimalInventoryComponent.bGetDataListEntriesOnlyRootItems" }; }
	BitFieldValue<bool, unsigned __int32> bConfigOverriden() { return { this, "UPrimalInventoryComponent.bConfigOverriden" }; }

	// Functions

	int GetInventoryUpdatedFrame() { return NativeCall<int>(this, "UPrimalInventoryComponent.GetInventoryUpdatedFrame"); }
	static UClass * StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalInventoryComponent.StaticClass"); }
	void OnRegister() { NativeCall<void>(this, "UPrimalInventoryComponent.OnRegister"); }
	bool CanEquipItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.CanEquipItems"); }
	bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.AllowEquippingItemType", equipmentType); }
	bool CanEquipItem(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.CanEquipItem", anItem); }
	bool CanInventoryItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.CanInventoryItems"); }
	bool CanInventoryItem(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.CanInventoryItem", anItem); }
	bool AllowAddInventoryItem(UPrimalItem * anItem, int* requestedQuantity, bool OnlyAddAll) { return NativeCall<bool, UPrimalItem*, int*, bool>(this, "UPrimalInventoryComponent.AllowAddInventoryItem", anItem, requestedQuantity, OnlyAddAll); }
	UPrimalItem * AddItem(FItemNetInfo * theItemInfo, bool bEquipItem, bool AddToSlot, bool bDontStack, FItemNetID * InventoryInsertAfterItemID, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bForceIncompleteStacking, AShooterCharacter * OwnerPlayer, bool bIgnoreAbsoluteMaxInventory) { return NativeCall<UPrimalItem*, FItemNetInfo*, bool, bool, bool, FItemNetID*, bool, bool, bool, AShooterCharacter*, bool>(this, "UPrimalInventoryComponent.AddItem", theItemInfo, bEquipItem, AddToSlot, bDontStack, InventoryInsertAfterItemID, ShowHUDNotification, bDontRecalcSpoilingTime, bForceIncompleteStacking, OwnerPlayer, bIgnoreAbsoluteMaxInventory); }
	bool IsLocalInventoryViewer() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocalInventoryViewer"); }
	void NotifyItemAdded(UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalItem*, bool>(this, "UPrimalInventoryComponent.NotifyItemAdded", theItem, bEquippedItem); }
	void NotifyArkItemAdded() { NativeCall<void>(this, "UPrimalInventoryComponent.NotifyArkItemAdded"); }
	void NotifyItemRemoved(UPrimalItem * theItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.NotifyItemRemoved", theItem); }
	void RemoveItemSpoilingTimer(UPrimalItem * theItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.RemoveItemSpoilingTimer", theItem); }
	bool LoadAdditionalStructureEngrams() { return NativeCall<bool>(this, "UPrimalInventoryComponent.LoadAdditionalStructureEngrams"); }
	bool RemoveItem(FItemNetID * itemID, bool bDoDrop, bool bSecondryAction, bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, FItemNetID*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.RemoveItem", itemID, bDoDrop, bSecondryAction, bForceRemoval, showHUDMessage); }
	ADroppedItem * EjectItem(FItemNetID * itemID, bool bPreventImpule, bool bForceEject, bool bSetItemLocation, FVector * LocationOverride, bool showHUDMessage, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, bool bAssignToTribeForPickup, int AssignedTribeID) { return NativeCall<ADroppedItem*, FItemNetID*, bool, bool, bool, FVector*, bool, TSubclassOf<ADroppedItem>, bool, int>(this, "UPrimalInventoryComponent.EjectItem", itemID, bPreventImpule, bForceEject, bSetItemLocation, LocationOverride, showHUDMessage, TheDroppedTemplateOverride, bAssignToTribeForPickup, AssignedTribeID); }
	bool ServerEquipItem(FItemNetID * itemID) { return NativeCall<bool, FItemNetID*>(this, "UPrimalInventoryComponent.ServerEquipItem", itemID); }
	void DropItem(FItemNetInfo * theInfo, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation) { NativeCall<void, FItemNetInfo*, bool, FVector*, FRotator*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.DropItem", theInfo, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation); }
	static ADroppedItem * StaticDropNewItem(AActor * forActor, TSubclassOf<UPrimalItem> AnItemClass, float ItemQuality, bool bForceNoBlueprint, int QuantityOverride, bool bForceBlueprint, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator * DroppedRotationOffset, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondaryAction, bool bSetItemDropLocation, UStaticMesh * DroppedMeshOverride, FVector DroppedScaleOverride, UMaterialInterface * DroppedMaterialOverride, float DroppedLifeSpanOverride) { return NativeCall<ADroppedItem*, AActor*, TSubclassOf<UPrimalItem>, float, bool, int, bool, TSubclassOf<ADroppedItem>, FRotator*, bool, FVector*, FRotator*, bool, bool, bool, bool, UStaticMesh*, FVector, UMaterialInterface*, float>(nullptr, "UPrimalInventoryComponent.StaticDropNewItem", forActor, AnItemClass, ItemQuality, bForceNoBlueprint, QuantityOverride, bForceBlueprint, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondaryAction, bSetItemDropLocation, DroppedMeshOverride, DroppedScaleOverride, DroppedMaterialOverride, DroppedLifeSpanOverride); }
	static ADroppedItem * StaticDropNewItemWithInfo(AActor * forActor, FItemNetInfo * ItemInfo, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator * DroppedRotationOffset, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondaryAction, bool bSetItemDropLocation, UStaticMesh * DroppedMeshOverride, FVector DroppedScaleOverride, UMaterialInterface * DroppedMaterialOverride, float DroppedLifeSpanOverride) { return NativeCall<ADroppedItem*, AActor*, FItemNetInfo*, TSubclassOf<ADroppedItem>, FRotator*, bool, FVector*, FRotator*, bool, bool, bool, bool, UStaticMesh*, FVector, UMaterialInterface*, float>(nullptr, "UPrimalInventoryComponent.StaticDropNewItemWithInfo", forActor, ItemInfo, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondaryAction, bSetItemDropLocation, DroppedMeshOverride, DroppedScaleOverride, DroppedMaterialOverride, DroppedLifeSpanOverride); }
	static ADroppedItem * StaticDropItem(AActor * forActor, FItemNetInfo * theInfo, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator * DroppedRotationOffset, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation, UStaticMesh * DroppedMeshOverride, FVector * DroppedScaleOverride, UMaterialInterface * DroppedMaterialOverride, float DroppedLifeSpanOverride) { return NativeCall<ADroppedItem*, AActor*, FItemNetInfo*, TSubclassOf<ADroppedItem>, FRotator*, bool, FVector*, FRotator*, bool, bool, bool, bool, UStaticMesh*, FVector*, UMaterialInterface*, float>(nullptr, "UPrimalInventoryComponent.StaticDropItem", forActor, theInfo, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation, DroppedMeshOverride, DroppedScaleOverride, DroppedMaterialOverride, DroppedLifeSpanOverride); }
	AShooterPlayerController * GetOwnerController() { return NativeCall<AShooterPlayerController*>(this, "UPrimalInventoryComponent.GetOwnerController"); }
	void InventoryViewersPlayLocalSound(USoundBase * aSound, bool bAttach) { NativeCall<void, USoundBase*, bool>(this, "UPrimalInventoryComponent.InventoryViewersPlayLocalSound", aSound, bAttach); }
	void InventoryViewersStopLocalSound(USoundBase * aSound) { NativeCall<void, USoundBase*>(this, "UPrimalInventoryComponent.InventoryViewersStopLocalSound", aSound); }
	void UpdateNetWeaponClipAmmo(UPrimalItem * anItem, int ammo) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalInventoryComponent.UpdateNetWeaponClipAmmo", anItem, ammo); }
	void NotifyClientsItemStatus(UPrimalItem * anItem, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, UPrimalItem * anItem2, FItemNetID * InventoryInsertAfterItemID, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalItem*, bool, bool, bool, bool, bool, UPrimalItem*, FItemNetID*, bool, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientsItemStatus", anItem, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, anItem2, InventoryInsertAfterItemID, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void NotifyClientsDurabilityChange(UPrimalItem * anItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.NotifyClientsDurabilityChange", anItem); }
	void NotifyClientItemArkTributeStatusChanged(UPrimalItem * anItem, bool bRemoved, bool bFromLoad) { NativeCall<void, UPrimalItem*, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientItemArkTributeStatusChanged", anItem, bRemoved, bFromLoad); }
	void ServerRequestItems(AShooterPlayerController * forPC, bool bEquippedItems, bool bIsFirstSpawn) { NativeCall<void, AShooterPlayerController*, bool, bool>(this, "UPrimalInventoryComponent.ServerRequestItems", forPC, bEquippedItems, bIsFirstSpawn); }
	void ClientStartReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientStartReceivingItems", bEquippedItems); }
	void ClientFinishReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientFinishReceivingItems", bEquippedItems); }
	TArray<UPrimalItem*> * FindColorItem(TArray<UPrimalItem*> * result, FColor theColor, bool bEquippedItems) { return NativeCall<TArray<UPrimalItem*>*, TArray<UPrimalItem*>*, FColor, bool>(this, "UPrimalInventoryComponent.FindColorItem", result, theColor, bEquippedItems); }
	TArray<UPrimalItem*> * FindBrushColorItem(TArray<UPrimalItem*> * result, __int16 ArchIndex) { return NativeCall<TArray<UPrimalItem*>*, TArray<UPrimalItem*>*, __int16>(this, "UPrimalInventoryComponent.FindBrushColorItem", result, ArchIndex); }
	UPrimalItem * FindItem(FItemNetID * ItemID, bool bEquippedItems, bool bAllItems, int* itemIdx) { return NativeCall<UPrimalItem*, FItemNetID*, bool, bool, int*>(this, "UPrimalInventoryComponent.FindItem", ItemID, bEquippedItems, bAllItems, itemIdx); }
	void GiveInitialItems(bool SkipEngrams) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.GiveInitialItems", SkipEngrams); }
	void InitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitDefaultInventory"); }
	void DeferredDeprecationCheck() { NativeCall<void>(this, "UPrimalInventoryComponent.DeferredDeprecationCheck"); }
	void InitializeInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitializeInventory"); }
	void CheckRefreshDefaultInventoryItems() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckRefreshDefaultInventoryItems"); }
	void SetEquippedItemsOwnerNoSee(bool bNewOwnerNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.SetEquippedItemsOwnerNoSee", bNewOwnerNoSee, bForceHideFirstPerson); }
	bool RemoteInventoryAllowViewing(AShooterPlayerController * PC, float MaxAllowedDistanceOffset) { return NativeCall<bool, AShooterPlayerController*, float>(this, "UPrimalInventoryComponent.RemoteInventoryAllowViewing", PC, MaxAllowedDistanceOffset); }
	bool RemoteInventoryAllowAddItems(AShooterPlayerController * PC, UPrimalItem * anItem, int* anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
	bool RemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer, int* requestedQuantity, bool bRequestedByPlayer, bool bRequestDropping) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int*, bool, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRemoveItems", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer, bRequestDropping); }
	bool RemoteInventoryAllowCraftingItems(AShooterPlayerController * PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowCraftingItems", PC, bIgnoreEnabled); }
	bool RemoteInventoryAllowRepairingItems(AShooterPlayerController * PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRepairingItems", PC, bIgnoreEnabled); }
	bool AllowAddingToArkTribute() { return NativeCall<bool>(this, "UPrimalInventoryComponent.AllowAddingToArkTribute"); }
	void ServerViewRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerViewRemoteInventory", ByPC); }
	void ServerCloseRemoteInventory(AShooterPlayerController * ByPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerCloseRemoteInventory", ByPC); }
	void ClientUpdateFreeCraftingMode_Implementation(bool bNewFreeCraftingModeValue) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode_Implementation", bNewFreeCraftingModeValue); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentDestroyed"); }
	void SwapCustomFolder(FString CFolder1, FString CFolder2, int DataListType) { NativeCall<void, FString, FString, int>(this, "UPrimalInventoryComponent.SwapCustomFolder", CFolder1, CFolder2, DataListType); }
	bool AddToFolders(TArray<FString> * FoldersFound, UPrimalItem * anItem) { return NativeCall<bool, TArray<FString>*, UPrimalItem*>(this, "UPrimalInventoryComponent.AddToFolders", FoldersFound, anItem); }
	UObject * GetObjectW() { return NativeCall<UObject*>(this, "UPrimalInventoryComponent.GetObjectW"); }
	FString * GetInventoryName(FString * result, bool bIsEquipped) { return NativeCall<FString*, FString*, bool>(this, "UPrimalInventoryComponent.GetInventoryName", result, bIsEquipped); }
	int GetFirstUnoccupiedSlot(AShooterPlayerState * forPlayerState, UPrimalItem * forItem) { return NativeCall<int, AShooterPlayerState*, UPrimalItem*>(this, "UPrimalInventoryComponent.GetFirstUnoccupiedSlot", forPlayerState, forItem); }
	void ServerMakeRecipeItem_Implementation(APrimalStructureItemContainer * Container, FItemNetID NoteToConsume, TSubclassOf<UPrimalItem> RecipeItemTemplate, FString * CustomName, FString * CustomDescription, TArray<FColor> * CustomColors, TArray<FCraftingResourceRequirement> * CustomRequirements) { NativeCall<void, APrimalStructureItemContainer*, FItemNetID, TSubclassOf<UPrimalItem>, FString*, FString*, TArray<FColor>*, TArray<FCraftingResourceRequirement>*>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem_Implementation", Container, NoteToConsume, RecipeItemTemplate, CustomName, CustomDescription, CustomColors, CustomRequirements); }
	void ServerRemoveItemFromSlot_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot_Implementation", ItemID); }
	void ServerAddItemToSlot_Implementation(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerAddItemToSlot_Implementation", ItemID, SlotIndex); }
	UPrimalItem * GetEquippedItemOfType(EPrimalEquipmentType::Type aType) { return NativeCall<UPrimalItem*, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.GetEquippedItemOfType", aType); }
	UPrimalItem * GetEquippedItemOfClass(TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetEquippedItemOfClass", ItemClass); }
	int IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, UPrimalItem * *UseSpecificItem, UPrimalItem * *IncrementedItem, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bDontExceedMaxItems) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool, bool, UPrimalItem**, UPrimalItem**, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.IncrementItemTemplateQuantity", ItemTemplate, amount, bReplicateToClient, bIsBlueprint, UseSpecificItem, IncrementedItem, bRequireExactClassMatch, bIsCraftingResourceConsumption, bIsFromUseConsumption, bIsArkTributeItem, ShowHUDNotification, bDontRecalcSpoilingTime, bDontExceedMaxItems); }
	bool IncrementArkTributeItemQuantity(UPrimalItem * NewItem, UPrimalItem * *IncrementedItem) { return NativeCall<bool, UPrimalItem*, UPrimalItem**>(this, "UPrimalInventoryComponent.IncrementArkTributeItemQuantity", NewItem, IncrementedItem); }
	UPrimalItem * GetItemOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate, bool bOnlyInventoryItems, bool bOnlyEquippedItems, bool IgnoreItemsWithFullQuantity, bool bFavorSlotItems, bool bIsBlueprint, UPrimalItem * CheckCanStackWithItem, bool bRequiresExactClassMatch, int* CheckCanStackWithItemQuantityOverride, bool bIgnoreSlotItems, bool bOnlyArkTributeItems, bool bPreferEngram, bool bIsForCraftingConsumption) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, UPrimalItem*, bool, int*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.GetItemOfTemplate", ItemTemplate, bOnlyInventoryItems, bOnlyEquippedItems, IgnoreItemsWithFullQuantity, bFavorSlotItems, bIsBlueprint, CheckCanStackWithItem, bRequiresExactClassMatch, CheckCanStackWithItemQuantityOverride, bIgnoreSlotItems, bOnlyArkTributeItems, bPreferEngram, bIsForCraftingConsumption); }
	TArray<UPrimalItem*> * FindAllItemsOfType(TArray<UPrimalItem*> * result, TSubclassOf<UPrimalItem> ItemTemplate, bool bRequiresExactClassMatch, bool bIncludeInventoryItems, bool bIncludeEquippedItems, bool bIncludeArkTributeItems, bool bIncludeSlotItems, bool bIncludeBlueprints, bool bIncludeEngrams) { return NativeCall<TArray<UPrimalItem*>*, TArray<UPrimalItem*>*, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.FindAllItemsOfType", result, ItemTemplate, bRequiresExactClassMatch, bIncludeInventoryItems, bIncludeEquippedItems, bIncludeArkTributeItems, bIncludeSlotItems, bIncludeBlueprints, bIncludeEngrams); }
	int GetCraftQueueResourceCost(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem * IgnoreFirstItem) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem*>(this, "UPrimalInventoryComponent.GetCraftQueueResourceCost", ItemTemplate, IgnoreFirstItem); }
	int GetItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem * IgnoreItem, bool bIgnoreBlueprints, bool bCheckValidForCrafting, bool bRequireExactClassMatch, bool bForceCheckForDupes) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.GetItemTemplateQuantity", ItemTemplate, IgnoreItem, bIgnoreBlueprints, bCheckValidForCrafting, bRequireExactClassMatch, bForceCheckForDupes); }
	float GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetTotalDurabilityOfTemplate", ItemTemplate); }
	void LocalUseItemSlot(int slotIndex, bool bForceCraft) { NativeCall<void, int, bool>(this, "UPrimalInventoryComponent.LocalUseItemSlot", slotIndex, bForceCraft); }
	void ShowBeforeUsingConfirmationDialog(UPrimalItem * Item) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.ShowBeforeUsingConfirmationDialog", Item); }
	float GetTotalEquippedItemStat(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalInventoryComponent.GetTotalEquippedItemStat", statType); }
	float GetEquippedArmorRating(EPrimalEquipmentType::Type equipmentType) { return NativeCall<float, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.GetEquippedArmorRating", equipmentType); }
	void ConsumeArmorDurability(float ConsumptionAmount, bool bAllArmorTypes, EPrimalEquipmentType::Type SpecificArmorType) { NativeCall<void, float, bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.ConsumeArmorDurability", ConsumptionAmount, bAllArmorTypes, SpecificArmorType); }
	void ServerCraftItem(FItemNetID * itemID, AShooterPlayerController * ByPC) { NativeCall<void, FItemNetID*, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerCraftItem", itemID, ByPC); }
	void AddToCraftQueue(UPrimalItem * anItem, AShooterPlayerController * ByPC, bool bIsRepair, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, UPrimalItem*, AShooterPlayerController*, bool, bool, float, float>(this, "UPrimalInventoryComponent.AddToCraftQueue", anItem, ByPC, bIsRepair, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
	void ClearCraftQueue(bool bForceClearActiveCraftRepair) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClearCraftQueue", bForceClearActiveCraftRepair); }
	void ServerRepairItem(FItemNetID * itemID, AShooterPlayerController * ByPC, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, FItemNetID*, AShooterPlayerController*, bool, float, float>(this, "UPrimalInventoryComponent.ServerRepairItem", itemID, ByPC, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
	void ServerUseInventoryItem(FItemNetID * itemID, AShooterPlayerController * ByPC) { NativeCall<void, FItemNetID*, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerUseInventoryItem", itemID, ByPC); }
	void ServerUseItemWithItem(FItemNetID * itemID1, FItemNetID * itemID2, int AdditionalData) { NativeCall<void, FItemNetID*, FItemNetID*, int>(this, "UPrimalInventoryComponent.ServerUseItemWithItem", itemID1, itemID2, AdditionalData); }
	void SwapInventoryItems(FItemNetID * itemID1, FItemNetID * itemID2) { NativeCall<void, FItemNetID*, FItemNetID*>(this, "UPrimalInventoryComponent.SwapInventoryItems", itemID1, itemID2); }
	void AddItemCrafting(UPrimalItem * craftingItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.AddItemCrafting", craftingItem); }
	void RemoveItemCrafting(UPrimalItem * craftingItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.RemoveItemCrafting", craftingItem); }
	void StopAllCraftingRepairing() { NativeCall<void>(this, "UPrimalInventoryComponent.StopAllCraftingRepairing"); }
	void TickCraftQueue(float DeltaTime, AShooterGameState * theGameState) { NativeCall<void, float, AShooterGameState*>(this, "UPrimalInventoryComponent.TickCraftQueue", DeltaTime, theGameState); }
	float GetCraftingSpeed() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetCraftingSpeed"); }
	AShooterHUD * GetLocalOwnerHUD() { return NativeCall<AShooterHUD*>(this, "UPrimalInventoryComponent.GetLocalOwnerHUD"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "UPrimalInventoryComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool AllowOwnerStasis() { return NativeCall<bool>(this, "UPrimalInventoryComponent.AllowOwnerStasis"); }
	bool IsLocal() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocal"); }
	bool IsLocalToPlayer(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.IsLocalToPlayer", ForPC); }
	int GetMaxInventoryItems(bool bIgnoreHiddenDefaultInventory) { return NativeCall<int, bool>(this, "UPrimalInventoryComponent.GetMaxInventoryItems", bIgnoreHiddenDefaultInventory); }
	int GetCurrentNumInventoryItems() { return NativeCall<int>(this, "UPrimalInventoryComponent.GetCurrentNumInventoryItems"); }
	void Unstasised() { NativeCall<void>(this, "UPrimalInventoryComponent.Unstasised"); }
	void CheckForAutoCraftBlueprints() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckForAutoCraftBlueprints"); }
	bool IsCraftingAllowed(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.IsCraftingAllowed", anItem); }
	void SetCraftingEnabled(bool bEnable) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.SetCraftingEnabled", bEnable); }
	bool IsRepairingAllowed() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsRepairingAllowed"); }
	float GetInventoryWeight() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetInventoryWeight"); }
	void ServerSplitItemStack_Implementation(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack_Implementation", ItemID, AmountToSplit); }
	void ServerMergeItemStack_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerMergeItemStack_Implementation", ItemID); }
	void GrindItem(FItemNetID ItemID, const bool grindStack, AShooterPlayerController * PC) { NativeCall<void, FItemNetID, const bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.GrindItem", ItemID, grindStack, PC); }
	void OnGrindItem() { NativeCall<void>(this, "UPrimalInventoryComponent.OnGrindItem"); }
	void ServerForceMergeItemStack_Implementation(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack_Implementation", Item1ID, Item2ID); }
	void RemoteDeleteCustomFolder(FString * CFolderName, int InventoryCompType) { NativeCall<void, FString*, int>(this, "UPrimalInventoryComponent.RemoteDeleteCustomFolder", CFolderName, InventoryCompType); }
	void RemoteAddItemToCustomFolder(FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, FString*, int, FItemNetID>(this, "UPrimalInventoryComponent.RemoteAddItemToCustomFolder", CFolderName, InventoryCompType, ItemId); }
	void RemoteDeleteItemFromCustomFolder(AShooterPlayerController * PC, FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, AShooterPlayerController*, FString*, int, FItemNetID>(this, "UPrimalInventoryComponent.RemoteDeleteItemFromCustomFolder", PC, CFolderName, InventoryCompType, ItemId); }
	UPrimalItem * FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem> ItemClass, bool bFindLeastQuantity, UPrimalItem * StacksWithAndIgnoreItem) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>, bool, UPrimalItem*>(this, "UPrimalInventoryComponent.FindInventoryStackableItemCompareQuantity", ItemClass, bFindLeastQuantity, StacksWithAndIgnoreItem); }
	UPrimalCharacterStatusComponent * GetCharacterStatusComponent() { return NativeCall<UPrimalCharacterStatusComponent*>(this, "UPrimalInventoryComponent.GetCharacterStatusComponent"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "UPrimalInventoryComponent.ClientMultiUse", ForPC, UseIndex, hitBodyIndex); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "UPrimalInventoryComponent.TryMultiUse", ForPC, UseIndex, hitBodyIndex); }
	void GetGrinderSettings_Implementation(int* MaxQuantityToGrind, float* GrindGiveItemsPercent, int* MaxItemsToGivePerGrind) { NativeCall<void, int*, float*, int*>(this, "UPrimalInventoryComponent.GetGrinderSettings_Implementation", MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	bool IsAllowedInventoryAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController*>(this, "UPrimalInventoryComponent.IsAllowedInventoryAccess", ForPC); }
	void ActivePlayerInventoryTick(float DeltaTime) { NativeCall<void, float>(this, "UPrimalInventoryComponent.ActivePlayerInventoryTick", DeltaTime); }
	void InventoryRefresh() { NativeCall<void>(this, "UPrimalInventoryComponent.InventoryRefresh"); }
	void RefreshItemSpoilingTimes() { NativeCall<void>(this, "UPrimalInventoryComponent.RefreshItemSpoilingTimes"); }
	void NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int amount) { NativeCall<void, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.NotifyCraftingItemConsumption", ItemTemplate, amount); }
	float GetSpoilingTimeMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem*>(this, "UPrimalInventoryComponent.GetSpoilingTimeMultiplier", anItem); }
	long double GetLatestItemClassUseTime(TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<long double, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetLatestItemClassUseTime", ItemClass); }
	void UsedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.UsedItem", anItem); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.RegisterComponentTickFunctions", bRegister, bSaveAndRestoreComponentTickState); }
	void UpdatedCraftQueue() { NativeCall<void>(this, "UPrimalInventoryComponent.UpdatedCraftQueue"); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "UPrimalInventoryComponent.LoadedFromSaveGame"); }
	void ClientItemMessageNotification_Implementation(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification_Implementation", ItemID, ItemMessageType); }
	bool IsOwnedByPlayer() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsOwnedByPlayer"); }
	void OwnerDied() { NativeCall<void>(this, "UPrimalInventoryComponent.OwnerDied"); }
	bool DropInventoryDeposit(long double DestroyAtTime, bool bDoPreventSendingData, bool bIgnorEquippedItems, TSubclassOf<APrimalStructureItemContainer> OverrideInventoryDepositClass, APrimalStructureItemContainer * CopyStructureValues, APrimalStructureItemContainer * *DepositStructureResult, AActor * GroundIgnoreActor, FString CurrentCustomFolderFilter, FString CurrentNameFilter, unsigned __int64 DeathCacheCharacterID, float DropInventoryOnGroundTraceDistance, bool bForceDrop, int OverrideMaxItemsDropped, bool bOverrideDepositLocation, FVector * DepositLocationOverride, bool bForceLocation) { return NativeCall<bool, long double, bool, bool, TSubclassOf<APrimalStructureItemContainer>, APrimalStructureItemContainer*, APrimalStructureItemContainer**, AActor*, FString, FString, unsigned __int64, float, bool, int, bool, FVector*, bool>(this, "UPrimalInventoryComponent.DropInventoryDeposit", DestroyAtTime, bDoPreventSendingData, bIgnorEquippedItems, OverrideInventoryDepositClass, CopyStructureValues, DepositStructureResult, GroundIgnoreActor, CurrentCustomFolderFilter, CurrentNameFilter, DeathCacheCharacterID, DropInventoryOnGroundTraceDistance, bForceDrop, OverrideMaxItemsDropped, bOverrideDepositLocation, DepositLocationOverride, bForceLocation); }
	bool DropNotReadyInventoryDeposit(long double DestroyAtTime) { return NativeCall<bool, long double>(this, "UPrimalInventoryComponent.DropNotReadyInventoryDeposit", DestroyAtTime); }
	bool GetGroundLocation(FVector * theGroundLoc, FVector * OffsetUp, FVector * OffsetDown, APrimalStructure * *LandedOnStructure, AActor * IgnoreActor, bool bCheckAnyStationary, UPrimitiveComponent * *LandedOnComponent, bool bUseInputGroundLocAsBase) { return NativeCall<bool, FVector*, FVector*, FVector*, APrimalStructure**, AActor*, bool, UPrimitiveComponent**, bool>(this, "UPrimalInventoryComponent.GetGroundLocation", theGroundLoc, OffsetUp, OffsetDown, LandedOnStructure, IgnoreActor, bCheckAnyStationary, LandedOnComponent, bUseInputGroundLocAsBase); }
	AActor * CraftedBlueprintSpawnActor(TSubclassOf<UPrimalItem> ForItemClass, TSubclassOf<AActor> ActorClassToSpawn) { return NativeCall<AActor*, TSubclassOf<UPrimalItem>, TSubclassOf<AActor>>(this, "UPrimalInventoryComponent.CraftedBlueprintSpawnActor", ForItemClass, ActorClassToSpawn); }
	void NotifyCraftedItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.NotifyCraftedItem", anItem); }
	bool GenerateCrateItems(float MinQualityMultiplier, float MaxQualityMultiplier, int NumPasses, float QuantityMultiplier, float SetPowerWeight, float MaxItemDifficultyClamp) { return NativeCall<bool, float, float, int, float, float, float>(this, "UPrimalInventoryComponent.GenerateCrateItems", MinQualityMultiplier, MaxQualityMultiplier, NumPasses, QuantityMultiplier, SetPowerWeight, MaxItemDifficultyClamp); }
	bool GenerateCustomCrateItems(TSubclassOf<UObject> SourceClass, TArray<FSupplyCrateItemSet> CustomItemSets, float CustomMinItemSets, float CustomMaxItemSets, float CustomNumItemSetsPower, bool bCustomSetsRandomWithoutReplacement, TArray<UPrimalItem*> * GeneratedItems, float MinQualityMultiplier, float MaxQualityMultiplier, int NumPasses, float QuantityMultiplier, float SetPowerWeight, float MaxItemDifficultyClamp, bool bIsMissionReward) { return NativeCall<bool, TSubclassOf<UObject>, TArray<FSupplyCrateItemSet>, float, float, float, bool, TArray<UPrimalItem*>*, float, float, int, float, float, float, bool>(this, "UPrimalInventoryComponent.GenerateCustomCrateItems", SourceClass, CustomItemSets, CustomMinItemSets, CustomMaxItemSets, CustomNumItemSetsPower, bCustomSetsRandomWithoutReplacement, GeneratedItems, MinQualityMultiplier, MaxQualityMultiplier, NumPasses, QuantityMultiplier, SetPowerWeight, MaxItemDifficultyClamp, bIsMissionReward); }
	UPrimalItem * FindArkTributeItem(FItemNetID * ItemID) { return NativeCall<UPrimalItem*, FItemNetID*>(this, "UPrimalInventoryComponent.FindArkTributeItem", ItemID); }
	void SetNextItemSpoilingID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID_Implementation", NextItemID); }
	void SetNextItemConsumptionID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID_Implementation", NextItemID); }
	void CheckReplenishSlotIndex(int slotIndex, TSubclassOf<UPrimalItem> ClassCheckOverride) { NativeCall<void, int, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.CheckReplenishSlotIndex", slotIndex, ClassCheckOverride); }
	void OnArkTributeItemsRemoved(bool Success, TArray<FItemNetInfo> * RemovedItems, TArray<FItemNetInfo> * NotFoundItems, int FailureResponseCode, FString * FailureResponseMessage, bool bAllowForcedItemDownload) { NativeCall<void, bool, TArray<FItemNetInfo>*, TArray<FItemNetInfo>*, int, FString*, bool>(this, "UPrimalInventoryComponent.OnArkTributeItemsRemoved", Success, RemovedItems, NotFoundItems, FailureResponseCode, FailureResponseMessage, bAllowForcedItemDownload); }
	void ClientOnArkTributeItemsAdded_Implementation() { NativeCall<void>(this, "UPrimalInventoryComponent.ClientOnArkTributeItemsAdded_Implementation"); }
	void OnArkTributeItemsAdded(bool Success, TArray<FItemNetInfo> * AddedItems) { NativeCall<void, bool, TArray<FItemNetInfo>*>(this, "UPrimalInventoryComponent.OnArkTributeItemsAdded", Success, AddedItems); }
	bool RemoveArkTributeItem(FItemNetID * itemID, unsigned int Quantity) { return NativeCall<bool, FItemNetID*, unsigned int>(this, "UPrimalInventoryComponent.RemoveArkTributeItem", itemID, Quantity); }
	bool ServerAddToArkTributeInventory(FItemNetID * itemID, TArray<unsigned __int64> SteamItemUserIds, FItemNetInfo * AlternateItemInfo) { return NativeCall<bool, FItemNetID*, TArray<unsigned __int64>, FItemNetInfo*>(this, "UPrimalInventoryComponent.ServerAddToArkTributeInventory", itemID, SteamItemUserIds, AlternateItemInfo); }
	UPrimalItem * AddAfterRemovingFromArkTributeInventory(UPrimalItem * Item, FItemNetInfo * MyItem, bool bAllowForcedItemDownload) { return NativeCall<UPrimalItem*, UPrimalItem*, FItemNetInfo*, bool>(this, "UPrimalInventoryComponent.AddAfterRemovingFromArkTributeInventory", Item, MyItem, bAllowForcedItemDownload); }
	bool ServerAddFromArkTributeInventory(FItemNetID * itemID, int Quantity) { return NativeCall<bool, FItemNetID*, int>(this, "UPrimalInventoryComponent.ServerAddFromArkTributeInventory", itemID, Quantity); }
	void RequestAddArkTributeItem(FItemNetInfo * theItemInfo, bool bFromLoad) { NativeCall<void, FItemNetInfo*, bool>(this, "UPrimalInventoryComponent.RequestAddArkTributeItem", theItemInfo, bFromLoad); }
	void AddArkTributeItem(FItemNetInfo * theItemInfo, bool bFromLoad) { NativeCall<void, FItemNetInfo*, bool>(this, "UPrimalInventoryComponent.AddArkTributeItem", theItemInfo, bFromLoad); }
	void LoadArkTriuteItems(TArray<FItemNetInfo> * ItemInfos, bool bClear, bool bFinalBatch) { NativeCall<void, TArray<FItemNetInfo>*, bool, bool>(this, "UPrimalInventoryComponent.LoadArkTriuteItems", ItemInfos, bClear, bFinalBatch); }
	void FinishedLoadingArkItems() { NativeCall<void>(this, "UPrimalInventoryComponent.FinishedLoadingArkItems"); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalInventoryComponent.NotifyItemQuantityUpdated", anItem, amount); }
	bool IsServerCustomFolder(int InventoryCompType) { return NativeCall<bool, int>(this, "UPrimalInventoryComponent.IsServerCustomFolder", InventoryCompType); }
	void AddCustomFolder(FString CFolder, int InventoryCompType) { NativeCall<void, FString, int>(this, "UPrimalInventoryComponent.AddCustomFolder", CFolder, InventoryCompType); }
	void RemoveCustomFolder(AShooterPlayerController * PC, FString FolderName, int InventoryCompType) { NativeCall<void, AShooterPlayerController*, FString, int>(this, "UPrimalInventoryComponent.RemoveCustomFolder", PC, FolderName, InventoryCompType); }
	TArray<FString> * GetCustomFolders(TArray<FString> * result, int InventoryCompType) { return NativeCall<TArray<FString>*, TArray<FString>*, int>(this, "UPrimalInventoryComponent.GetCustomFolders", result, InventoryCompType); }
	void DeleteItemFromCustomFolder(AShooterPlayerController * PC, FString CFolder, FItemNetID ItemId, int InventoryCompType) { NativeCall<void, AShooterPlayerController*, FString, FItemNetID, int>(this, "UPrimalInventoryComponent.DeleteItemFromCustomFolder", PC, CFolder, ItemId, InventoryCompType); }
	int BPIncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem, UPrimalItem * UseSpecificItem, bool bDontExceedMaxItems) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool, bool, bool, bool, bool, bool, UPrimalItem*, bool>(this, "UPrimalInventoryComponent.BPIncrementItemTemplateQuantity", ItemTemplate, amount, bReplicateToClient, bIsBlueprint, bRequireExactClassMatch, bIsCraftingResourceConsumption, bIsFromUseConsumption, bIsArkTributeItem, UseSpecificItem, bDontExceedMaxItems); }
	UPrimalItem * BPGetItemOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate, bool bOnlyInventoryItems, bool bOnlyEquippedItems, bool IgnoreItemsWithFullQuantity, bool bFavorSlotItems, bool bIsBlueprint, bool bRequiresExactClassMatch, bool bIgnoreSlotItems, bool bOnlyArkItems, bool bPreferEngram, bool bIsForCraftingConsumption) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.BPGetItemOfTemplate", ItemTemplate, bOnlyInventoryItems, bOnlyEquippedItems, IgnoreItemsWithFullQuantity, bFavorSlotItems, bIsBlueprint, bRequiresExactClassMatch, bIgnoreSlotItems, bOnlyArkItems, bPreferEngram, bIsForCraftingConsumption); }
	bool HasItemsEquipped(TArray<TSubclassOf<UPrimalItem>> * ItemTemplates, bool bRequiresExactClassMatch, bool bOnlyArkItems, bool bEnsureAllItems) { return NativeCall<bool, TArray<TSubclassOf<UPrimalItem>>*, bool, bool, bool>(this, "UPrimalInventoryComponent.HasItemsEquipped", ItemTemplates, bRequiresExactClassMatch, bOnlyArkItems, bEnsureAllItems); }
	bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.OverrideBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	bool AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.AllowBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.AllowCraftingResourceConsumption", ItemTemplate, ItemQuantity); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetDamageTorpidityIncreaseMultiplierScale"); }
	float GetIndirectTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetIndirectTorpidityIncreaseMultiplierScale"); }
	float GetItemWeightMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem*>(this, "UPrimalInventoryComponent.GetItemWeightMultiplier", anItem); }
	void UpdateTribeGroupInventoryRank_Implementation(char NewRank) { NativeCall<void, char>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank_Implementation", NewRank); }
	void BPDropInventoryDeposit(long double DestroyAtTime, int OverrideMaxItemsDropped, bool bOverrideCacheLocation, FVector CacheLocationOverride) { NativeCall<void, long double, int, bool, FVector>(this, "UPrimalInventoryComponent.BPDropInventoryDeposit", DestroyAtTime, OverrideMaxItemsDropped, bOverrideCacheLocation, CacheLocationOverride); }
	void BPDropForceLocationInventoryDeposit(long double DestroyAtTime, int OverrideMaxItemsDropped, FVector CacheLocationOverride, int DeadPlayerID) { NativeCall<void, long double, int, FVector, int>(this, "UPrimalInventoryComponent.BPDropForceLocationInventoryDeposit", DestroyAtTime, OverrideMaxItemsDropped, CacheLocationOverride, DeadPlayerID); }
	float OverrideItemMinimumUseInterval(UPrimalItem * theItem) { return NativeCall<float, UPrimalItem*>(this, "UPrimalInventoryComponent.OverrideItemMinimumUseInterval", theItem); }
	UPrimalItem * AddItemObject(UPrimalItem * anItem) { return NativeCall<UPrimalItem*, UPrimalItem*>(this, "UPrimalInventoryComponent.AddItemObject", anItem); }
	UPrimalItem * AddItemObjectEx(UPrimalItem * anItem, bool bEquipItem, bool AddToSlot, bool bDontStack, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bForceIncompleteStacking, AShooterCharacter * OwnerPlayer) { return NativeCall<UPrimalItem*, UPrimalItem*, bool, bool, bool, bool, bool, bool, AShooterCharacter*>(this, "UPrimalInventoryComponent.AddItemObjectEx", anItem, bEquipItem, AddToSlot, bDontStack, ShowHUDNotification, bDontRecalcSpoilingTime, bForceIncompleteStacking, OwnerPlayer); }
	UPrimalItem * BPFindItemWithID(int ItemID1, int ItemID2) { return NativeCall<UPrimalItem*, int, int>(this, "UPrimalInventoryComponent.BPFindItemWithID", ItemID1, ItemID2); }
	bool AllowAddInventoryItem_OnlyAddAll(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_OnlyAddAll", anItem); }
	bool AllowAddInventoryItem_MaxQuantity(UPrimalItem * anItem, const int* requestedQuantityIn, int* requestedQuantityOut) { return NativeCall<bool, UPrimalItem*, const int*, int*>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_MaxQuantity", anItem, requestedQuantityIn, requestedQuantityOut); }
	bool AllowAddInventoryItem_AnyQuantity(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_AnyQuantity", anItem); }
	bool BPRemoteInventoryAllowAddItems(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItems", PC); }
	bool BPRemoteInventoryAllowAddItem(AShooterPlayerController * PC, UPrimalItem * anItem) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem", PC, anItem); }
	bool BPRemoteInventoryAllowAddItem_SpecificQuantity(AShooterPlayerController * PC, UPrimalItem * anItem, const int* SpecificQuantityIn, int* SpecificQuantityOut) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, const int*, int*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem_SpecificQuantity", PC, anItem, SpecificQuantityIn, SpecificQuantityOut); }
	bool IsValidCraftingResource(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.IsValidCraftingResource", theItem); }
	void OnComponentCreated() { NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentCreated"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive*>(this, "UPrimalInventoryComponent.Serialize", Ar); }
	bool IsAtMaxInventoryItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsAtMaxInventoryItems"); }
	void TransferAllItemsToInventory(UPrimalInventoryComponent * ToInventory) { NativeCall<void, UPrimalInventoryComponent*>(this, "UPrimalInventoryComponent.TransferAllItemsToInventory", ToInventory); }
	static void StaticRegisterNativesUPrimalInventoryComponent() { NativeCall<void>(nullptr, "UPrimalInventoryComponent.StaticRegisterNativesUPrimalInventoryComponent"); }
	static UClass * GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UPrimalInventoryComponent.GetPrivateStaticClass", Package); }
	void BPAccessedInventory(AShooterPlayerController * ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPAccessedInventory", ForPC); }
	bool BPAllowAddInventoryItem(UPrimalItem * Item, int RequestedQuantity, bool bOnlyAddAll) { return NativeCall<bool, UPrimalItem*, int, bool>(this, "UPrimalInventoryComponent.BPAllowAddInventoryItem", Item, RequestedQuantity, bOnlyAddAll); }
	bool BPAllowUseInInventory(UPrimalItem * theItem, bool bIsRemoteInventory, AShooterPlayerController * ByPC) { return NativeCall<bool, UPrimalItem*, bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPAllowUseInInventory", theItem, bIsRemoteInventory, ByPC); }
	void BPCraftingFinishedNotification(UPrimalItem * itemToBeCrafted) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.BPCraftingFinishedNotification", itemToBeCrafted); }
	bool BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController * PC, UPrimalItem * anItem, int anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
	bool BPCustomRemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer, int requestedQuantity, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowRemoveItems", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer); }
	void BPGetExtraItemDisplay(bool* bShowExtraItem, FString * Description, FString * CustomString, UTexture2D * *EntryIcon, UMaterialInterface * *EntryMaterial) { NativeCall<void, bool*, FString*, FString*, UTexture2D**, UMaterialInterface**>(this, "UPrimalInventoryComponent.BPGetExtraItemDisplay", bShowExtraItem, Description, CustomString, EntryIcon, EntryMaterial); }
	void BPInitializeInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.BPInitializeInventory"); }
	void BPInventoryRefresh() { NativeCall<void>(this, "UPrimalInventoryComponent.BPInventoryRefresh"); }
	bool BPIsCraftingAllowed(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.BPIsCraftingAllowed", anItem); }
	bool BPIsValidCraftingResource(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.BPIsValidCraftingResource", theItem); }
	void BPNotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "UPrimalInventoryComponent.BPNotifyItemAdded", anItem, bEquipItem); }
	void BPNotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalInventoryComponent.BPNotifyItemQuantityUpdated", anItem, amount); }
	void BPNotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.BPNotifyItemRemoved", anItem); }
	float BPOverrideItemMinimumUseInterval(UPrimalItem * theItem) { return NativeCall<float, UPrimalItem*>(this, "UPrimalInventoryComponent.BPOverrideItemMinimumUseInterval", theItem); }
	void BPPostInitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.BPPostInitDefaultInventory"); }
	void BPPreInitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.BPPreInitDefaultInventory"); }
	bool BPPreventEquipItem(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.BPPreventEquipItem", theItem); }
	bool BPPreventEquipItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.BPPreventEquipItemType", equipmentType); }
	bool BPRemoteInventoryAllowCrafting(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowCrafting", PC); }
	bool BPRemoteInventoryAllowRemoveItems(AShooterPlayerController * PC, UPrimalItem * anItemToTransfer) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowRemoveItems", PC, anItemToTransfer); }
	bool BPRemoteInventoryAllowViewing(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowViewing", PC); }
	int BPRemoteInventoryGetMaxVisibleSlots(int NumItems, AShooterPlayerController * PC, bool bIsLocal) { return NativeCall<int, int, AShooterPlayerController*, bool>(this, "UPrimalInventoryComponent.BPRemoteInventoryGetMaxVisibleSlots", NumItems, PC, bIsLocal); }
	void BPRequestedInventoryItems(AShooterPlayerController * forPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPRequestedInventoryItems", forPC); }
	bool CanGrindItem(UPrimalItem * item) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.CanGrindItem", item); }
	bool CanGrindItems(AShooterPlayerController * PC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.CanGrindItems", PC); }
	void ClientItemMessageNotification(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification", ItemID, ItemMessageType); }
	void ClientOnArkTributeItemsAdded() { NativeCall<void>(this, "UPrimalInventoryComponent.ClientOnArkTributeItemsAdded"); }
	void ClientUpdateFreeCraftingMode(bool bNewFreeCraftingModeValue) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode", bNewFreeCraftingModeValue); }
	void GetGrinderSettings(int* MaxQuantityToGrind, float* GrindGiveItemsPercent, int* MaxItemsToGivePerGrind) { NativeCall<void, int*, float*, int*>(this, "UPrimalInventoryComponent.GetGrinderSettings", MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	bool OverrideUseItem(UPrimalItem * theItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.OverrideUseItem", theItem); }
	void ServerAddItemToSlot(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerAddItemToSlot", ItemID, SlotIndex); }
	void ServerForceMergeItemStack(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack", Item1ID, Item2ID); }
	void ServerMakeRecipeItem(APrimalStructureItemContainer * Container, FItemNetID NoteToConsume, TSubclassOf<UPrimalItem> RecipeItemTemplate, FString * CustomName, FString * CustomDescription, TArray<FColor> * CustomColors, TArray<FCraftingResourceRequirement> * CustomRequirements) { NativeCall<void, APrimalStructureItemContainer*, FItemNetID, TSubclassOf<UPrimalItem>, FString*, FString*, TArray<FColor>*, TArray<FCraftingResourceRequirement>*>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem", Container, NoteToConsume, RecipeItemTemplate, CustomName, CustomDescription, CustomColors, CustomRequirements); }
	void ServerRemoveItemFromSlot(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot", ItemID); }
	void ServerSplitItemStack(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack", ItemID, AmountToSplit); }
	void SetNextItemConsumptionID(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID", NextItemID); }
	void SetNextItemSpoilingID(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID", NextItemID); }
	void UpdateTribeGroupInventoryRank(char NewRank) { NativeCall<void, char>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank", NewRank); }
};

struct UPrimalItem : UObject
{
	float& DinoAutoHealingThresholdPercentField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DinoAutoHealingThresholdPercent"); }
	float& DinoAutoHealingUseTimeIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DinoAutoHealingUseTimeInterval"); }
	int& ArkTributeVersionField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ArkTributeVersion"); }
	TArray<TSubclassOf<AActor>> & EquipRequiresExplicitOwnerClassesField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "UPrimalItem.EquipRequiresExplicitOwnerClasses"); }
	TArray<FName> & EquipRequiresExplicitOwnerTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItem.EquipRequiresExplicitOwnerTags"); }
	TSubclassOf<APrimalBuff> & BuffToGiveOwnerWhenEquippedField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped"); }
	FString & BuffToGiveOwnerWhenEquipped_BlueprintPathField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
	bool& bBuffToGiveOwnerWhenEquipped_SoftRefCachedField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bBuffToGiveOwnerWhenEquipped_SoftRefCached"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.ExpirationTimeUTC"); }
	int& BlueprintAllowMaxCraftingsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.BlueprintAllowMaxCraftings"); }
	FString & AbstractItemCraftingDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.AbstractItemCraftingDescription"); }
	TArray<TSubclassOf<UPrimalItem>> & ItemSkinUseOnItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalItem.ItemSkinUseOnItemClasses"); }
	TArray<TSubclassOf<UPrimalItem>> & ItemSkinPreventOnItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalItem.ItemSkinPreventOnItemClasses"); }
	USoundBase * ItemBrokenSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.ItemBrokenSound"); }
	USoundCue * UseItemSoundField() { return *GetNativePointerField<USoundCue**>(this, "UPrimalItem.UseItemSound"); }
	USoundBase * EquipSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.EquipSound"); }
	USoundBase * UnEquipSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.UnEquipSound"); }
	USoundBase * UsedOnOtherItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.UsedOnOtherItemSound"); }
	USoundBase * RemovedFromOtherItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.RemovedFromOtherItemSound"); }
	float& RandomChanceToBeBlueprintField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RandomChanceToBeBlueprint"); }
	TArray<FActorClassAttachmentInfo> & ActorClassAttachmentInfosField() { return *GetNativePointerField<TArray<FActorClassAttachmentInfo>*>(this, "UPrimalItem.ActorClassAttachmentInfos"); }
	TArray<FItemAttachmentInfo> * ItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo>**>(this, "UPrimalItem.ItemAttachmentInfos"); }
	TArray<FItemAttachmentInfo> & DynamicItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo>*>(this, "UPrimalItem.DynamicItemAttachmentInfos"); }
	TArray<FItemAttachmentInfo> & ItemSkinAddItemAttachmentsField() { return *GetNativePointerField<TArray<FItemAttachmentInfo>*>(this, "UPrimalItem.ItemSkinAddItemAttachments"); }
	TEnumAsByte<enum EPrimalItemType::Type> & MyItemTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemType::Type>*>(this, "UPrimalItem.MyItemType"); }
	TEnumAsByte<enum EPrimalConsumableType::Type> & MyConsumableTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalConsumableType::Type>*>(this, "UPrimalItem.MyConsumableType"); }
	TEnumAsByte<enum EPrimalEquipmentType::Type> & MyEquipmentTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "UPrimalItem.MyEquipmentType"); }
	int& ExtraItemCategoryFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ExtraItemCategoryFlags"); }
	float& ItemIconScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemIconScale"); }
	FVector & BlockingShieldFPVTranslationField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.BlockingShieldFPVTranslation"); }
	FRotator & BlockingShieldFPVRotationField() { return *GetNativePointerField<FRotator*>(this, "UPrimalItem.BlockingShieldFPVRotation"); }
	float& ShieldBlockDamagePercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ShieldBlockDamagePercentage"); }
	float& ShieldDamageToDurabilityRatioField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ShieldDamageToDurabilityRatio"); }
	UAnimMontage * PlayAnimationOnUseField() { return *GetNativePointerField<UAnimMontage**>(this, "UPrimalItem.PlayAnimationOnUse"); }
	int& CraftingMinLevelRequirementField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingMinLevelRequirement"); }
	float& CraftingCooldownIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingCooldownInterval"); }
	TSubclassOf<AActor> & CraftingActorToSpawnField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalItem.CraftingActorToSpawn"); }
	UTexture2D * BlueprintBackgroundOverrideTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BlueprintBackgroundOverrideTexture"); }
	FString & CraftItemButtonStringOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CraftItemButtonStringOverride"); }
	TSubclassOf<AActor> & UseSpawnActorClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalItem.UseSpawnActorClass"); }
	FVector & UseSpawnActorLocOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.UseSpawnActorLocOffset"); }
	int& SlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.SlotIndex"); }
	FItemNetID & ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem.ItemID"); }
	int& ItemCustomDataField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemCustomData"); }
	TSubclassOf<UPrimalItem> & ItemCustomClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.ItemCustomClass"); }
	int& ItemSkinTemplateIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemSkinTemplateIndex"); }
	TSubclassOf<UPrimalItem> & ItemSkinTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.ItemSkinTemplate"); }
	float& ItemRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemRating"); }
	unsigned __int16& CraftQueueField() { return *GetNativePointerField<unsigned __int16*>(this, "UPrimalItem.CraftQueue"); }
	float& CraftingSkillField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkill"); }
	FString & CustomItemNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemName"); }
	FString & CustomItemDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemDescription"); }
	TArray<FColor> & CustomColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "UPrimalItem.CustomColors"); }
	TArray<FCraftingResourceRequirement> & CustomResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "UPrimalItem.CustomResourceRequirements"); }
	long double& NextCraftCompletionTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.NextCraftCompletionTime"); }
	TWeakObjectPtr<UPrimalInventoryComponent> & OwnerInventoryField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalInventoryComponent>*>(this, "UPrimalItem.OwnerInventory"); }
	char& ItemQualityIndexField() { return *GetNativePointerField<char*>(this, "UPrimalItem.ItemQualityIndex"); }
	TSubclassOf<UPrimalItem> & SupportDragOntoItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.SupportDragOntoItemClass"); }
	TArray<TSubclassOf<UPrimalItem>> & SupportDragOntoItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalItem.SupportDragOntoItemClasses"); }
	TArray<TSubclassOf<AShooterWeapon>> & SkinWeaponTemplatesField() { return *GetNativePointerField<TArray<TSubclassOf<AShooterWeapon>>*>(this, "UPrimalItem.SkinWeaponTemplates"); }
	TArray<TSubclassOf<UPrimalItem>> & SupportAmmoItemForWeaponSkinField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalItem.SupportAmmoItemForWeaponSkin"); }
	TArray<TSubclassOf<AShooterWeapon>> & SkinWeaponTemplatesForAmmoField() { return *GetNativePointerField<TArray<TSubclassOf<AShooterWeapon>>*>(this, "UPrimalItem.SkinWeaponTemplatesForAmmo"); }
	TSubclassOf<AShooterWeapon> & AmmoSupportDragOntoWeaponItemWeaponTemplateField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplate"); }
	TArray<TSubclassOf<AShooterWeapon>> & AmmoSupportDragOntoWeaponItemWeaponTemplatesField() { return *GetNativePointerField<TArray<TSubclassOf<AShooterWeapon>>*>(this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplates"); }
	TArray<FUseItemAddCharacterStatusValue> & UseItemAddCharacterStatusValuesField() { return *GetNativePointerField<TArray<FUseItemAddCharacterStatusValue>*>(this, "UPrimalItem.UseItemAddCharacterStatusValues"); }
	float& Ingredient_WeightIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_WeightIncreasePerQuantity"); }
	float& Ingredient_FoodIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_FoodIncreasePerQuantity"); }
	float& Ingredient_HealthIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_HealthIncreasePerQuantity"); }
	float& Ingredient_WaterIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_WaterIncreasePerQuantity"); }
	float& Ingredient_StaminaIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_StaminaIncreasePerQuantity"); }
	FString & DescriptiveNameBaseField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DescriptiveNameBase"); }
	FString & ItemDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemDescription"); }
	FString & DurabilityStringShortField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityStringShort"); }
	FString & DurabilityStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityString"); }
	FString & CustomRepairTextField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomRepairText"); }
	float& DroppedItemLifeSpanOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DroppedItemLifeSpanOverride"); }
	UStaticMesh * DroppedMeshOverrideField() { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem.DroppedMeshOverride"); }
	UMaterialInterface * DroppedMeshMaterialOverrideField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.DroppedMeshMaterialOverride"); }
	FVector & DroppedMeshOverrideScale3DField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.DroppedMeshOverrideScale3D"); }
	TSubclassOf<UPrimalItem> & SpoilingItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.SpoilingItem"); }
	TArray<TSubclassOf<AActor>> & UseRequiresOwnerActorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "UPrimalItem.UseRequiresOwnerActorClasses"); }
	TSubclassOf<UPrimalItem> & PreservingItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.PreservingItemClass"); }
	float& PreservingItemSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreservingItemSpoilingTimeMultiplier"); }
	float& SpoilingTimeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SpoilingTime"); }
	int& CraftingConsumesDurabilityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingConsumesDurability"); }
	float& RepairResourceRequirementMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RepairResourceRequirementMultiplier"); }
	float& BaseItemWeightField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseItemWeight"); }
	float& DurabilityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityIncreaseMultiplier"); }
	float& NewItemDurabilityOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NewItemDurabilityOverride"); }
	float& DurabilityDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityDecreaseMultiplier"); }
	float& UseDecreaseDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseDecreaseDurability"); }
	float& AutoDurabilityDecreaseIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDurabilityDecreaseInterval"); }
	float& AutoDecreaseMinDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseMinDurability"); }
	float& AutoDecreaseDurabilityAmountPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseDurabilityAmountPerInterval"); }
	float& UseDecreaseDurabilityMinField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseDecreaseDurabilityMin"); }
	float& UseMinDurabilityRequirementField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseMinDurabilityRequirement"); }
	float& ResourceRarityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRarity"); }
	float& BlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintTimeToCraft"); }
	float& MinBlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinBlueprintTimeToCraft"); }
	float& BlueprintWeightField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintWeight"); }
	float& MinimumUseIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinimumUseInterval"); }
	float& TimeForFullRepairField() { return *GetNativePointerField<float*>(this, "UPrimalItem.TimeForFullRepair"); }
	float& BaseCraftingXPField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseCraftingXP"); }
	float& BaseRepairingXPField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseRepairingXP"); }
	TArray<FCraftingResourceRequirement> & BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "UPrimalItem.BaseCraftingResourceRequirements"); }
	TArray<FCraftingResourceRequirement> & OverrideRepairingRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "UPrimalItem.OverrideRepairingRequirements"); }
	FieldArray<FItemStatInfo, 8> ItemStatInfosField() { return {this, "UPrimalItem.ItemStatInfos"}; }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return {this, "UPrimalItem.ItemStatValues"}; }
	unsigned int& WeaponClipAmmoField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.WeaponClipAmmo"); }
	float& WeaponFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalItem.WeaponFrequency"); }
	long double& LastTimeToShowInfoField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastTimeToShowInfo"); }
	char& ItemVersionField() { return *GetNativePointerField<char*>(this, "UPrimalItem.ItemVersion"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemDurability"); }
	float& MinItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinItemDurability"); }
	float& SavedDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SavedDurability"); }
	TSubclassOf<AShooterWeapon> & WeaponTemplateField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "UPrimalItem.WeaponTemplate"); }
	UTexture2D * BrokenIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BrokenIcon"); }
	UTexture2D * ItemIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.ItemIcon"); }
	UTexture2D * AlternateItemIconBelowDurabilityField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AlternateItemIconBelowDurability"); }
	float& AlternateItemIconBelowDurabilityValueField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AlternateItemIconBelowDurabilityValue"); }
	float& DurabilityNotifyThresholdValueField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityNotifyThresholdValue"); }
	UMaterialInterface * ItemIconMaterialParentField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.ItemIconMaterialParent"); }
	FieldArray<__int16, 6> ItemColorIDField() { return {this, "UPrimalItem.ItemColorID"}; }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return {this, "UPrimalItem.PreSkinItemColorID"}; }
	FieldArray<char, 6> bUseItemColorField() { return {this, "UPrimalItem.bUseItemColor"}; }
	TSubclassOf<UPrimalColorSet> & RandomColorSetField() { return *GetNativePointerField<TSubclassOf<UPrimalColorSet>*>(this, "UPrimalItem.RandomColorSet"); }
	int& ItemQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemQuantity"); }
	int& MaxItemQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxItemQuantity"); }
	TArray<unsigned __int64> & SteamItemUserIDsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "UPrimalItem.SteamItemUserIDs"); }
	TSubclassOf<APrimalStructure> & StructureToBuildField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "UPrimalItem.StructureToBuild"); }
	TSubclassOf<UPrimalItem> & GiveItemWhenUsedField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.GiveItemWhenUsed"); }
	TArray<TSubclassOf<UPrimalInventoryComponent>> & CraftingRequiresInventoryComponentField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalInventoryComponent>>*>(this, "UPrimalItem.CraftingRequiresInventoryComponent"); }
	TSubclassOf<ADroppedItem> & DroppedItemTemplateOverrideField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalItem.DroppedItemTemplateOverride"); }
	TSubclassOf<ADroppedItem> & DroppedItemTemplateForSecondryActionField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalItem.DroppedItemTemplateForSecondryAction"); }
	TSubclassOf<APrimalBuff> & BuffToGiveOwnerCharacterField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "UPrimalItem.BuffToGiveOwnerCharacter"); }
	FRotator & PreviewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "UPrimalItem.PreviewCameraRotation"); }
	FVector & PreviewCameraPivotOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.PreviewCameraPivotOffset"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraDistanceScaleFactor"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraMaxZoomMultiplier"); }
	FName & PlayerMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.PlayerMeshTextureMaskParamName"); }
	UTexture2D * PlayerMeshTextureMaskField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.PlayerMeshTextureMask"); }
	UTexture2D * PlayerMeshNoItemDefaultTextureMaskField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.PlayerMeshNoItemDefaultTextureMask"); }
	int& PlayerMeshTextureMaskMaterialIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.PlayerMeshTextureMaskMaterialIndex"); }
	FName & FPVHandsMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.FPVHandsMeshTextureMaskParamName"); }
	UTexture2D * FPVHandsMeshTextureMaskField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.FPVHandsMeshTextureMask"); }
	int& FPVHandsMeshTextureMaskMaterialIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.FPVHandsMeshTextureMaskMaterialIndex"); }
	int& FPVHandsMeshTextureMaskMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "UPrimalItem.FPVHandsMeshTextureMaskMaterialIndex2"); }
	UPrimalItem * WeaponAmmoOverrideItemCDOField() { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.WeaponAmmoOverrideItemCDO"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.CreationTime"); }
	long double& LastAutoDurabilityDecreaseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastAutoDurabilityDecreaseTime"); }
	long double& LastUseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastUseTime"); }
	long double& LastLocalUseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastLocalUseTime"); }
	int& MaxCustomItemDescriptionLengthField() { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxCustomItemDescriptionLength"); }
	int& TempSlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.TempSlotIndex"); }
	TWeakObjectPtr<AShooterWeapon> & AssociatedWeaponField() { return *GetNativePointerField<TWeakObjectPtr<AShooterWeapon>*>(this, "UPrimalItem.AssociatedWeapon"); }
	UPrimalItem * MyItemSkinField() { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.MyItemSkin"); }
	TWeakObjectPtr<AShooterCharacter> & LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "UPrimalItem.LastOwnerPlayer"); }
	TArray<FCropItemPhaseData> & CropPhasesDataField() { return *GetNativePointerField<TArray<FCropItemPhaseData>*>(this, "UPrimalItem.CropPhasesData"); }
	float& CropGrowingFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropGrowingFertilizerConsumptionRate"); }
	float& CropMaxFruitFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropMaxFruitFertilizerConsumptionRate"); }
	float& CropGrowingWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropGrowingWaterConsumptionRate"); }
	float& CropMaxFruitWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropMaxFruitWaterConsumptionRate"); }
	int& CropMaxFruitsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CropMaxFruits"); }
	float& CropNoFertilizerOrWaterCacheReductionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropNoFertilizerOrWaterCacheReductionRate"); }
	float& FertilizerEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.FertilizerEffectivenessMultiplier"); }
	float& EggAlertDinosAggroAmountField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroAmount"); }
	float& EggAlertDinosAggroRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroRadius"); }
	TArray<FName> & EggAlertDinosAggroTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItem.EggAlertDinosAggroTags"); }
	float& EggAlertDinosForcedAggroTimeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosForcedAggroTime"); }
	float& EggMaximumDistanceFromOriginalDropToAlertDinosField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMaximumDistanceFromOriginalDropToAlertDinos"); }
	TSubclassOf<UPrimalItem> & BrokenGiveItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.BrokenGiveItemClass"); }
	float& ClearColorDurabilityThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ClearColorDurabilityThreshold"); }
	TSubclassOf<UPrimalItem> & ItemClassToUseAsInitialCustomDataField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.ItemClassToUseAsInitialCustomData"); }
	FVector & OriginalItemDropLocationField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.OriginalItemDropLocation"); }
	FLinearColor & DurabilityBarColorForegroundField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem.DurabilityBarColorForeground"); }
	FLinearColor & DurabilityBarColorBackgroundField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem.DurabilityBarColorBackground"); }
	TSubclassOf<UPrimalItem> & OverrideCooldownTimeItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.OverrideCooldownTimeItemClass"); }
	float& MinDurabilityForCraftingResourceField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinDurabilityForCraftingResource"); }
	float& ResourceRequirementIncreaseRatingPowerField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementIncreaseRatingPower"); }
	float& ResourceRequirementRatingScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementRatingScale"); }
	float& ResourceRequirementRatingIncreasePercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementRatingIncreasePercentage"); }
	long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.NextSpoilingTime"); }
	long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastSpoilingTime"); }
	TArray<FString> & DefaultFolderPathsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalItem.DefaultFolderPaths"); }
	FString & ItemRatingStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemRatingString"); }
	FName & DefaultWeaponMeshNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.DefaultWeaponMeshName"); }
	int& LastCalculatedTotalAmmoInvUpdatedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastCalculatedTotalAmmoInvUpdatedFrame"); }
	int& WeaponTotalAmmoField() { return *GetNativePointerField<int*>(this, "UPrimalItem.WeaponTotalAmmo"); }
	TSubclassOf<UPrimalItem> & EngramRequirementItemClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.EngramRequirementItemClassOverride"); }
	TArray<unsigned short> & CraftingResourceRequirementsField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "UPrimalItem.CraftingResourceRequirements"); }
	USoundBase * ExtraThrowItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.ExtraThrowItemSound"); }
	FVector & SpawnOnWaterEncroachmentBoxExtentField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.SpawnOnWaterEncroachmentBoxExtent"); }
	TArray<TSubclassOf<AActor>> & OnlyUsableOnSpecificClassesField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "UPrimalItem.OnlyUsableOnSpecificClasses"); }
	TArray<FSaddlePassengerSeatDefinition> & SaddlePassengerSeatsField() { return *GetNativePointerField<TArray<FSaddlePassengerSeatDefinition>*>(this, "UPrimalItem.SaddlePassengerSeats"); }
	FName & SaddleOverrideRiderSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.SaddleOverrideRiderSocketName"); }
	TSubclassOf<APrimalDinoCharacter> & EggDinoClassToSpawnField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "UPrimalItem.EggDinoClassToSpawn"); }
	FieldArray<char, 12> EggNumberOfLevelUpPointsAppliedField() { return {this, "UPrimalItem.EggNumberOfLevelUpPointsApplied"}; }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggTamedIneffectivenessModifier"); }
	FieldArray<char, 6> EggColorSetIndicesField() { return {this, "UPrimalItem.EggColorSetIndices"}; }
	float& EggLoseDurabilityPerSecondField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggLoseDurabilityPerSecond"); }
	float& ExtraEggLoseDurabilityPerSecondMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ExtraEggLoseDurabilityPerSecondMultiplier"); }
	float& EggMinTemperatureField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMinTemperature"); }
	float& EggMaxTemperatureField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMaxTemperature"); }
	float& EggDroppedInvalidTempLoseItemRatingSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggDroppedInvalidTempLoseItemRatingSpeed"); }
	USoundBase * ShieldHitSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.ShieldHitSound"); }
	float& RecipeCraftingSkillScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RecipeCraftingSkillScale"); }
	int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomItemID"); }
	float& AddDinoTargetingRangeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AddDinoTargetingRange"); }
	float& DamageTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DamageTorpidityArmorRating"); }
	float& IndirectTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.IndirectTorpidityArmorRating"); }
	TSubclassOf<APrimalEmitterSpawnable> & UseParticleEffectField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "UPrimalItem.UseParticleEffect"); }
	FName & UseParticleEffectSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.UseParticleEffectSocketName"); }
	float& UseGiveDinoTameAffinityPercentField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseGiveDinoTameAffinityPercent"); }
	TArray<TSubclassOf<UPrimalItem>> & CraftingAdditionalItemsToGiveField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalItem.CraftingAdditionalItemsToGive"); }
	int& LastValidItemVersionField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastValidItemVersion"); }
	float& GlobalTameAffinityMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.GlobalTameAffinityMultiplier"); }
	int& CraftingGiveItemCountField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingGiveItemCount"); }
	int& CraftingGivesItemQuantityOverrideField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingGivesItemQuantityOverride"); }
	USoundBase * UseItemOnItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.UseItemOnItemSound"); }
	FName & UseUnlocksEmoteNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.UseUnlocksEmoteName"); }
	long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.ClusterSpoilingTimeUTC"); }
	TArray<FDinoAncestorsEntry> & EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "UPrimalItem.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntry> & EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "UPrimalItem.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsMale"); }
	TArray<TSubclassOf<UPrimalItem>> & EquippingRequiresEngramsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalItem.EquippingRequiresEngrams"); }
	TArray<FCustomItemData> & CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData>*>(this, "UPrimalItem.CustomItemDatas"); }
	FString & OverrideUseStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.OverrideUseString"); }
	TSubclassOf<UPrimalItem> & SendToClientClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.SendToClientClassOverride"); }
	FString & CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterCharacterName"); }
	FString & CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterTribeName"); }
	float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftedSkillBonus"); }
	float& CraftingSkillQualityMultiplierMinField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkillQualityMultiplierMin"); }
	float& CraftingSkillQualityMultiplierMaxField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkillQualityMultiplierMax"); }
	float& SinglePlayerCraftingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SinglePlayerCraftingSpeedMultiplier"); }
	int& NoLevelEngramSortingPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.NoLevelEngramSortingPriority"); }
	int& CustomFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomFlags"); }
	FName & CustomTagField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.CustomTag"); }
	float& EquippedReduceDurabilityIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EquippedReduceDurabilityInterval"); }
	long double& LastEquippedReduceDurabilityTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastEquippedReduceDurabilityTime"); }
	float& EquippedReduceDurabilityPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EquippedReduceDurabilityPerInterval"); }
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemStatClampsMultiplier"); }
	float& MaxDurabiltiyOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MaxDurabiltiyOverride"); }
	long double& LastItemAdditionTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastItemAdditionTime"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.UploadEarliestValidTime"); }
	float& NextRepairPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NextRepairPercentage"); }
	UStaticMesh * NetDroppedMeshOverrideField() { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem.NetDroppedMeshOverride"); }
	UMaterialInterface * NetDroppedMeshMaterialOverrideField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.NetDroppedMeshMaterialOverride"); }
	FVector & NetDroppedMeshOverrideScale3DField() { return *GetNativePointerField<FVector*>(this, "UPrimalItem.NetDroppedMeshOverrideScale3D"); }
	UStaticMesh * DyePreviewMeshOverrideSMField() { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem.DyePreviewMeshOverrideSM"); }
	UTexture2D * AccessoryActivatedIconOverrideField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AccessoryActivatedIconOverride"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bCanBuildStructures() { return { this, "UPrimalItem.bCanBuildStructures" }; }
	BitFieldValue<bool, unsigned __int32> bAllowEquppingItem() { return { this, "UPrimalItem.bAllowEquppingItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventEquipOnTaxidermyBase() { return { this, "UPrimalItem.bPreventEquipOnTaxidermyBase" }; }
	BitFieldValue<bool, unsigned __int32> bAllowInventoryItem() { return { this, "UPrimalItem.bAllowInventoryItem" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "UPrimalItem.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bEquippedItem() { return { this, "UPrimalItem.bEquippedItem" }; }
	BitFieldValue<bool, unsigned __int32> bCanSlot() { return { this, "UPrimalItem.bCanSlot" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemColors() { return { this, "UPrimalItem.bUseItemColors" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInitItemColors() { return { this, "UPrimalItem.bUseBPInitItemColors" }; }
	BitFieldValue<bool, unsigned __int32> bRefreshOnDyeUsed() { return { this, "UPrimalItem.bRefreshOnDyeUsed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPostAddBuffToGiveOwnerCharacter() { return { this, "UPrimalItem.bUseBPPostAddBuffToGiveOwnerCharacter" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPSetupHUDIconMaterial() { return { this, "UPrimalItem.bUseBPSetupHUDIconMaterial" }; }
	BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_ScorchedEarth() { return { this, "UPrimalItem.bEquipRequiresDLC_ScorchedEarth" }; }
	BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Aberration() { return { this, "UPrimalItem.bEquipRequiresDLC_Aberration" }; }
	BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Extinction() { return { this, "UPrimalItem.bEquipRequiresDLC_Extinction" }; }
	BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Genesis() { return { this, "UPrimalItem.bEquipRequiresDLC_Genesis" }; }
	BitFieldValue<bool, unsigned __int32> bDurabilityRequirementIgnoredInWater() { return { this, "UPrimalItem.bDurabilityRequirementIgnoredInWater" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRepair() { return { this, "UPrimalItem.bAllowRepair" }; }
	BitFieldValue<bool, unsigned __int32> bCustomBrokenIcon() { return { this, "UPrimalItem.bCustomBrokenIcon" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory() { return { this, "UPrimalItem.bAllowRemovalFromInventory" }; }
	BitFieldValue<bool, unsigned __int32> bFromSteamInventory() { return { this, "UPrimalItem.bFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory() { return { this, "UPrimalItem.bIsFromAllClustersInventory" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeItemOnUse() { return { this, "UPrimalItem.bConsumeItemOnUse" }; }
	BitFieldValue<bool, unsigned __int32> bConfirmBeforeUsing() { return { this, "UPrimalItem.bConfirmBeforeUsing" }; }
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
	BitFieldValue<bool, unsigned __int32> bDontResetAttachmentIfNotUpdatingItem() { return { this, "UPrimalItem.bDontResetAttachmentIfNotUpdatingItem" }; }
	BitFieldValue<bool, unsigned __int32> bItemSkinIgnoreSkinIcon() { return { this, "UPrimalItem.bItemSkinIgnoreSkinIcon" }; }
	BitFieldValue<bool, unsigned __int32> bPickupEggAlertsDinos() { return { this, "UPrimalItem.bPickupEggAlertsDinos" }; }
	BitFieldValue<bool, unsigned __int32> bHideCustomDescription() { return { this, "UPrimalItem.bHideCustomDescription" }; }
	BitFieldValue<bool, unsigned __int32> bCopyCustomDescriptionIntoSpoiledItem() { return { this, "UPrimalItem.bCopyCustomDescriptionIntoSpoiledItem" }; }
	BitFieldValue<bool, unsigned __int32> bCopyDurabilityIntoSpoiledItem() { return { this, "UPrimalItem.bCopyDurabilityIntoSpoiledItem" }; }
	BitFieldValue<bool, unsigned __int32> bCraftedRequestCustomItemDescription() { return { this, "UPrimalItem.bCraftedRequestCustomItemDescription" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowCustomItemDescription() { return { this, "UPrimalItem.bForceAllowCustomItemDescription" }; }
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
	BitFieldValue<bool, unsigned __int32> bScaleOverridenRepairingRequirements() { return { this, "UPrimalItem.bScaleOverridenRepairingRequirements" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPCustomAutoDecreaseDurabilityPerInterval() { return { this, "UPrimalItem.bUseBPCustomAutoDecreaseDurabilityPerInterval" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetText() { return { this, "UPrimalItem.bUseBPCustomInventoryWidgetText" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextColor() { return { this, "UPrimalItem.bUseBPCustomInventoryWidgetTextColor" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextForBlueprint() { return { this, "UPrimalItem.bUseBPCustomInventoryWidgetTextForBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bUseSkinnedBPCustomInventoryWidgetText() { return { this, "UPrimalItem.bUseSkinnedBPCustomInventoryWidgetText" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityText() { return { this, "UPrimalItem.bUseBPCustomDurabilityText" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityTextColor() { return { this, "UPrimalItem.bUseBPCustomDurabilityTextColor" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideProjectileType() { return { this, "UPrimalItem.bUseBPOverrideProjectileType" }; }
	BitFieldValue<bool, unsigned __int32> bUsableWithTekGrenadeLauncher() { return { this, "UPrimalItem.bUsableWithTekGrenadeLauncher" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPGetItemDurabilityPercentage() { return { this, "UPrimalItem.bUseBPGetItemDurabilityPercentage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPEquippedItemOnXPEarning() { return { this, "UPrimalItem.bUseBPEquippedItemOnXPEarning" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysTriggerTributeDownloaded() { return { this, "UPrimalItem.bAlwaysTriggerTributeDownloaded" }; }
	BitFieldValue<bool, unsigned __int32> bDeferWeaponBeginPlayToAssociatedItemSetTime() { return { this, "UPrimalItem.bDeferWeaponBeginPlayToAssociatedItemSetTime" }; }
	BitFieldValue<bool, unsigned __int32> bIsSPlusItem() { return { this, "UPrimalItem.bIsSPlusItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventRemovingClipAmmo() { return { this, "UPrimalItem.bPreventRemovingClipAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bNonBlockingShield() { return { this, "UPrimalItem.bNonBlockingShield" }; }
	BitFieldValue<bool, unsigned __int32> bNetInfoFromClient() { return { this, "UPrimalItem.bNetInfoFromClient" }; }
	BitFieldValue<bool, unsigned __int32> bAddedToWorldItemMap() { return { this, "UPrimalItem.bAddedToWorldItemMap" }; }

	// Functions

	static UClass * GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalItem.GetPrivateStaticClass"); }
	static UClass * StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalItem.StaticClass"); }
	FItemNetInfo * GetItemNetInfo(FItemNetInfo * result, bool bIsForSendingToClient) { return NativeCall<FItemNetInfo*, FItemNetInfo*, bool>(this, "UPrimalItem.GetItemNetInfo", result, bIsForSendingToClient); }
	void InitFromNetInfo(FItemNetInfo * theInfo) { NativeCall<void, FItemNetInfo*>(this, "UPrimalItem.InitFromNetInfo", theInfo); }
	UWorld * GetWorldHelper(UObject * WorldContextObject) { return NativeCall<UWorld*, UObject*>(this, "UPrimalItem.GetWorldHelper", WorldContextObject); }
	int GetMaxItemQuantity(UObject * WorldContextObject) { return NativeCall<int, UObject*>(this, "UPrimalItem.GetMaxItemQuantity", WorldContextObject); }
	void AddItemDurability(float durabilityToAdd) { NativeCall<void, float>(this, "UPrimalItem.AddItemDurability", durabilityToAdd); }
	void InitNewItem(float ItemQuality, UPrimalInventoryComponent * toInventory, float MaxItemDifficultyClamp, float MinRandomQuality) { NativeCall<void, float, UPrimalInventoryComponent*, float, float>(this, "UPrimalItem.InitNewItem", ItemQuality, toInventory, MaxItemDifficultyClamp, MinRandomQuality); }
	bool AllowEquipItem(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.AllowEquipItem", toInventory); }
	bool AllowInventoryItem(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.AllowInventoryItem", toInventory); }
	void CacheFolderPath() { NativeCall<void>(this, "UPrimalItem.CacheFolderPath"); }
	void AddToInventory(UPrimalInventoryComponent * toInventory, bool bEquipItem, bool AddToSlotItems, FItemNetID * InventoryInsertAfterItemID, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bIgnoreAbsoluteMaxInventory) { NativeCall<void, UPrimalInventoryComponent*, bool, bool, FItemNetID*, bool, bool, bool>(this, "UPrimalItem.AddToInventory", toInventory, bEquipItem, AddToSlotItems, InventoryInsertAfterItemID, ShowHUDNotification, bDontRecalcSpoilingTime, bIgnoreAbsoluteMaxInventory); }
	bool RemoveItemFromArkTributeInventory() { return NativeCall<bool>(this, "UPrimalItem.RemoveItemFromArkTributeInventory"); }
	bool RemoveItemFromInventory(bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, bool, bool>(this, "UPrimalItem.RemoveItemFromInventory", bForceRemoval, showHUDMessage); }
	float GetSpoilingTime() { return NativeCall<float>(this, "UPrimalItem.GetSpoilingTime"); }
	void GetItemBytes(TArray<unsigned char> * Bytes) { NativeCall<void, TArray<unsigned char>*>(this, "UPrimalItem.GetItemBytes", Bytes); }
	static UPrimalItem * CreateFromBytes(TArray<unsigned char> * Bytes) { return NativeCall<UPrimalItem*, TArray<unsigned char>*>(nullptr, "UPrimalItem.CreateFromBytes", Bytes); }
	static UPrimalItem * AddNewItem(TSubclassOf<UPrimalItem> ItemArchetype, UPrimalInventoryComponent * GiveToInventory, bool bEquipItem, bool bDontStack, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint, float MaxItemDifficultyClamp, bool CreateOnClient, TSubclassOf<UPrimalItem> ApplyItemSkin, float MinRandomQuality) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>, UPrimalInventoryComponent*, bool, bool, float, bool, int, bool, float, bool, TSubclassOf<UPrimalItem>, float>(nullptr, "UPrimalItem.AddNewItem", ItemArchetype, GiveToInventory, bEquipItem, bDontStack, ItemQuality, bForceNoBlueprint, quantityOverride, bForceBlueprint, MaxItemDifficultyClamp, CreateOnClient, ApplyItemSkin, MinRandomQuality); }
	static UPrimalItem * CreateItemFromNetInfo(FItemNetInfo * newItemInfo) { return NativeCall<UPrimalItem*, FItemNetInfo*>(nullptr, "UPrimalItem.CreateItemFromNetInfo", newItemInfo); }
	FString * GetItemName(FString * result, bool bIncludeQuantity, bool bShortName, AShooterPlayerController * ForPC) { return NativeCall<FString*, FString*, bool, bool, AShooterPlayerController*>(this, "UPrimalItem.GetItemName", result, bIncludeQuantity, bShortName, ForPC); }
	FLinearColor * GetItemQualityColor(FLinearColor * result) { return NativeCall<FLinearColor*, FLinearColor*>(this, "UPrimalItem.GetItemQualityColor", result); }
	FString * GetItemDescription(FString * result, bool bGetLongDescription, AShooterPlayerController * ForPC) { return NativeCall<FString*, FString*, bool, AShooterPlayerController*>(this, "UPrimalItem.GetItemDescription", result, bGetLongDescription, ForPC); }
	UTexture2D * GetItemIcon(AShooterPlayerController * ForPC) { return NativeCall<UTexture2D*, AShooterPlayerController*>(this, "UPrimalItem.GetItemIcon", ForPC); }
	void EquippedItem() { NativeCall<void>(this, "UPrimalItem.EquippedItem"); }
	void UnequippedItem() { NativeCall<void>(this, "UPrimalItem.UnequippedItem"); }
	void UpdatedItem(bool ResetUploadTime) { NativeCall<void, bool>(this, "UPrimalItem.UpdatedItem", ResetUploadTime); }
	FString * GetItemShortName(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemShortName", result); }
	static bool StaticGetItemNameAndIcon(TSubclassOf<UPrimalItem> ItemType, FString * OutItemName, UTexture2D * *OutItemIcon, bool bShortName, AShooterPlayerController * ForPC) { return NativeCall<bool, TSubclassOf<UPrimalItem>, FString*, UTexture2D**, bool, AShooterPlayerController*>(nullptr, "UPrimalItem.StaticGetItemNameAndIcon", ItemType, OutItemName, OutItemIcon, bShortName, ForPC); }
	void RefreshAttachments(bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh, bool bIsFromUpdateItem) { NativeCall<void, bool, bool, bool>(this, "UPrimalItem.RefreshAttachments", bRefreshDefaultAttachments, isShieldSpecificRefresh, bIsFromUpdateItem); }
	void ApplyColorsToMesh(UMeshComponent * mComp) { NativeCall<void, UMeshComponent*>(this, "UPrimalItem.ApplyColorsToMesh", mComp); }
	void SetOwnerNoSee(bool bNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalItem.SetOwnerNoSee", bNoSee, bForceHideFirstPerson); }
	void RemoveAttachments(AActor * UseOtherActor, bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh) { NativeCall<void, AActor*, bool, bool>(this, "UPrimalItem.RemoveAttachments", UseOtherActor, bRefreshDefaultAttachments, isShieldSpecificRefresh); }
	int GetAttachedComponentsNum() { return NativeCall<int>(this, "UPrimalItem.GetAttachedComponentsNum"); }
	UActorComponent * GetAttachedComponent(int attachmentIndex, AActor * UseOtherActor) { return NativeCall<UActorComponent*, int, AActor*>(this, "UPrimalItem.GetAttachedComponent", attachmentIndex, UseOtherActor); }
	UActorComponent * GetComponentToAttach(int attachmentIndex, AActor * UseOtherActor) { return NativeCall<UActorComponent*, int, AActor*>(this, "UPrimalItem.GetComponentToAttach", attachmentIndex, UseOtherActor); }
	AActor * GetOwnerActor() { return NativeCall<AActor*>(this, "UPrimalItem.GetOwnerActor"); }
	AShooterCharacter * GetOwnerPlayer() { return NativeCall<AShooterCharacter*>(this, "UPrimalItem.GetOwnerPlayer"); }
	UTexture2D * GetEntryIcon(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "UPrimalItem.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	FString * GetEntryString(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetEntryString", result); }
	float GetItemWeight(bool bJustOneQuantity, bool bForceNotBlueprintWeight) { return NativeCall<float, bool, bool>(this, "UPrimalItem.GetItemWeight", bJustOneQuantity, bForceNotBlueprintWeight); }
	void AddToSlot(int theSlotIndex, bool bForce) { NativeCall<void, int, bool>(this, "UPrimalItem.AddToSlot", theSlotIndex, bForce); }
	void RemoveFromSlot(bool bForce) { NativeCall<void, bool>(this, "UPrimalItem.RemoveFromSlot", bForce); }
	bool AllowSlotting(UPrimalInventoryComponent * toInventory, bool bForce) { return NativeCall<bool, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.AllowSlotting", toInventory, bForce); }
	bool IsBroken() { return NativeCall<bool>(this, "UPrimalItem.IsBroken"); }
	int GetExplicitEntryIndexType(bool bGetBaseValue) { return NativeCall<int, bool>(this, "UPrimalItem.GetExplicitEntryIndexType", bGetBaseValue); }
	float GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalItem.GetUseItemAddCharacterStatusValue", valueType); }
	void Use(bool bOverridePlayerInput) { NativeCall<void, bool>(this, "UPrimalItem.Use", bOverridePlayerInput); }
	float GetRemainingCooldownTime() { return NativeCall<float>(this, "UPrimalItem.GetRemainingCooldownTime"); }
	bool CanSpawnOverWater(AActor * ownerActor, FTransform * SpawnTransform) { return NativeCall<bool, AActor*, FTransform*>(this, "UPrimalItem.CanSpawnOverWater", ownerActor, SpawnTransform); }
	bool IsCooldownReadyForUse() { return NativeCall<bool>(this, "UPrimalItem.IsCooldownReadyForUse"); }
	FString * GetInventoryIconDisplayText_Implementation(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetInventoryIconDisplayText_Implementation", result); }
	bool CanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem.CanUse", bIgnoreCooldown); }
	void LocalUse(AShooterPlayerController * ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUse", ForPC); }
	void UnequipWeapon(bool bDelayedUnequip) { NativeCall<void, bool>(this, "UPrimalItem.UnequipWeapon", bDelayedUnequip); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetEntryDescription", result); }
	void AddedToInventory() { NativeCall<void>(this, "UPrimalItem.AddedToInventory"); }
	void InitializeItem(bool bForceReinit, UWorld * OptionalInitWorld) { NativeCall<void, bool, UWorld*>(this, "UPrimalItem.InitializeItem", bForceReinit, OptionalInitWorld); }
	void ClearItemIcon() { NativeCall<void>(this, "UPrimalItem.ClearItemIcon"); }
	void InitItemIcon() { NativeCall<void>(this, "UPrimalItem.InitItemIcon"); }
	void ApplyColorsFromStructure(APrimalStructure * theStructure) { NativeCall<void, APrimalStructure*>(this, "UPrimalItem.ApplyColorsFromStructure", theStructure); }
	void EquippedWeapon() { NativeCall<void>(this, "UPrimalItem.EquippedWeapon"); }
	void UnequippedWeapon() { NativeCall<void>(this, "UPrimalItem.UnequippedWeapon"); }
	unsigned __int16 calcResourceQuantityRequired(TSubclassOf<UPrimalItem> itemType, const float baseRequiredAmount, UPrimalInventoryComponent * inventory, bool isCrafting) { return NativeCall<unsigned __int16, TSubclassOf<UPrimalItem>, const float, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.calcResourceQuantityRequired", itemType, baseRequiredAmount, inventory, isCrafting); }
	FLinearColor * GetColorForItemColorID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int, int>(this, "UPrimalItem.GetColorForItemColorID", result, SetNum, ID); }
	static FLinearColor * StaticGetColorForItemColorID(FLinearColor * result, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int>(nullptr, "UPrimalItem.StaticGetColorForItemColorID", result, ID); }
	static int StaticGetDinoColorSetIndexForItemColorID(int ID) { return NativeCall<int, int>(nullptr, "UPrimalItem.StaticGetDinoColorSetIndexForItemColorID", ID); }
	static int GetItemColorIDFromDyeItemID(int MasterItemListIndex) { return NativeCall<int, int>(nullptr, "UPrimalItem.GetItemColorIDFromDyeItemID", MasterItemListIndex); }
	UMaterialInterface * GetEntryIconMaterial(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface*, UObject*, bool>(this, "UPrimalItem.GetEntryIconMaterial", AssociatedDataObject, bIsEnabled); }
	int GetItemQuantity() { return NativeCall<int>(this, "UPrimalItem.GetItemQuantity"); }
	float GetMiscInfoFontScale() { return NativeCall<float>(this, "UPrimalItem.GetMiscInfoFontScale"); }
	FString * GetMiscInfoString(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetMiscInfoString", result); }
	FItemStatInfo * GetItemStatInfo(FItemStatInfo * result, int idx) { return NativeCall<FItemStatInfo*, FItemStatInfo*, int>(this, "UPrimalItem.GetItemStatInfo", result, idx); }
	void SetItemStatInfo(int idx, FItemStatInfo * val) { NativeCall<void, int, FItemStatInfo*>(this, "UPrimalItem.SetItemStatInfo", idx, val); }
	float BPGetItemStatModifier(int idx, int ItemStatValue) { return NativeCall<float, int, int>(this, "UPrimalItem.BPGetItemStatModifier", idx, ItemStatValue); }
	int BPGetItemStatRandomValue(float QualityLevel, int idx) { return NativeCall<int, float, int>(this, "UPrimalItem.BPGetItemStatRandomValue", QualityLevel, idx); }
	int GetItemStatValues(int idx) { return NativeCall<int, int>(this, "UPrimalItem.GetItemStatValues", idx); }
	void SetItemStatValues(int idx, int val) { NativeCall<void, int, int>(this, "UPrimalItem.SetItemStatValues", idx, val); }
	TEnumAsByte<enum EPrimalEquipmentType::Type> * GetActualEquipmentType(TEnumAsByte<enum EPrimalEquipmentType::Type> * result, bool bGetBaseValue) { return NativeCall<TEnumAsByte<enum EPrimalEquipmentType::Type>*, TEnumAsByte<enum EPrimalEquipmentType::Type>*, bool>(this, "UPrimalItem.GetActualEquipmentType", result, bGetBaseValue); }
	UClass * GetBuffToGiveOwnerWhenEquipped(bool bForceResolveSoftRef) { return NativeCall<UClass*, bool>(this, "UPrimalItem.GetBuffToGiveOwnerWhenEquipped", bForceResolveSoftRef); }
	bool HasBuffToGiveOwnerWhenEquipped() { return NativeCall<bool>(this, "UPrimalItem.HasBuffToGiveOwnerWhenEquipped"); }
	int IncrementItemQuantity(int amount, bool bReplicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption) { return NativeCall<int, int, bool, bool, bool, bool, bool>(this, "UPrimalItem.IncrementItemQuantity", amount, bReplicateToClient, bDontUpdateWeight, bIsFromUseConsumption, bIsArkTributeItem, bIsFromCraftingConsumption); }
	void OverrideItemRating(float rating) { NativeCall<void, float>(this, "UPrimalItem.OverrideItemRating", rating); }
	FString * GetItemTypeString(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemTypeString", result); }
	FString * GetItemSubtypeString(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemSubtypeString", result); }
	FString * GetItemStatsString(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemStatsString", result); }
	bool MeetBlueprintCraftingRequirements(UPrimalInventoryComponent * compareInventoryComp, int CraftAmountOverride, AShooterPlayerController * ForPlayer, bool bIsForCraftQueueAddition, bool bTestFullQueue) { return NativeCall<bool, UPrimalInventoryComponent*, int, AShooterPlayerController*, bool, bool>(this, "UPrimalItem.MeetBlueprintCraftingRequirements", compareInventoryComp, CraftAmountOverride, ForPlayer, bIsForCraftQueueAddition, bTestFullQueue); }
	bool TestMeetsCraftingRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent) { return NativeCall<bool, UPrimalInventoryComponent*, float>(this, "UPrimalItem.TestMeetsCraftingRequirementsPercent", invComp, Percent); }
	void ConsumeCraftingRequirementsPercent(UPrimalInventoryComponent * invComp, float Percent) { NativeCall<void, UPrimalInventoryComponent*, float>(this, "UPrimalItem.ConsumeCraftingRequirementsPercent", invComp, Percent); }
	FString * GetCraftingRequirementsString(FString * result, UPrimalInventoryComponent * compareInventoryComp) { return NativeCall<FString*, FString*, UPrimalInventoryComponent*>(this, "UPrimalItem.GetCraftingRequirementsString", result, compareInventoryComp); }
	bool MeetRepairingRequirements(UPrimalInventoryComponent * compareInventoryComp, bool bIsForCraftQueueAddition) { return NativeCall<bool, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.MeetRepairingRequirements", compareInventoryComp, bIsForCraftQueueAddition); }
	FString * GetRepairingRequirementsString(FString * result, UPrimalInventoryComponent * compareInventoryComp, bool bUseBaseRequeriments, float OverrideRepairPercent) { return NativeCall<FString*, FString*, UPrimalInventoryComponent*, bool, float>(this, "UPrimalItem.GetRepairingRequirementsString", result, compareInventoryComp, bUseBaseRequeriments, OverrideRepairPercent); }
	float GetItemStatModifier(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatModifier", statType); }
	FString * GetItemStatString(FString * result, EPrimalItemStat::Type statType) { return NativeCall<FString*, FString*, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatString", result, statType); }
	bool UsesDurability() { return NativeCall<bool>(this, "UPrimalItem.UsesDurability"); }
	bool CanRepair(bool bIgnoreInventoryRequirement) { return NativeCall<bool, bool>(this, "UPrimalItem.CanRepair", bIgnoreInventoryRequirement); }
	bool CanRepairInInventory(UPrimalInventoryComponent * invComp) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.CanRepairInInventory", invComp); }
	float GetDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.GetDurabilityPercentage"); }
	void CraftBlueprint(bool bConsumeResources) { NativeCall<void, bool>(this, "UPrimalItem.CraftBlueprint", bConsumeResources); }
	bool CanFullyCraft() { return NativeCall<bool>(this, "UPrimalItem.CanFullyCraft"); }
	void StopCraftingRepairing(bool bCheckIfCraftingOrRepairing) { NativeCall<void, bool>(this, "UPrimalItem.StopCraftingRepairing", bCheckIfCraftingOrRepairing); }
	UPrimalItem * FinishCraftingBlueprint() { return NativeCall<UPrimalItem*>(this, "UPrimalItem.FinishCraftingBlueprint"); }
	float GetTimeToCraftBlueprint() { return NativeCall<float>(this, "UPrimalItem.GetTimeToCraftBlueprint"); }
	float GetTimeForFullRepair() { return NativeCall<float>(this, "UPrimalItem.GetTimeForFullRepair"); }
	static void GenerateItemID(FItemNetID * TheItemID) { NativeCall<void, FItemNetID*>(nullptr, "UPrimalItem.GenerateItemID", TheItemID); }
	void TickCraftingItem(float DeltaTime, AShooterGameState * theGameState) { NativeCall<void, float, AShooterGameState*>(this, "UPrimalItem.TickCraftingItem", DeltaTime, theGameState); }
	float GetCraftingPercent() { return NativeCall<float>(this, "UPrimalItem.GetCraftingPercent"); }
	float GetRepairingPercent() { return NativeCall<float>(this, "UPrimalItem.GetRepairingPercent"); }
	void SetQuantity(int NewQuantity, bool ShowHUDNotification) { NativeCall<void, int, bool>(this, "UPrimalItem.SetQuantity", NewQuantity, ShowHUDNotification); }
	void RepairItem(bool bIgnoreInventoryRequirement, float UseNextRepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, bool, float, float>(this, "UPrimalItem.RepairItem", bIgnoreInventoryRequirement, UseNextRepairPercentage, RepairSpeedMultiplier); }
	void FinishRepairing() { NativeCall<void>(this, "UPrimalItem.FinishRepairing"); }
	void Used(UPrimalItem * DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem.Used", DestinationItem, AdditionalData); }
	void RemoveWeaponAccessory() { NativeCall<void>(this, "UPrimalItem.RemoveWeaponAccessory"); }
	void ServerRemoveItemSkin() { NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkin"); }
	void ServerRemoveItemSkinOnly() { NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkinOnly"); }
	void ServerRemoveWeaponAccessoryOnly() { NativeCall<void>(this, "UPrimalItem.ServerRemoveWeaponAccessoryOnly"); }
	void RemoveClipAmmo(bool bDontUpdateItem) { NativeCall<void, bool>(this, "UPrimalItem.RemoveClipAmmo", bDontUpdateItem); }
	bool CanStackWithItem(UPrimalItem * otherItem, int* QuantityOverride) { return NativeCall<bool, UPrimalItem*, int*>(this, "UPrimalItem.CanStackWithItem", otherItem, QuantityOverride); }
	bool CheckAutoCraftBlueprint() { return NativeCall<bool>(this, "UPrimalItem.CheckAutoCraftBlueprint"); }
	bool CanCraft() { return NativeCall<bool>(this, "UPrimalItem.CanCraft"); }
	bool CanCraftInInventory(UPrimalInventoryComponent * invComp) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.CanCraftInInventory", invComp); }
	FString * GetCraftRepairInvReqString(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetCraftRepairInvReqString", result); }
	bool AllowUseInInventory(bool bIsRemoteInventory, AShooterPlayerController * ByPC, bool DontCheckActor) { return NativeCall<bool, bool, AShooterPlayerController*, bool>(this, "UPrimalItem.AllowUseInInventory", bIsRemoteInventory, ByPC, DontCheckActor); }
	bool CanBeArkTributeItem() { return NativeCall<bool>(this, "UPrimalItem.CanBeArkTributeItem"); }
	void SetEngramBlueprint() { NativeCall<void>(this, "UPrimalItem.SetEngramBlueprint"); }
	bool CanSpoil() { return NativeCall<bool>(this, "UPrimalItem.CanSpoil"); }
	void RecalcSpoilingTime(long double TimeSeconds, float SpoilPercent, UPrimalInventoryComponent * forComp) { NativeCall<void, long double, float, UPrimalInventoryComponent*>(this, "UPrimalItem.RecalcSpoilingTime", TimeSeconds, SpoilPercent, forComp); }
	void InventoryRefreshCheckItem() { NativeCall<void>(this, "UPrimalItem.InventoryRefreshCheckItem"); }
	bool IsValidForCrafting() { return NativeCall<bool>(this, "UPrimalItem.IsValidForCrafting"); }
	bool IsOwnerInWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInWater"); }
	bool IsOwnerInNoPainWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInNoPainWater"); }
	bool AllowRemoteAddToInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent*, AShooterPlayerController*, bool>(this, "UPrimalItem.AllowRemoteAddToInventory", invComp, ByPC, bRequestedByPlayer); }
	bool CanDrop() { return NativeCall<bool>(this, "UPrimalItem.CanDrop"); }
	void PickupAlertDinos(AActor * groundItem) { NativeCall<void, AActor*>(this, "UPrimalItem.PickupAlertDinos", groundItem); }
	void GetItemAttachmentInfos(AActor * OwnerActor) { NativeCall<void, AActor*>(this, "UPrimalItem.GetItemAttachmentInfos", OwnerActor); }
	void SetAttachedMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "UPrimalItem.SetAttachedMeshesMaterialScalarParamValue", ParamName, Value); }
	bool CanUseWithItemSource(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.CanUseWithItemSource", DestinationItem); }
	bool IsDyed() { return NativeCall<bool>(this, "UPrimalItem.IsDyed"); }
	int GetItemColorID(int theRegion) { return NativeCall<int, int>(this, "UPrimalItem.GetItemColorID", theRegion); }
	bool CanUseWithItemDestination(UPrimalItem * SourceItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.CanUseWithItemDestination", SourceItem); }
	bool UseItemOntoItem(UPrimalItem * DestinationItem, int AdditionalData) { return NativeCall<bool, UPrimalItem*, int>(this, "UPrimalItem.UseItemOntoItem", DestinationItem, AdditionalData); }
	void LocalUseItemOntoItem(AShooterPlayerController * ForPC, UPrimalItem * DestinationItem) { NativeCall<void, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalItem.LocalUseItemOntoItem", ForPC, DestinationItem); }
	FString * GetPrimaryColorName(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetPrimaryColorName", result); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive*>(this, "UPrimalItem.Serialize", Ar); }
	bool ProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse, bool __formal) { return NativeCall<bool, AShooterPlayerController*, FString*, bool>(this, "UPrimalItem.ProcessEditText", ForPC, TextToUse, __formal); }
	void NotifyEditText(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.NotifyEditText", PC); }
	void AddToArkTributeInvenroty(UPrimalInventoryComponent * toInventory, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.AddToArkTributeInvenroty", toInventory, bFromLoad); }
	int GetMaximumAdditionalCrafting(UPrimalInventoryComponent * forComp, AShooterPlayerController * PC) { return NativeCall<int, UPrimalInventoryComponent*, AShooterPlayerController*>(this, "UPrimalItem.GetMaximumAdditionalCrafting", forComp, PC); }
	void EquippedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.EquippedTick", DeltaSeconds); }
	float GetWeaponTemplateMeleeDamageAmount() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateMeleeDamageAmount"); }
	float GetWeaponTemplateDurabilityToConsumePerMeleeHit() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateDurabilityToConsumePerMeleeHit"); }
	TSubclassOf<UDamageType> * GetWeaponTemplateMeleeDamageType(TSubclassOf<UDamageType> * result) { return NativeCall<TSubclassOf<UDamageType>*, TSubclassOf<UDamageType>*>(this, "UPrimalItem.GetWeaponTemplateMeleeDamageType", result); }
	TSubclassOf<UDamageType> * GetWeaponTemplateHarvestDamageType(TSubclassOf<UDamageType> * result) { return NativeCall<TSubclassOf<UDamageType>*, TSubclassOf<UDamageType>*>(this, "UPrimalItem.GetWeaponTemplateHarvestDamageType", result); }
	float GetWeaponTemplateHarvestDamageMultiplier() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateHarvestDamageMultiplier"); }
	void InventoryLoadedFromSaveGame() { NativeCall<void>(this, "UPrimalItem.InventoryLoadedFromSaveGame"); }
	bool CheckForInventoryDupes() { return NativeCall<bool>(this, "UPrimalItem.CheckForInventoryDupes"); }
	void CalcRecipeStats() { NativeCall<void>(this, "UPrimalItem.CalcRecipeStats"); }
	int GetCraftingResourceRequirement(int CraftingResourceIndex) { return NativeCall<int, int>(this, "UPrimalItem.GetCraftingResourceRequirement", CraftingResourceIndex); }
	void BPGetItemID(int* ItemID1, int* ItemID2) { NativeCall<void, int*, int*>(this, "UPrimalItem.BPGetItemID", ItemID1, ItemID2); }
	bool BPMatchesItemID(int ItemID1, int ItemID2) { return NativeCall<bool, int, int>(this, "UPrimalItem.BPMatchesItemID", ItemID1, ItemID2); }
	bool IsUsableConsumable() { return NativeCall<bool>(this, "UPrimalItem.IsUsableConsumable"); }
	int GetWeaponClipAmmo() { return NativeCall<int>(this, "UPrimalItem.GetWeaponClipAmmo"); }
	bool CanEquipWeapon() { return NativeCall<bool>(this, "UPrimalItem.CanEquipWeapon"); }
	bool HasCustomItemData(FName CustomDataName) { return NativeCall<bool, FName>(this, "UPrimalItem.HasCustomItemData", CustomDataName); }
	void RemoveCustomItemData(FName CustomDataName) { NativeCall<void, FName>(this, "UPrimalItem.RemoveCustomItemData", CustomDataName); }
	bool GetCustomItemData(FName CustomDataName, FCustomItemData * OutData) { return NativeCall<bool, FName, FCustomItemData*>(this, "UPrimalItem.GetCustomItemData", CustomDataName, OutData); }
	void SetCustomItemData(FCustomItemData * InData) { NativeCall<void, FCustomItemData*>(this, "UPrimalItem.SetCustomItemData", InData); }
	static FItemNetID BPMakeItemID(int TheItemID1, int TheItemID2) { return NativeCall<FItemNetID, int, int>(nullptr, "UPrimalItem.BPMakeItemID", TheItemID1, TheItemID2); }
	UPrimalInventoryComponent * GetInitializeItemOwnerInventory() { return NativeCall<UPrimalInventoryComponent*>(this, "UPrimalItem.GetInitializeItemOwnerInventory"); }
	int GetEngramRequirementLevel() { return NativeCall<int>(this, "UPrimalItem.GetEngramRequirementLevel"); }
	void BPSetWeaponClipAmmo(int NewClipAmmo) { NativeCall<void, int>(this, "UPrimalItem.BPSetWeaponClipAmmo", NewClipAmmo); }
	USoundBase * OverrideCrouchingSound_Implementation(USoundBase * InSound, bool bIsProne, int soundState) { return NativeCall<USoundBase*, USoundBase*, bool, int>(this, "UPrimalItem.OverrideCrouchingSound_Implementation", InSound, bIsProne, soundState); }
	void Crafted_Implementation(bool bWasCraftedFromEngram) { NativeCall<void, bool>(this, "UPrimalItem.Crafted_Implementation", bWasCraftedFromEngram); }
	UMaterialInterface * GetHUDIconMaterial() { return NativeCall<UMaterialInterface*>(this, "UPrimalItem.GetHUDIconMaterial"); }
	bool GetItemCustomColor(int ColorRegion, FLinearColor * outColor) { return NativeCall<bool, int, FLinearColor*>(this, "UPrimalItem.GetItemCustomColor", ColorRegion, outColor); }
	float GetEggHatchTimeRemaining(UWorld * theWorld) { return NativeCall<float, UWorld*>(this, "UPrimalItem.GetEggHatchTimeRemaining", theWorld); }
	bool IsReadyToUpload(UWorld * theWorld) { return NativeCall<bool, UWorld*>(this, "UPrimalItem.IsReadyToUpload", theWorld); }
	float GetTimeUntilUploadAllowed(UWorld * theWorld) { return NativeCall<float, UWorld*>(this, "UPrimalItem.GetTimeUntilUploadAllowed", theWorld); }
	float HandleShieldDamageBlocking_Implementation(AShooterCharacter * ForShooterCharacter, float DamageIn, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AShooterCharacter*, float, FDamageEvent*, AController*, AActor*>(this, "UPrimalItem.HandleShieldDamageBlocking_Implementation", ForShooterCharacter, DamageIn, DamageEvent, EventInstigator, DamageCauser); }
	TSubclassOf<AShooterProjectile> * BPOverrideProjectileType_Implementation(TSubclassOf<AShooterProjectile> * result) { return NativeCall<TSubclassOf<AShooterProjectile>*, TSubclassOf<AShooterProjectile>*>(this, "UPrimalItem.BPOverrideProjectileType_Implementation", result); }
	static TSubclassOf<AShooterProjectile> * GetProjectileType(TSubclassOf<AShooterProjectile> * result, TSubclassOf<UPrimalItem> ItemType) { return NativeCall<TSubclassOf<AShooterProjectile>*, TSubclassOf<AShooterProjectile>*, TSubclassOf<UPrimalItem>>(nullptr, "UPrimalItem.GetProjectileType", result, ItemType); }
	TArray<FLinearColor> * GetItemDyeColors(TArray<FLinearColor> * result) { return NativeCall<TArray<FLinearColor>*, TArray<FLinearColor>*>(this, "UPrimalItem.GetItemDyeColors", result); }
	bool IsActiveEventItem(UWorld * World) { return NativeCall<bool, UWorld*>(this, "UPrimalItem.IsActiveEventItem", World); }
	bool IsDeprecated(UWorld * World) { return NativeCall<bool, UWorld*>(this, "UPrimalItem.IsDeprecated", World); }
	void BeginDestroy() { NativeCall<void>(this, "UPrimalItem.BeginDestroy"); }
	void RemoveFromWorldItemMap() { NativeCall<void>(this, "UPrimalItem.RemoveFromWorldItemMap"); }
	bool IsBlueprintDeprecated(UWorld * World) { return NativeCall<bool, UWorld*>(this, "UPrimalItem.IsBlueprintDeprecated", World); }
	void OnVersionChange(bool* doDestroy, UWorld * World, AShooterGameMode * gameMode) { NativeCall<void, bool*, UWorld*, AShooterGameMode*>(this, "UPrimalItem.OnVersionChange", doDestroy, World, gameMode); }
	static void StaticRegisterNativesUPrimalItem() { NativeCall<void>(nullptr, "UPrimalItem.StaticRegisterNativesUPrimalItem"); }
	static UClass * GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UPrimalItem.GetPrivateStaticClass", Package); }
	void ApplyingSkinOntoItem(UPrimalItem * ToOwnerItem, bool bIsFirstTime) { NativeCall<void, UPrimalItem*, bool>(this, "UPrimalItem.ApplyingSkinOntoItem", ToOwnerItem, bIsFirstTime); }
	void BlueprintEquipped(bool bIsFromSaveGame) { NativeCall<void, bool>(this, "UPrimalItem.BlueprintEquipped", bIsFromSaveGame); }
	void BlueprintOwnerPosssessed(AController * PossessedByController) { NativeCall<void, AController*>(this, "UPrimalItem.BlueprintOwnerPosssessed", PossessedByController); }
	void BlueprintUnequipped() { NativeCall<void>(this, "UPrimalItem.BlueprintUnequipped"); }
	void BlueprintUsed() { NativeCall<void>(this, "UPrimalItem.BlueprintUsed"); }
	void BPAddedAttachments() { NativeCall<void>(this, "UPrimalItem.BPAddedAttachments"); }
	FString * BPAllowCrafting(FString * result, AShooterPlayerController * ForPC) { return NativeCall<FString*, FString*, AShooterPlayerController*>(this, "UPrimalItem.BPAllowCrafting", result, ForPC); }
	bool BPAllowRemoteAddToInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent*, AShooterPlayerController*, bool>(this, "UPrimalItem.BPAllowRemoteAddToInventory", invComp, ByPC, bRequestedByPlayer); }
	bool BPAllowRemoteRemoveFromInventory(UPrimalInventoryComponent * invComp, AShooterPlayerController * ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent*, AShooterPlayerController*, bool>(this, "UPrimalItem.BPAllowRemoteRemoveFromInventory", invComp, ByPC, bRequestedByPlayer); }
	bool BPCanAddToInventory(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.BPCanAddToInventory", toInventory); }
	bool BPCanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem.BPCanUse", bIgnoreCooldown); }
	bool BPConsumeProjectileImpact(AShooterProjectile * theProjectile, FHitResult * HitResult) { return NativeCall<bool, AShooterProjectile*, FHitResult*>(this, "UPrimalItem.BPConsumeProjectileImpact", theProjectile, HitResult); }
	void BPCrafted() { NativeCall<void>(this, "UPrimalItem.BPCrafted"); }
	void BPEquippedItemOnXPEarning(APrimalCharacter * forChar, float howMuchXP, EXPType::Type TheXPType) { NativeCall<void, APrimalCharacter*, float, EXPType::Type>(this, "UPrimalItem.BPEquippedItemOnXPEarning", forChar, howMuchXP, TheXPType); }
	bool BPForceAllowRemoteAddToInventory(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.BPForceAllowRemoteAddToInventory", toInventory); }
	float BPGetCustomAutoDecreaseDurabilityPerInterval() { return NativeCall<float>(this, "UPrimalItem.BPGetCustomAutoDecreaseDurabilityPerInterval"); }
	FString * BPGetCustomDurabilityText(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.BPGetCustomDurabilityText", result); }
	FColor * BPGetCustomDurabilityTextColor(FColor * result) { return NativeCall<FColor*, FColor*>(this, "UPrimalItem.BPGetCustomDurabilityTextColor", result); }
	UMaterialInterface * BPGetCustomIconMaterialParent() { return NativeCall<UMaterialInterface*>(this, "UPrimalItem.BPGetCustomIconMaterialParent"); }
	FString * BPGetCustomInventoryWidgetText(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.BPGetCustomInventoryWidgetText", result); }
	FColor * BPGetCustomInventoryWidgetTextColor(FColor * result) { return NativeCall<FColor*, FColor*>(this, "UPrimalItem.BPGetCustomInventoryWidgetTextColor", result); }
	USoundBase * BPGetFuelAudioOverride(APrimalStructure * ForStructure) { return NativeCall<USoundBase*, APrimalStructure*>(this, "UPrimalItem.BPGetFuelAudioOverride", ForStructure); }
	FString * BPGetItemDescription(FString * result, FString * InDescription, bool bGetLongDescription, AShooterPlayerController * ForPC) { return NativeCall<FString*, FString*, FString*, bool, AShooterPlayerController*>(this, "UPrimalItem.BPGetItemDescription", result, InDescription, bGetLongDescription, ForPC); }
	float BPGetItemDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.BPGetItemDurabilityPercentage"); }
	UTexture2D * BPGetItemIcon(AShooterPlayerController * ForPC) { return NativeCall<UTexture2D*, AShooterPlayerController*>(this, "UPrimalItem.BPGetItemIcon", ForPC); }
	FString * BPGetItemName(FString * result, FString * ItemNameIn, AShooterPlayerController * ForPC) { return NativeCall<FString*, FString*, FString*, AShooterPlayerController*>(this, "UPrimalItem.BPGetItemName", result, ItemNameIn, ForPC); }
	void BPGetItemNetInfo() { NativeCall<void>(this, "UPrimalItem.BPGetItemNetInfo"); }
	FString * BPGetSkinnedCustomInventoryWidgetText(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.BPGetSkinnedCustomInventoryWidgetText", result); }
	void BPInitFromItemNetInfo() { NativeCall<void>(this, "UPrimalItem.BPInitFromItemNetInfo"); }
	void BPInitIconMaterial() { NativeCall<void>(this, "UPrimalItem.BPInitIconMaterial"); }
	void BPInitItemColors(TArray<int> * ColorIDs) { NativeCall<void, TArray<int>*>(this, "UPrimalItem.BPInitItemColors", ColorIDs); }
	bool BPIsValidForCrafting() { return NativeCall<bool>(this, "UPrimalItem.BPIsValidForCrafting"); }
	void BPItemBelowDurabilityThreshold() { NativeCall<void>(this, "UPrimalItem.BPItemBelowDurabilityThreshold"); }
	void BPItemBroken() { NativeCall<void>(this, "UPrimalItem.BPItemBroken"); }
	void BPNotifyDropped(APrimalCharacter * FromCharacter, bool bWasThrown) { NativeCall<void, APrimalCharacter*, bool>(this, "UPrimalItem.BPNotifyDropped", FromCharacter, bWasThrown); }
	void BPOverrideCraftingConsumption(int AmountToConsume) { NativeCall<void, int>(this, "UPrimalItem.BPOverrideCraftingConsumption", AmountToConsume); }
	TSubclassOf<AShooterProjectile> * BPOverrideProjectileType(TSubclassOf<AShooterProjectile> * result) { return NativeCall<TSubclassOf<AShooterProjectile>*, TSubclassOf<AShooterProjectile>*>(this, "UPrimalItem.BPOverrideProjectileType", result); }
	void BPPostAddBuffToGiveOwnerCharacter(APrimalCharacter * OwnerCharacter, APrimalBuff * Buff) { NativeCall<void, APrimalCharacter*, APrimalBuff*>(this, "UPrimalItem.BPPostAddBuffToGiveOwnerCharacter", OwnerCharacter, Buff); }
	void BPPostInitializeItem(UWorld * OptionalInitWorld) { NativeCall<void, UWorld*>(this, "UPrimalItem.BPPostInitializeItem", OptionalInitWorld); }
	void BPPreInitializeItem(UWorld * OptionalInitWorld) { NativeCall<void, UWorld*>(this, "UPrimalItem.BPPreInitializeItem", OptionalInitWorld); }
	void BPPreUseItem() { NativeCall<void>(this, "UPrimalItem.BPPreUseItem"); }
	bool BPPreventEquip(UPrimalInventoryComponent * toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.BPPreventEquip", toInventory); }
	bool BPPreventUseOntoItem(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.BPPreventUseOntoItem", DestinationItem); }
	bool BPPreventWeaponEquip() { return NativeCall<bool>(this, "UPrimalItem.BPPreventWeaponEquip"); }
	bool BPProcessEditText(AShooterPlayerController * ForPC, FString * TextToUse) { return NativeCall<bool, AShooterPlayerController*, FString*>(this, "UPrimalItem.BPProcessEditText", ForPC, TextToUse); }
	bool BPSupportUseOntoItem(UPrimalItem * DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.BPSupportUseOntoItem", DestinationItem); }
	void BPTributeItemDownloaded(UObject * ContextObject) { NativeCall<void, UObject*>(this, "UPrimalItem.BPTributeItemDownloaded", ContextObject); }
	void BPTributeItemUploaded(UObject * ContextObject) { NativeCall<void, UObject*>(this, "UPrimalItem.BPTributeItemUploaded", ContextObject); }
	void BPUsedOntoItem(UPrimalItem * DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem.BPUsedOntoItem", DestinationItem, AdditionalData); }
	void ClientUpdatedWeaponClipAmmo() { NativeCall<void>(this, "UPrimalItem.ClientUpdatedWeaponClipAmmo"); }
	void Crafted(bool bWasCraftedFromEngram) { NativeCall<void, bool>(this, "UPrimalItem.Crafted", bWasCraftedFromEngram); }
	void EquippedBlueprintTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.EquippedBlueprintTick", DeltaSeconds); }
	FString * GetInventoryIconDisplayText(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetInventoryIconDisplayText", result); }
	float HandleShieldDamageBlocking(AShooterCharacter * ForShooterCharacter, float DamageIn, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AShooterCharacter*, float, FDamageEvent*, AController*, AActor*>(this, "UPrimalItem.HandleShieldDamageBlocking", ForShooterCharacter, DamageIn, DamageEvent, EventInstigator, DamageCauser); }
	USoundBase * OverrideCrouchingSound(USoundBase * InSound, bool bIsProne, int soundState) { return NativeCall<USoundBase*, USoundBase*, bool, int>(this, "UPrimalItem.OverrideCrouchingSound", InSound, bIsProne, soundState); }
	void RemovedSkinFromItem(UPrimalItem * FromOwnerItem, bool bIsFirstTime) { NativeCall<void, UPrimalItem*, bool>(this, "UPrimalItem.RemovedSkinFromItem", FromOwnerItem, bIsFirstTime); }
	void ServerUpdatedWeaponClipAmmo() { NativeCall<void>(this, "UPrimalItem.ServerUpdatedWeaponClipAmmo"); }
	void SkinEquippedBlueprintTick(UPrimalItem * OwnerItem, float DeltaSeconds) { NativeCall<void, UPrimalItem*, float>(this, "UPrimalItem.SkinEquippedBlueprintTick", OwnerItem, DeltaSeconds); }
	void SlottedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.SlottedTick", DeltaSeconds); }
};

struct FItemNetInfo
{
	TSubclassOf<UPrimalItem>& ItemArchetypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemArchetype"); }
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "FItemNetInfo.ItemID"); }
	unsigned int& ItemQuantityField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ItemQuantity"); }
	int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.CustomItemID"); }
	int& SlotIndexField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.SlotIndex"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.CreationTime"); }
	FString& CustomItemNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemName"); }
	FString& CustomItemDescriptionField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemDescription"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.UploadEarliestValidTime"); }
	TArray<unsigned __int64>& SteamUserItemIDField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FItemNetInfo.SteamUserItemID"); }
	unsigned __int16& CraftQueueField() { return *GetNativePointerField<unsigned __int16*>(this, "FItemNetInfo.CraftQueue"); }
	long double& NextCraftCompletionTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextCraftCompletionTime"); }
	float& CraftingSkillField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftingSkill"); }
	float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftedSkillBonus"); }
	FString& CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterCharacterName"); }
	FString& CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterTribeName"); }
	unsigned int& WeaponClipAmmoField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.WeaponClipAmmo"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemDurability"); }
	float& ItemRatingField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemRating"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ExpirationTimeUTC"); }
	char& ItemQualityIndexField() { return *GetNativePointerField<char*>(this, "FItemNetInfo.ItemQualityIndex"); }
	TSubclassOf<UPrimalItem>& ItemCustomClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemCustomClass"); }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return { this, "FItemNetInfo.ItemStatValues" }; }
	FieldArray<__int16, 6> ItemColorIDField() { return { this, "FItemNetInfo.ItemColorID" }; }
	TSubclassOf<UPrimalItem>& ItemSkinTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemSkinTemplate"); }
	TArray<FCustomItemData>& CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData>*>(this, "FItemNetInfo.CustomItemDatas"); }
	TArray<FColor>& CustomItemColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "FItemNetInfo.CustomItemColors"); }
	TArray<FCraftingResourceRequirement>& CustomResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "FItemNetInfo.CustomResourceRequirements"); }
	long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextSpoilingTime"); }
	long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastSpoilingTime"); }
	unsigned __int64& OwnerPlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FItemNetInfo.OwnerPlayerDataId"); }
	TWeakObjectPtr<AShooterCharacter>& LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "FItemNetInfo.LastOwnerPlayer"); }
	long double& LastAutoDurabilityDecreaseTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastAutoDurabilityDecreaseTime"); }
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemStatClampsMultiplier"); }
	FVector& OriginalItemDropLocationField() { return *GetNativePointerField<FVector*>(this, "FItemNetInfo.OriginalItemDropLocation"); }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return { this, "FItemNetInfo.PreSkinItemColorID" }; }
	FieldArray<char, 12> EggNumberOfLevelUpPointsAppliedField() { return { this, "FItemNetInfo.EggNumberOfLevelUpPointsApplied" }; }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.EggTamedIneffectivenessModifier"); }
	FieldArray<char, 6> EggColorSetIndicesField() { return { this, "FItemNetInfo.EggColorSetIndices" }; }
	char& ItemVersionField() { return *GetNativePointerField<char*>(this, "FItemNetInfo.ItemVersion"); }
	long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.ClusterSpoilingTimeUTC"); }
	TArray<FDinoAncestorsEntry>& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "FItemNetInfo.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntry>& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "FItemNetInfo.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsMale"); }
	char& ItemProfileVersionField() { return *GetNativePointerField<char*>(this, "FItemNetInfo.ItemProfileVersion"); }
	bool& bNetInfoFromClientField() { return *GetNativePointerField<bool*>(this, "FItemNetInfo.bNetInfoFromClient"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bIsBlueprint() { return { this, "FItemNetInfo.bIsBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bIsEngram() { return { this, "FItemNetInfo.bIsEngram" }; }
	BitFieldValue<bool, unsigned __int32> bIsCustomRecipe() { return { this, "FItemNetInfo.bIsCustomRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsFoodRecipe() { return { this, "FItemNetInfo.bIsFoodRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "FItemNetInfo.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory() { return { this, "FItemNetInfo.bAllowRemovalFromInventory" }; }
	BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay() { return { this, "FItemNetInfo.bHideFromInventoryDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromSteamInventory() { return { this, "FItemNetInfo.bAllowRemovalFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bFromSteamInventory() { return { this, "FItemNetInfo.bFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory() { return { this, "FItemNetInfo.bIsFromAllClustersInventory" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventGrinding() { return { this, "FItemNetInfo.bForcePreventGrinding" }; }
	BitFieldValue<bool, unsigned __int32> bIsEquipped() { return { this, "FItemNetInfo.bIsEquipped" }; }
	BitFieldValue<bool, unsigned __int32> bIsSlot() { return { this, "FItemNetInfo.bIsSlot" }; }
	BitFieldValue<bool, unsigned __int32> bIsInitialItem() { return { this, "FItemNetInfo.bIsInitialItem" }; }

	// Functions

	FItemNetInfo* operator=(FItemNetInfo* __that) { return NativeCall<FItemNetInfo*, FItemNetInfo*>(this, "FItemNetInfo.operator=", __that); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemNetInfo.StaticStruct"); }
};

struct FItemStatInfo
{
	int& DefaultModifierValueField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.DefaultModifierValue"); }
	int& RandomizerRangeOverrideField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.RandomizerRangeOverride"); }
	float& RandomizerRangeMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RandomizerRangeMultiplier"); }
	float& TheRandomizerPowerField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.TheRandomizerPower"); }
	float& StateModifierScaleField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.StateModifierScale"); }
	float& InitialValueConstantField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.InitialValueConstant"); }
	float& RatingValueMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RatingValueMultiplier"); }
	float& AbsoluteMaxValueField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.AbsoluteMaxValue"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bUsed() { return { this, "FItemStatInfo.bUsed" }; }
	BitFieldValue<bool, unsigned __int32> bCalculateAsPercent() { return { this, "FItemStatInfo.bCalculateAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayAsPercent() { return { this, "FItemStatInfo.bDisplayAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSubmerged() { return { this, "FItemStatInfo.bRequiresSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bPreventIfSubmerged() { return { this, "FItemStatInfo.bPreventIfSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bHideStatFromTooltip() { return { this, "FItemStatInfo.bHideStatFromTooltip" }; }

	// Functions

	float GetItemStatModifier(unsigned __int16 ItemStatValue) { return NativeCall<float, unsigned __int16>(this, "FItemStatInfo.GetItemStatModifier", ItemStatValue); }
	unsigned __int16 GetRandomValue(float QualityLevel, float MinRandomQuality, float* outRandonMultiplier) { return NativeCall<unsigned __int16, float, float, float*>(this, "FItemStatInfo.GetRandomValue", QualityLevel, MinRandomQuality, outRandonMultiplier); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemStatInfo.StaticStruct"); }
};


