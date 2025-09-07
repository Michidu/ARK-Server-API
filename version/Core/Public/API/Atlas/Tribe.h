#pragma once

struct FTribeGovernment
{
	int& TribeGovern_PINCodeField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_PINCode"); }
	int& TribeGovern_DinoOwnershipField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_DinoOwnership"); }
	int& TribeGovern_StructureOwnershipField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_StructureOwnership"); }
	int& TribeGovern_DinoTamingField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_DinoTaming"); }
	int& TribeGovern_DinoUnclaimAdminOnlyField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_DinoUnclaimAdminOnly"); }

	// Functions

	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeGovernment.StaticStruct"); }
};

struct FTribeData
{
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeData.TribeName"); }
	long double& LastNameChangeTimeField() { return *GetNativePointerField<long double*>(this, "FTribeData.LastNameChangeTime"); }
	unsigned int& OwnerPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeData.OwnerPlayerDataID"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FTribeData.TribeID"); }
	TArray<FString>& MembersPlayerNameField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.MembersPlayerName"); }
	TArray<unsigned int>& MembersPlayerDataIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.MembersPlayerDataID"); }
	TArray<unsigned int>& MembersLastOnlineAtField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.MembersLastOnlineAt"); }
	TArray<unsigned char>& MembersRankGroupsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTribeData.MembersRankGroups"); }
	TArray<unsigned int>& TribeAdminsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.TribeAdmins"); }
	TArray<FTribeAlliance>& TribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance>*>(this, "FTribeData.TribeAlliances"); }
	bool& bSetGovernmentField() { return *GetNativePointerField<bool*>(this, "FTribeData.bSetGovernment"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "FTribeData.TribeGovernment"); }
	TArray<FPrimalPlayerCharacterConfigStruct>& MembersConfigsField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStruct>*>(this, "FTribeData.MembersConfigs"); }
	TArray<FTribeWar>& TribeWarsField() { return *GetNativePointerField<TArray<FTribeWar>*>(this, "FTribeData.TribeWars"); }
	TArray<FString>& TribeLogField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.TribeLog"); }
	int& LogIndexField() { return *GetNativePointerField<int*>(this, "FTribeData.LogIndex"); }
	TArray<FTribeRankGroup>& TribeRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup>*>(this, "FTribeData.TribeRankGroups"); }
	TArray<FTribeEntity>& TribeEntitiesField() { return *GetNativePointerField<TArray<FTribeEntity>*>(this, "FTribeData.TribeEntities"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& MembersPlayerDataIDSet_ServerField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "FTribeData.MembersPlayerDataIDSet_Server"); }
	bool& bMembersLoadedField() { return *GetNativePointerField<bool*>(this, "FTribeData.bMembersLoaded"); }
	FString& NotificationTopicIdentifierField() { return *GetNativePointerField<FString*>(this, "FTribeData.NotificationTopicIdentifier"); }
	int& ClaimFlagPaintingIdField() { return *GetNativePointerField<int*>(this, "FTribeData.ClaimFlagPaintingId"); }
	int& ClaimFlagPaintingRevisionField() { return *GetNativePointerField<int*>(this, "FTribeData.ClaimFlagPaintingRevision"); }
	TArray<short>& ClaimFlagStructureColorsField() { return *GetNativePointerField<TArray<short>*>(this, "FTribeData.ClaimFlagStructureColors"); }

	// Functions

	FTribeAlliance * FindTribeAlliance(unsigned int AllianceID) { return NativeCall<FTribeAlliance *, unsigned int>(this, "FTribeData.FindTribeAlliance", AllianceID); }
	int GetBestRankGroupForRank(int Rank) { return NativeCall<int, int>(this, "FTribeData.GetBestRankGroupForRank", Rank); }
	int GetDefaultRankGroupIndex() { return NativeCall<int>(this, "FTribeData.GetDefaultRankGroupIndex"); }
	FString * GetRankNameForPlayerID(FString * result, unsigned int PlayerDataID) { return NativeCall<FString *, FString *, unsigned int>(this, "FTribeData.GetRankNameForPlayerID", result, PlayerDataID); }
	long double GetSecondsSinceLastNameChange(UObject * WorldContextObject) { return NativeCall<long double, UObject *>(this, "FTribeData.GetSecondsSinceLastNameChange", WorldContextObject); }
	FString * GetTribeNameWithRankGroup(FString * result, unsigned int PlayerDataID) { return NativeCall<FString *, FString *, unsigned int>(this, "FTribeData.GetTribeNameWithRankGroup", result, PlayerDataID); }
	bool GetTribeRankGroupForPlayer(unsigned int PlayerDataID, FTribeRankGroup * outRankGroup) { return NativeCall<bool, unsigned int, FTribeRankGroup *>(this, "FTribeData.GetTribeRankGroupForPlayer", PlayerDataID, outRankGroup); }
	int GetTribeRankGroupIndexForPlayer(unsigned int PlayerDataID) { return NativeCall<int, unsigned int>(this, "FTribeData.GetTribeRankGroupIndexForPlayer", PlayerDataID); }
	bool HasTribeWarRequest(int TribeID, UWorld * ForWorld) { return NativeCall<bool, int, UWorld *>(this, "FTribeData.HasTribeWarRequest", TribeID, ForWorld); }
	bool IsTribeAlliedWith(unsigned int OtherTribeID) { return NativeCall<bool, unsigned int>(this, "FTribeData.IsTribeAlliedWith", OtherTribeID); }
	bool IsTribeWarActive(int TribeID, UWorld * ForWorld, bool bIncludeUnstarted) { return NativeCall<bool, int, UWorld *, bool>(this, "FTribeData.IsTribeWarActive", TribeID, ForWorld, bIncludeUnstarted); }
	void MarkTribeNameChanged(UObject * WorldContextObject) { NativeCall<void, UObject *>(this, "FTribeData.MarkTribeNameChanged", WorldContextObject); }
	void RefreshTribeWars(UWorld * ForWorld) { NativeCall<void, UWorld *>(this, "FTribeData.RefreshTribeWars", ForWorld); }
	FTribeData * operator=(FTribeData * __that) { return NativeCall<FTribeData *, FTribeData *>(this, "FTribeData.operator=", __that); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeData.StaticStruct"); }
};

struct FTribeWar
{
	int& EnemyTribeIDField() { return *GetNativePointerField<int*>(this, "FTribeWar.EnemyTribeID"); }
	int& StartDayNumberField() { return *GetNativePointerField<int*>(this, "FTribeWar.StartDayNumber"); }
	int& EndDayNumberField() { return *GetNativePointerField<int*>(this, "FTribeWar.EndDayNumber"); }
	float& StartDayTimeField() { return *GetNativePointerField<float*>(this, "FTribeWar.StartDayTime"); }
	float& EndDayTimeField() { return *GetNativePointerField<float*>(this, "FTribeWar.EndDayTime"); }
	bool& bIsApprovedField() { return *GetNativePointerField<bool*>(this, "FTribeWar.bIsApproved"); }
	int& InitiatingTribeIDField() { return *GetNativePointerField<int*>(this, "FTribeWar.InitiatingTribeID"); }
	FString& EnemyTribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeWar.EnemyTribeName"); }

	// Functions

	bool CanBeRejected(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.CanBeRejected", ForWorld); }
	FString * GetWarTimeString(FString * result, int DayNumber, float DayTime) { return NativeCall<FString *, FString *, int, float>(this, "FTribeWar.GetWarTimeString", result, DayNumber, DayTime); }
	bool HasWarStarted(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.HasWarStarted", ForWorld); }
	bool IsCurrentlyActive(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsCurrentlyActive", ForWorld); }
	bool IsTribeWarOn(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsTribeWarOn", ForWorld); }
	bool IsValidWar(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsValidWar", ForWorld); }
	bool operator==(FTribeWar * Other) { return NativeCall<bool, FTribeWar *>(this, "FTribeWar.operator==", Other); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeWar.StaticStruct"); }
};

struct FTribeRankGroup
{
	FString& RankGroupNameField() { return *GetNativePointerField<FString*>(this, "FTribeRankGroup.RankGroupName"); }
	char& RankGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.RankGroupRank"); }
	char& InventoryRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.InventoryRank"); }
	char& StructureActivationRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.StructureActivationRank"); }
	char& NewStructureActivationRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.NewStructureActivationRank"); }
	char& NewStructureInventoryRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.NewStructureInventoryRank"); }
	char& PetOrderRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.PetOrderRank"); }
	char& PetRidingRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.PetRidingRank"); }
	char& InviteToGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.InviteToGroupRank"); }
	char& MaxPromotionGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.MaxPromotionGroupRank"); }
	char& MaxDemotionGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.MaxDemotionGroupRank"); }
	char& MaxBanishmentGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.MaxBanishmentGroupRank"); }
	char& NumInvitesRemainingField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.NumInvitesRemaining"); }

	// Functions

	FTribeRankGroup * operator=(FTribeRankGroup * __that) { return NativeCall<FTribeRankGroup *, FTribeRankGroup *>(this, "FTribeRankGroup.operator=", __that); }
	void MakeNew() { NativeCall<void>(this, "FTribeRankGroup.MakeNew"); }
	void ValidateSettings() { NativeCall<void>(this, "FTribeRankGroup.ValidateSettings"); }
	bool operator==(FTribeRankGroup * Other) { return NativeCall<bool, FTribeRankGroup *>(this, "FTribeRankGroup.operator==", Other); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeRankGroup.StaticStruct"); }
};

struct FTribeAlliance
{
	FString& AllianceNameField() { return *GetNativePointerField<FString*>(this, "FTribeAlliance.AllianceName"); }
	unsigned int& AllianceIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeAlliance.AllianceID"); }
	TArray<FString>& MembersTribeNameField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeAlliance.MembersTribeName"); }
	TArray<unsigned int>& MembersTribeIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeAlliance.MembersTribeID"); }
	TArray<unsigned int>& AdminsTribeIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeAlliance.AdminsTribeID"); }

	// Functions

	FString * GetDescriptiveString(FString * result) { return NativeCall<FString *, FString *>(this, "FTribeAlliance.GetDescriptiveString", result); }
	bool operator==(FTribeAlliance * Other) { return NativeCall<bool, FTribeAlliance *>(this, "FTribeAlliance.operator==", Other); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeAlliance.StaticStruct"); }
};