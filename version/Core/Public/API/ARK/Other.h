#pragma once

struct FDamageEvent
{
	FieldValue<float> ImpulseField() { return { this, "FDamageEvent.Impulse" }; }
	FieldValue<float> OriginalDamageField() { return { this, "FDamageEvent.OriginalDamage" }; }
	FieldValue<int> InstanceBodyIndexField() { return { this, "FDamageEvent.InstanceBodyIndex" }; }
	FieldValue<TSubclassOf<UDamageType>> DamageTypeClassField() { return { this, "FDamageEvent.DamageTypeClass" }; }

	// Functions

	void GetBestHitInfo(AActor * HitActor, AActor * HitInstigator, FHitResult * OutHitInfo, FVector * OutImpulseDir) { NativeCall<void, AActor *, AActor *, FHitResult *, FVector *>(this, "FDamageEvent.GetBestHitInfo", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FDamageEvent.StaticStruct"); }
};

struct FHitResult
{
	FieldValue<float> TimeField() { return { this, "FHitResult.Time" }; }
	FieldValue<FVector_NetQuantize> LocationField() { return { this, "FHitResult.Location" }; }
	FieldValue<FVector_NetQuantizeNormal> NormalField() { return { this, "FHitResult.Normal" }; }
	FieldValue<FVector_NetQuantize> ImpactPointField() { return { this, "FHitResult.ImpactPoint" }; }
	FieldValue<FVector_NetQuantizeNormal> ImpactNormalField() { return { this, "FHitResult.ImpactNormal" }; }
	FieldValue<FVector_NetQuantize> TraceStartField() { return { this, "FHitResult.TraceStart" }; }
	FieldValue<FVector_NetQuantize> TraceEndField() { return { this, "FHitResult.TraceEnd" }; }
	FieldValue<float> PenetrationDepthField() { return { this, "FHitResult.PenetrationDepth" }; }
	FieldValue<int> ItemField() { return { this, "FHitResult.Item" }; }
	//FieldValue<TWeakObjectPtr<UPhysicalMaterial>> PhysMaterialField() { return { this, "FHitResult.PhysMaterial" }; }
	FieldValue<TWeakObjectPtr<AActor>> ActorField() { return { this, "FHitResult.Actor" }; }
	FieldValue<TWeakObjectPtr<UPrimitiveComponent>> ComponentField() { return { this, "FHitResult.Component" }; }
	//FieldValue<FBodyInstance *> BodyInstanceField() { return { this, "FHitResult.BodyInstance" }; }
	FieldValue<FName> BoneNameField() { return { this, "FHitResult.BoneName" }; }
	FieldValue<int> FaceIndexField() { return { this, "FHitResult.FaceIndex" }; }

	// Functions

	void operator=(FHitResult * __that) { NativeCall<void, FHitResult *>(this, "FHitResult.operator=", __that); }
	AActor * GetActor() { return NativeCall<AActor *>(this, "FHitResult.GetActor"); }
	UPrimitiveComponent * GetComponent() { return NativeCall<UPrimitiveComponent *>(this, "FHitResult.GetComponent"); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FHitResult.StaticStruct"); }
};

struct RCONClientConnection
{
	//FieldValue<FSocket *> SocketField() { return { this, "RCONClientConnection.Socket" }; }
	FieldValue<UShooterCheatManager *> CheatManagerField() { return { this, "RCONClientConnection.CheatManager" }; }
	FieldValue<bool> IsAuthenticatedField() { return { this, "RCONClientConnection.IsAuthenticated" }; }
	FieldValue<bool> IsClosedField() { return { this, "RCONClientConnection.IsClosed" }; }
	FieldValue<TArray<signed char>> DataBufferField() { return { this, "RCONClientConnection.DataBuffer" }; }
	FieldValue<unsigned int> CurrentPacketSizeField() { return { this, "RCONClientConnection.CurrentPacketSize" }; }
	FieldValue<long double> LastReceiveTimeField() { return { this, "RCONClientConnection.LastReceiveTime" }; }
	FieldValue<long double> LastSendKeepAliveTimeField() { return { this, "RCONClientConnection.LastSendKeepAliveTime" }; }
	FieldValue<FString> ServerPasswordField() { return { this, "RCONClientConnection.ServerPassword" }; }

	// Functions

	void Tick(long double WorldTime, UWorld * InWorld) { NativeCall<void, long double, UWorld *>(this, "RCONClientConnection.Tick", WorldTime, InWorld); }
	void ProcessRCONPacket(RCONPacket * Packet, UWorld * InWorld) { NativeCall<void, RCONPacket *, UWorld *>(this, "RCONClientConnection.ProcessRCONPacket", Packet, InWorld); }
	void SendMessageW(int Id, int Type, FString * OutGoingMessage) { NativeCall<void, int, int, FString *>(this, "RCONClientConnection.SendMessageW", Id, Type, OutGoingMessage); }
	void Close() { NativeCall<void>(this, "RCONClientConnection.Close"); }
};

struct RCONPacket
{
	int Length;
	int Id;
	int Type;
	FString Body;
};

struct UGameplayStatics
{
	static APlayerController * GetPlayerController(UObject * WorldContextObject, int PlayerIndex) { return NativeCall<APlayerController *, UObject *, int>(nullptr, "UGameplayStatics.GetPlayerController", WorldContextObject, PlayerIndex); }
	static APlayerController * CreatePlayer(UObject * WorldContextObject, int ControllerId, bool bSpawnPawn) { return NativeCall<APlayerController *, UObject *, int, bool>(nullptr, "UGameplayStatics.CreatePlayer", WorldContextObject, ControllerId, bSpawnPawn); }
	static void SetGlobalTimeDilation(UObject * WorldContextObject, float TimeDilation) { NativeCall<void, UObject *, float>(nullptr, "UGameplayStatics.SetGlobalTimeDilation", WorldContextObject, TimeDilation); }
	static bool SetGamePaused(UObject * WorldContextObject, bool bPaused) { return NativeCall<bool, UObject *, bool>(nullptr, "UGameplayStatics.SetGamePaused", WorldContextObject, bPaused); }
	static bool ApplyRadialDamage(UObject * WorldContextObject, float BaseDamage, FVector * Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor *> * IgnoreActors, AActor * DamageCauser, AController * InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse) { return NativeCall<bool, UObject *, float, FVector *, float, TSubclassOf<UDamageType>, TArray<AActor *> *, AActor *, AController *, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyRadialDamage", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse); }
	static bool ApplyRadialDamageIgnoreDamageActors(UObject * WorldContextObject, float BaseDamage, FVector * Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor *> * IgnoreActors, TArray<AActor *> * IgnoreDamageActors, AActor * DamageCauser, AController * InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse) { return NativeCall<bool, UObject *, float, FVector *, float, TSubclassOf<UDamageType>, TArray<AActor *> *, TArray<AActor *> *, AActor *, AController *, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyRadialDamageIgnoreDamageActors", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, IgnoreDamageActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse); }
	static bool ApplyRadialDamageWithFalloff(UObject * WorldContextObject, float BaseDamage, float MinimumDamage, FVector * Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor *> * IgnoreActors, AActor * DamageCauser, AController * InstigatedByController, ECollisionChannel DamagePreventionChannel, float Impulse, TArray<AActor *> * IgnoreDamageActors, int NumAdditionalAttempts) { return NativeCall<bool, UObject *, float, float, FVector *, float, float, float, TSubclassOf<UDamageType>, TArray<AActor *> *, AActor *, AController *, ECollisionChannel, float, TArray<AActor *> *, int>(nullptr, "UGameplayStatics.ApplyRadialDamageWithFalloff", WorldContextObject, BaseDamage, MinimumDamage, Origin, DamageInnerRadius, DamageOuterRadius, DamageFalloff, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, DamagePreventionChannel, Impulse, IgnoreDamageActors, NumAdditionalAttempts); }
	static void ApplyPointDamage(AActor * DamagedActor, float BaseDamage, FVector * HitFromDirection, FHitResult * HitInfo, AController * EventInstigator, AActor * DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse, bool bForceCollisionCheck, ECollisionChannel ForceCollisionCheckTraceChannel) { NativeCall<void, AActor *, float, FVector *, FHitResult *, AController *, AActor *, TSubclassOf<UDamageType>, float, bool, ECollisionChannel>(nullptr, "UGameplayStatics.ApplyPointDamage", DamagedActor, BaseDamage, HitFromDirection, HitInfo, EventInstigator, DamageCauser, DamageTypeClass, Impulse, bForceCollisionCheck, ForceCollisionCheckTraceChannel); }
	static void ApplyDamage(AActor * DamagedActor, float BaseDamage, AController * EventInstigator, AActor * DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse) { NativeCall<void, AActor *, float, AController *, AActor *, TSubclassOf<UDamageType>, float>(nullptr, "UGameplayStatics.ApplyDamage", DamagedActor, BaseDamage, EventInstigator, DamageCauser, DamageTypeClass, Impulse); }
	static AActor * BeginSpawningActorFromBlueprint(UObject * WorldContextObject, UBlueprint * Blueprint, FTransform * SpawnTransform, bool bNoCollisionFail) { return NativeCall<AActor *, UObject *, UBlueprint *, FTransform *, bool>(nullptr, "UGameplayStatics.BeginSpawningActorFromBlueprint", WorldContextObject, Blueprint, SpawnTransform, bNoCollisionFail); }
	static AActor * BeginSpawningActorFromClass(UObject * WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform * SpawnTransform, bool bNoCollisionFail) { return NativeCall<AActor *, UObject *, TSubclassOf<AActor>, FTransform *, bool>(nullptr, "UGameplayStatics.BeginSpawningActorFromClass", WorldContextObject, ActorClass, SpawnTransform, bNoCollisionFail); }
	static void OpenLevel(UObject * WorldContextObject, FName LevelName, bool bAbsolute, FString Options) { NativeCall<void, UObject *, FName, bool, FString>(nullptr, "UGameplayStatics.OpenLevel", WorldContextObject, LevelName, bAbsolute, Options); }
	static FVector * GetActorArrayAverageLocation(FVector * result, TArray<AActor *> * Actors) { return NativeCall<FVector *, FVector *, TArray<AActor *> *>(nullptr, "UGameplayStatics.GetActorArrayAverageLocation", result, Actors); }
	static void GetActorArrayBounds(TArray<AActor *> * Actors, bool bOnlyCollidingComponents, FVector * Center, FVector * BoxExtent) { NativeCall<void, TArray<AActor *> *, bool, FVector *, FVector *>(nullptr, "UGameplayStatics.GetActorArrayBounds", Actors, bOnlyCollidingComponents, Center, BoxExtent); }
	static void GetAllActorsOfClass(UObject * WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor *> * OutActors) { NativeCall<void, UObject *, TSubclassOf<AActor>, TArray<AActor *> *>(nullptr, "UGameplayStatics.GetAllActorsOfClass", WorldContextObject, ActorClass, OutActors); }
	//static void GetAllActorsWithInterface(UObject * WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor *> * OutActors) { NativeCall<void, UObject *, TSubclassOf<UInterface>, TArray<AActor *> *>(nullptr, "UGameplayStatics.GetAllActorsWithInterface", WorldContextObject, Interface, OutActors); }
	static EPhysicalSurface GetSurfaceType(FHitResult * Hit) { return NativeCall<EPhysicalSurface, FHitResult *>(nullptr, "UGameplayStatics.GetSurfaceType", Hit); }
	static bool AreAnyListenersWithinRange(FVector Location, float MaximumRange) { return NativeCall<bool, FVector, float>(nullptr, "UGameplayStatics.AreAnyListenersWithinRange", Location, MaximumRange); }
	static void PlaySound(UObject * WorldContextObject, USoundCue * InSoundCue, USceneComponent * AttachComponent, FName AttachName, bool bFollow, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, UObject *, USoundCue *, USceneComponent *, FName, bool, float, float>(nullptr, "UGameplayStatics.PlaySound", WorldContextObject, InSoundCue, AttachComponent, AttachName, bFollow, VolumeMultiplier, PitchMultiplier); }
	static void GetAccurateRealTime(UObject * WorldContextObject, int * Seconds, float * PartialSeconds) { NativeCall<void, UObject *, int *, float *>(nullptr, "UGameplayStatics.GetAccurateRealTime", WorldContextObject, Seconds, PartialSeconds); }
};

struct FItemMultiplier
{
	TSubclassOf<UPrimalItem> ItemClass;
	float ItemMultiplier;
};

struct APrimalBuff
{
	FieldValue<float> DeactivationLifespanField() { return { this, "APrimalBuff.DeactivationLifespan" }; }
	FieldValue<FName> InstigatorAttachmentSocketField() { return { this, "APrimalBuff.InstigatorAttachmentSocket" }; }
	FieldValue<FVector> AoETraceToTargetsStartOffsetField() { return { this, "APrimalBuff.AoETraceToTargetsStartOffset" }; }
	FieldValue<TWeakObjectPtr<AActor>> TargetField() { return { this, "APrimalBuff.Target" }; }
	FieldValue<TWeakObjectPtr<UPrimalItem>> InstigatorItemField() { return { this, "APrimalBuff.InstigatorItem" }; }
	FieldValue<float> SlowInstigatorFallingAddZVelocityField() { return { this, "APrimalBuff.SlowInstigatorFallingAddZVelocity" }; }
	FieldValue<float> SlowInstigatorFallingDampenZVelocityField() { return { this, "APrimalBuff.SlowInstigatorFallingDampenZVelocity" }; }
	FieldValue<float> DeactivateAfterTimeField() { return { this, "APrimalBuff.DeactivateAfterTime" }; }
	FieldValue<float> WeaponRecoilMultiplierField() { return { this, "APrimalBuff.WeaponRecoilMultiplier" }; }
	FieldValue<float> ReceiveDamageMultiplierField() { return { this, "APrimalBuff.ReceiveDamageMultiplier" }; }
	FieldValue<float> MeleeDamageMultiplierField() { return { this, "APrimalBuff.MeleeDamageMultiplier" }; }
	FieldValue<float> DepleteInstigatorItemDurabilityPerSecondField() { return { this, "APrimalBuff.DepleteInstigatorItemDurabilityPerSecond" }; }
	FieldArray<float, 12> ValuesToAddPerSecondField() { return { this, "APrimalBuff.ValuesToAddPerSecond" }; }
	//FieldValue<FStatusValueModifierDescription> BuffDescriptionField() { return { this, "APrimalBuff.BuffDescription" }; }
	FieldValue<float> CharacterAdd_DefaultHyperthermicInsulationField() { return { this, "APrimalBuff.CharacterAdd_DefaultHyperthermicInsulation" }; }
	FieldValue<float> CharacterAdd_DefaultHypothermicInsulationField() { return { this, "APrimalBuff.CharacterAdd_DefaultHypothermicInsulation" }; }
	FieldValue<float> CharacterMultiplier_ExtraWaterConsumptionMultiplierField() { return { this, "APrimalBuff.CharacterMultiplier_ExtraWaterConsumptionMultiplier" }; }
	FieldValue<float> CharacterMultiplier_ExtraFoodConsumptionMultiplierField() { return { this, "APrimalBuff.CharacterMultiplier_ExtraFoodConsumptionMultiplier" }; }
	FieldValue<float> CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() { return { this, "APrimalBuff.CharacterMultiplier_SubmergedOxygenDecreaseSpeed" }; }
	FieldValue<float> ViewMinExposureMultiplierField() { return { this, "APrimalBuff.ViewMinExposureMultiplier" }; }
	FieldValue<float> ViewMaxExposureMultiplierField() { return { this, "APrimalBuff.ViewMaxExposureMultiplier" }; }
	FieldValue<float> XPtoAddField() { return { this, "APrimalBuff.XPtoAdd" }; }
	FieldValue<float> XPtoAddRateField() { return { this, "APrimalBuff.XPtoAddRate" }; }
	FieldValue<bool> bDeactivateAfterAddingXPField() { return { this, "APrimalBuff.bDeactivateAfterAddingXP" }; }
	FieldValue<float> SubmergedMaxSpeedModifierField() { return { this, "APrimalBuff.SubmergedMaxSpeedModifier" }; }
	FieldValue<float> UnsubmergedMaxSpeedModifierField() { return { this, "APrimalBuff.UnsubmergedMaxSpeedModifier" }; }
	//FieldValue<TArray<FDamagePrimalCharacterStatusValueModifier>> CharacterStatusValueModifiersField() { return { this, "APrimalBuff.CharacterStatusValueModifiers" }; }
	FieldValue<long double> BuffStartTimeField() { return { this, "APrimalBuff.BuffStartTime" }; }
	FieldValue<UMaterialInterface *> BuffPostProcessEffectField() { return { this, "APrimalBuff.BuffPostProcessEffect" }; }
	FieldValue<TArray<TSubclassOf<AActor>>> PreventActorClassesTargetingField() { return { this, "APrimalBuff.PreventActorClassesTargeting" }; }
	FieldValue<TArray<float>> PreventActorClassesTargetingRangesField() { return { this, "APrimalBuff.PreventActorClassesTargetingRanges" }; }
	FieldValue<TSubclassOf<APrimalBuff>> AOEOtherBuffToApplyField() { return { this, "APrimalBuff.AOEOtherBuffToApply" }; }
	FieldValue<float> AOEBuffRangeField() { return { this, "APrimalBuff.AOEBuffRange" }; }
	FieldValue<float> CharacterAOEBuffDamageField() { return { this, "APrimalBuff.CharacterAOEBuffDamage" }; }
	FieldValue<float> CharacterAOEBuffResistanceField() { return { this, "APrimalBuff.CharacterAOEBuffResistance" }; }
	FieldValue<float> Maximum2DVelocityForStaminaRecoveryField() { return { this, "APrimalBuff.Maximum2DVelocityForStaminaRecovery" }; }
	FieldValue<TArray<UMaterialInterface *>> PostprocessBlendablesToExcludeField() { return { this, "APrimalBuff.PostprocessBlendablesToExclude" }; }
	FieldValue<TArray<TWeakObjectPtr<APrimalCharacter>>> BuffedCharactersField() { return { this, "APrimalBuff.BuffedCharacters" }; }
	FieldValue<long double> LastItemDurabilityDepletionTimeField() { return { this, "APrimalBuff.LastItemDurabilityDepletionTime" }; }
	FieldValue<TSubclassOf<APrimalBuff>> BuffToGiveOnDeactivationField() { return { this, "APrimalBuff.BuffToGiveOnDeactivation" }; }
	FieldValue<TArray<TSubclassOf<APrimalBuff>>> BuffClassesToCancelOnActivationField() { return { this, "APrimalBuff.BuffClassesToCancelOnActivation" }; }
	FieldValue<TArray<TSubclassOf<APrimalBuff>>> ActivePreventsBuffClassesField() { return { this, "APrimalBuff.ActivePreventsBuffClasses" }; }
	FieldValue<TArray<TSubclassOf<APrimalCharacter>>> BuffRequiresOwnerClassField() { return { this, "APrimalBuff.BuffRequiresOwnerClass" }; }
	FieldValue<TArray<TSubclassOf<APrimalCharacter>>> BuffPreventsOwnerClassField() { return { this, "APrimalBuff.BuffPreventsOwnerClass" }; }
	FieldValue<float> XPEarningMultiplierField() { return { this, "APrimalBuff.XPEarningMultiplier" }; }
	FieldValue<bool> bUseBPSetupForInstigatorField() { return { this, "APrimalBuff.bUseBPSetupForInstigator" }; }
	FieldValue<bool> bUseBPDeactivatedField() { return { this, "APrimalBuff.bUseBPDeactivated" }; }
	FieldValue<bool> bUseBPCustomAllowAddBuffField() { return { this, "APrimalBuff.bUseBPCustomAllowAddBuff" }; }
	FieldValue<FVector> staticPathingDestinationField() { return { this, "APrimalBuff.staticPathingDestination" }; }
	FieldValue<long double> TickingDeactivationTimeField() { return { this, "APrimalBuff.TickingDeactivationTime" }; }
	//FieldValue<UPrimalBuffPersistentData *> MyBuffPersistentDataField() { return { this, "APrimalBuff.MyBuffPersistentData" }; }
	//FieldValue<TSubclassOf<UPrimalBuffPersistentData>> BuffPersistentDataClassField() { return { this, "APrimalBuff.BuffPersistentDataClass" }; }
	//FieldValue<TArray<FMaxStatScaler>> MaxStatScalersField() { return { this, "APrimalBuff.MaxStatScalers" }; }
	FieldValue<TWeakObjectPtr<AActor>> DamageCauserField() { return { this, "APrimalBuff.DamageCauser" }; }
	FieldValue<USoundBase *> ExtraActivationSoundToPlayField() { return { this, "APrimalBuff.ExtraActivationSoundToPlay" }; }
	FieldValue<bool> bPersistentBuffSurvivesLevelUpField() { return { this, "APrimalBuff.bPersistentBuffSurvivesLevelUp" }; }
	FieldValue<float> AoEApplyDamageField() { return { this, "APrimalBuff.AoEApplyDamage" }; }
	FieldValue<float> AoEApplyDamageIntervalField() { return { this, "APrimalBuff.AoEApplyDamageInterval" }; }
	FieldValue<TSubclassOf<UDamageType>> AoEApplyDamageTypeField() { return { this, "APrimalBuff.AoEApplyDamageType" }; }
	FieldValue<TSubclassOf<APrimalBuff>> ForceNetworkSpatializationMaxLimitBuffTypeField() { return { this, "APrimalBuff.ForceNetworkSpatializationMaxLimitBuffType" }; }
	FieldValue<int> ForceNetworkSpatializationBuffMaxLimitNumField() { return { this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitNum" }; }
	FieldValue<float> ForceNetworkSpatializationBuffMaxLimitRangeField() { return { this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitRange" }; }
	FieldValue<float> InsulationRangeField() { return { this, "APrimalBuff.InsulationRange" }; }
	FieldValue<float> HyperThermiaInsulationField() { return { this, "APrimalBuff.HyperThermiaInsulation" }; }
	FieldValue<float> HypoThermiaInsulationField() { return { this, "APrimalBuff.HypoThermiaInsulation" }; }
	FieldValue<FVector> AoEBuffLocOffsetField() { return { this, "APrimalBuff.AoEBuffLocOffset" }; }
	FieldValue<TArray<TSubclassOf<AActor>>> AoEClassesToIncludeField() { return { this, "APrimalBuff.AoEClassesToInclude" }; }
	FieldValue<TArray<TSubclassOf<AActor>>> AoEClassesToExcludeField() { return { this, "APrimalBuff.AoEClassesToExclude" }; }
	FieldValue<bool> bUseBPExcludeAoEActorField() { return { this, "APrimalBuff.bUseBPExcludeAoEActor" }; }
	FieldValue<bool> bOverrideBuffDescriptionField() { return { this, "APrimalBuff.bOverrideBuffDescription" }; }
	FieldValue<bool> bOnlyTickWhenPossessedField() { return { this, "APrimalBuff.bOnlyTickWhenPossessed" }; }
	FieldValue<bool> bDestroyWhenUnpossessedField() { return { this, "APrimalBuff.bDestroyWhenUnpossessed" }; }
	FieldValue<long double> LastAoEApplyDamageTimeField() { return { this, "APrimalBuff.LastAoEApplyDamageTime" }; }
	FieldValue<float> OnlyForInstigatorSoundFadeInTimeField() { return { this, "APrimalBuff.OnlyForInstigatorSoundFadeInTime" }; }
	FieldValue<bool> bUseBuffTickServerField() { return { this, "APrimalBuff.bUseBuffTickServer" }; }
	FieldValue<bool> bUseBuffTickClientField() { return { this, "APrimalBuff.bUseBuffTickClient" }; }
	FieldValue<float> BuffTickServerMaxTimeField() { return { this, "APrimalBuff.BuffTickServerMaxTime" }; }
	FieldValue<float> BuffTickServerMinTimeField() { return { this, "APrimalBuff.BuffTickServerMinTime" }; }
	FieldValue<float> BuffTickClientMaxTimeField() { return { this, "APrimalBuff.BuffTickClientMaxTime" }; }
	FieldValue<float> BuffTickClientMinTimeField() { return { this, "APrimalBuff.BuffTickClientMinTime" }; }
	FieldValue<long double> LastBuffTickTimeServerField() { return { this, "APrimalBuff.LastBuffTickTimeServer" }; }
	FieldValue<long double> LastBuffTickTimeClientField() { return { this, "APrimalBuff.LastBuffTickTimeClient" }; }
	FieldValue<long double> NextBuffTickTimeServerField() { return { this, "APrimalBuff.NextBuffTickTimeServer" }; }
	FieldValue<long double> NextBuffTickTimeClientField() { return { this, "APrimalBuff.NextBuffTickTimeClient" }; }
	FieldValue<bool> bTickFunctionDisabledField() { return { this, "APrimalBuff.bTickFunctionDisabled" }; }
	FieldValue<bool> bWasStasisedField() { return { this, "APrimalBuff.bWasStasised" }; }
	FieldValue<int> AddBuffMaxNumStacksField() { return { this, "APrimalBuff.AddBuffMaxNumStacks" }; }
	FieldValue<USoundBase *> DeactivatedSoundField() { return { this, "APrimalBuff.DeactivatedSound" }; }
	FieldValue<bool> bDeactivatedSoundOnlyLocalField() { return { this, "APrimalBuff.bDeactivatedSoundOnlyLocal" }; }
	FieldValue<bool> bDisableBloomField() { return { this, "APrimalBuff.bDisableBloom" }; }
	FieldValue<bool> bBPOverrideCharacterNewFallVelocityField() { return { this, "APrimalBuff.bBPOverrideCharacterNewFallVelocity" }; }
	FieldValue<bool> bBPModifyCharacterFOVField() { return { this, "APrimalBuff.bBPModifyCharacterFOV" }; }
	FieldValue<bool> bDisableLightShaftsField() { return { this, "APrimalBuff.bDisableLightShafts" }; }
	FieldValue<float> PostProcessInterpSpeedDownField() { return { this, "APrimalBuff.PostProcessInterpSpeedDown" }; }
	FieldValue<float> PostProcessInterpSpeedUpField() { return { this, "APrimalBuff.PostProcessInterpSpeedUp" }; }
	FieldValue<float> TPVCameraSpeedInterpolationMultiplierField() { return { this, "APrimalBuff.TPVCameraSpeedInterpolationMultiplier" }; }
	FieldValue<bool> bIsCarryBuffField() { return { this, "APrimalBuff.bIsCarryBuff" }; }
	FieldValue<long double> TimeForNextAOECheckField() { return { this, "APrimalBuff.TimeForNextAOECheck" }; }
	FieldValue<float> AOEBuffIntervalMinField() { return { this, "APrimalBuff.AOEBuffIntervalMin" }; }
	FieldValue<float> AOEBuffIntervalMaxField() { return { this, "APrimalBuff.AOEBuffIntervalMax" }; }
	FieldValue<float> MaximumVelocityZForSlowingFallField() { return { this, "APrimalBuff.MaximumVelocityZForSlowingFall" }; }
	FieldValue<int> FNameIntField() { return { this, "APrimalBuff.FNameInt" }; }

	// Functions

	bool TemplateAllowActorSpawn(UWorld * World, FVector * AtLocation, FRotator * AtRotation, FActorSpawnParameters * SpawnParameters) { return NativeCall<bool, UWorld *, FVector *, FRotator *, FActorSpawnParameters *>(this, "APrimalBuff.TemplateAllowActorSpawn", World, AtLocation, AtRotation, SpawnParameters); }
	void Deactivate() { NativeCall<void>(this, "APrimalBuff.Deactivate"); }
	void NetDeactivate_Implementation() { NativeCall<void>(this, "APrimalBuff.NetDeactivate_Implementation"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalBuff.BeginPlay"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalBuff.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void AddDamageStatusValueModifier(APrimalCharacter * addToCharacter, EPrimalCharacterStatusValue::Type ValueType, bool bSpeedToAddInSeconds, bool bContinueOnUnchangedValue, bool bResetExistingModifierDescriptionIndex, bool bSetValue, bool bSetAdditionalValue, float LimitExistingModifierDescriptionToMaxAmount, float damageMultiplierAmountToAdd, float speedToAdd, int StatusValueModifierDescriptionIndex, bool bUsePercentualDamage, bool bMakeUntameable, float percentualDamage, TSubclassOf<UDamageType> ScaleValueByCharacterDamageType) { NativeCall<void, APrimalCharacter *, EPrimalCharacterStatusValue::Type, bool, bool, bool, bool, bool, float, float, float, int, bool, bool, float, TSubclassOf<UDamageType>>(this, "APrimalBuff.AddDamageStatusValueModifier", addToCharacter, ValueType, bSpeedToAddInSeconds, bContinueOnUnchangedValue, bResetExistingModifierDescriptionIndex, bSetValue, bSetAdditionalValue, LimitExistingModifierDescriptionToMaxAmount, damageMultiplierAmountToAdd, speedToAdd, StatusValueModifierDescriptionIndex, bUsePercentualDamage, bMakeUntameable, percentualDamage, ScaleValueByCharacterDamageType); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff.SetupForInstigator"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff.Tick", DeltaSeconds); }
	void ProcessStaticPathing(bool triggerRunning) { NativeCall<void, bool>(this, "APrimalBuff.ProcessStaticPathing", triggerRunning); }
	FVector * UpdateStaticPathingDestination(FVector * result, FVector locOverride, float randomOffsetMultiplier, bool useRandomNegativeXDir, bool orientRandOffsetByRotation, FRotator randOffsetByRotation, float GroundCheckSpreadOverride) { return NativeCall<FVector *, FVector *, FVector, float, bool, bool, FRotator, float>(this, "APrimalBuff.UpdateStaticPathingDestination", result, locOverride, randomOffsetMultiplier, useRandomNegativeXDir, orientRandOffsetByRotation, randOffsetByRotation, GroundCheckSpreadOverride); }
	void EnableTickFunction() { NativeCall<void>(this, "APrimalBuff.EnableTickFunction"); }
	bool AOEBuffCanAffect(APrimalCharacter * forChar) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalBuff.AOEBuffCanAffect", forChar); }
	void InstigatorJumped() { NativeCall<void>(this, "APrimalBuff.InstigatorJumped"); }
	void Destroyed() { NativeCall<void>(this, "APrimalBuff.Destroyed"); }
	void NetResetBuffStart_Implementation() { NativeCall<void>(this, "APrimalBuff.NetResetBuffStart_Implementation"); }
	bool ResetBuffStart() { return NativeCall<bool>(this, "APrimalBuff.ResetBuffStart"); }
	APrimalBuff * AddBuff(APrimalCharacter * ForCharacter, AActor * DamageCauser) { return NativeCall<APrimalBuff *, APrimalCharacter *, AActor *>(this, "APrimalBuff.AddBuff", ForCharacter, DamageCauser); }
	static APrimalBuff * StaticAddBuff(TSubclassOf<APrimalBuff> BuffClass, APrimalCharacter * ForCharacter, UPrimalItem * AssociatedItem, AActor * DamageCauser, bool bForceOnClient) { return NativeCall<APrimalBuff *, TSubclassOf<APrimalBuff>, APrimalCharacter *, UPrimalItem *, AActor *, bool>(nullptr, "APrimalBuff.StaticAddBuff", BuffClass, ForCharacter, AssociatedItem, DamageCauser, bForceOnClient); }
	bool ExcludePostProcessBlendableMaterial(UMaterialInterface * BlendableMaterialInterface) { return NativeCall<bool, UMaterialInterface *>(this, "APrimalBuff.ExcludePostProcessBlendableMaterial", BlendableMaterialInterface); }
	bool PreventActorTargeting_Implementation(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "APrimalBuff.PreventActorTargeting_Implementation", ByActor); }
	bool PreventRunning() { return NativeCall<bool>(this, "APrimalBuff.PreventRunning"); }
	bool ExcludeAoEActor(AActor * ActorToConsider) { return NativeCall<bool, AActor *>(this, "APrimalBuff.ExcludeAoEActor", ActorToConsider); }
	bool HideBuffFromHUD_Implementation() { return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD_Implementation"); }
	void Stasis() { NativeCall<void>(this, "APrimalBuff.Stasis"); }
	void Unstasis() { NativeCall<void>(this, "APrimalBuff.Unstasis"); }
	bool ExtendBuffTime(float AmountOfAdditionalTime) { return NativeCall<bool, float>(this, "APrimalBuff.ExtendBuffTime", AmountOfAdditionalTime); }
	int GetBuffType_Implementation() { return NativeCall<int>(this, "APrimalBuff.GetBuffType_Implementation"); }
	bool ReduceBuffTime(float AmountOfTimeToReduce) { return NativeCall<bool, float>(this, "APrimalBuff.ReduceBuffTime", AmountOfTimeToReduce); }
	static UClass * StaticClass() { return NativeCall<UClass *>(nullptr, "APrimalBuff.StaticClass"); }
	static void StaticRegisterNativesAPrimalBuff() { NativeCall<void>(nullptr, "APrimalBuff.StaticRegisterNativesAPrimalBuff"); }
	void BPDrawBuffStatusHUD(AShooterHUD * HUD, float XPos, float YPos, float ScaleMult) { NativeCall<void, AShooterHUD *, float, float, float>(this, "APrimalBuff.BPDrawBuffStatusHUD", HUD, XPos, YPos, ScaleMult); }
	float BuffAdjustDamage(float Damage, FHitResult * HitInfo, AController * EventInstigator, AActor * DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { return NativeCall<float, float, FHitResult *, AController *, AActor *, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffAdjustDamage", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
	void BuffTickClient(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickClient", DeltaTime); }
	void BuffTickServer(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickServer", DeltaTime); }
	void DrawBuffFloatingHUD(int BuffIndex, AShooterHUD * HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, int, AShooterHUD *, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD", BuffIndex, HUD, CenterX, CenterY, DrawScale); }
	void NotifyDamage(float DamageAmount, TSubclassOf<UDamageType> DamageClass, AController * EventInstigator, AActor * TheDamageCauser) { NativeCall<void, float, TSubclassOf<UDamageType>, AController *, AActor *>(this, "APrimalBuff.NotifyDamage", DamageAmount, DamageClass, EventInstigator, TheDamageCauser); }
	bool PreventActorTargeting(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "APrimalBuff.PreventActorTargeting", ByActor); }
	void SetBuffCauser(AActor * CausedBy) { NativeCall<void, AActor *>(this, "APrimalBuff.SetBuffCauser", CausedBy); }
};

struct FDinoAncestorsEntry
{
	FString MaleName;
	unsigned int MaleDinoID1;
	unsigned int MaleDinoID2;
	FString FemaleName;
	unsigned int FemaleDinoID1;
	unsigned int FemaleDinoID2;
};

struct FCraftingResourceRequirement
{
	float BaseResourceRequirement;
	TSubclassOf<UPrimalItem> ResourceItemType;
	bool bCraftingRequireExactResourceType;
};