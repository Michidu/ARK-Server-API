#pragma once

#include "API/UE/UE.h"
#include "API/UE/Containers/Map.h"

struct FSocket;

struct FIslandInfoGameplayValues
{
	int IslandId;
	FString SettlementOwnerName;
	FString SettlementFlagName;
	int CombatPhaseStartTime;
	int LastUTCTimeAdjustedCombatPhase;
	int NextWarTeam;
	int NextWarUTCTimeStart;
	int NextWarUTCTimeEnd;
	int SettledByTeam;
	float TaxRate;
	bool bIsContested;
	__int8 bIsSettlementCombat : 1;
	__int8 bIsWar : 1;
};

struct  FSeamlessIslandInfo
{
	int& IslandIdField() { return *GetNativePointerField<    int*>(this, "FSeamlessServerInfo.IslandId"); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> > & SpawnerOverridesField() { return *GetNativePointerField<	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "FSeamlessServerInfo.SpawnerOverrides"); }
	FString& IslandTreasureBottleSupplyCrateOverridesField() { return *GetNativePointerField<	FString*>(this, "FSeamlessServerInfo.IslandTreasureBottleSupplyCrateOverrides"); }
	unsigned int& ParentServerIdField() { return *GetNativePointerField<	unsigned int*>(this, "FSeamlessServerInfo.ParentServerId"); }
	FVector& GlobalLocationField() { return *GetNativePointerField<	FVector*>(this, "FSeamlessServerInfo.GlobalLocation"); }
	FVector2D& ServerLocalLocationField() { return *GetNativePointerField<	FVector2D*>(this, "FSeamlessServerInfo.ServerLocalLocation"); }
	float& minTreasureQualityField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.minTreasureQuality"); }
	float& maxTreasureQualityField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.maxTreasureQuality"); }
	float& TreasureQualityMultiplierField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.TreasureQualityMultiplier"); }
	float& TreasureQualityAdditionField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.TreasureQualityAddition"); }
	float& FinalNPCLevelMultiplierField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.FinalNPCLevelMultiplier"); }
	int& FinalNPCLevelOffsetField() { return *GetNativePointerField<	int*>(this, "FSeamlessServerInfo.FinalNPCLevelOffset"); }
	bool& bUseNpcVolumesForTreasuresField() { return *GetNativePointerField<	bool*>(this, "FSeamlessServerInfo.bUseNpcVolumesForTreasures"); }
	bool& bUseLevelBoundsForTreasuresField() { return *GetNativePointerField<	bool*>(this, "FSeamlessServerInfo.bUseLevelBoundsForTreasures"); }
	bool& bPrioritizeVolumesForTreasuresField() { return *GetNativePointerField<	bool*>(this, "FSeamlessServerInfo.bPrioritizeVolumesForTreasures"); }
	int& spawnPointRegionOverrideField() { return *GetNativePointerField<	int*>(this, "FSeamlessServerInfo.spawnPointRegionOverride"); }
	TArray<FString, FDefaultAllocator>& IslandCustomDatas1Field() { return *GetNativePointerField<	TArray<FString, FDefaultAllocator>*>(this, "FSeamlessServerInfo.IslandCustomDatas1"); }
	TArray<FString, FDefaultAllocator>& IslandCustomDatas2Field() { return *GetNativePointerField<	TArray<FString, FDefaultAllocator>*>(this, "FSeamlessServerInfo.IslandCustomDatas2"); }
	TArray<FString, FDefaultAllocator>& IslandClientCustomDatas1Field() { return *GetNativePointerField<	TArray<FString, FDefaultAllocator>*>(this, "FSeamlessServerInfo.IslandClientCustomDatas1"); }
	TArray<FString, FDefaultAllocator>& IslandClientCustomDatas2Field() { return *GetNativePointerField<	TArray<FString, FDefaultAllocator>*>(this, "FSeamlessServerInfo.IslandClientCustomDatas2"); }
	FVector& SinglePlayerSpawnPointField() { return *GetNativePointerField<	FVector*>(this, "FSeamlessServerInfo.SinglePlayerSpawnPoint"); }
	TArray<FVector, FDefaultAllocator>& SinglePlayerTreasureSpawnPointsField() { return *GetNativePointerField<	TArray<FVector, FDefaultAllocator>*>(this, "FSeamlessServerInfo.SinglePlayerTreasureSpawnPoints"); }
	float& WidthField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.Width"); }
	float& HeightField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.Height"); }
	float& RotationField() { return *GetNativePointerField<	float*>(this, "FSeamlessServerInfo.Rotation"); }
	int& IslandPointsField() { return *GetNativePointerField<	int*>(this, "FSeamlessServerInfo.IslandPoints"); }
	FIslandInfoGameplayValues& ReplicatedGameplayValuesField() { return *GetNativePointerField<	FIslandInfoGameplayValues*>(this, "FSeamlessServerInfo.ReplicatedGameplayValues"); }
};

struct FSeamlessServerInfo
{
	unsigned __int16& gridXField() { return *GetNativePointerField<unsigned __int16*>(this, "FSeamlessServerInfo.gridX"); }
	unsigned __int16& gridYField() { return *GetNativePointerField<unsigned __int16*>(this, "FSeamlessServerInfo.gridY"); }
	FString& _IpField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo._Ip"); }
	int& PortField() { return *GetNativePointerField<int*>(this, "FSeamlessServerInfo.Port"); }
	int& GamePortField() { return *GetNativePointerField<int*>(this, "FSeamlessServerInfo.GamePort"); }
	int& SeamlessDataPortField() { return *GetNativePointerField<int*>(this, "FSeamlessServerInfo.SeamlessDataPort"); }
	int& SkyStyleIndexField() { return *GetNativePointerField<int*>(this, "FSeamlessServerInfo.SkyStyleIndex"); }
	FVector& WaterColorOverrideField() { return *GetNativePointerField<FVector*>(this, "FSeamlessServerInfo.WaterColorOverride"); }
	TArray<FString>& SubLevelsNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FSeamlessServerInfo.SubLevelsNames"); }
	TArray<FTransform>& SubLevelsAdditionalTransformsField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FSeamlessServerInfo.SubLevelsAdditionalTransforms"); }
	TArray<unsigned int>& SubLevelsUniqueIdsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FSeamlessServerInfo.SubLevelsUniqueIds"); }
	TArray<int>& SubLevelsLandscapeMaterialOverrideField() { return *GetNativePointerField<TArray<int>*>(this, "FSeamlessServerInfo.SubLevelsLandscapeMaterialOverride"); }
	TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>& ExtraSubLevelsNamesField() { return *GetNativePointerField<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>*>(this, "FSeamlessServerInfo.ExtraSubLevelsNames"); }
	float& OrientationField() { return *GetNativePointerField<float*>(this, "FSeamlessServerInfo.Orientation"); }
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "FSeamlessServerInfo.Offset"); }
	bool& bIsHomeServerField() { return *GetNativePointerField<bool*>(this, "FSeamlessServerInfo.bIsHomeServer"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.Name"); }
	float& TransitionMinZField() { return *GetNativePointerField<float*>(this, "FSeamlessServerInfo.TransitionMinZ"); }
	int& UTCOffSetField() { return *GetNativePointerField<int*>(this, "FSeamlessServerInfo.UTCOffSet"); }
	float& FloorDistFromOceanSurfaceField() { return *GetNativePointerField<float*>(this, "FSeamlessServerInfo.FloorDistFromOceanSurface"); }
	FString& OceanDinoDepthEntriesOverrideField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.OceanDinoDepthEntriesOverride"); }
	FString& TreasureMapLootTablesOverrideField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.TreasureMapLootTablesOverride"); }
	FString& RegionOverridesField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.RegionOverrides"); }
	FString& OceanFloatsamCratesOverrideField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.OceanFloatsamCratesOverride"); }
	FString& NPCShipSpawnEntriesOverrideTemplateNameField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.NPCShipSpawnEntriesOverrideTemplateName"); }
	FString& OceanEpicSpawnEntriesOverrideValuesField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.OceanEpicSpawnEntriesOverrideValues"); }
	FString& GlobalBiomeSeamlessServerGridPreOffsetValuesField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.GlobalBiomeSeamlessServerGridPreOffsetValues"); }
	FString& GlobalBiomeSeamlessServerGridPreOffsetValuesOceanWaterField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.GlobalBiomeSeamlessServerGridPreOffsetValuesOceanWater"); }
	FString& AdditionalCmdLineParamsField() { return *GetNativePointerField<FString*>(this, "FSeamlessServerInfo.AdditionalCmdLineParams"); }
	TArray<FString>& ServerCustomDatas1Field() { return *GetNativePointerField<TArray<FString>*>(this, "FSeamlessServerInfo.ServerCustomDatas1"); }
	TArray<FString>& ServerCustomDatas2Field() { return *GetNativePointerField<TArray<FString>*>(this, "FSeamlessServerInfo.ServerCustomDatas2"); }
	TArray<FString>& ClientCustomDatas1Field() { return *GetNativePointerField<TArray<FString>*>(this, "FSeamlessServerInfo.ClientCustomDatas1"); }
	TArray<FString>& ClientCustomDatas2Field() { return *GetNativePointerField<TArray<FString>*>(this, "FSeamlessServerInfo.ClientCustomDatas2"); }
	TArray<FSeamlessIslandInfo>& IslandInstancesField() { return *GetNativePointerField<TArray<FSeamlessIslandInfo>*>(this, "FSeamlessServerInfo.IslandInstances"); }
	unsigned __int64& SteamServerIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FSeamlessServerInfo.SteamServerId"); }
	//TArray<FDiscoveryZone>& DiscoveryZonesField() { return *GetNativePointerField<TArray<FDiscoveryZone>*>(this, "FSeamlessServerInfo.DiscoveryZones"); }
	//TArray<FSpawnRegion>& SpawnRegionsField() { return *GetNativePointerField<TArray<FSpawnRegion>*>(this, "FSeamlessServerInfo.SpawnRegions"); }

	// Functions

	unsigned int GetServerId() { return NativeCall<unsigned int>(this, "FSeamlessServerInfo.GetServerId"); }
	static unsigned int GetServerId(unsigned __int16 x, unsigned __int16 y) { return NativeCall<unsigned int, unsigned __int16, unsigned __int16>(nullptr, "FSeamlessServerInfo.GetServerId", x, y); }
	static void GetServerCoords(unsigned int id, unsigned __int16* OutX, unsigned __int16* OutY) { NativeCall<void, unsigned int, unsigned __int16*, unsigned __int16*>(nullptr, "FSeamlessServerInfo.GetServerCoords", id, OutX, OutY); }
	//FDiscoveryZone * GetDiscoveryZonesById(int ZoneId) { return NativeCall<FDiscoveryZone *, int>(this, "FSeamlessServerInfo.GetDiscoveryZonesById", ZoneId); }
	//FDiscoveryZone * GetDiscoveryZonesByManualName(FString ManualName) { return NativeCall<FDiscoveryZone *, FString>(this, "FSeamlessServerInfo.GetDiscoveryZonesByManualName", ManualName); }
};

struct FSeamlessGridInfo
{
	//TArray<FShipPath>& ShipPathsField() { return *GetNativePointerField<TArray<FShipPath>*>(this, "FSeamlessGridInfo.ShipPaths"); }
	FString& QuestDataField() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.QuestData"); }
	FString& AtlasPasswordField() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.AtlasPassword"); }
	int& columnUTCOffsetField() { return *GetNativePointerField<int*>(this, "FSeamlessGridInfo.columnUTCOffset"); }
	int& TotalGridsXField() { return *GetNativePointerField<int*>(this, "FSeamlessGridInfo.TotalGridsX"); }
	int& TotalGridsYField() { return *GetNativePointerField<int*>(this, "FSeamlessGridInfo.TotalGridsY"); }
	__int16& MinXField() { return *GetNativePointerField<__int16*>(this, "FSeamlessGridInfo.MinX"); }
	__int16& MaxXField() { return *GetNativePointerField<__int16*>(this, "FSeamlessGridInfo.MaxX"); }
	__int16& MinYField() { return *GetNativePointerField<__int16*>(this, "FSeamlessGridInfo.MinY"); }
	__int16& MaxYField() { return *GetNativePointerField<__int16*>(this, "FSeamlessGridInfo.MaxY"); }
	//TSharedPtr<FJsonObject, 0>& ServerConfigJsonObjectField() { return *GetNativePointerField<TSharedPtr<FJsonObject, 0>*>(this, "FSeamlessGridInfo.ServerConfigJsonObject"); }
	//TSharedPtr<FJsonObject, 0>& CurrentServerJsonObjectField() { return *GetNativePointerField<TSharedPtr<FJsonObject, 0>*>(this, "FSeamlessGridInfo.CurrentServerJsonObject"); }
	unsigned int& CurrentServerIdField() { return *GetNativePointerField<unsigned int*>(this, "FSeamlessGridInfo.CurrentServerId"); }
	TMap<unsigned int, FSeamlessServerInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, FSeamlessServerInfo, 0> > & ServersInfoField() { return *GetNativePointerField<TMap<unsigned int, FSeamlessServerInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, FSeamlessServerInfo, 0> >*>(this, "FSeamlessGridInfo.ServersInfo"); }
	int& TotalDiscoveryZonesXPField() { return *GetNativePointerField<int*>(this, "FSeamlessGridInfo.TotalDiscoveryZonesXP"); }
	float& GridSizeField() { return *GetNativePointerField<float*>(this, "FSeamlessGridInfo.GridSize"); }
	float& GlobalTransitionMinZField() { return *GetNativePointerField<float*>(this, "FSeamlessGridInfo.GlobalTransitionMinZ"); }
	bool& bUseUTCTimeField() { return *GetNativePointerField<bool*>(this, "FSeamlessGridInfo.bUseUTCTime"); }
	FString& Day0Field() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.Day0"); }
	FString& MetaWorldURLField() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.MetaWorldURL"); }
	FString& WorldFriendlyNameField() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.WorldFriendlyName"); }
	FString& WorldAtlasIdField() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.WorldAtlasId"); }
	FString& MapImageURLField() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.MapImageURL"); }
	FString& AuthListURLField() { return *GetNativePointerField<FString*>(this, "FSeamlessGridInfo.AuthListURL"); }
	//TArray<FSeamlessIslandInfo>& CachedIslandsListField() { return *GetNativePointerField<TArray<FSeamlessIslandInfo>*>(this, "FSeamlessGridInfo.CachedIslandsList"); }
	TArray<FSeamlessServerInfo>& CachedServersInfoField() { return *GetNativePointerField<TArray<FSeamlessServerInfo>*>(this, "FSeamlessGridInfo.CachedServersInfo"); }

	// Functions

	FSeamlessServerInfo* GetCurrentServerInfo() { return NativeCall<FSeamlessServerInfo*>(this, "FSeamlessGridInfo.GetCurrentServerInfo"); }
	void GetAllServersInfo(TArray<FSeamlessServerInfo>* OutServersList) { NativeCall<void, TArray<FSeamlessServerInfo>*>(this, "FSeamlessGridInfo.GetAllServersInfo", OutServersList); }
	unsigned int GetCurrentServerId() { return NativeCall<unsigned int>(this, "FSeamlessGridInfo.GetCurrentServerId"); }
	FString* GetWorldAtlasId(FString* result) { return NativeCall<FString*, FString*>(this, "FSeamlessGridInfo.GetWorldAtlasId", result); }
	FSeamlessServerInfo* GetServerInfo(unsigned int ServerId) { return NativeCall<FSeamlessServerInfo*, unsigned int>(this, "FSeamlessGridInfo.GetServerInfo", ServerId); }
	FSeamlessServerInfo* GetServerContainingGPSLocation(FVector2D GPSLocation) { return NativeCall<FSeamlessServerInfo*, FVector2D>(this, "FSeamlessGridInfo.GetServerContainingGPSLocation", GPSLocation); }
	FSeamlessServerInfo* GetServerContainingGlobalLocation(FVector GlobalLocation) { return NativeCall<FSeamlessServerInfo*, FVector>(this, "FSeamlessGridInfo.GetServerContainingGlobalLocation", GlobalLocation); }
	FVector2D* GetWorldSize(FVector2D* result) { return NativeCall<FVector2D*, FVector2D*>(this, "FSeamlessGridInfo.GetWorldSize", result); }
	bool IsCurrentServerInvalid() { return NativeCall<bool>(this, "FSeamlessGridInfo.IsCurrentServerInvalid"); }
	//TArray<FSpawnRegion> * GetServerSpawnRegions(TArray<FSpawnRegion> * result, unsigned int ServerId) { return NativeCall<TArray<FSpawnRegion> *, TArray<FSpawnRegion> *, unsigned int>(this, "FSeamlessGridInfo.GetServerSpawnRegions", result, ServerId); }
	FVector* GPSLocationToGlobalLocation(FVector* result, FVector2D GPSLocation) { return NativeCall<FVector*, FVector*, FVector2D>(this, "FSeamlessGridInfo.GPSLocationToGlobalLocation", result, GPSLocation); }
	FVector* GPSLocationToServerLocation(FVector* result, FVector2D GPSLocation) { return NativeCall<FVector*, FVector*, FVector2D>(this, "FSeamlessGridInfo.GPSLocationToServerLocation", result, GPSLocation); }
	FVector* GetAbsolutePostionFromRelativePositionInServer(FVector* result, unsigned int ServerId, FVector2D* RelativePos) { return NativeCall<FVector*, FVector*, unsigned int, FVector2D*>(this, "FSeamlessGridInfo.GetAbsolutePostionFromRelativePositionInServer", result, ServerId, RelativePos); }
	//void GetAllIslandsInfo(TArray<FSeamlessIslandInfo> * OutIslandsList) { NativeCall<void, TArray<FSeamlessIslandInfo> *>(this, "FSeamlessGridInfo.GetAllIslandsInfo", OutIslandsList); }
	bool GetCurrentServerIPAndPort(FString* IP, int* Port) { return NativeCall<bool, FString*, int*>(this, "FSeamlessGridInfo.GetCurrentServerIPAndPort", IP, Port); }
	int GetCurrentServerSeamlessDataPort() { return NativeCall<int>(this, "FSeamlessGridInfo.GetCurrentServerSeamlessDataPort"); }
	FVector* GetGlobalMapSize(FVector* result) { return NativeCall<FVector*, FVector*>(this, "FSeamlessGridInfo.GetGlobalMapSize", result); }
	char GetMinimumHopsBetweenGridServers(unsigned int FromGridServerId, unsigned int ToGridServerId, ESeamlessVolumeSide::Side* OutFromSide, ESeamlessVolumeSide::Side* OutToSide) { return NativeCall<char, unsigned int, unsigned int, ESeamlessVolumeSide::Side*, ESeamlessVolumeSide::Side*>(this, "FSeamlessGridInfo.GetMinimumHopsBetweenGridServers", FromGridServerId, ToGridServerId, OutFromSide, OutToSide); }
	FVector2D* GetRelativePostionInServerFromAbsolutePosition(FVector2D* result, unsigned int ServerId, FVector* AbsPos) { return NativeCall<FVector2D*, FVector2D*, unsigned int, FVector*>(this, "FSeamlessGridInfo.GetRelativePostionInServerFromAbsolutePosition", result, ServerId, AbsPos); }
	bool GetServerIPAndPort(unsigned int InServerId, FString* IP, int* Port) { return NativeCall<bool, unsigned int, FString*, int*>(this, "FSeamlessGridInfo.GetServerIPAndPort", InServerId, IP, Port); }
	unsigned int GetServerToSide(unsigned int InServerId, ESeamlessVolumeSide::Side InDesiredSide) { return NativeCall<unsigned int, unsigned int, ESeamlessVolumeSide::Side>(this, "FSeamlessGridInfo.GetServerToSide", InServerId, InDesiredSide); }
	FVector2D* GlobalLocationToGPSLocation(FVector2D* result, FVector GlobalLocation) { return NativeCall<FVector2D*, FVector2D*, FVector>(this, "FSeamlessGridInfo.GlobalLocationToGPSLocation", result, GlobalLocation); }
	FVector* GlobalLocationToServerLocation(FVector* result, FVector GlobalLocation) { return NativeCall<FVector*, FVector*, FVector>(this, "FSeamlessGridInfo.GlobalLocationToServerLocation", result, GlobalLocation); }
	FVector* GlobalLocationToServerLocation(FVector* result, FVector GlobalLocation, FSeamlessServerInfo* ServerInfo) { return NativeCall<FVector*, FVector*, FVector, FSeamlessServerInfo*>(this, "FSeamlessGridInfo.GlobalLocationToServerLocation", result, GlobalLocation, ServerInfo); }
	FVector* GlobalLocationToServerLocation(FVector* result, FVector GlobalLocation, unsigned int ServerId) { return NativeCall<FVector*, FVector*, FVector, unsigned int>(this, "FSeamlessGridInfo.GlobalLocationToServerLocation", result, GlobalLocation, ServerId); }
	void LoadFromFile(FString FileName, unsigned __int16 InServerX, unsigned __int16 InServerY) { NativeCall<void, FString, unsigned __int16, unsigned __int16>(this, "FSeamlessGridInfo.LoadFromFile", FileName, InServerX, InServerY); }
	void ParseJsonFromString(FString ServerGridJSON, unsigned __int16 InServerX, unsigned __int16 InServerY) { NativeCall<void, FString, unsigned __int16, unsigned __int16>(this, "FSeamlessGridInfo.ParseJsonFromString", ServerGridJSON, InServerX, InServerY); }
	FVector2D* ServerLocationToGPSLocation(FVector2D* result, unsigned int ServerId, FVector ServerLocation) { return NativeCall<FVector2D*, FVector2D*, unsigned int, FVector>(this, "FSeamlessGridInfo.ServerLocationToGPSLocation", result, ServerId, ServerLocation); }
	FVector* ServerLocationToGlobalLocation(FVector* result, unsigned int ServerId, FVector ServerLocation) { return NativeCall<FVector*, FVector*, unsigned int, FVector>(this, "FSeamlessGridInfo.ServerLocationToGlobalLocation", result, ServerId, ServerLocation); }
	void SetServerId(unsigned int ServerId, FString* Ip, int Port, int GamePort) { NativeCall<void, unsigned int, FString*, int, int>(this, "FSeamlessGridInfo.SetServerId", ServerId, Ip, Port, GamePort); }
	void SetServerInfoSteamId(unsigned int ServerId, unsigned __int64 SteamServerId) { NativeCall<void, unsigned int, unsigned __int64>(this, "FSeamlessGridInfo.SetServerInfoSteamId", ServerId, SteamServerId); }
	//FDiscoveryZone * GetGlobalDiscoveryZonesById(int ZoneID) { return NativeCall<FDiscoveryZone *, int>(this, "FSeamlessGridInfo.GetGlobalDiscoveryZonesById", ZoneID); }
	//FDiscoveryZone * GetGlobalDiscoveryZonesByManualName(FString ManualName) { return NativeCall<FDiscoveryZone *, FString>(this, "FSeamlessGridInfo.GetGlobalDiscoveryZonesByManualName", ManualName); }
	TArray<FTransform>* GetSeamlessSublevelsAdditionalTransforms(TArray<FTransform>* result) { return NativeCall<TArray<FTransform>*, TArray<FTransform>*>(this, "FSeamlessGridInfo.GetSeamlessSublevelsAdditionalTransforms", result); }
	TArray<unsigned int>* GetSeamlessSublevelsUniqueIds(TArray<unsigned int>* result) { return NativeCall<TArray<unsigned int>*, TArray<unsigned int>*>(this, "FSeamlessGridInfo.GetSeamlessSublevelsUniqueIds", result); }
	TArray<FString>* GetSublevelsNames(TArray<FString>* result) { return NativeCall<TArray<FString>*, TArray<FString>*>(this, "FSeamlessGridInfo.GetSublevelsNames", result); }
	FString* GetDay0(FString* result) { return NativeCall<FString*, FString*>(this, "FSeamlessGridInfo.GetDay0", result); }
	FString* GetAuthListURL(FString* result) { return NativeCall<FString*, FString*>(this, "FSeamlessGridInfo.GetAuthListURL", result); }
	FString* GetMapImageURL(FString* result) { return NativeCall<FString*, FString*>(this, "FSeamlessGridInfo.GetMapImageURL", result); }
	FString* GetWorldFriendlyName(FString* result) { return NativeCall<FString*, FString*>(this, "FSeamlessGridInfo.GetWorldFriendlyName", result); }
	FSeamlessServerInfo* FindServerInfo(unsigned int ServerId) { return NativeCall<FSeamlessServerInfo*, unsigned int>(this, "FSeamlessGridInfo.FindServerInfo", ServerId); }
	static void GetServerInfo() { NativeCall<void>(nullptr, "FSeamlessGridInfo.GetServerInfo"); }
};

struct UGameInstance
{
	FWorldContext* WorldContextField() { return *GetNativePointerField<FWorldContext * *>(this, "UGameInstance.WorldContext"); }
	TArray<ULocalPlayer*> LocalPlayersField() { return *GetNativePointerField<TArray<ULocalPlayer*>*>(this, "UGameInstance.LocalPlayers"); }
	FString& PIEMapNameField() { return *GetNativePointerField<FString*>(this, "UGameInstance.PIEMapName"); }
	TArray<UObject*> ObjectsPendingTimeShiftField() { return *GetNativePointerField<TArray<UObject*>*>(this, "UGameInstance.ObjectsPendingTimeShift"); }
};

struct UShooterGameInstance : UGameInstance
{
	FName& CurrentStateField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.CurrentState"); }
	bool& bCanUseUserGeneratedContentField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bCanUseUserGeneratedContent"); }
	bool& bHasCommunicationPriviligeField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasCommunicationPrivilige"); }
	long double& CachedLastServerTimestampField() { return *GetNativePointerField<long double*>(this, "UShooterGameInstance.CachedLastServerTimestamp"); }
	bool& bAwaitingTravelTimestampField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bAwaitingTravelTimestamp"); }
	long double& LastTravelShiftField() { return *GetNativePointerField<long double*>(this, "UShooterGameInstance.LastTravelShift"); }
	TWeakObjectPtr<APlayerCameraManager>& SeamlessTravelPlayerCameraField() { return *GetNativePointerField<TWeakObjectPtr<APlayerCameraManager>*>(this, "UShooterGameInstance.SeamlessTravelPlayerCamera"); }
	FRotator& SeamlessTravelControlRotationField() { return *GetNativePointerField<FRotator*>(this, "UShooterGameInstance.SeamlessTravelControlRotation"); }
	TWeakObjectPtr<AHUD>& SeamlessTravelHUDField() { return *GetNativePointerField<TWeakObjectPtr<AHUD>*>(this, "UShooterGameInstance.SeamlessTravelHUD"); }
	unsigned int& DestinationServerIdField() { return *GetNativePointerField<unsigned int*>(this, "UShooterGameInstance.DestinationServerId"); }
	TArray<FTransformedSubLevel>& LastLoadedSubLevelsField() { return *GetNativePointerField<TArray<FTransformedSubLevel>*>(this, "UShooterGameInstance.LastLoadedSubLevels"); }
	FSeamlessGridInfo* GridInfoField() { return *GetNativePointerField<FSeamlessGridInfo * *>(this, "UShooterGameInstance.GridInfo"); }
	bool& ShouldInitSpectatorPosField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.ShouldInitSpectatorPos"); }
	FVector& SpectatorInitialPosField() { return *GetNativePointerField<FVector*>(this, "UShooterGameInstance.SpectatorInitialPos"); }
	//UDatabase_ClusterInfo * Database_ClusterInfo_RefField() { return *GetNativePointerField<UDatabase_ClusterInfo **>(this, "UShooterGameInstance.Database_ClusterInfo_Ref"); }
	TArray<TWeakObjectPtr<AActor>>& SeamlessTravelActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>>*>(this, "UShooterGameInstance.SeamlessTravelActors"); }
	TWeakObjectPtr<ACharacter>& LastControlledCharacterField() { return *GetNativePointerField<TWeakObjectPtr<ACharacter>*>(this, "UShooterGameInstance.LastControlledCharacter"); }
	long double& LastSeamlesslyTravelledAtField() { return *GetNativePointerField<long double*>(this, "UShooterGameInstance.LastSeamlesslyTravelledAt"); }
	FString& WelcomeScreenMapField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.WelcomeScreenMap"); }
	FString& MainMenuMapField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.MainMenuMap"); }
	FName& PendingStateField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.PendingState"); }
	FString& TravelURLField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.TravelURL"); }
	bool& bIsOnlineField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsOnline"); }
	bool& bPendingEnableSplitscreenField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bPendingEnableSplitscreen"); }
	bool& bIsLicensedField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsLicensed"); }
	bool& bIsTravellingSeamlesslyField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsTravellingSeamlessly"); }
	int& IgnorePairingChangeForControllerIdField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.IgnorePairingChangeForControllerId"); }
	TWeakObjectPtr<ADayCycleManager>& DayCycleManagerField() { return *GetNativePointerField<TWeakObjectPtr<ADayCycleManager>*>(this, "UShooterGameInstance.DayCycleManager"); }
	TWeakObjectPtr<ASOTFNotification>& SOTFNotificationManagerField() { return *GetNativePointerField<TWeakObjectPtr<ASOTFNotification>*>(this, "UShooterGameInstance.SOTFNotificationManager"); }
	int& bOnReturnToMainMenuNotificationField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.bOnReturnToMainMenuNotification"); }
	FString& OnReturnToMainMenuNotificationMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OnReturnToMainMenuNotificationMessage"); }
	FString& OnReturnToMainMenuNotificationTitleField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OnReturnToMainMenuNotificationTitle"); }
	FString& GlobalMainMenuMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.GlobalMainMenuMessage"); }
	FString& GlobalMainMenuTitleField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.GlobalMainMenuTitle"); }
	bool& bHasReceivedNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasReceivedNewsMessage"); }
	bool& bHasOfficialStatusMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasOfficialStatusMessage"); }
	FString& NewsMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.NewsMessage"); }
	FString& OfficialStatusMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OfficialStatusMessage"); }
	FString& TerrainGenerationProgressBarMsgField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.TerrainGenerationProgressBarMsg"); }
	float& SecondsSpentGeneratingTerrainField() { return *GetNativePointerField<float*>(this, "UShooterGameInstance.SecondsSpentGeneratingTerrain"); }
	bool& TerrainIsGeneratingField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.TerrainIsGenerating"); }
	bool& bFindingLastCurrServerField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bFindingLastCurrServer"); }
	bool& bRedirectingToLastServerField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bRedirectingToLastServer"); }
	FString& LastServerIdField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.LastServerId"); }
	FString& LastAtlasIdField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.LastAtlasId"); }
	FString& LastConnectURLField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.LastConnectURL"); }
	FString& LastAtlasPasswordField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.LastAtlasPassword"); }
	FString& LastAtlasNameField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.LastAtlasName"); }
	FString& LastRegionNameField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.LastRegionName"); }
	EListSessionStatus::Type& LastSessionSearchTypeField() { return *GetNativePointerField<EListSessionStatus::Type*>(this, "UShooterGameInstance.LastSessionSearchType"); }
	bool& bGotoListSessionsOnMainMenuLoadField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bGotoListSessionsOnMainMenuLoad"); }
	bool& bSelectingNewHomeServerField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bSelectingNewHomeServer"); }
	UTexture2D* InfrastructureImageField() { return *GetNativePointerField<UTexture2D * *>(this, "UShooterGameInstance.InfrastructureImage"); }
	FString& MainMenuLoadListSessionAtlasIdField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.MainMenuLoadListSessionAtlasId"); }

	// Functions

	void AddNetworkFailureHandlers() { NativeCall<void>(this, "UShooterGameInstance.AddNetworkFailureHandlers"); }
	void AttemptJoinLastServer() { NativeCall<void>(this, "UShooterGameInstance.AttemptJoinLastServer"); }
	FVector* BP_GPSLocationToGlobalLocation(FVector* result, FVector2D GPSLocation) { return NativeCall<FVector*, FVector*, FVector2D>(this, "UShooterGameInstance.BP_GPSLocationToGlobalLocation", result, GPSLocation); }
	FVector* BP_GPSLocationToLocalLocation(FVector* result, FVector2D GPSLocation) { return NativeCall<FVector*, FVector*, FVector2D>(this, "UShooterGameInstance.BP_GPSLocationToLocalLocation", result, GPSLocation); }
	FVector2D* BP_GlobalLocationToGPSLocation(FVector2D* result, FVector GlobalLocation) { return NativeCall<FVector2D*, FVector2D*, FVector>(this, "UShooterGameInstance.BP_GlobalLocationToGPSLocation", result, GlobalLocation); }
	FVector* BP_GlobalLocationToLocalLocation(FVector* result, FVector GlobalLocation) { return NativeCall<FVector*, FVector*, FVector>(this, "UShooterGameInstance.BP_GlobalLocationToLocalLocation", result, GlobalLocation); }
	FVector2D* BP_LocalLocationToGPSLocation(FVector2D* result, FVector LocalLocation) { return NativeCall<FVector2D*, FVector2D*, FVector>(this, "UShooterGameInstance.BP_LocalLocationToGPSLocation", result, LocalLocation); }
	FVector* BP_LocalLocationToGlobalLocation(FVector* result, FVector LocalLocation) { return NativeCall<FVector*, FVector*, FVector>(this, "UShooterGameInstance.BP_LocalLocationToGlobalLocation", result, LocalLocation); }
	void BeginMainMenuState() { NativeCall<void>(this, "UShooterGameInstance.BeginMainMenuState"); }
	void BeginMessageMenuState() { NativeCall<void>(this, "UShooterGameInstance.BeginMessageMenuState"); }
	void BeginNewState(FName NewState, FName PrevState) { NativeCall<void, FName, FName>(this, "UShooterGameInstance.BeginNewState", NewState, PrevState); }
	void BeginPlayingState() { NativeCall<void>(this, "UShooterGameInstance.BeginPlayingState"); }
	void BeginWelcomeScreenState() { NativeCall<void>(this, "UShooterGameInstance.BeginWelcomeScreenState"); }
	void CheckConnectString(FString ConnectStr, bool FromRedirection) { NativeCall<void, FString, bool>(this, "UShooterGameInstance.CheckConnectString", ConnectStr, FromRedirection); }
	void CleanupSessionOnReturnToMenu() { NativeCall<void>(this, "UShooterGameInstance.CleanupSessionOnReturnToMenu"); }
	void ClientOnCancelSeamlessTravel() { NativeCall<void>(this, "UShooterGameInstance.ClientOnCancelSeamlessTravel"); }
	void ClientOnDoTravelSeamless(FString* Url, FString AtlasId, FString ServerId) { NativeCall<void, FString*, FString, FString>(this, "UShooterGameInstance.ClientOnDoTravelSeamless", Url, AtlasId, ServerId); }
	void ClientOnEndSeamlessTravel() { NativeCall<void>(this, "UShooterGameInstance.ClientOnEndSeamlessTravel"); }
	void ClientReceiveNewServerTime(long double NewServerTime) { NativeCall<void, long double>(this, "UShooterGameInstance.ClientReceiveNewServerTime", NewServerTime); }
	void ClusterStatusDump() { NativeCall<void>(this, "UShooterGameInstance.ClusterStatusDump"); }
	TArray<unsigned char>* CompressGridInfo(TArray<unsigned char>* result) { return NativeCall<TArray<unsigned char>*, TArray<unsigned char>*>(this, "UShooterGameInstance.CompressGridInfo", result); }
	void ConditionalGoToMenuAndDisplayFailureNotification() { NativeCall<void>(this, "UShooterGameInstance.ConditionalGoToMenuAndDisplayFailureNotification"); }
	void ConstructMapImagesManager() { NativeCall<void>(this, "UShooterGameInstance.ConstructMapImagesManager"); }
	void DeCompressGridInfo(TArray<unsigned char> ByteArray, bool bSaveToFile) { NativeCall<void, TArray<unsigned char>, bool>(this, "UShooterGameInstance.DeCompressGridInfo", ByteArray, bSaveToFile); }
	void DisplayGlobalMainMenuNotification() { NativeCall<void>(this, "UShooterGameInstance.DisplayGlobalMainMenuNotification"); }
	void DoPostLoadMap(bool bForceReinitUI) { NativeCall<void, bool>(this, "UShooterGameInstance.DoPostLoadMap", bForceReinitUI); }
	void EndCurrentState(FName NextState) { NativeCall<void, FName>(this, "UShooterGameInstance.EndCurrentState", NextState); }
	void EndPlayingState() { NativeCall<void>(this, "UShooterGameInstance.EndPlayingState"); }
	TSubclassOf<AGameMode>* GetDefaultGameModeClass(TSubclassOf<AGameMode>* result) { return NativeCall<TSubclassOf<AGameMode>*, TSubclassOf<AGameMode>*>(this, "UShooterGameInstance.GetDefaultGameModeClass", result); }
	AShooterGameSession* GetGameSession() { return NativeCall<AShooterGameSession*>(this, "UShooterGameInstance.GetGameSession"); }
	bool GetLastCachedServerConnectString(FString* ConnectURL, FString* AtlasId, FString* ServerId, FString* AtlasPassword, FString* AtlasName, FString* RegionName) { return NativeCall<bool, FString*, FString*, FString*, FString*, FString*, FString*>(this, "UShooterGameInstance.GetLastCachedServerConnectString", ConnectURL, AtlasId, ServerId, AtlasPassword, AtlasName, RegionName); }
	void GetLoginThrottle() { NativeCall<void>(this, "UShooterGameInstance.GetLoginThrottle"); }
	TSubclassOf<UObject>* GetRemappedResourceClass(TSubclassOf<UObject>* result, TSubclassOf<UObject> ForClass) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, TSubclassOf<UObject>>(this, "UShooterGameInstance.GetRemappedResourceClass", result, ForClass); }
	TArray<TEnumAsByte<enum ECollisionChannel>>* GetSkeletalPhysCustomBodyAdditionalIgnores() { return NativeCall<TArray<TEnumAsByte<enum ECollisionChannel>>*>(this, "UShooterGameInstance.GetSkeletalPhysCustomBodyAdditionalIgnores"); }
	void GotoInitialState() { NativeCall<void>(this, "UShooterGameInstance.GotoInitialState"); }
	void GotoState(FName NewState) { NativeCall<void, FName>(this, "UShooterGameInstance.GotoState", NewState); }
	void HandleAppLicenseUpdate() { NativeCall<void>(this, "UShooterGameInstance.HandleAppLicenseUpdate"); }
	void HandleAppResume() { NativeCall<void>(this, "UShooterGameInstance.HandleAppResume"); }
	void HandleAppSuspend() { NativeCall<void>(this, "UShooterGameInstance.HandleAppSuspend"); }
	void HandleAppWillDeactivate() { NativeCall<void>(this, "UShooterGameInstance.HandleAppWillDeactivate"); }
	void HandleControllerConnectionChange(bool bIsConnection, int Unused, int GameUserIndex) { NativeCall<void, bool, int, int>(this, "UShooterGameInstance.HandleControllerConnectionChange", bIsConnection, Unused, GameUserIndex); }
	void HandleSafeFrameChanged() { NativeCall<void>(this, "UShooterGameInstance.HandleSafeFrameChanged"); }
	void HandleSessionUserInviteAccepted(const bool bWasSuccess, const int ControllerId, TSharedPtr<FUniqueNetId, 0> UserId, FOnlineSessionSearchResult* InviteResult) { NativeCall<void, const bool, const int, TSharedPtr<FUniqueNetId, 0>, FOnlineSessionSearchResult*>(this, "UShooterGameInstance.HandleSessionUserInviteAccepted", bWasSuccess, ControllerId, UserId, InviteResult); }
	bool HasExtraSublevel(FString* SublevelName) { return NativeCall<bool, FString*>(this, "UShooterGameInstance.HasExtraSublevel", SublevelName); }
	void HttpGetLoginThrottleRequestComplete(TSharedPtr<IHttpRequest, 0> HttpRequest, TSharedPtr<IHttpResponse, 1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 0>, TSharedPtr<IHttpResponse, 1>, bool>(this, "UShooterGameInstance.HttpGetLoginThrottleRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void Init() { NativeCall<void>(this, "UShooterGameInstance.Init"); }
	void InternalTravelToSession(FName* SessionName) { NativeCall<void, FName*>(this, "UShooterGameInstance.InternalTravelToSession", SessionName); }
	bool IsCurrentServerInvalid() { return NativeCall<bool>(this, "UShooterGameInstance.IsCurrentServerInvalid"); }
	bool IsLocalPlayerOnline(ULocalPlayer* LocalPlayer) { return NativeCall<bool, ULocalPlayer*>(this, "UShooterGameInstance.IsLocalPlayerOnline", LocalPlayer); }
	bool IsLoginAllowed(FString* AtlasId, FString* UserId, FString* ReasonMsg) { return NativeCall<bool, FString*, FString*, FString*>(this, "UShooterGameInstance.IsLoginAllowed", AtlasId, UserId, ReasonMsg); }
	bool IsTravellingSeamlessly() { return NativeCall<bool>(this, "UShooterGameInstance.IsTravellingSeamlessly"); }
	bool JoinSession(ULocalPlayer* LocalPlayer, FOnlineSessionSearchResult* SearchResult) { return NativeCall<bool, ULocalPlayer*, FOnlineSessionSearchResult*>(this, "UShooterGameInstance.JoinSession", LocalPlayer, SearchResult); }
	bool JoinSession(ULocalPlayer* LocalPlayer, int SessionIndexInSearchResults) { return NativeCall<bool, ULocalPlayer*, int>(this, "UShooterGameInstance.JoinSession", LocalPlayer, SessionIndexInSearchResults); }
	bool JustSeamlesslyTravelledToServer() { return NativeCall<bool>(this, "UShooterGameInstance.JustSeamlesslyTravelledToServer"); }
	void LabelPlayerAsQuitter(ULocalPlayer* LocalPlayer) { NativeCall<void, ULocalPlayer*>(this, "UShooterGameInstance.LabelPlayerAsQuitter", LocalPlayer); }
	void LoadDynamicSublevels(UWorld* PlayWorld, bool bForceLoadLevels) { NativeCall<void, UWorld*, bool>(this, "UShooterGameInstance.LoadDynamicSublevels", PlayWorld, bForceLoadLevels); }
	void LoadFrontEndMap(FString* MapName) { NativeCall<void, FString*>(this, "UShooterGameInstance.LoadFrontEndMap", MapName); }
	void LoadGameMedia() { NativeCall<void>(this, "UShooterGameInstance.LoadGameMedia"); }
	void LoadTheGameMedia() { NativeCall<void>(this, "UShooterGameInstance.LoadTheGameMedia"); }
	void MaybeChangeState() { NativeCall<void>(this, "UShooterGameInstance.MaybeChangeState"); }
	void OnCurrentServerFindCompleted(bool bSuccess) { NativeCall<void, bool>(this, "UShooterGameInstance.OnCurrentServerFindCompleted", bSuccess); }
	void OnEndSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "UShooterGameInstance.OnEndSessionComplete", SessionName, bWasSuccessful); }
	void OnGenerateTerrainBegin() { NativeCall<void>(this, "UShooterGameInstance.OnGenerateTerrainBegin"); }
	void OnGenerateTerrainEnd() { NativeCall<void>(this, "UShooterGameInstance.OnGenerateTerrainEnd"); }
	void OnPostLoadMap() { NativeCall<void>(this, "UShooterGameInstance.OnPostLoadMap"); }
	void OnPreLoadMap() { NativeCall<void>(this, "UShooterGameInstance.OnPreLoadMap"); }
	void OnRedirectToURLReceived(FString* ToURL, FString* ToAtlasId, FString* ToServerId) { NativeCall<void, FString*, FString*, FString*>(this, "UShooterGameInstance.OnRedirectToURLReceived", ToURL, ToAtlasId, ToServerId); }
	void ProcessSeamlessTravelActorsOnClient() { NativeCall<void>(this, "UShooterGameInstance.ProcessSeamlessTravelActorsOnClient"); }
	void RefreshSpawnPoints(unsigned int HomeServerId) { NativeCall<void, unsigned int>(this, "UShooterGameInstance.RefreshSpawnPoints", HomeServerId); }
	void RemoveExistingLocalPlayer(ULocalPlayer* ExistingPlayer) { NativeCall<void, ULocalPlayer*>(this, "UShooterGameInstance.RemoveExistingLocalPlayer", ExistingPlayer); }
	void RemoveNetworkFailureHandlers() { NativeCall<void>(this, "UShooterGameInstance.RemoveNetworkFailureHandlers"); }
	void RemovePlayersFromParty() { NativeCall<void>(this, "UShooterGameInstance.RemovePlayersFromParty"); }
	void RemoveSplitScreenPlayers() { NativeCall<void>(this, "UShooterGameInstance.RemoveSplitScreenPlayers"); }
	void SetGenerateTerrainProgressMsg(FString Msg) { NativeCall<void, FString>(this, "UShooterGameInstance.SetGenerateTerrainProgressMsg", Msg); }
	void SetIsOnline(bool bInIsOnline) { NativeCall<void, bool>(this, "UShooterGameInstance.SetIsOnline", bInIsOnline); }
	void SetLastServerConnectStringCache(FString* ConnectURL, FString AtlasId, FString ServerId, FString AtlasPassword, FString AtlasName, FString RegionName) { NativeCall<void, FString*, FString, FString, FString, FString, FString>(this, "UShooterGameInstance.SetLastServerConnectStringCache", ConnectURL, AtlasId, ServerId, AtlasPassword, AtlasName, RegionName); }
	void ShowLoadingScreen() { NativeCall<void>(this, "UShooterGameInstance.ShowLoadingScreen"); }
	void ShowMessageThenGotoState(FString* Message, FString* OKButtonString, FString* CancelButtonString, FName* NewState, const bool OverrideExisting, TWeakObjectPtr<ULocalPlayer> PlayerOwner) { NativeCall<void, FString*, FString*, FString*, FName*, const bool, TWeakObjectPtr<ULocalPlayer>>(this, "UShooterGameInstance.ShowMessageThenGotoState", Message, OKButtonString, CancelButtonString, NewState, OverrideExisting, PlayerOwner); }
	void Shutdown() { NativeCall<void>(this, "UShooterGameInstance.Shutdown"); }
	void StartGameInstance() { NativeCall<void>(this, "UShooterGameInstance.StartGameInstance"); }
	void StartPlayerCurrentServerDownloader() { NativeCall<void>(this, "UShooterGameInstance.StartPlayerCurrentServerDownloader"); }
	bool Tick(float DeltaSeconds) { return NativeCall<bool, float>(this, "UShooterGameInstance.Tick", DeltaSeconds); }
	void TravelLocalSessionFailure(UWorld* World, ETravelFailure::Type FailureType, FString* ReasonString) { NativeCall<void, UWorld*, ETravelFailure::Type, FString*>(this, "UShooterGameInstance.TravelLocalSessionFailure", World, FailureType, ReasonString); }
	void UpdateTerrainGenerationProgressBar(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterGameInstance.UpdateTerrainGenerationProgressBar", DeltaSeconds); }
	void WorldLoaded() { NativeCall<void>(this, "UShooterGameInstance.WorldLoaded"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UShooterGameInstance.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesUShooterGameInstance() { NativeCall<void>(nullptr, "UShooterGameInstance.StaticRegisterNativesUShooterGameInstance"); }
};

struct UWorld : UObject
{
	struct InitializationValues
	{
	};
	TArray<TSubclassOf<AActor>>& ActorsClassesAllowedToSaveField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "UWorld.ActorsClassesAllowedToSave"); }
	bool& bIsIdleField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsIdle"); }
	bool& bEverHadGameStateField() { return *GetNativePointerField<bool*>(this, "UWorld.bEverHadGameState"); }
	bool& bClientReceivedSeamlessMapImagesField() { return *GetNativePointerField<bool*>(this, "UWorld.bClientReceivedSeamlessMapImages"); }
	TArray<TWeakObjectPtr<AActor>>& LocalStasisActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>>*>(this, "UWorld.LocalStasisActors"); }
	TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>& LevelNameHashField() { return *GetNativePointerField<TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>*>(this, "UWorld.LevelNameHash"); }
	ULevel* PersistentLevelField() { return *GetNativePointerField<ULevel * *>(this, "UWorld.PersistentLevel"); }
	AGameState* GameStateField() { return *GetNativePointerField<AGameState * *>(this, "UWorld.GameState"); }
	TArray<UObject*> ExtraReferencedObjectsField() { return *GetNativePointerField<TArray<UObject*>*>(this, "UWorld.ExtraReferencedObjects"); }
	FString& StreamingLevelsPrefixField() { return *GetNativePointerField<FString*>(this, "UWorld.StreamingLevelsPrefix"); }
	ULevel* CurrentLevelPendingVisibilityField() { return *GetNativePointerField<ULevel * *>(this, "UWorld.CurrentLevelPendingVisibility"); }
	TArray<FVector>& ViewLocationsRenderedLastFrameField() { return *GetNativePointerField<TArray<FVector>*>(this, "UWorld.ViewLocationsRenderedLastFrame"); }
	AGameMode* AuthorityGameModeField() { return *GetNativePointerField<AGameMode * *>(this, "UWorld.AuthorityGameMode"); }
	TArray<ULevel*> LevelsField() { return *GetNativePointerField<TArray<ULevel*>*>(this, "UWorld.Levels"); }
	TArray<AActor*> NetworkActorsField() { return *GetNativePointerField<TArray<AActor*>*>(this, "UWorld.NetworkActors"); }
	ULevel* CurrentLevelField() { return *GetNativePointerField<ULevel * *>(this, "UWorld.CurrentLevel"); }
	UGameInstance* OwningGameInstanceField() { return *GetNativePointerField<UGameInstance * *>(this, "UWorld.OwningGameInstance"); }
	int& FrameCounterField() { return *GetNativePointerField<int*>(this, "UWorld.FrameCounter"); }
	bool& GamePreviewField() { return *GetNativePointerField<bool*>(this, "UWorld.GamePreview"); }
	TMap<FString, TArray<TArray<TArray<unsigned int>>>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, TArray<TArray<TArray<unsigned int>>>, 0> > & LocalInstancedStaticMeshComponentInstancesVisibilityStateField() { return *GetNativePointerField<TMap<FString, TArray<TArray<TArray<unsigned int>>>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, TArray<TArray<TArray<unsigned int>>>, 0> >*>(this, "UWorld.LocalInstancedStaticMeshComponentInstancesVisibilityState"); }
	TMap<FName, TWeakObjectPtr<UClass>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, TWeakObjectPtr<UClass>, 0> > & PrioritizedObjectMapField() { return *GetNativePointerField<TMap<FName, TWeakObjectPtr<UClass>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, TWeakObjectPtr<UClass>, 0> >*>(this, "UWorld.PrioritizedObjectMap"); }
	TMap<unsigned int, TWeakObjectPtr<AActor>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, TWeakObjectPtr<AActor>, 0> > & UniqueActorIdsField() { return *GetNativePointerField<TMap<unsigned int, TWeakObjectPtr<AActor>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, TWeakObjectPtr<AActor>, 0> >*>(this, "UWorld.UniqueActorIds"); }
	TArray<TAutoWeakObjectPtr<AController>>& ControllerListField() { return *GetNativePointerField<TArray<TAutoWeakObjectPtr<AController>>*>(this, "UWorld.ControllerList"); }
	TArray<TAutoWeakObjectPtr<APlayerController>>& PlayerControllerListField() { return *GetNativePointerField<TArray<TAutoWeakObjectPtr<APlayerController>>*>(this, "UWorld.PlayerControllerList"); }
	TArray<TAutoWeakObjectPtr<APawn>>& PawnListField() { return *GetNativePointerField<TArray<TAutoWeakObjectPtr<APawn>>*>(this, "UWorld.PawnList"); }
	TSet<TWeakObjectPtr<UActorComponent>, DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>& ComponentsThatNeedEndOfFrameUpdateField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UActorComponent>, DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate"); }
	TSet<TWeakObjectPtr<UActorComponent>, DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>& ComponentsThatNeedEndOfFrameUpdate_OnGameThreadField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UActorComponent>, DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate_OnGameThread"); }
	TMap<TWeakObjectPtr<UBlueprint>, TWeakObjectPtr<UObject>, FDefaultSetAllocator, TDefaultMapKeyFuncs<TWeakObjectPtr<UBlueprint>, TWeakObjectPtr<UObject>, 0> > & BlueprintObjectsBeingDebuggedField() { return *GetNativePointerField<TMap<TWeakObjectPtr<UBlueprint>, TWeakObjectPtr<UObject>, FDefaultSetAllocator, TDefaultMapKeyFuncs<TWeakObjectPtr<UBlueprint>, TWeakObjectPtr<UObject>, 0> >*>(this, "UWorld.BlueprintObjectsBeingDebugged"); }
	bool& bRequiresHitProxiesField() { return *GetNativePointerField<bool*>(this, "UWorld.bRequiresHitProxies"); }
	long double& BuildStreamingDataTimerField() { return *GetNativePointerField<long double*>(this, "UWorld.BuildStreamingDataTimer"); }
	bool& bInTickField() { return *GetNativePointerField<bool*>(this, "UWorld.bInTick"); }
	bool& bIsBuiltField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsBuilt"); }
	bool& bTickNewlySpawnedField() { return *GetNativePointerField<bool*>(this, "UWorld.bTickNewlySpawned"); }
	bool& bPostTickComponentUpdateField() { return *GetNativePointerField<bool*>(this, "UWorld.bPostTickComponentUpdate"); }
	int& PlayerNumField() { return *GetNativePointerField<int*>(this, "UWorld.PlayerNum"); }
	float& TimeSinceLastPendingKillPurgeField() { return *GetNativePointerField<float*>(this, "UWorld.TimeSinceLastPendingKillPurge"); }
	bool& FullPurgeTriggeredField() { return *GetNativePointerField<bool*>(this, "UWorld.FullPurgeTriggered"); }
	bool& bShouldDelayGarbageCollectField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldDelayGarbageCollect"); }
	bool& bIsWorldInitializedField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsWorldInitialized"); }
	int& AllowLevelLoadOverrideField() { return *GetNativePointerField<int*>(this, "UWorld.AllowLevelLoadOverride"); }
	int& StreamingVolumeUpdateDelayField() { return *GetNativePointerField<int*>(this, "UWorld.StreamingVolumeUpdateDelay"); }
	bool& bIsLevelStreamingFrozenField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsLevelStreamingFrozen"); }
	bool& bShouldForceUnloadStreamingLevelsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldForceUnloadStreamingLevels"); }
	bool& bShouldForceVisibleStreamingLevelsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldForceVisibleStreamingLevels"); }
	bool& bDoDelayedUpdateCullDistanceVolumesField() { return *GetNativePointerField<bool*>(this, "UWorld.bDoDelayedUpdateCullDistanceVolumes"); }
	TEnumAsByte<enum EWorldType::Type>& WorldTypeField() { return *GetNativePointerField<TEnumAsByte<enum EWorldType::Type>*>(this, "UWorld.WorldType"); }
	bool& bIsRunningConstructionScriptField() { return *GetNativePointerField<bool*>(this, "UWorld.bIsRunningConstructionScript"); }
	bool& bShouldSimulatePhysicsField() { return *GetNativePointerField<bool*>(this, "UWorld.bShouldSimulatePhysics"); }
	FName& DebugDrawTraceTagField() { return *GetNativePointerField<FName*>(this, "UWorld.DebugDrawTraceTag"); }
	long double& LastTimeUnbuiltLightingWasEncounteredField() { return *GetNativePointerField<long double*>(this, "UWorld.LastTimeUnbuiltLightingWasEncountered"); }
	long double& TimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.TimeSeconds"); }
	long double& LoadedAtTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.LoadedAtTimeSeconds"); }
	long double& RealTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.RealTimeSeconds"); }
	long double& AudioTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UWorld.AudioTimeSeconds"); }
	float& DeltaTimeSecondsField() { return *GetNativePointerField<float*>(this, "UWorld.DeltaTimeSeconds"); }
	float& PreviousDeltaTimeSecondsField() { return *GetNativePointerField<float*>(this, "UWorld.PreviousDeltaTimeSeconds"); }
	float& PauseDelayField() { return *GetNativePointerField<float*>(this, "UWorld.PauseDelay"); }
	unsigned int& StasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisThisFrame"); }
	unsigned int& UnStasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.UnStasisThisFrame"); }
	unsigned int& StasisOssilationThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisOssilationThisFrame"); }
	unsigned int& StasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisThisFrameMax"); }
	unsigned int& UnStasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.UnStasisThisFrameMax"); }
	unsigned int& StasisOssilationThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.StasisOssilationThisFrameMax"); }
	float& StasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.StasisThisFrameAvg"); }
	float& UnStasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.UnStasisThisFrameAvg"); }
	float& StasisOssilationThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UWorld.StasisOssilationThisFrameAvg"); }
	float& StasisMaxResetTimerField() { return *GetNativePointerField<float*>(this, "UWorld.StasisMaxResetTimer"); }
	unsigned int& LastUnstasisCountField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.LastUnstasisCount"); }
	unsigned int& LoadedSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.LoadedSaveIncrementor"); }
	unsigned int& CurrentSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.CurrentSaveIncrementor"); }
	bool& bBlockAllOnNextLevelStreamingProcessField() { return *GetNativePointerField<bool*>(this, "UWorld.bBlockAllOnNextLevelStreamingProcess"); }
	FIntVector& OriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "UWorld.OriginLocation"); }
	FIntVector& RequestedOriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "UWorld.RequestedOriginLocation"); }
	bool& bOriginOffsetThisFrameField() { return *GetNativePointerField<bool*>(this, "UWorld.bOriginOffsetThisFrame"); }
	bool& bFlushingLevelStreamingField() { return *GetNativePointerField<bool*>(this, "UWorld.bFlushingLevelStreaming"); }
	long double& ForceBlockLoadTimeoutField() { return *GetNativePointerField<long double*>(this, "UWorld.ForceBlockLoadTimeout"); }
	FString& NextURLField() { return *GetNativePointerField<FString*>(this, "UWorld.NextURL"); }
	float& NextSwitchCountdownField() { return *GetNativePointerField<float*>(this, "UWorld.NextSwitchCountdown"); }
	TArray<FName>& PreparingLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UWorld.PreparingLevelNames"); }
	FName& CommittedPersistentLevelNameField() { return *GetNativePointerField<FName*>(this, "UWorld.CommittedPersistentLevelName"); }
	FString& CurrentDayTimeField() { return *GetNativePointerField<FString*>(this, "UWorld.CurrentDayTime"); }
	unsigned int& NumLightingUnbuiltObjectsField() { return *GetNativePointerField<unsigned int*>(this, "UWorld.NumLightingUnbuiltObjects"); }
	UWaveWorksComponent* WaveWorksComponentField() { return *GetNativePointerField<UWaveWorksComponent * *>(this, "UWorld.WaveWorksComponent"); }
	bool& bHasCheckedForWaveWorksField() { return *GetNativePointerField<bool*>(this, "UWorld.bHasCheckedForWaveWorks"); }
	FShorelineProps& WorldShorelinePropsField() { return *GetNativePointerField<FShorelineProps*>(this, "UWorld.WorldShorelineProps"); }
	TArray<unsigned char>& WorldShorelineMapField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UWorld.WorldShorelineMap"); }
	UTexture2D* ShorelineMapsTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UWorld.ShorelineMapsTexture"); }

	// Functions

	void CleanupActors() { NativeCall<void>(this, "UWorld.CleanupActors"); }
	bool DestroyActor(AActor* ThisActor, bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, AActor*, bool, bool>(this, "UWorld.DestroyActor", ThisActor, bNetForce, bShouldModifyLevel); }
	bool EncroachingBlockingGeometry(AActor* TestActor, FVector TestLocation, FRotator TestRotation, FVector* ProposedAdjustment, FVector* TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor*, FVector, FRotator, FVector*, FVector*>(this, "UWorld.EncroachingBlockingGeometry", TestActor, TestLocation, TestRotation, ProposedAdjustment, TraceWorldGeometryFromLocation); }
	bool FindTeleportSpot(AActor* TestActor, FVector* TestLocation, FRotator TestRotation, FVector* TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor*, FVector*, FRotator, FVector*>(this, "UWorld.FindTeleportSpot", TestActor, TestLocation, TestRotation, TraceWorldGeometryFromLocation); }
	void ForceGarbageCollection(bool bForcePurge) { NativeCall<void, bool>(this, "UWorld.ForceGarbageCollection", bForcePurge); }
	bool IsPaused() { return NativeCall<bool>(this, "UWorld.IsPaused"); }
	void MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent* Component, bool bForceGameThread) { NativeCall<void, UActorComponent*, bool>(this, "UWorld.MarkActorComponentForNeededEndOfFrameUpdate", Component, bForceGameThread); }
	void ProcessLevelStreamingVolumes(FVector* OverrideViewLocation) { NativeCall<void, FVector*>(this, "UWorld.ProcessLevelStreamingVolumes", OverrideViewLocation); }
	void SetMapNeedsLightingFullyRebuilt(int InNumLightingUnbuiltObjects) { NativeCall<void, int>(this, "UWorld.SetMapNeedsLightingFullyRebuilt", InNumLightingUnbuiltObjects); }
	AActor* SpawnActor(UClass* Class, FVector* Location, FRotator* Rotation, FActorSpawnParameters* SpawnParameters) { return NativeCall<AActor*, UClass*, FVector*, FRotator*, FActorSpawnParameters*>(this, "UWorld.SpawnActor", Class, Location, Rotation, SpawnParameters); }
	void TickNetClient(float DeltaSeconds) { NativeCall<void, float>(this, "UWorld.TickNetClient", DeltaSeconds); }
	void UpdateAllReflectionCaptures() { NativeCall<void>(this, "UWorld.UpdateAllReflectionCaptures"); }
	void AddController(AController* Controller) { NativeCall<void, AController*>(this, "UWorld.AddController", Controller); }
	bool AddLevel(ULevel* InLevel) { return NativeCall<bool, ULevel*>(this, "UWorld.AddLevel", InLevel); }
	void AddNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UWorld.AddNetworkActor", Actor); }
	void AddToWorld(ULevel* Level, FTransform* LevelTransform, bool bAlwaysConsiderTimeLimit, bool bIsInFarthestTileLayer, bool bIgnoreGroupedLevelHiding) { NativeCall<void, ULevel*, FTransform*, bool, bool, bool>(this, "UWorld.AddToWorld", Level, LevelTransform, bAlwaysConsiderTimeLimit, bIsInFarthestTileLayer, bIgnoreGroupedLevelHiding); }
	bool AllowAudioPlayback() { return NativeCall<bool>(this, "UWorld.AllowAudioPlayback"); }
	bool AreActorsInitialized() { return NativeCall<bool>(this, "UWorld.AreActorsInitialized"); }
	bool AreAlwaysLoadedLevelsLoaded() { return NativeCall<bool>(this, "UWorld.AreAlwaysLoadedLevelsLoaded"); }
	void BeginPlay() { NativeCall<void>(this, "UWorld.BeginPlay"); }
	void BroadcastLevelsChanged() { NativeCall<void>(this, "UWorld.BroadcastLevelsChanged"); }
	static FString* BuildPIEPackagePrefix(FString* result, int PIEInstanceID) { return NativeCall<FString*, FString*, int>(nullptr, "UWorld.BuildPIEPackagePrefix", result, PIEInstanceID); }
	void CancelPendingMapChange() { NativeCall<void>(this, "UWorld.CancelPendingMapChange"); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld* NewWorld) { NativeCall<void, bool, bool, UWorld*>(this, "UWorld.CleanupWorld", bSessionEnded, bCleanupResources, NewWorld); }
	void ClearWorldComponents() { NativeCall<void>(this, "UWorld.ClearWorldComponents"); }
	void CommitMapChange() { NativeCall<void>(this, "UWorld.CommitMapChange"); }
	void CompositeShorelineIntoWorld(FShorelineMetadata* Shoreline, FTransform* Transform) { NativeCall<void, FShorelineMetadata*, FTransform*>(this, "UWorld.CompositeShorelineIntoWorld", Shoreline, Transform); }
	bool CompositeShorelineIntoWorldInternal(FShorelineMetadata* Shoreline, FTransform* Transform) { return NativeCall<bool, FShorelineMetadata*, FTransform*>(this, "UWorld.CompositeShorelineIntoWorldInternal", Shoreline, Transform); }
	bool ContainsActor(AActor* Actor) { return NativeCall<bool, AActor*>(this, "UWorld.ContainsActor", Actor); }
	bool ContainsLevel(ULevel* InLevel) { return NativeCall<bool, ULevel*>(this, "UWorld.ContainsLevel", InLevel); }
	static FString* ConvertToPIEPackageName(FString* result, FString* PackageName, int PIEInstanceID) { return NativeCall<FString*, FString*, FString*, int>(nullptr, "UWorld.ConvertToPIEPackageName", result, PackageName, PIEInstanceID); }
	void CreatePhysicsScene() { NativeCall<void>(this, "UWorld.CreatePhysicsScene"); }
	bool DestroySwappedPC(UNetConnection* Connection) { return NativeCall<bool, UNetConnection*>(this, "UWorld.DestroySwappedPC", Connection); }
	static UWorld* DuplicateWorldForPIE(FString* PackageName, UWorld* OwningWorld) { return NativeCall<UWorld*, FString*, UWorld*>(nullptr, "UWorld.DuplicateWorldForPIE", PackageName, OwningWorld); }
	void EnsureCollisionTreeIsBuilt() { NativeCall<void>(this, "UWorld.EnsureCollisionTreeIsBuilt"); }
	void FindOrCreateSerializedObject(FAtlasSaveObjectData* SavedObject, TArray<UObject*>* Levels, FName Name, TArray<AActor*>* ActorsToBeginPlay, UWorld* World) { NativeCall<void, FAtlasSaveObjectData*, TArray<UObject*>*, FName, TArray<AActor*>*, UWorld*>(this, "UWorld.FindOrCreateSerializedObject", SavedObject, Levels, Name, ActorsToBeginPlay, World); }
	void FinishDestroy() { NativeCall<void>(this, "UWorld.FinishDestroy"); }
	int GetActorCount() { return NativeCall<int>(this, "UWorld.GetActorCount"); }
	FString* GetAddressURL(FString* result) { return NativeCall<FString*, FString*>(this, "UWorld.GetAddressURL", result); }
	long double GetAudioTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetAudioTimeSeconds"); }
	TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const, TAutoWeakObjectPtr<AController> const, int>* GetControllerIterator(TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const, TAutoWeakObjectPtr<AController> const, int>* result) { return NativeCall<TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const, TAutoWeakObjectPtr<AController> const, int>*, TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<AController>> const, TAutoWeakObjectPtr<AController> const, int>*>(this, "UWorld.GetControllerIterator", result); }
	ULevel* GetCurrentLevel() { return NativeCall<ULevel*>(this, "UWorld.GetCurrentLevel"); }
	float GetDefaultGravityZ() { return NativeCall<float>(this, "UWorld.GetDefaultGravityZ"); }
	float GetDeltaSeconds() { return NativeCall<float>(this, "UWorld.GetDeltaSeconds"); }
	float GetDistanceToShore(FVector2D* Position) { return NativeCall<float, FVector2D*>(this, "UWorld.GetDistanceToShore", Position); }
	ULocalPlayer* GetFirstLocalPlayerFromController() { return NativeCall<ULocalPlayer*>(this, "UWorld.GetFirstLocalPlayerFromController"); }
	APlayerController* GetFirstPlayerController() { return NativeCall<APlayerController*>(this, "UWorld.GetFirstPlayerController"); }
	float GetGravityZ() { return NativeCall<float>(this, "UWorld.GetGravityZ"); }
	ULevel* GetLevel(int InLevelIndex) { return NativeCall<ULevel*, int>(this, "UWorld.GetLevel", InLevelIndex); }
	ALevelScriptActor* GetLevelScriptActor(ULevel* OwnerLevel) { return NativeCall<ALevelScriptActor*, ULevel*>(this, "UWorld.GetLevelScriptActor", OwnerLevel); }
	TArray<ULevel*>* GetLevels() { return NativeCall<TArray<ULevel*>*>(this, "UWorld.GetLevels"); }
	FString* GetLocalURL(FString* result) { return NativeCall<FString*, FString*>(this, "UWorld.GetLocalURL", result); }
	FString* GetMapName(FString* result) { return NativeCall<FString*, FString*>(this, "UWorld.GetMapName", result); }
	void GetMatineeActors(TArray<AMatineeActor*>* OutMatineeActors) { NativeCall<void, TArray<AMatineeActor*>*>(this, "UWorld.GetMatineeActors", OutMatineeActors); }
	UClass* GetModPrioritizedClass(FName* NameIn) { return NativeCall<UClass*, FName*>(this, "UWorld.GetModPrioritizedClass", NameIn); }
	int GetNetRelevantActorCount() { return NativeCall<int>(this, "UWorld.GetNetRelevantActorCount"); }
	TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APawn>> const, TAutoWeakObjectPtr<APawn> const, int>* GetPawnIterator(TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APawn>> const, TAutoWeakObjectPtr<APawn> const, int>* result) { return NativeCall<TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APawn>> const, TAutoWeakObjectPtr<APawn> const, int>*, TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APawn>> const, TAutoWeakObjectPtr<APawn> const, int>*>(this, "UWorld.GetPawnIterator", result); }
	TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const, TAutoWeakObjectPtr<APlayerController> const, int>* GetPlayerControllerIterator(TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const, TAutoWeakObjectPtr<APlayerController> const, int>* result) { return NativeCall<TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const, TAutoWeakObjectPtr<APlayerController> const, int>*, TIndexedContainerIterator<TArray<TAutoWeakObjectPtr<APlayerController>> const, TAutoWeakObjectPtr<APlayerController> const, int>*>(this, "UWorld.GetPlayerControllerIterator", result); }
	long double GetRealTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetRealTimeSeconds"); }
	float GetShoreDepth(FVector2D* Position) { return NativeCall<float, FVector2D*>(this, "UWorld.GetShoreDepth", Position); }
	FVector* GetShorelineDampeningFactors(FVector* result, FVector2D* Position, float WindSpeed) { return NativeCall<FVector*, FVector*, FVector2D*, float>(this, "UWorld.GetShorelineDampeningFactors", result, Position, WindSpeed); }
	long double GetTimeSeconds() { return NativeCall<long double>(this, "UWorld.GetTimeSeconds"); }
	UWaveWorksComponent* GetWaveWorksComponent() { return NativeCall<UWaveWorksComponent*>(this, "UWorld.GetWaveWorksComponent"); }
	static FVector4* GetWindSpeedDampeningInfluence(FVector4* result, float WindSpeed) { return NativeCall<FVector4*, FVector4*, float>(nullptr, "UWorld.GetWindSpeedDampeningInfluence", result, WindSpeed); }
	AWorldSettings* GetWorldSettings(bool bCheckStreamingPesistent, bool bChecked) { return NativeCall<AWorldSettings*, bool, bool>(this, "UWorld.GetWorldSettings", bCheckStreamingPesistent, bChecked); }
	bool HasBegunPlay() { return NativeCall<bool>(this, "UWorld.HasBegunPlay"); }
	void InitWorld(UWorld::InitializationValues IVS) { NativeCall<void, UWorld::InitializationValues>(this, "UWorld.InitWorld", IVS); }
	void InitializeNewWorld(UWorld::InitializationValues IVS) { NativeCall<void, UWorld::InitializationValues>(this, "UWorld.InitializeNewWorld", IVS); }
	void InitializeShorelineToDefault() { NativeCall<void>(this, "UWorld.InitializeShorelineToDefault"); }
	bool IsClient() { return NativeCall<bool>(this, "UWorld.IsClient"); }
	bool IsGameWorld() { return NativeCall<bool>(this, "UWorld.IsGameWorld"); }
	bool IsInSeamlessTravel() { return NativeCall<bool>(this, "UWorld.IsInSeamlessTravel"); }
	bool IsLevelLoadedByName(FName* LevelName) { return NativeCall<bool, FName*>(this, "UWorld.IsLevelLoadedByName", LevelName); }
	bool IsPlayInEditor() { return NativeCall<bool>(this, "UWorld.IsPlayInEditor"); }
	bool IsPreparingMapChange() { return NativeCall<bool>(this, "UWorld.IsPreparingMapChange"); }
	bool IsServer() { return NativeCall<bool>(this, "UWorld.IsServer"); }
	bool IsStreamingLevelLoaded(FName* LevelName, unsigned int UniqueID) { return NativeCall<bool, FName*, unsigned int>(this, "UWorld.IsStreamingLevelLoaded", LevelName, UniqueID); }
	bool IsVisibilityRequestPending() { return NativeCall<bool>(this, "UWorld.IsVisibilityRequestPending"); }
	bool LoadFromFile(FString* filename) { return NativeCall<bool, FString*>(this, "UWorld.LoadFromFile", filename); }
	void ModifyLevel(ULevel* Level) { NativeCall<void, ULevel*>(this, "UWorld.ModifyLevel", Level); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UWorld.PostDuplicate", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "UWorld.PostLoad"); }
	void PostSaveRoot(bool bCleanupIsRequired) { NativeCall<void, bool>(this, "UWorld.PostSaveRoot", bCleanupIsRequired); }
	bool PreSaveRoot(const wchar_t* Filename, TArray<FString>* AdditionalPackagesToCook) { return NativeCall<bool, const wchar_t*, TArray<FString>*>(this, "UWorld.PreSaveRoot", Filename, AdditionalPackagesToCook); }
	void PrepareMapChange(TArray<FName>* LevelNames) { NativeCall<void, TArray<FName>*>(this, "UWorld.PrepareMapChange", LevelNames); }
	void RebuildShoreline() { NativeCall<void>(this, "UWorld.RebuildShoreline"); }
	void RemoveActor(AActor* Actor, bool bShouldModifyLevel) { NativeCall<void, AActor*, bool>(this, "UWorld.RemoveActor", Actor, bShouldModifyLevel); }
	void RemoveController(AController* Controller) { NativeCall<void, AController*>(this, "UWorld.RemoveController", Controller); }
	void RemoveFromInternalOctree(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UWorld.RemoveFromInternalOctree", InComponent); }
	void RemoveFromInternalSimpleOctree(FOctreeElementSimple* InElement) { NativeCall<void, FOctreeElementSimple*>(this, "UWorld.RemoveFromInternalSimpleOctree", InElement); }
	void RemoveFromWorld(ULevel* Level) { NativeCall<void, ULevel*>(this, "UWorld.RemoveFromWorld", Level); }
	void RemoveNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UWorld.RemoveNetworkActor", Actor); }
	static FString* RemovePIEPrefix(FString* result, FString* Source) { return NativeCall<FString*, FString*, FString*>(nullptr, "UWorld.RemovePIEPrefix", result, Source); }
	void RequestNewWorldOrigin(FIntVector InNewOriginLocation) { NativeCall<void, FIntVector>(this, "UWorld.RequestNewWorldOrigin", InNewOriginLocation); }
	void SeamlessTravel(FString* SeamlessTravelURL, bool bAbsolute, FGuid MapPackageGuid) { NativeCall<void, FString*, bool, FGuid>(this, "UWorld.SeamlessTravel", SeamlessTravelURL, bAbsolute, MapPackageGuid); }
	void ServerTravel(FString* FURL, bool bAbsolute, bool bShouldSkipGameNotify) { NativeCall<void, FString*, bool, bool>(this, "UWorld.ServerTravel", FURL, bAbsolute, bShouldSkipGameNotify); }
	bool SetNewWorldOrigin(FIntVector InNewOriginLocation) { return NativeCall<bool, FIntVector>(this, "UWorld.SetNewWorldOrigin", InNewOriginLocation); }
	void SetWaveWorksComponent(UUI_HostSession* SessionUI) { NativeCall<void, UUI_HostSession*>(this, "UWorld.SetWaveWorksComponent", SessionUI); }
	void SetupParameterCollectionInstances() { NativeCall<void>(this, "UWorld.SetupParameterCollectionInstances"); }
	static FString* StripPIEPrefixFromPackageName(FString* result, FString* PrefixedName, FString* Prefix) { return NativeCall<FString*, FString*, FString*, FString*>(nullptr, "UWorld.StripPIEPrefixFromPackageName", result, PrefixedName, Prefix); }
	long double TimeSince(long double Time) { return NativeCall<long double, long double>(this, "UWorld.TimeSince", Time); }
	void UpdateConstraintActors() { NativeCall<void>(this, "UWorld.UpdateConstraintActors"); }
	void UpdateCullDistanceVolumes() { NativeCall<void>(this, "UWorld.UpdateCullDistanceVolumes"); }
	void UpdateInternalOctreeTransform(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UWorld.UpdateInternalOctreeTransform", InComponent); }
	void UpdateInternalSimpleOctreeTransform(FOctreeElementSimple* InElement) { NativeCall<void, FOctreeElementSimple*>(this, "UWorld.UpdateInternalSimpleOctreeTransform", InElement); }
	void UpdateParameterCollectionInstances(bool bUpdateInstanceUniformBuffers) { NativeCall<void, bool>(this, "UWorld.UpdateParameterCollectionInstances", bUpdateInstanceUniformBuffers); }
	void UpdateWorldComponents(bool bRerunConstructionScripts, bool bCurrentLevelOnly) { NativeCall<void, bool, bool>(this, "UWorld.UpdateWorldComponents", bRerunConstructionScripts, bCurrentLevelOnly); }
	void WelcomePlayer(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "UWorld.WelcomePlayer", Connection); }
	void FinishAsyncTrace() { NativeCall<void>(this, "UWorld.FinishAsyncTrace"); }
	bool LineTraceMulti(TArray<FHitResult>* OutHits, FVector* Start, FVector* End, FCollisionQueryParams* Params, FCollisionObjectQueryParams* ObjectQueryParams, bool bDoSort, bool bCullBackfaces, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, TArray<FHitResult>*, FVector*, FVector*, FCollisionQueryParams*, FCollisionObjectQueryParams*, bool, bool, bool, float>(this, "UWorld.LineTraceMulti", OutHits, Start, End, Params, ObjectQueryParams, bDoSort, bCullBackfaces, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceMulti(TArray<FHitResult>* OutHits, FVector* Start, FVector* End, ECollisionChannel TraceChannel, FCollisionQueryParams* Params, FCollisionResponseParams* ResponseParam, bool bDoSort, bool bCullBackfaces, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, TArray<FHitResult>*, FVector*, FVector*, ECollisionChannel, FCollisionQueryParams*, FCollisionResponseParams*, bool, bool, bool, float>(this, "UWorld.LineTraceMulti", OutHits, Start, End, TraceChannel, Params, ResponseParam, bDoSort, bCullBackfaces, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceSingle(FHitResult* OutHit, FVector* Start, FVector* End, FCollisionQueryParams* Params, FCollisionObjectQueryParams* ObjectQueryParams, bool bUsePostFilter, float NegativeDistanceTolerance) { return NativeCall<bool, FHitResult*, FVector*, FVector*, FCollisionQueryParams*, FCollisionObjectQueryParams*, bool, float>(this, "UWorld.LineTraceSingle", OutHit, Start, End, Params, ObjectQueryParams, bUsePostFilter, NegativeDistanceTolerance); }
	bool LineTraceSingle(FHitResult* OutHit, FVector* Start, FVector* End, ECollisionChannel TraceChannel, FCollisionQueryParams* Params, FCollisionResponseParams* ResponseParam, bool bUsePostfilter, float NegativeDistanceTolerance) { return NativeCall<bool, FHitResult*, FVector*, FVector*, ECollisionChannel, FCollisionQueryParams*, FCollisionResponseParams*, bool, float>(this, "UWorld.LineTraceSingle", OutHit, Start, End, TraceChannel, Params, ResponseParam, bUsePostfilter, NegativeDistanceTolerance); }
	bool LineTraceTest(FVector* Start, FVector* End, ECollisionChannel TraceChannel, FCollisionQueryParams* Params, FCollisionResponseParams* ResponseParam) { return NativeCall<bool, FVector*, FVector*, ECollisionChannel, FCollisionQueryParams*, FCollisionResponseParams*>(this, "UWorld.LineTraceTest", Start, End, TraceChannel, Params, ResponseParam); }
	bool QueryTraceData(FTraceHandle* Handle, int FrameOffset, FTraceDatum* OutData) { return NativeCall<bool, FTraceHandle*, int, FTraceDatum*>(this, "UWorld.QueryTraceData", Handle, FrameOffset, OutData); }
	void ResetAsyncTrace() { NativeCall<void>(this, "UWorld.ResetAsyncTrace"); }
	void StartAsyncTrace() { NativeCall<void>(this, "UWorld.StartAsyncTrace"); }
	void FinishPhysicsSim() { NativeCall<void>(this, "UWorld.FinishPhysicsSim"); }
	void StartPhysicsSim() { NativeCall<void>(this, "UWorld.StartPhysicsSim"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UWorld.GetPrivateStaticClass", Package); }
};

struct UEngine : UObject
{
	struct FOnTravelFailure;
	struct FOnNetworkFailure;
	struct FWorldAddedEvent;
	struct FWorldDestroyedEvent;
	struct FCopyPropertiesForUnrelatedObjectsParams {};
	TWeakObjectPtr<AMatineeActor>& ActiveMatineeField() { return *GetNativePointerField<TWeakObjectPtr<AMatineeActor>*>(this, "UEngine.ActiveMatinee"); }
	TArray<FString>& AdditionalFontNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.AdditionalFontNames"); }
	TSubclassOf<UConsole>& ConsoleClassField() { return *GetNativePointerField<TSubclassOf<UConsole>*>(this, "UEngine.ConsoleClass"); }
	TSubclassOf<ULocalPlayer>& LocalPlayerClassField() { return *GetNativePointerField<TSubclassOf<ULocalPlayer>*>(this, "UEngine.LocalPlayerClass"); }
	TSubclassOf<AWorldSettings>& WorldSettingsClassField() { return *GetNativePointerField<TSubclassOf<AWorldSettings>*>(this, "UEngine.WorldSettingsClass"); }
	TSubclassOf<UGameUserSettings>& GameUserSettingsClassField() { return *GetNativePointerField<TSubclassOf<UGameUserSettings>*>(this, "UEngine.GameUserSettingsClass"); }
	UGameUserSettings* GameUserSettingsField() { return *GetNativePointerField<UGameUserSettings * *>(this, "UEngine.GameUserSettings"); }
	TSubclassOf<ALevelScriptActor>& LevelScriptActorClassField() { return *GetNativePointerField<TSubclassOf<ALevelScriptActor>*>(this, "UEngine.LevelScriptActorClass"); }
	UPrimalGlobals* GameSingletonField() { return *GetNativePointerField<UPrimalGlobals * *>(this, "UEngine.GameSingleton"); }
	UTireType* DefaultTireTypeField() { return *GetNativePointerField<UTireType * *>(this, "UEngine.DefaultTireType"); }
	TSubclassOf<APawn>& DefaultPreviewPawnClassField() { return *GetNativePointerField<TSubclassOf<APawn>*>(this, "UEngine.DefaultPreviewPawnClass"); }
	FString& PlayOnConsoleSaveDirField() { return *GetNativePointerField<FString*>(this, "UEngine.PlayOnConsoleSaveDir"); }
	UTexture2D* DefaultTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UEngine.DefaultTexture"); }
	UTexture* DefaultDiffuseTextureField() { return *GetNativePointerField<UTexture * *>(this, "UEngine.DefaultDiffuseTexture"); }
	UTexture2D* DefaultBSPVertexTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UEngine.DefaultBSPVertexTexture"); }
	UTexture2D* HighFrequencyNoiseTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UEngine.HighFrequencyNoiseTexture"); }
	UTexture2D* DefaultBokehTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UEngine.DefaultBokehTexture"); }
	UMaterial* WireframeMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.WireframeMaterial"); }
	UMaterial* DebugMeshMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.DebugMeshMaterial"); }
	UMaterial* LevelColorationLitMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.LevelColorationLitMaterial"); }
	UMaterial* LevelColorationUnlitMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.LevelColorationUnlitMaterial"); }
	UMaterial* LightingTexelDensityMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.LightingTexelDensityMaterial"); }
	UMaterial* ShadedLevelColorationLitMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.ShadedLevelColorationLitMaterial"); }
	UMaterial* ShadedLevelColorationUnlitMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.ShadedLevelColorationUnlitMaterial"); }
	UMaterial* RemoveSurfaceMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.RemoveSurfaceMaterial"); }
	UMaterial* VertexColorMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.VertexColorMaterial"); }
	UMaterial* VertexColorViewModeMaterial_ColorOnlyField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.VertexColorViewModeMaterial_ColorOnly"); }
	UMaterial* VertexColorViewModeMaterial_AlphaAsColorField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.VertexColorViewModeMaterial_AlphaAsColor"); }
	UMaterial* VertexColorViewModeMaterial_RedOnlyField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.VertexColorViewModeMaterial_RedOnly"); }
	UMaterial* VertexColorViewModeMaterial_GreenOnlyField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.VertexColorViewModeMaterial_GreenOnly"); }
	UMaterial* VertexColorViewModeMaterial_BlueOnlyField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.VertexColorViewModeMaterial_BlueOnly"); }
	UMaterial* ConstraintLimitMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.ConstraintLimitMaterial"); }
	UMaterial* InvalidLightmapSettingsMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.InvalidLightmapSettingsMaterial"); }
	UMaterial* PreviewShadowsIndicatorMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.PreviewShadowsIndicatorMaterial"); }
	UMaterial* ArrowMaterialField() { return *GetNativePointerField<UMaterial * *>(this, "UEngine.ArrowMaterial"); }
	FLinearColor& LightingOnlyBrightnessField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightingOnlyBrightness"); }
	TArray<FColor>& LightComplexityColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "UEngine.LightComplexityColors"); }
	TArray<FLinearColor>& ShaderComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "UEngine.ShaderComplexityColors"); }
	TArray<FLinearColor>& StationaryLightOverlapColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "UEngine.StationaryLightOverlapColors"); }
	float& MaxPixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxPixelShaderAdditiveComplexityCount"); }
	float& MaxES2PixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxES2PixelShaderAdditiveComplexityCount"); }
	float& MinLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MinLightMapDensity"); }
	float& IdealLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.IdealLightMapDensity"); }
	float& MaxLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MaxLightMapDensity"); }
	float& RenderLightMapDensityGrayscaleScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityGrayscaleScale"); }
	float& RenderLightMapDensityColorScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityColorScale"); }
	FLinearColor& LightMapDensityVertexMappedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensityVertexMappedColor"); }
	FLinearColor& LightMapDensitySelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensitySelectedColor"); }
	TArray<FStatColorMapping>& StatColorMappingsField() { return *GetNativePointerField<TArray<FStatColorMapping>*>(this, "UEngine.StatColorMappings"); }
	UPhysicalMaterial* DefaultPhysMaterialField() { return *GetNativePointerField<UPhysicalMaterial * *>(this, "UEngine.DefaultPhysMaterial"); }
	TArray<FGameNameRedirect>& ActiveGameNameRedirectsField() { return *GetNativePointerField<TArray<FGameNameRedirect>*>(this, "UEngine.ActiveGameNameRedirects"); }
	TArray<FClassRedirect>& ActiveClassRedirectsField() { return *GetNativePointerField<TArray<FClassRedirect>*>(this, "UEngine.ActiveClassRedirects"); }
	TArray<FPluginRedirect>& ActivePluginRedirectsField() { return *GetNativePointerField<TArray<FPluginRedirect>*>(this, "UEngine.ActivePluginRedirects"); }
	TArray<FStructRedirect>& ActiveStructRedirectsField() { return *GetNativePointerField<TArray<FStructRedirect>*>(this, "UEngine.ActiveStructRedirects"); }
	UTexture2D* PreIntegratedSkinBRDFTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UEngine.PreIntegratedSkinBRDFTexture"); }
	UTexture2D* MiniFontTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UEngine.MiniFontTexture"); }
	UTexture* WeightMapPlaceholderTextureField() { return *GetNativePointerField<UTexture * *>(this, "UEngine.WeightMapPlaceholderTexture"); }
	UTexture2D* LightMapDensityTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UEngine.LightMapDensityTexture"); }
	IEngineLoop* EngineLoopField() { return *GetNativePointerField<IEngineLoop * *>(this, "UEngine.EngineLoop"); }
	TArray<FString>& DeferredCommandsField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.DeferredCommands"); }
	int& TickCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.TickCycles"); }
	int& GameCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.GameCycles"); }
	int& ClientCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.ClientCycles"); }
	float& NearClipPlaneField() { return *GetNativePointerField<float*>(this, "UEngine.NearClipPlane"); }
	float& TimeBetweenPurgingPendingKillObjectsField() { return *GetNativePointerField<float*>(this, "UEngine.TimeBetweenPurgingPendingKillObjects"); }
	float& AsyncLoadingTimeLimitField() { return *GetNativePointerField<float*>(this, "UEngine.AsyncLoadingTimeLimit"); }
	float& PriorityAsyncLoadingExtraTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PriorityAsyncLoadingExtraTime"); }
	float& LevelStreamingActorsUpdateTimeLimitField() { return *GetNativePointerField<float*>(this, "UEngine.LevelStreamingActorsUpdateTimeLimit"); }
	int& LevelStreamingComponentsRegistrationGranularityField() { return *GetNativePointerField<int*>(this, "UEngine.LevelStreamingComponentsRegistrationGranularity"); }
	int& MaximumLoopIterationCountField() { return *GetNativePointerField<int*>(this, "UEngine.MaximumLoopIterationCount"); }
	//TRange<float>& SmoothedFrameRateRangeField() { return *GetNativePointerField<TRange<float>*>(this, "UEngine.SmoothedFrameRateRange"); }
	int& NumPawnsAllowedToBeSpawnedInAFrameField() { return *GetNativePointerField<int*>(this, "UEngine.NumPawnsAllowedToBeSpawnedInAFrame"); }
	FColor& C_WorldBoxField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WorldBox"); }
	FColor& C_BrushWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushWire"); }
	FColor& C_AddWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_AddWire"); }
	FColor& C_SubtractWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SubtractWire"); }
	FColor& C_SemiSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SemiSolidWire"); }
	FColor& C_NonSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_NonSolidWire"); }
	FColor& C_WireBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WireBackground"); }
	FColor& C_ScaleBoxHiField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_ScaleBoxHi"); }
	FColor& C_VolumeCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_VolumeCollision"); }
	FColor& C_BSPCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BSPCollision"); }
	FColor& C_OrthoBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_OrthoBackground"); }
	FColor& C_VolumeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_Volume"); }
	FColor& C_BrushShapeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushShape"); }
	float& StreamingDistanceFactorField() { return *GetNativePointerField<float*>(this, "UEngine.StreamingDistanceFactor"); }
	TEnumAsByte<enum ETransitionType>& TransitionTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETransitionType>*>(this, "UEngine.TransitionType"); }
	FString& TransitionDescriptionField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionDescription"); }
	FString& TransitionGameModeField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionGameMode"); }
	float& MeshLODRangeField() { return *GetNativePointerField<float*>(this, "UEngine.MeshLODRange"); }
	float& CameraRotationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraRotationThreshold"); }
	float& CameraTranslationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraTranslationThreshold"); }
	float& PrimitiveProbablyVisibleTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PrimitiveProbablyVisibleTime"); }
	float& MaxOcclusionPixelsFractionField() { return *GetNativePointerField<float*>(this, "UEngine.MaxOcclusionPixelsFraction"); }
	int& MaxParticleResizeField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResize"); }
	int& MaxParticleResizeWarnField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResizeWarn"); }
	TArray<FDropNoteInfo>& PendingDroppedNotesField() { return *GetNativePointerField<TArray<FDropNoteInfo>*>(this, "UEngine.PendingDroppedNotes"); }
	FRigidBodyErrorCorrection& PhysicErrorCorrectionField() { return *GetNativePointerField<FRigidBodyErrorCorrection*>(this, "UEngine.PhysicErrorCorrection"); }
	float& NetClientTicksPerSecondField() { return *GetNativePointerField<float*>(this, "UEngine.NetClientTicksPerSecond"); }
	float& DisplayGammaField() { return *GetNativePointerField<float*>(this, "UEngine.DisplayGamma"); }
	float& MinDesiredFrameRateField() { return *GetNativePointerField<float*>(this, "UEngine.MinDesiredFrameRate"); }
	FLinearColor& DefaultSelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.DefaultSelectedMaterialColor"); }
	FLinearColor& SelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColor"); }
	FLinearColor& SelectionOutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectionOutlineColor"); }
	FLinearColor& SelectedMaterialColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColorOverride"); }
	bool& bIsOverridingSelectedColorField() { return *GetNativePointerField<bool*>(this, "UEngine.bIsOverridingSelectedColor"); }
	unsigned int& bEnableVisualLogRecordingOnStartField() { return *GetNativePointerField<unsigned int*>(this, "UEngine.bEnableVisualLogRecordingOnStart"); }
	UDeviceProfileManager* DeviceProfileManagerField() { return *GetNativePointerField<UDeviceProfileManager * *>(this, "UEngine.DeviceProfileManager"); }
	int& ScreenSaverInhibitorSemaphoreField() { return *GetNativePointerField<int*>(this, "UEngine.ScreenSaverInhibitorSemaphore"); }
	FString& MatineeCaptureNameField() { return *GetNativePointerField<FString*>(this, "UEngine.MatineeCaptureName"); }
	FString& MatineePackageCaptureNameField() { return *GetNativePointerField<FString*>(this, "UEngine.MatineePackageCaptureName"); }
	int& MatineeCaptureFPSField() { return *GetNativePointerField<int*>(this, "UEngine.MatineeCaptureFPS"); }
	TEnumAsByte<enum EMatineeCaptureType::Type>& MatineeCaptureTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMatineeCaptureType::Type>*>(this, "UEngine.MatineeCaptureType"); }
	bool& bNoTextureStreamingField() { return *GetNativePointerField<bool*>(this, "UEngine.bNoTextureStreaming"); }
	FString& ParticleEventManagerClassPathField() { return *GetNativePointerField<FString*>(this, "UEngine.ParticleEventManagerClassPath"); }
	TArray<FScreenMessageString>& PriorityScreenMessagesField() { return *GetNativePointerField<TArray<FScreenMessageString>*>(this, "UEngine.PriorityScreenMessages"); }
	float& SelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensity"); }
	float& BSPSelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.BSPSelectionHighlightIntensity"); }
	float& HoverHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.HoverHighlightIntensity"); }
	float& SelectionHighlightIntensityBillboardsField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensityBillboards"); }
	FString& LastModDownloadTextField() { return *GetNativePointerField<FString*>(this, "UEngine.LastModDownloadText"); }
	FString& PrimalNetAuth_MyIPStrField() { return *GetNativePointerField<FString*>(this, "UEngine.PrimalNetAuth_MyIPStr"); }
	FString& PrimalNetAuth_TokenField() { return *GetNativePointerField<FString*>(this, "UEngine.PrimalNetAuth_Token"); }
	UEngine::FOnTravelFailure& TravelFailureEventField() { return *GetNativePointerField<UEngine::FOnTravelFailure*>(this, "UEngine.TravelFailureEvent"); }
	UEngine::FOnNetworkFailure& NetworkFailureEventField() { return *GetNativePointerField<UEngine::FOnNetworkFailure*>(this, "UEngine.NetworkFailureEvent"); }
	bool& bIsInitializedField() { return *GetNativePointerField<bool*>(this, "UEngine.bIsInitialized"); }
	TMap<int, FScreenMessageString, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, FScreenMessageString, 0> > & ScreenMessagesField() { return *GetNativePointerField<TMap<int, FScreenMessageString, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, FScreenMessageString, 0> >*>(this, "UEngine.ScreenMessages"); }
	FAudioDevice* AudioDeviceField() { return *GetNativePointerField<FAudioDevice * *>(this, "UEngine.AudioDevice"); }
	TSharedPtr<IStereoRendering, 1> & StereoRenderingDeviceField() { return *GetNativePointerField<TSharedPtr<IStereoRendering, 1>*>(this, "UEngine.StereoRenderingDevice"); }
	TSharedPtr<IHeadMountedDisplay, 1> & HMDDeviceField() { return *GetNativePointerField<TSharedPtr<IHeadMountedDisplay, 1>*>(this, "UEngine.HMDDevice"); }
	UEngine::FWorldAddedEvent& WorldAddedEventField() { return *GetNativePointerField<UEngine::FWorldAddedEvent*>(this, "UEngine.WorldAddedEvent"); }
	UEngine::FWorldDestroyedEvent& WorldDestroyedEventField() { return *GetNativePointerField<UEngine::FWorldDestroyedEvent*>(this, "UEngine.WorldDestroyedEvent"); }
	FRunnableThread* ScreenSaverInhibitorField() { return *GetNativePointerField<FRunnableThread * *>(this, "UEngine.ScreenSaverInhibitor"); }
	FScreenSaverInhibitor* ScreenSaverInhibitorRunnableField() { return *GetNativePointerField<FScreenSaverInhibitor * *>(this, "UEngine.ScreenSaverInhibitorRunnable"); }
	bool& bPendingHardwareSurveyResultsField() { return *GetNativePointerField<bool*>(this, "UEngine.bPendingHardwareSurveyResults"); }
	TArray<FNetDriverDefinition>& NetDriverDefinitionsField() { return *GetNativePointerField<TArray<FNetDriverDefinition>*>(this, "UEngine.NetDriverDefinitions"); }
	TArray<FString>& ServerActorsField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.ServerActors"); }
	TArray<FWorldContext>& WorldListField() { return *GetNativePointerField<TArray<FWorldContext>*>(this, "UEngine.WorldList"); }
	int& NextWorldContextHandleField() { return *GetNativePointerField<int*>(this, "UEngine.NextWorldContextHandle"); }
	//TArray<UEngine::FEngineStatFuncs>& EngineStatsField() { return *GetNativePointerField<TArray<UEngine::FEngineStatFuncs>*>(this, "UEngine.EngineStats"); }

	// Functions

	FAudioDevice* GetAudioDevice() { return NativeCall<FAudioDevice*>(this, "UEngine.GetAudioDevice"); }
	FString* GetLastModDownloadText(FString* result) { return NativeCall<FString*, FString*>(this, "UEngine.GetLastModDownloadText", result); }
	bool IsInitialized() { return NativeCall<bool>(this, "UEngine.IsInitialized"); }
	void FEngineStatFuncs() { NativeCall<void>(this, "UEngine.FEngineStatFuncs"); }
	void DumpFPSChart(FString* InMapName, bool bForceDump) { NativeCall<void, FString*, bool>(this, "UEngine.DumpFPSChart", InMapName, bForceDump); }
	void DumpFPSChartToLog(float TotalTime, float DeltaTime, int NumFrames, FString* InMapName) { NativeCall<void, float, float, int, FString*>(this, "UEngine.DumpFPSChartToLog", TotalTime, DeltaTime, NumFrames, InMapName); }
	void StartFPSChart() { NativeCall<void>(this, "UEngine.StartFPSChart"); }
	void StopFPSChart() { NativeCall<void>(this, "UEngine.StopFPSChart"); }
	void TickFPSChart(float DeltaSeconds) { NativeCall<void, float>(this, "UEngine.TickFPSChart", DeltaSeconds); }
	FString* GetCurrentModPath(FString* result) { return NativeCall<FString*, FString*>(this, "UEngine.GetCurrentModPath", result); }
	void Tick(float DeltaSeconds, bool bIdleMode) { NativeCall<void, float, bool>(this, "UEngine.Tick", DeltaSeconds, bIdleMode); }
	void BrowseToDefaultMap(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.BrowseToDefaultMap", Context); }
	void CancelAllPending() { NativeCall<void>(this, "UEngine.CancelAllPending"); }
	void CancelPending(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPending", Context); }
	void CancelPending(UWorld* InWorld, UPendingNetGame* NewPendingNetGame) { NativeCall<void, UWorld*, UPendingNetGame*>(this, "UEngine.CancelPending", InWorld, NewPendingNetGame); }
	void CancelPendingMapChange(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPendingMapChange", Context); }
	void CleanupPackagesToFullyLoad(FWorldContext* Context, EFullyLoadPackageType FullyLoadType, FString* Tag) { NativeCall<void, FWorldContext*, EFullyLoadPackageType, FString*>(this, "UEngine.CleanupPackagesToFullyLoad", Context, FullyLoadType, Tag); }
	void ClearDebugDisplayProperties() { NativeCall<void>(this, "UEngine.ClearDebugDisplayProperties"); }
	bool CommitMapChange(FWorldContext* Context) { return NativeCall<bool, FWorldContext*>(this, "UEngine.CommitMapChange", Context); }
	void ConditionalCommitMapChange(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.ConditionalCommitMapChange", Context); }
	static void CopyPropertiesForUnrelatedObjects(UObject* OldObject, UObject* NewObject, UEngine::FCopyPropertiesForUnrelatedObjectsParams Params) { NativeCall<void, UObject*, UObject*, UEngine::FCopyPropertiesForUnrelatedObjectsParams>(nullptr, "UEngine.CopyPropertiesForUnrelatedObjects", OldObject, NewObject, Params); }
	void CreateGameUserSettings() { NativeCall<void>(this, "UEngine.CreateGameUserSettings"); }
	bool CreateNamedNetDriver(UPendingNetGame* PendingNetGame, FName NetDriverName, FName NetDriverDefinition) { return NativeCall<bool, UPendingNetGame*, FName, FName>(this, "UEngine.CreateNamedNetDriver", PendingNetGame, NetDriverName, NetDriverDefinition); }
	bool CreateNamedNetDriver(UWorld* InWorld, FName NetDriverName, FName NetDriverDefinition) { return NativeCall<bool, UWorld*, FName, FName>(this, "UEngine.CreateNamedNetDriver", InWorld, NetDriverName, NetDriverDefinition); }
	FWorldContext* CreateNewWorldContext(EWorldType::Type WorldType) { return NativeCall<FWorldContext*, EWorldType::Type>(this, "UEngine.CreateNewWorldContext", WorldType); }
	void DestroyNamedNetDriver(UPendingNetGame* PendingNetGame, FName NetDriverName) { NativeCall<void, UPendingNetGame*, FName>(this, "UEngine.DestroyNamedNetDriver", PendingNetGame, NetDriverName); }
	void DestroyNamedNetDriver(UWorld* InWorld, FName NetDriverName) { NativeCall<void, UWorld*, FName>(this, "UEngine.DestroyNamedNetDriver", InWorld, NetDriverName); }
	void DestroyWorldContext(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.DestroyWorldContext", InWorld); }
	void EnableScreenSaver(bool bEnable) { NativeCall<void, bool>(this, "UEngine.EnableScreenSaver", bEnable); }
	ULocalPlayer* FindFirstLocalPlayerFromControllerId(int ControllerId) { return NativeCall<ULocalPlayer*, int>(this, "UEngine.FindFirstLocalPlayerFromControllerId", ControllerId); }
	void FinishDestroy() { NativeCall<void>(this, "UEngine.FinishDestroy"); }
	void GetAllLocalPlayerControllers(TArray<APlayerController*>* PlayerList) { NativeCall<void, TArray<APlayerController*>*>(this, "UEngine.GetAllLocalPlayerControllers", PlayerList); }
	ULocalPlayer* GetFirstGamePlayer(UPendingNetGame* PendingNetGame) { return NativeCall<ULocalPlayer*, UPendingNetGame*>(this, "UEngine.GetFirstGamePlayer", PendingNetGame); }
	ULocalPlayer* GetFirstGamePlayer(UWorld* InWorld) { return NativeCall<ULocalPlayer*, UWorld*>(this, "UEngine.GetFirstGamePlayer", InWorld); }
	APlayerController* GetFirstLocalPlayerController(UWorld* InWorld) { return NativeCall<APlayerController*, UWorld*>(this, "UEngine.GetFirstLocalPlayerController", InWorld); }
	TArray<ULocalPlayer*>* GetGamePlayers(UWorld* World) { return NativeCall<TArray<ULocalPlayer*>*, UWorld*>(this, "UEngine.GetGamePlayers", World); }
	UGameUserSettings* GetGameUserSettings() { return NativeCall<UGameUserSettings*>(this, "UEngine.GetGameUserSettings"); }
	ULocalPlayer* GetLocalPlayerFromControllerId(UWorld* InWorld, int ControllerId) { return NativeCall<ULocalPlayer*, UWorld*, int>(this, "UEngine.GetLocalPlayerFromControllerId", InWorld, ControllerId); }
	TIndexedContainerIterator<TArray<ULocalPlayer*> const, ULocalPlayer* const, int>* GetLocalPlayerIterator(TIndexedContainerIterator<TArray<ULocalPlayer*> const, ULocalPlayer* const, int>* result, UWorld* World) { return NativeCall<TIndexedContainerIterator<TArray<ULocalPlayer*> const, ULocalPlayer* const, int>*, TIndexedContainerIterator<TArray<ULocalPlayer*> const, ULocalPlayer* const, int>*, UWorld*>(this, "UEngine.GetLocalPlayerIterator", result, World); }
	float GetMaxTickRate(float DeltaTime, bool bAllowFrameRateSmoothing) { return NativeCall<float, float, bool>(this, "UEngine.GetMaxTickRate", DeltaTime, bAllowFrameRateSmoothing); }
	int GetNumGamePlayers(UWorld* InWorld) { return NativeCall<int, UWorld*>(this, "UEngine.GetNumGamePlayers", InWorld); }
	static FGuid* GetPackageGuid(FGuid* result, FName PackageName) { return NativeCall<FGuid*, FGuid*, FName>(nullptr, "UEngine.GetPackageGuid", result, PackageName); }
	FWorldContext* GetWorldContextFromHandleChecked(FName WorldContextHandle) { return NativeCall<FWorldContext*, FName>(this, "UEngine.GetWorldContextFromHandleChecked", WorldContextHandle); }
	FWorldContext* GetWorldContextFromWorld(UWorld* InWorld) { return NativeCall<FWorldContext*, UWorld*>(this, "UEngine.GetWorldContextFromWorld", InWorld); }
	FWorldContext* GetWorldContextFromWorldChecked(UWorld* InWorld) { return NativeCall<FWorldContext*, UWorld*>(this, "UEngine.GetWorldContextFromWorldChecked", InWorld); }
	UWorld* GetWorldFromContextObject(UObject* Object, bool bChecked) { return NativeCall<UWorld*, UObject*, bool>(this, "UEngine.GetWorldFromContextObject", Object, bChecked); }
	void HandleTravelFailure(UWorld* InWorld, ETravelFailure::Type FailureType, FString* ErrorString) { NativeCall<void, UWorld*, ETravelFailure::Type, FString*>(this, "UEngine.HandleTravelFailure", InWorld, FailureType, ErrorString); }
	static FString* HardwareSurveyBucketRAM(FString* result, unsigned int MemoryMB) { return NativeCall<FString*, FString*, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketRAM", result, MemoryMB); }
	static FString* HardwareSurveyBucketResolution(FString* result, unsigned int DisplayWidth, unsigned int DisplayHeight) { return NativeCall<FString*, FString*, unsigned int, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketResolution", result, DisplayWidth, DisplayHeight); }
	static FString* HardwareSurveyBucketVRAM(FString* result, unsigned int VidMemoryMB) { return NativeCall<FString*, FString*, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketVRAM", result, VidMemoryMB); }
	void Init(IEngineLoop* InEngineLoop) { NativeCall<void, IEngineLoop*>(this, "UEngine.Init", InEngineLoop); }
	void InitHardwareSurvey() { NativeCall<void>(this, "UEngine.InitHardwareSurvey"); }
	bool InitializeAudioDevice() { return NativeCall<bool>(this, "UEngine.InitializeAudioDevice"); }
	bool InitializeHMDDevice() { return NativeCall<bool>(this, "UEngine.InitializeHMDDevice"); }
	void InitializeObjectReferences() { NativeCall<void>(this, "UEngine.InitializeObjectReferences"); }
	bool IsEngineStat(FString* InName) { return NativeCall<bool, FString*>(this, "UEngine.IsEngineStat", InName); }
	bool IsPreparingMapChange(FWorldContext* Context) { return NativeCall<bool, FWorldContext*>(this, "UEngine.IsPreparingMapChange", Context); }
	bool IsSplitScreen(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UEngine.IsSplitScreen", InWorld); }
	bool IsStereoscopic3D(FViewport* InViewport) { return NativeCall<bool, FViewport*>(this, "UEngine.IsStereoscopic3D", InViewport); }
	void LoadPackagesFully(UWorld* InWorld, EFullyLoadPackageType FullyLoadType, FString* Tag) { NativeCall<void, UWorld*, EFullyLoadPackageType, FString*>(this, "UEngine.LoadPackagesFully", InWorld, FullyLoadType, Tag); }
	bool MakeSureMapNameIsValid(FString* InOutMapName) { return NativeCall<bool, FString*>(this, "UEngine.MakeSureMapNameIsValid", InOutMapName); }
	void MovePendingLevel(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.MovePendingLevel", Context); }
	void OnExternalUIChange(bool bInIsOpening) { NativeCall<void, bool>(this, "UEngine.OnExternalUIChange", bInIsOpening); }
	void OnHardwareSurveyComplete(FHardwareSurveyResults* SurveyResults) { NativeCall<void, FHardwareSurveyResults*>(this, "UEngine.OnHardwareSurveyComplete", SurveyResults); }
	void OnLostFocusPause(bool EnablePause) { NativeCall<void, bool>(this, "UEngine.OnLostFocusPause", EnablePause); }
	void ParseCommandline() { NativeCall<void>(this, "UEngine.ParseCommandline"); }
	UPendingNetGame* PendingNetGameFromWorld(UWorld* InWorld) { return NativeCall<UPendingNetGame*, UWorld*>(this, "UEngine.PendingNetGameFromWorld", InWorld); }
	void PerformanceCapture(FString* CaptureName) { NativeCall<void, FString*>(this, "UEngine.PerformanceCapture", CaptureName); }
	void PreExit() { NativeCall<void>(this, "UEngine.PreExit"); }
	bool PrepareMapChange(FWorldContext* Context, TArray<FName>* LevelNames) { return NativeCall<bool, FWorldContext*, TArray<FName>*>(this, "UEngine.PrepareMapChange", Context, LevelNames); }
	void RecordHMDAnalytics() { NativeCall<void>(this, "UEngine.RecordHMDAnalytics"); }
	void RenderEngineStats(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int LHSX, int* InOutLHSY, int RHSX, int* InOutRHSY, FVector* ViewLocation, FRotator* ViewRotation) { NativeCall<void, UWorld*, FViewport*, FCanvas*, int, int*, int, int*, FVector*, FRotator*>(this, "UEngine.RenderEngineStats", World, Viewport, Canvas, LHSX, InOutLHSY, RHSX, InOutRHSY, ViewLocation, ViewRotation); }
	int RenderStatAI(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatAI", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatColorList(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatColorList", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatFPS(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatFPS", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatHitches(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatHitches", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatLevels(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatLevels", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatNamedEvents(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatNamedEvents", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatSounds(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatSounds", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatSummary(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatSummary", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatTexture(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatTexture", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatUnit(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, FVector* ViewLocation, FRotator* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, FVector*, FRotator*>(this, "UEngine.RenderStatUnit", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	void RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame* PendingNetGameToNotify) { NativeCall<void, UPendingNetGame*>(this, "UEngine.RequestAuthTokenThenNotifyPendingNetGame", PendingNetGameToNotify); }
	FSeamlessTravelHandler* SeamlessTravelHandlerForWorld(UWorld* World) { return NativeCall<FSeamlessTravelHandler*, UWorld*>(this, "UEngine.SeamlessTravelHandlerForWorld", World); }
	void SetShouldCommitPendingMapChange(UWorld* InWorld, bool NewShouldCommitPendingMapChange) { NativeCall<void, UWorld*, bool>(this, "UEngine.SetShouldCommitPendingMapChange", InWorld, NewShouldCommitPendingMapChange); }
	bool ShouldAbsorbAuthorityOnlyEvent() { return NativeCall<bool>(this, "UEngine.ShouldAbsorbAuthorityOnlyEvent"); }
	bool ShouldAbsorbCosmeticOnlyEvent() { return NativeCall<bool>(this, "UEngine.ShouldAbsorbCosmeticOnlyEvent"); }
	bool ShouldCommitPendingMapChange(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UEngine.ShouldCommitPendingMapChange", InWorld); }
	void ShutdownAudioDevice() { NativeCall<void>(this, "UEngine.ShutdownAudioDevice"); }
	void ShutdownWorldNetDriver(UWorld* World) { NativeCall<void, UWorld*>(this, "UEngine.ShutdownWorldNetDriver", World); }
	void SpawnServerActors(UWorld* World) { NativeCall<void, UWorld*>(this, "UEngine.SpawnServerActors", World); }
	void SwapControllerId(ULocalPlayer* NewPlayer, int CurrentControllerId, int NewControllerID) { NativeCall<void, ULocalPlayer*, int, int>(this, "UEngine.SwapControllerId", NewPlayer, CurrentControllerId, NewControllerID); }
	void TickDeferredCommands() { NativeCall<void>(this, "UEngine.TickDeferredCommands"); }
	void TickHardwareSurvey() { NativeCall<void>(this, "UEngine.TickHardwareSurvey"); }
	bool TickWorldTravel(FWorldContext* Context, float DeltaSeconds) { return NativeCall<bool, FWorldContext*, float>(this, "UEngine.TickWorldTravel", Context, DeltaSeconds); }
	void TriggerPostLoadMapEvents() { NativeCall<void>(this, "UEngine.TriggerPostLoadMapEvents"); }
	void UpdateTimeAndHandleMaxTickRate() { NativeCall<void>(this, "UEngine.UpdateTimeAndHandleMaxTickRate"); }
	void UpdateTransitionType(UWorld* CurrentWorld) { NativeCall<void, UWorld*>(this, "UEngine.UpdateTransitionType", CurrentWorld); }
	bool UseSound() { return NativeCall<bool>(this, "UEngine.UseSound"); }
	void VerifyLoadMapWorldCleanup() { NativeCall<void>(this, "UEngine.VerifyLoadMapWorldCleanup"); }
	void WorldAdded(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldAdded", InWorld); }
	void WorldDestroyed(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldDestroyed", InWorld); }
	bool IsHardwareSurveyRequired() { return NativeCall<bool>(this, "UEngine.IsHardwareSurveyRequired"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UEngine.GetPrivateStaticClass", Package); }
};

struct UPrimalGlobals
{
	UPrimalGameData* PrimalGameDataField() { return *GetNativePointerField<UPrimalGameData * *>(this, "UPrimalGlobals.PrimalGameData"); }
	UPrimalGameData* PrimalGameDataOverrideField() { return *GetNativePointerField<UPrimalGameData * *>(this, "UPrimalGlobals.PrimalGameDataOverride"); }
	TSubclassOf<UUI_GenericConfirmationDialog>& GlobalGenericConfirmationDialogField() { return *GetNativePointerField<TSubclassOf<UUI_GenericConfirmationDialog>*>(this, "UPrimalGlobals.GlobalGenericConfirmationDialog"); }
	bool& bAllowSingleplayerField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowSingleplayer"); }
	bool& bAllowNonDedicatedHostField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowNonDedicatedHost"); }
	TArray<FString>& UIOnlyShowMapFileNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGlobals.UIOnlyShowMapFileNames"); }
	TArray<FString>& UIOnlyShowModIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGlobals.UIOnlyShowModIDs"); }
	TArray<USoundClass*> CoreSoundClassesField() { return *GetNativePointerField<TArray<USoundClass*>*>(this, "UPrimalGlobals.CoreSoundClasses"); }
	bool& bTotalConversionShowUnofficialServersField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bTotalConversionShowUnofficialServers"); }
	FString& CreditStringField() { return *GetNativePointerField<FString*>(this, "UPrimalGlobals.CreditString"); }
	bool& bGameMediaLoadedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bGameMediaLoaded"); }
	bool& bStartedAsyncLoadField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bStartedAsyncLoad"); }
	FStreamableManager& StreamableManagerField() { return *GetNativePointerField<FStreamableManager*>(this, "UPrimalGlobals.StreamableManager"); }

	// Functions

	void AsyncLoadGameMedia() { NativeCall<void>(this, "UPrimalGlobals.AsyncLoadGameMedia"); }
	static UPrimalGlobals FinishLoadGameMedia() { return NativeCall<UPrimalGlobals>(nullptr, "UPrimalGlobals.FinishLoadGameMedia"); }
	static UPrimalGlobals FinishedLoadingGameMedia() { return NativeCall<UPrimalGlobals>(nullptr, "UPrimalGlobals.FinishedLoadingGameMedia"); }
	static ADayCycleManager* GetDayCycleManager(UWorld* World) { return NativeCall<ADayCycleManager*, UWorld*>(nullptr, "UPrimalGlobals.GetDayCycleManager", World); }
	static ASOTFNotification* GetSOTFNotificationManager(UWorld* World) { return NativeCall<ASOTFNotification*, UWorld*>(nullptr, "UPrimalGlobals.GetSOTFNotificationManager", World); }
	void LoadNextTick(UWorld* ForWorld) { NativeCall<void, UWorld*>(this, "UPrimalGlobals.LoadNextTick", ForWorld); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalGlobals.OnConfirmationDialogClosed", bAccept); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UPrimalGlobals.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesUPrimalGlobals() { NativeCall<void>(nullptr, "UPrimalGlobals.StaticRegisterNativesUPrimalGlobals"); }
};
// Level

struct ULevelBase : UObject
{
	TArray<AActor*> GetActorsField() const { return GetNativeField<TArray<AActor*>>(this, "ULevelBase.Actors"); }
};

struct ULevel : ULevelBase
{
};

struct AGameMode
{
	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameMode.MatchState"); }
	FString& OptionsStringField() { return *GetNativePointerField<FString*>(this, "AGameMode.OptionsString"); }
	TSubclassOf<APawn>& DefaultPawnClassField() { return *GetNativePointerField<TSubclassOf<APawn>*>(this, "AGameMode.DefaultPawnClass"); }
	TSubclassOf<AHUD>& HUDClassField() { return *GetNativePointerField<TSubclassOf<AHUD>*>(this, "AGameMode.HUDClass"); }
	int& NumSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumSpectators"); }
	int& NumPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumPlayers"); }
	int& NumBotsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumBots"); }
	float& MinRespawnDelayField() { return *GetNativePointerField<float*>(this, "AGameMode.MinRespawnDelay"); }
	AGameSession* GameSessionField() { return *GetNativePointerField<AGameSession * *>(this, "AGameMode.GameSession"); }
	int& NumTravellingPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumTravellingPlayers"); }
	int& CurrentIDField() { return *GetNativePointerField<int*>(this, "AGameMode.CurrentID"); }
	FString& DefaultPlayerNameField() { return *GetNativePointerField<FString*>(this, "AGameMode.DefaultPlayerName"); }
	TArray<APlayerStart*> PlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*>*>(this, "AGameMode.PlayerStarts"); }
	TSubclassOf<APlayerController>& PlayerControllerClassField() { return *GetNativePointerField<TSubclassOf<APlayerController>*>(this, "AGameMode.PlayerControllerClass"); }
	TSubclassOf<APlayerState>& PlayerStateClassField() { return *GetNativePointerField<TSubclassOf<APlayerState>*>(this, "AGameMode.PlayerStateClass"); }
	TSubclassOf<AGameState>& GameStateClassField() { return *GetNativePointerField<TSubclassOf<AGameState>*>(this, "AGameMode.GameStateClass"); }
	AGameState* GameStateField() { return *GetNativePointerField<AGameState * *>(this, "AGameMode.GameState"); }
	TArray<APlayerState*> InactivePlayerArrayField() { return *GetNativePointerField<TArray<APlayerState*>*>(this, "AGameMode.InactivePlayerArray"); }
	float& InactivePlayerStateLifeSpanField() { return *GetNativePointerField<float*>(this, "AGameMode.InactivePlayerStateLifeSpan"); }
	TArray<APlayerStart*> UsedPlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*>*>(this, "AGameMode.UsedPlayerStarts"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bUseSeamlessTravel() { return { this, "AGameMode.bUseSeamlessTravel" }; }
	BitFieldValue<bool, unsigned __int32> bPauseable() { return { this, "AGameMode.bPauseable" }; }
	BitFieldValue<bool, unsigned __int32> bStartPlayersAsSpectators() { return { this, "AGameMode.bStartPlayersAsSpectators" }; }
	BitFieldValue<bool, unsigned __int32> bDelayedStart() { return { this, "AGameMode.bDelayedStart" }; }

	// Functions

	void AbortMatch() { NativeCall<void>(this, "AGameMode.AbortMatch"); }
	void AddInactivePlayer(APlayerState* PlayerState, APlayerController* PC) { NativeCall<void, APlayerState*, APlayerController*>(this, "AGameMode.AddInactivePlayer", PlayerState, PC); }
	void AddPlayerStart(APlayerStart* NewPlayerStart) { NativeCall<void, APlayerStart*>(this, "AGameMode.AddPlayerStart", NewPlayerStart); }
	bool AllowCheats(APlayerController* P) { return NativeCall<bool, APlayerController*>(this, "AGameMode.AllowCheats", P); }
	bool AllowPausing(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameMode.AllowPausing", PC); }
	void Broadcast(AActor* Sender, FString* Msg, FName Type) { NativeCall<void, AActor*, FString*, FName>(this, "AGameMode.Broadcast", Sender, Msg, Type); }
	void ChangeName(AController* Other, FString* S, bool bNameChange) { NativeCall<void, AController*, FString*, bool>(this, "AGameMode.ChangeName", Other, S, bNameChange); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameMode.ChoosePlayerStart_Implementation", Player); }
	void ClearPause() { NativeCall<void>(this, "AGameMode.ClearPause"); }
	void EndMatch() { NativeCall<void>(this, "AGameMode.EndMatch"); }
	bool FindInactivePlayer(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameMode.FindInactivePlayer", PC); }
	AActor* FindPlayerStart(AController* Player, FString* IncomingName) { return NativeCall<AActor*, AController*, FString*>(this, "AGameMode.FindPlayerStart", Player, IncomingName); }
	void ForceClearUnpauseDelegates(AActor* PauseActor) { NativeCall<void, AActor*>(this, "AGameMode.ForceClearUnpauseDelegates", PauseActor); }
	void GenericPlayerInitialization(AController* C) { NativeCall<void, AController*>(this, "AGameMode.GenericPlayerInitialization", C); }
	FString* GetDefaultGameClassPath(FString* result, FString* MapName, FString* Options, FString* Portal) { return NativeCall<FString*, FString*, FString*, FString*, FString*>(this, "AGameMode.GetDefaultGameClassPath", result, MapName, Options, Portal); }
	TSubclassOf<UObject>* GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject>* result, AController* InController) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, AController*>(this, "AGameMode.GetDefaultPawnClassForController_Implementation", result, InController); }
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result) { return NativeCall<TSubclassOf<AGameSession>*, TSubclassOf<AGameSession>*>(this, "AGameMode.GetGameSessionClass", result); }
	int GetIntOption(FString* Options, FString* ParseString, int CurrentValue) { return NativeCall<int, FString*, FString*, int>(this, "AGameMode.GetIntOption", Options, ParseString, CurrentValue); }
	void GetKeyValue(FString* Pair, FString* Key, FString* Value) { NativeCall<void, FString*, FString*, FString*>(this, "AGameMode.GetKeyValue", Pair, Key, Value); }
	FString* GetNetworkNumber(FString* result) { return NativeCall<FString*, FString*>(this, "AGameMode.GetNetworkNumber", result); }
	int GetNumPlayers() { return NativeCall<int>(this, "AGameMode.GetNumPlayers"); }
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*>* ActorList) { NativeCall<void, bool, TArray<AActor*>*>(this, "AGameMode.GetSeamlessTravelActorList", bToEntry, ActorList); }
	bool GrabOption(FString* Options, FString* Result) { return NativeCall<bool, FString*, FString*>(this, "AGameMode.GrabOption", Options, Result); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameMode.HandleMatchHasEnded"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameMode.HandleMatchHasStarted"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameMode.HandleMatchIsWaitingToStart"); }
	void HandleSeamlessTravelPlayer(AController** C) { NativeCall<void, AController**>(this, "AGameMode.HandleSeamlessTravelPlayer", C); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameMode.HasMatchEnded"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameMode.HasMatchStarted"); }
	bool HasOption(FString* Options, FString* InKey) { return NativeCall<bool, FString*, FString*>(this, "AGameMode.HasOption", Options, InKey); }
	void InitGame(FString* MapName, FString* Options, FString* ErrorMessage) { NativeCall<void, FString*, FString*, FString*>(this, "AGameMode.InitGame", MapName, Options, ErrorMessage); }
	void InitGameState() { NativeCall<void>(this, "AGameMode.InitGameState"); }
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, TSharedPtr<FUniqueNetId, 0> * UniqueId, FString* Options, FString* Portal) { return NativeCall<FString*, FString*, APlayerController*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*>(this, "AGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameMode.IsMatchInProgress"); }
	APlayerController* Login(UPlayer* NewPlayer, FString* Portal, FString* Options, TSharedPtr<FUniqueNetId, 0> * UniqueId, FString* ErrorMessage) { return NativeCall<APlayerController*, UPlayer*, FString*, FString*, TSharedPtr<FUniqueNetId, 0>*, FString*>(this, "AGameMode.Login", NewPlayer, Portal, Options, UniqueId, ErrorMessage); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AGameMode.Logout", Exiting); }
	bool MustSpectate(APlayerController* NewPlayerController) { return NativeCall<bool, APlayerController*>(this, "AGameMode.MustSpectate", NewPlayerController); }
	void OverridePlayerState(APlayerController* PC, APlayerState* OldPlayerState) { NativeCall<void, APlayerController*, APlayerState*>(this, "AGameMode.OverridePlayerState", PC, OldPlayerState); }
	FString* ParseOption(FString* result, FString* Options, FString* InKey) { return NativeCall<FString*, FString*, FString*, FString*>(this, "AGameMode.ParseOption", result, Options, InKey); }
	bool PlayerCanRestart(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameMode.PlayerCanRestart", Player); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.PostLogin", NewPlayer); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameMode.PostSeamlessTravel"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AGameMode.PreInitializeComponents"); }
	void PreLogin(FString* Options, FString* Address, TSharedPtr<FUniqueNetId, 0> * UniqueId, FString* authToken, FString* ErrorMessage, unsigned int* NewHomeServerId) { NativeCall<void, FString*, FString*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*, unsigned int*>(this, "AGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage, NewHomeServerId); }
	APlayerController* ProcessClientTravel(FString* FURL, FGuid NextMapGuid, bool bSeamless, bool bAbsolute) { return NativeCall<APlayerController*, FString*, FGuid, bool, bool>(this, "AGameMode.ProcessClientTravel", FURL, NextMapGuid, bSeamless, bAbsolute); }
	void ProcessServerTravel(FString* URL, bool bAbsolute) { NativeCall<void, FString*, bool>(this, "AGameMode.ProcessServerTravel", URL, bAbsolute); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch"); }
	void RemoveConnectedPlayer(TSharedPtr<FUniqueNetId, 0> * UniqueNetId) { NativeCall<void, TSharedPtr<FUniqueNetId, 0>*>(this, "AGameMode.RemoveConnectedPlayer", UniqueNetId); }
	void RemovePlayerControllerFromPlayerCount(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.RemovePlayerControllerFromPlayerCount", PC); }
	void RemovePlayerStart(APlayerStart* RemovedPlayerStart) { NativeCall<void, APlayerStart*>(this, "AGameMode.RemovePlayerStart", RemovedPlayerStart); }
	void Reset() { NativeCall<void>(this, "AGameMode.Reset"); }
	void ResetLevel() { NativeCall<void>(this, "AGameMode.ResetLevel"); }
	void RestartGame() { NativeCall<void>(this, "AGameMode.RestartGame"); }
	void RestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AGameMode.RestartPlayer", NewPlayer); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameMode.ReturnToMainMenuHost"); }
	void SendPlayer(APlayerController* aPlayer, FString* FURL) { NativeCall<void, APlayerController*, FString*>(this, "AGameMode.SendPlayer", aPlayer, FURL); }
	void SetBandwidthLimit(float AsyncIOBandwidthLimit) { NativeCall<void, float>(this, "AGameMode.SetBandwidthLimit", AsyncIOBandwidthLimit); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>(this, "AGameMode.SetMatchState", NewState); }
	void SetPlayerDefaults(APawn* PlayerPawn) { NativeCall<void, APawn*>(this, "AGameMode.SetPlayerDefaults", PlayerPawn); }
	void SetSeamlessTravelViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.SetSeamlessTravelViewTarget", PC); }
	bool ShouldSpawnAtStartSpot_Implementation(AController* Player) { return NativeCall<bool, AController*>(this, "AGameMode.ShouldSpawnAtStartSpot_Implementation", Player); }
	APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AGameMode.SpawnDefaultPawnFor", NewPlayer, StartSpot); }
	APlayerController* SpawnPlayerController(FVector* SpawnLocation, FRotator* SpawnRotation) { return NativeCall<APlayerController*, FVector*, FRotator*>(this, "AGameMode.SpawnPlayerController", SpawnLocation, SpawnRotation); }
	void StartMatch() { NativeCall<void>(this, "AGameMode.StartMatch"); }
	void StartNewPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.StartNewPlayer", NewPlayer); }
	void StartPlay() { NativeCall<void>(this, "AGameMode.StartPlay"); }
	void StartToLeaveMap() { NativeCall<void>(this, "AGameMode.StartToLeaveMap"); }
	static FString* StaticGetFullGameClassName(FString* result, FString* Str) { return NativeCall<FString*, FString*, FString*>(nullptr, "AGameMode.StaticGetFullGameClassName", result, Str); }
	void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) { NativeCall<void, APlayerController*, APlayerController*>(this, "AGameMode.SwapPlayerControllers", OldPC, NewPC); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AGameMode.Tick", DeltaSeconds); }
	void UpdateGameplayMuteList(APlayerController* aPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.UpdateGameplayMuteList", aPlayer); }
	AActor* ChoosePlayerStart(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameMode.ChoosePlayerStart", Player); }
	TSubclassOf<UObject>* GetDefaultPawnClassForController(TSubclassOf<UObject>* result, AController* InController) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, AController*>(this, "AGameMode.GetDefaultPawnClassForController", result, InController); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "AGameMode.GetPrivateStaticClass", Package); }
	void K2_PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.K2_PostLogin", NewPlayer); }
	bool ShouldSpawnAtStartSpot(AController* Player) { return NativeCall<bool, AController*>(this, "AGameMode.ShouldSpawnAtStartSpot", Player); }
};

struct AShooterGameMode : AGameMode
{
	struct SeamlessTravelLogEntry;
	int& LastRepopulationIndexToCheckField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastRepopulationIndexToCheck"); }
	FString& AlarmNotificationKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationKey"); }
	FString& AlarmNotificationURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationURL"); }
	FString& BanFileNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BanFileName"); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> > & BannedMapField() { return *GetNativePointerField<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.BannedMap"); }
	long double& LastTimeCheckedForSaveBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeCheckedForSaveBackup"); }
	int& LastDayOfYearBackedUpField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastDayOfYearBackedUp"); }
	long double& TimeLastStartedDoingRemoteBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.TimeLastStartedDoingRemoteBackup"); }
	ATreasureMapManager* TreasureMapManagerField() { return *GetNativePointerField<ATreasureMapManager * *>(this, "AShooterGameMode.TreasureMapManager"); }
	AShipPathManager* ShipPathManagerField() { return *GetNativePointerField<AShipPathManager * *>(this, "AShooterGameMode.ShipPathManager"); }
	unsigned int& MetricLoginRedirectsField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.MetricLoginRedirects"); }
	TArray<AShooterGameMode::SeamlessTravelLogEntry>& SeamlessTravelLogField() { return *GetNativePointerField<TArray<AShooterGameMode::SeamlessTravelLogEntry>*>(this, "AShooterGameMode.SeamlessTravelLog"); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> > & PlayersCorrectCurrentServersField() { return *GetNativePointerField<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.PlayersCorrectCurrentServers"); }
	bool& InitialLogProcessingDoneField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.InitialLogProcessingDone"); }
	//FAsyncTask<FAsyncSharedLogCleanup> * AsyncSharedLogCleanupField() { return *GetNativePointerField<FAsyncTask<FAsyncSharedLogCleanup> **>(this, "AShooterGameMode.AsyncSharedLogCleanup"); }
	FEvent* PendingSharedLogEntriesReadyField() { return *GetNativePointerField<FEvent * *>(this, "AShooterGameMode.PendingSharedLogEntriesReady"); }
	int& PendingFetchOperationsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PendingFetchOperations"); }
	TArray<TFunction<void __cdecl(void)>>& LogSentinelCallbacksActiveField() { return *GetNativePointerField<TArray<TFunction<void __cdecl(void)>>*>(this, "AShooterGameMode.LogSentinelCallbacksActive"); }
	TArray<TFunction<void __cdecl(void)>>& LogSentinelCallbacksQueuedField() { return *GetNativePointerField<TArray<TFunction<void __cdecl(void)>>*>(this, "AShooterGameMode.LogSentinelCallbacksQueued"); }
	FString& PendingSharedLogEntries_Debug_CurrentEntryInfoField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PendingSharedLogEntries_Debug_CurrentEntryInfo"); }
	long double& PendingSharedLogEntries_StartedProcessingTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.PendingSharedLogEntries_StartedProcessingTime"); }
	//TQueue<TSharedPtr<FDatabase_LogEntryWrapper,1>,0>& PendingSharedLogEntriesField() { return *GetNativePointerField<TQueue<TSharedPtr<FDatabase_LogEntryWrapper,1>,0>*>(this, "AShooterGameMode.PendingSharedLogEntries"); }
	TMap<unsigned __int64, TSharedPtr<TArray<unsigned char>, 0>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, TSharedPtr<TArray<unsigned char>, 0>, 0> > & TravelDataCacheField() { return *GetNativePointerField<TMap<unsigned __int64, TSharedPtr<TArray<unsigned char>, 0>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, TSharedPtr<TArray<unsigned char>, 0>, 0> >*>(this, "AShooterGameMode.TravelDataCache"); }
	unsigned int& SharedLogReplayFailsField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.SharedLogReplayFails"); }
	URCONServer* RCONSocketField() { return *GetNativePointerField<URCONServer * *>(this, "AShooterGameMode.RCONSocket"); }
	FString& PlayersJoinNoCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersJoinNoCheckFilename"); }
	FString& PlayersExclusiveCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersExclusiveCheckFilename"); }
	AOceanDinoManager* TheOceanDinoManagerField() { return *GetNativePointerField<AOceanDinoManager * *>(this, "AShooterGameMode.TheOceanDinoManager"); }
	AOceanVolume* TheOceanVolumeField() { return *GetNativePointerField<AOceanVolume * *>(this, "AShooterGameMode.TheOceanVolume"); }
	bool& bCheckedForOceanDinoManagerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCheckedForOceanDinoManager"); }
	bool& bCheckedForOceanVolumeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCheckedForOceanVolume"); }
	int& TerrainGeneratorVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TerrainGeneratorVersion"); }
	TArray<FUniqueNetIdUInt64>& PlayersJoinNoCheckField() { return *GetNativePointerField<TArray<FUniqueNetIdUInt64>*>(this, "AShooterGameMode.PlayersJoinNoCheck"); }
	TArray<FUniqueNetIdUInt64>& PlayersExclusiveListField() { return *GetNativePointerField<TArray<FUniqueNetIdUInt64>*>(this, "AShooterGameMode.PlayersExclusiveList"); }
	UDatabase_TribeDataManager* Database_TribeDataManagerRefField() { return *GetNativePointerField<UDatabase_TribeDataManager * *>(this, "AShooterGameMode.Database_TribeDataManagerRef"); }
	UDatabase_TerritoryMap* Database_TerritoryMapRefField() { return *GetNativePointerField<UDatabase_TerritoryMap * *>(this, "AShooterGameMode.Database_TerritoryMapRef"); }
	UPubSub_TribeNotifications* PubSub_TribeNotificationsRefField() { return *GetNativePointerField<UPubSub_TribeNotifications * *>(this, "AShooterGameMode.PubSub_TribeNotificationsRef"); }
	UPubSub_GeneralNotifications* PubSub_GeneralNotificationsRefField() { return *GetNativePointerField<UPubSub_GeneralNotifications * *>(this, "AShooterGameMode.PubSub_GeneralNotificationsRef"); }
	UDatabase_SharedLog* Database_SharedLogRefField() { return *GetNativePointerField<UDatabase_SharedLog * *>(this, "AShooterGameMode.Database_SharedLogRef"); }
	unsigned __int64& LastSharedLogLineProcessedField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterGameMode.LastSharedLogLineProcessed"); }
	UDatabase_TravelData* Database_TravelDataRefField() { return *GetNativePointerField<UDatabase_TravelData * *>(this, "AShooterGameMode.Database_TravelDataRef"); }
	UDatabase_RemoteFileManager* Database_RemoteFileManagerRefField() { return *GetNativePointerField<UDatabase_RemoteFileManager * *>(this, "AShooterGameMode.Database_RemoteFileManagerRef"); }
	UShooterCheatManager* GlobalCommandsCheatManagerField() { return *GetNativePointerField<UShooterCheatManager * *>(this, "AShooterGameMode.GlobalCommandsCheatManager"); }
	void* GameBackupPipeReadField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeRead"); }
	void* GameBackupPipeWriteField() { return *GetNativePointerField<void**>(this, "AShooterGameMode.GameBackupPipeWrite"); }
	TMap<unsigned __int64, TArray<FTribeNotification>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, TArray<FTribeNotification>, 0> > & PendingTribeNotificationsField() { return *GetNativePointerField<TMap<unsigned __int64, TArray<FTribeNotification>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, TArray<FTribeNotification>, 0> >*>(this, "AShooterGameMode.PendingTribeNotifications"); }
	TMap<unsigned __int64, TArray<FTribeNotification>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, TArray<FTribeNotification>, 0> > & PendingAllianceNotificationsField() { return *GetNativePointerField<TMap<unsigned __int64, TArray<FTribeNotification>, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, TArray<FTribeNotification>, 0> >*>(this, "AShooterGameMode.PendingAllianceNotifications"); }
	bool& bFirstTickedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFirstTicked"); }
	TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>& TribesIdsField() { return *GetNativePointerField<TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.TribesIds"); }
	TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, unsigned __int64, 0> > & PlayersIdsField() { return *GetNativePointerField<TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, unsigned __int64, 0> >*>(this, "AShooterGameMode.PlayersIds"); }
	TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, int, 0> > & SteamIdsField() { return *GetNativePointerField<TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, int, 0> >*>(this, "AShooterGameMode.SteamIds"); }
	FString& LaunchOptionsField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LaunchOptions"); }
	TMap<unsigned __int64, FTribeData, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, FTribeData, 0> > & TribesDataField() { return *GetNativePointerField<TMap<unsigned __int64, FTribeData, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, FTribeData, 0> >*>(this, "AShooterGameMode.TribesData"); }
	FQueuedThreadPool* FullPoolField() { return *GetNativePointerField<FQueuedThreadPool * *>(this, "AShooterGameMode.FullPool"); }
	FString& PGMapNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PGMapName"); }
	FString& PGTerrainPropertiesStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PGTerrainPropertiesString"); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> > & PGTerrainPropertiesField() { return *GetNativePointerField<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.PGTerrainProperties"); }
	bool& bAutoCreateNewPlayerDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoCreateNewPlayerData"); }
	bool& bIsRestartingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsRestarting"); }
	bool& bProximityVoiceChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityVoiceChat"); }
	bool& bProximityChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityChat"); }
	bool& bAutoRestoreBackupsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoRestoreBackups"); }
	float& DifficultyValueField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValue"); }
	float& DifficultyValueMinField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMin"); }
	float& DifficultyValueMaxField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMax"); }
	float& ProximityRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadius"); }
	float& ProximityRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadiusUnconsiousScale"); }
	float& YellingRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.YellingRadius"); }
	TSubclassOf<UCheatManager>& CheatClassField() { return *GetNativePointerField<TSubclassOf<UCheatManager>*>(this, "AShooterGameMode.CheatClass"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsOfficialServer"); }
	bool& bIsCurrentlySavingWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsCurrentlySavingWorld"); }
	bool& bServerAllowArkDownloadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowArkDownload"); }
	bool& bServerAllowThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowThirdPersonPlayer"); }
	bool& bUseExclusiveListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseExclusiveList"); }
	bool& bAlwaysNotifyPlayerLeftField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerLeft"); }
	bool& bAlwaysNotifyPlayerJoinedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerJoined"); }
	bool& bServerHardcoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerHardcore"); }
	bool& bServerPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerPVE"); }
	bool& bServerCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerCrosshair"); }
	bool& bEnableHealthbarsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableHealthbars"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerForceNoHUD"); }
	bool& bMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bMapPlayerLocation"); }
	bool& bAllowFlyerCarryPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerCarryPvE"); }
	bool& bDisableStructureDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructureDecayPvE"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayPvE"); }
	bool& bEnablePvPGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePvPGamma"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisablePvEGamma"); }
	bool& bClampResourceHarvestDamageField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampResourceHarvestDamage"); }
	bool& bPreventStructurePaintingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventStructurePainting"); }
	bool& bAllowCaveBuildingPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvE"); }
	bool& bAdminLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAdminLogging"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPStructureDecay"); }
	bool& bAutoDestroyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyStructures"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllStructureLocking"); }
	bool& bAllowDeprecatedStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDeprecatedStructures"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventTribeAlliances"); }
	bool& bAllowHitMarkersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHitMarkers"); }
	bool& bOnlyAutoDestroyCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAutoDestroyCoreStructures"); }
	bool& bPreventMateBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventMateBoost"); }
	bool& bTribeLogDestroyedEnemyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeLogDestroyedEnemyStructures"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowStructuresAtSupplyDrops"); }
	bool& bServerGameLogIncludeTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogIncludeTribeLogs"); }
	bool& bServerRCONOutputTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerRCONOutputTribeLogs"); }
	bool& bUseOptimizedHarvestingHealthField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOptimizedHarvestingHealth"); }
	bool& bClampItemSpoilingTimesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemSpoilingTimes"); }
	bool& bClampItemStatsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemStats"); }
	bool& bAutoDestroyDecayedDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyDecayedDinos"); }
	bool& bAllowMultipleAttachedC4Field() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowMultipleAttachedC4"); }
	bool& bAllowFlyingStaminaRecoveryField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyingStaminaRecovery"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCrossARKAllowForeignDinoDownloads"); }
	bool& bPreventSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventSpawnAnimations"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLegacyServer"); }
	bool& bIdlePlayerKickAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIdlePlayerKickAllowed"); }
	bool& bAllowStructureDecayInLandClaimField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowStructureDecayInLandClaim"); }
	bool& bOfficialAtlasServerPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOfficialAtlasServerPvP"); }
	int& TheMaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TheMaxStructuresInRange"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresInSmallRadius"); }
	int& RCONPortField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.RCONPort"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayCycleSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.NightTimeSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayTimeSpeedScale"); }
	float& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEStructureDecayPeriodMultiplier"); }
	float& StructurePreventResourceRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePreventResourceRadiusMultiplier"); }
	float& PvEDinoDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEDinoDecayPeriodMultiplier"); }
	float& ResourcesRespawnPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourcesRespawnPeriodMultiplier"); }
	float& MaxTamedDinosField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxTamedDinos"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ListenServerTetherDistanceMultiplier"); }
	float& PerPlatformMaxStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PerPlatformMaxStructuresMultiplier"); }
	float& AutoDestroyOldStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoDestroyOldStructuresMultiplier"); }
	float& RCONServerGameLogBufferField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RCONServerGameLogBuffer"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OxygenSwimSpeedStatMultiplier"); }
	float& ServerAutoForceRespawnWildDinosIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ServerAutoForceRespawnWildDinosInterval"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RadiusStructuresInSmallRadius"); }
	float& EnableAFKKickPlayerCountPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EnableAFKKickPlayerCountPercent"); }
	float& KickIdlePlayersPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KickIdlePlayersPeriod"); }
	float& MateBoostEffectMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MateBoostEffectMultiplier"); }
	float& AutoSavePeriodMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoSavePeriodMinutes"); }
	float& XPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.XPMultiplier"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeNameChangeCooldown"); }
	bool& bAllowHideDamageSourceFromLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHideDamageSourceFromLogs"); }
	float& KillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KillXPMultiplier"); }
	float& HarvestXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestXPMultiplier"); }
	float& CraftXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftXPMultiplier"); }
	float& GenericXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GenericXPMultiplier"); }
	float& SpecialXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SpecialXPMultiplier"); }
	float& ShipKillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ShipKillXPMultiplier"); }
	float& SafeSpawnPointMaxDistanceFromShoreField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SafeSpawnPointMaxDistanceFromShore"); }
	long double& LastSeamlessSocketTickTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastSeamlessSocketTickTime"); }
	long double& SeamlessSocketTickIntervalField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.SeamlessSocketTickInterval"); }
	TWeakObjectPtr<ASeamlessVolumeManager>& SeamlessVolumeManagerField() { return *GetNativePointerField<TWeakObjectPtr<ASeamlessVolumeManager>*>(this, "AShooterGameMode.SeamlessVolumeManager"); }
	float& RandomAutoSaveSpreadField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RandomAutoSaveSpread"); }
	FString& SteamAPIKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SteamAPIKey"); }
	FString& LastServerNotificationMessageField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastServerNotificationMessage"); }
	long double& LastServerNotificationRecievedAtField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastServerNotificationRecievedAt"); }
	long double& LastExecSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastExecSaveTime"); }
	long double& LastTimeSavedWorldField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeSavedWorld"); }
	FString& SaveDirectoryNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SaveDirectoryName"); }
	TArray<UPrimalPlayerData*> PlayerDatasField() { return *GetNativePointerField<TArray<UPrimalPlayerData*>*>(this, "AShooterGameMode.PlayerDatas"); }
	int& NPCZoneManagerModField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCZoneManagerMod"); }
	bool& bPopulatingSpawnZonesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPopulatingSpawnZones"); }
	bool& bRestartedAPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRestartedAPlayer"); }
	bool& bForceRespawnDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceRespawnDinos"); }
	bool& bFirstSaveWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFirstSaveWorld"); }
	bool& bAllowRaidDinoFeedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowRaidDinoFeeding"); }
	FDateTime& LastBackupTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastBackupTime"); }
	FDateTime& LastSaveWorldTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastSaveWorldTime"); }
	float& TamedDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoDamageMultiplier"); }
	float& DinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoDamageMultiplier"); }
	float& PlayerDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerDamageMultiplier"); }
	float& StructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageMultiplier"); }
	float& PlayerResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerResistanceMultiplier"); }
	float& DinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoResistanceMultiplier"); }
	float& TamedDinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoResistanceMultiplier"); }
	float& StructureResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureResistanceMultiplier"); }
	bool& bJoinInProgressGamesAsSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bJoinInProgressGamesAsSpectator"); }
	float& TamingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamingSpeedMultiplier"); }
	float& HarvestAmountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestAmountMultiplier"); }
	float& HarvestHealthMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestHealthMultiplier"); }
	float& PlayerCharacterWaterDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterWaterDrainMultiplier"); }
	float& PlayerCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterFoodDrainMultiplier"); }
	float& DinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterFoodDrainMultiplier"); }
	float& RaidDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RaidDinoCharacterFoodDrainMultiplier"); }
	float& PlayerCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterStaminaDrainMultiplier"); }
	float& DinoCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterStaminaDrainMultiplier"); }
	float& PlayerCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterHealthRecoveryMultiplier"); }
	float& DinoCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterHealthRecoveryMultiplier"); }
	float& CarnivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivoreNaturalTargetingRangeMultiplier"); }
	float& CarnivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivorePlayerAggroMultiplier"); }
	float& HerbivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivoreNaturalTargetingRangeMultiplier"); }
	float& HerbivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivorePlayerAggroMultiplier"); }
	bool& AIForceTargetPlayersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceTargetPlayers"); }
	bool& AIForceOverlapCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceOverlapCheck"); }
	float& DinoCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCountMultiplier"); }
	bool& bDisableSaveLoadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableSaveLoad"); }
	bool& bDisableXPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableXP"); }
	bool& bDisableDynamicMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDynamicMusic"); }
	TArray<FPlayerDeathReason>& PlayerDeathReasonsField() { return *GetNativePointerField<TArray<FPlayerDeathReason>*>(this, "AShooterGameMode.PlayerDeathReasons"); }
	TArray<FLevelExperienceRamp>& LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp>*>(this, "AShooterGameMode.LevelExperienceRampOverrides"); }
	TArray<int>& OverridePlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.OverridePlayerLevelEngramPoints"); }
	TArray<int>& ExcludeItemIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.ExcludeItemIndices"); }
	TArray<FEngramEntryOverride>& OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameMode.OverrideEngramEntries"); }
	TArray<FEngramEntryOverride>& OverrideNamedEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameMode.OverrideNamedEngramEntries"); }
	TArray<FEngramEntryAutoUnlock>& EngramEntryAutoUnlocksField() { return *GetNativePointerField<TArray<FEngramEntryAutoUnlock>*>(this, "AShooterGameMode.EngramEntryAutoUnlocks"); }
	TArray<FString>& PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.PreventDinoTameClassNames"); }
	TArray<FDinoSpawnWeightMultiplier>& DinoSpawnWeightMultipliersField() { return *GetNativePointerField<TArray<FDinoSpawnWeightMultiplier>*>(this, "AShooterGameMode.DinoSpawnWeightMultipliers"); }
	TArray<FClassMultiplier>& DinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.DinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier>& TamedDinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.TamedDinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier>& DinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.DinoClassDamageMultipliers"); }
	TArray<FClassMultiplier>& TamedDinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.TamedDinoClassDamageMultipliers"); }
	TArray<FClassMultiplier>& HarvestResourceItemAmountClassMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.HarvestResourceItemAmountClassMultipliers"); }
	TArray<FClassNameReplacement>& NPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement>*>(this, "AShooterGameMode.NPCReplacements"); }
	float& PvPZoneStructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvPZoneStructureDamageMultiplier"); }
	bool& bOnlyAllowSpecifiedEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAllowSpecifiedEngrams"); }
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsDino"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalItemDecompositionTimeMultiplier"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalCorpseDecompositionTimeMultiplier"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxFallSpeedMultiplier"); }
	bool& bAutoPvETimerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvETimer"); }
	bool& bAutoPvEUseSystemTimeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvEUseSystemTime"); }
	bool& bUsingStructureDestructionTagField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUsingStructureDestructionTag"); }
	FName& StructureDestructionTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.StructureDestructionTag"); }
	float& AutoPvEStartTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStartTimeSeconds"); }
	float& AutoPvEStopTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStopTimeSeconds"); }
	int& TributeItemExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeItemExpirationSeconds"); }
	int& TributeDinoExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeDinoExpirationSeconds"); }
	int& TributeCharacterExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeCharacterExpirationSeconds"); }
	bool& PreventDownloadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadSurvivors"); }
	bool& PreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadItems"); }
	bool& PreventDownloadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadDinos"); }
	bool& bPreventUploadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadSurvivors"); }
	bool& bPreventUploadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadItems"); }
	bool& bPreventUploadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadDinos"); }
	int& MaxTributeItemsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeItems"); }
	int& MaxTributeDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeDinos"); }
	int& MaxTributeCharactersField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeCharacters"); }
	bool& bIncreasePvPRespawnIntervalField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIncreasePvPRespawnInterval"); }
	float& IncreasePvPRespawnIntervalCheckPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalCheckPeriod"); }
	float& IncreasePvPRespawnIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalMultiplier"); }
	float& IncreasePvPRespawnIntervalBaseAmountField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalBaseAmount"); }
	float& ResourceNoReplenishRadiusStructuresField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusStructures"); }
	float& ResourceNoReplenishRadiusPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusPlayers"); }
	float& CropGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropGrowthSpeedMultiplier"); }
	float& LayEggIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LayEggIntervalMultiplier"); }
	float& PoopIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PoopIntervalMultiplier"); }
	float& CropDecaySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropDecaySpeedMultiplier"); }
	bool& bAllowChatFromDeadNonAdminsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowChatFromDeadNonAdmins"); }
	bool& bAllowDisablingSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDisablingSpectator"); }
	bool& bPvEDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEDisableFriendlyFire"); }
	bool& bFlyerPlatformAllowUnalignedDinoBasingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFlyerPlatformAllowUnalignedDinoBasing"); }
	int& MaxPerTribePlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPerTribePlatformSaddleStructureLimit"); }
	int& MaxPlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPlatformSaddleStructureLimit"); }
	int& MaxDinoBaseLevelField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxDinoBaseLevel"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxNumberOfPlayersInTribe"); }
	float& MatingIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingIntervalMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EggHatchSpeedMultiplier"); }
	float& BabyMatureSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyMatureSpeedMultiplier"); }
	float& BabyFoodConsumptionSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyFoodConsumptionSpeedMultiplier"); }
	int& CurrentPlatformSaddleStructuresField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentPlatformSaddleStructures"); }
	FieldArray<float, 16> PerLevelStatsMultiplier_PlayerField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_Player" }; }
	FieldArray<float, 16> PerLevelStatsMultiplier_DinoTamedField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed" }; }
	FieldArray<float, 16> PerLevelStatsMultiplier_DinoTamed_AddField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Add" }; }
	FieldArray<float, 16> PerLevelStatsMultiplier_DinoTamed_AffinityField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Affinity" }; }
	FieldArray<float, 16> PerLevelStatsMultiplier_DinoWildField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoWild" }; }
	FieldArray<int, 8> ItemStatClampsField() { return { this, "AShooterGameMode.ItemStatClamps" }; }
	bool& bCustomGameModeAllowSpectatorJoinAfterMatchStartField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCustomGameModeAllowSpectatorJoinAfterMatchStart"); }
	bool& bGameplayLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGameplayLogEnabled"); }
	bool& bServerGameLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogEnabled"); }
	TSubclassOf<UPrimalItem>& BonusSupplyCrateItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "AShooterGameMode.BonusSupplyCrateItemClass"); }
	float& BonusSupplyCrateItemGiveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BonusSupplyCrateItemGiveInterval"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageRepairCooldown"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeSkillMultiplier"); }
	FString& BonusSupplyCrateItemStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BonusSupplyCrateItemString"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWar"); }
	bool& bPvEAllowTribeWarCancelField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWarCancel"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCustomRecipes"); }
	bool& bPassiveDefensesDamageRiderlessDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPassiveDefensesDamageRiderlessDinos"); }
	long double& LastBonusSupplyCrateItemGiveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastBonusSupplyCrateItemGiveTime"); }
	bool& bEnableDeathTeamSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableDeathTeamSpectator"); }
	bool& bTribeStoreCharacterConfigurationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeStoreCharacterConfiguration"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> > & PvEActiveTribeWarsField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.PvEActiveTribeWars"); }
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> > & TribeAlliesField() { return *GetNativePointerField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >*>(this, "AShooterGameMode.TribeAllies"); }
	TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> > IDtoPlayerDatasField() { return *GetNativePointerField<TMap<unsigned __int64, UPrimalPlayerData*, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, UPrimalPlayerData*, 0> >*>(this, "AShooterGameMode.IDtoPlayerDatas"); }
	TMap<int, TArray<FTribeEntity>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TArray<FTribeEntity>, 0> > & PlayersEntitiesField() { return *GetNativePointerField<TMap<int, TArray<FTribeEntity>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TArray<FTribeEntity>, 0> >*>(this, "AShooterGameMode.PlayersEntities"); }
	TMap<unsigned __int64, FDatabase_TribeWrapper, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, FDatabase_TribeWrapper, 0> > & PendingTribeLoadsField() { return *GetNativePointerField<TMap<unsigned __int64, FDatabase_TribeWrapper, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, FDatabase_TribeWrapper, 0> >*>(this, "AShooterGameMode.PendingTribeLoads"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& PendingAllianceLoadsField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.PendingAllianceLoads"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& PendingAllianceDeletesField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.PendingAllianceDeletes"); }
	TMap<unsigned __int64, FTribeAlliance, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, FTribeAlliance, 0> > & AlliancesField() { return *GetNativePointerField<TMap<unsigned __int64, FTribeAlliance, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, FTribeAlliance, 0> >*>(this, "AShooterGameMode.Alliances"); }
	int& MaxTribeLogsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribeLogs"); }
	TArray<FString>& CachedGameLogField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.CachedGameLog"); }
	int& PersonalTamedDinosSaddleStructureCostField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PersonalTamedDinosSaddleStructureCost"); }
	bool& bDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableFriendlyFire"); }
	bool& bAllowInactiveTribesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowInactiveTribes"); }
	bool& bForceMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceMapPlayerLocation"); }
	float& DinoHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHarvestingDamageMultiplier"); }
	float& PlayerHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerHarvestingDamageMultiplier"); }
	float& DinoTurretDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoTurretDamageMultiplier"); }
	bool& bDisableLootCratesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableLootCrates"); }
	float& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExtinctionEventTimeInterval"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableExtraStructurePreventionVolumes"); }
	unsigned int& NextExtinctionEventUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.NextExtinctionEventUTC"); }
	bool& bForceAllowCaveFlyersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowCaveFlyers"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDoExtinctionEvent"); }
	bool& bPreventOfflinePvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOfflinePvP"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPDinoDecay"); }
	bool& bOverideStructurePlatformPreventionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOverideStructurePlatformPrevention"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowAnyoneBabyImprintCuddle"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableImprintDinoBuff"); }
	bool& bShowFloatingDamageTextField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowFloatingDamageText"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFastDecayUnsnappedCoreStructures"); }
	bool& bDestroyUnconnectedWaterPipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDestroyUnconnectedWaterPipes"); }
	bool& bAllowCrateSpawnsOnTopOfStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCrateSpawnsOnTopOfStructures"); }
	bool& bNotifyAdminCommandsInChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNotifyAdminCommandsInChat"); }
	bool& bRandomSupplyCratePointsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRandomSupplyCratePoints"); }
	float& PreventOfflinePvPIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPInterval"); }
	FString& CurrentMerticsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentMerticsURL"); }
	FString& CurrentMetricEventsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentMetricEventsURL"); }
	FString& CurrentMetricCharacterLocationsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentMetricCharacterLocationsURL"); }
	TArray<FItemCraftingCostOverride>& OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride>*>(this, "AShooterGameMode.OverrideItemCraftingCosts"); }
	TArray<FConfigItemCraftingCostOverride>& ConfigOverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FConfigItemCraftingCostOverride>*>(this, "AShooterGameMode.ConfigOverrideItemCraftingCosts"); }
	TArray<FConfigSupplyCrateItemsOverride>& ConfigOverrideSupplyCrateItemsField() { return *GetNativePointerField<TArray<FConfigSupplyCrateItemsOverride>*>(this, "AShooterGameMode.ConfigOverrideSupplyCrateItems"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigOverrideNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigOverrideNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigAddNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigAddNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigSubtractNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigSubtractNPCSpawnEntriesContainer"); }
	float& BabyImprintingStatScaleMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintingStatScaleMultiplier"); }
	float& BabyCuddleIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleIntervalMultiplier"); }
	float& BabyCuddleGracePeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleGracePeriodMultiplier"); }
	float& BabyCuddleLoseImprintQualitySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleLoseImprintQualitySpeedMultiplier"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HairGrowthSpeedMultiplier"); }
	bool& bPreventDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventDiseases"); }
	bool& bNonPermanentDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNonPermanentDiseases"); }
	int& SaveForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveForceRespawnDinosVersion"); }
	unsigned __int64& ServerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterGameMode.ServerID"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LoadForceRespawnDinosVersion"); }
	bool& bIsLoadedServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLoadedServer"); }
	TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FTributePlayerTribeInfo, 0> > & TributePlayerTribeInfosField() { return *GetNativePointerField<TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FTributePlayerTribeInfo, 0> >*>(this, "AShooterGameMode.TributePlayerTribeInfos"); }
	TArray<int>& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.SupportedSpawnRegions"); }
	bool& bServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerUseDinoList"); }
	float& MaxAllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxAllowedRespawnInterval"); }
	float& TribeJoinIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeJoinInterval"); }
	bool& bUseDinoLevelUpAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseDinoLevelUpAnimations"); }
	bool& bDisableDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoTaming"); }
	bool& bDisableDinoRidingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoRiding"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumDinoReuploadInterval"); }
	int& SaveGameCustomVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveGameCustomVersion"); }
	float& OverrideOfficialDifficultyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OverrideOfficialDifficulty"); }
	FieldArray<float, 16> PlayerBaseStatMultipliersField() { return { this, "AShooterGameMode.PlayerBaseStatMultipliers" }; }
	int& NPCActiveCountTamedField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCountTamed"); }
	int& NPCActiveCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCount"); }
	int& NPCCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCCount"); }
	float& MatingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FastDecayInterval"); }
	bool& bUseSingleplayerSettingsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseSingleplayerSettings"); }
	bool& bUseCorpseLocatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseCorpseLocator"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructurePlacementCollision"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceUseInventoryAppends"); }
	float& SupplyCrateLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SupplyCrateLootQualityMultiplier"); }
	float& FishingLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FishingLootQualityMultiplier"); }
	float& CraftingSkillBonusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftingSkillBonusMultiplier"); }
	bool& bAllowPlatformSaddleMultiFloorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowPlatformSaddleMultiFloors"); }
	bool& bAllowUnlimitedRespecsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnlimitedRespecs"); }
	float& FuelConsumptionIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FuelConsumptionIntervalMultiplier"); }
	int& DestroyTamesOverLevelClampField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DestroyTamesOverLevelClamp"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribesPerAlliance"); }
	bool& bDisableDinoDecayClaimingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayClaiming"); }
	bool& bUseTameLimitForStructuresOnlyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseTameLimitForStructuresOnly"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitTurretsNum"); }
	bool& bHardLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHardLimitTurretsInRange"); }
	bool& bAutoUnlockAllEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoUnlockAllEngrams"); }
	long double& ServerLastForceRespawnWildDinosTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.ServerLastForceRespawnWildDinosTime"); }
	FString& UseStructurePreventionVolumeTagStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UseStructurePreventionVolumeTagString"); }
	float& BaseTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseTemperatureMultiplier"); }
	bool& bForceAllowAllStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAllStructures"); }
	bool& bForceAllowAscensionItemDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAscensionItemDownloads"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowCreativeMode"); }
	float& GlobalPoweredBatteryDurabilityDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalPoweredBatteryDurabilityDecreasePerSecond"); }
	float& SingleplayerSettingsCorpseLifespanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SingleplayerSettingsCorpseLifespanMultiplier"); }
	bool& bUseStaticCharacterAgeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseStaticCharacterAge"); }
	float& UseCorpseLifeSpanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UseCorpseLifeSpanMultiplier"); }
	bool& bUseBPPreSpawnedDinoField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseBPPreSpawnedDino"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& TamedDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoTorporDrainMultiplier"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PassiveTameIntervalMultiplier"); }
	float& TamedDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoTorporDrainMultiplier"); }
	float& DinoCreatureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCreatureDamageMultiplier"); }
	float& DinoCreatureResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCreatureResistanceMultiplier"); }
	FieldArray<int, 3> MaxTameUnitsField() { return { this, "AShooterGameMode.MaxTameUnits" }; }
	int& MaxGlobalShipsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxGlobalShips"); }
	bool& bDontUseClaimFlagsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDontUseClaimFlags"); }
	float& NoClaimFlagDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.NoClaimFlagDecayPeriodMultiplier"); }
	bool& bDisableWeatherFogField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWeatherFog"); }
	int& PlayerDefaultNoDiscoveriesMaxLevelUpsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PlayerDefaultNoDiscoveriesMaxLevelUps"); }
	bool& bClampHomeServerXPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampHomeServerXP"); }
	int& ClampHomeServerXPLevelField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ClampHomeServerXPLevel"); }
	TMap<int, FTameUnitCounts, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, FTameUnitCounts, 0> > & TeamTameUnitCountsField() { return *GetNativePointerField<TMap<int, FTameUnitCounts, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, FTameUnitCounts, 0> >*>(this, "AShooterGameMode.TeamTameUnitCounts"); }
	FTameUnitCounts& EmptyTameUnitsField() { return *GetNativePointerField<FTameUnitCounts*>(this, "AShooterGameMode.EmptyTameUnits"); }
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.UseStructurePreventionVolumeTag"); }
	bool& bHasCovertedToStoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHasCovertedToStore"); }
	bool& bAllowStoredDatasField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowStoredDatas"); }
	//FDataStore<unsigned int>& TribeDataStoreField() { return *GetNativePointerField<FDataStore<unsigned int>*>(this, "AShooterGameMode.TribeDataStore"); }
	//FDataStore<unsigned __int64>& PlayerDataStoreField() { return *GetNativePointerField<FDataStore<unsigned __int64>*>(this, "AShooterGameMode.PlayerDataStore"); }
	//FSocket * SeamlessServerSocketField() { return *GetNativePointerField<FSocket **>(this, "AShooterGameMode.SeamlessServerSocket"); }
	TArray<FSeamlessTravelPlayerData>& SeamlessTravelPlayersDataField() { return *GetNativePointerField<TArray<FSeamlessTravelPlayerData>*>(this, "AShooterGameMode.SeamlessTravelPlayersData"); }
	//TSet<unsigned int,DefaultKeyFuncs<unsigned int,0>,FDefaultSetAllocator>& CurrentPendingTribeLoadsField() { return *GetNativePointerField<TSet<unsigned int,DefaultKeyFuncs<unsigned int,0>,FDefaultSetAllocator>*>(this, "AShooterGameMode.CurrentPendingTribeLoads"); }
	TArray<unsigned int>& PlayerDataIDsWaitingForTribeDataField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "AShooterGameMode.PlayerDataIDsWaitingForTribeData"); }
	//TMap<unsigned int,TArray<TWeakObjectPtr<AActor>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,TArray<TWeakObjectPtr<AActor>>,0> >& TribesEntitiesPendingAddField() { return *GetNativePointerField<TMap<unsigned int,TArray<TWeakObjectPtr<AActor>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,TArray<TWeakObjectPtr<AActor>>,0> >*>(this, "AShooterGameMode.TribesEntitiesPendingAdd"); }
	//TMap<unsigned int,TArray<TWeakObjectPtr<AActor>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,TArray<TWeakObjectPtr<AActor>>,0> >& AssignedTribesEntitiesFromPlayerField() { return *GetNativePointerField<TMap<unsigned int,TArray<TWeakObjectPtr<AActor>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,TArray<TWeakObjectPtr<AActor>>,0> >*>(this, "AShooterGameMode.AssignedTribesEntitiesFromPlayer"); }
	//TSet<unsigned int,DefaultKeyFuncs<unsigned int,0>,FDefaultSetAllocator>& TribesToLoadField() { return *GetNativePointerField<TSet<unsigned int,DefaultKeyFuncs<unsigned int,0>,FDefaultSetAllocator>*>(this, "AShooterGameMode.TribesToLoad"); }
	//TMap<unsigned int,TArray<TFunction<void __cdecl(void)>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,TArray<TFunction<void __cdecl(void)>>,0> >& TribeCallbacksPendingLoadField() { return *GetNativePointerField<TMap<unsigned int,TArray<TFunction<void __cdecl(void)>>,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,TArray<TFunction<void __cdecl(void)>>,0> >*>(this, "AShooterGameMode.TribeCallbacksPendingLoad"); }
	//TSet<unsigned int,DefaultKeyFuncs<unsigned int,0>,FDefaultSetAllocator>& LoadPlayerEntitiesOperationsField() { return *GetNativePointerField<TSet<unsigned int,DefaultKeyFuncs<unsigned int,0>,FDefaultSetAllocator>*>(this, "AShooterGameMode.LoadPlayerEntitiesOperations"); }
	long double& LastUpdatedTribeOnlinePresenceField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastUpdatedTribeOnlinePresence"); }
	bool& bHasLoadedSaveGameField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHasLoadedSaveGame"); }
	long double& StartedBeingOverSubscribedAtField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.StartedBeingOverSubscribedAt"); }
	FTickCallbacks& TickCallbacksField() { return *GetNativePointerField<FTickCallbacks*>(this, "AShooterGameMode.TickCallbacks"); }
	TMap<unsigned int, FGridCellServerInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, FGridCellServerInfo, 0> > & GridServersInfosField() { return *GetNativePointerField<TMap<unsigned int, FGridCellServerInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, FGridCellServerInfo, 0> >*>(this, "AShooterGameMode.GridServersInfos"); }
	USeamlessDataServer* SeamlessDataServerField() { return *GetNativePointerField<USeamlessDataServer * *>(this, "AShooterGameMode.SeamlessDataServer"); }
	bool& bIsHomeServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsHomeServer"); }
	bool& bNoDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNoDinoTaming"); }
	bool& bNoAnchoringField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNoAnchoring"); }
	bool& bIsLawlessHomeServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLawlessHomeServer"); }
	bool& bHomeServerDontReplicateLoggedOutPlayersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHomeServerDontReplicateLoggedOutPlayers"); }
	float& ShipDecayRateField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ShipDecayRate"); }
	TArray<FPlayerFlagData>& PlayerFlagDatasField() { return *GetNativePointerField<TArray<FPlayerFlagData>*>(this, "AShooterGameMode.PlayerFlagDatas"); }
	TMap<unsigned int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, double, 0> > & PendingTribesClaimFlagNotifsField() { return *GetNativePointerField<TMap<unsigned int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, double, 0> >*>(this, "AShooterGameMode.PendingTribesClaimFlagNotifs"); }
	TArray<FTribeTravelCount>& TribesTravelCountField() { return *GetNativePointerField<TArray<FTribeTravelCount>*>(this, "AShooterGameMode.TribesTravelCount"); }
	TMap<unsigned int, FServerTribeAtMax, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, FServerTribeAtMax, 0> > & MapServerAtMaxField() { return *GetNativePointerField<TMap<unsigned int, FServerTribeAtMax, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned int, FServerTribeAtMax, 0> >*>(this, "AShooterGameMode.MapServerAtMax"); }
	int& NextTribeTravelResetTimeUTCField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NextTribeTravelResetTimeUTC"); }
	float& LastTribeTravelResetTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LastTribeTravelResetTime"); }
	float& LastTribeTravelFailsafeCheckField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LastTribeTravelFailsafeCheck"); }
	float& MaxTribeTravelResetIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxTribeTravelResetInterval"); }
	unsigned int& MaxTribeTravelCountField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.MaxTribeTravelCount"); }
	FRegionGeneralOverrides& RegionOverridesField() { return *GetNativePointerField<FRegionGeneralOverrides*>(this, "AShooterGameMode.RegionOverrides"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& SeenPlayerAndTribeIdsField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "AShooterGameMode.SeenPlayerAndTribeIds"); }
	bool& bOutGoingTransfersEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOutGoingTransfersEnabled"); }
	TArray<FAttachedInstancedHarvestingElement*, FDefaultAllocator>& HiddenHarvestingComponentsField() { return *GetNativePointerField<TArray<FAttachedInstancedHarvestingElement*, FDefaultAllocator>*>(this, "AShooterGameMode.HiddenHarvestingComponents"); }



	// Functions

	bool AllowAddXP(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "AShooterGameMode.AllowAddXP", forComp); }
	void AddPendingTribeToLoad(unsigned int TribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.AddPendingTribeToLoad", TribeID); }
	static AShooterGameMode SharedLogFetchPending() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.SharedLogFetchPending"); }
	//FSetElementId * TickOverSubscription(FSetElementId * result, TPairInitializer<unsigned int const &,`AShooterGameMode::TickOverSubscription'::`54'::DestGridServerStat const &> * Args, bool * bIsAlreadyInSetPtr) { return NativeCall<FSetElementId *, FSetElementId *, TPairInitializer<unsigned int const &,`AShooterGameMode::TickOverSubscription'::`54'::DestGridServerStat const &> *, bool *>(this, "AShooterGameMode.TickOverSubscription", result, Args, bIsAlreadyInSetPtr); }
	void TickOverSubscription() { NativeCall<void>(this, "AShooterGameMode.TickOverSubscription"); }
	void AddAndSaveTribeEntity(unsigned int TribeID, TArray<FTribeEntity>* Entities, FTribeEntity* TribeEntity) { NativeCall<void, unsigned int, TArray<FTribeEntity>*, FTribeEntity*>(this, "AShooterGameMode.AddAndSaveTribeEntity", TribeID, Entities, TribeEntity); }
	void AddClaimFlag(APrimalStructureClaimFlag* Flag, unsigned __int64 TribeOrOwnerId) { NativeCall<void, APrimalStructureClaimFlag*, unsigned __int64>(this, "AShooterGameMode.AddClaimFlag", Flag, TribeOrOwnerId); }
	unsigned __int64 AddNewTribe(AShooterPlayerState* PlayerOwner, FString* TribeName, FTribeGovernment* TribeGovernment) { return NativeCall<unsigned __int64, AShooterPlayerState*, FString*, FTribeGovernment*>(this, "AShooterGameMode.AddNewTribe", PlayerOwner, TribeName, TribeGovernment); }
	void AddPlayerID(int playerDataID, unsigned __int64 netUniqueID) { NativeCall<void, int, unsigned __int64>(this, "AShooterGameMode.AddPlayerID", playerDataID, netUniqueID); }
	void AddTameUnits(int ToTeam, int AddUnits, ETameUnitType::Type TheTameUnitType, bool bIgnoreNetworking) { NativeCall<void, int, int, ETameUnitType::Type, bool>(this, "AShooterGameMode.AddTameUnits", ToTeam, AddUnits, TheTameUnitType, bIgnoreNetworking); }
	void AddToTribeLog(int TribeId, FString* NewLog) { NativeCall<void, int, FString*>(this, "AShooterGameMode.AddToTribeLog", TribeId, NewLog); }
	bool AddTribeEntity(unsigned int TribeID, FTribeEntity* TribeEntity) { return NativeCall<bool, unsigned int, FTribeEntity*>(this, "AShooterGameMode.AddTribeEntity", TribeID, TribeEntity); }
	bool AddTribeEntity(AActor* Entity) { return NativeCall<bool, AActor*>(this, "AShooterGameMode.AddTribeEntity", Entity); }
	bool AddTribeShip(APrimalRaft* Ship) { return NativeCall<bool, APrimalRaft*>(this, "AShooterGameMode.AddTribeShip", Ship); }
	void AddTribeTravelCount(unsigned int TribeId) { NativeCall<void, unsigned int>(this, "AShooterGameMode.AddTribeTravelCount", TribeId); }
	void AddTribeWar(int MyTribeID, int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime, bool bForceApprove) { NativeCall<void, int, int, int, int, float, float, bool>(this, "AShooterGameMode.AddTribeWar", MyTribeID, EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime, bForceApprove); }
	void AdjustDamage(AActor* Victim, float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float*, FDamageEvent*, AController*, AActor*>(this, "AShooterGameMode.AdjustDamage", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	static bool AllowDamage(UWorld* ForWorld, int TargetingTeam1, int TargetingTeam2, bool bIgnoreDamageIfAllied) { return NativeCall<bool, UWorld*, int, int, bool>(nullptr, "AShooterGameMode.AllowDamage", ForWorld, TargetingTeam1, TargetingTeam2, bIgnoreDamageIfAllied); }
	void AllowPlayerToJoinNoCheck(FUniqueNetIdUInt64* PlayerId) { NativeCall<void, FUniqueNetIdUInt64*>(this, "AShooterGameMode.AllowPlayerToJoinNoCheck", PlayerId); }
	bool AllowRenameTribe(AShooterPlayerState* ForPlayerState, FString* TribeName) { return NativeCall<bool, AShooterPlayerState*, FString*>(this, "AShooterGameMode.AllowRenameTribe", ForPlayerState, TribeName); }
	bool AllowTaming(int ForTeam) { return NativeCall<bool, int>(this, "AShooterGameMode.AllowTaming", ForTeam); }
	bool AreTribesAllied(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.AreTribesAllied", TribeID1, TribeID2); }
	void AsyncSetAndUpdateClaimFlagBytesForTribe(unsigned int TribeId, int PaintingId, int PaintingRevision, TArray<unsigned char>* CompressedBytes, TArray<short>* StructureColors) { NativeCall<void, unsigned int, int, int, TArray<unsigned char>*, TArray<short>*>(this, "AShooterGameMode.AsyncSetAndUpdateClaimFlagBytesForTribe", TribeId, PaintingId, PaintingRevision, CompressedBytes, StructureColors); }
	void AtlasGlobalCommand(FString Command) { NativeCall<void, FString>(this, "AShooterGameMode.AtlasGlobalCommand", Command); }
	bool BanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.BanPlayer", PlayerSteamName, PlayerSteamID); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameMode.BeginPlay"); }
	void BeginUnloadingWorld() { NativeCall<void>(this, "AShooterGameMode.BeginUnloadingWorld"); }
	void ChangeClaimFlag(APrimalStructureClaimFlag* Flag, unsigned __int64 OLDTribeOrOwnerId, unsigned __int64 NEWTribeOrOwnerId) { NativeCall<void, APrimalStructureClaimFlag*, unsigned __int64, unsigned __int64>(this, "AShooterGameMode.ChangeClaimFlag", Flag, OLDTribeOrOwnerId, NEWTribeOrOwnerId); }
	bool ChangeTribeGovernment(unsigned int TribeID, FTribeGovernment* TribeGovernment) { return NativeCall<bool, unsigned int, FTribeGovernment*>(this, "AShooterGameMode.ChangeTribeGovernment", TribeID, TribeGovernment); }
	bool ChangeTribeName(unsigned int TribeID, FString* NewTribeName) { return NativeCall<bool, unsigned int, FString*>(this, "AShooterGameMode.ChangeTribeName", TribeID, NewTribeName); }
	void CheckForRepopulation() { NativeCall<void>(this, "AShooterGameMode.CheckForRepopulation"); }
	void CheckIsOfficialServer() { NativeCall<void>(this, "AShooterGameMode.CheckIsOfficialServer"); }
	void CheckTribeTravelFailsafe() { NativeCall<void>(this, "AShooterGameMode.CheckTribeTravelFailsafe"); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AShooterGameMode.ChoosePlayerStart_Implementation", Player); }
	void ClearSavesAndRestart() { NativeCall<void>(this, "AShooterGameMode.ClearSavesAndRestart"); }
	float ConvertTribeResetUTCToLastGameTime(int ResetUTC) { return NativeCall<float, int>(this, "AShooterGameMode.ConvertTribeResetUTCToLastGameTime", ResetUTC); }
	int CountOverlappingDinoCharactersOfTeamAndClass(FVector* AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<int, FVector*, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass", AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	void CreateAlliance(unsigned __int64 TribeId, FString* AllianceName) { NativeCall<void, unsigned __int64, FString*>(this, "AShooterGameMode.CreateAlliance", TribeId, AllianceName); }
	void DDoSDetected() { NativeCall<void>(this, "AShooterGameMode.DDoSDetected"); }
	void DeletePlayerData(FString* UniqueNetId) { NativeCall<void, FString*>(this, "AShooterGameMode.DeletePlayerData", UniqueNetId); }
	void DeletePlayerData(AShooterPlayerState* PlayerState) { NativeCall<void, AShooterPlayerState*>(this, "AShooterGameMode.DeletePlayerData", PlayerState); }
	bool DemoteFromTribeAdmin(unsigned int TribeID, unsigned int PlayerDataID) { return NativeCall<bool, unsigned int, unsigned int>(this, "AShooterGameMode.DemoteFromTribeAdmin", TribeID, PlayerDataID); }
	void DisallowPlayerToJoinNoCheck(FUniqueNetIdUInt64* PlayerId) { NativeCall<void, FUniqueNetIdUInt64*>(this, "AShooterGameMode.DisallowPlayerToJoinNoCheck", PlayerId); }
	FString* DoGameCommand(FString* result, FString* TheCommand) { return NativeCall<FString*, FString*, FString*>(this, "AShooterGameMode.DoGameCommand", result, TheCommand); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AShooterGameMode.EndPlay", EndPlayReason); }
	void FinishTribeClaimFlagPainting(unsigned int TribeId, int PaintingUniqueId, int PaintingRevision, TArray<short>* StructureColors) { NativeCall<void, unsigned int, int, int, TArray<short>*>(this, "AShooterGameMode.FinishTribeClaimFlagPainting", TribeId, PaintingUniqueId, PaintingRevision, StructureColors); }
	bool FinshProcessingEntry(TSharedPtr<FDatabase_LogEntryWrapper, 1> Entry) { return NativeCall<bool, TSharedPtr<FDatabase_LogEntryWrapper, 1>>(this, "AShooterGameMode.FinshProcessingEntry", Entry); }
	void FlushPrimalStats(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameMode.FlushPrimalStats", ForPC); }
	int ForceAddPlayerToTribe(AShooterPlayerState* ForPlayerState, FString* TribeName) { return NativeCall<int, AShooterPlayerState*, FString*>(this, "AShooterGameMode.ForceAddPlayerToTribe", ForPlayerState, TribeName); }
	int ForceCreateTribe(FString* TribeName, int TeamOverride) { return NativeCall<int, FString*, int>(this, "AShooterGameMode.ForceCreateTribe", TribeName, TeamOverride); }
	void ForceRotateTribeLog(unsigned __int64 TribeId) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.ForceRotateTribeLog", TribeId); }
	unsigned int GeneratePlayerDataId(unsigned __int64 NetUniqueID) { return NativeCall<unsigned int, unsigned __int64>(this, "AShooterGameMode.GeneratePlayerDataId", NetUniqueID); }
	FString* GenerateProfileFileName(FString* result, FString* UniqueId, FString* NetworkAddresss, FString* PlayerName) { return NativeCall<FString*, FString*, FString*, FString*, FString*>(this, "AShooterGameMode.GenerateProfileFileName", result, UniqueId, NetworkAddresss, PlayerName); }
	unsigned int GenerateTribeId() { return NativeCall<unsigned int>(this, "AShooterGameMode.GenerateTribeId"); }
	void GenerateTribePNG(unsigned __int64 TribeId) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.GenerateTribePNG", TribeId); }
	void GetActorSaveGameTypes(TArray<TSubclassOf<AActor>>* saveGameTypes) { NativeCall<void, TArray<TSubclassOf<AActor>>*>(this, "AShooterGameMode.GetActorSaveGameTypes", saveGameTypes); }
	TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> > * GetBannedMap(TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> > * result) { return NativeCall<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*, TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >*>(this, "AShooterGameMode.GetBannedMap", result); }
	bool GetBoolOption(FString* Options, FString* ParseString, bool CurrentValue) { return NativeCall<bool, FString*, FString*, bool>(this, "AShooterGameMode.GetBoolOption", Options, ParseString, CurrentValue); }
	bool GetBoolOptionIni(FString Section, FString OptionName) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.GetBoolOptionIni", Section, OptionName); }
	TArray<unsigned char>* GetClaimFlagBytes(TArray<unsigned char>* result, int PaintingId) { return NativeCall<TArray<unsigned char>*, TArray<unsigned char>*, int>(this, "AShooterGameMode.GetClaimFlagBytes", result, PaintingId); }
	bool GetClaimFlagBytes(int PaintingId, TArray<unsigned char>* ClaimFlagBytes) { return NativeCall<bool, int, TArray<unsigned char>*>(this, "AShooterGameMode.GetClaimFlagBytes", PaintingId, ClaimFlagBytes); }
	FString* GetCurrentServerConnectionString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetCurrentServerConnectionString", result); }
	unsigned int GetCurrentServerId() { return NativeCall<unsigned int>(this, "AShooterGameMode.GetCurrentServerId"); }
	TSubclassOf<UObject>* GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject>* result, AController* InController) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, AController*>(this, "AShooterGameMode.GetDefaultPawnClassForController_Implementation", result, InController); }
	float GetDinoDamageMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoDamageMultiplier", ForDino); }
	float GetDinoResistanceMultiplier(APrimalDinoCharacter* ForDino) { return NativeCall<float, APrimalDinoCharacter*>(this, "AShooterGameMode.GetDinoResistanceMultiplier", ForDino); }
	float GetExtraDinoSpawnWeight(FName DinoNameTag) { return NativeCall<float, FName>(this, "AShooterGameMode.GetExtraDinoSpawnWeight", DinoNameTag); }
	float GetFloatOption(FString* Options, FString* ParseString, float CurrentValue) { return NativeCall<float, FString*, FString*, float>(this, "AShooterGameMode.GetFloatOption", Options, ParseString, CurrentValue); }
	float GetFloatOptionIni(FString Section, FString OptionName) { return NativeCall<float, FString, FString>(this, "AShooterGameMode.GetFloatOptionIni", Section, OptionName); }
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result) { return NativeCall<TSubclassOf<AGameSession>*, TSubclassOf<AGameSession>*>(this, "AShooterGameMode.GetGameSessionClass", result); }
	int GetGlobalNumOfShipsForTribe(int TribeId) { return NativeCall<int, int>(this, "AShooterGameMode.GetGlobalNumOfShipsForTribe", TribeId); }
	float GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem> HarvestItemClass) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.GetHarvestResourceItemAmountMultiplier", HarvestItemClass); }
	int GetIntOptionIni(FString Section, FString OptionName) { return NativeCall<int, FString, FString>(this, "AShooterGameMode.GetIntOptionIni", Section, OptionName); }
	bool GetLaunchOptionFloat(FString* LaunchOptionKey, float* ReturnVal) { return NativeCall<bool, FString*, float*>(this, "AShooterGameMode.GetLaunchOptionFloat", LaunchOptionKey, ReturnVal); }
	FString* GetMapName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetMapName", result); }
	int GetNumDeaths(FString* PlayerDataID) { return NativeCall<int, FString*>(this, "AShooterGameMode.GetNumDeaths", PlayerDataID); }
	int GetNumberOfLivePlayersOnTribe(FString* TribeName) { return NativeCall<int, FString*>(this, "AShooterGameMode.GetNumberOfLivePlayersOnTribe", TribeName); }
	AOceanDinoManager* GetOceanDinoManager() { return NativeCall<AOceanDinoManager*>(this, "AShooterGameMode.GetOceanDinoManager"); }
	AOceanVolume* GetOceanVolume() { return NativeCall<AOceanVolume*>(this, "AShooterGameMode.GetOceanVolume"); }
	bool GetOrLoadTribeData(int TribeID, FTribeData* LoadedTribeData) { return NativeCall<bool, int, FTribeData*>(this, "AShooterGameMode.GetOrLoadTribeData", TribeID, LoadedTribeData); }
	TArray<APrimalDinoCharacter*>* GetOverlappingDinoCharactersOfTeamAndClass(TArray<APrimalDinoCharacter*>* result, FVector* AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<TArray<APrimalDinoCharacter*>*, TArray<APrimalDinoCharacter*>*, FVector*, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass", result, AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	UPrimalPlayerData* GetPlayerData(FString* PlayerDataID) { return NativeCall<UPrimalPlayerData*, FString*>(this, "AShooterGameMode.GetPlayerData", PlayerDataID); }
	UPrimalPlayerData* GetPlayerData(unsigned int PlayerDataID) { return NativeCall<UPrimalPlayerData*, unsigned int>(this, "AShooterGameMode.GetPlayerData", PlayerDataID); }
	UPrimalPlayerData* GetPlayerDataFor(AShooterPlayerController* PC, bool* bCreatedNewPlayerData, bool bForceCreateNewPlayerData, FPrimalPlayerCharacterConfigStruct* charConfig, bool bAutoCreateNewData, bool bDontSaveNewData) { return NativeCall<UPrimalPlayerData*, AShooterPlayerController*, bool*, bool, FPrimalPlayerCharacterConfigStruct*, bool, bool>(this, "AShooterGameMode.GetPlayerDataFor", PC, bCreatedNewPlayerData, bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData); }
	UPrimalPlayerData* GetPlayerDataForInternal(AShooterPlayerController* PC, bool* bCreatedNewPlayerData, bool bForceCreateNewPlayerData, FPrimalPlayerCharacterConfigStruct* charConfig, bool bAutoCreateNewData, bool bDontSaveNewData) { return NativeCall<UPrimalPlayerData*, AShooterPlayerController*, bool*, bool, FPrimalPlayerCharacterConfigStruct*, bool, bool>(this, "AShooterGameMode.GetPlayerDataForInternal", PC, bCreatedNewPlayerData, bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData); }
	UPrimalPlayerData* GetPlayerDataForUniqueNetId(FString* UniqueNetId, FString* PlayerName) { return NativeCall<UPrimalPlayerData*, FString*, FString*>(this, "AShooterGameMode.GetPlayerDataForUniqueNetId", UniqueNetId, PlayerName); }
	int GetPlayerIDForSteamID(unsigned __int64 steamID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetPlayerIDForSteamID", steamID); }
	FString* GetSaveDirectoryName(FString* result, ESaveType::Type SaveType) { return NativeCall<FString*, FString*, ESaveType::Type>(this, "AShooterGameMode.GetSaveDirectoryName", result, SaveType); }
	FNetworkGUID* GetSeamlessObjectOldGuidForPlayer(FNetworkGUID* result, FString* PlayerId, UObject* Object) { return NativeCall<FNetworkGUID*, FNetworkGUID*, FString*, UObject*>(this, "AShooterGameMode.GetSeamlessObjectOldGuidForPlayer", result, PlayerId, Object); }
	TArray<FTransform>* GetSeamlessSublevelsAdditionalTransforms(TArray<FTransform>* result) { return NativeCall<TArray<FTransform>*, TArray<FTransform>*>(this, "AShooterGameMode.GetSeamlessSublevelsAdditionalTransforms", result); }
	TArray<FString>* GetSeamlessSublevelsNames(TArray<FString>* result) { return NativeCall<TArray<FString>*, TArray<FString>*>(this, "AShooterGameMode.GetSeamlessSublevelsNames", result); }
	TArray<unsigned int>* GetSeamlessSublevelsUniqueIds(TArray<unsigned int>* result) { return NativeCall<TArray<unsigned int>*, TArray<unsigned int>*>(this, "AShooterGameMode.GetSeamlessSublevelsUniqueIds", result); }
	bool GetServerSettingsFloat(FString* Keyvalue, float* OutFloat) { return NativeCall<bool, FString*, float*>(this, "AShooterGameMode.GetServerSettingsFloat", Keyvalue, OutFloat); }
	FString* GetSessionTimeString_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterGameMode.GetSessionTimeString_Implementation", result); }
	unsigned __int64 GetSteamIDForPlayerID(int playerDataID) { return NativeCall<unsigned __int64, int>(this, "AShooterGameMode.GetSteamIDForPlayerID", playerDataID); }
	FString* GetStringOption(FString* result, FString Section, FString OptionName) { return NativeCall<FString*, FString*, FString, FString>(this, "AShooterGameMode.GetStringOption", result, Section, OptionName); }
	int GetTameUnitCount(int ToTeam, ETameUnitType::Type TheTameUnitType) { return NativeCall<int, int, ETameUnitType::Type>(this, "AShooterGameMode.GetTameUnitCount", ToTeam, TheTameUnitType); }
	FTameUnitCounts* GetTameUnitCounts(FTameUnitCounts* result, int ForTeam) { return NativeCall<FTameUnitCounts*, FTameUnitCounts*, int>(this, "AShooterGameMode.GetTameUnitCounts", result, ForTeam); }
	FVector* GetTracedSpawnLocation(FVector* result, FVector* SpawnLoc, float CharHalfHeight) { return NativeCall<FVector*, FVector*, FVector*, float>(this, "AShooterGameMode.GetTracedSpawnLocation", result, SpawnLoc, CharHalfHeight); }
	int GetTribeClaimFlagPaintingIdAndRevision(unsigned int TribeId, int* PaintingRevision, TArray<short>* OutStructureColors) { return NativeCall<int, unsigned int, int*, TArray<short>*>(this, "AShooterGameMode.GetTribeClaimFlagPaintingIdAndRevision", TribeId, PaintingRevision, OutStructureColors); }
	FTribeData* GetTribeData(unsigned __int64 TribeID) { return NativeCall<FTribeData*, unsigned __int64>(this, "AShooterGameMode.GetTribeData", TribeID); }
	FTribeData* GetTribeDataBlueprint(FTribeData* result, int TribeID) { return NativeCall<FTribeData*, FTribeData*, int>(this, "AShooterGameMode.GetTribeDataBlueprint", result, TribeID); }
	bool GetTribeEntityFromDBResultAndUpdateIfNeeded(unsigned __int64 TribeId, FDatabase_TribeEntities* DBResult, FTribeEntity* OutTribeEntity) { return NativeCall<bool, unsigned __int64, FDatabase_TribeEntities*, FTribeEntity*>(this, "AShooterGameMode.GetTribeEntityFromDBResultAndUpdateIfNeeded", TribeId, DBResult, OutTribeEntity); }
	int GetTribeIDOfPlayerID(unsigned __int64 PlayerDataID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetTribeIDOfPlayerID", PlayerDataID); }
	TArray<FString>* GetWhiteListedMap(TArray<FString>* result) { return NativeCall<TArray<FString>*, TArray<FString>*>(this, "AShooterGameMode.GetWhiteListedMap", result); }
	void GiveNewTreasureMapToCharacter(AShooterCharacter* ShooterChar, float Quality) { NativeCall<void, AShooterCharacter*, float>(this, "AShooterGameMode.GiveNewTreasureMapToCharacter", ShooterChar, Quality); }
	void HandleLeavingMap() { NativeCall<void>(this, "AShooterGameMode.HandleLeavingMap"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameMode.HandleMatchHasStarted"); }
	bool HandleNewPlayer_Implementation(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer_Implementation", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	bool HasSeenPlayerOrTribeID(unsigned __int64 id) { return NativeCall<bool, unsigned __int64>(this, "AShooterGameMode.HasSeenPlayerOrTribeID", id); }
	void IncrementNumDeaths(FString* PlayerDataID) { NativeCall<void, FString*>(this, "AShooterGameMode.IncrementNumDeaths", PlayerDataID); }
	void IncrementNumDinos(int ForTeam, int ByAmount) { NativeCall<void, int, int>(this, "AShooterGameMode.IncrementNumDinos", ForTeam, ByAmount); }
	static AShooterGameMode InitDiscoveryZones() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.InitDiscoveryZones"); }
	void InitGame(FString* MapName, FString* Options, FString* ErrorMessage) { NativeCall<void, FString*, FString*, FString*>(this, "AShooterGameMode.InitGame", MapName, Options, ErrorMessage); }
	void InitGameState() { NativeCall<void>(this, "AShooterGameMode.InitGameState"); }
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, TSharedPtr<FUniqueNetId, 0> * UniqueId, FString* Options, FString* Portal) { return NativeCall<FString*, FString*, APlayerController*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*>(this, "AShooterGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	void InitOptionBool(FString Commandline, FString Section, FString Option, bool bDefaultValue) { NativeCall<void, FString, FString, FString, bool>(this, "AShooterGameMode.InitOptionBool", Commandline, Section, Option, bDefaultValue); }
	void InitOptionFloat(FString Commandline, FString Section, FString Option, float CurrentValue) { NativeCall<void, FString, FString, FString, float>(this, "AShooterGameMode.InitOptionFloat", Commandline, Section, Option, CurrentValue); }
	void InitOptionInteger(FString Commandline, FString Section, FString Option, int CurrentValue) { NativeCall<void, FString, FString, FString, int>(this, "AShooterGameMode.InitOptionInteger", Commandline, Section, Option, CurrentValue); }
	void InitOptionString(FString Commandline, FString Section, FString Option) { NativeCall<void, FString, FString, FString>(this, "AShooterGameMode.InitOptionString", Commandline, Section, Option); }
	void InitOptions(FString Options) { NativeCall<void, FString>(this, "AShooterGameMode.InitOptions", Options); }
	void InitSeamlessDataServer() { NativeCall<void>(this, "AShooterGameMode.InitSeamlessDataServer"); }
	void InitSeamlessSocket() { NativeCall<void>(this, "AShooterGameMode.InitSeamlessSocket"); }
	void InitSpawnPoints() { NativeCall<void>(this, "AShooterGameMode.InitSpawnPoints"); }
	void InitStartSpot(AActor* StartSpot, AController* NewPlayer) { NativeCall<void, AActor*, AController*>(this, "AShooterGameMode.InitStartSpot", StartSpot, NewPlayer); }
	void InitTameUnitCounts() { NativeCall<void>(this, "AShooterGameMode.InitTameUnitCounts"); }
	void InitializeDatabaseRefs() { NativeCall<void>(this, "AShooterGameMode.InitializeDatabaseRefs"); }
	bool IsAtTameUnitLimit(int ToTeam, ETameUnitType::Type TheTameUnitType, int TameLimitOffset, bool bIgnoreGlobalCheck) { return NativeCall<bool, int, ETameUnitType::Type, int, bool>(this, "AShooterGameMode.IsAtTameUnitLimit", ToTeam, TheTameUnitType, TameLimitOffset, bIgnoreGlobalCheck); }
	bool IsFirstPlayerSpawn(APlayerController* NewPlayer) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.IsFirstPlayerSpawn", NewPlayer); }
	bool IsPlayerAllowedToCheat(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerAllowedToCheat", ForPlayer); }
	bool IsPlayerAllowedToJoinNoCheck(FUniqueNetIdUInt64* PlayerId) { return NativeCall<bool, FUniqueNetIdUInt64*>(this, "AShooterGameMode.IsPlayerAllowedToJoinNoCheck", PlayerId); }
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin", ForPlayer); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController* ForPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck", ForPlayer); }
	bool IsSpawnpointPreferred(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "AShooterGameMode.IsSpawnpointPreferred", SpawnPoint, Player); }
	bool IsTribeAtMax(unsigned int ServerId, unsigned __int64 TribeID) { return NativeCall<bool, unsigned int, unsigned __int64>(this, "AShooterGameMode.IsTribeAtMax", ServerId, TribeID); }
	bool IsTribeWar(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.IsTribeWar", TribeID1, TribeID2); }
	void JoinAlliance(unsigned __int64 AdminTribeId, unsigned __int64 AddTribeId, FString* AddTribeName, unsigned __int64 AllianceId, bool bAuthority) { NativeCall<void, unsigned __int64, unsigned __int64, FString*, unsigned __int64, bool>(this, "AShooterGameMode.JoinAlliance", AdminTribeId, AddTribeId, AddTribeName, AllianceId, bAuthority); }
	void KickAllPlayersAndReload() { NativeCall<void>(this, "AShooterGameMode.KickAllPlayersAndReload"); }
	bool KickPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.KickPlayer", PlayerSteamName, PlayerSteamID); }
	void KickPlayerController(APlayerController* thePC, FString* KickMessage) { NativeCall<void, APlayerController*, FString*>(this, "AShooterGameMode.KickPlayerController", thePC, KickMessage); }
	void Killed(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, UDamageType* DamageType) { NativeCall<void, AController*, AController*, APawn*, UDamageType*>(this, "AShooterGameMode.Killed", Killer, KilledPlayer, KilledPawn, DamageType); }
	void LeaveAlliance(unsigned __int64 AdminTribeId, unsigned __int64 RemoveTribeId, unsigned __int64 AllianceId, bool bAuthority) { NativeCall<void, unsigned __int64, unsigned __int64, unsigned __int64, bool>(this, "AShooterGameMode.LeaveAlliance", AdminTribeId, RemoveTribeId, AllianceId, bAuthority); }
	void ListenServerClampPlayerLocations() { NativeCall<void>(this, "AShooterGameMode.ListenServerClampPlayerLocations"); }
	void LoadBannedList() { NativeCall<void>(this, "AShooterGameMode.LoadBannedList"); }
	void LoadPendingTribesToLoad() { NativeCall<void>(this, "AShooterGameMode.LoadPendingTribesToLoad"); }
	UPrimalPlayerData* LoadPlayerData(FString* UniqueNetId, FString* PlayerName, FString* SavedNetworkAddress, bool IsLocalController, bool bIsLoadingBackup) { return NativeCall<UPrimalPlayerData*, FString*, FString*, FString*, bool, bool>(this, "AShooterGameMode.LoadPlayerData", UniqueNetId, PlayerName, SavedNetworkAddress, IsLocalController, bIsLoadingBackup); }
	UPrimalPlayerData* LoadPlayerData(AShooterPlayerState* PlayerState, bool bIsLoadingBackup) { return NativeCall<UPrimalPlayerData*, AShooterPlayerState*, bool>(this, "AShooterGameMode.LoadPlayerData", PlayerState, bIsLoadingBackup); }
	void LoadPlayerDataIds() { NativeCall<void>(this, "AShooterGameMode.LoadPlayerDataIds"); }
	void LoadPlayerIds_Process(unsigned __int64 InPlayerID, TArray<unsigned char>* ReadBytes) { NativeCall<void, unsigned __int64, TArray<unsigned char>*>(this, "AShooterGameMode.LoadPlayerIds_Process", InPlayerID, ReadBytes); }
	void LoadPlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.LoadPlayersJoinNoCheckList"); }
	bool LoadTribeData(int TribeID, FTribeData* LoadedTribeData, bool bIsLoadingBackup, bool bDontCheckDirtyTribeWar) { return NativeCall<bool, int, FTribeData*, bool, bool>(this, "AShooterGameMode.LoadTribeData", TribeID, LoadedTribeData, bIsLoadingBackup, bDontCheckDirtyTribeWar); }
	void LoadTribeIds() { NativeCall<void>(this, "AShooterGameMode.LoadTribeIds"); }
	void LoadTribeIds_Process(unsigned int theTribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.LoadTribeIds_Process", theTribeID); }
	void LoadTributePlayerDatas(FString UniqueID) { NativeCall<void, FString>(this, "AShooterGameMode.LoadTributePlayerDatas", UniqueID); }
	bool LoadWorld() { return NativeCall<bool>(this, "AShooterGameMode.LoadWorld"); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.Logout", Exiting); }
	void MarkTribeEntitiesAtMaxForServer(unsigned int ServerId, unsigned __int64 TribeID, unsigned int NextResetUTC) { NativeCall<void, unsigned int, unsigned __int64, unsigned int>(this, "AShooterGameMode.MarkTribeEntitiesAtMaxForServer", ServerId, TribeID, NextResetUTC); }
	float ModifyNPCSpawnLimits(FName DinoNameTag, float CurrentLimit) { return NativeCall<float, FName, float>(this, "AShooterGameMode.ModifyNPCSpawnLimits", DinoNameTag, CurrentLimit); }
	void MoveInChractersOutOfBounds() { NativeCall<void>(this, "AShooterGameMode.MoveInChractersOutOfBounds"); }
	void NetUpdateTameUnits(int ToTeam, FTameUnitCounts* NewTameUnits) { NativeCall<void, int, FTameUnitCounts*>(this, "AShooterGameMode.NetUpdateTameUnits", ToTeam, NewTameUnits); }
	void NotifyTribeMembersInSameServerOfTribeChange(unsigned int TribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.NotifyTribeMembersInSameServerOfTribeChange", TribeID); }
	void OnAddPlayerToTribe(FDatabase_PlayerJoinedTribe* pAddPlayer) { NativeCall<void, FDatabase_PlayerJoinedTribe*>(this, "AShooterGameMode.OnAddPlayerToTribe", pAddPlayer); }
	void OnAllianceLoaded(bool bFullTribeAndAllianceLoad, bool bSuccess, unsigned __int64 AllianceId, FDatabase_AllianceWrapper* InResult) { NativeCall<void, bool, bool, unsigned __int64, FDatabase_AllianceWrapper*>(this, "AShooterGameMode.OnAllianceLoaded", bFullTribeAndAllianceLoad, bSuccess, AllianceId, InResult); }
	void OnCompleteTribeLoadedFromCache(unsigned int TribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.OnCompleteTribeLoadedFromCache", TribeID); }
	void OnDeserializedByGame(EOnDesrializationType::Type DeserializationType) { NativeCall<void, EOnDesrializationType::Type>(this, "AShooterGameMode.OnDeserializedByGame", DeserializationType); }
	void OnGridServerChanged(unsigned int ServerId, bool bAlive, FDatabase_ClusterInfo_Server* ServerInfo) { NativeCall<void, unsigned int, bool, FDatabase_ClusterInfo_Server*>(this, "AShooterGameMode.OnGridServerChanged", ServerId, bAlive, ServerInfo); }
	void OnReceivedAllianceNotifcation(FTribeAlliance* Alliance, TArray<FTribeNotification>* Notifications) { NativeCall<void, FTribeAlliance*, TArray<FTribeNotification>*>(this, "AShooterGameMode.OnReceivedAllianceNotifcation", Alliance, Notifications); }
	void OnReceivedTribeNotifcation(FTribeData* TribeData, TArray<FTribeNotification>* Notifications) { NativeCall<void, FTribeData*, TArray<FTribeNotification>*>(this, "AShooterGameMode.OnReceivedTribeNotifcation", TribeData, Notifications); }
	void OnRemovePlayerFromTribe(FDatabase_PlayerRemovedFromTribe* pRemovePlayer) { NativeCall<void, FDatabase_PlayerRemovedFromTribe*>(this, "AShooterGameMode.OnRemovePlayerFromTribe", pRemovePlayer); }
	void OnTribeEntityJoinedServer(AActor* Entity) { NativeCall<void, AActor*>(this, "AShooterGameMode.OnTribeEntityJoinedServer", Entity); }
	void OnTribeEntityJoinedServerHelper(AActor* Entity, FTribeData* CachedTribeData) { NativeCall<void, AActor*, FTribeData*>(this, "AShooterGameMode.OnTribeEntityJoinedServerHelper", Entity, CachedTribeData); }
	void OnTribeEntityLeftServer(AActor* Entity, unsigned int DestinationServerId, ESeamlessVolumeSide::Side DestinationServerVolumeSide) { NativeCall<void, AActor*, unsigned int, ESeamlessVolumeSide::Side>(this, "AShooterGameMode.OnTribeEntityLeftServer", Entity, DestinationServerId, DestinationServerVolumeSide); }
	void OnTribeLoaded(bool bSuccess, unsigned __int64 TribeId, FDatabase_TribeWrapper* InResult) { NativeCall<void, bool, unsigned __int64, FDatabase_TribeWrapper*>(this, "AShooterGameMode.OnTribeLoaded", bSuccess, TribeId, InResult); }
	void OnTribeSettingsChanged(unsigned int TribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.OnTribeSettingsChanged", TribeID); }
	static AShooterGameMode PeriodicMoveOutofBoundsActorsInCheck() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.PeriodicMoveOutofBoundsActorsInCheck"); }
	void PlayEnded() { NativeCall<void>(this, "AShooterGameMode.PlayEnded"); }
	bool PlayerCanRestart(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AShooterGameMode.PlayerCanRestart", Player); }
	void PostAlarmNotification(FUniqueNetId* SteamID, FString* Title, FString* Message) { NativeCall<void, FUniqueNetId*, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotification(FString SteamID, FString* Title, FString* Message) { NativeCall<void, FString, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotificationPlayerID(int PlayerID, FString* Title, FString* Message) { NativeCall<void, int, FString*, FString*>(this, "AShooterGameMode.PostAlarmNotificationPlayerID", PlayerID, Title, Message); }
	void PostAlarmNotificationTribe(int TribeID, FString Title, FString Message) { NativeCall<void, int, FString, FString>(this, "AShooterGameMode.PostAlarmNotificationTribe", TribeID, Title, Message); }
	static AShooterGameMode PostCharacterLocationMetrics() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.PostCharacterLocationMetrics"); }
	void PostLogFailEvent(unsigned __int64 FailedLogLine) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.PostLogFailEvent", FailedLogLine); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.PostLogin", NewPlayer); }
	static AShooterGameMode PostServerMetrics() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.PostServerMetrics"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterGameMode.PreInitializeComponents"); }
	void PreLogin(FString* Options, FString* Address, TSharedPtr<FUniqueNetId, 0> * UniqueId, FString* authToken, FString* ErrorMessage, unsigned int* NewHomeServerId) { NativeCall<void, FString*, FString*, TSharedPtr<FUniqueNetId, 0>*, FString*, FString*, unsigned int*>(this, "AShooterGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage, NewHomeServerId); }
	void PrintToGameplayLog(FString* InString) { NativeCall<void, FString*>(this, "AShooterGameMode.PrintToGameplayLog", InString); }
	void PrintToServerGameLog(FString* InString, bool bSendChatToAllAdmins) { NativeCall<void, FString*, bool>(this, "AShooterGameMode.PrintToServerGameLog", InString, bSendChatToAllAdmins); }
	static AShooterGameMode ProcessActorPlayersAwaitingSeamlessTravelController() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.ProcessActorPlayersAwaitingSeamlessTravelController"); }
	void ProcessChat(bool bFromTribeNotification, FPubSub_TribeNotification_Chat* InChat) { NativeCall<void, bool, FPubSub_TribeNotification_Chat*>(this, "AShooterGameMode.ProcessChat", bFromTribeNotification, InChat); }
	bool ProcessCreateCheckpointEntry(TSharedPtr<FDatabase_LogEntryWrapper, 1> Entry, FDatabase_CreateShapshot* pCreateCheckpoint) { return NativeCall<bool, TSharedPtr<FDatabase_LogEntryWrapper, 1>, FDatabase_CreateShapshot*>(this, "AShooterGameMode.ProcessCreateCheckpointEntry", Entry, pCreateCheckpoint); }
	bool ProcessPlayerJoinedTribe(TSharedPtr<FDatabase_LogEntryWrapper, 1> Entry, FDatabase_PlayerJoinedTribe* pPlayerJoinedTribe) { return NativeCall<bool, TSharedPtr<FDatabase_LogEntryWrapper, 1>, FDatabase_PlayerJoinedTribe*>(this, "AShooterGameMode.ProcessPlayerJoinedTribe", Entry, pPlayerJoinedTribe); }
	bool ProcessPlayerRemovedFromTribe(TSharedPtr<FDatabase_LogEntryWrapper, 1> Entry, FDatabase_PlayerRemovedFromTribe* pPlayerRemovedFromTribe) { return NativeCall<bool, TSharedPtr<FDatabase_LogEntryWrapper, 1>, FDatabase_PlayerRemovedFromTribe*>(this, "AShooterGameMode.ProcessPlayerRemovedFromTribe", Entry, pPlayerRemovedFromTribe); }
	bool ProcessTravelEntry(TSharedPtr<FDatabase_LogEntryWrapper, 1> Entry, FDatabase_TravelEntry* Travel) { return NativeCall<bool, TSharedPtr<FDatabase_LogEntryWrapper, 1>, FDatabase_TravelEntry*>(this, "AShooterGameMode.ProcessTravelEntry", Entry, Travel); }
	void ProcessTribeAndAllianceLoadResults(unsigned __int64 TribeId) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.ProcessTribeAndAllianceLoadResults", TribeId); }
	void PromoteToAdminAlliance(unsigned __int64 AdminTribeId, unsigned __int64 AddTribeId, unsigned __int64 AllianceId, bool bAuthority) { NativeCall<void, unsigned __int64, unsigned __int64, unsigned __int64, bool>(this, "AShooterGameMode.PromoteToAdminAlliance", AdminTribeId, AddTribeId, AllianceId, bAuthority); }
	bool PromoteToTribeAdmin(unsigned int TribeID, unsigned int PlayerDataID, APlayerController* PromoterPC) { return NativeCall<bool, unsigned int, unsigned int, APlayerController*>(this, "AShooterGameMode.PromoteToTribeAdmin", TribeID, PlayerDataID, PromoterPC); }
	void RefreshLandBedsClaimFlagCheck() { NativeCall<void>(this, "AShooterGameMode.RefreshLandBedsClaimFlagCheck"); }
	void RefreshTerrityoryUrls() { NativeCall<void>(this, "AShooterGameMode.RefreshTerrityoryUrls"); }
	void RemoveActorPlayerAwaitingSeamlessTravelController(FString* PlayerUniqueId) { NativeCall<void, FString*>(this, "AShooterGameMode.RemoveActorPlayerAwaitingSeamlessTravelController", PlayerUniqueId); }
	void RemoveClaimFlag(APrimalStructureClaimFlag* Flag) { NativeCall<void, APrimalStructureClaimFlag*>(this, "AShooterGameMode.RemoveClaimFlag", Flag); }
	void RemoveInactivePlayersAndTribes() { NativeCall<void>(this, "AShooterGameMode.RemoveInactivePlayersAndTribes"); }
	void RemovePlayerData(AShooterPlayerState* PlayerState, bool bDeleteStored, bool bDontClearTribe) { NativeCall<void, AShooterPlayerState*, bool, bool>(this, "AShooterGameMode.RemovePlayerData", PlayerState, bDeleteStored, bDontClearTribe); }
	void RemovePlayerStructuresFromTribe(FString* PlayerName, bool bChangeDinos, bool bChangeStructures, unsigned int NewPlayerId) { NativeCall<void, FString*, bool, bool, unsigned int>(this, "AShooterGameMode.RemovePlayerStructuresFromTribe", PlayerName, bChangeDinos, bChangeStructures, NewPlayerId); }
	void RemoveTameUnits(int ToTeam, int RemoveUnits, ETameUnitType::Type TheTameUnitType, bool bIgnoreNetworking) { NativeCall<void, int, int, ETameUnitType::Type, bool>(this, "AShooterGameMode.RemoveTameUnits", ToTeam, RemoveUnits, TheTameUnitType, bIgnoreNetworking); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.RemoveTribe", TribeID); }
	bool RemoveTribeEntity(unsigned int TribeID, FTribeEntity* TribeEntity) { return NativeCall<bool, unsigned int, FTribeEntity*>(this, "AShooterGameMode.RemoveTribeEntity", TribeID, TribeEntity); }
	bool RemoveTribeEntity(AActor* Entity) { return NativeCall<bool, AActor*>(this, "AShooterGameMode.RemoveTribeEntity", Entity); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameMode.RequestFinishAndExitToMainMenu"); }
	void ResetTribeEntitiesAtMaxForServer(unsigned int ServerId, unsigned int NextResetUTC) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterGameMode.ResetTribeEntitiesAtMaxForServer", ServerId, NextResetUTC); }
	void ResetTribeEntityToAnotherServer(unsigned int TribeID, unsigned int EntityID, TArray<FTribeEntity>* TribeEntities, unsigned int DestinationServerId, ESeamlessVolumeSide::Side DestinationServerVolumeSide) { NativeCall<void, unsigned int, unsigned int, TArray<FTribeEntity>*, unsigned int, ESeamlessVolumeSide::Side>(this, "AShooterGameMode.ResetTribeEntityToAnotherServer", TribeID, EntityID, TribeEntities, DestinationServerId, DestinationServerVolumeSide); }
	void ResetTribeTravelCounts() { NativeCall<void>(this, "AShooterGameMode.ResetTribeTravelCounts"); }
	void RestartServer() { NativeCall<void>(this, "AShooterGameMode.RestartServer"); }
	void SaveBannedList() { NativeCall<void>(this, "AShooterGameMode.SaveBannedList"); }
	void SavePlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.SavePlayersJoinNoCheckList"); }
	void SaveWorld(ESaveWorldType::Type SaveType, bool bDoPartialSave) { NativeCall<void, ESaveWorldType::Type, bool>(this, "AShooterGameMode.SaveWorld", SaveType, bDoPartialSave); }
	void SendAllianceChat(unsigned __int64 AllianceID, FPubSub_TribeNotification_Chat* Chat) { NativeCall<void, unsigned __int64, FPubSub_TribeNotification_Chat*>(this, "AShooterGameMode.SendAllianceChat", AllianceID, Chat); }
	void SendDatadogMetricEvent(FString* Title, FString* Message) { NativeCall<void, FString*, FString*>(this, "AShooterGameMode.SendDatadogMetricEvent", Title, Message); }
	void SendServerChatMessage(FString* MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, bool bSendToAllServers) { NativeCall<void, FString*, FLinearColor, bool, int, int, bool>(this, "AShooterGameMode.SendServerChatMessage", MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, bSendToAllServers); }
	void SendServerDirectMessage(FString* PlayerSteamID, FString* MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, FString* PlayerName) { NativeCall<void, FString*, FString*, FLinearColor, bool, int, int, FString*>(this, "AShooterGameMode.SendServerDirectMessage", PlayerSteamID, MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, PlayerName); }
	void SendServerNotification(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard, bool bSaveToTribeLog, bool bSendToAllServers) { NativeCall<void, FString*, FLinearColor, float, float, UTexture2D*, USoundBase*, int, int, bool, bool, bool>(this, "AShooterGameMode.SendServerNotification", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard, bSaveToTribeLog, bSendToAllServers); }
	bool SendServerNotificationInternal(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard, bool bSaveToTribeLog) { return NativeCall<bool, FString*, FLinearColor, float, float, UTexture2D*, USoundBase*, int, int, bool, bool>(this, "AShooterGameMode.SendServerNotificationInternal", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard, bSaveToTribeLog); }
	void SendServerNotificationTypeParam(int MessageType, int ReceiverTeamId, int ReceiverPlayerID, bool bSendToAllServers, int MessageType1, int MessageParam2, UObject* ObjectParam1, FString* StringParam1) { NativeCall<void, int, int, int, bool, int, int, UObject*, FString*>(this, "AShooterGameMode.SendServerNotificationTypeParam", MessageType, ReceiverTeamId, ReceiverPlayerID, bSendToAllServers, MessageType1, MessageParam2, ObjectParam1, StringParam1); }
	void SendTribeChat(unsigned int TribeID, FPubSub_TribeNotification_Chat* Chat) { NativeCall<void, unsigned int, FPubSub_TribeNotification_Chat*>(this, "AShooterGameMode.SendTribeChat", TribeID, Chat); }
	void SetClaimFlagBytesForTribe(int PaintingId, TArray<unsigned char>* CompressedBytes) { NativeCall<void, int, TArray<unsigned char>*>(this, "AShooterGameMode.SetClaimFlagBytesForTribe", PaintingId, CompressedBytes); }
	void SetMessageOfTheDay(FString* Message) { NativeCall<void, FString*>(this, "AShooterGameMode.SetMessageOfTheDay", Message); }
	void SetTimeOfDay(FString* timeString) { NativeCall<void, FString*>(this, "AShooterGameMode.SetTimeOfDay", timeString); }
	void SetTribeClaimFlagPainting(unsigned int TribeId, int PaintingUniqueId, int PaintingRevision, TArray<short>* StructureColors) { NativeCall<void, unsigned int, int, int, TArray<short>*>(this, "AShooterGameMode.SetTribeClaimFlagPainting", TribeId, PaintingUniqueId, PaintingRevision, StructureColors); }
	static AShooterGameMode SharedLogBackgroundCleanup() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.SharedLogBackgroundCleanup"); }
	static AShooterGameMode SharedLogCreateSnapshot() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.SharedLogCreateSnapshot"); }
	//void SharedLogFetchPending(TFunction<void __cdecl(void)> TFunction<void __cdecl) { NativeCall<void, TFunction<void __cdecl(void)>>(this, "AShooterGameMode.SharedLogFetchPending", TFunction<void __cdecl); }
	void SharedLogRollback(unsigned __int64 RollbackTarget) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.SharedLogRollback", RollbackTarget); }
	void SharedLogTravelNotification(unsigned __int64 LogLine, TSharedPtr<TArray<unsigned char>, 0> TravelData) { NativeCall<void, unsigned __int64, TSharedPtr<TArray<unsigned char>, 0>>(this, "AShooterGameMode.SharedLogTravelNotification", LogLine, TravelData); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "AShooterGameMode.ShowMessageOfTheDay"); }
	void SingleplayerSetupValues() { NativeCall<void>(this, "AShooterGameMode.SingleplayerSetupValues"); }
	APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AShooterGameMode.SpawnDefaultPawnFor", NewPlayer, StartSpot); }
	void SpawnedPawnFor(AController* PC, APawn* SpawnedPawn) { NativeCall<void, AController*, APawn*>(this, "AShooterGameMode.SpawnedPawnFor", PC, SpawnedPawn); }
	void StartAddPlayerToTribe(unsigned int PlayerId, unsigned __int64 FromTribeId, unsigned __int64 ToTribeId, bool bMergeTribes, FString* PlayerRequesting) { NativeCall<void, unsigned int, unsigned __int64, unsigned __int64, bool, FString*>(this, "AShooterGameMode.StartAddPlayerToTribe", PlayerId, FromTribeId, ToTribeId, bMergeTribes, PlayerRequesting); }
	void StartLoadingPlayerEntities(unsigned int PlayerDataID, unsigned int IgnoreBedId) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterGameMode.StartLoadingPlayerEntities", PlayerDataID, IgnoreBedId); }
	void StartLoadingTribeData(unsigned int TribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.StartLoadingTribeData", TribeID); }
	void StartLoadingTribeIDForPlayerDataID(unsigned int PlayerDataID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.StartLoadingTribeIDForPlayerDataID", PlayerDataID); }
	void StartNewPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AShooterGameMode.StartNewPlayer", NewPlayer); }
	void StartNewShooterPlayer(APlayerController* NewPlayer, bool bForceCreateNewPlayerData, bool bIsFromLogin, FPrimalPlayerCharacterConfigStruct* charConfig, UPrimalPlayerData* ArkPlayerData) { NativeCall<void, APlayerController*, bool, bool, FPrimalPlayerCharacterConfigStruct*, UPrimalPlayerData*>(this, "AShooterGameMode.StartNewShooterPlayer", NewPlayer, bForceCreateNewPlayerData, bIsFromLogin, charConfig, ArkPlayerData); }
	void StartRemovePlayerFromTribe(unsigned int PlayerId, unsigned __int64 TribeId, FString* PlayerRequesting) { NativeCall<void, unsigned int, unsigned __int64, FString*>(this, "AShooterGameMode.StartRemovePlayerFromTribe", PlayerId, TribeId, PlayerRequesting); }
	bool StartSaveBackup() { return NativeCall<bool>(this, "AShooterGameMode.StartSaveBackup"); }
	void StartSavingTribeData(unsigned int TribeID, bool bIncludeClaimData) { NativeCall<void, unsigned int, bool>(this, "AShooterGameMode.StartSavingTribeData", TribeID, bIncludeClaimData); }
	void StartSavingTribeEntity(unsigned int TribeID, FTribeEntity* TribeEntity) { NativeCall<void, unsigned int, FTribeEntity*>(this, "AShooterGameMode.StartSavingTribeEntity", TribeID, TribeEntity); }
	void StartSavingTribeMember(unsigned int PlayerDataID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.StartSavingTribeMember", PlayerDataID); }
	void StartSubscribingToAllianceTopic(unsigned __int64 AllianceID) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.StartSubscribingToAllianceTopic", AllianceID); }
	void StartSubscribingToTribeTopic(unsigned int TribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.StartSubscribingToTribeTopic", TribeID); }
	void StressTestTravelStartLoop(float IntervalSec) { NativeCall<void, float>(this, "AShooterGameMode.StressTestTravelStartLoop", IntervalSec); }
	static AShooterGameMode StressTestTravelTimer() { return NativeCall<AShooterGameMode>(nullptr, "AShooterGameMode.StressTestTravelTimer"); }
	void SyncToUTCTime() { NativeCall<void>(this, "AShooterGameMode.SyncToUTCTime"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.Tick", DeltaSeconds); }
	//void TickOverSubscription() { NativeCall<void>(this, "AShooterGameMode.TickOverSubscription"); }
	void TickPendingSharedLog() { NativeCall<void>(this, "AShooterGameMode.TickPendingSharedLog"); }
	void TickPendingTribeFlagNotifs() { NativeCall<void>(this, "AShooterGameMode.TickPendingTribeFlagNotifs"); }
	void TickSaveBackup() { NativeCall<void>(this, "AShooterGameMode.TickSaveBackup"); }
	void TickSeamlessSocket() { NativeCall<void>(this, "AShooterGameMode.TickSeamlessSocket"); }
	void TickTribeCloudNotifications() { NativeCall<void>(this, "AShooterGameMode.TickTribeCloudNotifications"); }
	void TransferTribalObjects(unsigned int FromTeam, unsigned int ToTeam, bool bDontIncludePlayers) { NativeCall<void, unsigned int, unsigned int, bool>(this, "AShooterGameMode.TransferTribalObjects", FromTeam, ToTeam, bDontIncludePlayers); }
	bool TransferTribeOwnershipTo(unsigned int TribeID, unsigned int PlayerDataID) { return NativeCall<bool, unsigned int, unsigned int>(this, "AShooterGameMode.TransferTribeOwnershipTo", TribeID, PlayerDataID); }
	static bool TriggerLevelCustomEvents(UWorld* InWorld, FString* EventName) { return NativeCall<bool, UWorld*, FString*>(nullptr, "AShooterGameMode.TriggerLevelCustomEvents", InWorld, EventName); }
	void TryUpdateTribesEntitiesServerAndLocation() { NativeCall<void>(this, "AShooterGameMode.TryUpdateTribesEntitiesServerAndLocation"); }
	bool UnbanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.UnbanPlayer", PlayerSteamName, PlayerSteamID); }
	void UnloadAllianceData(unsigned __int64 AllianceID) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.UnloadAllianceData", AllianceID); }
	void UnloadTribeData(unsigned int TribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.UnloadTribeData", TribeID); }
	void UnloadTribeDataIfNoLongerNeeded(unsigned int TribeID, AController* Exiting) { NativeCall<void, unsigned int, AController*>(this, "AShooterGameMode.UnloadTribeDataIfNoLongerNeeded", TribeID, Exiting); }
	void UpdateAlliancesTribes(FTribeAlliance* Alliance) { NativeCall<void, FTribeAlliance*>(this, "AShooterGameMode.UpdateAlliancesTribes", Alliance); }
	void UpdateClaimFlagPaintingsForTribe(unsigned int TribeId, int PaintingUniqueId, int PaintingRevision, TArray<short>* StructureColors) { NativeCall<void, unsigned int, int, int, TArray<short>*>(this, "AShooterGameMode.UpdateClaimFlagPaintingsForTribe", TribeId, PaintingUniqueId, PaintingRevision, StructureColors); }
	void UpdateGridCellServer() { NativeCall<void>(this, "AShooterGameMode.UpdateGridCellServer"); }
	void UpdateSaveBackupFiles() { NativeCall<void>(this, "AShooterGameMode.UpdateSaveBackupFiles"); }
	void UpdateTerritoryUrlsInPlayerState() { NativeCall<void>(this, "AShooterGameMode.UpdateTerritoryUrlsInPlayerState"); }
	void UpdateTribeData(FTribeData* NewTribeData) { NativeCall<void, FTribeData*>(this, "AShooterGameMode.UpdateTribeData", NewTribeData); }
	bool UpdateTribeEntity(AActor* Entity) { return NativeCall<bool, AActor*>(this, "AShooterGameMode.UpdateTribeEntity", Entity); }
	bool UpdateTribeMemberPresence(unsigned int TribeID, AShooterPlayerState* PlayerState) { return NativeCall<bool, unsigned int, AShooterPlayerState*>(this, "AShooterGameMode.UpdateTribeMemberPresence", TribeID, PlayerState); }
	void UpdateTribeNameInAlliances(FTribeData* TribeData) { NativeCall<void, FTribeData*>(this, "AShooterGameMode.UpdateTribeNameInAlliances", TribeData); }
	void UpdateTribeWars() { NativeCall<void>(this, "AShooterGameMode.UpdateTribeWars"); }
	FPrimalPlayerCharacterConfigStruct* ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct* result, FPrimalPlayerCharacterConfigStruct* charConfig, AShooterPlayerController* ForPC) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*, AShooterPlayerController*>(this, "AShooterGameMode.ValidateCharacterConfig", result, charConfig, ForPC); }
	FString* ValidateTribeName(FString* result, FString theTribeName) { return NativeCall<FString*, FString*, FString>(this, "AShooterGameMode.ValidateTribeName", result, theTribeName); }
	void BPPreSpawnedDino(APrimalDinoCharacter* theDino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterGameMode.BPPreSpawnedDino", theDino); }
	bool CheckJoinInProgress(bool bIsFromLogin, APlayerController* NewPlayer) { return NativeCall<bool, bool, APlayerController*>(this, "AShooterGameMode.CheckJoinInProgress", bIsFromLogin, NewPlayer); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "AShooterGameMode.GetPrivateStaticClass", Package); }
	bool HandleNewPlayer(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData, AShooterCharacter* PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterGameMode.HandleNewPlayer", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	void OnLogout(AController* Exiting) { NativeCall<void, AController*>(this, "AShooterGameMode.OnLogout", Exiting); }
	static void StaticRegisterNativesAShooterGameMode() { NativeCall<void>(nullptr, "AShooterGameMode.StaticRegisterNativesAShooterGameMode"); }
	//bool TickOverSubscription() { return NativeCall<bool>(this, "AShooterGameMode.TickOverSubscription"); }
};

struct UPrimalGameData : UObject
{
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModName"); }
	FString& ModDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModDescription"); }
	FieldArray<FPrimalCharacterStatusValueDefinition, 16> StatusValueDefinitionsField() { return { this, "UPrimalGameData.StatusValueDefinitions" }; }
	FieldArray<FPrimalCharacterStatusStateDefinition, 38> StatusStateDefinitionsField() { return { this, "UPrimalGameData.StatusStateDefinitions" }; }
	FieldArray<FPrimalItemStatDefinition, 8> ItemStatDefinitionsField() { return { this, "UPrimalGameData.ItemStatDefinitions" }; }
	FieldArray<FPrimalItemDefinition, 9> ItemTypeDefinitionsField() { return { this, "UPrimalGameData.ItemTypeDefinitions" }; }
	FieldArray<FPrimalEquipmentDefinition, 9> EquipmentTypeDefinitionsField() { return { this, "UPrimalGameData.EquipmentTypeDefinitions" }; }
	FieldArray<FDisciplineDefinition, 16> EngramDisciplineDefinitionsField() { return { this, "UPrimalGameData.EngramDisciplineDefinitions" }; }
	FieldArray<FShipTypeDisplayInformation, 7> ShipTypeDisplayInformationsField() { return { this, "UPrimalGameData.ShipTypeDisplayInformations" }; }
	TArray<TEnumAsByte<enum EEngramDiscipline::Type>>& DefaultUnlockedDisciplinesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EEngramDiscipline::Type>>*>(this, "UPrimalGameData.DefaultUnlockedDisciplines"); }
	TArray<TSubclassOf<UPrimalItem>>& MasterItemListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.MasterItemList"); }
	TArray<FPrimalItemQuality>& ItemQualityDefinitionsField() { return *GetNativePointerField<TArray<FPrimalItemQuality>*>(this, "UPrimalGameData.ItemQualityDefinitions"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& EngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.EngramBlueprintClasses"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& HiddenEngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.HiddenEngramBlueprintClasses"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& AdditionalEngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.AdditionalEngramBlueprintClasses"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& RemoveEngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.RemoveEngramBlueprintClasses"); }
	TArray<FStatusValueModifierDescription>& StatusValueModifierDescriptionsField() { return *GetNativePointerField<TArray<FStatusValueModifierDescription>*>(this, "UPrimalGameData.StatusValueModifierDescriptions"); }
	TArray<FString>& PlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.PlayerSpawnRegions"); }
	USoundBase* TutorialDisplaySoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.TutorialDisplaySound"); }
	USoundBase* Sound_StartItemDragField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_StartItemDrag"); }
	USoundBase* Sound_StopItemDragField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_StopItemDrag"); }
	USoundBase* Sound_CancelPlacingStructureField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_CancelPlacingStructure"); }
	USoundBase* Sound_ChooseStructureRotationField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ChooseStructureRotation"); }
	USoundBase* Sound_FailPlacingStructureField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_FailPlacingStructure"); }
	USoundBase* Sound_ConfirmPlacingStructureField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ConfirmPlacingStructure"); }
	USoundBase* Sound_StartPlacingStructureField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_StartPlacingStructure"); }
	USoundBase* Sound_CorpseDecomposeField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_CorpseDecompose"); }
	USoundBase* Sound_ApplyLevelUpField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ApplyLevelUp"); }
	USoundBase* Sound_ApplyLevelPointField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ApplyLevelPoint"); }
	USoundBase* Sound_LearnedEngramField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_LearnedEngram"); }
	USoundBase* Sound_ReconnectToCharacterField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ReconnectToCharacter"); }
	USoundBase* Sound_CreateNewCharacterField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_CreateNewCharacter"); }
	USoundBase* Sound_RespawnField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_Respawn"); }
	USoundBase* Sound_DropAllItemsField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_DropAllItems"); }
	USoundBase* Sound_TransferAllItemsToRemoteField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_TransferAllItemsToRemote"); }
	USoundBase* Sound_TransferAllItemsFromRemoteField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_TransferAllItemsFromRemote"); }
	USoundBase* Sound_TransferItemToRemoteField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_TransferItemToRemote"); }
	USoundBase* Sound_TransferItemFromRemoteField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_TransferItemFromRemote"); }
	USoundBase* Sound_AddItemToSlotField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_AddItemToSlot"); }
	USoundBase* Sound_RemoveItemFromSlotField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_RemoveItemFromSlot"); }
	USoundBase* Sound_ClearCraftQueueField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ClearCraftQueue"); }
	USoundBase* Sound_AddToCraftQueueField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_AddToCraftQueue"); }
	USoundBase* Sound_SetRadioFrequencyField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_SetRadioFrequency"); }
	USoundBase* Sound_AddPinToMapField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_AddPinToMap"); }
	USoundBase* Sound_RemovePinFromMapField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_RemovePinFromMap"); }
	USoundBase* Sound_ApplyDyeField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ApplyDye"); }
	USoundBase* Sound_ApplyPaintField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ApplyPaint"); }
	USoundBase* Sound_SetTextGenericField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_SetTextGeneric"); }
	USoundBase* Sound_SplitItemStackField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_SplitItemStack"); }
	USoundBase* Sound_MergeItemStackField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_MergeItemStack"); }
	USoundBase* Sound_InputPinDigitField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_InputPinDigit"); }
	USoundBase* Sound_PinValidatedField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_PinValidated"); }
	USoundBase* Sound_PinRejectedField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_PinRejected"); }
	USoundBase* Sound_TribeWarBeginField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_TribeWarBegin"); }
	USoundBase* Sound_TribeWarEndField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_TribeWarEnd"); }
	USoundBase* Sound_DropInventoryItemField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_DropInventoryItem"); }
	USoundBase* Sound_RefillWaterContainerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_RefillWaterContainer"); }
	TArray<FAppIDItem>& CoreAppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem>*>(this, "UPrimalGameData.CoreAppIDItems"); }
	TArray<FAppIDItem>& AppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem>*>(this, "UPrimalGameData.AppIDItems"); }
	TArray<UPrimalEngramEntry*> EngramBlueprintEntriesField() { return *GetNativePointerField<TArray<UPrimalEngramEntry*>*>(this, "UPrimalGameData.EngramBlueprintEntries"); }
	TArray<UGenericDataListEntry*> ExplorerNoteEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.ExplorerNoteEntriesObjects"); }
	TArray<UGenericDataListEntry*> HeadHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.HeadHairStylesEntriesObjects"); }
	TArray<UGenericDataListEntry*> FacialHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.FacialHairStylesEntriesObjects"); }
	TSubclassOf<UToolTipWidget>& DefaultToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultToolTipWidget"); }
	TSubclassOf<UPrimalItem>& StarterNoteItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.StarterNoteItem"); }
	TArray<TSubclassOf<UPrimalItem>>& PrimaryResourcesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.PrimaryResources"); }
	TSubclassOf<ADroppedItem>& GenericDroppedItemTemplateField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalGameData.GenericDroppedItemTemplate"); }
	UMaterialInterface* PostProcess_KnockoutBlurField() { return *GetNativePointerField<UMaterialInterface * *>(this, "UPrimalGameData.PostProcess_KnockoutBlur"); }
	TArray<UMaterialInterface*> BuffPostProcessEffectsField() { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "UPrimalGameData.BuffPostProcessEffects"); }
	TArray<UMaterialInterface*> AdditionalBuffPostProcessEffectsField() { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "UPrimalGameData.AdditionalBuffPostProcessEffects"); }
	TSubclassOf<ADroppedItemLowQuality>& GenericDroppedItemTemplateLowQualityField() { return *GetNativePointerField<TSubclassOf<ADroppedItemLowQuality>*>(this, "UPrimalGameData.GenericDroppedItemTemplateLowQuality"); }
	FieldArray<FName, 5> PlayerMeshEquipmentShrinkageMaskParamNamesField() { return { this, "UPrimalGameData.PlayerMeshEquipmentShrinkageMaskParamNames" }; }
	UTexture2D* PlayerMeshEquipmentDefaultClothingShrinkageMaskField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.PlayerMeshEquipmentDefaultClothingShrinkageMask"); }
	TArray<FTutorialDefinition>& TutorialDefinitionsField() { return *GetNativePointerField<TArray<FTutorialDefinition>*>(this, "UPrimalGameData.TutorialDefinitions"); }
	UTexture2D* UnknownIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.UnknownIcon"); }
	UMaterialInterface* UnknownMaterialField() { return *GetNativePointerField<UMaterialInterface * *>(this, "UPrimalGameData.UnknownMaterial"); }
	UTexture2D* WhiteTextureField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.WhiteTexture"); }
	UTexture2D* BlueprintBackgroundField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.BlueprintBackground"); }
	UTexture2D* BabyCuddleIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.BabyCuddleIcon"); }
	UTexture2D* ImprintedRiderIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.ImprintedRiderIcon"); }
	UTexture2D* WeaponAccessoryActivatedIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.WeaponAccessoryActivatedIcon"); }
	UTexture2D* EngramBackgroundField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.EngramBackground"); }
	UTexture2D* VoiceChatIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.VoiceChatIcon"); }
	UTexture2D* VoiceChatYellingIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.VoiceChatYellingIcon"); }
	UTexture2D* ItemButtonRecentlySelectedBackgroundField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.ItemButtonRecentlySelectedBackground"); }
	float& GlobalGeneralArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorRatingMultiplier"); }
	float& GlobalGeneralArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorRatingMultiplier"); }
	float& EnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyFoundationPreventionRadius"); }
	TArray<FColorDefinition>& ColorDefinitionsField() { return *GetNativePointerField<TArray<FColorDefinition>*>(this, "UPrimalGameData.ColorDefinitions"); }
	TArray<UObject*> ExtraResourcesField() { return *GetNativePointerField<TArray<UObject*>*>(this, "UPrimalGameData.ExtraResources"); }
	TArray<UObject*> BaseExtraResourcesField() { return *GetNativePointerField<TArray<UObject*>*>(this, "UPrimalGameData.BaseExtraResources"); }
	TSubclassOf<UObject>& BaseExtraResourcesContainerField() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "UPrimalGameData.BaseExtraResourcesContainer"); }
	USoundBase* NavalCombatMusicDayField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.NavalCombatMusicDay"); }
	USoundBase* NavalCombatMusicNightField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.NavalCombatMusicNight"); }
	USoundBase* CombatMusicDayField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.CombatMusicDay"); }
	USoundBase* CombatMusicNightField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.CombatMusicNight"); }
	USoundBase* CombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.CombatMusicDay_Heavy"); }
	USoundBase* CombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.CombatMusicNight_Heavy"); }
	USoundBase* LevelUpStingerSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.LevelUpStingerSound"); }
	FieldArray<FPlayerCharacterGenderDefinition, 2> PlayerCharacterGenderDefinitionsField() { return { this, "UPrimalGameData.PlayerCharacterGenderDefinitions" }; }
	TSubclassOf<AGameMode>& DefaultGameModeField() { return *GetNativePointerField<TSubclassOf<AGameMode>*>(this, "UPrimalGameData.DefaultGameMode"); }
	FieldArray<FLevelExperienceRamp, 4> LevelExperienceRampsField() { return { this, "UPrimalGameData.LevelExperienceRamps" }; }
	FieldArray<FLevelExperienceRamp, 4> SinglePlayerLevelExperienceRampsField() { return { this, "UPrimalGameData.SinglePlayerLevelExperienceRamps" }; }
	TArray<FNamedTeamDefinition>& NamedTeamDefinitionsField() { return *GetNativePointerField<TArray<FNamedTeamDefinition>*>(this, "UPrimalGameData.NamedTeamDefinitions"); }
	TArray<int>& PlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int>*>(this, "UPrimalGameData.PlayerLevelEngramPoints"); }
	TArray<int>& PlayerLevelEngramPointsSPField() { return *GetNativePointerField<TArray<int>*>(this, "UPrimalGameData.PlayerLevelEngramPointsSP"); }
	TArray<FString>& PreventBuildStructureReasonStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.PreventBuildStructureReasonStrings"); }
	TArray<FExplorerNoteAchievement>& ExplorerNoteAchievementsField() { return *GetNativePointerField<TArray<FExplorerNoteAchievement>*>(this, "UPrimalGameData.ExplorerNoteAchievements"); }
	TArray<FClassRemapping>& Remap_NPCField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_NPC"); }
	TArray<FClassRemapping>& Remap_SupplyCratesField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_SupplyCrates"); }
	TArray<FClassRemapping>& Remap_ResourceComponentsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_ResourceComponents"); }
	TArray<FClassRemapping>& Remap_NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_NPCSpawnEntries"); }
	TArray<FClassRemapping>& Remap_EngramsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_Engrams"); }
	TArray<FClassRemapping>& Remap_ItemsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_Items"); }
	TArray<FClassAddition>& AdditionalStructureEngramsField() { return *GetNativePointerField<TArray<FClassAddition>*>(this, "UPrimalGameData.AdditionalStructureEngrams"); }
	TArray<FBuffAddition>& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition>*>(this, "UPrimalGameData.AdditionalDefaultBuffs"); }
	TSubclassOf<AActor>& ActorToSpawnUponEnemyCoreStructureDeathField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.ActorToSpawnUponEnemyCoreStructureDeath"); }
	TArray<TSubclassOf<APrimalStructure>>& AdditionalStructuresToPlaceField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>>*>(this, "UPrimalGameData.AdditionalStructuresToPlace"); }
	TArray<TSubclassOf<UPrimalItem_Dye>>& MasterDyeListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem_Dye>>*>(this, "UPrimalGameData.MasterDyeList"); }
	TArray<FColor>& MasterColorTableField() { return *GetNativePointerField<TArray<FColor>*>(this, "UPrimalGameData.MasterColorTable"); }
	float& EnemyCoreStructureDeathActorRadiusBuildCheckField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyCoreStructureDeathActorRadiusBuildCheck"); }
	TSubclassOf<APrimalStructureItemContainer>& DeathDestructionDepositInventoryClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "UPrimalGameData.DeathDestructionDepositInventoryClass"); }
	TSubclassOf<ADestroyedMeshActor>& GenericSimpleFadingDestructionMeshClassField() { return *GetNativePointerField<TSubclassOf<ADestroyedMeshActor>*>(this, "UPrimalGameData.GenericSimpleFadingDestructionMeshClass"); }
	UTexture2D* MateBoostIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.MateBoostIcon"); }
	UTexture2D* EggBoostIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.EggBoostIcon"); }
	UTexture2D* MatingIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.MatingIcon"); }
	UTexture2D* MatingWrongTemperatureIconLowField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.MatingWrongTemperatureIconLow"); }
	UTexture2D* MatingWrongTemperatureIconHighField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.MatingWrongTemperatureIconHigh"); }
	UTexture2D* NearFeedIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.NearFeedIcon"); }
	UTexture2D* BuffedIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.BuffedIcon"); }
	UTexture2D* GamepadFaceButtonTopField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.GamepadFaceButtonTop"); }
	UTexture2D* GamepadFaceButtonBottomField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.GamepadFaceButtonBottom"); }
	UTexture2D* GamepadFaceButtonLeftField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.GamepadFaceButtonLeft"); }
	UTexture2D* GamepadFaceButtonRightField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.GamepadFaceButtonRight"); }
	TSubclassOf<UUI_XBoxFooter>& FooterTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_XBoxFooter>*>(this, "UPrimalGameData.FooterTemplate"); }
	float& TribeXPSharePercentField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.TribeXPSharePercent"); }
	int& OverrideServerPhysXSubstepsField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.OverrideServerPhysXSubsteps"); }
	float& OverrideServerPhysXSubstepsDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideServerPhysXSubstepsDeltaTime"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bInitialized"); }
	FieldArray<USoundBase*, 3> Sound_TamedDinosField() { return { this, "UPrimalGameData.Sound_TamedDinos" }; }
	USoundBase* Sound_ItemStartCraftingField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ItemStartCrafting"); }
	USoundBase* Sound_ItemFinishCraftingField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ItemFinishCrafting"); }
	USoundBase* Sound_ItemStartRepairingField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ItemStartRepairing"); }
	USoundBase* Sound_ItemFinishRepairingField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ItemFinishRepairing"); }
	TSubclassOf<UUI_Notification>& NotifClassField() { return *GetNativePointerField<TSubclassOf<UUI_Notification>*>(this, "UPrimalGameData.NotifClass"); }
	TSubclassOf<UPrimalStructureToolTipWidget>& StructureDefaultOverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureToolTipWidget>*>(this, "UPrimalGameData.StructureDefaultOverlayToolTipWidget"); }
	float& MinPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinPaintDurationConsumption"); }
	float& MaxPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxPaintDurationConsumption"); }
	float& MinDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinDinoRadiusForPaintConsumption"); }
	float& MaxDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxDinoRadiusForPaintConsumption"); }
	TArray<FDinoBabySetup>& DinoBabySetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup>*>(this, "UPrimalGameData.DinoBabySetups"); }
	TArray<FDinoBabySetup>& DinoGestationSetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup>*>(this, "UPrimalGameData.DinoGestationSetups"); }
	TSubclassOf<UPrimalItem>& SoapItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.SoapItemTemplate"); }
	UTexture2D* NameTagWildcardAdminField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.NameTagWildcardAdmin"); }
	UTexture2D* NameTagServerAdminField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.NameTagServerAdmin"); }
	UTexture2D* NameTagTribeAdminField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.NameTagTribeAdmin"); }
	UTexture2D* TreasureIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.TreasureIcon"); }
	TArray<UTexture2D*> BadgeGroupsNameTagField() { return *GetNativePointerField<TArray<UTexture2D*>*>(this, "UPrimalGameData.BadgeGroupsNameTag"); }
	TArray<FString>& AchievementIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.AchievementIDs"); }
	TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>& AchievementIDSetField() { return *GetNativePointerField<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>*>(this, "UPrimalGameData.AchievementIDSet"); }
	TArray<float>& AdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalGameData.AdditionalEggWeightsToSpawn"); }
	TArray<TSubclassOf<UPrimalItem>>& AdditionalEggItemsToSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.AdditionalEggItemsToSpawn"); }
	TArray<float>& FertilizedAdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalGameData.FertilizedAdditionalEggWeightsToSpawn"); }
	TArray<TSubclassOf<UPrimalItem>>& FertilizedAdditionalEggItemsToSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.FertilizedAdditionalEggItemsToSpawn"); }
	FString& ItemAchievementsNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ItemAchievementsName"); }
	TArray<TSubclassOf<UPrimalItem>>& ItemAchievementsListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.ItemAchievementsList"); }
	TArray<TSubclassOf<UPrimalItem>>& GlobalCuddleFoodListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>>*>(this, "UPrimalGameData.GlobalCuddleFoodList"); }
	TArray<FMultiAchievement>& MultiAchievementsField() { return *GetNativePointerField<TArray<FMultiAchievement>*>(this, "UPrimalGameData.MultiAchievements"); }
	USoundBase* DinoIncrementedImprintingSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.DinoIncrementedImprintingSound"); }
	USoundBase* HitMarkerCharacterSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.HitMarkerCharacterSound"); }
	USoundBase* HitMarkerCharacterMeleeSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.HitMarkerCharacterMeleeSound"); }
	USoundBase* HitMarkerStructureSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.HitMarkerStructureSound"); }
	USoundBase* HitMarkerStructureMeleeSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.HitMarkerStructureMeleeSound"); }
	TArray<FNPCSpawnEntriesContainerAdditions>& TheNPCSpawnEntriesContainerAdditionsField() { return *GetNativePointerField<TArray<FNPCSpawnEntriesContainerAdditions>*>(this, "UPrimalGameData.TheNPCSpawnEntriesContainerAdditions"); }
	UMaterialInterface* PostProcess_ColorLUTField() { return *GetNativePointerField<UMaterialInterface * *>(this, "UPrimalGameData.PostProcess_ColorLUT"); }
	TSubclassOf<UPrimalStructureSettings>& DefaultStructureSettingsField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "UPrimalGameData.DefaultStructureSettings"); }
	USoundBase* Sound_DossierUnlockedField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_DossierUnlocked"); }
	USoundBase* Sound_ItemUseOnItemField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ItemUseOnItem"); }
	USoundBase* Sound_RemoveItemSkinField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_RemoveItemSkin"); }
	USoundBase* Sound_RemoveClipAmmoField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_RemoveClipAmmo"); }
	TArray<FExplorerNoteEntry>& ExplorerNoteEntriesField() { return *GetNativePointerField<TArray<FExplorerNoteEntry>*>(this, "UPrimalGameData.ExplorerNoteEntries"); }
	float& ExplorerNoteXPGainField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.ExplorerNoteXPGain"); }
	FieldArray<UTexture2D* [3], 23> BuffTypeBackgroundsField() { return { this, "UPrimalGameData.BuffTypeBackgrounds" }; }
	FieldArray<UTexture2D* [3], 23> BuffTypeForegroundsField() { return { this, "UPrimalGameData.BuffTypeForegrounds" }; }
	TSubclassOf<APrimalBuff>& ExplorerNoteXPBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "UPrimalGameData.ExplorerNoteXPBuff"); }
	UTexture2D* PerMapExplorerNoteLockedIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.PerMapExplorerNoteLockedIcon"); }
	UTexture2D* TamedDinoUnlockedIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.TamedDinoUnlockedIcon"); }
	UTexture2D* TamedDinoLockedIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.TamedDinoLockedIcon"); }
	TArray<FUnlockableEmoteEntry>& UnlockableEmotesField() { return *GetNativePointerField<TArray<FUnlockableEmoteEntry>*>(this, "UPrimalGameData.UnlockableEmotes"); }
	TArray<FClassRemappingWeight>& GlobalNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "UPrimalGameData.GlobalNPCRandomSpawnClassWeights"); }
	UTexture2D* DinoOrderIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.DinoOrderIcon"); }
	TArray<FObjectCorrelation>& AdditionalHumanMaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanFemaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanMaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimMontagesOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanFemaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimMontagesOverrides"); }
	TArray<TSubclassOf<AActor>>& ServerExtraWorldSingletonActorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "UPrimalGameData.ServerExtraWorldSingletonActorClasses"); }
	bool& bForceServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bForceServerUseDinoList"); }
	TArray<TSubclassOf<UPrimalGameData>>& ExtraStackedGameDataClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalGameData>>*>(this, "UPrimalGameData.ExtraStackedGameDataClasses"); }
	TArray<FHairStyleDefinition>& HeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.HeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& FacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.FacialHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& AdditionalHeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.AdditionalHeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& AdditionalFacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.AdditionalFacialHairStyleDefinitions"); }
	TSubclassOf<UPrimalItem>& ExtraEggItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.ExtraEggItem"); }
	USoundBase* GenericWaterPostprocessAmbientSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.GenericWaterPostprocessAmbientSound"); }
	TSubclassOf<UPrimalPlayerData>& OverridePlayerDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalPlayerData>*>(this, "UPrimalGameData.OverridePlayerDataClass"); }
	TArray<FName>& AllDinosAchievementNameTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalGameData.AllDinosAchievementNameTags"); }
	USoundBase* GenericArrowPickedUpSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.GenericArrowPickedUpSound"); }
	UTexture2D* UnlockIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.UnlockIcon"); }
	FColor& WheelFolderColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelFolderColor"); }
	FColor& WheelBackColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelBackColor"); }
	UTexture2D* MaxInventoryIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.MaxInventoryIcon"); }
	UTexture2D* ItemSkinIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.ItemSkinIcon"); }
	UTexture2D* TinyBlueprintIconField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.TinyBlueprintIcon"); }
	UMaterialInterface* TerritoryMapOverlayMaterialField() { return *GetNativePointerField<UMaterialInterface * *>(this, "UPrimalGameData.TerritoryMapOverlayMaterial"); }
	TArray<TEnumAsByte<enum ECollisionChannel>>& SkeletalPhysCustomBodyAdditionalIgnoresField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ECollisionChannel>>*>(this, "UPrimalGameData.SkeletalPhysCustomBodyAdditionalIgnores"); }
	USoundBase* ActionWheelClickSoundField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.ActionWheelClickSound"); }
	USoundBase* Sound_GenericBoardPassengerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_GenericBoardPassenger"); }
	USoundBase* Sound_GenericUnboardPassengerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_GenericUnboardPassenger"); }
	USoundBase* Sound_CraftingTabToggleField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_CraftingTabToggle"); }
	USoundBase* Sound_PlayerDeathStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_PlayerDeathStinger"); }
	USoundBase* Sound_QuestCompletedStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_QuestCompletedStinger"); }
	USoundBase* Sound_ClaimedTerritoryStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ClaimedTerritoryStinger"); }
	USoundBase* Sound_DisciplineUnlockedStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_DisciplineUnlockedStinger"); }
	USoundBase* Sound_SkillUnlockedStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_SkillUnlockedStinger"); }
	USoundBase* Sound_DiscoveryLowStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_DiscoveryLowStinger"); }
	USoundBase* Sound_DiscoveryMedStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_DiscoveryMedStinger"); }
	USoundBase* Sound_DiscoveryHighStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_DiscoveryHighStinger"); }
	USoundBase* Sound_EnemyShipDestroyedStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_EnemyShipDestroyedStinger"); }
	USoundBase* Sound_CrewMemberRecruitedStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_CrewMemberRecruitedStinger"); }
	USoundBase* Sound_ShipLevelledUpStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ShipLevelledUpStinger"); }
	USoundBase* Sound_CharacterLevelledUpStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_CharacterLevelledUpStinger"); }
	USoundBase* Sound_ShipLevelUpAvailableStingerField() { return *GetNativePointerField<USoundBase * *>(this, "UPrimalGameData.Sound_ShipLevelUpAvailableStinger"); }
	TSubclassOf<UPrimalItem>& GenericBatteryItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.GenericBatteryItemClass"); }
	UStaticMesh* PreviewGizmoMeshField() { return *GetNativePointerField<UStaticMesh * *>(this, "UPrimalGameData.PreviewGizmoMesh"); }
	TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapKeyFuncs<UClass*, UPrimalEngramEntry*, 0> > ItemEngramMapField() { return *GetNativePointerField<TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapKeyFuncs<UClass*, UPrimalEngramEntry*, 0> >*>(this, "UPrimalGameData.ItemEngramMap"); }
	TMap<FName, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, int, 0> > & StatGroupDefinitionsMapField() { return *GetNativePointerField<TMap<FName, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, int, 0> >*>(this, "UPrimalGameData.StatGroupDefinitionsMap"); }
	TArray<FItemStatInfo>& DefaultItemStatGroupModifierInfosField() { return *GetNativePointerField<TArray<FItemStatInfo>*>(this, "UPrimalGameData.DefaultItemStatGroupModifierInfos"); }
	TArray<FPrimalStatGroupDefinition>& StatGroupDefinitionsField() { return *GetNativePointerField<TArray<FPrimalStatGroupDefinition>*>(this, "UPrimalGameData.StatGroupDefinitions"); }
	TArray<TSubclassOf<APrimalBuff>>& DefaultFeatsField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>>*>(this, "UPrimalGameData.DefaultFeats"); }
	TArray<TSubclassOf<APrimalBuff>>& DefaultPossessedPlayerBuffsField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>>*>(this, "UPrimalGameData.DefaultPossessedPlayerBuffs"); }
	TSubclassOf<UPrimalItem>& TreasureMapItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.TreasureMapItemTemplate"); }
	TArray<FItemSlotTypeDefinition>& ItemSlotTypeDefinitionsField() { return *GetNativePointerField<TArray<FItemSlotTypeDefinition>*>(this, "UPrimalGameData.ItemSlotTypeDefinitions"); }
	TArray<FBonePresetSlider>& BonePresetSlidersField() { return *GetNativePointerField<TArray<FBonePresetSlider>*>(this, "UPrimalGameData.BonePresetSliders"); }
	float& GlobalGeneralArmorRatingPowerField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorRatingPower"); }
	float& GlobalSpecificArmorRatingPowerField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorRatingPower"); }
	TArray<FAdvancedBoneModifierSlider>& AdvancedBoneModifierSlidersField() { return *GetNativePointerField<TArray<FAdvancedBoneModifierSlider>*>(this, "UPrimalGameData.AdvancedBoneModifierSliders"); }
	FieldArray<FSoilTypeDescription, 65> SoilTypeDescriptionsField() { return { this, "UPrimalGameData.SoilTypeDescriptions" }; }
	FieldArray<FLinearColor, 4> VitaminColorsField() { return { this, "UPrimalGameData.VitaminColors" }; }
	UTexture2D* VitaminIconAddField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.VitaminIconAdd"); }
	TSubclassOf<APrimalBuff>& DiscoveryZoneLocalClientBuffToGiveField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "UPrimalGameData.DiscoveryZoneLocalClientBuffToGive"); }
	UTexture2D* VitaminIconSubtractField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.VitaminIconSubtract"); }
	UTexture2D* VitaminIconAddTowardsEqField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.VitaminIconAddTowardsEq"); }
	UTexture2D* VitaminIconMoveTowardsEqField() { return *GetNativePointerField<UTexture2D * *>(this, "UPrimalGameData.VitaminIconMoveTowardsEq"); }
	TArray<FQualityTierCraftingResourceRequirements>& GlobalItemQualityTierExtraCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FQualityTierCraftingResourceRequirements>*>(this, "UPrimalGameData.GlobalItemQualityTierExtraCraftingResourceRequirements"); }
	TSubclassOf<UPrimalItem>& ExtraResourceItemClassToUpgradeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.ExtraResourceItemClassToUpgrade"); }
	TArray<FLockedFeat>& LockedFeatsField() { return *GetNativePointerField<TArray<FLockedFeat>*>(this, "UPrimalGameData.LockedFeats"); }
	TSubclassOf<APrimalBuff>& AlphaDinoBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "UPrimalGameData.AlphaDinoBuff"); }
	FLinearColor& PlacementPreviewColor_InvalidField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PlacementPreviewColor_Invalid"); }
	FLinearColor& PlacementPreviewColor_ValidField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PlacementPreviewColor_Valid"); }
	FLinearColor& PlacementPreviewColor_AltLocationsField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PlacementPreviewColor_AltLocations"); }
	TArray<FSoilTypeRegionMapping>& RegionSoilTypeRegionRemappingsField() { return *GetNativePointerField<TArray<FSoilTypeRegionMapping>*>(this, "UPrimalGameData.RegionSoilTypeRegionRemappings"); }
	TMap<FName, TArray<FName>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, TArray<FName>, 0> > & ItemSlotTypeSocketNamesField() { return *GetNativePointerField<TMap<FName, TArray<FName>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, TArray<FName>, 0> >*>(this, "UPrimalGameData.ItemSlotTypeSocketNames"); }

	// Functions

	static UPrimalGameData* BPGetGameData() { return NativeCall<UPrimalGameData*>(nullptr, "UPrimalGameData.BPGetGameData"); }
	bool CanTeamDamage(int attackerTeam, int victimTeam, AActor* Attacker) { return NativeCall<bool, int, int, AActor*>(this, "UPrimalGameData.CanTeamDamage", attackerTeam, victimTeam, Attacker); }
	bool CanTeamTarget(int attackerTeam, int victimTeam, int originalVictimTargetingTeam, AActor* Attacker, AActor* Victim) { return NativeCall<bool, int, int, int, AActor*, AActor*>(this, "UPrimalGameData.CanTeamTarget", attackerTeam, victimTeam, originalVictimTargetingTeam, Attacker, Victim); }
	static void GetClassAdditions(TArray<TSubclassOf<UObject>>* TheClassAdditions, TArray<FClassAddition>* ClassAdditions, TSubclassOf<UObject> ForClass) { NativeCall<void, TArray<TSubclassOf<UObject>>*, TArray<FClassAddition>*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetClassAdditions", TheClassAdditions, ClassAdditions, ForClass); }
	int GetDefinitionIndexForColorName(FName ColorName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetDefinitionIndexForColorName", ColorName); }
	FDinoBabySetup* GetDinoBabySetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup*, FName>(this, "UPrimalGameData.GetDinoBabySetup", DinoNameTag); }
	FDinoBabySetup* GetDinoGestationSetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup*, FName>(this, "UPrimalGameData.GetDinoGestationSetup", DinoNameTag); }
	int GetEngramRequirementLevel(UClass* ItemClass) { return NativeCall<int, UClass*>(this, "UPrimalGameData.GetEngramRequirementLevel", ItemClass); }
	FString* GetExplorerNoteDescription(FString* result, int ExplorerNoteIndex) { return NativeCall<FString*, FString*, int>(this, "UPrimalGameData.GetExplorerNoteDescription", result, ExplorerNoteIndex); }
	USoundBase* GetGenericCombatMusic_Implementation(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy, bool bIsNavalCombat) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*, bool>(this, "UPrimalGameData.GetGenericCombatMusic_Implementation", forCharacter, forEnemy, bIsNavalCombat); }
	TArray<FColor>* GetGlobalColorTable(TArray<FColor>* result) { return NativeCall<TArray<FColor>*, TArray<FColor>*>(this, "UPrimalGameData.GetGlobalColorTable", result); }
	int GetItemQualityIndex(float ItemRating) { return NativeCall<int, float>(this, "UPrimalGameData.GetItemQualityIndex", ItemRating); }
	FName* GetItemSlotTypeSocketName(FName* result, FName slotTypeName, int index) { return NativeCall<FName*, FName*, FName, int>(this, "UPrimalGameData.GetItemSlotTypeSocketName", result, slotTypeName, index); }
	FLevelExperienceRamp* GetLevelExperienceRamp(ELevelExperienceRampType::Type levelType) { return NativeCall<FLevelExperienceRamp*, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelExperienceRamp", levelType); }
	int GetLevelMax(ELevelExperienceRampType::Type levelType) { return NativeCall<int, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelMax", levelType); }
	float GetLevelXP(ELevelExperienceRampType::Type levelType, int forLevel) { return NativeCall<float, ELevelExperienceRampType::Type, int>(this, "UPrimalGameData.GetLevelXP", levelType, forLevel); }
	float GetMaxExtraLevelPercentsForTotalDiscoveryZones(int NumDiscoveryZonePoints, int TotalDiscoveryZonePoints, int PlayerDefaultNoDiscoveriesMaxLevelUps) { return NativeCall<float, int, int, int>(this, "UPrimalGameData.GetMaxExtraLevelPercentsForTotalDiscoveryZones", NumDiscoveryZonePoints, TotalDiscoveryZonePoints, PlayerDefaultNoDiscoveriesMaxLevelUps); }
	int GetNamedTargetingTeamIndex(FName TargetingTeamName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetNamedTargetingTeamIndex", TargetingTeamName); }
	TArray<int>* GetPlayerLevelEngramPoints() { return NativeCall<TArray<int>*>(this, "UPrimalGameData.GetPlayerLevelEngramPoints"); }
	TArray<FString>* GetPlayerSpawnRegions(TArray<FString>* result, UWorld* ForWorld, unsigned int ServerId) { return NativeCall<TArray<FString>*, TArray<FString>*, UWorld*, unsigned int>(this, "UPrimalGameData.GetPlayerSpawnRegions", result, ForWorld, ServerId); }
	TArray<FString>* GetPlayerSpawnRegions(UWorld* ForWorld) { return NativeCall<TArray<FString>*, UWorld*>(this, "UPrimalGameData.GetPlayerSpawnRegions", ForWorld); }
	static TSubclassOf<UObject>* GetRemappedClass(TSubclassOf<UObject>* result, TArray<FClassRemapping>* RemappedClasses, TSubclassOf<UObject> ForClass) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, TArray<FClassRemapping>*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetRemappedClass", result, RemappedClasses, ForClass); }
	FString* GetSoilTypeName(FString* result, ESoilType soilType) { return NativeCall<FString*, FString*, ESoilType>(this, "UPrimalGameData.GetSoilTypeName", result, soilType); }
	FPrimalStatGroupDefinition* GetStatGroupDescription(FName StatGroupName) { return NativeCall<FPrimalStatGroupDefinition*, FName>(this, "UPrimalGameData.GetStatGroupDescription", StatGroupName); }
	float GetTeamTargetingDesirabilityMultiplier(int attackerTeam, int victimTeam) { return NativeCall<float, int, int>(this, "UPrimalGameData.GetTeamTargetingDesirabilityMultiplier", attackerTeam, victimTeam); }
	float GetXPMax(ELevelExperienceRampType::Type levelType) { return NativeCall<float, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetXPMax", levelType); }
	void Initialize() { NativeCall<void>(this, "UPrimalGameData.Initialize"); }
	static bool LocalIsGlobalExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsGlobalExplorerNoteUnlocked", ExplorerNoteIndex); }
	static bool LocalIsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsPerMapExplorerNoteUnlocked", ExplorerNoteIndex); }
	bool LocalIsTamedDinoTagUnlocked(FName DinoNameTag) { return NativeCall<bool, FName>(this, "UPrimalGameData.LocalIsTamedDinoTagUnlocked", DinoNameTag); }
	bool MergeModData(UPrimalGameData* InMergeCanidate) { return NativeCall<bool, UPrimalGameData*>(this, "UPrimalGameData.MergeModData", InMergeCanidate); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalGameData.StaticClass"); }
	void BPInitializeGameData() { NativeCall<void>(this, "UPrimalGameData.BPInitializeGameData"); }
	void BPMergeModGameData(UPrimalGameData* AnotherGameData) { NativeCall<void, UPrimalGameData*>(this, "UPrimalGameData.BPMergeModGameData", AnotherGameData); }
	USoundBase* GetGenericCombatMusic(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy, bool bIsNavalCombat) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*, bool>(this, "UPrimalGameData.GetGenericCombatMusic", forCharacter, forEnemy, bIsNavalCombat); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UPrimalGameData.GetPrivateStaticClass", Package); }
	void LoadedWorld(UWorld* TheWorld) { NativeCall<void, UWorld*>(this, "UPrimalGameData.LoadedWorld", TheWorld); }
	static void StaticRegisterNativesUPrimalGameData() { NativeCall<void>(nullptr, "UPrimalGameData.StaticRegisterNativesUPrimalGameData"); }
	void TickedWorld(UWorld* TheWorld, float DeltaTime) { NativeCall<void, UWorld*, float>(this, "UPrimalGameData.TickedWorld", TheWorld, DeltaTime); }
};