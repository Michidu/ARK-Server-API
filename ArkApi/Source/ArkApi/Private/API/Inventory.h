#pragma once

#include "Base.h"

struct FItemNetID
{
	unsigned int ItemID1;
	unsigned int ItemID2;
};

struct UPrimalInventoryComponent
{
	//TArray<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>, FDefaultAllocator> GetRemoteViewingInventoryPlayerControllers() const { return *(TArray<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "RemoteViewingInventoryPlayerControllers"); };
	void SetInventoryItems(TArray<UPrimalItem *, FDefaultAllocator> a0) { *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "InventoryItems") = a0; };
	TArray<UPrimalItem *, FDefaultAllocator> GetInventoryItems() const { return *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "InventoryItems"); };
	void SetEquippedItems(TArray<UPrimalItem *, FDefaultAllocator> a0) { *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "EquippedItems") = a0; };
	TArray<UPrimalItem *, FDefaultAllocator> GetEquippedItems() const { return *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "EquippedItems"); };
	void SetItemSlots(TArray<UPrimalItem *, FDefaultAllocator> a0) { *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSlots") = a0; };
	TArray<UPrimalItem *, FDefaultAllocator> GetItemSlots() const { return *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSlots"); };
	void SetArkTributeItems(TArray<UPrimalItem *, FDefaultAllocator> a0) { *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ArkTributeItems") = a0; };
	TArray<UPrimalItem *, FDefaultAllocator> GetArkTributeItems() const { return *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ArkTributeItems"); };
	void SetAllDyeColorItems(TArray<UPrimalItem *, FDefaultAllocator> a0) { *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "AllDyeColorItems") = a0; };
	TArray<UPrimalItem *, FDefaultAllocator> GetAllDyeColorItems() const { return *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "AllDyeColorItems"); };
	//TArray<FItemCraftQueueEntry, FDefaultAllocator> GetItemCraftQueueEntries() const { return *(TArray<FItemCraftQueueEntry, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemCraftQueueEntries"); };
	TArray<TEnumAsByte<enum EPrimalEquipmentType_Type>, FDefaultAllocator> GetEquippableItemTypes() const { return *(TArray<TEnumAsByte<enum EPrimalEquipmentType_Type>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "EquippableItemTypes"); };
	//void SetItemSpoilingTimeMultipliers(TArray<FItemMultiplier, FDefaultAllocator> a0) { *(TArray<FItemMultiplier, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSpoilingTimeMultipliers") = a0; };
	//TArray<FItemMultiplier, FDefaultAllocator> GetItemSpoilingTimeMultipliers() const { return *(TArray<FItemMultiplier, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSpoilingTimeMultipliers"); };
	void SetMaxInventoryItems(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "MaxInventoryItems") = a0; };
	int GetMaxInventoryItems() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "MaxInventoryItems"); };
	void SetMaxInventoryWeight(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxInventoryWeight") = a0; };
	float GetMaxInventoryWeight() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxInventoryWeight"); };
	void SetTribeGroupInventoryRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "UPrimalInventoryComponent", "TribeGroupInventoryRank") = a0; };
	unsigned char GetTribeGroupInventoryRank() const { return *(unsigned char*)GetAddress(this, "UPrimalInventoryComponent", "TribeGroupInventoryRank"); };
	void SetNumSlots(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "NumSlots") = a0; };
	int GetNumSlots() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "NumSlots"); };
	void SetMaxItemCraftQueueEntries(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemCraftQueueEntries") = a0; };
	int GetMaxItemCraftQueueEntries() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemCraftQueueEntries"); };
	void SetCraftingItemSpeed(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "CraftingItemSpeed") = a0; };
	float GetCraftingItemSpeed() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "CraftingItemSpeed"); };
	void SetRemoteInventoryDescriptionString(FString a0) { *(FString*)GetAddress(this, "UPrimalInventoryComponent", "RemoteInventoryDescriptionString") = a0; };
	FString GetRemoteInventoryDescriptionString() const { return *(FString*)GetAddress(this, "UPrimalInventoryComponent", "RemoteInventoryDescriptionString"); };
	//void SetEngramRequirementClassOverride(TSubclassOf<UPrimalItem> a0) { *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalInventoryComponent", "EngramRequirementClassOverride") = a0; };
	//TSubclassOf<UPrimalItem> GetEngramRequirementClassOverride() const { return *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalInventoryComponent", "EngramRequirementClassOverride"); };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetDefaultInventoryItems() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultInventoryItems"); };
	void SetDefaultInventoryItemsRandomCustomStrings(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStrings") = a0; };
	TArray<FString, FDefaultAllocator> GetDefaultInventoryItemsRandomCustomStrings() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStrings"); };
	void SetDefaultInventoryItemsRandomCustomStringsWeights(TArray<float, FDefaultAllocator> a0) { *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStringsWeights") = a0; };
	TArray<float, FDefaultAllocator> GetDefaultInventoryItemsRandomCustomStringsWeights() const { return *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultInventoryItemsRandomCustomStringsWeights"); };

	/*void SetCheatInventoryItems(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "CheatInventoryItems") = a0; };
	TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetCheatInventoryItems() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "CheatInventoryItems"); };
	void SetDefaultEquippedItems(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultEquippedItems") = a0; };
	TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetDefaultEquippedItems() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultEquippedItems"); };
	void SetDefaultEquippedItemSkins(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultEquippedItemSkins") = a0; };
	TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetDefaultEquippedItemSkins() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultEquippedItemSkins"); };
	void SetDefaultSlotItems(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultSlotItems") = a0; };
	TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetDefaultSlotItems() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultSlotItems"); };
	void SetItemSpawnActorClassOverrides(TArray<FItemSpawnActorClassOverride, FDefaultAllocator> a0) { *(TArray<FItemSpawnActorClassOverride, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSpawnActorClassOverrides") = a0; };
	TArray<FItemSpawnActorClassOverride, FDefaultAllocator> GetItemSpawnActorClassOverrides() const { return *(TArray<FItemSpawnActorClassOverride, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSpawnActorClassOverrides"); };
	void SetOnlyAllowCraftingItemClasses(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "OnlyAllowCraftingItemClasses") = a0; };
	TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetOnlyAllowCraftingItemClasses() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "OnlyAllowCraftingItemClasses"); };
	void SetDefaultEngrams(TArray<unsigned char, FDefaultAllocator> a0) { *(TArray<unsigned char, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultEngrams") = a0; };*/
	TArray<unsigned char, FDefaultAllocator> GetDefaultEngrams() const { return *(TArray<unsigned char, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultEngrams"); };
	void SetDefaultInventoryQualities(TArray<float, FDefaultAllocator> a0) { *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultInventoryQualities") = a0; };
	TArray<float, FDefaultAllocator> GetDefaultInventoryQualities() const { return *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DefaultInventoryQualities"); };
	FString GetInventoryNameOverride() const { return *(FString*)GetAddress(this, "UPrimalInventoryComponent", "InventoryNameOverride"); };
	void SetMaxRemoteInventoryViewingDistance(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxRemoteInventoryViewingDistance") = a0; };
	float GetMaxRemoteInventoryViewingDistance() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxRemoteInventoryViewingDistance"); };
	void SetActiveInventoryRefreshInterval(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "ActiveInventoryRefreshInterval") = a0; };
	float GetActiveInventoryRefreshInterval() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "ActiveInventoryRefreshInterval"); };
	void SetAbsoluteMaxInventoryItems(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "AbsoluteMaxInventoryItems") = a0; };
	int GetAbsoluteMaxInventoryItems() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "AbsoluteMaxInventoryItems"); };
	void SetLastInventoryRefreshTime(double a0) { *(double*)GetAddress(this, "UPrimalInventoryComponent", "LastInventoryRefreshTime") = a0; };
	double GetLastInventoryRefreshTime() const { return *(double*)GetAddress(this, "UPrimalInventoryComponent", "LastInventoryRefreshTime"); };
	//void SetForceAllowItemStackings(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ForceAllowItemStackings") = a0; };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetForceAllowItemStackings() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ForceAllowItemStackings"); };
	void SetDropItemRotationOffset(FRotator a0) { *(FRotator*)GetAddress(this, "UPrimalInventoryComponent", "DropItemRotationOffset") = a0; };
	FRotator GetDropItemRotationOffset() const { return *(FRotator*)GetAddress(this, "UPrimalInventoryComponent", "DropItemRotationOffset"); };
	//void SetItemCraftingConsumptionReplenishments(TArray<FItemCraftingConsumptionReplenishment, FDefaultAllocator> a0) { *(TArray<FItemCraftingConsumptionReplenishment, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemCraftingConsumptionReplenishments") = a0; };
	//TArray<FItemCraftingConsumptionReplenishment, FDefaultAllocator> GetItemCraftingConsumptionReplenishments() const { return *(TArray<FItemCraftingConsumptionReplenishment, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemCraftingConsumptionReplenishments"); };
	void SetMaxItemCooldownTimeClear(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemCooldownTimeClear") = a0; };
	float GetMaxItemCooldownTimeClear() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemCooldownTimeClear"); };
	//void SetMaxItemTemplateQuantities(TArray<FItemMultiplier, FDefaultAllocator> a0) { *(TArray<FItemMultiplier, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemTemplateQuantities") = a0; };
	//TArray<FItemMultiplier, FDefaultAllocator> GetMaxItemTemplateQuantities() const { return *(TArray<FItemMultiplier, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemTemplateQuantities"); };
	void SetCraftingItems(TArray<UPrimalItem *, FDefaultAllocator> a0) { *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "CraftingItems") = a0; };
	TArray<UPrimalItem *, FDefaultAllocator> GetCraftingItems() const { return *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "CraftingItems"); };
	void SetDisplayDefaultItemInventoryCount(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "DisplayDefaultItemInventoryCount") = a0; };
	int GetDisplayDefaultItemInventoryCount() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "DisplayDefaultItemInventoryCount"); };
	void SetbHasBeenRegistered(bool a0) { *(bool*)GetAddress(this, "UPrimalInventoryComponent", "bHasBeenRegistered") = a0; };
	bool GetbHasBeenRegistered() const { return *(bool*)GetAddress(this, "UPrimalInventoryComponent", "bHasBeenRegistered"); };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetLastUsedItemClasses() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "LastUsedItemClasses"); };
	void SetLastUsedItemTimes(TArray<double, FDefaultAllocator> a0) { *(TArray<double, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "LastUsedItemTimes") = a0; };
	TArray<double, FDefaultAllocator> GetLastUsedItemTimes() const { return *(TArray<double, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "LastUsedItemTimes"); };
	void SetInvUpdatedFrame(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "InvUpdatedFrame") = a0; };
	int GetInvUpdatedFrame() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "InvUpdatedFrame"); };
	void SetLastRefreshCheckItemTime(double a0) { *(double*)GetAddress(this, "UPrimalInventoryComponent", "LastRefreshCheckItemTime") = a0; };
	double GetLastRefreshCheckItemTime() const { return *(double*)GetAddress(this, "UPrimalInventoryComponent", "LastRefreshCheckItemTime"); };
	void SetbLastPreventUseItemSpoilingTimeMultipliers(bool a0) { *(bool*)GetAddress(this, "UPrimalInventoryComponent", "bLastPreventUseItemSpoilingTimeMultipliers") = a0; };
	bool GetbLastPreventUseItemSpoilingTimeMultipliers() const { return *(bool*)GetAddress(this, "UPrimalInventoryComponent", "bLastPreventUseItemSpoilingTimeMultipliers"); };
	void SetNextItemSpoilingID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "UPrimalInventoryComponent", "NextItemSpoilingID") = a0; };
	FItemNetID GetNextItemSpoilingID() const { return *(FItemNetID*)GetAddress(this, "UPrimalInventoryComponent", "NextItemSpoilingID"); };
	void SetNextItemConsumptionID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "UPrimalInventoryComponent", "NextItemConsumptionID") = a0; };
	FItemNetID GetNextItemConsumptionID() const { return *(FItemNetID*)GetAddress(this, "UPrimalInventoryComponent", "NextItemConsumptionID"); };
	void SetMinItemSets(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "MinItemSets") = a0; };
	float GetMinItemSets() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "MinItemSets"); };
	void SetMaxItemSets(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemSets") = a0; };
	float GetMaxItemSets() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxItemSets"); };
	void SetNumItemSetsPower(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "NumItemSetsPower") = a0; };
	float GetNumItemSetsPower() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "NumItemSetsPower"); };
	//void SetItemSets(TArray<FSupplyCrateItemSet, FDefaultAllocator> a0) { *(TArray<FSupplyCrateItemSet, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSets") = a0; };
	//TArray<FSupplyCrateItemSet, FDefaultAllocator> GetItemSets() const { return *(TArray<FSupplyCrateItemSet, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemSets"); };
	//void SetAdditionalItemSets(TArray<FSupplyCrateItemSet, FDefaultAllocator> a0) { *(TArray<FSupplyCrateItemSet, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "AdditionalItemSets") = a0; };
	//TArray<FSupplyCrateItemSet, FDefaultAllocator> GetAdditionalItemSets() const { return *(TArray<FSupplyCrateItemSet, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "AdditionalItemSets"); };
	void SetSetQuantityWeights(TArray<float, FDefaultAllocator> a0) { *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "SetQuantityWeights") = a0; };
	TArray<float, FDefaultAllocator> GetSetQuantityWeights() const { return *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "SetQuantityWeights"); };
	void SetSetQuantityValues(TArray<float, FDefaultAllocator> a0) { *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "SetQuantityValues") = a0; };
	TArray<float, FDefaultAllocator> GetSetQuantityValues() const { return *(TArray<float, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "SetQuantityValues"); };
	void SetMaxInventoryAccessDistance(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxInventoryAccessDistance") = a0; };
	float GetMaxInventoryAccessDistance() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "MaxInventoryAccessDistance"); };
	//void SetItemClassWeightMultipliers(TArray<FItemMultiplier, FDefaultAllocator> a0) { *(TArray<FItemMultiplier, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemClassWeightMultipliers") = a0; };
	//TArray<FItemMultiplier, FDefaultAllocator> GetItemClassWeightMultipliers() const { return *(TArray<FItemMultiplier, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "ItemClassWeightMultipliers"); };
	void SetGenerateItemSetsQualityMultiplierMin(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMin") = a0; };
	float GetGenerateItemSetsQualityMultiplierMin() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMin"); };
	void SetGenerateItemSetsQualityMultiplierMax(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMax") = a0; };
	float GetGenerateItemSetsQualityMultiplierMax() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "GenerateItemSetsQualityMultiplierMax"); };
	void SetDefaultCraftingRequirementsMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalInventoryComponent", "DefaultCraftingRequirementsMultiplier") = a0; };
	float GetDefaultCraftingRequirementsMultiplier() const { return *(float*)GetAddress(this, "UPrimalInventoryComponent", "DefaultCraftingRequirementsMultiplier"); };
	void SetDefaultCraftingQuantityMultiplier(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "DefaultCraftingQuantityMultiplier") = a0; };
	int GetDefaultCraftingQuantityMultiplier() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "DefaultCraftingQuantityMultiplier"); };
	void SetSavedForceDefaultInventoryRefreshVersion(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "SavedForceDefaultInventoryRefreshVersion") = a0; };
	int GetSavedForceDefaultInventoryRefreshVersion() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "SavedForceDefaultInventoryRefreshVersion"); };
	void SetForceDefaultInventoryRefreshVersion(int a0) { *(int*)GetAddress(this, "UPrimalInventoryComponent", "ForceDefaultInventoryRefreshVersion") = a0; };
	int GetForceDefaultInventoryRefreshVersion() const { return *(int*)GetAddress(this, "UPrimalInventoryComponent", "ForceDefaultInventoryRefreshVersion"); };
	//void SetTamedDinoForceConsiderFoodTypes(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "TamedDinoForceConsiderFoodTypes") = a0; };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetTamedDinoForceConsiderFoodTypes() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "TamedDinoForceConsiderFoodTypes"); };
	void SetDinoAutoHealingItems(TArray<UPrimalItem *, FDefaultAllocator> a0) { *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DinoAutoHealingItems") = a0; };
	TArray<UPrimalItem *, FDefaultAllocator> GetDinoAutoHealingItems() const { return *(TArray<UPrimalItem *, FDefaultAllocator>*)GetAddress(this, "UPrimalInventoryComponent", "DinoAutoHealingItems"); };

	// Functions

	bool CanEquipItem(UPrimalItem* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "CanEquipItem"))((DWORD64)this, a1); }
	void NotifyItemRemoved(UPrimalItem* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "NotifyItemRemoved"))((DWORD64)this, a1); }
	void NotifyItemAdded(UPrimalItem* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, bool)>(GetAddress("UPrimalInventoryComponent", "NotifyItemAdded"))((DWORD64)this, a1, a2); }
	void NotifyItemQuantityUpdated(UPrimalItem* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, int)>(GetAddress("UPrimalInventoryComponent", "NotifyItemQuantityUpdated"))((DWORD64)this, a1, a2); }
	void NotifyArkItemAdded() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "NotifyArkItemAdded"))((DWORD64)this); }
	void NotifyClientItemArkTributeStatusChanged(UPrimalItem* a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, bool, bool)>(GetAddress("UPrimalInventoryComponent", "NotifyClientItemArkTributeStatusChanged"))((DWORD64)this, a1, a2, a3); }
	void NotifyClientsItemStatus(UPrimalItem* a1, bool a2, bool a3, bool a4, bool a5, bool a6, UPrimalItem* a7, FItemNetID* a8, bool a9, bool a10, bool a11) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, bool, bool, bool, bool, bool, UPrimalItem*, FItemNetID*, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "NotifyClientsItemStatus"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
	UPrimalItem* AddItem(const FItemNetInfo& a1, bool a2, bool a3, bool a4, FItemNetID* a5, bool a6) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, const FItemNetInfo&, bool, bool, bool, FItemNetID*, bool)>(GetAddress("UPrimalInventoryComponent", "AddItem"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	void AddArkTributeItem(const FItemNetInfo& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FItemNetInfo&, bool)>(GetAddress("UPrimalInventoryComponent", "AddArkTributeItem"))((DWORD64)this, a1, a2); }
	void RequestAddArkTributeItem(const FItemNetInfo& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FItemNetInfo&, bool)>(GetAddress("UPrimalInventoryComponent", "RequestAddArkTributeItem"))((DWORD64)this, a1, a2); }
	void LoadArkTriuteItems(const TArray<FItemNetInfo, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, const TArray<FItemNetInfo, FDefaultAllocator>&)>(GetAddress("UPrimalInventoryComponent", "LoadArkTriuteItems"))((DWORD64)this, a1); }
	UPrimalItem* FindItem(const FItemNetID& a1, bool a2, bool a3, int* a4) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, const FItemNetID&, bool, bool, int*)>(GetAddress("UPrimalInventoryComponent", "FindItem"))((DWORD64)this, a1, a2, a3, a4); }
	TArray<UPrimalItem *, FDefaultAllocator> FindColorItem(FColor a1, bool a2) { return static_cast<TArray<UPrimalItem *, FDefaultAllocator>(_cdecl*)(DWORD64, FColor, bool)>(GetAddress("UPrimalInventoryComponent", "FindColorItem"))((DWORD64)this, a1, a2); }
	TArray<UPrimalItem *, FDefaultAllocator> FindBrushColorItem(short a1) { return static_cast<TArray<UPrimalItem *, FDefaultAllocator>(_cdecl*)(DWORD64, short)>(GetAddress("UPrimalInventoryComponent", "FindBrushColorItem"))((DWORD64)this, a1); }
	UPrimalItem* FindArkTributeItem(const FItemNetID& a1) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, const FItemNetID&)>(GetAddress("UPrimalInventoryComponent", "FindArkTributeItem"))((DWORD64)this, a1); }
	void ClientFinishReceivingItems(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalInventoryComponent", "ClientFinishReceivingItems"))((DWORD64)this, a1); }
	void ClientStartReceivingItems(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalInventoryComponent", "ClientStartReceivingItems"))((DWORD64)this, a1); }
	void ServerRequestItems(AShooterPlayerController* a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*, bool, bool)>(GetAddress("UPrimalInventoryComponent", "ServerRequestItems"))((DWORD64)this, a1, a2, a3); }
	AShooterPlayerController* GetOwnerController() { return static_cast<AShooterPlayerController*(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "GetOwnerController"))((DWORD64)this); }
	void DropItem(const FItemNetInfo& a1, bool a2, const FVector& a3, const FRotator& a4, bool a5, bool a6, bool a7, bool a8) { static_cast<void(_cdecl*)(DWORD64, const FItemNetInfo&, bool, const FVector&, const FRotator&, bool, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "DropItem"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8); }
	//ADroppedItem* StaticDropItem(AActor* a1, const FItemNetInfo& a2, TSubclassOf<ADroppedItem> a3, const FRotator& a4, bool a5, const FVector& a6, const FRotator& a7, bool a8, bool a9, bool a10, bool a11) { return static_cast<ADroppedItem*(_cdecl*)(DWORD64, AActor*, const FItemNetInfo&, TSubclassOf<ADroppedItem>, const FRotator&, bool, const FVector&, const FRotator&, bool, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "StaticDropItem"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
	//ADroppedItem* StaticDropNewItem(AActor* a1, TSubclassOf<UPrimalItem> a2, float a3, bool a4, int a5, bool a6, TSubclassOf<ADroppedItem> a7, const FRotator& a8, bool a9, const FVector& a10, const FRotator& a11, bool a12, bool a13, bool a14, bool a15) { return static_cast<ADroppedItem*(_cdecl*)(DWORD64, AActor*, TSubclassOf<UPrimalItem>, float, bool, int, bool, TSubclassOf<ADroppedItem>, const FRotator&, bool, const FVector&, const FRotator&, bool, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "StaticDropNewItem"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15); }
	bool ServerEquipItem(FItemNetID& a1) { return static_cast<bool(_cdecl*)(DWORD64, FItemNetID&)>(GetAddress("UPrimalInventoryComponent", "ServerEquipItem"))((DWORD64)this, a1); }
	UPrimalItem* AddItemObject(UPrimalItem* a1) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "AddItemObject"))((DWORD64)this, a1); }
	bool RemoveItem(const FItemNetID& a1, bool a2, bool a3, bool a4, bool a5) { return static_cast<bool(_cdecl*)(DWORD64, const FItemNetID&, bool, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "RemoveItem"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void OnArkTributeItemsRemoved(bool a1, const TArray<FItemNetInfo, FDefaultAllocator>& a2, const TArray<FItemNetInfo, FDefaultAllocator>& a3, int a4, const FString& a5) { static_cast<void(_cdecl*)(DWORD64, bool, const TArray<FItemNetInfo, FDefaultAllocator>&, const TArray<FItemNetInfo, FDefaultAllocator>&, int, const FString&)>(GetAddress("UPrimalInventoryComponent", "OnArkTributeItemsRemoved"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void OnArkTributeItemsAdded(bool a1, const TArray<FItemNetInfo, FDefaultAllocator>& a2) { static_cast<void(_cdecl*)(DWORD64, bool, const TArray<FItemNetInfo, FDefaultAllocator>&)>(GetAddress("UPrimalInventoryComponent", "OnArkTributeItemsAdded"))((DWORD64)this, a1, a2); }
	bool RemoveArkTributeItem(FItemNetID& a1, unsigned int a2) { return static_cast<bool(_cdecl*)(DWORD64, FItemNetID&, unsigned int)>(GetAddress("UPrimalInventoryComponent", "RemoveArkTributeItem"))((DWORD64)this, a1, a2); }
	bool IsLocalInventoryViewer() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "IsLocalInventoryViewer"))((DWORD64)this); }
	void GiveInitialItems(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalInventoryComponent", "GiveInitialItems"))((DWORD64)this, a1); }
	bool RemoteInventoryAllowViewing(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("UPrimalInventoryComponent", "RemoteInventoryAllowViewing"))((DWORD64)this, a1); }
	bool BPRemoteInventoryAllowAddItems(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("UPrimalInventoryComponent", "BPRemoteInventoryAllowAddItems"))((DWORD64)this, a1); }
	bool RemoteInventoryAllowAddItems(AShooterPlayerController* a1, UPrimalItem* a2, int* a3) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, UPrimalItem*, int*)>(GetAddress("UPrimalInventoryComponent", "RemoteInventoryAllowAddItems"))((DWORD64)this, a1, a2, a3); }
	bool RemoteInventoryAllowRemoveItems(AShooterPlayerController* a1, UPrimalItem* a2, int* a3) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, UPrimalItem*, int*)>(GetAddress("UPrimalInventoryComponent", "RemoteInventoryAllowRemoveItems"))((DWORD64)this, a1, a2, a3); }
	bool BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController* a1, UPrimalItem* a2, int a3) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, UPrimalItem*, int)>(GetAddress("UPrimalInventoryComponent", "BPCustomRemoteInventoryAllowAddItems"))((DWORD64)this, a1, a2, a3); }
	bool RemoteInventoryAllowCraftingItems(AShooterPlayerController* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, bool)>(GetAddress("UPrimalInventoryComponent", "RemoteInventoryAllowCraftingItems"))((DWORD64)this, a1, a2); }
	bool RemoteInventoryAllowRepairingItems(AShooterPlayerController* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, bool)>(GetAddress("UPrimalInventoryComponent", "RemoteInventoryAllowRepairingItems"))((DWORD64)this, a1, a2); }
	void ServerViewRemoteInventory(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("UPrimalInventoryComponent", "ServerViewRemoteInventory"))((DWORD64)this, a1); }
	void ServerCloseRemoteInventory(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("UPrimalInventoryComponent", "ServerCloseRemoteInventory"))((DWORD64)this, a1); }
	bool ServerAddToArkTributeInventory(FItemNetID& a1, TArray<unsigned __int64, FDefaultAllocator> a2, FItemNetInfo* a3) { return static_cast<bool(_cdecl*)(DWORD64, FItemNetID&, TArray<unsigned __int64, FDefaultAllocator>, FItemNetInfo*)>(GetAddress("UPrimalInventoryComponent", "ServerAddToArkTributeInventory"))((DWORD64)this, a1, a2, a3); }
	bool ServerAddFromArkTributeInventory(FItemNetID& a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, FItemNetID&, int)>(GetAddress("UPrimalInventoryComponent", "ServerAddFromArkTributeInventory"))((DWORD64)this, a1, a2); }
	UPrimalItem* AddAfterRemovingFromArkTributeInventory(UPrimalItem* a1, const FItemNetInfo& a2) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, UPrimalItem*, const FItemNetInfo&)>(GetAddress("UPrimalInventoryComponent", "AddAfterRemovingFromArkTributeInventory"))((DWORD64)this, a1, a2); }
	void ServerCraftItem(FItemNetID& a1, AShooterPlayerController* a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID&, AShooterPlayerController*)>(GetAddress("UPrimalInventoryComponent", "ServerCraftItem"))((DWORD64)this, a1, a2); }
	void ServerAddItemToSlot(FItemNetID a1, int a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID, int)>(GetAddress("UPrimalInventoryComponent", "ServerAddItemToSlot"))((DWORD64)this, a1, a2); }
	void ServerRemoveItemFromSlot(FItemNetID a1) { static_cast<void(_cdecl*)(DWORD64, FItemNetID)>(GetAddress("UPrimalInventoryComponent", "ServerRemoveItemFromSlot"))((DWORD64)this, a1); }
	void ServerSplitItemStack(FItemNetID a1, int a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID, int)>(GetAddress("UPrimalInventoryComponent", "ServerSplitItemStack"))((DWORD64)this, a1, a2); }
	void ServerMergeItemStack(FItemNetID a1) { static_cast<void(_cdecl*)(DWORD64, FItemNetID)>(GetAddress("UPrimalInventoryComponent", "ServerMergeItemStack"))((DWORD64)this, a1); }
	void ServerForceMergeItemStack(FItemNetID a1, FItemNetID a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID, FItemNetID)>(GetAddress("UPrimalInventoryComponent", "ServerForceMergeItemStack"))((DWORD64)this, a1, a2); }
	void RemoteDeleteCustomFolder(const FString& a1, int a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, int)>(GetAddress("UPrimalInventoryComponent", "RemoteDeleteCustomFolder"))((DWORD64)this, a1, a2); }
	void RemoteAddItemToCustomFolder(const FString& a1, int a2, FItemNetID a3) { static_cast<void(_cdecl*)(DWORD64, const FString&, int, FItemNetID)>(GetAddress("UPrimalInventoryComponent", "RemoteAddItemToCustomFolder"))((DWORD64)this, a1, a2, a3); }
	void RemoteDeleteItemFromCustomFolder(AShooterPlayerController* a1, const FString& a2, int a3, FItemNetID a4) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*, const FString&, int, FItemNetID)>(GetAddress("UPrimalInventoryComponent", "RemoteDeleteItemFromCustomFolder"))((DWORD64)this, a1, a2, a3, a4); }
	void SetEquippedItemsOwnerNoSee(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("UPrimalInventoryComponent", "SetEquippedItemsOwnerNoSee"))((DWORD64)this, a1, a2); }
	FString* GetInventoryName(FString* res, bool a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, bool)>(GetAddress("UPrimalInventoryComponent", "GetInventoryName"))((DWORD64)this, res, a1); }
	UPrimalItem* GetEquippedItemOfType(EPrimalEquipmentType_Type a1) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, EPrimalEquipmentType_Type)>(GetAddress("UPrimalInventoryComponent", "GetEquippedItemOfType"))((DWORD64)this, a1); }
	void LocalUseItemSlot(int a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, int, bool)>(GetAddress("UPrimalInventoryComponent", "LocalUseItemSlot"))((DWORD64)this, a1, a2); }
	//bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, int)>(GetAddress("UPrimalInventoryComponent", "OverrideBlueprintCraftingRequirement"))((DWORD64)this, a1, a2); }
	//bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, int)>(GetAddress("UPrimalInventoryComponent", "AllowCraftingResourceConsumption"))((DWORD64)this, a1, a2); }
	//int GetItemTemplateQuantity(TSubclassOf<UPrimalItem> a1, UPrimalItem* a2, bool a3, bool a4, bool a5) { return static_cast<int(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, UPrimalItem*, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "GetItemTemplateQuantity"))((DWORD64)this, a1, a2, a3, a4, a5); }
	//int IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> a1, int a2, bool a3, bool a4, UPrimalItem** a5, UPrimalItem** a6, bool a7, bool a8, bool a9, bool a10, bool a11) { return static_cast<int(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, int, bool, bool, UPrimalItem**, UPrimalItem**, bool, bool, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "IncrementItemTemplateQuantity"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
	//UPrimalItem* GetItemOfTemplate(TSubclassOf<UPrimalItem> a1, bool a2, bool a3, bool a4, bool a5, bool a6, UPrimalItem* a7, bool a8, int* a9, bool a10, bool a11, bool a12, bool a13) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, UPrimalItem*, bool, int*, bool, bool, bool, bool)>(GetAddress("UPrimalInventoryComponent", "GetItemOfTemplate"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); }
	//float GetTotalEquippedItemStat(EPrimalItemStat::Type a1) { return static_cast<float(_cdecl*)(DWORD64, EPrimalItemStat::Type)>(GetAddress("UPrimalInventoryComponent", "GetTotalEquippedItemStat"))((DWORD64)this, a1); }
	//float GetEquippedArmorRating(EPrimalEquipmentType::Type a1) { return static_cast<float(_cdecl*)(DWORD64, EPrimalEquipmentType::Type)>(GetAddress("UPrimalInventoryComponent", "GetEquippedArmorRating"))((DWORD64)this, a1); }
	void ConsumeArmorDurability(float a1, bool a2, EPrimalEquipmentType_Type a3) { static_cast<void(_cdecl*)(DWORD64, float, bool, EPrimalEquipmentType_Type)>(GetAddress("UPrimalInventoryComponent", "ConsumeArmorDurability"))((DWORD64)this, a1, a2, a3); }
	void AddItemCrafting(UPrimalItem* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "AddItemCrafting"))((DWORD64)this, a1); }
	void RemoveItemCrafting(UPrimalItem* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "RemoveItemCrafting"))((DWORD64)this, a1); }
	float GetCraftingSpeed() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "GetCraftingSpeed"))((DWORD64)this); }
	void ServerRepairItem(FItemNetID& a1, AShooterPlayerController* a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID&, AShooterPlayerController*)>(GetAddress("UPrimalInventoryComponent", "ServerRepairItem"))((DWORD64)this, a1, a2); }
	bool IsLocal() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "IsLocal"))((DWORD64)this); }
	void CheckForAutoCraftBlueprints() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "CheckForAutoCraftBlueprints"))((DWORD64)this); }
	void SetCraftingEnabled(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalInventoryComponent", "SetCraftingEnabled"))((DWORD64)this, a1); }
	bool IsCraftingAllowed(UPrimalItem* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "IsCraftingAllowed"))((DWORD64)this, a1); }
	float GetInventoryWeight() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "GetInventoryWeight"))((DWORD64)this); }
	void OnRegister() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "OnRegister"))((DWORD64)this); }
	//UPrimalItem* FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem> a1, bool a2, UPrimalItem* a3) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, bool, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "FindInventoryStackableItemCompareQuantity"))((DWORD64)this, a1, a2, a3); }
	UPrimalCharacterStatusComponent* GetCharacterStatusComponent() { return static_cast<UPrimalCharacterStatusComponent*(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "GetCharacterStatusComponent"))((DWORD64)this); }
	void ServerUseInventoryItem(FItemNetID& a1, AShooterPlayerController* a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID&, AShooterPlayerController*)>(GetAddress("UPrimalInventoryComponent", "ServerUseInventoryItem"))((DWORD64)this, a1, a2); }
	void SwapInventoryItems(FItemNetID& a1, FItemNetID& a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID&, FItemNetID&)>(GetAddress("UPrimalInventoryComponent", "SwapInventoryItems"))((DWORD64)this, a1, a2); }
	void InventoryRefresh() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "InventoryRefresh"))((DWORD64)this); }
	void ActivePlayerInventoryTick(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UPrimalInventoryComponent", "ActivePlayerInventoryTick"))((DWORD64)this, a1); }
	float GetSpoilingTimeMultiplier(UPrimalItem* a1) { return static_cast<float(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "GetSpoilingTimeMultiplier"))((DWORD64)this, a1); }
	void ServerUseItemWithItem(const FItemNetID& a1, const FItemNetID& a2, int a3) { static_cast<void(_cdecl*)(DWORD64, const FItemNetID&, const FItemNetID&, int)>(GetAddress("UPrimalInventoryComponent", "ServerUseItemWithItem"))((DWORD64)this, a1, a2, a3); }
	void UsedItem(UPrimalItem* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "UsedItem"))((DWORD64)this, a1); }
	void RegisterComponentTickFunctions(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("UPrimalInventoryComponent", "RegisterComponentTickFunctions"))((DWORD64)this, a1, a2); }
	void ClearCraftQueue() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "ClearCraftQueue"))((DWORD64)this); }
	void UpdatedCraftQueue() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "UpdatedCraftQueue"))((DWORD64)this); }
	void StopAllCraftingRepairing() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "StopAllCraftingRepairing"))((DWORD64)this); }
	void AddToCraftQueue(UPrimalItem* a1, AShooterPlayerController* a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, AShooterPlayerController*, bool)>(GetAddress("UPrimalInventoryComponent", "AddToCraftQueue"))((DWORD64)this, a1, a2, a3); }
	void LoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "LoadedFromSaveGame"))((DWORD64)this); }
	bool IsOwnedByPlayer() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "IsOwnedByPlayer"))((DWORD64)this); }
	//bool DropInventoryDeposit(double a1, bool a2, bool a3, TSubclassOf<APrimalStructureItemContainer> a4, APrimalStructureItemContainer* a5, APrimalStructureItemContainer** a6, AActor* a7, FString a8, FString a9) { return static_cast<bool(_cdecl*)(DWORD64, double, bool, bool, TSubclassOf<APrimalStructureItemContainer>, APrimalStructureItemContainer*, APrimalStructureItemContainer**, AActor*, FString, FString)>(GetAddress("UPrimalInventoryComponent", "DropInventoryDeposit"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
	//float GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem> a1) { return static_cast<float(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>)>(GetAddress("UPrimalInventoryComponent", "GetTotalDurabilityOfTemplate"))((DWORD64)this, a1); }
	bool AllowAddInventoryItem(UPrimalItem* a1, int* a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*, int*, bool)>(GetAddress("UPrimalInventoryComponent", "AllowAddInventoryItem"))((DWORD64)this, a1, a2, a3); }
	void RefreshItemSpoilingTimes() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "RefreshItemSpoilingTimes"))((DWORD64)this); }
	bool GenerateCrateItems(float a1, float a2, int a3, float a4, float a5, float a6) { return static_cast<bool(_cdecl*)(DWORD64, float, float, int, float, float, float)>(GetAddress("UPrimalInventoryComponent", "GenerateCrateItems"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	//void CheckReplenishSlotIndex(int a1, TSubclassOf<UPrimalItem> a2) { static_cast<void(_cdecl*)(DWORD64, int, TSubclassOf<UPrimalItem>)>(GetAddress("UPrimalInventoryComponent", "CheckReplenishSlotIndex"))((DWORD64)this, a1, a2); }
	//int GetCraftQueueResourceCost(TSubclassOf<UPrimalItem> a1, UPrimalItem* a2) { return static_cast<int(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "GetCraftQueueResourceCost"))((DWORD64)this, a1, a2); }
	void CheckRefreshDefaultInventoryItems() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "CheckRefreshDefaultInventoryItems"))((DWORD64)this); }
	bool AllowEquippingItemType(EPrimalEquipmentType_Type a1) { return static_cast<bool(_cdecl*)(DWORD64, EPrimalEquipmentType_Type)>(GetAddress("UPrimalInventoryComponent", "AllowEquippingItemType"))((DWORD64)this, a1); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "GetDamageTorpidityIncreaseMultiplierScale"))((DWORD64)this); }
	float GetItemWeightMultiplier(UPrimalItem* a1) { return static_cast<float(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "GetItemWeightMultiplier"))((DWORD64)this, a1); }
	void UpdateTribeGroupInventoryRank(unsigned char a1) { static_cast<void(_cdecl*)(DWORD64, unsigned char)>(GetAddress("UPrimalInventoryComponent", "UpdateTribeGroupInventoryRank"))((DWORD64)this, a1); }
	float OverrideItemMinimumUseInterval(const UPrimalItem* a1) { return static_cast<float(_cdecl*)(DWORD64, const UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "OverrideItemMinimumUseInterval"))((DWORD64)this, a1); }
	UPrimalItem* BPFindItemWithID(int a1, int a2) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, int, int)>(GetAddress("UPrimalInventoryComponent", "BPFindItemWithID"))((DWORD64)this, a1, a2); }
	bool IsValidCraftingResource(UPrimalItem* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "IsValidCraftingResource"))((DWORD64)this, a1); }
	void RemoveItemSpoilingTimer(UPrimalItem* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalInventoryComponent", "RemoveItemSpoilingTimer"))((DWORD64)this, a1); }
	bool LoadAdditionalStructureEngrams() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalInventoryComponent", "LoadAdditionalStructureEngrams"))((DWORD64)this); }
};

struct UPrimalItem
{
	void SetDinoAutoHealingThresholdPercent(float a0) { *(float*)GetAddress(this, "UPrimalItem", "DinoAutoHealingThresholdPercent") = a0; };
	float GetDinoAutoHealingThresholdPercent() const { return *(float*)GetAddress(this, "UPrimalItem", "DinoAutoHealingThresholdPercent"); };
	void SetDinoAutoHealingUseTimeInterval(float a0) { *(float*)GetAddress(this, "UPrimalItem", "DinoAutoHealingUseTimeInterval") = a0; };
	float GetDinoAutoHealingUseTimeInterval() const { return *(float*)GetAddress(this, "UPrimalItem", "DinoAutoHealingUseTimeInterval"); };
	void SetArkTributeVersion(int a0) { *(int*)GetAddress(this, "UPrimalItem", "ArkTributeVersion") = a0; };
	int GetArkTributeVersion() const { return *(int*)GetAddress(this, "UPrimalItem", "ArkTributeVersion"); };
	void SetEquipRequiresExplicitOwnerTags(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "EquipRequiresExplicitOwnerTags") = a0; };
	TArray<FName, FDefaultAllocator> GetEquipRequiresExplicitOwnerTags() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "EquipRequiresExplicitOwnerTags"); };
	void SetExpirationTimeUTC(unsigned int a0) { *(unsigned int*)GetAddress(this, "UPrimalItem", "ExpirationTimeUTC") = a0; };
	unsigned int GetExpirationTimeUTC() const { return *(unsigned int*)GetAddress(this, "UPrimalItem", "ExpirationTimeUTC"); };
	void SetBlueprintAllowMaxCraftings(int a0) { *(int*)GetAddress(this, "UPrimalItem", "BlueprintAllowMaxCraftings") = a0; };
	int GetBlueprintAllowMaxCraftings() const { return *(int*)GetAddress(this, "UPrimalItem", "BlueprintAllowMaxCraftings"); };
	void SetAbstractItemCraftingDescription(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "AbstractItemCraftingDescription") = a0; };
	FString GetAbstractItemCraftingDescription() const { return *(FString*)GetAddress(this, "UPrimalItem", "AbstractItemCraftingDescription"); };
	//void SetItemSkinUseOnItemClasses(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "ItemSkinUseOnItemClasses") = a0; };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetItemSkinUseOnItemClasses() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "ItemSkinUseOnItemClasses"); };
	void SetRandomChanceToBeBlueprint(float a0) { *(float*)GetAddress(this, "UPrimalItem", "RandomChanceToBeBlueprint") = a0; };
	float GetRandomChanceToBeBlueprint() const { return *(float*)GetAddress(this, "UPrimalItem", "RandomChanceToBeBlueprint"); };

	/*void SetActorClassAttachmentInfos(TArray<FActorClassAttachmentInfo, FDefaultAllocator> a0) { *(TArray<FActorClassAttachmentInfo, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "ActorClassAttachmentInfos") = a0; };
	TArray<FActorClassAttachmentInfo, FDefaultAllocator> GetActorClassAttachmentInfos() const { return *(TArray<FActorClassAttachmentInfo, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "ActorClassAttachmentInfos"); };
	void SetItemAttachmentInfos(TArray<FItemAttachmentInfo, FDefaultAllocator>* a0) { *(TArray<FItemAttachmentInfo, FDefaultAllocator>**)GetAddress(this, "UPrimalItem", "ItemAttachmentInfos") = a0; };
	TArray<FItemAttachmentInfo, FDefaultAllocator>* GetItemAttachmentInfos() const { return *(TArray<FItemAttachmentInfo, FDefaultAllocator>**)GetAddress(this, "UPrimalItem", "ItemAttachmentInfos"); };
	void SetDynamicItemAttachmentInfos(TArray<FItemAttachmentInfo, FDefaultAllocator> a0) { *(TArray<FItemAttachmentInfo, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "DynamicItemAttachmentInfos") = a0; };
	TArray<FItemAttachmentInfo, FDefaultAllocator> GetDynamicItemAttachmentInfos() const { return *(TArray<FItemAttachmentInfo, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "DynamicItemAttachmentInfos"); };
	void SetItemSkinAddItemAttachments(TArray<FItemAttachmentInfo, FDefaultAllocator> a0) { *(TArray<FItemAttachmentInfo, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "ItemSkinAddItemAttachments") = a0; };
	TArray<FItemAttachmentInfo, FDefaultAllocator> GetItemSkinAddItemAttachments() const { return *(TArray<FItemAttachmentInfo, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "ItemSkinAddItemAttachments"); };
*/
	TEnumAsByte<enum EPrimalItemType> GetMyItemType() const { return *(TEnumAsByte<enum EPrimalItemType>*)GetAddress(this, "UPrimalItem", "MyItemType"); };
	//TEnumAsByte<enum EPrimalConsumableType> GetMyConsumableType() const { return *(TEnumAsByte<enum EPrimalConsumableType>*)GetAddress(this, "UPrimalItem", "MyConsumableType"); };
	TEnumAsByte<enum EPrimalEquipmentType> GetMyEquipmentType() const { return *(TEnumAsByte<enum EPrimalEquipmentType>*)GetAddress(this, "UPrimalItem", "MyEquipmentType"); };
	void SetExtraItemCategoryFlags(int a0) { *(int*)GetAddress(this, "UPrimalItem", "ExtraItemCategoryFlags") = a0; };
	int GetExtraItemCategoryFlags() const { return *(int*)GetAddress(this, "UPrimalItem", "ExtraItemCategoryFlags"); };
	void SetBlockingShieldFPVTranslation(FVector a0) { *(FVector*)GetAddress(this, "UPrimalItem", "BlockingShieldFPVTranslation") = a0; };
	FVector GetBlockingShieldFPVTranslation() const { return *(FVector*)GetAddress(this, "UPrimalItem", "BlockingShieldFPVTranslation"); };
	void SetBlockingShieldFPVRotation(FRotator a0) { *(FRotator*)GetAddress(this, "UPrimalItem", "BlockingShieldFPVRotation") = a0; };
	FRotator GetBlockingShieldFPVRotation() const { return *(FRotator*)GetAddress(this, "UPrimalItem", "BlockingShieldFPVRotation"); };
	void SetShieldBlockDamagePercentage(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ShieldBlockDamagePercentage") = a0; };
	float GetShieldBlockDamagePercentage() const { return *(float*)GetAddress(this, "UPrimalItem", "ShieldBlockDamagePercentage"); };
	void SetShieldDamageToDurabilityRatio(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ShieldDamageToDurabilityRatio") = a0; };
	float GetShieldDamageToDurabilityRatio() const { return *(float*)GetAddress(this, "UPrimalItem", "ShieldDamageToDurabilityRatio"); };
	void SetCraftingMinLevelRequirement(int a0) { *(int*)GetAddress(this, "UPrimalItem", "CraftingMinLevelRequirement") = a0; };
	int GetCraftingMinLevelRequirement() const { return *(int*)GetAddress(this, "UPrimalItem", "CraftingMinLevelRequirement"); };
	void SetCraftingCooldownInterval(float a0) { *(float*)GetAddress(this, "UPrimalItem", "CraftingCooldownInterval") = a0; };
	float GetCraftingCooldownInterval() const { return *(float*)GetAddress(this, "UPrimalItem", "CraftingCooldownInterval"); };
	void SetCraftItemButtonStringOverride(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "CraftItemButtonStringOverride") = a0; };
	FString GetCraftItemButtonStringOverride() const { return *(FString*)GetAddress(this, "UPrimalItem", "CraftItemButtonStringOverride"); };
	void SetUseSpawnActorLocOffset(FVector a0) { *(FVector*)GetAddress(this, "UPrimalItem", "UseSpawnActorLocOffset") = a0; };
	FVector GetUseSpawnActorLocOffset() const { return *(FVector*)GetAddress(this, "UPrimalItem", "UseSpawnActorLocOffset"); };
	void SetSlotIndex(int a0) { *(int*)GetAddress(this, "UPrimalItem", "SlotIndex") = a0; };
	int GetSlotIndex() const { return *(int*)GetAddress(this, "UPrimalItem", "SlotIndex"); };
	FItemNetID GetItemID() const { return *(FItemNetID*)GetAddress(this, "UPrimalItem", "ItemID"); };
	void SetItemCustomData(int a0) { *(int*)GetAddress(this, "UPrimalItem", "ItemCustomData") = a0; };
	int GetItemCustomData() const { return *(int*)GetAddress(this, "UPrimalItem", "ItemCustomData"); };
	//TSubclassOf<UPrimalItem> GetItemSkinTemplate() const { return *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "ItemSkinTemplate"); };
	void SetItemRating(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ItemRating") = a0; };
	float GetItemRating() const { return *(float*)GetAddress(this, "UPrimalItem", "ItemRating"); };
	void SetCraftQueue(unsigned short a0) { *(unsigned short*)GetAddress(this, "UPrimalItem", "CraftQueue") = a0; };
	unsigned short GetCraftQueue() const { return *(unsigned short*)GetAddress(this, "UPrimalItem", "CraftQueue"); };
	void SetCraftingSkill(float a0) { *(float*)GetAddress(this, "UPrimalItem", "CraftingSkill") = a0; };
	float GetCraftingSkill() const { return *(float*)GetAddress(this, "UPrimalItem", "CraftingSkill"); };
	void SetCustomItemName(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "CustomItemName") = a0; };
	FString GetCustomItemName() const { return *(FString*)GetAddress(this, "UPrimalItem", "CustomItemName"); };
	void SetCustomItemDescription(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "CustomItemDescription") = a0; };
	FString GetCustomItemDescription() const { return *(FString*)GetAddress(this, "UPrimalItem", "CustomItemDescription"); };
	void SetCustomColors(TArray<FColor, FDefaultAllocator> a0) { *(TArray<FColor, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CustomColors") = a0; };
	TArray<FColor, FDefaultAllocator> GetCustomColors() const { return *(TArray<FColor, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CustomColors"); };
	//void SetCustomResourceRequirements(TArray<FCraftingResourceRequirement, FDefaultAllocator> a0) { *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CustomResourceRequirements") = a0; };
	//TArray<FCraftingResourceRequirement, FDefaultAllocator> GetCustomResourceRequirements() const { return *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CustomResourceRequirements"); };
	void SetNextCraftCompletionTime(double a0) { *(double*)GetAddress(this, "UPrimalItem", "NextCraftCompletionTime") = a0; };
	double GetNextCraftCompletionTime() const { return *(double*)GetAddress(this, "UPrimalItem", "NextCraftCompletionTime"); };
	//TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr> GetOwnerInventory() const { return *(TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>*)GetAddress(this, "UPrimalItem", "OwnerInventory"); };
	void SetItemQualityIndex(unsigned char a0) { *(unsigned char*)GetAddress(this, "UPrimalItem", "ItemQualityIndex") = a0; };
	unsigned char GetItemQualityIndex() const { return *(unsigned char*)GetAddress(this, "UPrimalItem", "ItemQualityIndex"); };
	void SetIngredient_WeightIncreasePerQuantity(float a0) { *(float*)GetAddress(this, "UPrimalItem", "Ingredient_WeightIncreasePerQuantity") = a0; };
	float GetIngredient_WeightIncreasePerQuantity() const { return *(float*)GetAddress(this, "UPrimalItem", "Ingredient_WeightIncreasePerQuantity"); };
	void SetIngredient_FoodIncreasePerQuantity(float a0) { *(float*)GetAddress(this, "UPrimalItem", "Ingredient_FoodIncreasePerQuantity") = a0; };
	float GetIngredient_FoodIncreasePerQuantity() const { return *(float*)GetAddress(this, "UPrimalItem", "Ingredient_FoodIncreasePerQuantity"); };
	void SetIngredient_HealthIncreasePerQuantity(float a0) { *(float*)GetAddress(this, "UPrimalItem", "Ingredient_HealthIncreasePerQuantity") = a0; };
	float GetIngredient_HealthIncreasePerQuantity() const { return *(float*)GetAddress(this, "UPrimalItem", "Ingredient_HealthIncreasePerQuantity"); };
	void SetIngredient_WaterIncreasePerQuantity(float a0) { *(float*)GetAddress(this, "UPrimalItem", "Ingredient_WaterIncreasePerQuantity") = a0; };
	float GetIngredient_WaterIncreasePerQuantity() const { return *(float*)GetAddress(this, "UPrimalItem", "Ingredient_WaterIncreasePerQuantity"); };
	void SetIngredient_StaminaIncreasePerQuantity(float a0) { *(float*)GetAddress(this, "UPrimalItem", "Ingredient_StaminaIncreasePerQuantity") = a0; };
	float GetIngredient_StaminaIncreasePerQuantity() const { return *(float*)GetAddress(this, "UPrimalItem", "Ingredient_StaminaIncreasePerQuantity"); };
	void SetDescriptiveNameBase(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "DescriptiveNameBase") = a0; };
	FString GetDescriptiveNameBase() const { return *(FString*)GetAddress(this, "UPrimalItem", "DescriptiveNameBase"); };
	void SetItemDescription(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "ItemDescription") = a0; };
	FString GetItemDescription() const { return *(FString*)GetAddress(this, "UPrimalItem", "ItemDescription"); };
	void SetDurabilityStringShort(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "DurabilityStringShort") = a0; };
	FString GetDurabilityStringShort() const { return *(FString*)GetAddress(this, "UPrimalItem", "DurabilityStringShort"); };
	void SetDurabilityString(FString a0) { *(FString*)GetAddress(this, "UPrimalItem", "DurabilityString") = a0; };
	FString GetDurabilityString() const { return *(FString*)GetAddress(this, "UPrimalItem", "DurabilityString"); };
	void SetDroppedItemLifeSpanOverride(float a0) { *(float*)GetAddress(this, "UPrimalItem", "DroppedItemLifeSpanOverride") = a0; };
	float GetDroppedItemLifeSpanOverride() const { return *(float*)GetAddress(this, "UPrimalItem", "DroppedItemLifeSpanOverride"); };
	//void SetSpoilingItem(TSubclassOf<UPrimalItem> a0) { *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "SpoilingItem") = a0; };
	//TSubclassOf<UPrimalItem> GetSpoilingItem() const { return *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "SpoilingItem"); };
	//void SetUseRequiresOwnerActorClasses(TArray<TSubclassOf<AActor>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<AActor>, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "UseRequiresOwnerActorClasses") = a0; };
	//TArray<TSubclassOf<AActor>, FDefaultAllocator> GetUseRequiresOwnerActorClasses() const { return *(TArray<TSubclassOf<AActor>, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "UseRequiresOwnerActorClasses"); };
	//void SetPreservingItemClass(TSubclassOf<UPrimalItem> a0) { *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "PreservingItemClass") = a0; };
	//TSubclassOf<UPrimalItem> GetPreservingItemClass() const { return *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "PreservingItemClass"); };
	void SetPreservingItemSpoilingTimeMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "PreservingItemSpoilingTimeMultiplier") = a0; };
	float GetPreservingItemSpoilingTimeMultiplier() const { return *(float*)GetAddress(this, "UPrimalItem", "PreservingItemSpoilingTimeMultiplier"); };
	void SetSpoilingTime(float a0) { *(float*)GetAddress(this, "UPrimalItem", "SpoilingTime") = a0; };
	float GetSpoilingTime() const { return *(float*)GetAddress(this, "UPrimalItem", "SpoilingTime"); };
	void SetCraftingConsumesDurability(int a0) { *(int*)GetAddress(this, "UPrimalItem", "CraftingConsumesDurability") = a0; };
	int GetCraftingConsumesDurability() const { return *(int*)GetAddress(this, "UPrimalItem", "CraftingConsumesDurability"); };
	void SetRepairResourceRequirementMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "RepairResourceRequirementMultiplier") = a0; };
	float GetRepairResourceRequirementMultiplier() const { return *(float*)GetAddress(this, "UPrimalItem", "RepairResourceRequirementMultiplier"); };
	void SetBaseItemWeight(float a0) { *(float*)GetAddress(this, "UPrimalItem", "BaseItemWeight") = a0; };
	float GetBaseItemWeight() const { return *(float*)GetAddress(this, "UPrimalItem", "BaseItemWeight"); };
	void SetDurabilityIncreaseMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "DurabilityIncreaseMultiplier") = a0; };
	float GetDurabilityIncreaseMultiplier() const { return *(float*)GetAddress(this, "UPrimalItem", "DurabilityIncreaseMultiplier"); };
	void SetNewItemDurabilityOverride(float a0) { *(float*)GetAddress(this, "UPrimalItem", "NewItemDurabilityOverride") = a0; };
	float GetNewItemDurabilityOverride() const { return *(float*)GetAddress(this, "UPrimalItem", "NewItemDurabilityOverride"); };
	void SetDurabilityDecreaseMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "DurabilityDecreaseMultiplier") = a0; };
	float GetDurabilityDecreaseMultiplier() const { return *(float*)GetAddress(this, "UPrimalItem", "DurabilityDecreaseMultiplier"); };
	void SetUseDecreaseDurability(float a0) { *(float*)GetAddress(this, "UPrimalItem", "UseDecreaseDurability") = a0; };
	float GetUseDecreaseDurability() const { return *(float*)GetAddress(this, "UPrimalItem", "UseDecreaseDurability"); };
	void SetAutoDurabilityDecreaseInterval(float a0) { *(float*)GetAddress(this, "UPrimalItem", "AutoDurabilityDecreaseInterval") = a0; };
	float GetAutoDurabilityDecreaseInterval() const { return *(float*)GetAddress(this, "UPrimalItem", "AutoDurabilityDecreaseInterval"); };
	void SetAutoDecreaseMinDurability(float a0) { *(float*)GetAddress(this, "UPrimalItem", "AutoDecreaseMinDurability") = a0; };
	float GetAutoDecreaseMinDurability() const { return *(float*)GetAddress(this, "UPrimalItem", "AutoDecreaseMinDurability"); };
	void SetAutoDecreaseDurabilityAmountPerInterval(float a0) { *(float*)GetAddress(this, "UPrimalItem", "AutoDecreaseDurabilityAmountPerInterval") = a0; };
	float GetAutoDecreaseDurabilityAmountPerInterval() const { return *(float*)GetAddress(this, "UPrimalItem", "AutoDecreaseDurabilityAmountPerInterval"); };
	void SetUseDecreaseDurabilityMin(float a0) { *(float*)GetAddress(this, "UPrimalItem", "UseDecreaseDurabilityMin") = a0; };
	float GetUseDecreaseDurabilityMin() const { return *(float*)GetAddress(this, "UPrimalItem", "UseDecreaseDurabilityMin"); };
	void SetUseMinDurabilityRequirement(float a0) { *(float*)GetAddress(this, "UPrimalItem", "UseMinDurabilityRequirement") = a0; };
	float GetUseMinDurabilityRequirement() const { return *(float*)GetAddress(this, "UPrimalItem", "UseMinDurabilityRequirement"); };
	void SetResourceRarity(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ResourceRarity") = a0; };
	float GetResourceRarity() const { return *(float*)GetAddress(this, "UPrimalItem", "ResourceRarity"); };
	void SetBlueprintTimeToCraft(float a0) { *(float*)GetAddress(this, "UPrimalItem", "BlueprintTimeToCraft") = a0; };
	float GetBlueprintTimeToCraft() const { return *(float*)GetAddress(this, "UPrimalItem", "BlueprintTimeToCraft"); };
	void SetBlueprintWeight(float a0) { *(float*)GetAddress(this, "UPrimalItem", "BlueprintWeight") = a0; };
	float GetBlueprintWeight() const { return *(float*)GetAddress(this, "UPrimalItem", "BlueprintWeight"); };
	void SetMinimumUseInterval(float a0) { *(float*)GetAddress(this, "UPrimalItem", "MinimumUseInterval") = a0; };
	float GetMinimumUseInterval() const { return *(float*)GetAddress(this, "UPrimalItem", "MinimumUseInterval"); };
	void SetTimeForFullRepair(float a0) { *(float*)GetAddress(this, "UPrimalItem", "TimeForFullRepair") = a0; };
	float GetTimeForFullRepair() const { return *(float*)GetAddress(this, "UPrimalItem", "TimeForFullRepair"); };
	void SetBaseCraftingXP(float a0) { *(float*)GetAddress(this, "UPrimalItem", "BaseCraftingXP") = a0; };
	float GetBaseCraftingXP() const { return *(float*)GetAddress(this, "UPrimalItem", "BaseCraftingXP"); };
	void SetBaseRepairingXP(float a0) { *(float*)GetAddress(this, "UPrimalItem", "BaseRepairingXP") = a0; };
	float GetBaseRepairingXP() const { return *(float*)GetAddress(this, "UPrimalItem", "BaseRepairingXP"); };
	//void SetBaseCraftingResourceRequirements(TArray<FCraftingResourceRequirement, FDefaultAllocator> a0) { *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "BaseCraftingResourceRequirements") = a0; };
	//TArray<FCraftingResourceRequirement, FDefaultAllocator> GetBaseCraftingResourceRequirements() const { return *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "BaseCraftingResourceRequirements"); };
	//void SetOverrideRepairingRequirements(TArray<FCraftingResourceRequirement, FDefaultAllocator> a0) { *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "OverrideRepairingRequirements") = a0; };
	//TArray<FCraftingResourceRequirement, FDefaultAllocator> GetOverrideRepairingRequirements() const { return *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "OverrideRepairingRequirements"); };
	void SetWeaponClipAmmo(unsigned int a0) { *(unsigned int*)GetAddress(this, "UPrimalItem", "WeaponClipAmmo") = a0; };
	unsigned int GetWeaponClipAmmo() const { return *(unsigned int*)GetAddress(this, "UPrimalItem", "WeaponClipAmmo"); };
	void SetWeaponFrequency(float a0) { *(float*)GetAddress(this, "UPrimalItem", "WeaponFrequency") = a0; };
	float GetWeaponFrequency() const { return *(float*)GetAddress(this, "UPrimalItem", "WeaponFrequency"); };
	void SetLastTimeToShowInfo(double a0) { *(double*)GetAddress(this, "UPrimalItem", "LastTimeToShowInfo") = a0; };
	double GetLastTimeToShowInfo() const { return *(double*)GetAddress(this, "UPrimalItem", "LastTimeToShowInfo"); };
	void SetItemVersion(unsigned char a0) { *(unsigned char*)GetAddress(this, "UPrimalItem", "ItemVersion") = a0; };
	unsigned char GetItemVersion() const { return *(unsigned char*)GetAddress(this, "UPrimalItem", "ItemVersion"); };
	void SetItemDurability(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ItemDurability") = a0; };
	float GetItemDurability() const { return *(float*)GetAddress(this, "UPrimalItem", "ItemDurability"); };
	void SetMinItemDurability(float a0) { *(float*)GetAddress(this, "UPrimalItem", "MinItemDurability") = a0; };
	float GetMinItemDurability() const { return *(float*)GetAddress(this, "UPrimalItem", "MinItemDurability"); };
	void SetSavedDurability(float a0) { *(float*)GetAddress(this, "UPrimalItem", "SavedDurability") = a0; };
	float GetSavedDurability() const { return *(float*)GetAddress(this, "UPrimalItem", "SavedDurability"); };
	void SetAlternateItemIconBelowDurabilityValue(float a0) { *(float*)GetAddress(this, "UPrimalItem", "AlternateItemIconBelowDurabilityValue") = a0; };
	float GetAlternateItemIconBelowDurabilityValue() const { return *(float*)GetAddress(this, "UPrimalItem", "AlternateItemIconBelowDurabilityValue"); };
	void SetItemQuantity(int a0) { *(int*)GetAddress(this, "UPrimalItem", "ItemQuantity") = a0; };
	int GetItemQuantity() const { return *(int*)GetAddress(this, "UPrimalItem", "ItemQuantity"); };
	void SetMaxItemQuantity(int a0) { *(int*)GetAddress(this, "UPrimalItem", "MaxItemQuantity") = a0; };
	int GetMaxItemQuantity() const { return *(int*)GetAddress(this, "UPrimalItem", "MaxItemQuantity"); };
	void SetSteamItemUserIDs(TArray<unsigned __int64, FDefaultAllocator> a0) { *(TArray<unsigned __int64, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "SteamItemUserIDs") = a0; };
	TArray<unsigned __int64, FDefaultAllocator> GetSteamItemUserIDs() const { return *(TArray<unsigned __int64, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "SteamItemUserIDs"); };
	void SetWeaponAmmoOverrideItemCDO(UPrimalItem* a0) { *(UPrimalItem**)GetAddress(this, "UPrimalItem", "WeaponAmmoOverrideItemCDO") = a0; };
	UPrimalItem* GetWeaponAmmoOverrideItemCDO() const { return *(UPrimalItem**)GetAddress(this, "UPrimalItem", "WeaponAmmoOverrideItemCDO"); };
	void SetCreationTime(double a0) { *(double*)GetAddress(this, "UPrimalItem", "CreationTime") = a0; };
	double GetCreationTime() const { return *(double*)GetAddress(this, "UPrimalItem", "CreationTime"); };
	void SetLastAutoDurabilityDecreaseTime(double a0) { *(double*)GetAddress(this, "UPrimalItem", "LastAutoDurabilityDecreaseTime") = a0; };
	double GetLastAutoDurabilityDecreaseTime() const { return *(double*)GetAddress(this, "UPrimalItem", "LastAutoDurabilityDecreaseTime"); };
	void SetLastUseTime(double a0) { *(double*)GetAddress(this, "UPrimalItem", "LastUseTime") = a0; };
	double GetLastUseTime() const { return *(double*)GetAddress(this, "UPrimalItem", "LastUseTime"); };
	void SetLastLocalUseTime(double a0) { *(double*)GetAddress(this, "UPrimalItem", "LastLocalUseTime") = a0; };
	double GetLastLocalUseTime() const { return *(double*)GetAddress(this, "UPrimalItem", "LastLocalUseTime"); };
	void SetTempSlotIndex(int a0) { *(int*)GetAddress(this, "UPrimalItem", "TempSlotIndex") = a0; };
	int GetTempSlotIndex() const { return *(int*)GetAddress(this, "UPrimalItem", "TempSlotIndex"); };
	void SetMyItemSkin(UPrimalItem* a0) { *(UPrimalItem**)GetAddress(this, "UPrimalItem", "MyItemSkin") = a0; };
	UPrimalItem* GetMyItemSkin() const { return *(UPrimalItem**)GetAddress(this, "UPrimalItem", "MyItemSkin"); };
	//void SetCropPhasesData(TArray<FCropItemPhaseData, FDefaultAllocator> a0) { *(TArray<FCropItemPhaseData, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CropPhasesData") = a0; };
	//TArray<FCropItemPhaseData, FDefaultAllocator> GetCropPhasesData() const { return *(TArray<FCropItemPhaseData, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CropPhasesData"); };
	void SetCropGrowingFertilizerConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalItem", "CropGrowingFertilizerConsumptionRate") = a0; };
	float GetCropGrowingFertilizerConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalItem", "CropGrowingFertilizerConsumptionRate"); };
	void SetCropMaxFruitFertilizerConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalItem", "CropMaxFruitFertilizerConsumptionRate") = a0; };
	float GetCropMaxFruitFertilizerConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalItem", "CropMaxFruitFertilizerConsumptionRate"); };
	void SetCropGrowingWaterConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalItem", "CropGrowingWaterConsumptionRate") = a0; };
	float GetCropGrowingWaterConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalItem", "CropGrowingWaterConsumptionRate"); };
	void SetCropMaxFruitWaterConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalItem", "CropMaxFruitWaterConsumptionRate") = a0; };
	float GetCropMaxFruitWaterConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalItem", "CropMaxFruitWaterConsumptionRate"); };
	void SetCropMaxFruits(int a0) { *(int*)GetAddress(this, "UPrimalItem", "CropMaxFruits") = a0; };
	int GetCropMaxFruits() const { return *(int*)GetAddress(this, "UPrimalItem", "CropMaxFruits"); };
	void SetCropNoFertilizerOrWaterCacheReductionRate(float a0) { *(float*)GetAddress(this, "UPrimalItem", "CropNoFertilizerOrWaterCacheReductionRate") = a0; };
	float GetCropNoFertilizerOrWaterCacheReductionRate() const { return *(float*)GetAddress(this, "UPrimalItem", "CropNoFertilizerOrWaterCacheReductionRate"); };
	void SetFertilizerEffectivenessMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "FertilizerEffectivenessMultiplier") = a0; };
	float GetFertilizerEffectivenessMultiplier() const { return *(float*)GetAddress(this, "UPrimalItem", "FertilizerEffectivenessMultiplier"); };
	void SetEggAlertDinosAggroAmount(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggAlertDinosAggroAmount") = a0; };
	float GetEggAlertDinosAggroAmount() const { return *(float*)GetAddress(this, "UPrimalItem", "EggAlertDinosAggroAmount"); };
	void SetEggAlertDinosAggroRadius(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggAlertDinosAggroRadius") = a0; };
	float GetEggAlertDinosAggroRadius() const { return *(float*)GetAddress(this, "UPrimalItem", "EggAlertDinosAggroRadius"); };
	void SetEggAlertDinosAggroTags(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "EggAlertDinosAggroTags") = a0; };
	TArray<FName, FDefaultAllocator> GetEggAlertDinosAggroTags() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "EggAlertDinosAggroTags"); };
	void SetEggAlertDinosForcedAggroTime(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggAlertDinosForcedAggroTime") = a0; };
	float GetEggAlertDinosForcedAggroTime() const { return *(float*)GetAddress(this, "UPrimalItem", "EggAlertDinosForcedAggroTime"); };
	void SetEggMaximumDistanceFromOriginalDropToAlertDinos(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggMaximumDistanceFromOriginalDropToAlertDinos") = a0; };
	float GetEggMaximumDistanceFromOriginalDropToAlertDinos() const { return *(float*)GetAddress(this, "UPrimalItem", "EggMaximumDistanceFromOriginalDropToAlertDinos"); };
	//void SetBrokenGiveItemClass(TSubclassOf<UPrimalItem> a0) { *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "BrokenGiveItemClass") = a0; };
	//TSubclassOf<UPrimalItem> GetBrokenGiveItemClass() const { return *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "BrokenGiveItemClass"); };
	void SetClearColorDurabilityThreshold(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ClearColorDurabilityThreshold") = a0; };
	float GetClearColorDurabilityThreshold() const { return *(float*)GetAddress(this, "UPrimalItem", "ClearColorDurabilityThreshold"); };
	void SetOriginalItemDropLocation(FVector a0) { *(FVector*)GetAddress(this, "UPrimalItem", "OriginalItemDropLocation") = a0; };
	FVector GetOriginalItemDropLocation() const { return *(FVector*)GetAddress(this, "UPrimalItem", "OriginalItemDropLocation"); };
	void SetDurabilityBarColorForeground(FLinearColor a0) { *(FLinearColor*)GetAddress(this, "UPrimalItem", "DurabilityBarColorForeground") = a0; };
	FLinearColor GetDurabilityBarColorForeground() const { return *(FLinearColor*)GetAddress(this, "UPrimalItem", "DurabilityBarColorForeground"); };
	void SetDurabilityBarColorBackground(FLinearColor a0) { *(FLinearColor*)GetAddress(this, "UPrimalItem", "DurabilityBarColorBackground") = a0; };
	FLinearColor GetDurabilityBarColorBackground() const { return *(FLinearColor*)GetAddress(this, "UPrimalItem", "DurabilityBarColorBackground"); };
	//void SetOverrideCooldownTimeItemClass(TSubclassOf<UPrimalItem> a0) { *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "OverrideCooldownTimeItemClass") = a0; };
	//TSubclassOf<UPrimalItem> GetOverrideCooldownTimeItemClass() const { return *(TSubclassOf<UPrimalItem>*)GetAddress(this, "UPrimalItem", "OverrideCooldownTimeItemClass"); };
	void SetMinDurabilityForCraftingResource(float a0) { *(float*)GetAddress(this, "UPrimalItem", "MinDurabilityForCraftingResource") = a0; };
	float GetMinDurabilityForCraftingResource() const { return *(float*)GetAddress(this, "UPrimalItem", "MinDurabilityForCraftingResource"); };
	void SetResourceRequirementIncreaseRatingPower(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ResourceRequirementIncreaseRatingPower") = a0; };
	float GetResourceRequirementIncreaseRatingPower() const { return *(float*)GetAddress(this, "UPrimalItem", "ResourceRequirementIncreaseRatingPower"); };
	void SetResourceRequirementRatingScale(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ResourceRequirementRatingScale") = a0; };
	float GetResourceRequirementRatingScale() const { return *(float*)GetAddress(this, "UPrimalItem", "ResourceRequirementRatingScale"); };
	void SetResourceRequirementRatingIncreasePercentage(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ResourceRequirementRatingIncreasePercentage") = a0; };
	float GetResourceRequirementRatingIncreasePercentage() const { return *(float*)GetAddress(this, "UPrimalItem", "ResourceRequirementRatingIncreasePercentage"); };
	void SetNextSpoilingTime(double a0) { *(double*)GetAddress(this, "UPrimalItem", "NextSpoilingTime") = a0; };
	double GetNextSpoilingTime() const { return *(double*)GetAddress(this, "UPrimalItem", "NextSpoilingTime"); };
	void SetLastSpoilingTime(double a0) { *(double*)GetAddress(this, "UPrimalItem", "LastSpoilingTime") = a0; };
	double GetLastSpoilingTime() const { return *(double*)GetAddress(this, "UPrimalItem", "LastSpoilingTime"); };
	void SetDefaultFolderPaths(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "DefaultFolderPaths") = a0; };
	TArray<FString, FDefaultAllocator> GetDefaultFolderPaths() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "DefaultFolderPaths"); };
	void SetDefaultWeaponMeshName(FName a0) { *(FName*)GetAddress(this, "UPrimalItem", "DefaultWeaponMeshName") = a0; };
	FName GetDefaultWeaponMeshName() const { return *(FName*)GetAddress(this, "UPrimalItem", "DefaultWeaponMeshName"); };
	void SetLastCalculatedTotalAmmoInvUpdatedFrame(int a0) { *(int*)GetAddress(this, "UPrimalItem", "LastCalculatedTotalAmmoInvUpdatedFrame") = a0; };
	int GetLastCalculatedTotalAmmoInvUpdatedFrame() const { return *(int*)GetAddress(this, "UPrimalItem", "LastCalculatedTotalAmmoInvUpdatedFrame"); };
	void SetWeaponTotalAmmo(int a0) { *(int*)GetAddress(this, "UPrimalItem", "WeaponTotalAmmo") = a0; };
	int GetWeaponTotalAmmo() const { return *(int*)GetAddress(this, "UPrimalItem", "WeaponTotalAmmo"); };
	void SetCraftingResourceRequirements(TArray<unsigned short, FDefaultAllocator> a0) { *(TArray<unsigned short, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CraftingResourceRequirements") = a0; };
	TArray<unsigned short, FDefaultAllocator> GetCraftingResourceRequirements() const { return *(TArray<unsigned short, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CraftingResourceRequirements"); };
	void SetSpawnOnWaterEncroachmentBoxExtent(FVector a0) { *(FVector*)GetAddress(this, "UPrimalItem", "SpawnOnWaterEncroachmentBoxExtent") = a0; };
	FVector GetSpawnOnWaterEncroachmentBoxExtent() const { return *(FVector*)GetAddress(this, "UPrimalItem", "SpawnOnWaterEncroachmentBoxExtent"); };
	//void SetSaddlePassengerSeats(TArray<FSaddlePassengerSeatDefinition, FDefaultAllocator> a0) { *(TArray<FSaddlePassengerSeatDefinition, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "SaddlePassengerSeats") = a0; };
	//TArray<FSaddlePassengerSeatDefinition, FDefaultAllocator> GetSaddlePassengerSeats() const { return *(TArray<FSaddlePassengerSeatDefinition, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "SaddlePassengerSeats"); };
	void SetSaddleOverrideRiderSocketName(FName a0) { *(FName*)GetAddress(this, "UPrimalItem", "SaddleOverrideRiderSocketName") = a0; };
	FName GetSaddleOverrideRiderSocketName() const { return *(FName*)GetAddress(this, "UPrimalItem", "SaddleOverrideRiderSocketName"); };
	//void SetEggDinoClassToSpawn(TSubclassOf<APrimalDinoCharacter> a0) { *(TSubclassOf<APrimalDinoCharacter>*)GetAddress(this, "UPrimalItem", "EggDinoClassToSpawn") = a0; };
	//TSubclassOf<APrimalDinoCharacter> GetEggDinoClassToSpawn() const { return *(TSubclassOf<APrimalDinoCharacter>*)GetAddress(this, "UPrimalItem", "EggDinoClassToSpawn"); };
	void SetEggTamedIneffectivenessModifier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggTamedIneffectivenessModifier") = a0; };
	float GetEggTamedIneffectivenessModifier() const { return *(float*)GetAddress(this, "UPrimalItem", "EggTamedIneffectivenessModifier"); };
	void SetEggLoseDurabilityPerSecond(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggLoseDurabilityPerSecond") = a0; };
	float GetEggLoseDurabilityPerSecond() const { return *(float*)GetAddress(this, "UPrimalItem", "EggLoseDurabilityPerSecond"); };
	void SetExtraEggLoseDurabilityPerSecondMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "ExtraEggLoseDurabilityPerSecondMultiplier") = a0; };
	float GetExtraEggLoseDurabilityPerSecondMultiplier() const { return *(float*)GetAddress(this, "UPrimalItem", "ExtraEggLoseDurabilityPerSecondMultiplier"); };
	void SetEggMinTemperature(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggMinTemperature") = a0; };
	float GetEggMinTemperature() const { return *(float*)GetAddress(this, "UPrimalItem", "EggMinTemperature"); };
	void SetEggMaxTemperature(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggMaxTemperature") = a0; };
	float GetEggMaxTemperature() const { return *(float*)GetAddress(this, "UPrimalItem", "EggMaxTemperature"); };
	void SetEggDroppedInvalidTempLoseItemRatingSpeed(float a0) { *(float*)GetAddress(this, "UPrimalItem", "EggDroppedInvalidTempLoseItemRatingSpeed") = a0; };
	float GetEggDroppedInvalidTempLoseItemRatingSpeed() const { return *(float*)GetAddress(this, "UPrimalItem", "EggDroppedInvalidTempLoseItemRatingSpeed"); };
	void SetRecipeCraftingSkillScale(float a0) { *(float*)GetAddress(this, "UPrimalItem", "RecipeCraftingSkillScale") = a0; };
	float GetRecipeCraftingSkillScale() const { return *(float*)GetAddress(this, "UPrimalItem", "RecipeCraftingSkillScale"); };
	void SetCustomItemID(int a0) { *(int*)GetAddress(this, "UPrimalItem", "CustomItemID") = a0; };
	int GetCustomItemID() const { return *(int*)GetAddress(this, "UPrimalItem", "CustomItemID"); };
	void SetAddDinoTargetingRange(float a0) { *(float*)GetAddress(this, "UPrimalItem", "AddDinoTargetingRange") = a0; };
	float GetAddDinoTargetingRange() const { return *(float*)GetAddress(this, "UPrimalItem", "AddDinoTargetingRange"); };
	void SetDamageTorpidityArmorRating(float a0) { *(float*)GetAddress(this, "UPrimalItem", "DamageTorpidityArmorRating") = a0; };
	float GetDamageTorpidityArmorRating() const { return *(float*)GetAddress(this, "UPrimalItem", "DamageTorpidityArmorRating"); };
	void SetUseParticleEffectSocketName(FName a0) { *(FName*)GetAddress(this, "UPrimalItem", "UseParticleEffectSocketName") = a0; };
	FName GetUseParticleEffectSocketName() const { return *(FName*)GetAddress(this, "UPrimalItem", "UseParticleEffectSocketName"); };
	void SetUseGiveDinoTameAffinityPercent(float a0) { *(float*)GetAddress(this, "UPrimalItem", "UseGiveDinoTameAffinityPercent") = a0; };
	float GetUseGiveDinoTameAffinityPercent() const { return *(float*)GetAddress(this, "UPrimalItem", "UseGiveDinoTameAffinityPercent"); };
	//void SetCraftingAdditionalItemsToGive(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CraftingAdditionalItemsToGive") = a0; };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetCraftingAdditionalItemsToGive() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "UPrimalItem", "CraftingAdditionalItemsToGive"); };
	void SetLastValidItemVersion(int a0) { *(int*)GetAddress(this, "UPrimalItem", "LastValidItemVersion") = a0; };
	int GetLastValidItemVersion() const { return *(int*)GetAddress(this, "UPrimalItem", "LastValidItemVersion"); };
	void SetGlobalTameAffinityMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalItem", "GlobalTameAffinityMultiplier") = a0; };
	float GetGlobalTameAffinityMultiplier() const { return *(float*)GetAddress(this, "UPrimalItem", "GlobalTameAffinityMultiplier"); };
	void SetCraftingGiveItemCount(int a0) { *(int*)GetAddress(this, "UPrimalItem", "CraftingGiveItemCount") = a0; };
	int GetCraftingGiveItemCount() const { return *(int*)GetAddress(this, "UPrimalItem", "CraftingGiveItemCount"); };
	void SetCraftingGivesItemQuantityOverride(int a0) { *(int*)GetAddress(this, "UPrimalItem", "CraftingGivesItemQuantityOverride") = a0; };
	int GetCraftingGivesItemQuantityOverride() const { return *(int*)GetAddress(this, "UPrimalItem", "CraftingGivesItemQuantityOverride"); };
	void SetUseUnlocksEmoteName(FName a0) { *(FName*)GetAddress(this, "UPrimalItem", "UseUnlocksEmoteName") = a0; };
	FName GetUseUnlocksEmoteName() const { return *(FName*)GetAddress(this, "UPrimalItem", "UseUnlocksEmoteName"); };
	void SetClusterSpoilingTimeUTC(double a0) { *(double*)GetAddress(this, "UPrimalItem", "ClusterSpoilingTimeUTC") = a0; };
	double GetClusterSpoilingTimeUTC() const { return *(double*)GetAddress(this, "UPrimalItem", "ClusterSpoilingTimeUTC"); };
	void SetEggRandomMutationsFemale(int a0) { *(int*)GetAddress(this, "UPrimalItem", "EggRandomMutationsFemale") = a0; };
	int GetEggRandomMutationsFemale() const { return *(int*)GetAddress(this, "UPrimalItem", "EggRandomMutationsFemale"); };
	void SetEggRandomMutationsMale(int a0) { *(int*)GetAddress(this, "UPrimalItem", "EggRandomMutationsMale") = a0; };
	int GetEggRandomMutationsMale() const { return *(int*)GetAddress(this, "UPrimalItem", "EggRandomMutationsMale"); };

	// Functions

	int IncrementItemQuantity(int a1, bool a2, bool a3, bool a4, bool a5, bool a6) { return static_cast<int(_cdecl*)(DWORD64, int, bool, bool, bool, bool, bool)>(GetAddress("UPrimalItem", "IncrementItemQuantity"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	void UpdatedItem() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "UpdatedItem"))((DWORD64)this); }
	void EquippedItem() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "EquippedItem"))((DWORD64)this); }
	void AddedToInventory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "AddedToInventory"))((DWORD64)this); }
	void UnequippedItem() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "UnequippedItem"))((DWORD64)this); }
	FString* GetItemDescription(FString* res, bool a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, bool)>(GetAddress("UPrimalItem", "GetItemDescription"))((DWORD64)this, res, a1); }
	FString* GetItemName(FString* result, bool a1, bool a2) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, bool, bool)>(GetAddress("UPrimalItem", "GetItemName"))((DWORD64)this, result, a1, a2); }
	void AddToInventory(UPrimalInventoryComponent* a1, bool a2, bool a3, FItemNetID* a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, bool, bool, FItemNetID*, bool)>(GetAddress("UPrimalItem", "AddToInventory"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void AddToArkTributeInvenroty(UPrimalInventoryComponent* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, bool)>(GetAddress("UPrimalItem", "AddToArkTributeInvenroty"))((DWORD64)this, a1, a2); }
	bool AllowInventoryItem(UPrimalInventoryComponent* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "AllowInventoryItem"))((DWORD64)this, a1); }
	bool AllowEquipItem(UPrimalInventoryComponent* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "AllowEquipItem"))((DWORD64)this, a1); }
	bool AllowSlotting(UPrimalInventoryComponent* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*, bool)>(GetAddress("UPrimalItem", "AllowSlotting"))((DWORD64)this, a1, a2); }
	void InitNewItem(float a1, UPrimalInventoryComponent* a2, float a3) { static_cast<void(_cdecl*)(DWORD64, float, UPrimalInventoryComponent*, float)>(GetAddress("UPrimalItem", "InitNewItem"))((DWORD64)this, a1, a2, a3); }
	void InitFromNetInfo(const FItemNetInfo& a1) { static_cast<void(_cdecl*)(DWORD64, const FItemNetInfo&)>(GetAddress("UPrimalItem", "InitFromNetInfo"))((DWORD64)this, a1); }
	//FItemNetInfo GetItemNetInfo() { return static_cast<FItemNetInfo(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetItemNetInfo"))((DWORD64)this); }
	UPrimalItem* CreateItemFromNetInfo(const FItemNetInfo& a1) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, const FItemNetInfo&)>(GetAddress("UPrimalItem", "CreateItemFromNetInfo"))((DWORD64)this, a1); }
	//UPrimalItem* AddNewItem(TSubclassOf<UPrimalItem> a1, UPrimalInventoryComponent* a2, bool a3, bool a4, float a5, bool a6, int a7, bool a8, float a9, bool a10, TSubclassOf<UPrimalItem> a11) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>, UPrimalInventoryComponent*, bool, bool, float, bool, int, bool, float, bool, TSubclassOf<UPrimalItem>)>(GetAddress("UPrimalItem", "AddNewItem"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
	bool RemoveItemFromInventory(bool a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, bool, bool)>(GetAddress("UPrimalItem", "RemoveItemFromInventory"))((DWORD64)this, a1, a2); }
	bool RemoveItemFromArkTributeInventory() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "RemoveItemFromArkTributeInventory"))((DWORD64)this); }
	void SetOwnerNoSee(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("UPrimalItem", "SetOwnerNoSee"))((DWORD64)this, a1, a2); }
	void RemoveAttachments(AActor* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, AActor*, bool)>(GetAddress("UPrimalItem", "RemoveAttachments"))((DWORD64)this, a1, a2); }
	AActor* GetOwnerActor() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetOwnerActor"))((DWORD64)this); }
	bool AllowSubobjectInstancing() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "AllowSubobjectInstancing"))((DWORD64)this); }
	float GetItemWeight(bool a1, bool a2) { return static_cast<float(_cdecl*)(DWORD64, bool, bool)>(GetAddress("UPrimalItem", "GetItemWeight"))((DWORD64)this, a1, a2); }
	void AddToSlot(int a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, int, bool)>(GetAddress("UPrimalItem", "AddToSlot"))((DWORD64)this, a1, a2); }
	void RemoveFromSlot(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "RemoveFromSlot"))((DWORD64)this, a1); }
	int GetExplicitEntryIndexType() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetExplicitEntryIndexType"))((DWORD64)this); }
	void Use(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "Use"))((DWORD64)this, a1); }
	void LocalUse(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("UPrimalItem", "LocalUse"))((DWORD64)this, a1); }
	void UnequipWeapon(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "UnequipWeapon"))((DWORD64)this, a1); }
	FString* GetEntryDescription(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("UPrimalItem", "GetEntryDescription"))((DWORD64)this, res); }
	void InitializeItem(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "InitializeItem"))((DWORD64)this, a1); }
	int GetItemQuantity() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetItemQuantity"))((DWORD64)this); }
	FString GetMiscInfoString() { return static_cast<FString(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetMiscInfoString"))((DWORD64)this); }
	float GetMiscInfoFontScale() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetMiscInfoFontScale"))((DWORD64)this); }
	FString* GetItemTypeString(FString *result) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("UPrimalItem", "GetItemTypeString"))((DWORD64)this, result); }
	FString* GetItemSubtypeString(FString *result) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("UPrimalItem", "GetItemSubtypeString"))((DWORD64)this, result); }
	FString* GetItemStatsString(FString *result) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("UPrimalItem", "GetItemStatsString"))((DWORD64)this, result); }
	//float GetItemStatModifier(EPrimalItemStat::Type a1) { return static_cast<float(_cdecl*)(DWORD64, EPrimalItemStat::Type)>(GetAddress("UPrimalItem", "GetItemStatModifier"))((DWORD64)this, a1); }
	//FString GetItemStatString(EPrimalItemStat::Type a1) { return static_cast<FString(_cdecl*)(DWORD64, EPrimalItemStat::Type)>(GetAddress("UPrimalItem", "GetItemStatString"))((DWORD64)this, a1); }
	bool UsesDurability() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "UsesDurability"))((DWORD64)this); }
	float GetDurabilityPercentage() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetDurabilityPercentage"))((DWORD64)this); }
	void AddItemDurability(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UPrimalItem", "AddItemDurability"))((DWORD64)this, a1); }
	FString* GetCraftingRequirementsString(FString* res, UPrimalInventoryComponent* a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "GetCraftingRequirementsString"))((DWORD64)this, res, a1); }
	bool MeetBlueprintCraftingRequirements(UPrimalInventoryComponent* a1, int a2, AShooterPlayerController* a3, bool a4, bool a5) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*, int, AShooterPlayerController*, bool, bool)>(GetAddress("UPrimalItem", "MeetBlueprintCraftingRequirements"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void CraftBlueprint() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CraftBlueprint"))((DWORD64)this); }
	void GenerateItemID(FItemNetID& a1) { static_cast<void(_cdecl*)(DWORD64, FItemNetID&)>(GetAddress("UPrimalItem", "GenerateItemID"))((DWORD64)this, a1); }
	UPrimalItem* FinishCraftingBlueprint() { return static_cast<UPrimalItem*(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "FinishCraftingBlueprint"))((DWORD64)this); }
	float GetCraftingPercent() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetCraftingPercent"))((DWORD64)this); }
	void SetQuantity(int a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, int, bool)>(GetAddress("UPrimalItem", "SetQuantity"))((DWORD64)this, a1, a2); }
	bool CanRepair(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "CanRepair"))((DWORD64)this, a1); }
	bool CanCraft() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CanCraft"))((DWORD64)this); }
	bool MeetRepairingRequirements(UPrimalInventoryComponent* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*, bool)>(GetAddress("UPrimalItem", "MeetRepairingRequirements"))((DWORD64)this, a1, a2); }
	FString* GetRepairingRequirementsString(FString* res, UPrimalInventoryComponent* a1, bool a2, float a3) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, UPrimalInventoryComponent*, bool, float)>(GetAddress("UPrimalItem", "GetRepairingRequirementsString"))((DWORD64)this, res, a1, a2, a3); }
	void RepairItem() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "RepairItem"))((DWORD64)this); }
	void FinishRepairing() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "FinishRepairing"))((DWORD64)this); }
	float GetRepairingPercent() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetRepairingPercent"))((DWORD64)this); }
	bool CanUse(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "CanUse"))((DWORD64)this, a1); }
	void Used(UPrimalItem* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, int)>(GetAddress("UPrimalItem", "Used"))((DWORD64)this, a1, a2); }
	bool CanStackWithItem(UPrimalItem* a1, int* a2) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*, int*)>(GetAddress("UPrimalItem", "CanStackWithItem"))((DWORD64)this, a1, a2); }
	void StopCraftingRepairing(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "StopCraftingRepairing"))((DWORD64)this, a1); }
	bool CheckAutoCraftBlueprint() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CheckAutoCraftBlueprint"))((DWORD64)this); }
	float GetTimeToCraftBlueprint() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetTimeToCraftBlueprint"))((DWORD64)this); }
	float GetTimeForFullRepair() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetTimeForFullRepair"))((DWORD64)this); }
	bool IsBroken() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "IsBroken"))((DWORD64)this); }
	bool AllowUseInInventory(bool a1, AShooterPlayerController* a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, bool, AShooterPlayerController*, bool)>(GetAddress("UPrimalItem", "AllowUseInInventory"))((DWORD64)this, a1, a2, a3); }
	bool CanBeArkTributeItem() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CanBeArkTributeItem"))((DWORD64)this); }
	void SetEngramBlueprint() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "SetEngramBlueprint"))((DWORD64)this); }
	void ConsumeCraftingRequirementsPercent(UPrimalInventoryComponent* a1, float a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, float)>(GetAddress("UPrimalItem", "ConsumeCraftingRequirementsPercent"))((DWORD64)this, a1, a2); }
	bool TestMeetsCraftingRequirementsPercent(UPrimalInventoryComponent* a1, float a2) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*, float)>(GetAddress("UPrimalItem", "TestMeetsCraftingRequirementsPercent"))((DWORD64)this, a1, a2); }
	void InventoryRefreshCheckItem() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "InventoryRefreshCheckItem"))((DWORD64)this); }
	bool CanSpoil() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CanSpoil"))((DWORD64)this); }
	bool IsValidForCrafting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "IsValidForCrafting"))((DWORD64)this); }
	bool IsOwnerInWater() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "IsOwnerInWater"))((DWORD64)this); }
	bool AllowRemoteAddToInventory(UPrimalInventoryComponent* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "AllowRemoteAddToInventory"))((DWORD64)this, a1); }
	bool BPAllowRemoteAddToInventory(UPrimalInventoryComponent* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "BPAllowRemoteAddToInventory"))((DWORD64)this, a1); }
	bool CanDrop() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CanDrop"))((DWORD64)this); }
	float GetSpoilingTime() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetSpoilingTime"))((DWORD64)this); }
	void PickupAlertDinos(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("UPrimalItem", "PickupAlertDinos"))((DWORD64)this, a1); }
	void GetItemAttachmentInfos(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("UPrimalItem", "GetItemAttachmentInfos"))((DWORD64)this, a1); }
	void SetAttachedMeshesMaterialScalarParamValue(FName a1, float a2) { static_cast<void(_cdecl*)(DWORD64, FName, float)>(GetAddress("UPrimalItem", "SetAttachedMeshesMaterialScalarParamValue"))((DWORD64)this, a1, a2); }
	FLinearColor* GetColorForItemColorID(FLinearColor* res, int a1, int a2) { return static_cast<FLinearColor*(_cdecl*)(DWORD64, FLinearColor*, int, int)>(GetAddress("UPrimalItem", "GetColorForItemColorID"))((DWORD64)this, res, a1, a2); }
	FLinearColor* StaticGetColorForItemColorID(FLinearColor* res, int a1) { return static_cast<FLinearColor*(_cdecl*)(DWORD64, FLinearColor*, int)>(GetAddress("UPrimalItem", "StaticGetColorForItemColorID"))((DWORD64)this, res, a1); }
	void InitItemIcon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "InitItemIcon"))((DWORD64)this); }
	bool CanUseWithItemSource(UPrimalItem* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalItem", "CanUseWithItemSource"))((DWORD64)this, a1); }
	bool CanUseWithItemDestination(UPrimalItem* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("UPrimalItem", "CanUseWithItemDestination"))((DWORD64)this, a1); }
	bool UseItemOntoItem(UPrimalItem* a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalItem*, int)>(GetAddress("UPrimalItem", "UseItemOntoItem"))((DWORD64)this, a1, a2); }
	void LocalUseItemOntoItem(AShooterPlayerController* a1, UPrimalItem* a2) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*, UPrimalItem*)>(GetAddress("UPrimalItem", "LocalUseItemOntoItem"))((DWORD64)this, a1, a2); }
	FString* GetPrimaryColorName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("UPrimalItem", "GetPrimaryColorName"))((DWORD64)this, res); }
	void Serialize(FArchive& a1) { static_cast<void(_cdecl*)(DWORD64, FArchive&)>(GetAddress("UPrimalItem", "Serialize"))((DWORD64)this, a1); }
	void RemoveClipAmmo(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalItem", "RemoveClipAmmo"))((DWORD64)this, a1); }
	void ServerRemoveItemSkin() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "ServerRemoveItemSkin"))((DWORD64)this); }
	float GetRemainingCooldownTime() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetRemainingCooldownTime"))((DWORD64)this); }
	bool CanFullyCraft() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CanFullyCraft"))((DWORD64)this); }
	bool ProcessEditText(AShooterPlayerController* a1, const FString& a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, const FString&, bool)>(GetAddress("UPrimalItem", "ProcessEditText"))((DWORD64)this, a1, a2, a3); }
	void NotifyEditText(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("UPrimalItem", "NotifyEditText"))((DWORD64)this, a1); }
	void RecalcSpoilingTime(double a1, float a2, UPrimalInventoryComponent* a3) { static_cast<void(_cdecl*)(DWORD64, double, float, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "RecalcSpoilingTime"))((DWORD64)this, a1, a2, a3); }
	void RemoveWeaponAccessory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "RemoveWeaponAccessory"))((DWORD64)this); }
	int GetMaximumAdditionalCrafting(UPrimalInventoryComponent* a1) { return static_cast<int(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "GetMaximumAdditionalCrafting"))((DWORD64)this, a1); }
	bool CanSpawnOverWater(AActor* a1, FTransform& a2) { return static_cast<bool(_cdecl*)(DWORD64, AActor*, FTransform&)>(GetAddress("UPrimalItem", "CanSpawnOverWater"))((DWORD64)this, a1, a2); }
	void InventoryLoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "InventoryLoadedFromSaveGame"))((DWORD64)this); }
	void CalcRecipeStats() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "CalcRecipeStats"))((DWORD64)this); }
	float GetWeaponTemplateMeleeDamageAmount() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetWeaponTemplateMeleeDamageAmount"))((DWORD64)this); }
	float GetWeaponTemplateDurabilityToConsumePerMeleeHit() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetWeaponTemplateDurabilityToConsumePerMeleeHit"))((DWORD64)this); }
	float GetWeaponTemplateHarvestDamageMultiplier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "GetWeaponTemplateHarvestDamageMultiplier"))((DWORD64)this); }
	FString* BPAllowCrafting(FString* res, AShooterPlayerController* a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, AShooterPlayerController*)>(GetAddress("UPrimalItem", "BPAllowCrafting"))((DWORD64)this, res, a1); }
	bool BPCanAddToInventory(UPrimalInventoryComponent* a1) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("UPrimalItem", "BPCanAddToInventory"))((DWORD64)this, a1); }
	bool IsCooldownReadyForUse() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "IsCooldownReadyForUse"))((DWORD64)this); }
	bool IsUsableConsumable() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalItem", "IsUsableConsumable"))((DWORD64)this); }
};

struct FItemNetInfo
{
	FItemNetID GetItemID() const { return *(FItemNetID*)GetAddress(this, "FItemNetInfo", "ItemID"); };
	void SetExpirationTimeUTC(unsigned int a0) { *(unsigned int*)GetAddress(this, "FItemNetInfo", "ExpirationTimeUTC") = a0; };
	unsigned int GetExpirationTimeUTC() const { return *(unsigned int*)GetAddress(this, "FItemNetInfo", "ExpirationTimeUTC"); };
	void SetOwnerPlayerDataId(unsigned __int64 a0) { *(unsigned __int64*)GetAddress(this, "FItemNetInfo", "OwnerPlayerDataId") = a0; };
	unsigned __int64 GetOwnerPlayerDataId() const { return *(unsigned __int64*)GetAddress(this, "FItemNetInfo", "OwnerPlayerDataId"); };
	void SetSlotIndex(int a0) { *(int*)GetAddress(this, "FItemNetInfo", "SlotIndex") = a0; };
	int GetSlotIndex() const { return *(int*)GetAddress(this, "FItemNetInfo", "SlotIndex"); };
	void SetWeaponClipAmmo(unsigned int a0) { *(unsigned int*)GetAddress(this, "FItemNetInfo", "WeaponClipAmmo") = a0; };
	unsigned int GetWeaponClipAmmo() const { return *(unsigned int*)GetAddress(this, "FItemNetInfo", "WeaponClipAmmo"); };
	void SetCreationTime(double a0) { *(double*)GetAddress(this, "FItemNetInfo", "CreationTime") = a0; };
	double GetCreationTime() const { return *(double*)GetAddress(this, "FItemNetInfo", "CreationTime"); };
	void SetItemDurability(float a0) { *(float*)GetAddress(this, "FItemNetInfo", "ItemDurability") = a0; };
	float GetItemDurability() const { return *(float*)GetAddress(this, "FItemNetInfo", "ItemDurability"); };
	void SetItemRating(float a0) { *(float*)GetAddress(this, "FItemNetInfo", "ItemRating") = a0; };
	float GetItemRating() const { return *(float*)GetAddress(this, "FItemNetInfo", "ItemRating"); };
	void SetItemQualityIndex(unsigned char a0) { *(unsigned char*)GetAddress(this, "FItemNetInfo", "ItemQualityIndex") = a0; };
	unsigned char GetItemQualityIndex() const { return *(unsigned char*)GetAddress(this, "FItemNetInfo", "ItemQualityIndex"); };
	void SetItemQuantity(unsigned int a0) { *(unsigned int*)GetAddress(this, "FItemNetInfo", "ItemQuantity") = a0; };
	unsigned int GetItemQuantity() const { return *(unsigned int*)GetAddress(this, "FItemNetInfo", "ItemQuantity"); };
	void SetCraftQueue(unsigned short a0) { *(unsigned short*)GetAddress(this, "FItemNetInfo", "CraftQueue") = a0; };
	unsigned short GetCraftQueue() const { return *(unsigned short*)GetAddress(this, "FItemNetInfo", "CraftQueue"); };
	void SetNextCraftCompletionTime(double a0) { *(double*)GetAddress(this, "FItemNetInfo", "NextCraftCompletionTime") = a0; };
	double GetNextCraftCompletionTime() const { return *(double*)GetAddress(this, "FItemNetInfo", "NextCraftCompletionTime"); };
	void SetCraftingSkill(float a0) { *(float*)GetAddress(this, "FItemNetInfo", "CraftingSkill") = a0; };
	float GetCraftingSkill() const { return *(float*)GetAddress(this, "FItemNetInfo", "CraftingSkill"); };
	void SetCustomItemName(FString a0) { *(FString*)GetAddress(this, "FItemNetInfo", "CustomItemName") = a0; };
	FString GetCustomItemName() const { return *(FString*)GetAddress(this, "FItemNetInfo", "CustomItemName"); };
	void SetCustomItemDescription(FString a0) { *(FString*)GetAddress(this, "FItemNetInfo", "CustomItemDescription") = a0; };
	FString GetCustomItemDescription() const { return *(FString*)GetAddress(this, "FItemNetInfo", "CustomItemDescription"); };
	void SetCustomItemColors(TArray<FColor, FDefaultAllocator> a0) { *(TArray<FColor, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "CustomItemColors") = a0; };
	TArray<FColor, FDefaultAllocator> GetCustomItemColors() const { return *(TArray<FColor, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "CustomItemColors"); };
	//void SetCustomResourceRequirements(TArray<FCraftingResourceRequirement, FDefaultAllocator> a0) { *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "CustomResourceRequirements") = a0; };
	//TArray<FCraftingResourceRequirement, FDefaultAllocator> GetCustomResourceRequirements() const { return *(TArray<FCraftingResourceRequirement, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "CustomResourceRequirements"); };
	void SetNextSpoilingTime(double a0) { *(double*)GetAddress(this, "FItemNetInfo", "NextSpoilingTime") = a0; };
	double GetNextSpoilingTime() const { return *(double*)GetAddress(this, "FItemNetInfo", "NextSpoilingTime"); };
	void SetLastSpoilingTime(double a0) { *(double*)GetAddress(this, "FItemNetInfo", "LastSpoilingTime") = a0; };
	double GetLastSpoilingTime() const { return *(double*)GetAddress(this, "FItemNetInfo", "LastSpoilingTime"); };
	void SetLastAutoDurabilityDecreaseTime(double a0) { *(double*)GetAddress(this, "FItemNetInfo", "LastAutoDurabilityDecreaseTime") = a0; };
	double GetLastAutoDurabilityDecreaseTime() const { return *(double*)GetAddress(this, "FItemNetInfo", "LastAutoDurabilityDecreaseTime"); };
	void SetOriginalItemDropLocation(FVector a0) { *(FVector*)GetAddress(this, "FItemNetInfo", "OriginalItemDropLocation") = a0; };
	FVector GetOriginalItemDropLocation() const { return *(FVector*)GetAddress(this, "FItemNetInfo", "OriginalItemDropLocation"); };
	void SetEggTamedIneffectivenessModifier(float a0) { *(float*)GetAddress(this, "FItemNetInfo", "EggTamedIneffectivenessModifier") = a0; };
	float GetEggTamedIneffectivenessModifier() const { return *(float*)GetAddress(this, "FItemNetInfo", "EggTamedIneffectivenessModifier"); };
	void SetItemVersion(unsigned char a0) { *(unsigned char*)GetAddress(this, "FItemNetInfo", "ItemVersion") = a0; };
	unsigned char GetItemVersion() const { return *(unsigned char*)GetAddress(this, "FItemNetInfo", "ItemVersion"); };
	void SetCustomItemID(int a0) { *(int*)GetAddress(this, "FItemNetInfo", "CustomItemID") = a0; };
	int GetCustomItemID() const { return *(int*)GetAddress(this, "FItemNetInfo", "CustomItemID"); };
	void SetSteamUserItemID(TArray<unsigned __int64, FDefaultAllocator> a0) { *(TArray<unsigned __int64, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "SteamUserItemID") = a0; };
	TArray<unsigned __int64, FDefaultAllocator> GetSteamUserItemID() const { return *(TArray<unsigned __int64, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "SteamUserItemID"); };
	void SetClusterSpoilingTimeUTC(double a0) { *(double*)GetAddress(this, "FItemNetInfo", "ClusterSpoilingTimeUTC") = a0; };
	double GetClusterSpoilingTimeUTC() const { return *(double*)GetAddress(this, "FItemNetInfo", "ClusterSpoilingTimeUTC"); };
	//void SetEggDinoAncestors(TArray<FDinoAncestorsEntry, FDefaultAllocator> a0) { *(TArray<FDinoAncestorsEntry, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "EggDinoAncestors") = a0; };
	//TArray<FDinoAncestorsEntry, FDefaultAllocator> GetEggDinoAncestors() const { return *(TArray<FDinoAncestorsEntry, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "EggDinoAncestors"); };
	//void SetEggDinoAncestorsMale(TArray<FDinoAncestorsEntry, FDefaultAllocator> a0) { *(TArray<FDinoAncestorsEntry, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "EggDinoAncestorsMale") = a0; };
	//TArray<FDinoAncestorsEntry, FDefaultAllocator> GetEggDinoAncestorsMale() const { return *(TArray<FDinoAncestorsEntry, FDefaultAllocator>*)GetAddress(this, "FItemNetInfo", "EggDinoAncestorsMale"); };
	void SetEggRandomMutationsFemale(int a0) { *(int*)GetAddress(this, "FItemNetInfo", "EggRandomMutationsFemale") = a0; };
	int GetEggRandomMutationsFemale() const { return *(int*)GetAddress(this, "FItemNetInfo", "EggRandomMutationsFemale"); };
	void SetEggRandomMutationsMale(int a0) { *(int*)GetAddress(this, "FItemNetInfo", "EggRandomMutationsMale") = a0; };
	int GetEggRandomMutationsMale() const { return *(int*)GetAddress(this, "FItemNetInfo", "EggRandomMutationsMale"); };
};
