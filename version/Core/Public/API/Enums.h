#pragma once

enum ECollisionChannel
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

enum EMovementMode
{
	MOVE_None,
	MOVE_Walking,
	MOVE_Falling,
	MOVE_Swimming,
	MOVE_Flying,
	MOVE_Custom,
	MOVE_MAX
};

enum class EPhysicalSurface
{
	SurfaceType_Default = 0x0,
	SurfaceType1 = 0x1,
	SurfaceType2 = 0x2,
	SurfaceType3 = 0x3,
	SurfaceType4 = 0x4,
	SurfaceType5 = 0x5,
	SurfaceType6 = 0x6,
	SurfaceType7 = 0x7,
	SurfaceType8 = 0x8,
	SurfaceType9 = 0x9,
	SurfaceType10 = 0xA,
	SurfaceType11 = 0xB,
	SurfaceType12 = 0xC,
	SurfaceType13 = 0xD,
	SurfaceType14 = 0xE,
	SurfaceType15 = 0xF,
	SurfaceType16 = 0x10,
	SurfaceType17 = 0x11,
	SurfaceType18 = 0x12,
	SurfaceType19 = 0x13,
	SurfaceType20 = 0x14,
	SurfaceType21 = 0x15,
	SurfaceType22 = 0x16,
	SurfaceType23 = 0x17,
	SurfaceType24 = 0x18,
	SurfaceType25 = 0x19,
	SurfaceType26 = 0x1A,
	SurfaceType27 = 0x1B,
	SurfaceType28 = 0x1C,
	SurfaceType29 = 0x1D,
	SurfaceType30 = 0x1E,
	SurfaceType31 = 0x1F,
	SurfaceType32 = 0x20,
	SurfaceType33 = 0x21,
	SurfaceType34 = 0x22,
	SurfaceType35 = 0x23,
	SurfaceType36 = 0x24,
	SurfaceType37 = 0x25,
	SurfaceType38 = 0x26,
	SurfaceType39 = 0x27,
	SurfaceType40 = 0x28,
	SurfaceType41 = 0x29,
	SurfaceType42 = 0x2A,
	SurfaceType43 = 0x2B,
	SurfaceType44 = 0x2C,
	SurfaceType45 = 0x2D,
	SurfaceType46 = 0x2E,
	SurfaceType47 = 0x2F,
	SurfaceType48 = 0x30,
	SurfaceType49 = 0x31,
	SurfaceType50 = 0x32,
	SurfaceType51 = 0x33,
	SurfaceType52 = 0x34,
	SurfaceType53 = 0x35,
	SurfaceType54 = 0x36,
	SurfaceType55 = 0x37,
	SurfaceType56 = 0x38,
	SurfaceType57 = 0x39,
	SurfaceType58 = 0x3A,
	SurfaceType59 = 0x3B,
	SurfaceType60 = 0x3C,
	SurfaceType61 = 0x3D,
	SurfaceType62 = 0x3E,
	SurfaceType_Max = 0x3F,
};

enum class ETraceTypeQuery
{
	TraceTypeQuery1 = 0x0,
	TraceTypeQuery2 = 0x1,
	TraceTypeQuery3 = 0x2,
	TraceTypeQuery4 = 0x3,
	TraceTypeQuery5 = 0x4,
	TraceTypeQuery6 = 0x5,
	TraceTypeQuery7 = 0x6,
	TraceTypeQuery8 = 0x7,
	TraceTypeQuery9 = 0x8,
	TraceTypeQuery10 = 0x9,
	TraceTypeQuery11 = 0xA,
	TraceTypeQuery12 = 0xB,
	TraceTypeQuery13 = 0xC,
	TraceTypeQuery14 = 0xD,
	TraceTypeQuery15 = 0xE,
	TraceTypeQuery16 = 0xF,
	TraceTypeQuery17 = 0x10,
	TraceTypeQuery18 = 0x11,
	TraceTypeQuery19 = 0x12,
	TraceTypeQuery20 = 0x13,
	TraceTypeQuery21 = 0x14,
	TraceTypeQuery22 = 0x15,
	TraceTypeQuery23 = 0x16,
	TraceTypeQuery24 = 0x17,
	TraceTypeQuery25 = 0x18,
	TraceTypeQuery26 = 0x19,
	TraceTypeQuery27 = 0x1A,
	TraceTypeQuery28 = 0x1B,
	TraceTypeQuery29 = 0x1C,
	TraceTypeQuery30 = 0x1D,
	TraceTypeQuery31 = 0x1E,
	TraceTypeQuery32 = 0x1F,
	TraceTypeQuery_MAX = 0x20,
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

enum EName
{
	NAME_None = 0x0,
	NAME_ByteProperty = 0x1,
	NAME_IntProperty = 0x2,
	NAME_BoolProperty = 0x3,
	NAME_FloatProperty = 0x4,
	NAME_ObjectProperty = 0x5,
	NAME_NameProperty = 0x6,
	NAME_DelegateProperty = 0x7,
	NAME_ClassProperty = 0x8,
	NAME_ArrayProperty = 0x9,
	NAME_StructProperty = 0xA,
	NAME_VectorProperty = 0xB,
	NAME_RotatorProperty = 0xC,
	NAME_StrProperty = 0xD,
	NAME_TextProperty = 0xE,
	NAME_InterfaceProperty = 0xF,
	NAME_MulticastDelegateProperty = 0x10,
	NAME_WeakObjectProperty = 0x11,
	NAME_LazyObjectProperty = 0x12,
	NAME_AssetObjectProperty = 0x13,
	NAME_UInt64Property = 0x14,
	NAME_UInt32Property = 0x15,
	NAME_UInt16Property = 0x16,
	NAME_Int64Property = 0x17,
	NAME_Int16Property = 0x19,
	NAME_Int8Property = 0x1A,
	NAME_AssetSubclassOfProperty = 0x1B,
	NAME_Core = 0x1E,
	NAME_Engine = 0x1F,
	NAME_Editor = 0x20,
	NAME_CoreUObject = 0x21,
	NAME_Cylinder = 0x32,
	NAME_BoxSphereBounds = 0x33,
	NAME_Sphere = 0x34,
	NAME_Box = 0x35,
	NAME_Vector2D = 0x36,
	NAME_IntRect = 0x37,
	NAME_IntPoint = 0x38,
	NAME_Vector4 = 0x39,
	NAME_Name = 0x3A,
	NAME_Vector = 0x3B,
	NAME_Rotator = 0x3C,
	NAME_SHVector = 0x3D,
	NAME_Color = 0x3E,
	NAME_Plane = 0x3F,
	NAME_Matrix = 0x40,
	NAME_LinearColor = 0x41,
	NAME_AdvanceFrame = 0x42,
	NAME_Pointer = 0x43,
	NAME_Double = 0x44,
	NAME_Quat = 0x45,
	NAME_Self = 0x46,
	NAME_Transform = 0x47,
	NAME_Object = 0x64,
	NAME_Camera = 0x65,
	NAME_Actor = 0x66,
	NAME_ObjectRedirector = 0x67,
	NAME_ObjectArchetype = 0x68,
	NAME_Class = 0x69,
	NAME_State = 0xC8,
	NAME_TRUE = 0xC9,
	NAME_FALSE = 0xCA,
	NAME_Enum = 0xCB,
	NAME_Default = 0xCC,
	NAME_Skip = 0xCD,
	NAME_Input = 0xCE,
	NAME_Package = 0xCF,
	NAME_Groups = 0xD0,
	NAME_Interface = 0xD1,
	NAME_Components = 0xD2,
	NAME_Global = 0xD3,
	NAME_Super = 0xD4,
	NAME_Outer = 0xD5,
	NAME_Map = 0xD6,
	NAME_Role = 0xD7,
	NAME_RemoteRole = 0xD8,
	NAME_PersistentLevel = 0xD9,
	NAME_TheWorld = 0xDA,
	NAME_PackageMetaData = 0xDB,
	NAME_InitialState = 0xDC,
	NAME_Game = 0xDD,
	NAME_SelectionColor = 0xDE,
	NAME_UI = 0xDF,
	NAME_ExecuteUbergraph = 0xE0,
	NAME_DeviceID = 0xE1,
	NAME_RootStat = 0xE2,
	NAME_MoveActor = 0xE3,
	NAME_All = 0xE6,
	NAME_MeshEmitterVertexColor = 0xE7,
	NAME_TextureOffsetParameter = 0xE8,
	NAME_TextureScaleParameter = 0xE9,
	NAME_ImpactVel = 0xEA,
	NAME_SlideVel = 0xEB,
	NAME_TextureOffset1Parameter = 0xEC,
	NAME_MeshEmitterDynamicParameter = 0xED,
	NAME_ExpressionInput = 0xEE,
	NAME_Untitled = 0xEF,
	NAME_Timer = 0xF0,
	NAME_Team = 0xF1,
	NAME_Low = 0xF2,
	NAME_High = 0xF3,
	NAME_NetworkGUID = 0xF4,
	NAME_GameThread = 0xF5,
	NAME_RenderThread = 0xF6,
	NAME_OtherChildren = 0xF7,
	NAME_Location = 0xF8,
	NAME_Rotation = 0xF9,
	NAME_BSP = 0xFA,
	NAME_EditorGameAgnostic = 0xFB,
	NAME_DGram = 0x118,
	NAME_Stream = 0x119,
	NAME_GameNetDriver = 0x11A,
	NAME_PendingNetDriver = 0x11B,
	NAME_BeaconNetDriver = 0x11C,
	NAME_FlushNetDormancy = 0x11D,
	NAME_Linear = 0x12C,
	NAME_Point = 0x12D,
	NAME_Aniso = 0x12E,
	NAME_LightMapResolution = 0x12F,
	NAME_UnGrouped = 0x137,
	NAME_VoiceChat = 0x138,
	NAME_Playing = 0x140,
	NAME_Spectating = 0x142,
	NAME_Inactive = 0x145,
	NAME_PerfWarning = 0x15E,
	NAME_Info = 0x15F,
	NAME_Init = 0x160,
	NAME_Exit = 0x161,
	NAME_Cmd = 0x162,
	NAME_Warning = 0x163,
	NAME_Error = 0x164,
	NAME_FontCharacter = 0x190,
	NAME_InitChild2StartBone = 0x191,
	NAME_SoundCueLocalized = 0x192,
	NAME_SoundCue = 0x193,
	NAME_RawDistributionFloat = 0x194,
	NAME_RawDistributionVector = 0x195,
	NAME_InterpCurveFloat = 0x196,
	NAME_InterpCurveVector2D = 0x197,
	NAME_InterpCurveVector = 0x198,
	NAME_InterpCurveTwoVectors = 0x199,
	NAME_InterpCurveQuat = 0x19A,
	NAME_AI = 0x1C2,
	NAME_NavMesh = 0x1C3,
	NAME_PerformanceCapture = 0x1F4,
	NAME_MaxHardcodedNameIndex = 0x1F5,
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

namespace EDrawDebugTrace
{
	enum Type
	{
		None,
		ForOneFrame,
		ForDuration,
		Persistent
	};
}

enum EObjectTypeQuery
{
	ObjectTypeQuery1,
	ObjectTypeQuery2,
	ObjectTypeQuery3,
	ObjectTypeQuery4,
	ObjectTypeQuery5,
	ObjectTypeQuery6,
	ObjectTypeQuery7,
	ObjectTypeQuery8,
	ObjectTypeQuery9,
	ObjectTypeQuery10,
	ObjectTypeQuery11,
	ObjectTypeQuery12,
	ObjectTypeQuery13,
	ObjectTypeQuery14,
	ObjectTypeQuery15,
	ObjectTypeQuery16,
	ObjectTypeQuery17,
	ObjectTypeQuery18,
	ObjectTypeQuery19,
	ObjectTypeQuery20,
	ObjectTypeQuery21,
	ObjectTypeQuery22,
	ObjectTypeQuery23,
	ObjectTypeQuery24,
	ObjectTypeQuery25,
	ObjectTypeQuery26,
	ObjectTypeQuery27,
	ObjectTypeQuery28,
	ObjectTypeQuery29,
	ObjectTypeQuery30,
	ObjectTypeQuery31,
	ObjectTypeQuery32,
	ObjectTypeQuery_MAX,
};

namespace ECollisionEnabled
{
	enum Type
	{
		NoCollision,
		QueryOnly,
		QueryAndPhysics
	};
}

enum ERadialImpulseFalloff
{
	RIF_Constant,
	RIF_Linear,
	RIF_MAX
};

namespace EHttpRequestStatus
{
	enum Type
	{
		NotStarted = 0x0,
		Processing = 0x1,
		Failed = 0x2,
		Succeeded = 0x3,
	};
}

namespace EServerOctreeGroup
{
	enum Type
	{
		STASISCOMPONENTS = 0x0,
		PLAYERPAWNS = 0x1,
		DINOPAWNS = 0x2,
		PAWNS = 0x3,
		STRUCTURES = 0x4,
		TARGETABLEACTORS = 0x5,
		SPATIALNETWORKEDACTORS = 0x6,
		SPATIALNETWORKEDACTORS_DORMANT = 0x7,
		ALL_SPATIAL = 0x8,
		THERMALSTRUCTURES = 0x9,
		STRUCTURES_CORE = 0xA,
		DINOPAWNS_TAMED = 0xB,
		PLAYERS_AND_TAMED_DINOS = 0xC,
		DINOFOODCONTAINER = 0xD,
		GRENADES = 0xE,
		TREESAPTAPS = 0xF,
		LARGEUNSTASISRANGE = 0x10,
		TRAPS = 0x11,
		MAX = 0x12,
	};
}
