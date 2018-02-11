#pragma once

namespace EPrimalEquipmentType
{
	enum Type
	{
		Hat = 0x0,
		Shirt = 0x1,
		Pants = 0x2,
		Boots = 0x3,
		Gloves = 0x4,
		DinoSaddle = 0x5,
		Trophy = 0x6,
		Costume = 0x7,
		Shield = 0x8,
		MAX = 0x9
	};
}

namespace EPrimalItemStat
{
	enum Type
	{
		GenericQuality,
		Armor,
		MaxDurability,
		WeaponDamagePercent,
		WeaponClipAmmo,
		HypothermalInsulation,
		Weight,
		HyperthermalInsulation,
		MAX
	};
}

namespace EPrimalCharacterStatusValue
{
	enum Type
	{
		Health,
		Stamina,
		Torpidity,
		Oxygen,
		Food,
		Water,
		Temperature,
		Weight,
		MeleeDamageMultiplier,
		SpeedMultiplier,
		TemperatureFortitude,
		CraftingSpeedMultiplier,
		MAX
	};
}

namespace EPrimalCharacterStatusState
{
	enum Type
	{
		Dead,
		Winded,
		Starvation,
		Dehydration,
		Suffocation,
		Encumbered,
		Hypothermia,
		Hyperthermia,
		Injured,
		KnockedOut,
		Sleeping,
		Cold,
		Hot,
		Crafting,
		MAX
	};
}

namespace EPrimalItemType
{
	enum Type
	{
		MiscConsumable,
		Equipment,
		Weapon,
		Ammo,
		Structure,
		Resource,
		Skin,
		WeaponAttachment,
		Artifact,
		MAX
	};
}

namespace EPrimalConsumableType
{
	enum Type
	{
		Food,
		Water,
		Medicine,
		Other,
		MAX
	};
}

namespace EPrimalItemMessage
{
	enum Type
	{
		Broken,
		Repaired,
		MAX
	};
}

enum class ECollisionChannel
{
	ECC_WorldStatic = 0x0,
	ECC_WorldDynamic = 0x1,
	ECC_Visibility = 0x2,
	ECC_PhysicsBody = 0x3,
	ECC_Destructible = 0x4,
	ECC_GameTraceChannel1 = 0x5,
	ECC_GameTraceChannel2 = 0x6,
	ECC_GameTraceChannel3 = 0x7,
	ECC_GameTraceChannel4 = 0x8,
	ECC_GameTraceChannel5 = 0x9,
	ECC_GameTraceChannel6 = 0xA,
	ECC_GameTraceChannel7 = 0xB,
	ECC_GameTraceChannel8 = 0xC,
	ECC_GameTraceChannel9 = 0xD,
	ECC_GameTraceChannel10 = 0xE,
	ECC_GameTraceChannel11 = 0xF,
	ECC_GameTraceChannel12 = 0x10,
	ECC_GameTraceChannel13 = 0x11,
	ECC_GameTraceChannel14 = 0x12,
	ECC_GameTraceChannel15 = 0x13,
	ECC_GameTraceChannel16 = 0x14,
	ECC_GameTraceChannel17 = 0x15,
	ECC_GameTraceChannel18 = 0x16,
	ECC_GameTraceChannel19 = 0x17,
	ECC_GameTraceChannel20 = 0x18,
	ECC_GameTraceChannel21 = 0x19,
	ECC_GameTraceChannel22 = 0x1A,
	ECC_GameTraceChannel23 = 0x1B,
	ECC_GameTraceChannel24 = 0x1C,
	ECC_GameTraceChannel25 = 0x1D,
	ECC_GameTraceChannel26 = 0x1E,
	ECC_GameTraceChannel27 = 0x1F,
	ECC_OverlapAll_Deprecated = 0x20,
	ECC_OverlapAllDynamic_Deprecated = 0x21,
	ECC_OverlapAllStatic_Deprecated = 0x22,
	ECC_MAX = 0x23,
};

namespace EXPType
{
	enum Type
	{
		XP_GENERIC,
		XP_KILL,
		XP_HARVEST,
		XP_CRAFT,
		XP_SPECIAL,
		MAX
	};
}

namespace EChatSendMode
{
	enum Type
	{
		GlobalChat,
		GlobalTribeChat,
		LocalChat,
		AllianceChat,
		MAX
	};
}

namespace EChatType
{
	enum Type
	{
		GlobalChat,
		ProximityChat,
		RadioChat,
		GlobalTribeChat,
		AllianceChat,
		MAX
	};
}

namespace ETextComparisonLevel
{
	enum Type
	{
		Default,
		// Locale-specific Default
		Primary,
		// Base
		Secondary,
		// Accent
		Tertiary,
		// Case
		Quaternary,
		// Punctuation
		Quinary // Identical
	};
}

enum class EFindName
{
	/** Find a name; return 0 if it doesn't exist. */
	FNAME_Find,

	/** Find a name or add it if it doesn't exist. */
	FNAME_Add,

	/** Finds a name and replaces it. Adds it if missing. This is only used by UHT and is generally not safe for threading.
	* All this really is used for is correcting the case of names. In MT conditions you might get a half-changed name.
	*/
	FNAME_Replace_Not_Safe_For_Threading,
};

namespace EBabyCuddleType
{
	enum Type
	{
		Pet,
		Food,
		Walk,
		MAX
	};
}

namespace EAttachLocation
{
	enum Type
	{
		KeepRelativeOffset,
		KeepWorldPosition,
		SnapToTarget
	};
}


namespace EEndPlayReason
{
	enum Type
	{
		ActorDestroyed,
		LevelTransition,
		EndPlayInEditor,
		RemovedFromWorld,
		Quit
	};
}

enum class ECollisionResponse
{
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX
};

enum class ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX
};

namespace ETouchIndex
{
	enum Type
	{
		Touch1,
		Touch2,
		Touch3,
		Touch4,
		Touch5,
		Touch6,
		Touch7,
		Touch8,
		Touch9,
		Touch10
	};
}

namespace EPrimalARKTributeDataType
{
	enum Type
	{
		Items,
		TamedDinos,
		CharacterData,
		MAX
	};
}

namespace ESTOFNotificationType
{
	enum Type
	{
		Death,
		TribeEliminated,
		MatchVictory,
		MatchDraw,
		MAX
	};
}

enum class EMovementMode
{
	MOVE_None,
	MOVE_Walking,
	MOVE_Falling,
	MOVE_Swimming,
	MOVE_Flying,
	MOVE_Custom,
	MOVE_MAX
};

namespace EDinoTamedOrder
{
	enum Type
	{
		SetAggressionPassive,
		SetAggressionNeutral,
		SetAggressionAggressive,
		SetAggressionAttackTarget,
		ToggleFollowMe,
		FollowMe,
		StopFollowing,
		CycleFollowDistance,
		MAX
	};
}

namespace EPrimalCharacterInputType
{
	enum Type
	{
		PrimaryFire,
		Targeting,
		AltFire,
		SwitchWeapon,
		Reload,
		Crouch,
		Prone,
		CrouchProneToggle,
		SwitchMap,
		DinoAttack
	};
}

namespace EShooterPhysMaterialType
{
	enum Type
	{
		Unknown,
		Concrete,
		Dirt,
		Water,
		Metal,
		Wood,
		Grass,
		Glass,
		Flesh,
		Leaves,
		Rock,
		Sand,
		Snow,
		MAX
	};
}

enum class EPhysicalSurface
{
	SurfaceType_Default,
	SurfaceType1,
	SurfaceType2,
	SurfaceType3,
	SurfaceType4,
	SurfaceType5,
	SurfaceType6,
	SurfaceType7,
	SurfaceType8,
	SurfaceType9,
	SurfaceType10,
	SurfaceType11,
	SurfaceType12,
	SurfaceType13,
	SurfaceType14,
	SurfaceType15,
	SurfaceType16,
	SurfaceType17,
	SurfaceType18,
	SurfaceType19,
	SurfaceType20,
	SurfaceType21,
	SurfaceType22,
	SurfaceType23,
	SurfaceType24,
	SurfaceType25,
	SurfaceType26,
	SurfaceType27,
	SurfaceType28,
	SurfaceType29,
	SurfaceType30,
	SurfaceType31,
	SurfaceType32,
	SurfaceType33,
	SurfaceType34,
	SurfaceType35,
	SurfaceType36,
	SurfaceType37,
	SurfaceType38,
	SurfaceType39,
	SurfaceType40,
	SurfaceType41,
	SurfaceType42,
	SurfaceType43,
	SurfaceType44,
	SurfaceType45,
	SurfaceType46,
	SurfaceType47,
	SurfaceType48,
	SurfaceType49,
	SurfaceType50,
	SurfaceType51,
	SurfaceType52,
	SurfaceType53,
	SurfaceType54,
	SurfaceType55,
	SurfaceType56,
	SurfaceType57,
	SurfaceType58,
	SurfaceType59,
	SurfaceType60,
	SurfaceType61,
	SurfaceType62,
	SurfaceType_Max
};

namespace EWeaponState
{
	enum Type
	{
		Idle,
		Firing,
		Reloading,
		Equipping,
		UnEquipping
	};
}

namespace EPathFollowingRequestResult
{
	enum Type
	{
		Failed,
		AlreadyAtGoal,
		RequestSuccessful
	};
}

namespace EPathFollowingResult
{
	enum Type
	{
		Success,
		Blocked,
		OffPath,
		Aborted,
		Skipped,
		Invalid
	};
}

namespace EComponentMobility
{
	enum Type
	{
		Static,
		Stationary,
		Movable
	};
}

enum class ERelativeTransformSpace
{
	RTS_World,
	RTS_Actor,
	RTS_Component
};

enum class EMoveComponentFlags
{
	MOVECOMP_NoFlags,
	MOVECOMP_IgnoreBases,
	MOVECOMP_SkipPhysicsMove,
	MOVECOMP_NeverIgnoreBlockingOverlaps,
	MOVECOMP_DoCenterOfMassCheck
};

namespace ETribeGroupPermission
{
	enum Type
	{
		STRUCTUREACTIVATE,
		INVENTORYACCESS,
		PET_ORDER,
		PET_RIDE,
		GENERAL_STRUCTUREDEMOLISH,
		GENERAL_STRUCTUREATTACHMENT,
		GENERAL_BUILDSTRUCTUREINRANGE,
		INVITEMEMBER,
		PROMOTEMEMBER,
		DEMOTEMEMBER,
		BANISHMEMBER,
		PET_UNCLAIM
	};
}

enum class ETraceTypeQuery
{
	TraceTypeQuery1,
	TraceTypeQuery2,
	TraceTypeQuery3,
	TraceTypeQuery4,
	TraceTypeQuery5,
	TraceTypeQuery6,
	TraceTypeQuery7,
	TraceTypeQuery8,
	TraceTypeQuery9,
	TraceTypeQuery10,
	TraceTypeQuery11,
	TraceTypeQuery12,
	TraceTypeQuery13,
	TraceTypeQuery14,
	TraceTypeQuery15,
	TraceTypeQuery16,
	TraceTypeQuery17,
	TraceTypeQuery18,
	TraceTypeQuery19,
	TraceTypeQuery20,
	TraceTypeQuery21,
	TraceTypeQuery22,
	TraceTypeQuery23,
	TraceTypeQuery24,
	TraceTypeQuery25,
	TraceTypeQuery26,
	TraceTypeQuery27,
	TraceTypeQuery28,
	TraceTypeQuery29,
	TraceTypeQuery30,
	TraceTypeQuery31,
	TraceTypeQuery32,
	TraceTypeQuery_MAX
};

enum class EInputEvent
{
	IE_Pressed,
	IE_Released,
	IE_Repeat,
	IE_DoubleClick,
	IE_Axis,
	IE_MAX
};

namespace ETouchType
{
	enum Type
	{
		Began,
		Moved,
		Stationary,
		Ended,
		NumTypes
	};
}

namespace EMouseCursor
{
	enum Type
	{
		None,
		Default,
		TextEditBeam,
		ResizeLeftRight,
		ResizeUpDown,
		ResizeSouthEast,
		ResizeSouthWest,
		CardinalCross,
		Crosshairs,
		Hand,
		GrabHand,
		GrabHandClosed,
		SlashedCircle,
		EyeDropper,
		TotalCursorCount
	};
}

namespace EWorldType
{
	enum Type
	{
		None,
		Game,
		Editor,
		PIE,
		Preview,
		Inactive
	};
}

enum class EObjectFlags
{
	RF_Public = 0x1,
	RF_Standalone = 0x2,
	RF_Native = 0x4,
	RF_Transactional = 0x8,
	RF_ClassDefaultObject = 0x10,
	RF_ArchetypeObject = 0x20,
	RF_Transient = 0x40,
	RF_RootSet = 0x80,
	RF_Unreachable = 0x100,
	RF_TagGarbageTemp = 0x200,
	RF_NeedLoad = 0x400,
	RF_AsyncLoading = 0x800,
	RF_NeedPostLoad = 0x1000,
	RF_NeedPostLoadSubobjects = 0x2000,
	RF_PendingKill = 0x4000,
	RF_BeginDestroyed = 0x8000,
	RF_FinishDestroyed = 0x10000,
	RF_BeingRegenerated = 0x20000,
	RF_DefaultSubObject = 0x40000,
	RF_WasLoaded = 0x80000,
	RF_TextExportTransient = 0x100000,
	RF_LoadCompleted = 0x200000,
	RF_WhiteListed = 0x400000,
	RF_AsyncLoadingRef = 0x800000,
	RF_MarkedByCooker = 0x1000000,
	RF_ForceTagExp = 0x2000000,
	RF_OlderObject = 0x4000000,
	RF_AllFlags = 0x7FFFFFF,
	RF_NoFlags = 0x0,
	RF_Load = 0x14003F,
	RF_PropagateToSubObjects = 0x69,
};

namespace EIncludeSuperFlag
{
	enum Type
	{
		ExcludeSuper,
		IncludeSuper
	};
}

namespace EAssetAvailability
{
	enum Type
	{
		DoesNotExist,
		NotAvailable,
		LocalSlow,
		LocalFast
	};
}

namespace EAssetAvailabilityProgressReportingType
{
	enum Type
	{
		ETA,
		PercentageComplete
	};
}

namespace ELevelExperienceRampType
{
	enum Type
	{
		Player,
		DinoEasy,
		DinoMedium,
		DinoHard,
		MAX
	};
}

enum class ClassCastFlags : unsigned long long
{
	CASTCLASS_None = 0x0000000000000000,
	CASTCLASS_UField = 0x0000000000000001,
	CASTCLASS_UInt8Property = 0x0000000000000002,
	CASTCLASS_UEnum = 0x0000000000000004,
	CASTCLASS_UStruct = 0x0000000000000008,
	CASTCLASS_UScriptStruct = 0x0000000000000010,
	CASTCLASS_UClass = 0x0000000000000020,
	CASTCLASS_UByteProperty = 0x0000000000000040,
	CASTCLASS_UIntProperty = 0x0000000000000080,
	CASTCLASS_UFloatProperty = 0x0000000000000100,
	CASTCLASS_UUInt64Property = 0x0000000000000200,
	CASTCLASS_UClassProperty = 0x0000000000000400,
	CASTCLASS_UUInt32Property = 0x0000000000000800,
	CASTCLASS_UInterfaceProperty = 0x0000000000001000,
	CASTCLASS_UNameProperty = 0x0000000000002000,
	CASTCLASS_UStrProperty = 0x0000000000004000,
	CASTCLASS_UProperty = 0x0000000000008000,
	CASTCLASS_UObjectProperty = 0x0000000000010000,
	CASTCLASS_UBoolProperty = 0x0000000000020000,
	CASTCLASS_UUInt16Property = 0x0000000000040000,
	CASTCLASS_UFunction = 0x0000000000080000,
	CASTCLASS_UStructProperty = 0x0000000000100000,
	CASTCLASS_UArrayProperty = 0x0000000000200000,
	CASTCLASS_UInt64Property = 0x0000000000400000,
	CASTCLASS_UDelegateProperty = 0x0000000000800000,
	CASTCLASS_UNumericProperty = 0x0000000001000000,
	CASTCLASS_UMulticastDelegateProperty = 0x0000000002000000,
	CASTCLASS_UObjectPropertyBase = 0x0000000004000000,
	CASTCLASS_UWeakObjectProperty = 0x0000000008000000,
	CASTCLASS_ULazyObjectProperty = 0x0000000010000000,
	CASTCLASS_UAssetObjectProperty = 0x0000000020000000,
	CASTCLASS_UTextProperty = 0x0000000040000000,
	CASTCLASS_UInt16Property = 0x0000000080000000,
	CASTCLASS_UDoubleProperty = 0x0000000100000000,
	CASTCLASS_UAssetClassProperty = 0x0000000200000000,
	CASTCLASS_UPackage = 0x0000000400000000,
	CASTCLASS_ULevel = 0x0000000800000000,
	CASTCLASS_AActor = 0x0000001000000000,
	CASTCLASS_APlayerController = 0x0000002000000000,
	CASTCLASS_APawn = 0x0000004000000000,
	CASTCLASS_USceneComponent = 0x0000008000000000,
	CASTCLASS_UPrimitiveComponent = 0x0000010000000000,
	CASTCLASS_USkinnedMeshComponent = 0x0000020000000000,
	CASTCLASS_USkeletalMeshComponent = 0x0000040000000000,
	CASTCLASS_UBlueprint = 0x0000080000000000,
	CASTCLASS_UDelegateFunction = 0x0000100000000000,
	CASTCLASS_UStaticMeshComponent = 0x0000200000000000,
	CASTCLASS_UMapProperty = 0x0000400000000000,
	CASTCLASS_USetProperty = 0x0000800000000000,
	CASTCLASS_UEnumProperty = 0x0001000000000000,
	CASTCLASS_AllFlags = 0xFFFFFFFFFFFFFFFF
};

enum class EName
{
	NAME_None,
	NAME_ByteProperty,
	NAME_IntProperty,
	NAME_BoolProperty,
	NAME_FloatProperty,
	NAME_ObjectProperty,
	NAME_NameProperty,
	NAME_DelegateProperty,
	NAME_ClassProperty,
	NAME_ArrayProperty,
	NAME_StructProperty,
	NAME_VectorProperty,
	NAME_RotatorProperty,
	NAME_StrProperty,
	NAME_TextProperty,
	NAME_InterfaceProperty,
	NAME_MulticastDelegateProperty,
	NAME_WeakObjectProperty,
	NAME_LazyObjectProperty,
	NAME_AssetObjectProperty,
	NAME_UInt64Property,
	NAME_UInt32Property,
	NAME_UInt16Property,
	NAME_Int64Property,
	NAME_Int16Property,
	NAME_Int8Property,
	NAME_AssetSubclassOfProperty,
	NAME_Core,
	NAME_Engine,
	NAME_Editor,
	NAME_CoreUObject,
	NAME_Cylinder,
	NAME_BoxSphereBounds,
	NAME_Sphere,
	NAME_Box,
	NAME_Vector2D,
	NAME_IntRect,
	NAME_IntPoint,
	NAME_Vector4,
	NAME_Name,
	NAME_Vector,
	NAME_Rotator,
	NAME_SHVector,
	NAME_Color,
	NAME_Plane,
	NAME_Matrix,
	NAME_LinearColor,
	NAME_AdvanceFrame,
	NAME_Pointer,
	NAME_Double,
	NAME_Quat,
	NAME_Self,
	NAME_Transform,
	NAME_Object,
	NAME_Camera,
	NAME_Actor,
	NAME_ObjectRedirector,
	NAME_ObjectArchetype,
	NAME_Class,
	NAME_State,
	NAME_TRUE,
	NAME_FALSE,
	NAME_Enum,
	NAME_Default,
	NAME_Skip,
	NAME_Input,
	NAME_Package,
	NAME_Groups,
	NAME_Interface,
	NAME_Components,
	NAME_Global,
	NAME_Super,
	NAME_Outer,
	NAME_Map,
	NAME_Role,
	NAME_RemoteRole,
	NAME_PersistentLevel,
	NAME_TheWorld,
	NAME_PackageMetaData,
	NAME_InitialState,
	NAME_Game,
	NAME_SelectionColor,
	NAME_UI,
	NAME_ExecuteUbergraph,
	NAME_DeviceID,
	NAME_RootStat,
	NAME_MoveActor,
	NAME_All,
	NAME_MeshEmitterVertexColor,
	NAME_TextureOffsetParameter,
	NAME_TextureScaleParameter,
	NAME_ImpactVel,
	NAME_SlideVel,
	NAME_TextureOffset1Parameter,
	NAME_MeshEmitterDynamicParameter,
	NAME_ExpressionInput,
	NAME_Untitled,
	NAME_Timer,
	NAME_Team,
	NAME_Low,
	NAME_High,
	NAME_NetworkGUID,
	NAME_GameThread,
	NAME_RenderThread,
	NAME_OtherChildren,
	NAME_Location,
	NAME_Rotation,
	NAME_BSP,
	NAME_EditorGameAgnostic,
	NAME_DGram,
	NAME_Stream,
	NAME_GameNetDriver,
	NAME_PendingNetDriver,
	NAME_BeaconNetDriver,
	NAME_FlushNetDormancy,
	NAME_Linear,
	NAME_Point,
	NAME_Aniso,
	NAME_LightMapResolution,
	NAME_UnGrouped,
	NAME_VoiceChat,
	NAME_Playing,
	NAME_Spectating,
	NAME_Inactive,
	NAME_PerfWarning,
	NAME_Info,
	NAME_Init,
	NAME_Exit,
	NAME_Cmd,
	NAME_Warning,
	NAME_Error,
	NAME_FontCharacter,
	NAME_InitChild2StartBone,
	NAME_SoundCueLocalized,
	NAME_SoundCue,
	NAME_RawDistributionFloat,
	NAME_RawDistributionVector,
	NAME_InterpCurveFloat,
	NAME_InterpCurveVector2D,
	NAME_InterpCurveVector,
	NAME_InterpCurveTwoVectors,
	NAME_InterpCurveQuat,
	NAME_AI,
	NAME_NavMesh,
	NAME_PerformanceCapture,
	NAME_MaxHardcodedNameIndex
};

enum ESocketType
{
	SOCKTYPE_Unknown = 0x0,
	SOCKTYPE_Datagram = 0x1,
	SOCKTYPE_Streaming = 0x2,
};

namespace ESocketInternalState
{
	enum Param
	{
		CanRead,
		CanWrite,
		HasError
	};

	enum Return
	{
		Yes,
		No,
		EncounteredError
	};
}

enum ESocketConnectionState
{
	SCS_NotConnected,
	SCS_Connected,
	SCS_ConnectionError
};

namespace ESocketReceiveFlags
{
	enum Type
	{
		None,
		Peek,
		WaitAll
	};
}

namespace EEngramGroup
{
	enum Type
	{
		ARK_PRIME = 0x2,
		ARK_SCORCHEDEARTH = 0x4,
		ARK_TEK = 0x8,
		ARK_UNLEARNED = 0x10,
		ARK_ABERRATION = 0x20,
		MAX = 0x21
	};
}
