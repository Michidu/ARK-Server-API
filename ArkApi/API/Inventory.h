#pragma once

#include "Base.h"

struct FItemNetID
{
	unsigned int ItemID1;
	unsigned int ItemID2;
};

struct UPrimalInventoryComponent
{
	TArray<TWeakObjectPtr<AShooterPlayerController>> GetRemoteViewingInventoryPlayerControllersField() const { return GetNativeField<TArray<TWeakObjectPtr<AShooterPlayerController>>>(this, "UPrimalInventoryComponent", "RemoteViewingInventoryPlayerControllers"); }
	TArray<UPrimalItem *> GetInventoryItemsField() const { return GetNativeField<TArray<UPrimalItem *>>(this, "UPrimalInventoryComponent", "InventoryItems"); }
	TArray<UPrimalItem *> GetEquippedItemsField() const { return GetNativeField<TArray<UPrimalItem *>>(this, "UPrimalInventoryComponent", "EquippedItems"); }
	void SetEquippedItemsField(TArray<UPrimalItem *> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "EquippedItems", newValue); }
	TArray<UPrimalItem *> GetItemSlotsField() const { return GetNativeField<TArray<UPrimalItem *>>(this, "UPrimalInventoryComponent", "ItemSlots"); }
	void SetItemSlotsField(TArray<UPrimalItem *> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ItemSlots", newValue); }
	TArray<UPrimalItem *> GetArkTributeItemsField() const { return GetNativeField<TArray<UPrimalItem *>>(this, "UPrimalInventoryComponent", "ArkTributeItems"); }
	void SetArkTributeItemsField(TArray<UPrimalItem *> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ArkTributeItems", newValue); }
	TArray<UPrimalItem *> GetAllDyeColorItemsField() const { return GetNativeField<TArray<UPrimalItem *>>(this, "UPrimalInventoryComponent", "AllDyeColorItems"); }
	void SetAllDyeColorItemsField(TArray<UPrimalItem *> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "AllDyeColorItems", newValue); }
	//TArray<FItemCraftQueueEntry> GetItemCraftQueueEntriesField() const { return GetNativeField<TArray<FItemCraftQueueEntry>>(this, "UPrimalInventoryComponent", "ItemCraftQueueEntries"); }
	//TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>> GetEquippableItemTypesField() const { return GetNativeField<TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>>>(this, "UPrimalInventoryComponent", "EquippableItemTypes"); }
	//void SetEquippableItemTypesField(TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "EquippableItemTypes", newValue); }
	//TArray<FItemMultiplier> GetItemSpoilingTimeMultipliersField() const { return GetNativeField<TArray<FItemMultiplier>>(this, "UPrimalInventoryComponent", "ItemSpoilingTimeMultipliers"); }
	//void SetItemSpoilingTimeMultipliersField(TArray<FItemMultiplier> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ItemSpoilingTimeMultipliers", newValue); }
	int GetMaxInventoryItemsField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "MaxInventoryItems"); }
	void SetMaxInventoryItemsField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MaxInventoryItems", newValue); }
	float GetMaxInventoryWeightField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "MaxInventoryWeight"); }
	void SetMaxInventoryWeightField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MaxInventoryWeight", newValue); }
	char GetTribeGroupInventoryRankField() const { return GetNativeField<char>(this, "UPrimalInventoryComponent", "TribeGroupInventoryRank"); }
	void SetTribeGroupInventoryRankField(char newValue) { SetNativeField(this, "UPrimalInventoryComponent", "TribeGroupInventoryRank", newValue); }
	int GetNumSlotsField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "NumSlots"); }
	void SetNumSlotsField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "NumSlots", newValue); }
	int GetMaxItemCraftQueueEntriesField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "MaxItemCraftQueueEntries"); }
	void SetMaxItemCraftQueueEntriesField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MaxItemCraftQueueEntries", newValue); }
	float GetCraftingItemSpeedField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "CraftingItemSpeed"); }
	void SetCraftingItemSpeedField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "CraftingItemSpeed", newValue); }
	FString GetRemoteInventoryDescriptionStringField() const { return GetNativeField<FString>(this, "UPrimalInventoryComponent", "RemoteInventoryDescriptionString"); }
	void SetRemoteInventoryDescriptionStringField(FString newValue) { SetNativeField(this, "UPrimalInventoryComponent", "RemoteInventoryDescriptionString", newValue); }
	TSubclassOf<UPrimalItem> GetEngramRequirementClassOverrideField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent", "EngramRequirementClassOverride"); }
	void SetEngramRequirementClassOverrideField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "EngramRequirementClassOverride", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetRemoteAddItemOnlyAllowItemClassesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "RemoteAddItemOnlyAllowItemClasses"); }
	void SetRemoteAddItemOnlyAllowItemClassesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "RemoteAddItemOnlyAllowItemClasses", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetRemoteAddItemPreventItemClassesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "RemoteAddItemPreventItemClasses"); }
	void SetRemoteAddItemPreventItemClassesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "RemoteAddItemPreventItemClasses", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDefaultInventoryItemsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "DefaultInventoryItems"); }
	void SetDefaultInventoryItemsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultInventoryItems", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDefaultInventoryItems2Field() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "DefaultInventoryItems2"); }
	void SetDefaultInventoryItems2Field(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultInventoryItems2", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDefaultInventoryItems3Field() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "DefaultInventoryItems3"); }
	void SetDefaultInventoryItems3Field(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultInventoryItems3", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDefaultInventoryItems4Field() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "DefaultInventoryItems4"); }
	void SetDefaultInventoryItems4Field(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultInventoryItems4", newValue); }
	TArray<FString> GetDefaultInventoryItemsRandomCustomStringsField() const { return GetNativeField<TArray<FString>>(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStrings"); }
	void SetDefaultInventoryItemsRandomCustomStringsField(TArray<FString> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStrings", newValue); }
	TArray<float> GetDefaultInventoryItemsRandomCustomStringsWeightsField() const { return GetNativeField<TArray<float>>(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStringsWeights"); }
	void SetDefaultInventoryItemsRandomCustomStringsWeightsField(TArray<float> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStringsWeights", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetCheatInventoryItemsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "CheatInventoryItems"); }
	void SetCheatInventoryItemsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "CheatInventoryItems", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDefaultEquippedItemsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "DefaultEquippedItems"); }
	void SetDefaultEquippedItemsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultEquippedItems", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDefaultEquippedItemSkinsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "DefaultEquippedItemSkins"); }
	void SetDefaultEquippedItemSkinsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultEquippedItemSkins", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDefaultSlotItemsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "DefaultSlotItems"); }
	void SetDefaultSlotItemsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultSlotItems", newValue); }
	//TArray<FItemSpawnActorClassOverride> GetItemSpawnActorClassOverridesField() const { return GetNativeField<TArray<FItemSpawnActorClassOverride>>(this, "UPrimalInventoryComponent", "ItemSpawnActorClassOverrides"); }
	//void SetItemSpawnActorClassOverridesField(TArray<FItemSpawnActorClassOverride> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ItemSpawnActorClassOverrides", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetOnlyAllowCraftingItemClassesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "OnlyAllowCraftingItemClasses"); }
	void SetOnlyAllowCraftingItemClassesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "OnlyAllowCraftingItemClasses", newValue); }
	TArray<unsigned char> GetDefaultEngramsField() const { return GetNativeField<TArray<unsigned char>>(this, "UPrimalInventoryComponent", "DefaultEngrams"); }
	void SetDefaultEngramsField(TArray<unsigned char> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultEngrams", newValue); }
	TArray<unsigned char> GetDefaultEngrams2Field() const { return GetNativeField<TArray<unsigned char>>(this, "UPrimalInventoryComponent", "DefaultEngrams2"); }
	void SetDefaultEngrams2Field(TArray<unsigned char> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultEngrams2", newValue); }
	TArray<unsigned char> GetDefaultEngrams3Field() const { return GetNativeField<TArray<unsigned char>>(this, "UPrimalInventoryComponent", "DefaultEngrams3"); }
	void SetDefaultEngrams3Field(TArray<unsigned char> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultEngrams3", newValue); }
	TArray<unsigned char> GetDefaultEngrams4Field() const { return GetNativeField<TArray<unsigned char>>(this, "UPrimalInventoryComponent", "DefaultEngrams4"); }
	void SetDefaultEngrams4Field(TArray<unsigned char> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultEngrams4", newValue); }
	TArray<float> GetDefaultInventoryQualitiesField() const { return GetNativeField<TArray<float>>(this, "UPrimalInventoryComponent", "DefaultInventoryQualities"); }
	void SetDefaultInventoryQualitiesField(TArray<float> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultInventoryQualities", newValue); }
	FString GetInventoryNameOverrideField() const { return GetNativeField<FString>(this, "UPrimalInventoryComponent", "InventoryNameOverride"); }
	void SetInventoryNameOverrideField(FString newValue) { SetNativeField(this, "UPrimalInventoryComponent", "InventoryNameOverride", newValue); }
	float GetMaxRemoteInventoryViewingDistanceField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "MaxRemoteInventoryViewingDistance"); }
	void SetMaxRemoteInventoryViewingDistanceField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MaxRemoteInventoryViewingDistance", newValue); }
	float GetActiveInventoryRefreshIntervalField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "ActiveInventoryRefreshInterval"); }
	void SetActiveInventoryRefreshIntervalField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ActiveInventoryRefreshInterval", newValue); }
	int GetAbsoluteMaxInventoryItemsField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "AbsoluteMaxInventoryItems"); }
	void SetAbsoluteMaxInventoryItemsField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "AbsoluteMaxInventoryItems", newValue); }
	long double GetLastInventoryRefreshTimeField() const { return GetNativeField<long double>(this, "UPrimalInventoryComponent", "LastInventoryRefreshTime"); }
	void SetLastInventoryRefreshTimeField(long double newValue) { SetNativeField(this, "UPrimalInventoryComponent", "LastInventoryRefreshTime", newValue); }
	//TSubclassOf<ADroppedItem> GetDroppedItemTemplateOverrideField() const { return GetNativeField<TSubclassOf<ADroppedItem>>(this, "UPrimalInventoryComponent", "DroppedItemTemplateOverride"); }
	TArray<TSubclassOf<UPrimalItem>> GetForceAllowItemStackingsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "ForceAllowItemStackings"); }
	void SetForceAllowItemStackingsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ForceAllowItemStackings", newValue); }
	FRotator GetDropItemRotationOffsetField() const { return GetNativeField<FRotator>(this, "UPrimalInventoryComponent", "DropItemRotationOffset"); }
	void SetDropItemRotationOffsetField(FRotator newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DropItemRotationOffset", newValue); }
	//TArray<FItemCraftingConsumptionReplenishment> GetItemCraftingConsumptionReplenishmentsField() const { return GetNativeField<TArray<FItemCraftingConsumptionReplenishment>>(this, "UPrimalInventoryComponent", "ItemCraftingConsumptionReplenishments"); }
	float GetMaxItemCooldownTimeClearField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "MaxItemCooldownTimeClear"); }
	void SetMaxItemCooldownTimeClearField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MaxItemCooldownTimeClear", newValue); }
	//TArray<FActorClassAttachmentInfo> GetWeaponAsEquipmentAttachmentInfosField() const { return GetNativeField<TArray<FActorClassAttachmentInfo>>(this, "UPrimalInventoryComponent", "WeaponAsEquipmentAttachmentInfos"); }
	TArray<UPrimalItem *> GetCraftingItemsField() const { return GetNativeField<TArray<UPrimalItem *>>(this, "UPrimalInventoryComponent", "CraftingItems"); }
	void SetCraftingItemsField(TArray<UPrimalItem *> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "CraftingItems", newValue); }
	int GetDisplayDefaultItemInventoryCountField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "DisplayDefaultItemInventoryCount"); }
	void SetDisplayDefaultItemInventoryCountField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DisplayDefaultItemInventoryCount", newValue); }
	bool GetbHasBeenRegisteredField() const { return GetNativeField<bool>(this, "UPrimalInventoryComponent", "bHasBeenRegistered"); }
	void SetbHasBeenRegisteredField(bool newValue) { SetNativeField(this, "UPrimalInventoryComponent", "bHasBeenRegistered", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetLastUsedItemClassesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "LastUsedItemClasses"); }
	void SetLastUsedItemClassesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "LastUsedItemClasses", newValue); }
	TArray<double> GetLastUsedItemTimesField() const { return GetNativeField<TArray<double>>(this, "UPrimalInventoryComponent", "LastUsedItemTimes"); }
	void SetLastUsedItemTimesField(TArray<double> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "LastUsedItemTimes", newValue); }
	int GetInvUpdatedFrameField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "InvUpdatedFrame"); }
	void SetInvUpdatedFrameField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "InvUpdatedFrame", newValue); }
	long double GetLastRefreshCheckItemTimeField() const { return GetNativeField<long double>(this, "UPrimalInventoryComponent", "LastRefreshCheckItemTime"); }
	void SetLastRefreshCheckItemTimeField(long double newValue) { SetNativeField(this, "UPrimalInventoryComponent", "LastRefreshCheckItemTime", newValue); }
	bool GetbLastPreventUseItemSpoilingTimeMultipliersField() const { return GetNativeField<bool>(this, "UPrimalInventoryComponent", "bLastPreventUseItemSpoilingTimeMultipliers"); }
	void SetbLastPreventUseItemSpoilingTimeMultipliersField(bool newValue) { SetNativeField(this, "UPrimalInventoryComponent", "bLastPreventUseItemSpoilingTimeMultipliers", newValue); }
	FItemNetID GetNextItemSpoilingIDField() const { return GetNativeField<FItemNetID>(this, "UPrimalInventoryComponent", "NextItemSpoilingID"); }
	void SetNextItemSpoilingIDField(FItemNetID newValue) { SetNativeField(this, "UPrimalInventoryComponent", "NextItemSpoilingID", newValue); }
	FItemNetID GetNextItemConsumptionIDField() const { return GetNativeField<FItemNetID>(this, "UPrimalInventoryComponent", "NextItemConsumptionID"); }
	void SetNextItemConsumptionIDField(FItemNetID newValue) { SetNativeField(this, "UPrimalInventoryComponent", "NextItemConsumptionID", newValue); }
	float GetMinItemSetsField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "MinItemSets"); }
	void SetMinItemSetsField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MinItemSets", newValue); }
	float GetMaxItemSetsField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "MaxItemSets"); }
	void SetMaxItemSetsField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MaxItemSets", newValue); }
	float GetNumItemSetsPowerField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "NumItemSetsPower"); }
	void SetNumItemSetsPowerField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "NumItemSetsPower", newValue); }
	//TArray<FSupplyCrateItemSet> GetItemSetsField() const { return GetNativeField<TArray<FSupplyCrateItemSet>>(this, "UPrimalInventoryComponent", "ItemSets"); }
	//TArray<FSupplyCrateItemSet> GetAdditionalItemSetsField() const { return GetNativeField<TArray<FSupplyCrateItemSet>>(this, "UPrimalInventoryComponent", "AdditionalItemSets"); }
	//TSubclassOf<UPrimalSupplyCrateItemSets> GetItemSetsOverrideField() const { return GetNativeField<TSubclassOf<UPrimalSupplyCrateItemSets>>(this, "UPrimalInventoryComponent", "ItemSetsOverride"); }
	TArray<float> GetSetQuantityWeightsField() const { return GetNativeField<TArray<float>>(this, "UPrimalInventoryComponent", "SetQuantityWeights"); }
	void SetSetQuantityWeightsField(TArray<float> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "SetQuantityWeights", newValue); }
	TArray<float> GetSetQuantityValuesField() const { return GetNativeField<TArray<float>>(this, "UPrimalInventoryComponent", "SetQuantityValues"); }
	void SetSetQuantityValuesField(TArray<float> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "SetQuantityValues", newValue); }
	float GetMaxInventoryAccessDistanceField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "MaxInventoryAccessDistance"); }
	void SetMaxInventoryAccessDistanceField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "MaxInventoryAccessDistance", newValue); }
	TArray<FString> GetServerCustomFolderField() const { return GetNativeField<TArray<FString>>(this, "UPrimalInventoryComponent", "ServerCustomFolder"); }
	void SetServerCustomFolderField(TArray<FString> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ServerCustomFolder", newValue); }
	TArray<TSubclassOf<UPrimalInventoryComponent>> GetForceAllowCraftingForInventoryComponentsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalInventoryComponent>>>(this, "UPrimalInventoryComponent", "ForceAllowCraftingForInventoryComponents"); }
	void SetForceAllowCraftingForInventoryComponentsField(TArray<TSubclassOf<UPrimalInventoryComponent>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ForceAllowCraftingForInventoryComponents", newValue); }
	//TArray<FItemMultiplier> GetItemClassWeightMultipliersField() const { return GetNativeField<TArray<FItemMultiplier>>(this, "UPrimalInventoryComponent", "ItemClassWeightMultipliers"); }
	float GetGenerateItemSetsQualityMultiplierMinField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMin"); }
	void SetGenerateItemSetsQualityMultiplierMinField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMin", newValue); }
	float GetGenerateItemSetsQualityMultiplierMaxField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMax"); }
	void SetGenerateItemSetsQualityMultiplierMaxField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMax", newValue); }
	float GetDefaultCraftingRequirementsMultiplierField() const { return GetNativeField<float>(this, "UPrimalInventoryComponent", "DefaultCraftingRequirementsMultiplier"); }
	void SetDefaultCraftingRequirementsMultiplierField(float newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultCraftingRequirementsMultiplier", newValue); }
	int GetDefaultCraftingQuantityMultiplierField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "DefaultCraftingQuantityMultiplier"); }
	void SetDefaultCraftingQuantityMultiplierField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DefaultCraftingQuantityMultiplier", newValue); }
	int GetSavedForceDefaultInventoryRefreshVersionField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "SavedForceDefaultInventoryRefreshVersion"); }
	void SetSavedForceDefaultInventoryRefreshVersionField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "SavedForceDefaultInventoryRefreshVersion", newValue); }
	int GetForceDefaultInventoryRefreshVersionField() const { return GetNativeField<int>(this, "UPrimalInventoryComponent", "ForceDefaultInventoryRefreshVersion"); }
	void SetForceDefaultInventoryRefreshVersionField(int newValue) { SetNativeField(this, "UPrimalInventoryComponent", "ForceDefaultInventoryRefreshVersion", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetTamedDinoForceConsiderFoodTypesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalInventoryComponent", "TamedDinoForceConsiderFoodTypes"); }
	void SetTamedDinoForceConsiderFoodTypesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "TamedDinoForceConsiderFoodTypes", newValue); }
	TArray<UPrimalItem *> GetDinoAutoHealingItemsField() const { return GetNativeField<TArray<UPrimalItem *>>(this, "UPrimalInventoryComponent", "DinoAutoHealingItems"); }
	void SetDinoAutoHealingItemsField(TArray<UPrimalItem *> newValue) { SetNativeField(this, "UPrimalInventoryComponent", "DinoAutoHealingItems", newValue); }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "UPrimalInventoryComponent", "StaticClass"); }
	void OnRegister() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "OnRegister"); }
	//bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>((DWORD64)this, "UPrimalInventoryComponent", "AllowEquippingItemType", equipmentType); }
	bool CanEquipItem(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "CanEquipItem", anItem); }
	bool AllowAddInventoryItem(UPrimalItem* anItem, int* requestedQuantity, bool OnlyAddAll) { return NativeCall<bool, UPrimalItem *, int *, bool>((DWORD64)this, "UPrimalInventoryComponent", "AllowAddInventoryItem", anItem, requestedQuantity, OnlyAddAll); }
	UPrimalItem* AddItem(FItemNetInfo* theItemInfo, bool bEquipItem, bool AddToSlot, bool bDontStack, FItemNetID* InventoryInsertAfterItemID, bool ShowHUDNotification, bool bDontRecalcSpoilingTime) { return NativeCall<UPrimalItem *, FItemNetInfo *, bool, bool, bool, FItemNetID *, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "AddItem", theItemInfo, bEquipItem, AddToSlot, bDontStack, InventoryInsertAfterItemID, ShowHUDNotification, bDontRecalcSpoilingTime); }
	bool IsLocalInventoryViewer() { return NativeCall<bool>((DWORD64)this, "UPrimalInventoryComponent", "IsLocalInventoryViewer"); }
	void NotifyItemAdded(UPrimalItem* theItem, bool bEquippedItem) { NativeCall<void, UPrimalItem *, bool>((DWORD64)this, "UPrimalInventoryComponent", "NotifyItemAdded", theItem, bEquippedItem); }
	void NotifyArkItemAdded() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "NotifyArkItemAdded"); }
	void NotifyItemRemoved(UPrimalItem* theItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "NotifyItemRemoved", theItem); }
	void RemoveItemSpoilingTimer(UPrimalItem* theItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "RemoveItemSpoilingTimer", theItem); }
	bool LoadAdditionalStructureEngrams() { return NativeCall<bool>((DWORD64)this, "UPrimalInventoryComponent", "LoadAdditionalStructureEngrams"); }
	bool RemoveItem(FItemNetID* itemID, bool bDoDrop, bool bSecondryAction, bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, FItemNetID *, bool, bool, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "RemoveItem", itemID, bDoDrop, bSecondryAction, bForceRemoval, showHUDMessage); }
	bool ServerEquipItem(FItemNetID* itemID) { return NativeCall<bool, FItemNetID *>((DWORD64)this, "UPrimalInventoryComponent", "ServerEquipItem", itemID); }
	void DropItem(FItemNetInfo* theInfo, bool bOverrideSpawnTransform, FVector* LocationOverride, FRotator* RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation) { NativeCall<void, FItemNetInfo *, bool, FVector *, FRotator *, bool, bool, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "DropItem", theInfo, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation); }
	static ADroppedItem* StaticDropNewItem(AActor* forActor, TSubclassOf<UPrimalItem> AnItemClass, float ItemQuality, bool bForceNoBlueprint, int QuantityOverride, bool bForceBlueprint, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator* DroppedRotationOffset, bool bOverrideSpawnTransform, FVector* LocationOverride, FRotator* RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondaryAction, bool bSetItemDropLocation) { return NativeCall<ADroppedItem *, AActor *, TSubclassOf<UPrimalItem>, float, bool, int, bool, TSubclassOf<ADroppedItem>, FRotator *, bool, FVector *, FRotator *, bool, bool, bool, bool>(nullptr, "UPrimalInventoryComponent", "StaticDropNewItem", forActor, AnItemClass, ItemQuality, bForceNoBlueprint, QuantityOverride, bForceBlueprint, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondaryAction, bSetItemDropLocation); }
	//ADroppedItem * StaticDropItem(AActor * forActor FItemNetInfo * theInfo, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, FRotator * DroppedRotationOffset, bool bOverrideSpawnTransform, FVector * LocationOverride, FRotator * RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation) { return NativeCall<ADroppedItem *, AActor *, FItemNetInfo *, TSubclassOf<ADroppedItem>, FRotator *, bool, FVector *, FRotator *, bool, bool, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "StaticDropItem", forActor, theInfo, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation); }
	AShooterPlayerController* GetOwnerController() { return NativeCall<AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "GetOwnerController"); }
	void UpdateNetWeaponClipAmmo(UPrimalItem* anItem, int ammo) { NativeCall<void, UPrimalItem *, int>((DWORD64)this, "UPrimalInventoryComponent", "UpdateNetWeaponClipAmmo", anItem, ammo); }
	void NotifyClientsItemStatus(UPrimalItem* anItem, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, UPrimalItem* anItem2, FItemNetID* InventoryInsertAfterItemID, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalItem *, bool, bool, bool, bool, bool, UPrimalItem *, FItemNetID *, bool, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "NotifyClientsItemStatus", anItem, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, anItem2, InventoryInsertAfterItemID, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void NotifyClientItemArkTributeStatusChanged(UPrimalItem* anItem, bool bRemoved, bool bFromLoad) { NativeCall<void, UPrimalItem *, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "NotifyClientItemArkTributeStatusChanged", anItem, bRemoved, bFromLoad); }
	void ServerRequestItems(AShooterPlayerController* forPC, bool bEquippedItems, bool bIsFirstSpawn) { NativeCall<void, AShooterPlayerController *, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "ServerRequestItems", forPC, bEquippedItems, bIsFirstSpawn); }
	void ClientStartReceivingItems(bool bEquippedItems) { NativeCall<void, bool>((DWORD64)this, "UPrimalInventoryComponent", "ClientStartReceivingItems", bEquippedItems); }
	void ClientFinishReceivingItems(bool bEquippedItems) { NativeCall<void, bool>((DWORD64)this, "UPrimalInventoryComponent", "ClientFinishReceivingItems", bEquippedItems); }
	TArray<UPrimalItem *>* FindColorItem(TArray<UPrimalItem *>* result, FColor theColor, bool bEquippedItems) { return NativeCall<TArray<UPrimalItem *> *, TArray<UPrimalItem *> *, FColor, bool>((DWORD64)this, "UPrimalInventoryComponent", "FindColorItem", result, theColor, bEquippedItems); }
	TArray<UPrimalItem *>* FindBrushColorItem(TArray<UPrimalItem *>* result, __int16 ArchIndex) { return NativeCall<TArray<UPrimalItem *> *, TArray<UPrimalItem *> *, __int16>((DWORD64)this, "UPrimalInventoryComponent", "FindBrushColorItem", result, ArchIndex); }
	UPrimalItem* FindItem(FItemNetID* ItemID, bool bEquippedItems, bool bAllItems, int* itemIdx) { return NativeCall<UPrimalItem *, FItemNetID *, bool, bool, int *>((DWORD64)this, "UPrimalInventoryComponent", "FindItem", ItemID, bEquippedItems, bAllItems, itemIdx); }
	void GiveInitialItems(bool SkipEngrams) { NativeCall<void, bool>((DWORD64)this, "UPrimalInventoryComponent", "GiveInitialItems", SkipEngrams); }
	void InitializeInventory() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "InitializeInventory"); }
	void CheckRefreshDefaultInventoryItems() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "CheckRefreshDefaultInventoryItems"); }
	void SetEquippedItemsOwnerNoSee(bool bNewOwnerNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "SetEquippedItemsOwnerNoSee", bNewOwnerNoSee, bForceHideFirstPerson); }
	bool RemoteInventoryAllowViewing(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "RemoteInventoryAllowViewing", PC); }
	bool RemoteInventoryAllowAddItems(AShooterPlayerController* PC, UPrimalItem* anItem, int* anItemQuantityOverride) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int *>((DWORD64)this, "UPrimalInventoryComponent", "RemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride); }
	bool RemoteInventoryAllowRemoveItems(AShooterPlayerController* PC, UPrimalItem* anItemToTransfer, int* requestedQuantity) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int *>((DWORD64)this, "UPrimalInventoryComponent", "RemoteInventoryAllowRemoveItems", PC, anItemToTransfer, requestedQuantity); }
	bool RemoteInventoryAllowCraftingItems(AShooterPlayerController* PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController *, bool>((DWORD64)this, "UPrimalInventoryComponent", "RemoteInventoryAllowCraftingItems", PC, bIgnoreEnabled); }
	bool RemoteInventoryAllowRepairingItems(AShooterPlayerController* PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController *, bool>((DWORD64)this, "UPrimalInventoryComponent", "RemoteInventoryAllowRepairingItems", PC, bIgnoreEnabled); }
	void ServerViewRemoteInventory(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "ServerViewRemoteInventory", ByPC); }
	void ServerCloseRemoteInventory(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "ServerCloseRemoteInventory", ByPC); }
	void OnComponentDestroyed() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "OnComponentDestroyed"); }
	void GetCustomFolderItems() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "GetCustomFolderItems"); }
	bool AddToFolders(TArray<FString>* FoldersFound, UPrimalItem* anItem) { return NativeCall<bool, TArray<FString> *, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "AddToFolders", FoldersFound, anItem); }
	FString* GetInventoryName(FString* result, bool bIsEquipped) { return NativeCall<FString *, FString *, bool>((DWORD64)this, "UPrimalInventoryComponent", "GetInventoryName", result, bIsEquipped); }
	int GetFirstUnoccupiedSlot(AShooterPlayerState* forPlayerState, UPrimalItem* forItem) { return NativeCall<int, AShooterPlayerState *, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "GetFirstUnoccupiedSlot", forPlayerState, forItem); }
	void ServerRemoveItemFromSlot_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "ServerRemoveItemFromSlot_Implementation", ItemID); }
	void ServerAddItemToSlot_Implementation(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>((DWORD64)this, "UPrimalInventoryComponent", "ServerAddItemToSlot_Implementation", ItemID, SlotIndex); }
	//UPrimalItem * GetEquippedItemOfType(EPrimalEquipmentType::Type aType) { return NativeCall<UPrimalItem *, EPrimalEquipmentType::Type>((DWORD64)this, "UPrimalInventoryComponent", "GetEquippedItemOfType", aType); }
	int IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, UPrimalItem** UseSpecificItem, UPrimalItem** IncrementedItem, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool ShowHUDNotification, bool bDontRecalcSpoilingTime) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool, bool, UPrimalItem **, UPrimalItem **, bool, bool, bool, bool, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "IncrementItemTemplateQuantity", ItemTemplate, amount, bReplicateToClient, bIsBlueprint, UseSpecificItem, IncrementedItem, bRequireExactClassMatch, bIsCraftingResourceConsumption, bIsFromUseConsumption, bIsArkTributeItem, ShowHUDNotification, bDontRecalcSpoilingTime); }
	bool IncrementArkTributeItemQuantity(UPrimalItem* NewItem, UPrimalItem** IncrementedItem) { return NativeCall<bool, UPrimalItem *, UPrimalItem **>((DWORD64)this, "UPrimalInventoryComponent", "IncrementArkTributeItemQuantity", NewItem, IncrementedItem); }
	UPrimalItem* GetItemOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate, bool bOnlyInventoryItems, bool bOnlyEquippedItems, bool IgnoreItemsWithFullQuantity, bool bFavorSlotItems, bool bIsBlueprint, UPrimalItem* CheckCanStackWithItem, bool bRequiresExactClassMatch, int* CheckCanStackWithItemQuantityOverride, bool bIgnoreSlotItems, bool bOnlyArkTributeItems, bool bPreferEngram, bool bIsForCraftingConsumption) { return NativeCall<UPrimalItem *, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, UPrimalItem *, bool, int *, bool, bool, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "GetItemOfTemplate", ItemTemplate, bOnlyInventoryItems, bOnlyEquippedItems, IgnoreItemsWithFullQuantity, bFavorSlotItems, bIsBlueprint, CheckCanStackWithItem, bRequiresExactClassMatch, CheckCanStackWithItemQuantityOverride, bIgnoreSlotItems, bOnlyArkTributeItems, bPreferEngram, bIsForCraftingConsumption); }
	int GetCraftQueueResourceCost(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem* IgnoreFirstItem) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "GetCraftQueueResourceCost", ItemTemplate, IgnoreFirstItem); }
	int GetItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem* IgnoreItem, bool bIgnoreBlueprints, bool bCheckValidForCrafting, bool bRequireExactClassMatch) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem *, bool, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "GetItemTemplateQuantity", ItemTemplate, IgnoreItem, bIgnoreBlueprints, bCheckValidForCrafting, bRequireExactClassMatch); }
	float GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate) { return NativeCall<float, TSubclassOf<UPrimalItem>>((DWORD64)this, "UPrimalInventoryComponent", "GetTotalDurabilityOfTemplate", ItemTemplate); }
	void LocalUseItemSlot(int slotIndex, bool bForceCraft) { NativeCall<void, int, bool>((DWORD64)this, "UPrimalInventoryComponent", "LocalUseItemSlot", slotIndex, bForceCraft); }
	//float GetTotalEquippedItemStat(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>((DWORD64)this, "UPrimalInventoryComponent", "GetTotalEquippedItemStat", statType); }
	//float GetEquippedArmorRating(EPrimalEquipmentType::Type equipmentType) { return NativeCall<float, EPrimalEquipmentType::Type>((DWORD64)this, "UPrimalInventoryComponent", "GetEquippedArmorRating", equipmentType); }
	//void ConsumeArmorDurability(float ConsumptionAmount, bool bAllArmorTypes, EPrimalEquipmentType::Type SpecificArmorType) { NativeCall<void, float, bool, EPrimalEquipmentType::Type>((DWORD64)this, "UPrimalInventoryComponent", "ConsumeArmorDurability", ConsumptionAmount, bAllArmorTypes, SpecificArmorType); }
	void ServerCraftItem(FItemNetID* itemID, AShooterPlayerController* ByPC) { NativeCall<void, FItemNetID *, AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "ServerCraftItem", itemID, ByPC); }
	void AddToCraftQueue(UPrimalItem* anItem, AShooterPlayerController* ByPC, bool bIsRepair) { NativeCall<void, UPrimalItem *, AShooterPlayerController *, bool>((DWORD64)this, "UPrimalInventoryComponent", "AddToCraftQueue", anItem, ByPC, bIsRepair); }
	void ClearCraftQueue() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "ClearCraftQueue"); }
	void ServerRepairItem(FItemNetID* itemID, AShooterPlayerController* ByPC) { NativeCall<void, FItemNetID *, AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "ServerRepairItem", itemID, ByPC); }
	void ServerUseInventoryItem(FItemNetID* itemID, AShooterPlayerController* ByPC) { NativeCall<void, FItemNetID *, AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "ServerUseInventoryItem", itemID, ByPC); }
	void ServerUseItemWithItem(FItemNetID* itemID1, FItemNetID* itemID2, int AdditionalData) { NativeCall<void, FItemNetID *, FItemNetID *, int>((DWORD64)this, "UPrimalInventoryComponent", "ServerUseItemWithItem", itemID1, itemID2, AdditionalData); }
	void SwapInventoryItems(FItemNetID* itemID1, FItemNetID* itemID2) { NativeCall<void, FItemNetID *, FItemNetID *>((DWORD64)this, "UPrimalInventoryComponent", "SwapInventoryItems", itemID1, itemID2); }
	void AddItemCrafting(UPrimalItem* craftingItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "AddItemCrafting", craftingItem); }
	void RemoveItemCrafting(UPrimalItem* craftingItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "RemoveItemCrafting", craftingItem); }
	void StopAllCraftingRepairing() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "StopAllCraftingRepairing"); }
	void TickCraftQueue(float DeltaTime, AShooterGameState* theGameState) { NativeCall<void, float, AShooterGameState *>((DWORD64)this, "UPrimalInventoryComponent", "TickCraftQueue", DeltaTime, theGameState); }
	float GetCraftingSpeed() { return NativeCall<float>((DWORD64)this, "UPrimalInventoryComponent", "GetCraftingSpeed"); }
	bool IsLocal() { return NativeCall<bool>((DWORD64)this, "UPrimalInventoryComponent", "IsLocal"); }
	void Unstasised() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "Unstasised"); }
	void CheckForAutoCraftBlueprints() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "CheckForAutoCraftBlueprints"); }
	bool IsCraftingAllowed(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "IsCraftingAllowed", anItem); }
	void SetCraftingEnabled(bool bEnable) { NativeCall<void, bool>((DWORD64)this, "UPrimalInventoryComponent", "SetCraftingEnabled", bEnable); }
	float GetInventoryWeight() { return NativeCall<float>((DWORD64)this, "UPrimalInventoryComponent", "GetInventoryWeight"); }
	void ServerSplitItemStack_Implementation(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>((DWORD64)this, "UPrimalInventoryComponent", "ServerSplitItemStack_Implementation", ItemID, AmountToSplit); }
	void ServerMergeItemStack_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "ServerMergeItemStack_Implementation", ItemID); }
	void ServerForceMergeItemStack_Implementation(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "ServerForceMergeItemStack_Implementation", Item1ID, Item2ID); }
	void RemoteDeleteCustomFolder(FString* CFolderName, int InventoryCompType) { NativeCall<void, FString *, int>((DWORD64)this, "UPrimalInventoryComponent", "RemoteDeleteCustomFolder", CFolderName, InventoryCompType); }
	void RemoteAddItemToCustomFolder(FString* CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, FString *, int, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "RemoteAddItemToCustomFolder", CFolderName, InventoryCompType, ItemId); }
	void RemoteDeleteItemFromCustomFolder(AShooterPlayerController* PC, FString* CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, AShooterPlayerController *, FString *, int, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "RemoteDeleteItemFromCustomFolder", PC, CFolderName, InventoryCompType, ItemId); }
	UPrimalItem* FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem> ItemClass, bool bFindLeastQuantity, UPrimalItem* StacksWithAndIgnoreItem) { return NativeCall<UPrimalItem *, TSubclassOf<UPrimalItem>, bool, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "FindInventoryStackableItemCompareQuantity", ItemClass, bFindLeastQuantity, StacksWithAndIgnoreItem); }
	UPrimalCharacterStatusComponent* GetCharacterStatusComponent() { return NativeCall<UPrimalCharacterStatusComponent *>((DWORD64)this, "UPrimalInventoryComponent", "GetCharacterStatusComponent"); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController *, int, int>((DWORD64)this, "UPrimalInventoryComponent", "ClientMultiUse", ForPC, UseIndex, hitBodyIndex); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController *, int, int>((DWORD64)this, "UPrimalInventoryComponent", "TryMultiUse", ForPC, UseIndex, hitBodyIndex); }
	void ActivePlayerInventoryTick(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "UPrimalInventoryComponent", "ActivePlayerInventoryTick", DeltaTime); }
	void InventoryRefresh() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "InventoryRefresh"); }
	void RefreshItemSpoilingTimes() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "RefreshItemSpoilingTimes"); }
	void NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int amount) { NativeCall<void, TSubclassOf<UPrimalItem>, int>((DWORD64)this, "UPrimalInventoryComponent", "NotifyCraftingItemConsumption", ItemTemplate, amount); }
	float GetSpoilingTimeMultiplier(UPrimalItem* anItem) { return NativeCall<float, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "GetSpoilingTimeMultiplier", anItem); }
	void UsedItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "UsedItem", anItem); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>((DWORD64)this, "UPrimalInventoryComponent", "RegisterComponentTickFunctions", bRegister, bSaveAndRestoreComponentTickState); }
	void UpdatedCraftQueue() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "UpdatedCraftQueue"); }
	void LoadedFromSaveGame() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "LoadedFromSaveGame"); }
	//void ClientItemMessageNotification_Implementation(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>((DWORD64)this, "UPrimalInventoryComponent", "ClientItemMessageNotification_Implementation", ItemID, ItemMessageType); }
	bool IsOwnedByPlayer() { return NativeCall<bool>((DWORD64)this, "UPrimalInventoryComponent", "IsOwnedByPlayer"); }
	bool DropInventoryDeposit() { return NativeCall<bool>((DWORD64)this, "UPrimalInventoryComponent", "DropInventoryDeposit"); }
	//bool GetGroundLocation(FVector * theGroundLoc, FVector * OffsetUp, FVector * OffsetDown, APrimalStructure ** LandedOnStructure, AActor * IgnoreActor, bool bCheckAnyStationary, UPrimitiveComponent ** LandedOnComponent) { return NativeCall<bool, FVector *, FVector *, FVector *, APrimalStructure **, AActor *, bool, UPrimitiveComponent **>((DWORD64)this, "UPrimalInventoryComponent", "GetGroundLocation", theGroundLoc, OffsetUp, OffsetDown, LandedOnStructure, IgnoreActor, bCheckAnyStationary, LandedOnComponent); }
	AActor* CraftedBlueprintSpawnActor(TSubclassOf<UPrimalItem> ForItemClass, TSubclassOf<AActor> ActorClassToSpawn) { return NativeCall<AActor *, TSubclassOf<UPrimalItem>, TSubclassOf<AActor>>((DWORD64)this, "UPrimalInventoryComponent", "CraftedBlueprintSpawnActor", ForItemClass, ActorClassToSpawn); }
	bool GenerateCrateItems(float MinQualityMultiplier, float MaxQualityMultiplier, int NumPasses, float QuantityMultiplier, float SetPowerWeight, float MaxItemDifficultyClamp) { return NativeCall<bool, float, float, int, float, float, float>((DWORD64)this, "UPrimalInventoryComponent", "GenerateCrateItems", MinQualityMultiplier, MaxQualityMultiplier, NumPasses, QuantityMultiplier, SetPowerWeight, MaxItemDifficultyClamp); }
	UPrimalItem* FindArkTributeItem(FItemNetID* ItemID) { return NativeCall<UPrimalItem *, FItemNetID *>((DWORD64)this, "UPrimalInventoryComponent", "FindArkTributeItem", ItemID); }
	void SetNextItemSpoilingID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "SetNextItemSpoilingID_Implementation", NextItemID); }
	void SetNextItemConsumptionID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "SetNextItemConsumptionID_Implementation", NextItemID); }
	void CheckReplenishSlotIndex(int slotIndex, TSubclassOf<UPrimalItem> ClassCheckOverride) { NativeCall<void, int, TSubclassOf<UPrimalItem>>((DWORD64)this, "UPrimalInventoryComponent", "CheckReplenishSlotIndex", slotIndex, ClassCheckOverride); }
	void OnArkTributeItemsRemoved(bool Success, TArray<FItemNetInfo>* RemovedItems, TArray<FItemNetInfo>* NotFoundItems, int FailureResponseCode, FString* FailureResponseMessage) { NativeCall<void, bool, TArray<FItemNetInfo> *, TArray<FItemNetInfo> *, int, FString *>((DWORD64)this, "UPrimalInventoryComponent", "OnArkTributeItemsRemoved", Success, RemovedItems, NotFoundItems, FailureResponseCode, FailureResponseMessage); }
	void ClientOnArkTributeItemsAdded_Implementation() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "ClientOnArkTributeItemsAdded_Implementation"); }
	void OnArkTributeItemsAdded(bool Success, TArray<FItemNetInfo>* AddedItems) { NativeCall<void, bool, TArray<FItemNetInfo> *>((DWORD64)this, "UPrimalInventoryComponent", "OnArkTributeItemsAdded", Success, AddedItems); }
	bool RemoveArkTributeItem(FItemNetID* itemID, unsigned int Quantity) { return NativeCall<bool, FItemNetID *, unsigned int>((DWORD64)this, "UPrimalInventoryComponent", "RemoveArkTributeItem", itemID, Quantity); }
	bool ServerAddToArkTributeInventory() { return NativeCall<bool>((DWORD64)this, "UPrimalInventoryComponent", "ServerAddToArkTributeInventory"); }
	UPrimalItem* AddAfterRemovingFromArkTributeInventory(UPrimalItem* Item, FItemNetInfo* MyItem) { return NativeCall<UPrimalItem *, UPrimalItem *, FItemNetInfo *>((DWORD64)this, "UPrimalInventoryComponent", "AddAfterRemovingFromArkTributeInventory", Item, MyItem); }
	bool ServerAddFromArkTributeInventory(FItemNetID* itemID, int Quantity) { return NativeCall<bool, FItemNetID *, int>((DWORD64)this, "UPrimalInventoryComponent", "ServerAddFromArkTributeInventory", itemID, Quantity); }
	void RequestAddArkTributeItem(FItemNetInfo* theItemInfo, bool bFromLoad) { NativeCall<void, FItemNetInfo *, bool>((DWORD64)this, "UPrimalInventoryComponent", "RequestAddArkTributeItem", theItemInfo, bFromLoad); }
	void AddArkTributeItem(FItemNetInfo* theItemInfo, bool bFromLoad) { NativeCall<void, FItemNetInfo *, bool>((DWORD64)this, "UPrimalInventoryComponent", "AddArkTributeItem", theItemInfo, bFromLoad); }
	void LoadArkTriuteItems(TArray<FItemNetInfo>* ItemInfos) { NativeCall<void, TArray<FItemNetInfo> *>((DWORD64)this, "UPrimalInventoryComponent", "LoadArkTriuteItems", ItemInfos); }
	void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem *, int>((DWORD64)this, "UPrimalInventoryComponent", "NotifyItemQuantityUpdated", anItem, amount); }
	bool IsServerCustomFolder(int InventoryCompType) { return NativeCall<bool, int>((DWORD64)this, "UPrimalInventoryComponent", "IsServerCustomFolder", InventoryCompType); }
	void AddCustomFolder() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "AddCustomFolder"); }
	void RemoveCustomFolder() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "RemoveCustomFolder"); }
	TArray<FString>* GetCustomFolders(TArray<FString>* result, int InventoryCompType) { return NativeCall<TArray<FString> *, TArray<FString> *, int>((DWORD64)this, "UPrimalInventoryComponent", "GetCustomFolders", result, InventoryCompType); }
	void DeleteItemFromCustomFolder() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "DeleteItemFromCustomFolder"); }
	bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>((DWORD64)this, "UPrimalInventoryComponent", "OverrideBlueprintCraftingRequirement", ItemTemplate, ItemQuantity); }
	bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>((DWORD64)this, "UPrimalInventoryComponent", "AllowCraftingResourceConsumption", ItemTemplate, ItemQuantity); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return NativeCall<float>((DWORD64)this, "UPrimalInventoryComponent", "GetDamageTorpidityIncreaseMultiplierScale"); }
	float GetItemWeightMultiplier(UPrimalItem* anItem) { return NativeCall<float, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "GetItemWeightMultiplier", anItem); }
	void UpdateTribeGroupInventoryRank_Implementation(char NewRank) { NativeCall<void, char>((DWORD64)this, "UPrimalInventoryComponent", "UpdateTribeGroupInventoryRank_Implementation", NewRank); }
	float OverrideItemMinimumUseInterval(UPrimalItem* theItem) { return NativeCall<float, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "OverrideItemMinimumUseInterval", theItem); }
	UPrimalItem* AddItemObject(UPrimalItem* anItem) { return NativeCall<UPrimalItem *, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "AddItemObject", anItem); }
	UPrimalItem* BPFindItemWithID(int ItemID1, int ItemID2) { return NativeCall<UPrimalItem *, int, int>((DWORD64)this, "UPrimalInventoryComponent", "BPFindItemWithID", ItemID1, ItemID2); }
	bool BPRemoteInventoryAllowAddItems(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "UPrimalInventoryComponent", "BPRemoteInventoryAllowAddItems", PC); }
	bool IsValidCraftingResource(UPrimalItem* theItem) { return NativeCall<bool, UPrimalItem *>((DWORD64)this, "UPrimalInventoryComponent", "IsValidCraftingResource", theItem); }
	void OnComponentCreated() { NativeCall<void>((DWORD64)this, "UPrimalInventoryComponent", "OnComponentCreated"); }
	bool BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController* PC, UPrimalItem* anItem, int anItemQuantityOverride) { return NativeCall<bool, AShooterPlayerController *, UPrimalItem *, int>((DWORD64)this, "UPrimalInventoryComponent", "BPCustomRemoteInventoryAllowAddItems", PC, anItem, anItemQuantityOverride); }
	//void ClientItemMessageNotification(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>((DWORD64)this, "UPrimalInventoryComponent", "ClientItemMessageNotification", ItemID, ItemMessageType); }
	void ServerAddItemToSlot(FItemNetID ItemID, int SlotIndex) { NativeCall<void, FItemNetID, int>((DWORD64)this, "UPrimalInventoryComponent", "ServerAddItemToSlot", ItemID, SlotIndex); }
	void ServerForceMergeItemStack(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "ServerForceMergeItemStack", Item1ID, Item2ID); }
	void ServerMergeItemStack(FItemNetID ItemID) { NativeCall<void, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "ServerMergeItemStack", ItemID); }
	void ServerRemoveItemFromSlot(FItemNetID ItemID) { NativeCall<void, FItemNetID>((DWORD64)this, "UPrimalInventoryComponent", "ServerRemoveItemFromSlot", ItemID); }
	void ServerSplitItemStack(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>((DWORD64)this, "UPrimalInventoryComponent", "ServerSplitItemStack", ItemID, AmountToSplit); }
	void UpdateTribeGroupInventoryRank(char NewRank) { NativeCall<void, char>((DWORD64)this, "UPrimalInventoryComponent", "UpdateTribeGroupInventoryRank", NewRank); }
};

struct UPrimalItem : UObject
{
	float GetDinoAutoHealingThresholdPercentField() const { return GetNativeField<float>(this, "UPrimalItem", "DinoAutoHealingThresholdPercent"); }
	void SetDinoAutoHealingThresholdPercentField(float newValue) { SetNativeField(this, "UPrimalItem", "DinoAutoHealingThresholdPercent", newValue); }
	float GetDinoAutoHealingUseTimeIntervalField() const { return GetNativeField<float>(this, "UPrimalItem", "DinoAutoHealingUseTimeInterval"); }
	void SetDinoAutoHealingUseTimeIntervalField(float newValue) { SetNativeField(this, "UPrimalItem", "DinoAutoHealingUseTimeInterval", newValue); }
	int GetArkTributeVersionField() const { return GetNativeField<int>(this, "UPrimalItem", "ArkTributeVersion"); }
	void SetArkTributeVersionField(int newValue) { SetNativeField(this, "UPrimalItem", "ArkTributeVersion", newValue); }
	TArray<TSubclassOf<AActor>> GetEquipRequiresExplicitOwnerClassesField() const { return GetNativeField<TArray<TSubclassOf<AActor>>>(this, "UPrimalItem", "EquipRequiresExplicitOwnerClasses"); }
	void SetEquipRequiresExplicitOwnerClassesField(TArray<TSubclassOf<AActor>> newValue) { SetNativeField(this, "UPrimalItem", "EquipRequiresExplicitOwnerClasses", newValue); }
	TArray<FName> GetEquipRequiresExplicitOwnerTagsField() const { return GetNativeField<TArray<FName>>(this, "UPrimalItem", "EquipRequiresExplicitOwnerTags"); }
	void SetEquipRequiresExplicitOwnerTagsField(TArray<FName> newValue) { SetNativeField(this, "UPrimalItem", "EquipRequiresExplicitOwnerTags", newValue); }
	unsigned int GetExpirationTimeUTCField() const { return GetNativeField<unsigned int>(this, "UPrimalItem", "ExpirationTimeUTC"); }
	void SetExpirationTimeUTCField(unsigned int newValue) { SetNativeField(this, "UPrimalItem", "ExpirationTimeUTC", newValue); }
	int GetBlueprintAllowMaxCraftingsField() const { return GetNativeField<int>(this, "UPrimalItem", "BlueprintAllowMaxCraftings"); }
	void SetBlueprintAllowMaxCraftingsField(int newValue) { SetNativeField(this, "UPrimalItem", "BlueprintAllowMaxCraftings", newValue); }
	FString GetAbstractItemCraftingDescriptionField() const { return GetNativeField<FString>(this, "UPrimalItem", "AbstractItemCraftingDescription"); }
	void SetAbstractItemCraftingDescriptionField(FString newValue) { SetNativeField(this, "UPrimalItem", "AbstractItemCraftingDescription", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetItemSkinUseOnItemClassesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalItem", "ItemSkinUseOnItemClasses"); }
	void SetItemSkinUseOnItemClassesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalItem", "ItemSkinUseOnItemClasses", newValue); }
	USoundBase* GetItemBrokenSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "ItemBrokenSound"); }
	void SetItemBrokenSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "ItemBrokenSound", newValue); }
	USoundCue* GetUseItemSoundField() const { return GetNativeField<USoundCue *>(this, "UPrimalItem", "UseItemSound"); }
	void SetUseItemSoundField(USoundCue* newValue) { SetNativeField(this, "UPrimalItem", "UseItemSound", newValue); }
	USoundBase* GetEquipSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "EquipSound"); }
	void SetEquipSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "EquipSound", newValue); }
	USoundBase* GetUnEquipSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "UnEquipSound"); }
	void SetUnEquipSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "UnEquipSound", newValue); }
	USoundBase* GetUsedOnOtherItemSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "UsedOnOtherItemSound"); }
	void SetUsedOnOtherItemSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "UsedOnOtherItemSound", newValue); }
	USoundBase* GetRemovedFromOtherItemSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "RemovedFromOtherItemSound"); }
	void SetRemovedFromOtherItemSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "RemovedFromOtherItemSound", newValue); }
	float GetRandomChanceToBeBlueprintField() const { return GetNativeField<float>(this, "UPrimalItem", "RandomChanceToBeBlueprint"); }
	void SetRandomChanceToBeBlueprintField(float newValue) { SetNativeField(this, "UPrimalItem", "RandomChanceToBeBlueprint", newValue); }
	//TEnumAsByte<enum EPrimalItemType::Type> GetMyItemTypeField() const { return GetNativeField<TEnumAsByte<enum EPrimalItemType::Type>>(this, "UPrimalItem", "MyItemType"); }
	//TEnumAsByte<enum EPrimalConsumableType::Type> GetMyConsumableTypeField() const { return GetNativeField<TEnumAsByte<enum EPrimalConsumableType::Type>>(this, "UPrimalItem", "MyConsumableType"); }
	//TEnumAsByte<enum EPrimalEquipmentType::Type> GetMyEquipmentTypeField() const { return GetNativeField<TEnumAsByte<enum EPrimalEquipmentType::Type>>(this, "UPrimalItem", "MyEquipmentType"); }
	int GetExtraItemCategoryFlagsField() const { return GetNativeField<int>(this, "UPrimalItem", "ExtraItemCategoryFlags"); }
	void SetExtraItemCategoryFlagsField(int newValue) { SetNativeField(this, "UPrimalItem", "ExtraItemCategoryFlags", newValue); }
	FVector GetBlockingShieldFPVTranslationField() const { return GetNativeField<FVector>(this, "UPrimalItem", "BlockingShieldFPVTranslation"); }
	void SetBlockingShieldFPVTranslationField(FVector newValue) { SetNativeField(this, "UPrimalItem", "BlockingShieldFPVTranslation", newValue); }
	FRotator GetBlockingShieldFPVRotationField() const { return GetNativeField<FRotator>(this, "UPrimalItem", "BlockingShieldFPVRotation"); }
	void SetBlockingShieldFPVRotationField(FRotator newValue) { SetNativeField(this, "UPrimalItem", "BlockingShieldFPVRotation", newValue); }
	float GetShieldBlockDamagePercentageField() const { return GetNativeField<float>(this, "UPrimalItem", "ShieldBlockDamagePercentage"); }
	void SetShieldBlockDamagePercentageField(float newValue) { SetNativeField(this, "UPrimalItem", "ShieldBlockDamagePercentage", newValue); }
	float GetShieldDamageToDurabilityRatioField() const { return GetNativeField<float>(this, "UPrimalItem", "ShieldDamageToDurabilityRatio"); }
	void SetShieldDamageToDurabilityRatioField(float newValue) { SetNativeField(this, "UPrimalItem", "ShieldDamageToDurabilityRatio", newValue); }
	int GetCraftingMinLevelRequirementField() const { return GetNativeField<int>(this, "UPrimalItem", "CraftingMinLevelRequirement"); }
	void SetCraftingMinLevelRequirementField(int newValue) { SetNativeField(this, "UPrimalItem", "CraftingMinLevelRequirement", newValue); }
	float GetCraftingCooldownIntervalField() const { return GetNativeField<float>(this, "UPrimalItem", "CraftingCooldownInterval"); }
	void SetCraftingCooldownIntervalField(float newValue) { SetNativeField(this, "UPrimalItem", "CraftingCooldownInterval", newValue); }
	TSubclassOf<AActor> GetCraftingActorToSpawnField() const { return GetNativeField<TSubclassOf<AActor>>(this, "UPrimalItem", "CraftingActorToSpawn"); }
	void SetCraftingActorToSpawnField(TSubclassOf<AActor> newValue) { SetNativeField(this, "UPrimalItem", "CraftingActorToSpawn", newValue); }
	UTexture2D* GetBlueprintBackgroundOverrideTextureField() const { return GetNativeField<UTexture2D *>(this, "UPrimalItem", "BlueprintBackgroundOverrideTexture"); }
	void SetBlueprintBackgroundOverrideTextureField(UTexture2D* newValue) { SetNativeField(this, "UPrimalItem", "BlueprintBackgroundOverrideTexture", newValue); }
	FString GetCraftItemButtonStringOverrideField() const { return GetNativeField<FString>(this, "UPrimalItem", "CraftItemButtonStringOverride"); }
	void SetCraftItemButtonStringOverrideField(FString newValue) { SetNativeField(this, "UPrimalItem", "CraftItemButtonStringOverride", newValue); }
	TSubclassOf<AActor> GetUseSpawnActorClassField() const { return GetNativeField<TSubclassOf<AActor>>(this, "UPrimalItem", "UseSpawnActorClass"); }
	void SetUseSpawnActorClassField(TSubclassOf<AActor> newValue) { SetNativeField(this, "UPrimalItem", "UseSpawnActorClass", newValue); }
	FVector GetUseSpawnActorLocOffsetField() const { return GetNativeField<FVector>(this, "UPrimalItem", "UseSpawnActorLocOffset"); }
	void SetUseSpawnActorLocOffsetField(FVector newValue) { SetNativeField(this, "UPrimalItem", "UseSpawnActorLocOffset", newValue); }
	int GetSlotIndexField() const { return GetNativeField<int>(this, "UPrimalItem", "SlotIndex"); }
	void SetSlotIndexField(int newValue) { SetNativeField(this, "UPrimalItem", "SlotIndex", newValue); }
	FItemNetID GetItemIDField() const { return GetNativeField<FItemNetID>(this, "UPrimalItem", "ItemID"); }
	void SetItemIDField(FItemNetID newValue) { SetNativeField(this, "UPrimalItem", "ItemID", newValue); }
	int GetItemCustomDataField() const { return GetNativeField<int>(this, "UPrimalItem", "ItemCustomData"); }
	void SetItemCustomDataField(int newValue) { SetNativeField(this, "UPrimalItem", "ItemCustomData", newValue); }
	TSubclassOf<UPrimalItem> GetItemCustomClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "ItemCustomClass"); }
	void SetItemCustomClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "ItemCustomClass", newValue); }
	int GetItemSkinTemplateIndexField() const { return GetNativeField<int>(this, "UPrimalItem", "ItemSkinTemplateIndex"); }
	void SetItemSkinTemplateIndexField(int newValue) { SetNativeField(this, "UPrimalItem", "ItemSkinTemplateIndex", newValue); }
	TSubclassOf<UPrimalItem> GetItemSkinTemplateField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "ItemSkinTemplate"); }
	void SetItemSkinTemplateField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "ItemSkinTemplate", newValue); }
	float GetItemRatingField() const { return GetNativeField<float>(this, "UPrimalItem", "ItemRating"); }
	void SetItemRatingField(float newValue) { SetNativeField(this, "UPrimalItem", "ItemRating", newValue); }
	unsigned __int16 GetCraftQueueField() const { return GetNativeField<unsigned __int16>(this, "UPrimalItem", "CraftQueue"); }
	void SetCraftQueueField(unsigned __int16 newValue) { SetNativeField(this, "UPrimalItem", "CraftQueue", newValue); }
	float GetCraftingSkillField() const { return GetNativeField<float>(this, "UPrimalItem", "CraftingSkill"); }
	void SetCraftingSkillField(float newValue) { SetNativeField(this, "UPrimalItem", "CraftingSkill", newValue); }
	FString GetCustomItemNameField() const { return GetNativeField<FString>(this, "UPrimalItem", "CustomItemName"); }
	void SetCustomItemNameField(FString newValue) { SetNativeField(this, "UPrimalItem", "CustomItemName", newValue); }
	FString GetCustomItemDescriptionField() const { return GetNativeField<FString>(this, "UPrimalItem", "CustomItemDescription"); }
	void SetCustomItemDescriptionField(FString newValue) { SetNativeField(this, "UPrimalItem", "CustomItemDescription", newValue); }
	TArray<FColor> GetCustomColorsField() const { return GetNativeField<TArray<FColor>>(this, "UPrimalItem", "CustomColors"); }
	void SetCustomColorsField(TArray<FColor> newValue) { SetNativeField(this, "UPrimalItem", "CustomColors", newValue); }
	long double GetNextCraftCompletionTimeField() const { return GetNativeField<long double>(this, "UPrimalItem", "NextCraftCompletionTime"); }
	void SetNextCraftCompletionTimeField(long double newValue) { SetNativeField(this, "UPrimalItem", "NextCraftCompletionTime", newValue); }
	TWeakObjectPtr<UPrimalInventoryComponent> GetOwnerInventoryField() const { return GetNativeField<TWeakObjectPtr<UPrimalInventoryComponent>>(this, "UPrimalItem", "OwnerInventory"); }
	void SetOwnerInventoryField(TWeakObjectPtr<UPrimalInventoryComponent> newValue) { SetNativeField(this, "UPrimalItem", "OwnerInventory", newValue); }
	char GetItemQualityIndexField() const { return GetNativeField<char>(this, "UPrimalItem", "ItemQualityIndex"); }
	void SetItemQualityIndexField(char newValue) { SetNativeField(this, "UPrimalItem", "ItemQualityIndex", newValue); }
	TSubclassOf<UPrimalItem> GetSupportDragOntoItemClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "SupportDragOntoItemClass"); }
	void SetSupportDragOntoItemClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "SupportDragOntoItemClass", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetSupportDragOntoItemClassesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalItem", "SupportDragOntoItemClasses"); }
	void SetSupportDragOntoItemClassesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalItem", "SupportDragOntoItemClasses", newValue); }
	TArray<TSubclassOf<AShooterWeapon>> GetSkinWeaponTemplatesField() const { return GetNativeField<TArray<TSubclassOf<AShooterWeapon>>>(this, "UPrimalItem", "SkinWeaponTemplates"); }
	void SetSkinWeaponTemplatesField(TArray<TSubclassOf<AShooterWeapon>> newValue) { SetNativeField(this, "UPrimalItem", "SkinWeaponTemplates", newValue); }
	TSubclassOf<AShooterWeapon> GetAmmoSupportDragOntoWeaponItemWeaponTemplateField() const { return GetNativeField<TSubclassOf<AShooterWeapon>>(this, "UPrimalItem", "AmmoSupportDragOntoWeaponItemWeaponTemplate"); }
	void SetAmmoSupportDragOntoWeaponItemWeaponTemplateField(TSubclassOf<AShooterWeapon> newValue) { SetNativeField(this, "UPrimalItem", "AmmoSupportDragOntoWeaponItemWeaponTemplate", newValue); }
	TArray<TSubclassOf<AShooterWeapon>> GetAmmoSupportDragOntoWeaponItemWeaponTemplatesField() const { return GetNativeField<TArray<TSubclassOf<AShooterWeapon>>>(this, "UPrimalItem", "AmmoSupportDragOntoWeaponItemWeaponTemplates"); }
	void SetAmmoSupportDragOntoWeaponItemWeaponTemplatesField(TArray<TSubclassOf<AShooterWeapon>> newValue) { SetNativeField(this, "UPrimalItem", "AmmoSupportDragOntoWeaponItemWeaponTemplates", newValue); }
	float GetIngredient_WeightIncreasePerQuantityField() const { return GetNativeField<float>(this, "UPrimalItem", "Ingredient_WeightIncreasePerQuantity"); }
	void SetIngredient_WeightIncreasePerQuantityField(float newValue) { SetNativeField(this, "UPrimalItem", "Ingredient_WeightIncreasePerQuantity", newValue); }
	float GetIngredient_FoodIncreasePerQuantityField() const { return GetNativeField<float>(this, "UPrimalItem", "Ingredient_FoodIncreasePerQuantity"); }
	void SetIngredient_FoodIncreasePerQuantityField(float newValue) { SetNativeField(this, "UPrimalItem", "Ingredient_FoodIncreasePerQuantity", newValue); }
	float GetIngredient_HealthIncreasePerQuantityField() const { return GetNativeField<float>(this, "UPrimalItem", "Ingredient_HealthIncreasePerQuantity"); }
	void SetIngredient_HealthIncreasePerQuantityField(float newValue) { SetNativeField(this, "UPrimalItem", "Ingredient_HealthIncreasePerQuantity", newValue); }
	float GetIngredient_WaterIncreasePerQuantityField() const { return GetNativeField<float>(this, "UPrimalItem", "Ingredient_WaterIncreasePerQuantity"); }
	void SetIngredient_WaterIncreasePerQuantityField(float newValue) { SetNativeField(this, "UPrimalItem", "Ingredient_WaterIncreasePerQuantity", newValue); }
	float GetIngredient_StaminaIncreasePerQuantityField() const { return GetNativeField<float>(this, "UPrimalItem", "Ingredient_StaminaIncreasePerQuantity"); }
	void SetIngredient_StaminaIncreasePerQuantityField(float newValue) { SetNativeField(this, "UPrimalItem", "Ingredient_StaminaIncreasePerQuantity", newValue); }
	FString GetDescriptiveNameBaseField() const { return GetNativeField<FString>(this, "UPrimalItem", "DescriptiveNameBase"); }
	void SetDescriptiveNameBaseField(FString newValue) { SetNativeField(this, "UPrimalItem", "DescriptiveNameBase", newValue); }
	FString GetItemDescriptionField() const { return GetNativeField<FString>(this, "UPrimalItem", "ItemDescription"); }
	void SetItemDescriptionField(FString newValue) { SetNativeField(this, "UPrimalItem", "ItemDescription", newValue); }
	FString GetDurabilityStringShortField() const { return GetNativeField<FString>(this, "UPrimalItem", "DurabilityStringShort"); }
	void SetDurabilityStringShortField(FString newValue) { SetNativeField(this, "UPrimalItem", "DurabilityStringShort", newValue); }
	FString GetDurabilityStringField() const { return GetNativeField<FString>(this, "UPrimalItem", "DurabilityString"); }
	void SetDurabilityStringField(FString newValue) { SetNativeField(this, "UPrimalItem", "DurabilityString", newValue); }
	float GetDroppedItemLifeSpanOverrideField() const { return GetNativeField<float>(this, "UPrimalItem", "DroppedItemLifeSpanOverride"); }
	void SetDroppedItemLifeSpanOverrideField(float newValue) { SetNativeField(this, "UPrimalItem", "DroppedItemLifeSpanOverride", newValue); }
	FVector GetDroppedMeshOverrideScale3DField() const { return GetNativeField<FVector>(this, "UPrimalItem", "DroppedMeshOverrideScale3D"); }
	void SetDroppedMeshOverrideScale3DField(FVector newValue) { SetNativeField(this, "UPrimalItem", "DroppedMeshOverrideScale3D", newValue); }
	TSubclassOf<UPrimalItem> GetSpoilingItemField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "SpoilingItem"); }
	void SetSpoilingItemField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "SpoilingItem", newValue); }
	TArray<TSubclassOf<AActor>> GetUseRequiresOwnerActorClassesField() const { return GetNativeField<TArray<TSubclassOf<AActor>>>(this, "UPrimalItem", "UseRequiresOwnerActorClasses"); }
	void SetUseRequiresOwnerActorClassesField(TArray<TSubclassOf<AActor>> newValue) { SetNativeField(this, "UPrimalItem", "UseRequiresOwnerActorClasses", newValue); }
	TSubclassOf<UPrimalItem> GetPreservingItemClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "PreservingItemClass"); }
	void SetPreservingItemClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "PreservingItemClass", newValue); }
	float GetPreservingItemSpoilingTimeMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "PreservingItemSpoilingTimeMultiplier"); }
	void SetPreservingItemSpoilingTimeMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "PreservingItemSpoilingTimeMultiplier", newValue); }
	float GetSpoilingTimeField() const { return GetNativeField<float>(this, "UPrimalItem", "SpoilingTime"); }
	void SetSpoilingTimeField(float newValue) { SetNativeField(this, "UPrimalItem", "SpoilingTime", newValue); }
	int GetCraftingConsumesDurabilityField() const { return GetNativeField<int>(this, "UPrimalItem", "CraftingConsumesDurability"); }
	void SetCraftingConsumesDurabilityField(int newValue) { SetNativeField(this, "UPrimalItem", "CraftingConsumesDurability", newValue); }
	float GetRepairResourceRequirementMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "RepairResourceRequirementMultiplier"); }
	void SetRepairResourceRequirementMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "RepairResourceRequirementMultiplier", newValue); }
	float GetBaseItemWeightField() const { return GetNativeField<float>(this, "UPrimalItem", "BaseItemWeight"); }
	void SetBaseItemWeightField(float newValue) { SetNativeField(this, "UPrimalItem", "BaseItemWeight", newValue); }
	float GetDurabilityIncreaseMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "DurabilityIncreaseMultiplier"); }
	void SetDurabilityIncreaseMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "DurabilityIncreaseMultiplier", newValue); }
	float GetNewItemDurabilityOverrideField() const { return GetNativeField<float>(this, "UPrimalItem", "NewItemDurabilityOverride"); }
	void SetNewItemDurabilityOverrideField(float newValue) { SetNativeField(this, "UPrimalItem", "NewItemDurabilityOverride", newValue); }
	float GetDurabilityDecreaseMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "DurabilityDecreaseMultiplier"); }
	void SetDurabilityDecreaseMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "DurabilityDecreaseMultiplier", newValue); }
	float GetUseDecreaseDurabilityField() const { return GetNativeField<float>(this, "UPrimalItem", "UseDecreaseDurability"); }
	void SetUseDecreaseDurabilityField(float newValue) { SetNativeField(this, "UPrimalItem", "UseDecreaseDurability", newValue); }
	float GetAutoDurabilityDecreaseIntervalField() const { return GetNativeField<float>(this, "UPrimalItem", "AutoDurabilityDecreaseInterval"); }
	void SetAutoDurabilityDecreaseIntervalField(float newValue) { SetNativeField(this, "UPrimalItem", "AutoDurabilityDecreaseInterval", newValue); }
	float GetAutoDecreaseMinDurabilityField() const { return GetNativeField<float>(this, "UPrimalItem", "AutoDecreaseMinDurability"); }
	void SetAutoDecreaseMinDurabilityField(float newValue) { SetNativeField(this, "UPrimalItem", "AutoDecreaseMinDurability", newValue); }
	float GetAutoDecreaseDurabilityAmountPerIntervalField() const { return GetNativeField<float>(this, "UPrimalItem", "AutoDecreaseDurabilityAmountPerInterval"); }
	void SetAutoDecreaseDurabilityAmountPerIntervalField(float newValue) { SetNativeField(this, "UPrimalItem", "AutoDecreaseDurabilityAmountPerInterval", newValue); }
	float GetUseDecreaseDurabilityMinField() const { return GetNativeField<float>(this, "UPrimalItem", "UseDecreaseDurabilityMin"); }
	void SetUseDecreaseDurabilityMinField(float newValue) { SetNativeField(this, "UPrimalItem", "UseDecreaseDurabilityMin", newValue); }
	float GetUseMinDurabilityRequirementField() const { return GetNativeField<float>(this, "UPrimalItem", "UseMinDurabilityRequirement"); }
	void SetUseMinDurabilityRequirementField(float newValue) { SetNativeField(this, "UPrimalItem", "UseMinDurabilityRequirement", newValue); }
	float GetResourceRarityField() const { return GetNativeField<float>(this, "UPrimalItem", "ResourceRarity"); }
	void SetResourceRarityField(float newValue) { SetNativeField(this, "UPrimalItem", "ResourceRarity", newValue); }
	float GetBlueprintTimeToCraftField() const { return GetNativeField<float>(this, "UPrimalItem", "BlueprintTimeToCraft"); }
	void SetBlueprintTimeToCraftField(float newValue) { SetNativeField(this, "UPrimalItem", "BlueprintTimeToCraft", newValue); }
	float GetMinBlueprintTimeToCraftField() const { return GetNativeField<float>(this, "UPrimalItem", "MinBlueprintTimeToCraft"); }
	void SetMinBlueprintTimeToCraftField(float newValue) { SetNativeField(this, "UPrimalItem", "MinBlueprintTimeToCraft", newValue); }
	float GetBlueprintWeightField() const { return GetNativeField<float>(this, "UPrimalItem", "BlueprintWeight"); }
	void SetBlueprintWeightField(float newValue) { SetNativeField(this, "UPrimalItem", "BlueprintWeight", newValue); }
	float GetMinimumUseIntervalField() const { return GetNativeField<float>(this, "UPrimalItem", "MinimumUseInterval"); }
	void SetMinimumUseIntervalField(float newValue) { SetNativeField(this, "UPrimalItem", "MinimumUseInterval", newValue); }
	float GetTimeForFullRepairField() const { return GetNativeField<float>(this, "UPrimalItem", "TimeForFullRepair"); }
	void SetTimeForFullRepairField(float newValue) { SetNativeField(this, "UPrimalItem", "TimeForFullRepair", newValue); }
	float GetBaseCraftingXPField() const { return GetNativeField<float>(this, "UPrimalItem", "BaseCraftingXP"); }
	void SetBaseCraftingXPField(float newValue) { SetNativeField(this, "UPrimalItem", "BaseCraftingXP", newValue); }
	float GetBaseRepairingXPField() const { return GetNativeField<float>(this, "UPrimalItem", "BaseRepairingXP"); }
	void SetBaseRepairingXPField(float newValue) { SetNativeField(this, "UPrimalItem", "BaseRepairingXP", newValue); }
	//TArray<FCraftingResourceRequirement> GetBaseCraftingResourceRequirementsField() const { return GetNativeField<TArray<FCraftingResourceRequirement>>(this, "UPrimalItem", "BaseCraftingResourceRequirements"); }
	//void SetBaseCraftingResourceRequirementsField(TArray<FCraftingResourceRequirement> newValue) { SetNativeField(this, "UPrimalItem", "BaseCraftingResourceRequirements", newValue); }
	//TArray<FCraftingResourceRequirement> GetOverrideRepairingRequirementsField() const { return GetNativeField<TArray<FCraftingResourceRequirement>>(this, "UPrimalItem", "OverrideRepairingRequirements"); }
	//void SetOverrideRepairingRequirementsField(TArray<FCraftingResourceRequirement> newValue) { SetNativeField(this, "UPrimalItem", "OverrideRepairingRequirements", newValue); }
	//FItemStatInfo[8] GetItemStatInfosField() const { return GetNativeField<FItemStatInfo[8]>(this, "UPrimalItem", "ItemStatInfos"); }
	//void SetItemStatInfosField(FItemStatInfo[8] newValue) { SetNativeField(this, "UPrimalItem", "ItemStatInfos", newValue); }
	unsigned __int16* GetItemStatValuesField() const { return GetNativeField<unsigned __int16*>(this, "UPrimalItem", "ItemStatValues"); }
	unsigned int GetWeaponClipAmmoField() const { return GetNativeField<unsigned int>(this, "UPrimalItem", "WeaponClipAmmo"); }
	void SetWeaponClipAmmoField(unsigned int newValue) { SetNativeField(this, "UPrimalItem", "WeaponClipAmmo", newValue); }
	float GetWeaponFrequencyField() const { return GetNativeField<float>(this, "UPrimalItem", "WeaponFrequency"); }
	void SetWeaponFrequencyField(float newValue) { SetNativeField(this, "UPrimalItem", "WeaponFrequency", newValue); }
	long double GetLastTimeToShowInfoField() const { return GetNativeField<long double>(this, "UPrimalItem", "LastTimeToShowInfo"); }
	void SetLastTimeToShowInfoField(long double newValue) { SetNativeField(this, "UPrimalItem", "LastTimeToShowInfo", newValue); }
	char GetItemVersionField() const { return GetNativeField<char>(this, "UPrimalItem", "ItemVersion"); }
	void SetItemVersionField(char newValue) { SetNativeField(this, "UPrimalItem", "ItemVersion", newValue); }
	float GetItemDurabilityField() const { return GetNativeField<float>(this, "UPrimalItem", "ItemDurability"); }
	void SetItemDurabilityField(float newValue) { SetNativeField(this, "UPrimalItem", "ItemDurability", newValue); }
	float GetMinItemDurabilityField() const { return GetNativeField<float>(this, "UPrimalItem", "MinItemDurability"); }
	void SetMinItemDurabilityField(float newValue) { SetNativeField(this, "UPrimalItem", "MinItemDurability", newValue); }
	float GetSavedDurabilityField() const { return GetNativeField<float>(this, "UPrimalItem", "SavedDurability"); }
	void SetSavedDurabilityField(float newValue) { SetNativeField(this, "UPrimalItem", "SavedDurability", newValue); }
	TSubclassOf<AShooterWeapon> GetWeaponTemplateField() const { return GetNativeField<TSubclassOf<AShooterWeapon>>(this, "UPrimalItem", "WeaponTemplate"); }
	void SetWeaponTemplateField(TSubclassOf<AShooterWeapon> newValue) { SetNativeField(this, "UPrimalItem", "WeaponTemplate", newValue); }
	UTexture2D* GetBrokenIconField() const { return GetNativeField<UTexture2D *>(this, "UPrimalItem", "BrokenIcon"); }
	void SetBrokenIconField(UTexture2D* newValue) { SetNativeField(this, "UPrimalItem", "BrokenIcon", newValue); }
	UTexture2D* GetItemIconField() const { return GetNativeField<UTexture2D *>(this, "UPrimalItem", "ItemIcon"); }
	void SetItemIconField(UTexture2D* newValue) { SetNativeField(this, "UPrimalItem", "ItemIcon", newValue); }
	UTexture2D* GetAlternateItemIconBelowDurabilityField() const { return GetNativeField<UTexture2D *>(this, "UPrimalItem", "AlternateItemIconBelowDurability"); }
	void SetAlternateItemIconBelowDurabilityField(UTexture2D* newValue) { SetNativeField(this, "UPrimalItem", "AlternateItemIconBelowDurability", newValue); }
	float GetAlternateItemIconBelowDurabilityValueField() const { return GetNativeField<float>(this, "UPrimalItem", "AlternateItemIconBelowDurabilityValue"); }
	void SetAlternateItemIconBelowDurabilityValueField(float newValue) { SetNativeField(this, "UPrimalItem", "AlternateItemIconBelowDurabilityValue", newValue); }
	__int16* GetItemColorIDField() const { return GetNativeField<__int16*>(this, "UPrimalItem", "ItemColorID"); }
	void SetItemColorIDField(__int16* newValue) { SetNativeField(this, "UPrimalItem", "ItemColorID", newValue); }
	__int16* GetPreSkinItemColorIDField() const { return GetNativeField<__int16*>(this, "UPrimalItem", "PreSkinItemColorID"); }
	void SetPreSkinItemColorIDField(__int16* newValue) { SetNativeField(this, "UPrimalItem", "PreSkinItemColorID", newValue); }
	char* GetbUseItemColorField() const { return GetNativeField<char*>(this, "UPrimalItem", "bUseItemColor"); }
	void SetbUseItemColorField(char* newValue) { SetNativeField(this, "UPrimalItem", "bUseItemColor", newValue); }
	int GetItemQuantityField() const { return GetNativeField<int>(this, "UPrimalItem", "ItemQuantity"); }
	void SetItemQuantityField(int newValue) { SetNativeField(this, "UPrimalItem", "ItemQuantity", newValue); }
	int GetMaxItemQuantityField() const { return GetNativeField<int>(this, "UPrimalItem", "MaxItemQuantity"); }
	void SetMaxItemQuantityField(int newValue) { SetNativeField(this, "UPrimalItem", "MaxItemQuantity", newValue); }
	TArray<unsigned __int64> GetSteamItemUserIDsField() const { return GetNativeField<TArray<unsigned __int64>>(this, "UPrimalItem", "SteamItemUserIDs"); }
	void SetSteamItemUserIDsField(TArray<unsigned __int64> newValue) { SetNativeField(this, "UPrimalItem", "SteamItemUserIDs", newValue); }
	TSubclassOf<APrimalStructure> GetStructureToBuildField() const { return GetNativeField<TSubclassOf<APrimalStructure>>(this, "UPrimalItem", "StructureToBuild"); }
	void SetStructureToBuildField(TSubclassOf<APrimalStructure> newValue) { SetNativeField(this, "UPrimalItem", "StructureToBuild", newValue); }
	TSubclassOf<UPrimalItem> GetGiveItemWhenUsedField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "GiveItemWhenUsed"); }
	void SetGiveItemWhenUsedField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "GiveItemWhenUsed", newValue); }
	TArray<TSubclassOf<UPrimalInventoryComponent>> GetCraftingRequiresInventoryComponentField() const { return GetNativeField<TArray<TSubclassOf<UPrimalInventoryComponent>>>(this, "UPrimalItem", "CraftingRequiresInventoryComponent"); }
	void SetCraftingRequiresInventoryComponentField(TArray<TSubclassOf<UPrimalInventoryComponent>> newValue) { SetNativeField(this, "UPrimalItem", "CraftingRequiresInventoryComponent", newValue); }
	TSubclassOf<ADroppedItem> GetDroppedItemTemplateOverrideField() const { return GetNativeField<TSubclassOf<ADroppedItem>>(this, "UPrimalItem", "DroppedItemTemplateOverride"); }
	void SetDroppedItemTemplateOverrideField(TSubclassOf<ADroppedItem> newValue) { SetNativeField(this, "UPrimalItem", "DroppedItemTemplateOverride", newValue); }
	TSubclassOf<ADroppedItem> GetDroppedItemTemplateForSecondryActionField() const { return GetNativeField<TSubclassOf<ADroppedItem>>(this, "UPrimalItem", "DroppedItemTemplateForSecondryAction"); }
	void SetDroppedItemTemplateForSecondryActionField(TSubclassOf<ADroppedItem> newValue) { SetNativeField(this, "UPrimalItem", "DroppedItemTemplateForSecondryAction", newValue); }
	FRotator GetPreviewCameraRotationField() const { return GetNativeField<FRotator>(this, "UPrimalItem", "PreviewCameraRotation"); }
	void SetPreviewCameraRotationField(FRotator newValue) { SetNativeField(this, "UPrimalItem", "PreviewCameraRotation", newValue); }
	FVector GetPreviewCameraPivotOffsetField() const { return GetNativeField<FVector>(this, "UPrimalItem", "PreviewCameraPivotOffset"); }
	void SetPreviewCameraPivotOffsetField(FVector newValue) { SetNativeField(this, "UPrimalItem", "PreviewCameraPivotOffset", newValue); }
	float GetPreviewCameraDistanceScaleFactorField() const { return GetNativeField<float>(this, "UPrimalItem", "PreviewCameraDistanceScaleFactor"); }
	void SetPreviewCameraDistanceScaleFactorField(float newValue) { SetNativeField(this, "UPrimalItem", "PreviewCameraDistanceScaleFactor", newValue); }
	float GetPreviewCameraDefaultZoomMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "PreviewCameraDefaultZoomMultiplier"); }
	void SetPreviewCameraDefaultZoomMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "PreviewCameraDefaultZoomMultiplier", newValue); }
	float GetPreviewCameraMaxZoomMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "PreviewCameraMaxZoomMultiplier"); }
	void SetPreviewCameraMaxZoomMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "PreviewCameraMaxZoomMultiplier", newValue); }
	FName GetPlayerMeshTextureMaskParamNameField() const { return GetNativeField<FName>(this, "UPrimalItem", "PlayerMeshTextureMaskParamName"); }
	void SetPlayerMeshTextureMaskParamNameField(FName newValue) { SetNativeField(this, "UPrimalItem", "PlayerMeshTextureMaskParamName", newValue); }
	UTexture2D* GetPlayerMeshTextureMaskField() const { return GetNativeField<UTexture2D *>(this, "UPrimalItem", "PlayerMeshTextureMask"); }
	void SetPlayerMeshTextureMaskField(UTexture2D* newValue) { SetNativeField(this, "UPrimalItem", "PlayerMeshTextureMask", newValue); }
	UTexture2D* GetPlayerMeshNoItemDefaultTextureMaskField() const { return GetNativeField<UTexture2D *>(this, "UPrimalItem", "PlayerMeshNoItemDefaultTextureMask"); }
	void SetPlayerMeshNoItemDefaultTextureMaskField(UTexture2D* newValue) { SetNativeField(this, "UPrimalItem", "PlayerMeshNoItemDefaultTextureMask", newValue); }
	int GetPlayerMeshTextureMaskMaterialIndexField() const { return GetNativeField<int>(this, "UPrimalItem", "PlayerMeshTextureMaskMaterialIndex"); }
	void SetPlayerMeshTextureMaskMaterialIndexField(int newValue) { SetNativeField(this, "UPrimalItem", "PlayerMeshTextureMaskMaterialIndex", newValue); }
	FName GetFPVHandsMeshTextureMaskParamNameField() const { return GetNativeField<FName>(this, "UPrimalItem", "FPVHandsMeshTextureMaskParamName"); }
	void SetFPVHandsMeshTextureMaskParamNameField(FName newValue) { SetNativeField(this, "UPrimalItem", "FPVHandsMeshTextureMaskParamName", newValue); }
	UTexture2D* GetFPVHandsMeshTextureMaskField() const { return GetNativeField<UTexture2D *>(this, "UPrimalItem", "FPVHandsMeshTextureMask"); }
	void SetFPVHandsMeshTextureMaskField(UTexture2D* newValue) { SetNativeField(this, "UPrimalItem", "FPVHandsMeshTextureMask", newValue); }
	int GetFPVHandsMeshTextureMaskMaterialIndexField() const { return GetNativeField<int>(this, "UPrimalItem", "FPVHandsMeshTextureMaskMaterialIndex"); }
	void SetFPVHandsMeshTextureMaskMaterialIndexField(int newValue) { SetNativeField(this, "UPrimalItem", "FPVHandsMeshTextureMaskMaterialIndex", newValue); }
	UPrimalItem* GetWeaponAmmoOverrideItemCDOField() const { return GetNativeField<UPrimalItem *>(this, "UPrimalItem", "WeaponAmmoOverrideItemCDO"); }
	void SetWeaponAmmoOverrideItemCDOField(UPrimalItem* newValue) { SetNativeField(this, "UPrimalItem", "WeaponAmmoOverrideItemCDO", newValue); }
	long double GetCreationTimeField() const { return GetNativeField<long double>(this, "UPrimalItem", "CreationTime"); }
	void SetCreationTimeField(long double newValue) { SetNativeField(this, "UPrimalItem", "CreationTime", newValue); }
	long double GetLastAutoDurabilityDecreaseTimeField() const { return GetNativeField<long double>(this, "UPrimalItem", "LastAutoDurabilityDecreaseTime"); }
	void SetLastAutoDurabilityDecreaseTimeField(long double newValue) { SetNativeField(this, "UPrimalItem", "LastAutoDurabilityDecreaseTime", newValue); }
	long double GetLastUseTimeField() const { return GetNativeField<long double>(this, "UPrimalItem", "LastUseTime"); }
	void SetLastUseTimeField(long double newValue) { SetNativeField(this, "UPrimalItem", "LastUseTime", newValue); }
	long double GetLastLocalUseTimeField() const { return GetNativeField<long double>(this, "UPrimalItem", "LastLocalUseTime"); }
	void SetLastLocalUseTimeField(long double newValue) { SetNativeField(this, "UPrimalItem", "LastLocalUseTime", newValue); }
	int GetTempSlotIndexField() const { return GetNativeField<int>(this, "UPrimalItem", "TempSlotIndex"); }
	void SetTempSlotIndexField(int newValue) { SetNativeField(this, "UPrimalItem", "TempSlotIndex", newValue); }
	TWeakObjectPtr<AShooterWeapon> GetAssociatedWeaponField() const { return GetNativeField<TWeakObjectPtr<AShooterWeapon>>(this, "UPrimalItem", "AssociatedWeapon"); }
	void SetAssociatedWeaponField(TWeakObjectPtr<AShooterWeapon> newValue) { SetNativeField(this, "UPrimalItem", "AssociatedWeapon", newValue); }
	UPrimalItem* GetMyItemSkinField() const { return GetNativeField<UPrimalItem *>(this, "UPrimalItem", "MyItemSkin"); }
	void SetMyItemSkinField(UPrimalItem* newValue) { SetNativeField(this, "UPrimalItem", "MyItemSkin", newValue); }
	TWeakObjectPtr<AShooterCharacter> GetLastOwnerPlayerField() const { return GetNativeField<TWeakObjectPtr<AShooterCharacter>>(this, "UPrimalItem", "LastOwnerPlayer"); }
	void SetLastOwnerPlayerField(TWeakObjectPtr<AShooterCharacter> newValue) { SetNativeField(this, "UPrimalItem", "LastOwnerPlayer", newValue); }
	float GetCropGrowingFertilizerConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalItem", "CropGrowingFertilizerConsumptionRate"); }
	void SetCropGrowingFertilizerConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalItem", "CropGrowingFertilizerConsumptionRate", newValue); }
	float GetCropMaxFruitFertilizerConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalItem", "CropMaxFruitFertilizerConsumptionRate"); }
	void SetCropMaxFruitFertilizerConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalItem", "CropMaxFruitFertilizerConsumptionRate", newValue); }
	float GetCropGrowingWaterConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalItem", "CropGrowingWaterConsumptionRate"); }
	void SetCropGrowingWaterConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalItem", "CropGrowingWaterConsumptionRate", newValue); }
	float GetCropMaxFruitWaterConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalItem", "CropMaxFruitWaterConsumptionRate"); }
	void SetCropMaxFruitWaterConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalItem", "CropMaxFruitWaterConsumptionRate", newValue); }
	int GetCropMaxFruitsField() const { return GetNativeField<int>(this, "UPrimalItem", "CropMaxFruits"); }
	void SetCropMaxFruitsField(int newValue) { SetNativeField(this, "UPrimalItem", "CropMaxFruits", newValue); }
	float GetCropNoFertilizerOrWaterCacheReductionRateField() const { return GetNativeField<float>(this, "UPrimalItem", "CropNoFertilizerOrWaterCacheReductionRate"); }
	void SetCropNoFertilizerOrWaterCacheReductionRateField(float newValue) { SetNativeField(this, "UPrimalItem", "CropNoFertilizerOrWaterCacheReductionRate", newValue); }
	float GetFertilizerEffectivenessMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "FertilizerEffectivenessMultiplier"); }
	void SetFertilizerEffectivenessMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "FertilizerEffectivenessMultiplier", newValue); }
	float GetEggAlertDinosAggroAmountField() const { return GetNativeField<float>(this, "UPrimalItem", "EggAlertDinosAggroAmount"); }
	void SetEggAlertDinosAggroAmountField(float newValue) { SetNativeField(this, "UPrimalItem", "EggAlertDinosAggroAmount", newValue); }
	float GetEggAlertDinosAggroRadiusField() const { return GetNativeField<float>(this, "UPrimalItem", "EggAlertDinosAggroRadius"); }
	void SetEggAlertDinosAggroRadiusField(float newValue) { SetNativeField(this, "UPrimalItem", "EggAlertDinosAggroRadius", newValue); }
	TArray<FName> GetEggAlertDinosAggroTagsField() const { return GetNativeField<TArray<FName>>(this, "UPrimalItem", "EggAlertDinosAggroTags"); }
	void SetEggAlertDinosAggroTagsField(TArray<FName> newValue) { SetNativeField(this, "UPrimalItem", "EggAlertDinosAggroTags", newValue); }
	float GetEggAlertDinosForcedAggroTimeField() const { return GetNativeField<float>(this, "UPrimalItem", "EggAlertDinosForcedAggroTime"); }
	void SetEggAlertDinosForcedAggroTimeField(float newValue) { SetNativeField(this, "UPrimalItem", "EggAlertDinosForcedAggroTime", newValue); }
	float GetEggMaximumDistanceFromOriginalDropToAlertDinosField() const { return GetNativeField<float>(this, "UPrimalItem", "EggMaximumDistanceFromOriginalDropToAlertDinos"); }
	void SetEggMaximumDistanceFromOriginalDropToAlertDinosField(float newValue) { SetNativeField(this, "UPrimalItem", "EggMaximumDistanceFromOriginalDropToAlertDinos", newValue); }
	TSubclassOf<UPrimalItem> GetBrokenGiveItemClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "BrokenGiveItemClass"); }
	void SetBrokenGiveItemClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "BrokenGiveItemClass", newValue); }
	float GetClearColorDurabilityThresholdField() const { return GetNativeField<float>(this, "UPrimalItem", "ClearColorDurabilityThreshold"); }
	void SetClearColorDurabilityThresholdField(float newValue) { SetNativeField(this, "UPrimalItem", "ClearColorDurabilityThreshold", newValue); }
	TSubclassOf<UPrimalItem> GetItemClassToUseAsInitialCustomDataField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "ItemClassToUseAsInitialCustomData"); }
	void SetItemClassToUseAsInitialCustomDataField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "ItemClassToUseAsInitialCustomData", newValue); }
	FVector GetOriginalItemDropLocationField() const { return GetNativeField<FVector>(this, "UPrimalItem", "OriginalItemDropLocation"); }
	void SetOriginalItemDropLocationField(FVector newValue) { SetNativeField(this, "UPrimalItem", "OriginalItemDropLocation", newValue); }
	FLinearColor GetDurabilityBarColorForegroundField() const { return GetNativeField<FLinearColor>(this, "UPrimalItem", "DurabilityBarColorForeground"); }
	void SetDurabilityBarColorForegroundField(FLinearColor newValue) { SetNativeField(this, "UPrimalItem", "DurabilityBarColorForeground", newValue); }
	FLinearColor GetDurabilityBarColorBackgroundField() const { return GetNativeField<FLinearColor>(this, "UPrimalItem", "DurabilityBarColorBackground"); }
	void SetDurabilityBarColorBackgroundField(FLinearColor newValue) { SetNativeField(this, "UPrimalItem", "DurabilityBarColorBackground", newValue); }
	TSubclassOf<UPrimalItem> GetOverrideCooldownTimeItemClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "OverrideCooldownTimeItemClass"); }
	void SetOverrideCooldownTimeItemClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "OverrideCooldownTimeItemClass", newValue); }
	float GetMinDurabilityForCraftingResourceField() const { return GetNativeField<float>(this, "UPrimalItem", "MinDurabilityForCraftingResource"); }
	void SetMinDurabilityForCraftingResourceField(float newValue) { SetNativeField(this, "UPrimalItem", "MinDurabilityForCraftingResource", newValue); }
	float GetResourceRequirementIncreaseRatingPowerField() const { return GetNativeField<float>(this, "UPrimalItem", "ResourceRequirementIncreaseRatingPower"); }
	void SetResourceRequirementIncreaseRatingPowerField(float newValue) { SetNativeField(this, "UPrimalItem", "ResourceRequirementIncreaseRatingPower", newValue); }
	float GetResourceRequirementRatingScaleField() const { return GetNativeField<float>(this, "UPrimalItem", "ResourceRequirementRatingScale"); }
	void SetResourceRequirementRatingScaleField(float newValue) { SetNativeField(this, "UPrimalItem", "ResourceRequirementRatingScale", newValue); }
	float GetResourceRequirementRatingIncreasePercentageField() const { return GetNativeField<float>(this, "UPrimalItem", "ResourceRequirementRatingIncreasePercentage"); }
	void SetResourceRequirementRatingIncreasePercentageField(float newValue) { SetNativeField(this, "UPrimalItem", "ResourceRequirementRatingIncreasePercentage", newValue); }
	long double GetNextSpoilingTimeField() const { return GetNativeField<long double>(this, "UPrimalItem", "NextSpoilingTime"); }
	void SetNextSpoilingTimeField(long double newValue) { SetNativeField(this, "UPrimalItem", "NextSpoilingTime", newValue); }
	long double GetLastSpoilingTimeField() const { return GetNativeField<long double>(this, "UPrimalItem", "LastSpoilingTime"); }
	void SetLastSpoilingTimeField(long double newValue) { SetNativeField(this, "UPrimalItem", "LastSpoilingTime", newValue); }
	TArray<FString> GetDefaultFolderPathsField() const { return GetNativeField<TArray<FString>>(this, "UPrimalItem", "DefaultFolderPaths"); }
	void SetDefaultFolderPathsField(TArray<FString> newValue) { SetNativeField(this, "UPrimalItem", "DefaultFolderPaths", newValue); }
	FName GetDefaultWeaponMeshNameField() const { return GetNativeField<FName>(this, "UPrimalItem", "DefaultWeaponMeshName"); }
	void SetDefaultWeaponMeshNameField(FName newValue) { SetNativeField(this, "UPrimalItem", "DefaultWeaponMeshName", newValue); }
	int GetLastCalculatedTotalAmmoInvUpdatedFrameField() const { return GetNativeField<int>(this, "UPrimalItem", "LastCalculatedTotalAmmoInvUpdatedFrame"); }
	void SetLastCalculatedTotalAmmoInvUpdatedFrameField(int newValue) { SetNativeField(this, "UPrimalItem", "LastCalculatedTotalAmmoInvUpdatedFrame", newValue); }
	int GetWeaponTotalAmmoField() const { return GetNativeField<int>(this, "UPrimalItem", "WeaponTotalAmmo"); }
	void SetWeaponTotalAmmoField(int newValue) { SetNativeField(this, "UPrimalItem", "WeaponTotalAmmo", newValue); }
	TSubclassOf<UPrimalItem> GetEngramRequirementItemClassOverrideField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "UPrimalItem", "EngramRequirementItemClassOverride"); }
	void SetEngramRequirementItemClassOverrideField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "UPrimalItem", "EngramRequirementItemClassOverride", newValue); }
	TArray<unsigned short> GetCraftingResourceRequirementsField() const { return GetNativeField<TArray<unsigned short>>(this, "UPrimalItem", "CraftingResourceRequirements"); }
	void SetCraftingResourceRequirementsField(TArray<unsigned short> newValue) { SetNativeField(this, "UPrimalItem", "CraftingResourceRequirements", newValue); }
	USoundBase* GetExtraThrowItemSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "ExtraThrowItemSound"); }
	void SetExtraThrowItemSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "ExtraThrowItemSound", newValue); }
	FVector GetSpawnOnWaterEncroachmentBoxExtentField() const { return GetNativeField<FVector>(this, "UPrimalItem", "SpawnOnWaterEncroachmentBoxExtent"); }
	void SetSpawnOnWaterEncroachmentBoxExtentField(FVector newValue) { SetNativeField(this, "UPrimalItem", "SpawnOnWaterEncroachmentBoxExtent", newValue); }
	TArray<TSubclassOf<AActor>> GetOnlyUsableOnSpecificClassesField() const { return GetNativeField<TArray<TSubclassOf<AActor>>>(this, "UPrimalItem", "OnlyUsableOnSpecificClasses"); }
	void SetOnlyUsableOnSpecificClassesField(TArray<TSubclassOf<AActor>> newValue) { SetNativeField(this, "UPrimalItem", "OnlyUsableOnSpecificClasses", newValue); }
	//TArray<FSaddlePassengerSeatDefinition> GetSaddlePassengerSeatsField() const { return GetNativeField<TArray<FSaddlePassengerSeatDefinition>>(this, "UPrimalItem", "SaddlePassengerSeats"); }
	//void SetSaddlePassengerSeatsField(TArray<FSaddlePassengerSeatDefinition> newValue) { SetNativeField(this, "UPrimalItem", "SaddlePassengerSeats", newValue); }
	FName GetSaddleOverrideRiderSocketNameField() const { return GetNativeField<FName>(this, "UPrimalItem", "SaddleOverrideRiderSocketName"); }
	void SetSaddleOverrideRiderSocketNameField(FName newValue) { SetNativeField(this, "UPrimalItem", "SaddleOverrideRiderSocketName", newValue); }
	TSubclassOf<APrimalDinoCharacter> GetEggDinoClassToSpawnField() const { return GetNativeField<TSubclassOf<APrimalDinoCharacter>>(this, "UPrimalItem", "EggDinoClassToSpawn"); }
	void SetEggDinoClassToSpawnField(TSubclassOf<APrimalDinoCharacter> newValue) { SetNativeField(this, "UPrimalItem", "EggDinoClassToSpawn", newValue); }
	char* GetEggNumberOfLevelUpPointsAppliedField() const { return GetNativeField<char*>(this, "UPrimalItem", "EggNumberOfLevelUpPointsApplied"); }
	void SetEggNumberOfLevelUpPointsAppliedField(char* newValue) { SetNativeField(this, "UPrimalItem", "EggNumberOfLevelUpPointsApplied", newValue); }
	float GetEggTamedIneffectivenessModifierField() const { return GetNativeField<float>(this, "UPrimalItem", "EggTamedIneffectivenessModifier"); }
	void SetEggTamedIneffectivenessModifierField(float newValue) { SetNativeField(this, "UPrimalItem", "EggTamedIneffectivenessModifier", newValue); }
	char* GetEggColorSetIndicesField() const { return GetNativeField<char*>(this, "UPrimalItem", "EggColorSetIndices"); }
	void SetEggColorSetIndicesField(char* newValue) { SetNativeField(this, "UPrimalItem", "EggColorSetIndices", newValue); }
	float GetEggLoseDurabilityPerSecondField() const { return GetNativeField<float>(this, "UPrimalItem", "EggLoseDurabilityPerSecond"); }
	void SetEggLoseDurabilityPerSecondField(float newValue) { SetNativeField(this, "UPrimalItem", "EggLoseDurabilityPerSecond", newValue); }
	float GetExtraEggLoseDurabilityPerSecondMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "ExtraEggLoseDurabilityPerSecondMultiplier"); }
	void SetExtraEggLoseDurabilityPerSecondMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "ExtraEggLoseDurabilityPerSecondMultiplier", newValue); }
	float GetEggMinTemperatureField() const { return GetNativeField<float>(this, "UPrimalItem", "EggMinTemperature"); }
	void SetEggMinTemperatureField(float newValue) { SetNativeField(this, "UPrimalItem", "EggMinTemperature", newValue); }
	float GetEggMaxTemperatureField() const { return GetNativeField<float>(this, "UPrimalItem", "EggMaxTemperature"); }
	void SetEggMaxTemperatureField(float newValue) { SetNativeField(this, "UPrimalItem", "EggMaxTemperature", newValue); }
	float GetEggDroppedInvalidTempLoseItemRatingSpeedField() const { return GetNativeField<float>(this, "UPrimalItem", "EggDroppedInvalidTempLoseItemRatingSpeed"); }
	void SetEggDroppedInvalidTempLoseItemRatingSpeedField(float newValue) { SetNativeField(this, "UPrimalItem", "EggDroppedInvalidTempLoseItemRatingSpeed", newValue); }
	USoundBase* GetShieldHitSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "ShieldHitSound"); }
	void SetShieldHitSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "ShieldHitSound", newValue); }
	float GetRecipeCraftingSkillScaleField() const { return GetNativeField<float>(this, "UPrimalItem", "RecipeCraftingSkillScale"); }
	void SetRecipeCraftingSkillScaleField(float newValue) { SetNativeField(this, "UPrimalItem", "RecipeCraftingSkillScale", newValue); }
	int GetCustomItemIDField() const { return GetNativeField<int>(this, "UPrimalItem", "CustomItemID"); }
	void SetCustomItemIDField(int newValue) { SetNativeField(this, "UPrimalItem", "CustomItemID", newValue); }
	float GetAddDinoTargetingRangeField() const { return GetNativeField<float>(this, "UPrimalItem", "AddDinoTargetingRange"); }
	void SetAddDinoTargetingRangeField(float newValue) { SetNativeField(this, "UPrimalItem", "AddDinoTargetingRange", newValue); }
	float GetDamageTorpidityArmorRatingField() const { return GetNativeField<float>(this, "UPrimalItem", "DamageTorpidityArmorRating"); }
	void SetDamageTorpidityArmorRatingField(float newValue) { SetNativeField(this, "UPrimalItem", "DamageTorpidityArmorRating", newValue); }
	FName GetUseParticleEffectSocketNameField() const { return GetNativeField<FName>(this, "UPrimalItem", "UseParticleEffectSocketName"); }
	void SetUseParticleEffectSocketNameField(FName newValue) { SetNativeField(this, "UPrimalItem", "UseParticleEffectSocketName", newValue); }
	float GetUseGiveDinoTameAffinityPercentField() const { return GetNativeField<float>(this, "UPrimalItem", "UseGiveDinoTameAffinityPercent"); }
	void SetUseGiveDinoTameAffinityPercentField(float newValue) { SetNativeField(this, "UPrimalItem", "UseGiveDinoTameAffinityPercent", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetCraftingAdditionalItemsToGiveField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalItem", "CraftingAdditionalItemsToGive"); }
	void SetCraftingAdditionalItemsToGiveField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalItem", "CraftingAdditionalItemsToGive", newValue); }
	int GetLastValidItemVersionField() const { return GetNativeField<int>(this, "UPrimalItem", "LastValidItemVersion"); }
	void SetLastValidItemVersionField(int newValue) { SetNativeField(this, "UPrimalItem", "LastValidItemVersion", newValue); }
	float GetGlobalTameAffinityMultiplierField() const { return GetNativeField<float>(this, "UPrimalItem", "GlobalTameAffinityMultiplier"); }
	void SetGlobalTameAffinityMultiplierField(float newValue) { SetNativeField(this, "UPrimalItem", "GlobalTameAffinityMultiplier", newValue); }
	int GetCraftingGiveItemCountField() const { return GetNativeField<int>(this, "UPrimalItem", "CraftingGiveItemCount"); }
	void SetCraftingGiveItemCountField(int newValue) { SetNativeField(this, "UPrimalItem", "CraftingGiveItemCount", newValue); }
	int GetCraftingGivesItemQuantityOverrideField() const { return GetNativeField<int>(this, "UPrimalItem", "CraftingGivesItemQuantityOverride"); }
	void SetCraftingGivesItemQuantityOverrideField(int newValue) { SetNativeField(this, "UPrimalItem", "CraftingGivesItemQuantityOverride", newValue); }
	USoundBase* GetUseItemOnItemSoundField() const { return GetNativeField<USoundBase *>(this, "UPrimalItem", "UseItemOnItemSound"); }
	void SetUseItemOnItemSoundField(USoundBase* newValue) { SetNativeField(this, "UPrimalItem", "UseItemOnItemSound", newValue); }
	FName GetUseUnlocksEmoteNameField() const { return GetNativeField<FName>(this, "UPrimalItem", "UseUnlocksEmoteName"); }
	void SetUseUnlocksEmoteNameField(FName newValue) { SetNativeField(this, "UPrimalItem", "UseUnlocksEmoteName", newValue); }
	long double GetClusterSpoilingTimeUTCField() const { return GetNativeField<long double>(this, "UPrimalItem", "ClusterSpoilingTimeUTC"); }
	void SetClusterSpoilingTimeUTCField(long double newValue) { SetNativeField(this, "UPrimalItem", "ClusterSpoilingTimeUTC", newValue); }
	int GetEggRandomMutationsFemaleField() const { return GetNativeField<int>(this, "UPrimalItem", "EggRandomMutationsFemale"); }
	void SetEggRandomMutationsFemaleField(int newValue) { SetNativeField(this, "UPrimalItem", "EggRandomMutationsFemale", newValue); }
	int GetEggRandomMutationsMaleField() const { return GetNativeField<int>(this, "UPrimalItem", "EggRandomMutationsMale"); }
	void SetEggRandomMutationsMaleField(int newValue) { SetNativeField(this, "UPrimalItem", "EggRandomMutationsMale", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetEquippingRequiresEngramsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "UPrimalItem", "EquippingRequiresEngrams"); }
	void SetEquippingRequiresEngramsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "UPrimalItem", "EquippingRequiresEngrams", newValue); }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "UPrimalItem", "GetPrivateStaticClass"); }
	FItemNetInfo* GetItemNetInfo(FItemNetInfo* result) { return NativeCall<FItemNetInfo *, FItemNetInfo *>((DWORD64)this, "UPrimalItem", "GetItemNetInfo", result); }
	void InitFromNetInfo(FItemNetInfo* theInfo) { NativeCall<void, FItemNetInfo *>((DWORD64)this, "UPrimalItem", "InitFromNetInfo", theInfo); }
	void AddItemDurability(float durabilityToAdd) { NativeCall<void, float>((DWORD64)this, "UPrimalItem", "AddItemDurability", durabilityToAdd); }
	void InitNewItem(float ItemQuality, UPrimalInventoryComponent* toInventory, float MaxItemDifficultyClamp) { NativeCall<void, float, UPrimalInventoryComponent *, float>((DWORD64)this, "UPrimalItem", "InitNewItem", ItemQuality, toInventory, MaxItemDifficultyClamp); }
	bool AllowEquipItem(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "AllowEquipItem", toInventory); }
	bool AllowInventoryItem(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "AllowInventoryItem", toInventory); }
	void AddToInventory(UPrimalInventoryComponent* toInventory, bool bEquipItem, bool AddToSlotItems, FItemNetID* InventoryInsertAfterItemID, bool ShowHUDNotification, bool bDontRecalcSpoilingTime) { NativeCall<void, UPrimalInventoryComponent *, bool, bool, FItemNetID *, bool, bool>((DWORD64)this, "UPrimalItem", "AddToInventory", toInventory, bEquipItem, AddToSlotItems, InventoryInsertAfterItemID, ShowHUDNotification, bDontRecalcSpoilingTime); }
	bool RemoveItemFromArkTributeInventory() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "RemoveItemFromArkTributeInventory"); }
	bool RemoveItemFromInventory(bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, bool, bool>((DWORD64)this, "UPrimalItem", "RemoveItemFromInventory", bForceRemoval, showHUDMessage); }
	float GetSpoilingTime() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetSpoilingTime"); }
	static UPrimalItem* AddNewItem(TSubclassOf<UPrimalItem> ItemArchetype, UPrimalInventoryComponent* GiveToInventory, bool bEquipItem, bool bDontStack, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint, float MaxItemDifficultyClamp, bool CreateOnClient, TSubclassOf<UPrimalItem> ApplyItemSkin) { return NativeCall<UPrimalItem *, TSubclassOf<UPrimalItem>, UPrimalInventoryComponent *, bool, bool, float, bool, int, bool, float, bool, TSubclassOf<UPrimalItem>>(nullptr, "UPrimalItem", "AddNewItem", ItemArchetype, GiveToInventory, bEquipItem, bDontStack, ItemQuality, bForceNoBlueprint, quantityOverride, bForceBlueprint, MaxItemDifficultyClamp, CreateOnClient, ApplyItemSkin); }
	UPrimalItem* CreateItemFromNetInfo(FItemNetInfo* newItemInfo) { return NativeCall<UPrimalItem *, FItemNetInfo *>((DWORD64)this, "UPrimalItem", "CreateItemFromNetInfo", newItemInfo); }
	FString* GetItemName(FString* result, bool bIncludeQuantity, bool bShortName) { return NativeCall<FString *, FString *, bool, bool>((DWORD64)this, "UPrimalItem", "GetItemName", result, bIncludeQuantity, bShortName); }
	FLinearColor* GetItemQualityColor(FLinearColor* result) { return NativeCall<FLinearColor *, FLinearColor *>((DWORD64)this, "UPrimalItem", "GetItemQualityColor", result); }
	FString* GetItemDescription(FString* result, bool bGetLongDescription) { return NativeCall<FString *, FString *, bool>((DWORD64)this, "UPrimalItem", "GetItemDescription", result, bGetLongDescription); }
	void EquippedItem() { NativeCall<void>((DWORD64)this, "UPrimalItem", "EquippedItem"); }
	void UnequippedItem() { NativeCall<void>((DWORD64)this, "UPrimalItem", "UnequippedItem"); }
	void UpdatedItem() { NativeCall<void>((DWORD64)this, "UPrimalItem", "UpdatedItem"); }
	void SetOwnerNoSee(bool bNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>((DWORD64)this, "UPrimalItem", "SetOwnerNoSee", bNoSee, bForceHideFirstPerson); }
	void RemoveAttachments(AActor* UseOtherActor, bool bRefreshDefaultAttachments) { NativeCall<void, AActor *, bool>((DWORD64)this, "UPrimalItem", "RemoveAttachments", UseOtherActor, bRefreshDefaultAttachments); }
	AActor* GetOwnerActor() { return NativeCall<AActor *>((DWORD64)this, "UPrimalItem", "GetOwnerActor"); }
	UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D *, UObject *, bool>((DWORD64)this, "UPrimalItem", "GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	FString* GetEntryString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetEntryString", result); }
	float GetItemWeight(bool bJustOneQuantity, bool bForceNotBlueprintWeight) { return NativeCall<float, bool, bool>((DWORD64)this, "UPrimalItem", "GetItemWeight", bJustOneQuantity, bForceNotBlueprintWeight); }
	void AddToSlot(int theSlotIndex, bool bForce) { NativeCall<void, int, bool>((DWORD64)this, "UPrimalItem", "AddToSlot", theSlotIndex, bForce); }
	void RemoveFromSlot(bool bForce) { NativeCall<void, bool>((DWORD64)this, "UPrimalItem", "RemoveFromSlot", bForce); }
	bool AllowSlotting(UPrimalInventoryComponent* toInventory, bool bForce) { return NativeCall<bool, UPrimalInventoryComponent *, bool>((DWORD64)this, "UPrimalItem", "AllowSlotting", toInventory, bForce); }
	bool IsBroken() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "IsBroken"); }
	int GetExplicitEntryIndexType() { return NativeCall<int>((DWORD64)this, "UPrimalItem", "GetExplicitEntryIndexType"); }
	//float GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>((DWORD64)this, "UPrimalItem", "GetUseItemAddCharacterStatusValue", valueType); }
	void Use(bool bOverridePlayerInput) { NativeCall<void, bool>((DWORD64)this, "UPrimalItem", "Use", bOverridePlayerInput); }
	float GetRemainingCooldownTime() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetRemainingCooldownTime"); }
	bool CanSpawnOverWater(AActor* ownerActor, FTransform* SpawnTransform) { return NativeCall<bool, AActor *, FTransform *>((DWORD64)this, "UPrimalItem", "CanSpawnOverWater", ownerActor, SpawnTransform); }
	bool IsCooldownReadyForUse() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "IsCooldownReadyForUse"); }
	bool CanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>((DWORD64)this, "UPrimalItem", "CanUse", bIgnoreCooldown); }
	void LocalUse(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "UPrimalItem", "LocalUse", ForPC); }
	void UnequipWeapon(bool bDelayedUnequip) { NativeCall<void, bool>((DWORD64)this, "UPrimalItem", "UnequipWeapon", bDelayedUnequip); }
	FString* GetEntryDescription(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetEntryDescription", result); }
	void AddedToInventory() { NativeCall<void>((DWORD64)this, "UPrimalItem", "AddedToInventory"); }
	void InitializeItem(bool bForceReinit) { NativeCall<void, bool>((DWORD64)this, "UPrimalItem", "InitializeItem", bForceReinit); }
	FLinearColor* GetColorForItemColorID(FLinearColor* result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>((DWORD64)this, "UPrimalItem", "GetColorForItemColorID", result, SetNum, ID); }
	static FLinearColor* StaticGetColorForItemColorID(FLinearColor* result, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int>(nullptr, "UPrimalItem", "StaticGetColorForItemColorID", result, ID); }
	int GetItemQuantity() { return NativeCall<int>((DWORD64)this, "UPrimalItem", "GetItemQuantity"); }
	float GetMiscInfoFontScale() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetMiscInfoFontScale"); }
	FString* GetMiscInfoString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetMiscInfoString", result); }
	int IncrementItemQuantity(int amount, bool bReplicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption) { return NativeCall<int, int, bool, bool, bool, bool, bool>((DWORD64)this, "UPrimalItem", "IncrementItemQuantity", amount, bReplicateToClient, bDontUpdateWeight, bIsFromUseConsumption, bIsArkTributeItem, bIsFromCraftingConsumption); }
	FString* GetItemTypeString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetItemTypeString", result); }
	FString* GetItemSubtypeString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetItemSubtypeString", result); }
	FString* GetItemStatsString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetItemStatsString", result); }
	bool MeetBlueprintCraftingRequirements(UPrimalInventoryComponent* compareInventoryComp, int CraftAmountOverride, AShooterPlayerController* ForPlayer, bool bIsForCraftQueueAddition, bool bTestFullQueue) { return NativeCall<bool, UPrimalInventoryComponent *, int, AShooterPlayerController *, bool, bool>((DWORD64)this, "UPrimalItem", "MeetBlueprintCraftingRequirements", compareInventoryComp, CraftAmountOverride, ForPlayer, bIsForCraftQueueAddition, bTestFullQueue); }
	bool TestMeetsCraftingRequirementsPercent(UPrimalInventoryComponent* invComp, float Percent) { return NativeCall<bool, UPrimalInventoryComponent *, float>((DWORD64)this, "UPrimalItem", "TestMeetsCraftingRequirementsPercent", invComp, Percent); }
	void ConsumeCraftingRequirementsPercent(UPrimalInventoryComponent* invComp, float Percent) { NativeCall<void, UPrimalInventoryComponent *, float>((DWORD64)this, "UPrimalItem", "ConsumeCraftingRequirementsPercent", invComp, Percent); }
	FString* GetCraftingRequirementsString(FString* result, UPrimalInventoryComponent* compareInventoryComp) { return NativeCall<FString *, FString *, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "GetCraftingRequirementsString", result, compareInventoryComp); }
	bool MeetRepairingRequirements(UPrimalInventoryComponent* compareInventoryComp, bool bIsForCraftQueueAddition) { return NativeCall<bool, UPrimalInventoryComponent *, bool>((DWORD64)this, "UPrimalItem", "MeetRepairingRequirements", compareInventoryComp, bIsForCraftQueueAddition); }
	FString* GetRepairingRequirementsString(FString* result, UPrimalInventoryComponent* compareInventoryComp, bool bUseBaseRequeriments, float OverrideRepairPercent) { return NativeCall<FString *, FString *, UPrimalInventoryComponent *, bool, float>((DWORD64)this, "UPrimalItem", "GetRepairingRequirementsString", result, compareInventoryComp, bUseBaseRequeriments, OverrideRepairPercent); }
	//float GetItemStatModifier(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>((DWORD64)this, "UPrimalItem", "GetItemStatModifier", statType); }
	//FString * GetItemStatString(FString * result, EPrimalItemStat::Type statType) { return NativeCall<FString *, FString *, EPrimalItemStat::Type>((DWORD64)this, "UPrimalItem", "GetItemStatString", result, statType); }
	bool UsesDurability() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "UsesDurability"); }
	bool CanRepair(bool bIgnoreInventoryRequirement) { return NativeCall<bool, bool>((DWORD64)this, "UPrimalItem", "CanRepair", bIgnoreInventoryRequirement); }
	float GetDurabilityPercentage() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetDurabilityPercentage"); }
	void CraftBlueprint() { NativeCall<void>((DWORD64)this, "UPrimalItem", "CraftBlueprint"); }
	bool CanFullyCraft() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "CanFullyCraft"); }
	void StopCraftingRepairing(bool bCheckIfCraftingOrRepairing) { NativeCall<void, bool>((DWORD64)this, "UPrimalItem", "StopCraftingRepairing", bCheckIfCraftingOrRepairing); }
	UPrimalItem* FinishCraftingBlueprint() { return NativeCall<UPrimalItem *>((DWORD64)this, "UPrimalItem", "FinishCraftingBlueprint"); }
	float GetTimeToCraftBlueprint() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetTimeToCraftBlueprint"); }
	float GetTimeForFullRepair() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetTimeForFullRepair"); }
	void GenerateItemID(FItemNetID* TheItemID) { NativeCall<void, FItemNetID *>((DWORD64)this, "UPrimalItem", "GenerateItemID", TheItemID); }
	void TickCraftingItem(float DeltaTime, AShooterGameState* theGameState) { NativeCall<void, float, AShooterGameState *>((DWORD64)this, "UPrimalItem", "TickCraftingItem", DeltaTime, theGameState); }
	float GetCraftingPercent() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetCraftingPercent"); }
	float GetRepairingPercent() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetRepairingPercent"); }
	void SetQuantity(int NewQuantity, bool ShowHUDNotification) { NativeCall<void, int, bool>((DWORD64)this, "UPrimalItem", "SetQuantity", NewQuantity, ShowHUDNotification); }
	void RepairItem() { NativeCall<void>((DWORD64)this, "UPrimalItem", "RepairItem"); }
	void FinishRepairing() { NativeCall<void>((DWORD64)this, "UPrimalItem", "FinishRepairing"); }
	void Used(UPrimalItem* DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem *, int>((DWORD64)this, "UPrimalItem", "Used", DestinationItem, AdditionalData); }
	void RemoveWeaponAccessory() { NativeCall<void>((DWORD64)this, "UPrimalItem", "RemoveWeaponAccessory"); }
	void ServerRemoveItemSkin() { NativeCall<void>((DWORD64)this, "UPrimalItem", "ServerRemoveItemSkin"); }
	void RemoveClipAmmo(bool bDontUpdateItem) { NativeCall<void, bool>((DWORD64)this, "UPrimalItem", "RemoveClipAmmo", bDontUpdateItem); }
	bool CanStackWithItem(UPrimalItem* otherItem, int* QuantityOverride) { return NativeCall<bool, UPrimalItem *, int *>((DWORD64)this, "UPrimalItem", "CanStackWithItem", otherItem, QuantityOverride); }
	bool CheckAutoCraftBlueprint() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "CheckAutoCraftBlueprint"); }
	bool CanCraft() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "CanCraft"); }
	FString* GetCraftRepairInvReqString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetCraftRepairInvReqString", result); }
	bool AllowUseInInventory(bool bIsRemoteInventory, AShooterPlayerController* ByPC, bool DontCheckActor) { return NativeCall<bool, bool, AShooterPlayerController *, bool>((DWORD64)this, "UPrimalItem", "AllowUseInInventory", bIsRemoteInventory, ByPC, DontCheckActor); }
	bool CanBeArkTributeItem() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "CanBeArkTributeItem"); }
	void SetEngramBlueprint() { NativeCall<void>((DWORD64)this, "UPrimalItem", "SetEngramBlueprint"); }
	bool CanSpoil() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "CanSpoil"); }
	void RecalcSpoilingTime(long double TimeSeconds, float SpoilPercent, UPrimalInventoryComponent* forComp) { NativeCall<void, long double, float, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "RecalcSpoilingTime", TimeSeconds, SpoilPercent, forComp); }
	void InventoryRefreshCheckItem() { NativeCall<void>((DWORD64)this, "UPrimalItem", "InventoryRefreshCheckItem"); }
	bool IsValidForCrafting() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "IsValidForCrafting"); }
	bool IsOwnerInWater() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "IsOwnerInWater"); }
	bool AllowRemoteAddToInventory(UPrimalInventoryComponent* invComp) { return NativeCall<bool, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "AllowRemoteAddToInventory", invComp); }
	bool CanDrop() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "CanDrop"); }
	void PickupAlertDinos(AActor* groundItem) { NativeCall<void, AActor *>((DWORD64)this, "UPrimalItem", "PickupAlertDinos", groundItem); }
	void GetItemAttachmentInfos(AActor* OwnerActor) { NativeCall<void, AActor *>((DWORD64)this, "UPrimalItem", "GetItemAttachmentInfos", OwnerActor); }
	void SetAttachedMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>((DWORD64)this, "UPrimalItem", "SetAttachedMeshesMaterialScalarParamValue", ParamName, Value); }
	bool CanUseWithItemSource(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem *>((DWORD64)this, "UPrimalItem", "CanUseWithItemSource", DestinationItem); }
	bool CanUseWithItemDestination(UPrimalItem* SourceItem) { return NativeCall<bool, UPrimalItem *>((DWORD64)this, "UPrimalItem", "CanUseWithItemDestination", SourceItem); }
	bool UseItemOntoItem(UPrimalItem* DestinationItem, int AdditionalData) { return NativeCall<bool, UPrimalItem *, int>((DWORD64)this, "UPrimalItem", "UseItemOntoItem", DestinationItem, AdditionalData); }
	void LocalUseItemOntoItem(AShooterPlayerController* ForPC, UPrimalItem* DestinationItem) { NativeCall<void, AShooterPlayerController *, UPrimalItem *>((DWORD64)this, "UPrimalItem", "LocalUseItemOntoItem", ForPC, DestinationItem); }
	FString* GetPrimaryColorName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "GetPrimaryColorName", result); }
	bool ProcessEditText(AShooterPlayerController* ForPC, FString* TextToUse, bool __formal) { return NativeCall<bool, AShooterPlayerController *, FString *, bool>((DWORD64)this, "UPrimalItem", "ProcessEditText", ForPC, TextToUse, __formal); }
	void NotifyEditText(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "UPrimalItem", "NotifyEditText", PC); }
	void AddToArkTributeInvenroty(UPrimalInventoryComponent* toInventory, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent *, bool>((DWORD64)this, "UPrimalItem", "AddToArkTributeInvenroty", toInventory, bFromLoad); }
	int GetMaximumAdditionalCrafting(UPrimalInventoryComponent* forComp) { return NativeCall<int, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "GetMaximumAdditionalCrafting", forComp); }
	float GetWeaponTemplateMeleeDamageAmount() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetWeaponTemplateMeleeDamageAmount"); }
	float GetWeaponTemplateDurabilityToConsumePerMeleeHit() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetWeaponTemplateDurabilityToConsumePerMeleeHit"); }
	TSubclassOf<UDamageType>* GetWeaponTemplateMeleeDamageType(TSubclassOf<UDamageType>* result) { return NativeCall<TSubclassOf<UDamageType> *, TSubclassOf<UDamageType> *>((DWORD64)this, "UPrimalItem", "GetWeaponTemplateMeleeDamageType", result); }
	TSubclassOf<UDamageType>* GetWeaponTemplateHarvestDamageType(TSubclassOf<UDamageType>* result) { return NativeCall<TSubclassOf<UDamageType> *, TSubclassOf<UDamageType> *>((DWORD64)this, "UPrimalItem", "GetWeaponTemplateHarvestDamageType", result); }
	float GetWeaponTemplateHarvestDamageMultiplier() { return NativeCall<float>((DWORD64)this, "UPrimalItem", "GetWeaponTemplateHarvestDamageMultiplier"); }
	void CalcRecipeStats() { NativeCall<void>((DWORD64)this, "UPrimalItem", "CalcRecipeStats"); }
	bool IsUsableConsumable() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "IsUsableConsumable"); }
	bool CanEquipWeapon() { return NativeCall<bool>((DWORD64)this, "UPrimalItem", "CanEquipWeapon"); }
	void StaticRegisterNativesUPrimalItem() { NativeCall<void>((DWORD64)this, "UPrimalItem", "StaticRegisterNativesUPrimalItem"); }
	FString* BPAllowCrafting(FString* result, AShooterPlayerController* ForPC) { return NativeCall<FString *, FString *, AShooterPlayerController *>((DWORD64)this, "UPrimalItem", "BPAllowCrafting", result, ForPC); }
	bool BPAllowRemoteAddToInventory(UPrimalInventoryComponent* invComp) { return NativeCall<bool, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "BPAllowRemoteAddToInventory", invComp); }
	bool BPCanAddToInventory(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent *>((DWORD64)this, "UPrimalItem", "BPCanAddToInventory", toInventory); }
	FString* BPGetCustomInventoryWidgetText(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalItem", "BPGetCustomInventoryWidgetText", result); }
};

struct FItemNetInfo
{
	TSubclassOf<UPrimalItem> GetItemArchetypeField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "FItemNetInfo", "ItemArchetype"); }
	void SetItemArchetypeField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "FItemNetInfo", "ItemArchetype", newValue); }
	FItemNetID GetItemIDField() const { return GetNativeField<FItemNetID>(this, "FItemNetInfo", "ItemID"); }
	void SetItemIDField(FItemNetID newValue) { SetNativeField(this, "FItemNetInfo", "ItemID", newValue); }
	unsigned int GetExpirationTimeUTCField() const { return GetNativeField<unsigned int>(this, "FItemNetInfo", "ExpirationTimeUTC"); }
	void SetExpirationTimeUTCField(unsigned int newValue) { SetNativeField(this, "FItemNetInfo", "ExpirationTimeUTC", newValue); }
	//TArray<FCustomItemData> GetCustomItemDatasField() const { return GetNativeField<TArray<FCustomItemData>>(this, "FItemNetInfo", "CustomItemDatas"); }
	unsigned __int64 GetOwnerPlayerDataIdField() const { return GetNativeField<unsigned __int64>(this, "FItemNetInfo", "OwnerPlayerDataId"); }
	void SetOwnerPlayerDataIdField(unsigned __int64 newValue) { SetNativeField(this, "FItemNetInfo", "OwnerPlayerDataId", newValue); }
	int GetSlotIndexField() const { return GetNativeField<int>(this, "FItemNetInfo", "SlotIndex"); }
	void SetSlotIndexField(int newValue) { SetNativeField(this, "FItemNetInfo", "SlotIndex", newValue); }
	unsigned int GetWeaponClipAmmoField() const { return GetNativeField<unsigned int>(this, "FItemNetInfo", "WeaponClipAmmo"); }
	void SetWeaponClipAmmoField(unsigned int newValue) { SetNativeField(this, "FItemNetInfo", "WeaponClipAmmo", newValue); }
	long double GetCreationTimeField() const { return GetNativeField<long double>(this, "FItemNetInfo", "CreationTime"); }
	void SetCreationTimeField(long double newValue) { SetNativeField(this, "FItemNetInfo", "CreationTime", newValue); }
	float GetItemDurabilityField() const { return GetNativeField<float>(this, "FItemNetInfo", "ItemDurability"); }
	void SetItemDurabilityField(float newValue) { SetNativeField(this, "FItemNetInfo", "ItemDurability", newValue); }
	float GetItemRatingField() const { return GetNativeField<float>(this, "FItemNetInfo", "ItemRating"); }
	void SetItemRatingField(float newValue) { SetNativeField(this, "FItemNetInfo", "ItemRating", newValue); }
	char GetItemQualityIndexField() const { return GetNativeField<char>(this, "FItemNetInfo", "ItemQualityIndex"); }
	void SetItemQualityIndexField(char newValue) { SetNativeField(this, "FItemNetInfo", "ItemQualityIndex", newValue); }
	unsigned int GetItemQuantityField() const { return GetNativeField<unsigned int>(this, "FItemNetInfo", "ItemQuantity"); }
	void SetItemQuantityField(unsigned int newValue) { SetNativeField(this, "FItemNetInfo", "ItemQuantity", newValue); }
	unsigned __int16 GetCraftQueueField() const { return GetNativeField<unsigned __int16>(this, "FItemNetInfo", "CraftQueue"); }
	void SetCraftQueueField(unsigned __int16 newValue) { SetNativeField(this, "FItemNetInfo", "CraftQueue", newValue); }
	long double GetNextCraftCompletionTimeField() const { return GetNativeField<long double>(this, "FItemNetInfo", "NextCraftCompletionTime"); }
	void SetNextCraftCompletionTimeField(long double newValue) { SetNativeField(this, "FItemNetInfo", "NextCraftCompletionTime", newValue); }
	//unsigned __int16[8] GetItemStatValuesField() const { return GetNativeField<unsigned __int16[8]>(this, "FItemNetInfo", "ItemStatValues"); }
	//__int16[6] GetItemColorIDField() const { return GetNativeField<__int16[6]>(this, "FItemNetInfo", "ItemColorID"); }
	TSubclassOf<UPrimalItem> GetItemCustomClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "FItemNetInfo", "ItemCustomClass"); }
	void SetItemCustomClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "FItemNetInfo", "ItemCustomClass", newValue); }
	TSubclassOf<UPrimalItem> GetItemSkinTemplateField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "FItemNetInfo", "ItemSkinTemplate"); }
	void SetItemSkinTemplateField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "FItemNetInfo", "ItemSkinTemplate", newValue); }
	float GetCraftingSkillField() const { return GetNativeField<float>(this, "FItemNetInfo", "CraftingSkill"); }
	void SetCraftingSkillField(float newValue) { SetNativeField(this, "FItemNetInfo", "CraftingSkill", newValue); }
	FString GetCustomItemNameField() const { return GetNativeField<FString>(this, "FItemNetInfo", "CustomItemName"); }
	void SetCustomItemNameField(FString newValue) { SetNativeField(this, "FItemNetInfo", "CustomItemName", newValue); }
	FString GetCustomItemDescriptionField() const { return GetNativeField<FString>(this, "FItemNetInfo", "CustomItemDescription"); }
	void SetCustomItemDescriptionField(FString newValue) { SetNativeField(this, "FItemNetInfo", "CustomItemDescription", newValue); }
	TArray<FColor> GetCustomItemColorsField() const { return GetNativeField<TArray<FColor>>(this, "FItemNetInfo", "CustomItemColors"); }
	void SetCustomItemColorsField(TArray<FColor> newValue) { SetNativeField(this, "FItemNetInfo", "CustomItemColors", newValue); }
	//TArray<FCraftingResourceRequirement> GetCustomResourceRequirementsField() const { return GetNativeField<TArray<FCraftingResourceRequirement>>(this, "FItemNetInfo", "CustomResourceRequirements"); }
	long double GetNextSpoilingTimeField() const { return GetNativeField<long double>(this, "FItemNetInfo", "NextSpoilingTime"); }
	void SetNextSpoilingTimeField(long double newValue) { SetNativeField(this, "FItemNetInfo", "NextSpoilingTime", newValue); }
	long double GetLastSpoilingTimeField() const { return GetNativeField<long double>(this, "FItemNetInfo", "LastSpoilingTime"); }
	void SetLastSpoilingTimeField(long double newValue) { SetNativeField(this, "FItemNetInfo", "LastSpoilingTime", newValue); }
	TWeakObjectPtr<AShooterCharacter> GetLastOwnerPlayerField() const { return GetNativeField<TWeakObjectPtr<AShooterCharacter>>(this, "FItemNetInfo", "LastOwnerPlayer"); }
	long double GetLastAutoDurabilityDecreaseTimeField() const { return GetNativeField<long double>(this, "FItemNetInfo", "LastAutoDurabilityDecreaseTime"); }
	void SetLastAutoDurabilityDecreaseTimeField(long double newValue) { SetNativeField(this, "FItemNetInfo", "LastAutoDurabilityDecreaseTime", newValue); }
	FVector GetOriginalItemDropLocationField() const { return GetNativeField<FVector>(this, "FItemNetInfo", "OriginalItemDropLocation"); }
	void SetOriginalItemDropLocationField(FVector newValue) { SetNativeField(this, "FItemNetInfo", "OriginalItemDropLocation", newValue); }
	//__int16[6] GetPreSkinItemColorIDField() const { return GetNativeField<__int16[6]>(this, "FItemNetInfo", "PreSkinItemColorID"); }
	float GetEggTamedIneffectivenessModifierField() const { return GetNativeField<float>(this, "FItemNetInfo", "EggTamedIneffectivenessModifier"); }
	void SetEggTamedIneffectivenessModifierField(float newValue) { SetNativeField(this, "FItemNetInfo", "EggTamedIneffectivenessModifier", newValue); }
	//char[6] GetEggColorSetIndicesField() const { return GetNativeField<char[6]>(this, "FItemNetInfo", "EggColorSetIndices"); }
	char GetItemVersionField() const { return GetNativeField<char>(this, "FItemNetInfo", "ItemVersion"); }
	void SetItemVersionField(char newValue) { SetNativeField(this, "FItemNetInfo", "ItemVersion", newValue); }
	int GetCustomItemIDField() const { return GetNativeField<int>(this, "FItemNetInfo", "CustomItemID"); }
	void SetCustomItemIDField(int newValue) { SetNativeField(this, "FItemNetInfo", "CustomItemID", newValue); }
	TArray<unsigned __int64> GetSteamUserItemIDField() const { return GetNativeField<TArray<unsigned __int64>>(this, "FItemNetInfo", "SteamUserItemID"); }
	void SetSteamUserItemIDField(TArray<unsigned __int64> newValue) { SetNativeField(this, "FItemNetInfo", "SteamUserItemID", newValue); }
	long double GetClusterSpoilingTimeUTCField() const { return GetNativeField<long double>(this, "FItemNetInfo", "ClusterSpoilingTimeUTC"); }
	void SetClusterSpoilingTimeUTCField(long double newValue) { SetNativeField(this, "FItemNetInfo", "ClusterSpoilingTimeUTC", newValue); }
	//TArray<FDinoAncestorsEntry> GetEggDinoAncestorsField() const { return GetNativeField<TArray<FDinoAncestorsEntry>>(this, "FItemNetInfo", "EggDinoAncestors"); }
	//TArray<FDinoAncestorsEntry> GetEggDinoAncestorsMaleField() const { return GetNativeField<TArray<FDinoAncestorsEntry>>(this, "FItemNetInfo", "EggDinoAncestorsMale"); }
	int GetEggRandomMutationsFemaleField() const { return GetNativeField<int>(this, "FItemNetInfo", "EggRandomMutationsFemale"); }
	void SetEggRandomMutationsFemaleField(int newValue) { SetNativeField(this, "FItemNetInfo", "EggRandomMutationsFemale", newValue); }
	int GetEggRandomMutationsMaleField() const { return GetNativeField<int>(this, "FItemNetInfo", "EggRandomMutationsMale"); }
	void SetEggRandomMutationsMaleField(int newValue) { SetNativeField(this, "FItemNetInfo", "EggRandomMutationsMale", newValue); }
};

struct ADroppedItem
{
};
