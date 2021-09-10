#pragma once

#pragma warning(push)
#pragma warning(disable : 4369)

enum class USetSpanCondition
{
	USET_SPAN_NOT_CONTAINED = 0x0,
	USET_SPAN_CONTAINED = 0x1,
	USET_SPAN_SIMPLE = 0x2,
	USET_SPAN_CONDITION_COUNT = 0x3,
};

enum class EThreadPriority
{
	TPri_Normal = 0x0,
	TPri_AboveNormal = 0x1,
	TPri_BelowNormal = 0x2,
	TPri_Highest = 0x3,
	TPri_Lowest = 0x4,
	TPri_SlightlyBelowNormal = 0x5,
};

namespace EHostSessionPanel
{
	enum Type
	{
		GENERAL = 0x0,
		ADVANCED = 0x1,
		ENGRAMS = 0x2,
		MAX = 0x3,
	};
}

namespace EDelegateInstanceType
{
	enum Type
	{
		SharedPointerMethod = 0x0,
		ThreadSafeSharedPointerMethod = 0x1,
		RawMethod = 0x2,
		UFunction = 0x3,
		UObjectMethod = 0x4,
		Raw = 0x5,
		Functor = 0x6,
	};
}

namespace ELocalizationResourceSource
{
	enum Type
	{
		ManifestArchive = 0x0,
		LocalizationResource = 0x1,
	};
}

namespace EPopUpOrientation
{
	enum Type
	{
		Horizontal = 0x0,
		Vertical = 0x1,
	};
}

enum class EConsoleVariableFlags
{
	ECVF_Default = 0x0,
	ECVF_Cheat = 0x1,
	ECVF_Changed = 0x2,
	ECVF_ReadOnly = 0x4,
	ECVF_Unregistered = 0x8,
	ECVF_CreatedFromIni = 0x10,
	ECVF_RenderThreadSafe = 0x20,
	ECVF_Scalability = 0x40,
	ECVF_ScalabilityGroup = 0x80,
	ECVF_SetByMask = 0xff000000,
};

namespace FWindowsOSVersionHelper
{
	enum ErrorCodes
	{
		SUCCEEDED = 0x0,
		ERROR_UNKNOWNVERSION = 0x1,
		ERROR_GETPRODUCTINFO_FAILED = 0x2,
		ERROR_GETVERSIONEX_FAILED = 0x4,
	};
}

enum class ERHIZBuffer
{
	FarPlane = 0x0,
	NearPlane = 0x1,
	IsInverted = 0x1,
};

namespace EWindowTitleAlignment
{
	enum Type
	{
		Left = 0x0,
		Center = 0x1,
		Right = 0x2,
	};
}

enum class EModuleChangeReason
{
	ModuleLoaded = 0x0,
	ModuleUnloaded = 0x1,
	PluginDirectoryChanged = 0x2,
};

namespace ETargetDeviceFeatures
{
	enum Type
	{
		MultiLaunch = 0x0,
		PowerOff = 0x1,
		PowerOn = 0x2,
		ProcessSnapshot = 0x3,
		Reboot = 0x4,
	};
}

namespace FDelegateHandle
{
	enum EGenerateNewHandleType
	{
		GenerateNewHandle = 0x0,
	};
}

enum class EResourceLockMode
{
	RLM_ReadOnly = 0x0,
	RLM_WriteOnly = 0x1,
	RLM_PrepRead = 0x2,
	RLM_DoRead = 0x3,
	RLM_Num = 0x4,
};

namespace ELogTimes
{
	enum Type
	{
		None = 0x0,
		UTC = 0x1,
		SinceGStartTime = 0x2,
	};
}

enum class ECastToken
{
	CST_ObjectToInterface = 0x46,
	CST_ObjectToBool = 0x47,
	CST_InterfaceToBool = 0x49,
	CST_Max = 0xff,
};

namespace ERangeBoundTypes
{
	enum Type
	{
		Exclusive = 0x0,
		Inclusive = 0x1,
		Open = 0x2,
	};
}

namespace EMouseButtons
{
	enum Type
	{
		Left = 0x0,
		Middle = 0x1,
		Right = 0x2,
		Thumb01 = 0x3,
		Thumb02 = 0x4,
		Invalid = 0x5,
	};
}

enum class EShadowMapFlags
{
	SMF_None = 0x0,
	SMF_Streamed = 0x1,
};

namespace EMaterialShaderMapUsage
{
	enum Type
	{
		Default = 0x0,
		LightmassExportEmissive = 0x1,
		LightmassExportDiffuse = 0x2,
		LightmassExportOpacity = 0x3,
		LightmassExportNormal = 0x4,
	};
}

namespace EControllerButtons
{
	enum Type
	{
		LeftAnalogY = 0x0,
		LeftAnalogX = 0x1,
		RightAnalogY = 0x2,
		RightAnalogX = 0x3,
		LeftTriggerAnalog = 0x4,
		RightTriggerAnalog = 0x5,
		FaceButtonBottom = 0x6,
		FaceButtonRight = 0x7,
		FaceButtonLeft = 0x8,
		FaceButtonTop = 0x9,
		LeftShoulder = 0xa,
		RightShoulder = 0xb,
		SpecialLeft = 0xc,
		SpecialRight = 0xd,
		LeftThumb = 0xe,
		RightThumb = 0xf,
		LeftTriggerThreshold = 0x10,
		RightTriggerThreshold = 0x11,
		DPadUp = 0x12,
		DPadDown = 0x13,
		DPadLeft = 0x14,
		DPadRight = 0x15,
		LeftStickUp = 0x16,
		LeftStickDown = 0x17,
		LeftStickLeft = 0x18,
		LeftStickRight = 0x19,
		RightStickUp = 0x1a,
		RightStickDown = 0x1b,
		RightStickLeft = 0x1c,
		RightStickRight = 0x1d,
		Touch0 = 0x1e,
		Touch1 = 0x1f,
		Touch2 = 0x20,
		Touch3 = 0x21,
		BackLeft = 0x22,
		BackRight = 0x23,
		GlobalMenu = 0x24,
		GlobalView = 0x25,
		GlobalPause = 0x26,
		GlobalPlay = 0x27,
		GlobalBack = 0x28,
		AndroidBack = 0x29,
		Invalid = 0x2a,
	};
}

namespace EMessageDataState
{
	enum Type
	{
		Complete = 0x0,
		Incomplete = 0x1,
		Invalid = 0x2,
	};
}

enum class ECustomSortAlternateIndexMode
{
	CSAIM_Auto = 0x0,
	CSAIM_Left = 0x1,
	CSAIM_Right = 0x2,
};

enum class ELightMapInteractionType
{
	LMIT_None = 0x0,
	LMIT_Texture = 0x2,
	LMIT_NumBits = 0x3,
};

enum class ETrackActiveCondition
{
	ETAC_Always = 0x0,
	ETAC_GoreEnabled = 0x1,
	ETAC_GoreDisabled = 0x2,
	ETAC_MAX = 0x3,
};

enum class EClearBinding
{
	ENoneBound = 0x0,
	EColorBound = 0x1,
	EDepthStencilBound = 0x2,
};

namespace FGenericPlatformMemory
{
	enum EMemoryCounterRegion
	{
		MCR_Invalid = 0x0,
		MCR_Physical = 0x1,
		MCR_GPU = 0x2,
		MCR_GPUSystem = 0x3,
		MCR_TexturePool = 0x4,
		MCR_MAX = 0x5,
	};
}

namespace EDrawDynamicFlags
{
	enum Type
	{
		ForceLowestLOD = 0x1,
	};
}

namespace EWindowActivation
{
	enum Type
	{
		Activate = 0x0,
		ActivateByMouse = 0x1,
		Deactivate = 0x2,
	};
}

namespace EWindowZone
{
	enum Type
	{
		NotInWindow = 0x0,
		TopLeftBorder = 0x1,
		TopBorder = 0x2,
		TopRightBorder = 0x3,
		LeftBorder = 0x4,
		ClientArea = 0x5,
		RightBorder = 0x6,
		BottomLeftBorder = 0x7,
		BottomBorder = 0x8,
		BottomRightBorder = 0x9,
		TitleBar = 0xa,
		MinimizeButton = 0xb,
		MaximizeButton = 0xc,
		CloseButton = 0xd,
		SysMenu = 0xe,
	};
}

enum class EInterpCurveMode
{
	CIM_Linear = 0x0,
	CIM_CurveAuto = 0x1,
	CIM_Constant = 0x2,
	CIM_CurveUser = 0x3,
	CIM_CurveBreak = 0x4,
	CIM_CurveAutoClamped = 0x5,
	CIM_Unknown = 0x6,
};

namespace EMeshComponentUpdateFlag
{
	enum Type
	{
		AlwaysTickPoseAndRefreshBones = 0x0,
		AlwaysTickPose = 0x1,
		OnlyTickPoseWhenRendered = 0x2,
		LocalControlTickPoseAndRefreshBones = 0x3,
	};
}

enum class EVerticalAlignment
{
	VAlign_Fill = 0x0,
	VAlign_Top = 0x1,
	VAlign_Center = 0x2,
	VAlign_Bottom = 0x3,
};

enum class EMovementMode
{
	MOVE_None = 0x0,
	MOVE_Walking = 0x1,
	MOVE_Falling = 0x2,
	MOVE_Swimming = 0x3,
	MOVE_Flying = 0x4,
	MOVE_Custom = 0x5,
	MOVE_MAX = 0x6,
};

namespace FWindowsPlatformMemory
{
	enum EMemoryCounterRegion
	{
		MCR_Invalid = 0x0,
		MCR_Physical = 0x1,
		MCR_GPU = 0x2,
		MCR_GPUSystem = 0x3,
		MCR_TexturePool = 0x4,
		MCR_SamplePlatformSpecifcMemoryRegion = 0x5,
		MCR_MAX = 0x6,
	};
}

namespace EWindowAction
{
	enum Type
	{
		ClickedNonClientArea = 0x1,
		Maximize = 0x2,
		Restore = 0x3,
		WindowMenu = 0x4,
	};
}

namespace EDropEffect
{
	enum Type
	{
		None = 0x0,
		Copy = 0x1,
		Move = 0x2,
		Link = 0x3,
	};
}

enum class ETriangleSortAxis
{
	TSA_X_Axis = 0x0,
	TSA_Y_Axis = 0x1,
	TSA_Z_Axis = 0x2,
	TSA_MAX = 0x3,
};

namespace EGestureEvent
{
	enum Type
	{
		None = 0x0,
		Scroll = 0x1,
		Magnify = 0x2,
		Swipe = 0x3,
		Rotate = 0x4,
		Count = 0x5,
	};
}

namespace EOnlineSharingReadCategory
{
	enum Type
	{
		None = 0x0,
		Posts = 0x1,
		Friends = 0x2,
		Mailbox = 0x4,
		OnlineStatus = 0x8,
		ProfileInfo = 0x10,
		LocationInfo = 0x20,
		Default = 0x30,
	};
}

namespace EExportedDeclaration
{
	enum Type
	{
		Local = 0x0,
		Member = 0x1,
		Parameter = 0x2,
	};
}

namespace EBrowseReturnVal
{
	enum Type
	{
		Success = 0x0,
		Failure = 0x1,
		Pending = 0x2,
	};
}

namespace EGuidFormats
{
	enum Type
	{
		Digits = 0x0,
		DigitsWithHyphens = 0x1,
		DigitsWithHyphensInBraces = 0x2,
		DigitsWithHyphensInParentheses = 0x3,
		HexValuesInBraces = 0x4,
		UniqueObjectGuid = 0x5,
	};
}

enum class ELandscapeSetupErrors
{
	LSE_None = 0x0,
	LSE_NoLandscapeInfo = 0x1,
	LSE_CollsionXY = 0x2,
	LSE_NoLayerInfo = 0x3,
	LSE_MAX = 0x4,
};

enum class ETwitterRequestMethod
{
	TRM_Get = 0x0,
	TRM_Post = 0x1,
	TRM_Delete = 0x2,
	TRM_MAX = 0x3,
};

namespace EQueueMode
{
	enum Type
	{
		Mpsc = 0x0,
		Spsc = 0x1,
	};
}

enum class EClassFlags
{
	CLASS_None = 0x0,
	CLASS_Abstract = 0x1,
	CLASS_DefaultConfig = 0x2,
	CLASS_Config = 0x4,
	CLASS_Transient = 0x8,
	CLASS_Parsed = 0x10,
	CLASS_Localized = 0x20,
	CLASS_AdvancedDisplay = 0x40,
	CLASS_Native = 0x80,
	CLASS_NoExport = 0x100,
	CLASS_NotPlaceable = 0x200,
	CLASS_PerObjectConfig = 0x400,
	CLASS_PointersDefaultToWeak = 0x800,
	CLASS_EditInlineNew = 0x1000,
	CLASS_CollapseCategories = 0x2000,
	CLASS_Interface = 0x4000,
	CLASS_CustomConstructor = 0x8000,
	CLASS_Const = 0x10000,
	CLASS_PointersDefaultToAutoWeak = 0x20000,
	CLASS_CompiledFromBlueprint = 0x40000,
	CLASS_MinimalAPI = 0x80000,
	CLASS_RequiredAPI = 0x100000,
	CLASS_DefaultToInstanced = 0x200000,
	CLASS_TokenStreamAssembled = 0x400000,
	CLASS_HasInstancedReference = 0x800000,
	CLASS_Hidden = 0x1000000,
	CLASS_Deprecated = 0x2000000,
	CLASS_HideDropDown = 0x4000000,
	CLASS_Intrinsic = 0x10000000,
	CLASS_Temporary = 0x20000000,
	CLASS_ConfigDoNotCheckDefaults = 0x40000000,
	CLASS_NewerVersionExists = 0x80000000,
	CLASS_Inherit = 0x42a30e2e,
	CLASS_RecompilerClear = 0x52e30faf,
	CLASS_ShouldNeverBeLoaded = 0x10400080,
	CLASS_ScriptInherit = 0x42a33e2e,
	CLASS_SaveInCompiledInClasses = 0x57bb7eef,
	CLASS_AllFlags = 0xff,
};

namespace ELogVerbosity
{
	enum Type
	{
		NoLogging = 0x0,
		Fatal = 0x1,
		Error = 0x2,
		Warning = 0x3,
		Display = 0x4,
		Log = 0x5,
		Verbose = 0x6,
		VeryVerbose = 0x7,
		All = 0x7,
		NumVerbosity = 0x8,
		VerbosityMask = 0xf,
		SetColor = 0x40,
		BreakOnLog = 0x80,
	};
}

namespace EMonthOfYear
{
	enum Type
	{
		January = 0x1,
		February = 0x2,
		March = 0x3,
		April = 0x4,
		May = 0x5,
		June = 0x6,
		July = 0x7,
		August = 0x8,
		September = 0x9,
		October = 0xa,
		November = 0xb,
		December = 0xc,
	};
}

enum class EMemZeroed
{
	MEM_Zeroed = 0x1,
};

enum class EMemOned
{
	MEM_Oned = 0x1,
};

namespace ENetMoveType
{
	enum Type
	{
		ServerMove = 0x0,
		ServerMoveOld = 0x1,
		ServerMoveWithRotation = 0x2,
		ServerMoveOldWithRotation = 0x3,
		ServerMoveOnlyRotation = 0x4,
	};
}

namespace ELaunchVerb
{
	enum Type
	{
		Open = 0x0,
		Edit = 0x1,
	};
}

enum class EMaterialShadingModel
{
	MSM_Unlit = 0x0,
	MSM_DefaultLit = 0x1,
	MSM_Subsurface = 0x2,
	MSM_PreintegratedSkin = 0x3,
	MSM_ClearCoat = 0x4,
	MSM_SubsurfaceProfile = 0x5,
	MSM_TwoSidedFoliage = 0x6,
	MSM_MAX = 0x7,
};

namespace EAutomationTestFlags
{
	enum Type
	{
		ATF_None = 0x0,
		ATF_Editor = 0x1,
		ATF_Game = 0x2,
		ATF_Commandlet = 0x4,
		ATF_ApplicationMask = 0x7,
		ATF_NonNullRHI = 0x100,
		ATF_RequiresUser = 0x200,
		ATF_FeatureMask = 0x300,
		ATF_VisualCommandlet = 0x10000,
		ATF_ActionMask = 0x10000,
		ATF_SmokeTest = 0x1000000,
	};
}

enum class EUserDefinedStructureStatus
{
	UDSS_UpToDate = 0x0,
	UDSS_Dirty = 0x1,
	UDSS_Error = 0x2,
	UDSS_Duplicate = 0x3,
	UDSS_MAX = 0x4,
};

namespace EAutomationTestType
{
	enum Type
	{
		ATT_SmokeTest = 0x1,
		ATT_NormalTest = 0x2,
		ATT_StressTest = 0x4,
	};
}

enum class ETextureMipCount
{
	TMC_ResidentMips = 0x0,
	TMC_AllMips = 0x1,
	TMC_AllMipsBiased = 0x2,
	TMC_MAX = 0x3,
};

namespace EDateTimeStyle
{
	enum Type
	{
		Default = 0x0,
		Short = 0x1,
		Medium = 0x2,
		Long = 0x3,
		Full = 0x4,
	};
}

enum class ESteamAPICallFailure
{
	k_ESteamAPICallFailureNone = 0xff,
	k_ESteamAPICallFailureSteamGone = 0x0,
	k_ESteamAPICallFailureNetworkFailure = 0x1,
	k_ESteamAPICallFailureInvalidHandle = 0x2,
	k_ESteamAPICallFailureMismatchedCallback = 0x3,
};

enum class EMeshScreenAlignment
{
	PSMA_MeshFaceCameraWithRoll = 0x0,
	PSMA_MeshFaceCameraWithSpin = 0x1,
	PSMA_MeshFaceCameraWithLockedAxis = 0x2,
	PSMA_MAX = 0x3,
};

enum class EStreamingStatus
{
	LEVEL_Unloaded = 0x0,
	LEVEL_UnloadedButStillAround = 0x1,
	LEVEL_Loading = 0x2,
	LEVEL_Loaded = 0x3,
	LEVEL_MakingVisible = 0x4,
	LEVEL_Visible = 0x5,
	LEVEL_Preloading = 0x6,
};

enum class EDistanceFieldTwoSidedOverride
{
	DFTSO_NotOverriden = 0x0,
	DFTSO_OverrideTrue = 0x1,
	DFTSO_OverrideFalse = 0x2,
	DFTSO_Max = 0x3,
};

enum class ETwitterIntegrationDelegate
{
	TID_AuthorizeComplete = 0x0,
	TID_TweetUIComplete = 0x1,
	TID_RequestComplete = 0x2,
	TID_MAX = 0x3,
};

enum class EStatType
{
	STATTYPE_CycleCounter = 0x0,
	STATTYPE_AccumulatorFLOAT = 0x1,
	STATTYPE_AccumulatorDWORD = 0x2,
	STATTYPE_CounterFLOAT = 0x3,
	STATTYPE_CounterDWORD = 0x4,
	STATTYPE_MemoryCounter = 0x5,
	STATTYPE_Error = 0x6,
};

enum class ECanBeCharacterBase
{
	ECB_No = 0x0,
	ECB_Yes = 0x1,
	ECB_Owner = 0x2,
	ECB_MAX = 0x3,
};

namespace FRHIResourceTableEntry
{
	enum EResourceTableDefinitions
	{
		RTD_NumBits_UniformBufferIndex = 0x8,
		RTD_NumBits_ResourceIndex = 0x10,
	};
}

enum class EGCReferenceType
{
	GCRT_None = 0x0,
	GCRT_Object = 0x1,
	GCRT_PersistentObject = 0x2,
	GCRT_ArrayObject = 0x3,
	GCRT_ArrayStruct = 0x4,
	GCRT_FixedArray = 0x5,
	GCRT_AddStructReferencedObjects = 0x6,
	GCRT_AddReferencedObjects = 0x7,
	GCRT_EndOfStream = 0x8,
};

namespace ETextJustify
{
	enum Type
	{
		Left = 0x0,
		Center = 0x1,
		Right = 0x2,
	};
}

namespace EAttachLocation
{
	enum Type
	{
		KeepRelativeOffset = 0x0,
		KeepWorldPosition = 0x1,
		SnapToTarget = 0x2,
	};
}

namespace UNavigationSystem
{
	enum ERegistrationResult
	{
		RegistrationError = 0x0,
		RegistrationFailed_DataPendingKill = 0x1,
		RegistrationFailed_AgentAlreadySupported = 0x2,
		RegistrationFailed_AgentNotValid = 0x3,
		RegistrationSuccessful = 0x4,
	};
}

enum class ESoundDistanceCalc
{
	SOUNDDISTANCE_Normal = 0x0,
	SOUNDDISTANCE_InfiniteXYPlane = 0x1,
	SOUNDDISTANCE_InfiniteXZPlane = 0x2,
	SOUNDDISTANCE_InfiniteYZPlane = 0x3,
	SOUNDDISTANCE_MAX = 0x4,
};

namespace ERecastPartitioning
{
	enum Type
	{
		Monotone = 0x0,
		Watershed = 0x1,
		ChunkyMonotone = 0x2,
	};
}

enum class EVoiceChatAttenuationModel
{
	None = 0x0,
	InverseByDistance = 0x1,
	LinearByDistance = 0x2,
	ExponentialByDistance = 0x3,
};

namespace EFeaturePrivilegeLevel
{
	enum Type
	{
		Undefined = 0x0,
		Disabled = 0x1,
		EnabledFriendsOnly = 0x2,
		Enabled = 0x3,
	};
}

namespace EMouseCursor
{
	enum Type
	{
		None = 0x0,
		Default = 0x1,
		TextEditBeam = 0x2,
		ResizeLeftRight = 0x3,
		ResizeUpDown = 0x4,
		ResizeSouthEast = 0x5,
		ResizeSouthWest = 0x6,
		CardinalCross = 0x7,
		Crosshairs = 0x8,
		Hand = 0x9,
		GrabHand = 0xa,
		GrabHandClosed = 0xb,
		SlashedCircle = 0xc,
		EyeDropper = 0xd,
		TotalCursorCount = 0xe,
	};
}

enum class EAsyncIOPriority
{
	AIOP_MIN = 0x0,
	AIOP_Low = 0x1,
	AIOP_BelowNormal = 0x2,
	AIOP_Normal = 0x3,
	AIOP_High = 0x4,
	AIOP_MAX = 0x5,
};

namespace EEnvTestWeight
{
	enum Type
	{
		None = 0x0,
		Square = 0x1,
		Inverse = 0x2,
		Absolute = 0x3,
		Constant = 0x4,
		Skip = 0x5,
	};
}

namespace ESlateLineJoinType
{
	enum Type
	{
		Sharp = 0x0,
		Simple = 0x1,
	};
}

namespace EComponentType
{
	enum Type
	{
		None = 0x0,
		TranslationX = 0x1,
		TranslationY = 0x2,
		TranslationZ = 0x3,
		RotationX = 0x4,
		RotationY = 0x5,
		RotationZ = 0x6,
		Scale = 0x7,
	};
}

namespace EPathFindingMode
{
	enum Type
	{
		Regular = 0x0,
		Hierarchical = 0x1,
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
	ECC_GameTraceChannel6 = 0xa,
	ECC_GameTraceChannel7 = 0xb,
	ECC_GameTraceChannel8 = 0xc,
	ECC_GameTraceChannel9 = 0xd,
	ECC_GameTraceChannel10 = 0xe,
	ECC_GameTraceChannel11 = 0xf,
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
	ECC_GameTraceChannel22 = 0x1a,
	ECC_GameTraceChannel23 = 0x1b,
	ECC_GameTraceChannel24 = 0x1c,
	ECC_GameTraceChannel25 = 0x1d,
	ECC_GameTraceChannel26 = 0x1e,
	ECC_GameTraceChannel27 = 0x1f,
	ECC_OverlapAll_Deprecated = 0x20,
	ECC_OverlapAllDynamic_Deprecated = 0x21,
	ECC_OverlapAllStatic_Deprecated = 0x22,
	ECC_MAX = 0x23,
};

namespace EWorldBuffDifficultyType
{
	enum Type
	{
		GAMMA = 0x0,
		BETA = 0x1,
		ALPHA = 0x2,
		OTHER = 0x3,
	};
}

namespace EAutoReceiveInput
{
	enum Type
	{
		Disabled = 0x0,
		Player0 = 0x1,
		Player1 = 0x2,
		Player2 = 0x3,
		Player3 = 0x4,
		Player4 = 0x5,
		Player5 = 0x6,
		Player6 = 0x7,
		Player7 = 0x8,
	};
}

namespace EFieldIteratorFlags
{
	enum InterfaceClassFlags
	{
		ExcludeInterfaces = 0x0,
		IncludeInterfaces = 0x1,
	};
}

enum class EPropertyExportCPPFlags
{
	CPPF_None = 0x0,
	CPPF_OptionalValue = 0x1,
	CPPF_ArgumentOrReturnValue = 0x2,
	CPPF_Implementation = 0x4,
};

enum class EFileWrite
{
	FILEWRITE_NoFail = 0x1,
	FILEWRITE_NoReplaceExisting = 0x2,
	FILEWRITE_EvenIfReadOnly = 0x4,
	FILEWRITE_Append = 0x8,
	FILEWRITE_AllowRead = 0x10,
};

enum class EResourceAlignment
{
	VERTEXBUFFER_ALIGNMENT = 0x0,
};

enum class EFileRead
{
	FILEREAD_NoFail = 0x1,
	FILEREAD_Silent = 0x2,
};

enum class ECopyResult
{
	COPY_OK = 0x0,
	COPY_Fail = 0x1,
	COPY_Canceled = 0x2,
};

enum class EBufferUsageFlags
{
	BUF_Static = 0x1,
	BUF_Dynamic = 0x2,
	BUF_Volatile = 0x4,
	BUF_UnorderedAccess = 0x8,
	BUF_ByteAddressBuffer = 0x20,
	BUF_UAVCounter = 0x40,
	BUF_StreamOutput = 0x80,
	BUF_DrawIndirect = 0x100,
	BUF_ShaderResource = 0x200,
	BUF_KeepCPUAccessible = 0x400,
	BUF_ZeroStride = 0x800,
	BUF_FastVRAM = 0x1000,
	BUF_AnyDynamic = 0x6,
};

namespace ENotifyTriggerMode
{
	enum Type
	{
		AllAnimations = 0x0,
		HighestWeightedAnimation = 0x1,
		None = 0x2,
	};
}

enum class ELinkerNameTableConstructor
{
	ENAME_LinkerConstructor = 0x0,
};

enum class EFoliageInstanceFlags
{
	FOLIAGE_AlignToNormal = 0x1,
	FOLIAGE_NoRandomYaw = 0x2,
	FOLIAGE_Readjusted = 0x4,
};

enum class EFileOpenFlags
{
	IO_READ = 0x1,
	IO_WRITE = 0x2,
	IO_APPEND = 0x40,
};

namespace EVariantTypes
{
	enum Type
	{
		Empty = 0x0,
		Ansichar = 0x1,
		Bool = 0x2,
		Box = 0x3,
		BoxSphereBounds = 0x4,
		ByteArray = 0x5,
		Color = 0x6,
		DateTime = 0x7,
		Double = 0x8,
		Enum = 0x9,
		Float = 0xa,
		Guid = 0xb,
		Int8 = 0xc,
		Int16 = 0xd,
		Int32 = 0xe,
		Int64 = 0xf,
		IntRect = 0x10,
		LinearColor = 0x11,
		Matrix = 0x12,
		Name = 0x13,
		Plane = 0x14,
		Quat = 0x15,
		RandomStream = 0x16,
		Rotator = 0x17,
		String = 0x18,
		Widechar = 0x19,
		Timespan = 0x1a,
		Transform = 0x1b,
		TwoVectors = 0x1c,
		UInt8 = 0x1d,
		UInt16 = 0x1e,
		UInt32 = 0x1f,
		UInt64 = 0x20,
		Vector = 0x21,
		Vector2d = 0x22,
		Vector4 = 0x23,
		IntPoint = 0x24,
		IntVector = 0x25,
		NetworkGUID = 0x26,
		Custom = 0x40,
	};
}

enum class ERangeCompressionMode
{
	RCM_UNorm = 0x0,
	RCM_SNorm = 0x1,
	RCM_MinMaxNorm = 0x2,
	RCM_MinMax = 0x3,
};

namespace EBoneSpaces
{
	enum Type
	{
		WorldSpace = 0x0,
		ComponentSpace = 0x1,
	};
}

enum class ELoopingMode
{
	LOOP_Never = 0x0,
	LOOP_WithNotification = 0x1,
	LOOP_Forever = 0x2,
};

namespace EProcessResource
{
	enum Type
	{
		VirtualMemory = 0x0,
	};
}

enum class ETrailWidthMode
{
	ETrailWidthMode_FromCentre = 0x0,
	ETrailWidthMode_FromFirst = 0x1,
	ETrailWidthMode_FromSecond = 0x2,
};

enum class ENetMode
{
	NM_Standalone = 0x0,
	NM_DedicatedServer = 0x1,
	NM_ListenServer = 0x2,
	NM_Client = 0x3,
	NM_MAX = 0x4,
};

enum class EServerMode
{
	eServerModeInvalid = 0x0,
	eServerModeNoAuthentication = 0x1,
	eServerModeAuthentication = 0x2,
	eServerModeAuthenticationAndSecure = 0x3,
};

enum class EUnrealEngineObjectUE4Version
{
	VER_UE4_ADD_PINTYPE_ARRAY = 0x6c,
	VER_UE4_REMOVE_REDUNDANT_KEY = 0x6d,
	VER_UE4_SUPPORT_LARGE_SHADERS = 0x6e,
	VER_UE4_FUNCTIONS_IN_SHADERMAPID = 0x6f,
	VER_UE4_ASSET_REGISTRY_TAGS = 0x70,
	VER_UE4_DONTSORTCATEGORIES_REMOVED = 0x71,
	VER_UE4_TILED_NAVMESH = 0x72,
	VER_UE4_REMOVED_OLD_NAVMESH = 0x73,
	VER_UE4_ANIMNOTIFY_NAMECHANGE = 0x74,
	VER_UE4_CONSOLIDATE_HEADER_PARSER_ONLY_PROPERTIES = 0x75,
	VER_UE4_STOPPED_SERIALIZING_COMPONENTNAMETODEFAULTOBJECTMAP = 0x76,
	VER_UE4_RESET_MODIFYFREQUENCY_STATICLIGHTS = 0x77,
	VER_UE4_ADD_SOUNDNODEWAVE_GUID = 0x78,
	VER_UE4_ADD_SOUNDNODEWAVE_TO_DDC = 0x79,
	VER_UE4_MATERIAL_BLEND_OVERRIDE = 0x7a,
	VER_UE4_ADD_COOKED_TO_SOUND_NODE_WAVE = 0x7b,
	VER_UE4_TEXTURE_DERIVED_DATA2 = 0x7c,
	VER_UE4_ADD_COOKED_TO_TEXTURE2D = 0x7d,
	VER_UE4_ADD_COOKED_TO_BODY_SETUP = 0x7e,
	VER_UE4_ADD_KISMETNETWORKGRAPHS = 0x7f,
	VER_UE4_MATERIAL_QUALITY_LEVEL_SWITCH = 0x80,
	VER_DEBUG_MATERIALSHADER_UNIFORM_EXPRESSIONS = 0x81,
	VER_UE4_REMOVED_STRIP_DATA = 0x82,
	VER_UE4_FLAG_SCS_TRANSACTIONAL = 0x83,
	VER_UE4_NX_DESTRUCTIBLE_ASSET_CHUNK_BOUNDS_FIX = 0x84,
	VER_UE4_STATIC_MESH_SOCKETS = 0x85,
	VER_UE4_REMOVE_EXTRA_SKELMESH_VERTEX_INFLUENCES = 0x86,
	VER_UE4_UCURVE_USING_RICHCURVES = 0x87,
	VER_UE4_INLINE_SHADERS = 0x88,
	VER_UE4_ADDITIVE_TYPE_CHANGE = 0x89,
	VER_UE4_READD_COOKER = 0x8a,
	VER_UE4_ADDED_SCRIPT_SERIALIZATION_FOR_BLUEPRINT_GENERATED_CLASSES = 0x8b,
	VER_UE4_VARIABLE_BITFIELD_SIZE = 0x8c,
	VER_UE4_FIX_REQUIRED_BONES = 0x8d,
	VER_UE4_COOKED_PACKAGE_VERSION_IS_PACKAGE_VERSION = 0x8e,
	VER_UE4_TEXTURE_SOURCE_ART_REFACTOR = 0x8f,
	VER_UE4_ADDED_EXTRA_MESH_OPTIMIZATION_SETTINGS = 0x90,
	VER_UE4_DESTRUCTIBLE_MESH_BODYSETUP_HOLDS_PHYSICAL_MATERIAL = 0x91,
	VER_UE4_REMOVE_USEQUENCE = 0x92,
	VER_UE4_ADD_PINTYPE_BYREF = 0x93,
	VER_UE4_PUBLIC_BLUEPRINT_VARS_READONLY = 0x94,
	VER_UE4_VISIBILITY_FLAG_CHANGES = 0x95,
	VER_UE4_REMOVE_COMPONENT_ENABLED_FLAG = 0x96,
	VER_UE4_CONFORM_COMPONENT_ACTIVATE_FLAG = 0x97,
	VER_UE4_ADD_SKELMESH_MESHTOIMPORTVERTEXMAP = 0x98,
	VER_UE4_REMOVE_UE3_864_SERIALIZATION = 0x99,
	VER_UE4_SH_LIGHTMAPS = 0x9a,
	VER_UE4_REMOVED_PERSHADER_DDC = 0x9b,
	VER_UE4_CORE_SPLIT = 0x9c,
	VER_UE4_REMOVED_FMATERIAL_COMPILE_OUTPUTS = 0x9d,
	VER_UE4_PHYSICAL_MATERIAL_MODEL = 0x9e,
	VER_UE4_ADDED_MATERIALSHADERMAP_USAGE = 0x9f,
	VER_UE4_BLUEPRINT_PROPERTYFLAGS_SIZE_CHANGE = 0xa0,
	VER_UE4_CONSOLIDATE_SKINNEDMESH_UPDATE_FLAGS = 0xa1,
	VER_UE4_REMOVE_INTERNAL_ARCHETYPE = 0xa2,
	VER_UE4_REMOVE_ARCHETYPE_INDEX_FROM_LINKER_TABLES = 0xa3,
	VER_UE4_VARK2NODE_NULL_VARSRCCLASS_ON_SELF = 0xa4,
	VER_UE4_REMOVED_SPECULAR_BOOST = 0xa5,
	VER_UE4_ADD_KISMETVISIBLE = 0xa6,
	VER_UE4_MOVE_DISTRIBUITONS_TO_POSTINITPROPS = 0xa7,
	VER_UE4_SHADOW_ONLY_INDEX_BUFFERS = 0xa8,
	VER_UE4_CHANGED_VOLUME_SAMPLE_FORMAT = 0xa9,
	VER_UE4_CHANGE_BENABLECOLLISION_TO_COLLISIONENABLED = 0xaa,
	VER_UE4_CHANGED_IRRELEVANT_LIGHT_GUIDS = 0xab,
	VER_UE4_RENAME_DISABLEALLRIGIDBODIES = 0xac,
	VER_UE4_SOUND_NODE_ATTENUATION_SETTINGS_CHANGE = 0xad,
	VER_UE4_ADD_EDGRAPHNODE_GUID = 0xae,
	VER_UE4_FIX_INTERPDATA_OUTERS = 0xaf,
	VER_UE4_BLUEPRINT_NATIVE_SERIALIZATION = 0xb0,
	VER_UE4_SOUND_NODE_INHERIT_FROM_ED_GRAPH_NODE = 0xb1,
	VER_UE4_UNIFY_AMBIENT_SOUND_ACTORS = 0xb2,
	VER_UE4_LIGHTMAP_COMPRESSION = 0xb3,
	VER_UE4_MORPHTARGET_CURVE_INTEGRATION = 0xb4,
	VER_UE4_CLEAR_STANDALONE_FROM_LEVEL_SCRIPT_BLUEPRINTS = 0xb5,
	VER_UE4_NO_INTERFACE_PROPERTY = 0xb6,
	VER_UE4_CATEGORY_MOVED_TO_METADATA = 0xb7,
	VER_UE4_REMOVE_CTOR_LINK = 0xb8,
	VER_UE4_REMOVE_SHORT_PACKAGE_NAME_ASSOCIATIONS = 0xb9,
	VER_UE4_ADD_CREATEDBYCONSTRUCTIONSCRIPT = 0xba,
	VER_UE4_NX_DESTRUCTIBLE_ASSET_AUTHORING_LOAD_FIX = 0xbb,
	VER_UE4_ANGULAR_CONSTRAINT_OPTIONS = 0xbc,
	VER_UE4_CHANGE_MATERIAL_EXPRESSION_CONSTANTS_TO_LINEARCOLOR = 0xbd,
	VER_UE4_PRIMITIVE_BUILT_LIGHTING_FLAG = 0xbe,
	VER_UE4_ATMOSPHERIC_FOG_CACHE_TEXTURE = 0xbf,
	VER_UE4_PRECOMPUTED_SHADOW_MAPS = 0xc0,
	VER_UE4_MODULATOR_CONTINUOUS_NO_DISTRIBUTION = 0xc1,
	VER_UE4_PACKAGE_MAGIC_POSTTAG = 0xc2,
	VER_UE4_TOSS_IRRELEVANT_LIGHTS = 0xc3,
	VER_UE4_REMOVE_NET_INDEX = 0xc4,
	VER_UE4_BLUEPRINT_CDO_MIGRATION = 0xc5,
	VER_UE4_BULKDATA_AT_LARGE_OFFSETS = 0xc6,
	VER_UE4_EXPLICIT_STREAMING_TEXTURE_BUILT = 0xc7,
	VER_UE4_PRECOMPUTED_SHADOW_MAPS_BSP = 0xc8,
	VER_UE4_STATIC_MESH_REFACTOR = 0xc9,
	VER_UE4_REMOVE_CACHED_STATIC_MESH_STREAMING_FACTORS = 0xca,
	VER_UE4_ATMOSPHERIC_FOG_MATERIAL = 0xcb,
	VER_UE4_FIX_BSP_BRUSH_TYPE = 0xcc,
	VER_UE4_REMOVE_CLIENTDESTROYEDACTORCONTENT = 0xcd,
	VER_UE4_SOUND_CUE_GRAPH_EDITOR = 0xce,
	VER_UE4_STRIP_TRANS_LEVEL_MOVE_BUFFER = 0xcf,
	VER_UE4_DEPRECATED_BNOENCROACHCHECK = 0xd0,
	VER_UE4_LIGHTS_USE_IES_BRIGHTNESS_DEFAULT_CHANGED = 0xd1,
	VER_UE4_MATERIAL_ATTRIBUTES_MULTIPLEX = 0xd2,
	VER_UE4_TEXTURE_FORMAT_RGBA_SWIZZLE = 0xd3,
	VER_UE4_SUMMARY_HAS_BULKDATA_OFFSET = 0xd4,
	VER_UE4_DEFAULT_ROOT_COMP_TRANSACTIONAL = 0xd5,
	VER_UE4_HASHED_MATERIAL_OUTPUT = 0xd6,
	VER_UE4_BLUEPRINT_VARS_NOT_READ_ONLY = 0xd7,
	VER_UE4_STATIC_MESH_STORE_NAV_COLLISION = 0xd8,
	VER_UE4_ATMOSPHERIC_FOG_DECAY_NAME_CHANGE = 0xd9,
	VER_UE4_SCENECOMP_TRANSLATION_TO_LOCATION = 0xda,
	VER_UE4_MATERIAL_ATTRIBUTES_REORDERING = 0xdb,
	VER_UE4_COLLISION_PROFILE_SETTING = 0xdc,
	VER_UE4_BLUEPRINT_SKEL_TEMPORARY_TRANSIENT = 0xdd,
	VER_UE4_BLUEPRINT_SKEL_SERIALIZED_AGAIN = 0xde,
	VER_UE4_BLUEPRINT_SETS_REPLICATION = 0xdf,
	VER_UE4_WORLD_LEVEL_INFO = 0xe0,
	VER_UE4_AFTER_CAPSULE_HALF_HEIGHT_CHANGE = 0xe1,
	VER_UE4_ADDED_NAMESPACE_AND_KEY_DATA_TO_FTEXT = 0xe2,
	VER_UE4_ATTENUATION_SHAPES = 0xe3,
	VER_UE4_LIGHTCOMPONENT_USE_IES_TEXTURE_MULTIPLIER_ON_NON_IES_BRIGHTNESS = 0xe4,
	VER_UE4_REMOVE_INPUT_COMPONENTS_FROM_BLUEPRINTS = 0xe5,
	VER_UE4_VARK2NODE_USE_MEMBERREFSTRUCT = 0xe6,
	VER_UE4_REFACTOR_MATERIAL_EXPRESSION_SCENECOLOR_AND_SCENEDEPTH_INPUTS = 0xe7,
	VER_UE4_SPLINE_MESH_ORIENTATION = 0xe8,
	VER_UE4_REVERB_EFFECT_ASSET_TYPE = 0xe9,
	VER_UE4_MAX_TEXCOORD_INCREASED = 0xea,
	VER_UE4_SPEEDTREE_STATICMESH = 0xeb,
	VER_UE4_LANDSCAPE_COMPONENT_LAZY_REFERENCES = 0xec,
	VER_UE4_SWITCH_CALL_NODE_TO_USE_MEMBER_REFERENCE = 0xed,
	VER_UE4_ADDED_SKELETON_ARCHIVER_REMOVAL = 0xee,
	VER_UE4_ADDED_SKELETON_ARCHIVER_REMOVAL_SECOND_TIME = 0xef,
	VER_UE4_BLUEPRINT_SKEL_CLASS_TRANSIENT_AGAIN = 0xf0,
	VER_UE4_ADD_COOKED_TO_UCLASS = 0xf1,
	VER_UE4_DEPRECATED_STATIC_MESH_THUMBNAIL_PROPERTIES_REMOVED = 0xf2,
	VER_UE4_COLLECTIONS_IN_SHADERMAPID = 0xf3,
	VER_UE4_REFACTOR_MOVEMENT_COMPONENT_HIERARCHY = 0xf4,
	VER_UE4_FIX_TERRAIN_LAYER_SWITCH_ORDER = 0xf5,
	VER_UE4_ALL_PROPS_TO_CONSTRAINTINSTANCE = 0xf6,
	VER_UE4_LOW_QUALITY_DIRECTIONAL_LIGHTMAPS = 0xf7,
	VER_UE4_ADDED_NOISE_EMITTER_COMPONENT = 0xf8,
	VER_UE4_ADD_TEXT_COMPONENT_VERTICAL_ALIGNMENT = 0xf9,
	VER_UE4_ADDED_FBX_ASSET_IMPORT_DATA = 0xfa,
	VER_UE4_REMOVE_LEVELBODYSETUP = 0xfb,
	VER_UE4_REFACTOR_CHARACTER_CROUCH = 0xfc,
	VER_UE4_SMALLER_DEBUG_MATERIALSHADER_UNIFORM_EXPRESSIONS = 0xfd,
	VER_UE4_APEX_CLOTH = 0xfe,
	VER_UE4_SAVE_COLLISIONRESPONSE_PER_CHANNEL = 0xff,
	VER_UE4_ADDED_LANDSCAPE_SPLINE_EDITOR_MESH = 0x100,
	VER_UE4_CHANGED_MATERIAL_REFACTION_TYPE = 0x101,
	VER_UE4_REFACTOR_PROJECTILE_MOVEMENT = 0x102,
	VER_UE4_REMOVE_PHYSICALMATERIALPROPERTY = 0x103,
	VER_UE4_PURGED_FMATERIAL_COMPILE_OUTPUTS = 0x104,
	VER_UE4_ADD_COOKED_TO_LANDSCAPE = 0x105,
	VER_UE4_CONSUME_INPUT_PER_BIND = 0x106,
	VER_UE4_SOUND_CLASS_GRAPH_EDITOR = 0x107,
	VER_UE4_FIXUP_TERRAIN_LAYER_NODES = 0x108,
	VER_UE4_RETROFIT_CLAMP_EXPRESSIONS_SWAP = 0x109,
	VER_UE4_REMOVE_LIGHT_MOBILITY_CLASSES = 0x10a,
	VER_UE4_REFACTOR_PHYSICS_BLENDING = 0x10b,
	VER_UE4_WORLD_LEVEL_INFO_UPDATED = 0x10c,
	VER_UE4_STATIC_SKELETAL_MESH_SERIALIZATION_FIX = 0x10d,
	VER_UE4_REMOVE_STATICMESH_MOBILITY_CLASSES = 0x10e,
	VER_UE4_REFACTOR_PHYSICS_TRANSFORMS = 0x10f,
	VER_UE4_REMOVE_ZERO_TRIANGLE_SECTIONS = 0x110,
	VER_UE4_CHARACTER_MOVEMENT_DECELERATION = 0x111,
	VER_UE4_CAMERA_ACTOR_USING_CAMERA_COMPONENT = 0x112,
	VER_UE4_CHARACTER_MOVEMENT_DEPRECATE_PITCH_ROLL = 0x113,
	VER_UE4_REBUILD_TEXTURE_STREAMING_DATA_ON_LOAD = 0x114,
	VER_UE4_SUPPORT_32BIT_STATIC_MESH_INDICES = 0x115,
	VER_UE4_ADDED_CHUNKID_TO_ASSETDATA_AND_UPACKAGE = 0x116,
	VER_UE4_CHARACTER_DEFAULT_MOVEMENT_BINDINGS = 0x117,
	VER_UE4_APEX_CLOTH_LOD = 0x118,
	VER_UE4_ATMOSPHERIC_FOG_CACHE_DATA = 0x119,
	VAR_UE4_ARRAY_PROPERTY_INNER_TAGS = 0x11a,
	VER_UE4_KEEP_SKEL_MESH_INDEX_DATA = 0x11b,
	VER_UE4_BODYSETUP_COLLISION_CONVERSION = 0x11c,
	VER_UE4_REFLECTION_CAPTURE_COOKING = 0x11d,
	VER_UE4_REMOVE_DYNAMIC_VOLUME_CLASSES = 0x11e,
	VER_UE4_STORE_HASCOOKEDDATA_FOR_BODYSETUP = 0x11f,
	VER_UE4_REFRACTION_BIAS_TO_REFRACTION_DEPTH_BIAS = 0x120,
	VER_UE4_REMOVE_SKELETALPHYSICSACTOR = 0x121,
	VER_UE4_PC_ROTATION_INPUT_REFACTOR = 0x122,
	VER_UE4_LANDSCAPE_PLATFORMDATA_COOKING = 0x123,
	VER_UE4_CREATEEXPORTS_CLASS_LINKING_FOR_BLUEPRINTS = 0x124,
	VER_UE4_REMOVE_NATIVE_COMPONENTS_FROM_BLUEPRINT_SCS = 0x125,
	VER_UE4_REMOVE_SINGLENODEINSTANCE = 0x126,
	VER_UE4_CHARACTER_BRAKING_REFACTOR = 0x127,
	VER_UE4_VOLUME_SAMPLE_LOW_QUALITY_SUPPORT = 0x128,
	VER_UE4_SPLIT_TOUCH_AND_CLICK_ENABLES = 0x129,
	VER_UE4_HEALTH_DEATH_REFACTOR = 0x12a,
	VER_UE4_SOUND_NODE_ENVELOPER_CURVE_CHANGE = 0x12b,
	VER_UE4_POINT_LIGHT_SOURCE_RADIUS = 0x12c,
	VER_UE4_SCENE_CAPTURE_CAMERA_CHANGE = 0x12d,
	VER_UE4_MOVE_SKELETALMESH_SHADOWCASTING = 0x12e,
	VER_UE4_CHANGE_SETARRAY_BYTECODE = 0x12f,
	VER_UE4_MATERIAL_INSTANCE_BASE_PROPERTY_OVERRIDES = 0x130,
	VER_UE4_COMBINED_LIGHTMAP_TEXTURES = 0x131,
	VER_UE4_BUMPED_MATERIAL_EXPORT_GUIDS = 0x132,
	VER_UE4_BLUEPRINT_INPUT_BINDING_OVERRIDES = 0x133,
	VER_UE4_FIXUP_BODYSETUP_INVALID_CONVEX_TRANSFORM = 0x134,
	VER_UE4_FIXUP_STIFFNESS_AND_DAMPING_SCALE = 0x135,
	VER_UE4_REFERENCE_SKELETON_REFACTOR = 0x136,
	VER_UE4_K2NODE_REFERENCEGUIDS = 0x137,
	VER_UE4_FIXUP_ROOTBONE_PARENT = 0x138,
	VER_UE4_TEXT_RENDER_COMPONENTS_WORLD_SPACE_SIZING = 0x139,
	VER_UE4_MATERIAL_INSTANCE_BASE_PROPERTY_OVERRIDES_PHASE_2 = 0x13a,
	VER_UE4_CLASS_NOTPLACEABLE_ADDED = 0x13b,
	VER_UE4_WORLD_LEVEL_INFO_LOD_LIST = 0x13c,
	VER_UE4_CHARACTER_MOVEMENT_VARIABLE_RENAMING_1 = 0x13d,
	VER_UE4_FSLATESOUND_CONVERSION = 0x13e,
	VER_UE4_WORLD_LEVEL_INFO_ZORDER = 0x13f,
	VER_UE4_PACKAGE_REQUIRES_LOCALIZATION_GATHER_FLAGGING = 0x140,
	VER_UE4_BP_ACTOR_VARIABLE_DEFAULT_PREVENTING = 0x141,
	VER_UE4_TEST_ANIMCOMP_CHANGE = 0x142,
	VER_UE4_EDITORONLY_BLUEPRINTS = 0x143,
	VER_UE4_EDGRAPHPINTYPE_SERIALIZATION = 0x144,
	VER_UE4_NO_MIRROR_BRUSH_MODEL_COLLISION = 0x145,
	VER_UE4_CHANGED_CHUNKID_TO_BE_AN_ARRAY_OF_CHUNKIDS = 0x146,
	VER_UE4_WORLD_NAMED_AFTER_PACKAGE = 0x147,
	VER_UE4_SKY_LIGHT_COMPONENT = 0x148,
	VER_UE4_WORLD_LAYER_ENABLE_DISTANCE_STREAMING = 0x149,
	VER_UE4_REMOVE_ZONES_FROM_MODEL = 0x14a,
	VER_UE4_FIX_ANIMATIONBASEPOSE_SERIALIZATION = 0x14b,
	VER_UE4_SUPPORT_8_BONE_INFLUENCES_SKELETAL_MESHES = 0x14c,
	VER_UE4_ADD_OVERRIDE_GRAVITY_FLAG = 0x14d,
	VER_UE4_SUPPORT_GPUSKINNING_8_BONE_INFLUENCES = 0x14e,
	VER_UE4_ANIM_SUPPORT_NONUNIFORM_SCALE_ANIMATION = 0x14f,
	VER_UE4_ENGINE_VERSION_OBJECT = 0x150,
	VER_UE4_PUBLIC_WORLDS = 0x151,
	VER_UE4_SKELETON_GUID_SERIALIZATION = 0x152,
	VER_UE4_CHARACTER_MOVEMENT_WALKABLE_FLOOR_REFACTOR = 0x153,
	VER_UE4_INVERSE_SQUARED_LIGHTS_DEFAULT = 0x154,
	VER_UE4_DISABLED_SCRIPT_LIMIT_BYTECODE = 0x155,
	VER_UE4_PRIVATE_REMOTE_ROLE = 0x156,
	VER_UE4_FOLIAGE_STATIC_MOBILITY = 0x157,
	VER_UE4_BUILD_SCALE_VECTOR = 0x158,
	VER_UE4_FOLIAGE_COLLISION = 0x159,
	VER_UE4_SKY_BENT_NORMAL = 0x15a,
	VER_UE4_LANDSCAPE_COLLISION_DATA_COOKING = 0x15b,
	VER_UE4_MORPHTARGET_CPU_TANGENTZDELTA_FORMATCHANGE = 0x15c,
	VER_UE4_SOFT_CONSTRAINTS_USE_MASS = 0x15d,
	VER_UE4_REFLECTION_DATA_IN_PACKAGES = 0x15e,
	VER_UE4_FOLIAGE_MOVABLE_MOBILITY = 0x15f,
	VER_UE4_UNDO_BREAK_MATERIALATTRIBUTES_CHANGE = 0x160,
	VER_UE4_ADD_CUSTOMPROFILENAME_CHANGE = 0x161,
	VER_UE4_FLIP_MATERIAL_COORDS = 0x162,
	VER_UE4_MEMBERREFERENCE_IN_PINTYPE = 0x163,
	VER_UE4_VEHICLES_UNIT_CHANGE = 0x164,
	VER_UE4_ANIMATION_REMOVE_NANS = 0x165,
	VER_UE4_SKELETON_ASSET_PROPERTY_TYPE_CHANGE = 0x166,
	VER_UE4_FIX_BLUEPRINT_VARIABLE_FLAGS = 0x167,
	VER_UE4_VEHICLES_UNIT_CHANGE2 = 0x168,
	VER_UE4_UCLASS_SERIALIZE_INTERFACES_AFTER_LINKING = 0x169,
	VER_UE4_STATIC_MESH_SCREEN_SIZE_LODS = 0x16a,
	VER_UE4_FIX_MATERIAL_COORDS = 0x16b,
	VER_UE4_SPEEDTREE_WIND_V7 = 0x16c,
	VER_UE4_LOAD_FOR_EDITOR_GAME = 0x16d,
	VER_UE4_SERIALIZE_RICH_CURVE_KEY = 0x16e,
	VER_UE4_MOVE_LANDSCAPE_MICS_AND_TEXTURES_WITHIN_LEVEL = 0x16f,
	VER_UE4_FTEXT_HISTORY = 0x170,
	VER_UE4_FIX_MATERIAL_COMMENTS = 0x171,
	VER_UE4_STORE_BONE_EXPORT_NAMES = 0x172,
	VER_UE4_MESH_EMITTER_INITIAL_ORIENTATION_DISTRIBUTION = 0x173,
	VER_UE4_DISALLOW_FOLIAGE_ON_BLUEPRINTS = 0x174,
	VER_UE4_FIXUP_MOTOR_UNITS = 0x175,
	VER_UE4_DEPRECATED_MOVEMENTCOMPONENT_MODIFIED_SPEEDS = 0x176,
	VER_UE4_RENAME_CANBECHARACTERBASE = 0x177,
	VER_UE4_GAMEPLAY_TAG_CONTAINER_TAG_TYPE_CHANGE = 0x178,
	VER_UE4_FOLIAGE_SETTINGS_TYPE = 0x179,
	VER_UE4_STATIC_SHADOW_DEPTH_MAPS = 0x17a,
	VER_UE4_ADD_TRANSACTIONAL_TO_DATA_ASSETS = 0x17b,
	VER_UE4_ADD_LB_WEIGHTBLEND = 0x17c,
	VER_UE4_ADD_ROOTCOMPONENT_TO_FOLIAGEACTOR = 0x17d,
	VER_UE4_FIX_MATERIAL_PROPERTY_OVERRIDE_SERIALIZE = 0x17e,
	VER_UE4_ADD_LINEAR_COLOR_SAMPLER = 0x17f,
	VER_UE4_ADD_STRING_ASSET_REFERENCES_MAP = 0x180,
	VER_UE4_BLUEPRINT_USE_SCS_ROOTCOMPONENT_SCALE = 0x181,
	VER_UE4_LEVEL_STREAMING_DRAW_COLOR_TYPE_CHANGE = 0x182,
	VER_UE4_CLEAR_NOTIFY_TRIGGERS = 0x183,
	VER_UE4_SKELETON_ADD_SMARTNAMES = 0x184,
	VER_UE4_ADDED_CURRENCY_CODE_TO_FTEXT = 0x185,
	VER_UE4_ENUM_CLASS_SUPPORT = 0x186,
	VER_UE4_FIXUP_WIDGET_ANIMATION_CLASS = 0x187,
	VER_UE4_SOUND_COMPRESSION_TYPE_ADDED = 0x188,
	VER_UE4_AUTO_WELDING = 0x189,
	VER_UE4_RENAME_CROUCHMOVESCHARACTERDOWN = 0x18a,
	VER_UE4_LIGHTMAP_MESH_BUILD_SETTINGS = 0x18b,
	VER_UE4_RENAME_SM3_TO_ES3_1 = 0x18c,
	VER_UE4_DEPRECATE_UMG_STYLE_ASSETS = 0x18d,
	VER_UE4_POST_DUPLICATE_NODE_GUID = 0x18e,
	VER_UE4_RENAME_CAMERA_COMPONENT_VIEW_ROTATION = 0x18f,
	VER_UE4_CASE_PRESERVING_FNAME = 0x190,
	VER_UE4_RENAME_CAMERA_COMPONENT_CONTROL_ROTATION = 0x191,
	VER_UE4_REBUILD_HIERARCHICAL_INSTANCE_TREES = 0x192,
	VER_UE4_REFLECTION_CAPTURE_DEPTH = 0x193,
	VER_UE4_TEXTURE_RENDER_TARGET_FORMAT = 0x194,
	VER_UE4_AUTOMATIC_VERSION_PLUS_ONE = 0x195,
	VER_UE4_AUTOMATIC_VERSION = 0x194,
};

namespace ETextFlag
{
	enum Type
	{
		Transient = 0x1,
		CultureInvariant = 0x2,
		ConvertedProperty = 0x4,
	};
}

namespace EGrammaticalGender
{
	enum Type
	{
		Neuter = 0x0,
		Masculine = 0x1,
		Feminine = 0x2,
		Mixed = 0x3,
	};
}

enum class ELightMapPaddingType
{
	LMPT_NormalPadding = 0x0,
	LMPT_PrePadding = 0x1,
	LMPT_NoPadding = 0x2,
};

namespace ETimerStatus
{
	enum Type
	{
		Unused = 0x0,
		Pending = 0x1,
		Active = 0x2,
		Paused = 0x3,
		Executing = 0x4,
		Looping = 0x5,
	};
}

namespace FOnlineStatUpdate
{
	enum EOnlineStatModificationType
	{
		Unknown = 0x0,
		Sum = 0x1,
		Set = 0x2,
		Largest = 0x3,
		Smallest = 0x4,
	};
}

namespace EAppReturnType
{
	enum Type
	{
		No = 0x0,
		Yes = 0x1,
		YesAll = 0x2,
		NoAll = 0x3,
		Cancel = 0x4,
		Ok = 0x5,
		Retry = 0x6,
		Continue = 0x7,
	};
}

namespace ECustomVersionSerializationFormat
{
	enum Type
	{
		Guids = 0x0,
		Enums = 0x1,
	};
}

namespace EFormatArgumentType
{
	enum Type
	{
		Int = 0x0,
		UInt = 0x1,
		Float = 0x2,
		Double = 0x3,
		Text = 0x4,
	};
}

enum class ERoundingMode
{
	HalfToEven = 0x0,
	HalfFromZero = 0x1,
	HalfToZero = 0x2,
	FromZero = 0x3,
	ToZero = 0x4,
	ToNegativeInfinity = 0x5,
	ToPositiveInfinity = 0x6,
};

enum class EBlendMode
{
	BLEND_Opaque = 0x0,
	BLEND_Masked = 0x1,
	BLEND_Translucent = 0x2,
	BLEND_Additive = 0x3,
	BLEND_Modulate = 0x4,
	BLEND_MAX = 0x5,
};

namespace FRHICommandListBase
{
	enum ERenderThreadContext
	{
		SceneRenderTargets = 0x0,
		Num = 0x1,
	};
}

enum class ECallbackQueryType
{
	CALLBACK_ModalErrorMessage = 0x0,
	CALLBACK_LocalizationExportFilter = 0x1,
	CALLBACK_QueryCount = 0x2,
};

namespace EHotfixDelegates
{
	enum Type
	{
		Test = 0x0,
	};
}

namespace EDropItemIconAction
{
	enum Type
	{
		DA_NoAction = 0x0,
		DA_Equip = 0x1,
		DA_UnEquip = 0x2,
		DA_AddToSlot = 0x3,
		DA_RemoveFromSlot = 0x4,
		DA_ToRemoteInv = 0x5,
		DA_FromRemoteInv = 0x6,
		DA_RemoteEquip = 0x7,
		DA_MergeItemStack = 0x8,
		DA_SplitItemStack = 0x9,
		DA_SwapItems = 0xa,
		DA_UseWithItem = 0xb,
		DA_UnEquipTransferToLocal = 0xc,
		DA_RemoveItemSkin = 0xd,
		DA_SplitItemStackOne = 0xe,
		DA_RemoveWeaponAmmo = 0xf,
		DA_FromRemoteInvToSlot = 0x10,
		DA_ToRemoteInvFromSlot = 0x11,
		DA_EquipLocalFromRemote = 0x12,
		DA_EquipRemoteFromLocal = 0x13,
		DA_UnequipRemote = 0x14,
		DA_UnequipTransferToRemote = 0x15,
		DA_ToArkInv = 0x16,
		DA_FromArkInv = 0x17,
		MAX = 0x18,
	};
}

enum class EAlphaBlendType
{
	ABT_Linear = 0x0,
	ABT_Cubic = 0x1,
	ABT_Sinusoidal = 0x2,
	ABT_EaseInOutExponent2 = 0x3,
	ABT_EaseInOutExponent3 = 0x4,
	ABT_EaseInOutExponent4 = 0x5,
	ABT_EaseInOutExponent5 = 0x6,
	ABT_MAX = 0x7,
};

namespace EWindowMode
{
	enum Type
	{
		Fullscreen = 0x0,
		WindowedFullscreen = 0x1,
		Windowed = 0x2,
		WindowedMirror = 0x3,
		NumWindowModes = 0x4,
	};
}

namespace EBuildConfigurations
{
	enum Type
	{
		Unknown = 0x0,
		Debug = 0x1,
		DebugGame = 0x2,
		Development = 0x3,
		Shipping = 0x4,
		Test = 0x5,
	};
}

enum class ESlateTextureAtlasPaddingStyle
{
	NoPadding = 0x0,
	DilateBorder = 0x1,
	PadWithZero = 0x2,
};

namespace SplashTextType
{
	enum Type
	{
		StartupProgress = 0x0,
		VersionInfo1 = 0x1,
		CopyrightInfo = 0x2,
		GameName = 0x3,
		NumTextTypes = 0x4,
	};
}

enum class ECompressionFlags
{
	COMPRESS_None = 0x0,
	COMPRESS_ZLIB = 0x1,
	COMPRESS_LZ4 = 0x2,
	COMPRESS_BiasMemory = 0x10,
	COMPRESS_BiasSpeed = 0x20,
};

namespace ENavLinkDirection
{
	enum Type
	{
		BothWays = 0x0,
		LeftToRight = 0x1,
		RightToLeft = 0x2,
	};
}

enum class EBulkDataLockFlags
{
	LOCK_READ_ONLY = 0x1,
	LOCK_READ_WRITE = 0x2,
};

namespace EBuildTargets
{
	enum Type
	{
		Unknown = 0x0,
		Editor = 0x1,
		Game = 0x2,
		Server = 0x3,
	};
}

namespace FDragDropOLEData
{
	enum EWindowsOLEDataType
	{
		None = 0x0,
		Text = 0x1,
		Files = 0x2,
	};
}

namespace EErrorReportMode
{
	enum Type
	{
		Interactive = 0x0,
		Unattended = 0x1,
		Balloon = 0x2,
	};
}

namespace EAILockSource
{
	enum Type
	{
		Animation = 0x0,
		Logic = 0x1,
		Script = 0x2,
		Gameplay = 0x3,
		MAX = 0x4,
	};
}

namespace EAppMsgType
{
	enum Type
	{
		Ok = 0x0,
		YesNo = 0x1,
		OkCancel = 0x2,
		YesNoCancel = 0x3,
		CancelRetryContinue = 0x4,
		YesNoYesAllNoAll = 0x5,
		YesNoYesAllNoAllCancel = 0x6,
		YesNoYesAll = 0x7,
	};
}

namespace EAxisList
{
	enum Type
	{
		None = 0x0,
		X = 0x1,
		Y = 0x2,
		Z = 0x4,
		Screen = 0x8,
		XY = 0x3,
		XZ = 0x5,
		YZ = 0x6,
		XYZ = 0x7,
		All = 0xf,
		ZRotation = 0x6,
	};
}

enum class EUnrealEngineObjectLicenseeUE4Version
{
	VER_LIC_NONE = 0x0,
	VER_LIC_FOLIAGE_NAME_TABLE = 0x1,
	VER_LIC_MATERIAL_SURFACE_LEVEL = 0x2,
	VER_LIC_BULK_SM_INSTANCES_UPDATE = 0x3,
	VER_LIC_COOKED_SHADERMAP_EXTRAPATH = 0x4,
	VER_LIC_FOLIAGE_OCTREE = 0x5,
	VER_LIC_SKYLIGHT_MULT = 0x6,
	VER_LIC_POSTPROCESS_STENCIL = 0x7,
	VER_LIC_DECAL_CREATIONTIME = 0x8,
	VER_LIC_FONT_UPDATE = 0x9,
	VER_LIC_ORIGIN_VALIDATION = 0xa,
	VER_LIC_AUTOMATIC_VERSION_PLUS_ONE = 0xb,
	VER_LIC_AUTOMATIC_VERSION = 0xa,
};

enum class EWalkableSlopeBehavior
{
	WalkableSlope_Default = 0x0,
	WalkableSlope_Increase = 0x1,
	WalkableSlope_Decrease = 0x2,
	WalkableSlope_Unwalkable = 0x3,
	WalkableSlope_Max = 0x4,
};

namespace EDayOfWeek
{
	enum Type
	{
		Monday = 0x0,
		Tuesday = 0x1,
		Wednesday = 0x2,
		Thursday = 0x3,
		Friday = 0x4,
		Saturday = 0x5,
		Sunday = 0x6,
	};
}

enum class ECompositeTextureMode
{
	CTM_Disabled = 0x0,
	CTM_NormalRoughnessToRed = 0x1,
	CTM_NormalRoughnessToGreen = 0x2,
	CTM_NormalRoughnessToBlue = 0x3,
	CTM_NormalRoughnessToAlpha = 0x4,
	CTM_MAX = 0x5,
};

namespace EAxis
{
	enum Type
	{
		None = 0x0,
		X = 0x1,
		Y = 0x2,
		Z = 0x3,
	};
}

namespace ESlateShaderResource
{
	enum Type
	{
		NativeTexture = 0x0,
		TextureObject = 0x1,
		Material = 0x2,
	};
}

enum class ETransitionType
{
	TT_None = 0x0,
	TT_Paused = 0x1,
	TT_Loading = 0x2,
	TT_Saving = 0x3,
	TT_Connecting = 0x4,
	TT_Precaching = 0x5,
	TT_WaitingToConnect = 0x6,
	TT_MAX = 0x7,
};

namespace EOnlineNotificationResult
{
	enum Type
	{
		None = 0x0,
		Block = 0x1,
		Forward = 0x2,
	};
}

namespace EPathFollowingMessage
{
	enum Type
	{
		NoPath = 0x0,
		OtherRequest = 0x1,
	};
}

enum class EObjectTypeQuery
{
	ObjectTypeQuery1 = 0x0,
	ObjectTypeQuery2 = 0x1,
	ObjectTypeQuery3 = 0x2,
	ObjectTypeQuery4 = 0x3,
	ObjectTypeQuery5 = 0x4,
	ObjectTypeQuery6 = 0x5,
	ObjectTypeQuery7 = 0x6,
	ObjectTypeQuery8 = 0x7,
	ObjectTypeQuery9 = 0x8,
	ObjectTypeQuery10 = 0x9,
	ObjectTypeQuery11 = 0xa,
	ObjectTypeQuery12 = 0xb,
	ObjectTypeQuery13 = 0xc,
	ObjectTypeQuery14 = 0xd,
	ObjectTypeQuery15 = 0xe,
	ObjectTypeQuery16 = 0xf,
	ObjectTypeQuery17 = 0x10,
	ObjectTypeQuery18 = 0x11,
	ObjectTypeQuery19 = 0x12,
	ObjectTypeQuery20 = 0x13,
	ObjectTypeQuery21 = 0x14,
	ObjectTypeQuery22 = 0x15,
	ObjectTypeQuery23 = 0x16,
	ObjectTypeQuery24 = 0x17,
	ObjectTypeQuery25 = 0x18,
	ObjectTypeQuery26 = 0x19,
	ObjectTypeQuery27 = 0x1a,
	ObjectTypeQuery28 = 0x1b,
	ObjectTypeQuery29 = 0x1c,
	ObjectTypeQuery30 = 0x1d,
	ObjectTypeQuery31 = 0x1e,
	ObjectTypeQuery32 = 0x1f,
	ObjectTypeQuery_MAX = 0x20,
};

enum class ReverbPreset
{
	REVERB_Default = 0x0,
	REVERB_Bathroom = 0x1,
	REVERB_StoneRoom = 0x2,
	REVERB_Auditorium = 0x3,
	REVERB_ConcertHall = 0x4,
	REVERB_Cave = 0x5,
	REVERB_Hallway = 0x6,
	REVERB_StoneCorridor = 0x7,
	REVERB_Alley = 0x8,
	REVERB_Forest = 0x9,
	REVERB_City = 0xa,
	REVERB_Mountains = 0xb,
	REVERB_Quarry = 0xc,
	REVERB_Plain = 0xd,
	REVERB_ParkingLot = 0xe,
	REVERB_SewerPipe = 0xf,
	REVERB_Underwater = 0x10,
	REVERB_SmallRoom = 0x11,
	REVERB_MediumRoom = 0x12,
	REVERB_LargeRoom = 0x13,
	REVERB_MediumHall = 0x14,
	REVERB_LargeHall = 0x15,
	REVERB_Plate = 0x16,
	REVERB_MAX = 0x17,
};

enum class ENameCase
{
	CaseSensitive = 0x0,
	IgnoreCase = 0x1,
};

namespace SThrobber
{
	enum EAnimation
	{
		Vertical = 0x1,
		Horizontal = 0x2,
		Opacity = 0x4,
		VerticalAndOpacity = 0x5,
		All = 0x7,
		None = 0x0,
	};
}

enum class EBlueprintStatus
{
	BS_Unknown = 0x0,
	BS_Dirty = 0x1,
	BS_Error = 0x2,
	BS_UpToDate = 0x3,
	BS_BeingCreated = 0x4,
	BS_UpToDateWithWarnings = 0x5,
	BS_MAX = 0x6,
};

enum class EBreakIteratorType
{
	Grapheme = 0x0,
	Word = 0x1,
	Line = 0x2,
	Sentence = 0x3,
	Title = 0x4,
};

enum class EMicroTransactionDelegate
{
	MTD_PurchaseQueryComplete = 0x0,
	MTD_PurchaseComplete = 0x1,
	MTD_MAX = 0x2,
};

enum class ETranslucencyLightingMode
{
	TLM_VolumetricNonDirectional = 0x0,
	TLM_VolumetricDirectional = 0x1,
	TLM_Surface = 0x2,
	TLM_MAX = 0x3,
};

namespace EChatMessageType
{
	enum Type
	{
		MyMessage = 0x0,
		SameTeamMessage = 0x1,
		DifferentTeamMessage = 0x2,
		SystemWideMessage = 0x3,
		SameAllianceMessage = 0x4,
		MAX = 0x5,
	};
}

enum class UBlockCode
{
	UBLOCK_NO_BLOCK = 0x0,
	UBLOCK_BASIC_LATIN = 0x1,
	UBLOCK_LATIN_1_SUPPLEMENT = 0x2,
	UBLOCK_LATIN_EXTENDED_A = 0x3,
	UBLOCK_LATIN_EXTENDED_B = 0x4,
	UBLOCK_IPA_EXTENSIONS = 0x5,
	UBLOCK_SPACING_MODIFIER_LETTERS = 0x6,
	UBLOCK_COMBINING_DIACRITICAL_MARKS = 0x7,
	UBLOCK_GREEK = 0x8,
	UBLOCK_CYRILLIC = 0x9,
	UBLOCK_ARMENIAN = 0xa,
	UBLOCK_HEBREW = 0xb,
	UBLOCK_ARABIC = 0xc,
	UBLOCK_SYRIAC = 0xd,
	UBLOCK_THAANA = 0xe,
	UBLOCK_DEVANAGARI = 0xf,
	UBLOCK_BENGALI = 0x10,
	UBLOCK_GURMUKHI = 0x11,
	UBLOCK_GUJARATI = 0x12,
	UBLOCK_ORIYA = 0x13,
	UBLOCK_TAMIL = 0x14,
	UBLOCK_TELUGU = 0x15,
	UBLOCK_KANNADA = 0x16,
	UBLOCK_MALAYALAM = 0x17,
	UBLOCK_SINHALA = 0x18,
	UBLOCK_THAI = 0x19,
	UBLOCK_LAO = 0x1a,
	UBLOCK_TIBETAN = 0x1b,
	UBLOCK_MYANMAR = 0x1c,
	UBLOCK_GEORGIAN = 0x1d,
	UBLOCK_HANGUL_JAMO = 0x1e,
	UBLOCK_ETHIOPIC = 0x1f,
	UBLOCK_CHEROKEE = 0x20,
	UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS = 0x21,
	UBLOCK_OGHAM = 0x22,
	UBLOCK_RUNIC = 0x23,
	UBLOCK_KHMER = 0x24,
	UBLOCK_MONGOLIAN = 0x25,
	UBLOCK_LATIN_EXTENDED_ADDITIONAL = 0x26,
	UBLOCK_GREEK_EXTENDED = 0x27,
	UBLOCK_GENERAL_PUNCTUATION = 0x28,
	UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS = 0x29,
	UBLOCK_CURRENCY_SYMBOLS = 0x2a,
	UBLOCK_COMBINING_MARKS_FOR_SYMBOLS = 0x2b,
	UBLOCK_LETTERLIKE_SYMBOLS = 0x2c,
	UBLOCK_NUMBER_FORMS = 0x2d,
	UBLOCK_ARROWS = 0x2e,
	UBLOCK_MATHEMATICAL_OPERATORS = 0x2f,
	UBLOCK_MISCELLANEOUS_TECHNICAL = 0x30,
	UBLOCK_CONTROL_PICTURES = 0x31,
	UBLOCK_OPTICAL_CHARACTER_RECOGNITION = 0x32,
	UBLOCK_ENCLOSED_ALPHANUMERICS = 0x33,
	UBLOCK_BOX_DRAWING = 0x34,
	UBLOCK_BLOCK_ELEMENTS = 0x35,
	UBLOCK_GEOMETRIC_SHAPES = 0x36,
	UBLOCK_MISCELLANEOUS_SYMBOLS = 0x37,
	UBLOCK_DINGBATS = 0x38,
	UBLOCK_BRAILLE_PATTERNS = 0x39,
	UBLOCK_CJK_RADICALS_SUPPLEMENT = 0x3a,
	UBLOCK_KANGXI_RADICALS = 0x3b,
	UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS = 0x3c,
	UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION = 0x3d,
	UBLOCK_HIRAGANA = 0x3e,
	UBLOCK_KATAKANA = 0x3f,
	UBLOCK_BOPOMOFO = 0x40,
	UBLOCK_HANGUL_COMPATIBILITY_JAMO = 0x41,
	UBLOCK_KANBUN = 0x42,
	UBLOCK_BOPOMOFO_EXTENDED = 0x43,
	UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS = 0x44,
	UBLOCK_CJK_COMPATIBILITY = 0x45,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A = 0x46,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS = 0x47,
	UBLOCK_YI_SYLLABLES = 0x48,
	UBLOCK_YI_RADICALS = 0x49,
	UBLOCK_HANGUL_SYLLABLES = 0x4a,
	UBLOCK_HIGH_SURROGATES = 0x4b,
	UBLOCK_HIGH_PRIVATE_USE_SURROGATES = 0x4c,
	UBLOCK_LOW_SURROGATES = 0x4d,
	UBLOCK_PRIVATE_USE_AREA = 0x4e,
	UBLOCK_PRIVATE_USE = 0x4e,
	UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS = 0x4f,
	UBLOCK_ALPHABETIC_PRESENTATION_FORMS = 0x50,
	UBLOCK_ARABIC_PRESENTATION_FORMS_A = 0x51,
	UBLOCK_COMBINING_HALF_MARKS = 0x52,
	UBLOCK_CJK_COMPATIBILITY_FORMS = 0x53,
	UBLOCK_SMALL_FORM_VARIANTS = 0x54,
	UBLOCK_ARABIC_PRESENTATION_FORMS_B = 0x55,
	UBLOCK_SPECIALS = 0x56,
	UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS = 0x57,
	UBLOCK_OLD_ITALIC = 0x58,
	UBLOCK_GOTHIC = 0x59,
	UBLOCK_DESERET = 0x5a,
	UBLOCK_BYZANTINE_MUSICAL_SYMBOLS = 0x5b,
	UBLOCK_MUSICAL_SYMBOLS = 0x5c,
	UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS = 0x5d,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B = 0x5e,
	UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT = 0x5f,
	UBLOCK_TAGS = 0x60,
	UBLOCK_CYRILLIC_SUPPLEMENT = 0x61,
	UBLOCK_CYRILLIC_SUPPLEMENTARY = 0x61,
	UBLOCK_TAGALOG = 0x62,
	UBLOCK_HANUNOO = 0x63,
	UBLOCK_BUHID = 0x64,
	UBLOCK_TAGBANWA = 0x65,
	UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A = 0x66,
	UBLOCK_SUPPLEMENTAL_ARROWS_A = 0x67,
	UBLOCK_SUPPLEMENTAL_ARROWS_B = 0x68,
	UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B = 0x69,
	UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS = 0x6a,
	UBLOCK_KATAKANA_PHONETIC_EXTENSIONS = 0x6b,
	UBLOCK_VARIATION_SELECTORS = 0x6c,
	UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A = 0x6d,
	UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B = 0x6e,
	UBLOCK_LIMBU = 0x6f,
	UBLOCK_TAI_LE = 0x70,
	UBLOCK_KHMER_SYMBOLS = 0x71,
	UBLOCK_PHONETIC_EXTENSIONS = 0x72,
	UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS = 0x73,
	UBLOCK_YIJING_HEXAGRAM_SYMBOLS = 0x74,
	UBLOCK_LINEAR_B_SYLLABARY = 0x75,
	UBLOCK_LINEAR_B_IDEOGRAMS = 0x76,
	UBLOCK_AEGEAN_NUMBERS = 0x77,
	UBLOCK_UGARITIC = 0x78,
	UBLOCK_SHAVIAN = 0x79,
	UBLOCK_OSMANYA = 0x7a,
	UBLOCK_CYPRIOT_SYLLABARY = 0x7b,
	UBLOCK_TAI_XUAN_JING_SYMBOLS = 0x7c,
	UBLOCK_VARIATION_SELECTORS_SUPPLEMENT = 0x7d,
	UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION = 0x7e,
	UBLOCK_ANCIENT_GREEK_NUMBERS = 0x7f,
	UBLOCK_ARABIC_SUPPLEMENT = 0x80,
	UBLOCK_BUGINESE = 0x81,
	UBLOCK_CJK_STROKES = 0x82,
	UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT = 0x83,
	UBLOCK_COPTIC = 0x84,
	UBLOCK_ETHIOPIC_EXTENDED = 0x85,
	UBLOCK_ETHIOPIC_SUPPLEMENT = 0x86,
	UBLOCK_GEORGIAN_SUPPLEMENT = 0x87,
	UBLOCK_GLAGOLITIC = 0x88,
	UBLOCK_KHAROSHTHI = 0x89,
	UBLOCK_MODIFIER_TONE_LETTERS = 0x8a,
	UBLOCK_NEW_TAI_LUE = 0x8b,
	UBLOCK_OLD_PERSIAN = 0x8c,
	UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT = 0x8d,
	UBLOCK_SUPPLEMENTAL_PUNCTUATION = 0x8e,
	UBLOCK_SYLOTI_NAGRI = 0x8f,
	UBLOCK_TIFINAGH = 0x90,
	UBLOCK_VERTICAL_FORMS = 0x91,
	UBLOCK_NKO = 0x92,
	UBLOCK_BALINESE = 0x93,
	UBLOCK_LATIN_EXTENDED_C = 0x94,
	UBLOCK_LATIN_EXTENDED_D = 0x95,
	UBLOCK_PHAGS_PA = 0x96,
	UBLOCK_PHOENICIAN = 0x97,
	UBLOCK_CUNEIFORM = 0x98,
	UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION = 0x99,
	UBLOCK_COUNTING_ROD_NUMERALS = 0x9a,
	UBLOCK_SUNDANESE = 0x9b,
	UBLOCK_LEPCHA = 0x9c,
	UBLOCK_OL_CHIKI = 0x9d,
	UBLOCK_CYRILLIC_EXTENDED_A = 0x9e,
	UBLOCK_VAI = 0x9f,
	UBLOCK_CYRILLIC_EXTENDED_B = 0xa0,
	UBLOCK_SAURASHTRA = 0xa1,
	UBLOCK_KAYAH_LI = 0xa2,
	UBLOCK_REJANG = 0xa3,
	UBLOCK_CHAM = 0xa4,
	UBLOCK_ANCIENT_SYMBOLS = 0xa5,
	UBLOCK_PHAISTOS_DISC = 0xa6,
	UBLOCK_LYCIAN = 0xa7,
	UBLOCK_CARIAN = 0xa8,
	UBLOCK_LYDIAN = 0xa9,
	UBLOCK_MAHJONG_TILES = 0xaa,
	UBLOCK_DOMINO_TILES = 0xab,
	UBLOCK_SAMARITAN = 0xac,
	UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED = 0xad,
	UBLOCK_TAI_THAM = 0xae,
	UBLOCK_VEDIC_EXTENSIONS = 0xaf,
	UBLOCK_LISU = 0xb0,
	UBLOCK_BAMUM = 0xb1,
	UBLOCK_COMMON_INDIC_NUMBER_FORMS = 0xb2,
	UBLOCK_DEVANAGARI_EXTENDED = 0xb3,
	UBLOCK_HANGUL_JAMO_EXTENDED_A = 0xb4,
	UBLOCK_JAVANESE = 0xb5,
	UBLOCK_MYANMAR_EXTENDED_A = 0xb6,
	UBLOCK_TAI_VIET = 0xb7,
	UBLOCK_MEETEI_MAYEK = 0xb8,
	UBLOCK_HANGUL_JAMO_EXTENDED_B = 0xb9,
	UBLOCK_IMPERIAL_ARAMAIC = 0xba,
	UBLOCK_OLD_SOUTH_ARABIAN = 0xbb,
	UBLOCK_AVESTAN = 0xbc,
	UBLOCK_INSCRIPTIONAL_PARTHIAN = 0xbd,
	UBLOCK_INSCRIPTIONAL_PAHLAVI = 0xbe,
	UBLOCK_OLD_TURKIC = 0xbf,
	UBLOCK_RUMI_NUMERAL_SYMBOLS = 0xc0,
	UBLOCK_KAITHI = 0xc1,
	UBLOCK_EGYPTIAN_HIEROGLYPHS = 0xc2,
	UBLOCK_ENCLOSED_ALPHANUMERIC_SUPPLEMENT = 0xc3,
	UBLOCK_ENCLOSED_IDEOGRAPHIC_SUPPLEMENT = 0xc4,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C = 0xc5,
	UBLOCK_MANDAIC = 0xc6,
	UBLOCK_BATAK = 0xc7,
	UBLOCK_ETHIOPIC_EXTENDED_A = 0xc8,
	UBLOCK_BRAHMI = 0xc9,
	UBLOCK_BAMUM_SUPPLEMENT = 0xca,
	UBLOCK_KANA_SUPPLEMENT = 0xcb,
	UBLOCK_PLAYING_CARDS = 0xcc,
	UBLOCK_MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS = 0xcd,
	UBLOCK_EMOTICONS = 0xce,
	UBLOCK_TRANSPORT_AND_MAP_SYMBOLS = 0xcf,
	UBLOCK_ALCHEMICAL_SYMBOLS = 0xd0,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D = 0xd1,
	UBLOCK_ARABIC_EXTENDED_A = 0xd2,
	UBLOCK_ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS = 0xd3,
	UBLOCK_CHAKMA = 0xd4,
	UBLOCK_MEETEI_MAYEK_EXTENSIONS = 0xd5,
	UBLOCK_MEROITIC_CURSIVE = 0xd6,
	UBLOCK_MEROITIC_HIEROGLYPHS = 0xd7,
	UBLOCK_MIAO = 0xd8,
	UBLOCK_SHARADA = 0xd9,
	UBLOCK_SORA_SOMPENG = 0xda,
	UBLOCK_SUNDANESE_SUPPLEMENT = 0xdb,
	UBLOCK_TAKRI = 0xdc,
	UBLOCK_COUNT = 0xdd,
	UBLOCK_INVALID_CODE = 0xff,
};

enum class EDebugState
{
	DEBUGSTATE_None = 0x0,
	DEBUGSTATE_IsolateDryAudio = 0x1,
	DEBUGSTATE_IsolateReverb = 0x2,
	DEBUGSTATE_TestLPF = 0x3,
	DEBUGSTATE_TestStereoBleed = 0x4,
	DEBUGSTATE_TestLFEBleed = 0x5,
	DEBUGSTATE_DisableLPF = 0x6,
	DEBUGSTATE_DisableRadio = 0x7,
	DEBUGSTATE_MAX = 0x8,
};

namespace EPawnActionResult
{
	enum Type
	{
		InProgress = 0x0,
		Success = 0x1,
		Failed = 0x2,
		Aborted = 0x3,
	};
}

namespace FAIStimulus
{
	enum FResult
	{
		SensingSucceeded = 0x0,
		SensingFailed = 0x1,
	};
}

enum class ECmdList
{
	EGfx = 0x0,
	ECompute = 0x1,
};

namespace ETwoPlayerSplitScreenType
{
	enum Type
	{
		Horizontal = 0x0,
		Vertical = 0x1,
	};
}

enum class ESimpleElementBlendMode
{
	SE_BLEND_Opaque = 0x0,
	SE_BLEND_Masked = 0x1,
	SE_BLEND_Translucent = 0x2,
	SE_BLEND_Additive = 0x3,
	SE_BLEND_Modulate = 0x4,
	SE_BLEND_MaskedDistanceField = 0x5,
	SE_BLEND_MaskedDistanceFieldShadowed = 0x6,
	SE_BLEND_TranslucentDistanceField = 0x7,
	SE_BLEND_TranslucentDistanceFieldShadowed = 0x8,
	SE_BLEND_AlphaComposite = 0x9,
	SE_BLEND_AlphaBlend = 0xa,
	SE_BLEND_TranslucentAlphaOnly = 0xb,
	SE_BLEND_RGBA_MASK_START = 0xc,
	SE_BLEND_RGBA_MASK_END = 0x2b,
	SE_BLEND_MAX = 0x2c,
};

namespace ETribeGroupPermission
{
	enum Type
	{
		STRUCTUREACTIVATE = 0x0,
		INVENTORYACCESS = 0x1,
		PET_ORDER = 0x2,
		PET_RIDE = 0x3,
		GENERAL_STRUCTUREDEMOLISH = 0x4,
		GENERAL_STRUCTUREATTACHMENT = 0x5,
		GENERAL_BUILDSTRUCTUREINRANGE = 0x6,
		INVITEMEMBER = 0x7,
		PROMOTEMEMBER = 0x8,
		DEMOTEMEMBER = 0x9,
		BANISHMEMBER = 0xa,
		PET_UNCLAIM = 0xb,
		TELEPORT_MEMBERS = 0xc,
		TELEPORT_DINOS = 0xd,
	};
}

namespace ERHIFeatureLevel
{
	enum Type
	{
		ES2 = 0x0,
		ES3_1 = 0x1,
		SM4 = 0x2,
		SM5 = 0x3,
		Num = 0x4,
	};
}

namespace ESelectInfo
{
	enum Type
	{
		OnKeyPress = 0x0,
		OnNavigation = 0x1,
		OnMouseClick = 0x2,
		Direct = 0x3,
	};
}

namespace EOnlineFriendState
{
	enum Type
	{
		Offline = 0x0,
		Online = 0x1,
		Away = 0x2,
		Busy = 0x3,
	};
}

namespace ESlateCheckBoxType
{
	enum Type
	{
		CheckBox = 0x0,
		ToggleButton = 0x1,
	};
}

namespace ELeaderboardColumnName
{
	enum Type
	{
		MissionTag = 0x0,
		PlayerNetId = 0x1,
		TribeId = 0x2,
		TimestampUtc = 0x3,
		FloatValue = 0x4,
		IntValue = 0x5,
		NameValue = 0x6,
		StringValue = 0x7,
	};
}

namespace ELeaderboardUpdateMethod
{
	enum Type
	{
		KeepBest = 0x0,
		Force = 0x1,
	};
}

enum class EStencilOp
{
	SO_Keep = 0x0,
	SO_Zero = 0x1,
	SO_Replace = 0x2,
	SO_SaturatedIncrement = 0x3,
	SO_SaturatedDecrement = 0x4,
	SO_Invert = 0x5,
	SO_Increment = 0x6,
	SO_Decrement = 0x7,
};

namespace ECameraProjectionMode
{
	enum Type
	{
		Perspective = 0x0,
		Orthographic = 0x1,
	};
}

namespace EMarkMaskBits
{
	enum Type
	{
		StaticMeshShadowDepthMapMask = 0x1,
		StaticMeshVisibilityMapMask = 0x2,
		StaticMeshVelocityMapMask = 0x4,
		StaticMeshOccluderMapMask = 0x8,
	};
}

namespace FNavigationSystem
{
	enum EMode
	{
		InvalidMode = 0xff,
		GameMode = 0x0,
		EditorMode = 0x1,
		SimulationMode = 0x2,
		PIEMode = 0x3,
	};
}

enum class EMaterialSamplerType
{
	SAMPLERTYPE_Color = 0x0,
	SAMPLERTYPE_Grayscale = 0x1,
	SAMPLERTYPE_Alpha = 0x2,
	SAMPLERTYPE_Normal = 0x3,
	SAMPLERTYPE_Masks = 0x4,
	SAMPLERTYPE_DistanceFieldFont = 0x5,
	SAMPLERTYPE_LinearColor = 0x6,
	SAMPLERTYPE_LinearGrayscale = 0x7,
	SAMPLERTYPE_MAX = 0x8,
};

enum class UNumberFormatFields
{
	UNUM_INTEGER_FIELD = 0x0,
	UNUM_FRACTION_FIELD = 0x1,
	UNUM_DECIMAL_SEPARATOR_FIELD = 0x2,
	UNUM_EXPONENT_SYMBOL_FIELD = 0x3,
	UNUM_EXPONENT_SIGN_FIELD = 0x4,
	UNUM_EXPONENT_FIELD = 0x5,
	UNUM_GROUPING_SEPARATOR_FIELD = 0x6,
	UNUM_CURRENCY_FIELD = 0x7,
	UNUM_PERCENT_FIELD = 0x8,
	UNUM_PERMILL_FIELD = 0x9,
	UNUM_SIGN_FIELD = 0xa,
	UNUM_FIELD_COUNT = 0xb,
};

namespace EMatineeCaptureType
{
	enum Type
	{
		AVI = 0x0,
		BMP = 0x1,
		PNG = 0x2,
		JPEG = 0x3,
	};
}

enum class EAspectRatioAxisConstraint
{
	AspectRatio_MaintainYFOV = 0x0,
	AspectRatio_MaintainXFOV = 0x1,
	AspectRatio_MajorAxisFOV = 0x2,
	AspectRatio_MAX = 0x3,
};

namespace ENavigationCoordSystem
{
	enum Type
	{
		Unreal = 0x0,
		Recast = 0x1,
	};
}

namespace ERHISurfaceLevel
{
	enum Type
	{
		Low = 0x0,
		Default = 0x1,
		Num = 0x2,
	};
}

namespace ERecastNamedFilter
{
	enum Type
	{
		FilterOutNavLinks = 0x0,
		FilterOutAreas = 0x1,
		FilterOutNavLinksAndAreas = 0x2,
		NamedFiltersCount = 0x3,
	};
}

namespace ENullTerminatedString
{
	enum Type
	{
		No = 0x0,
		Yes = 0x1,
	};
}

enum class EPrimalStructureElevatorState
{
	PSLS_Down = 0x0,
	PSLS_Up = 0x1,
};

enum class EPrimitiveType
{
	PT_TriangleList = 0x0,
	PT_TriangleStrip = 0x1,
	PT_LineList = 0x2,
	PT_QuadList = 0x3,
	PT_PointList = 0x4,
	PT_1_ControlPointPatchList = 0x5,
	PT_2_ControlPointPatchList = 0x6,
	PT_3_ControlPointPatchList = 0x7,
	PT_4_ControlPointPatchList = 0x8,
	PT_5_ControlPointPatchList = 0x9,
	PT_6_ControlPointPatchList = 0xa,
	PT_7_ControlPointPatchList = 0xb,
	PT_8_ControlPointPatchList = 0xc,
	PT_9_ControlPointPatchList = 0xd,
	PT_10_ControlPointPatchList = 0xe,
	PT_11_ControlPointPatchList = 0xf,
	PT_12_ControlPointPatchList = 0x10,
	PT_13_ControlPointPatchList = 0x11,
	PT_14_ControlPointPatchList = 0x12,
	PT_15_ControlPointPatchList = 0x13,
	PT_16_ControlPointPatchList = 0x14,
	PT_17_ControlPointPatchList = 0x15,
	PT_18_ControlPointPatchList = 0x16,
	PT_19_ControlPointPatchList = 0x17,
	PT_20_ControlPointPatchList = 0x18,
	PT_21_ControlPointPatchList = 0x19,
	PT_22_ControlPointPatchList = 0x1a,
	PT_23_ControlPointPatchList = 0x1b,
	PT_24_ControlPointPatchList = 0x1c,
	PT_25_ControlPointPatchList = 0x1d,
	PT_26_ControlPointPatchList = 0x1e,
	PT_27_ControlPointPatchList = 0x1f,
	PT_28_ControlPointPatchList = 0x20,
	PT_29_ControlPointPatchList = 0x21,
	PT_30_ControlPointPatchList = 0x22,
	PT_31_ControlPointPatchList = 0x23,
	PT_32_ControlPointPatchList = 0x24,
	PT_Num = 0x25,
	PT_NumBits = 0x6,
};

namespace EPathFollowingAction
{
	enum Type
	{
		Error = 0x0,
		NoMove = 0x1,
		DirectMove = 0x2,
		PartialPath = 0x3,
		PathToGoal = 0x4,
	};
}

enum class EStereoscopicPass
{
	eSSP_FULL = 0x0,
	eSSP_LEFT_EYE = 0x1,
	eSSP_RIGHT_EYE = 0x2,
};

enum class EAllowOverscroll
{
	Yes = 0x0,
	No = 0x1,
};

enum class ECursorMoveMethod
{
	Cardinal = 0x0,
	ScreenPosition = 0x1,
};

namespace ETableViewMode
{
	enum Type
	{
		List = 0x0,
		Tile = 0x1,
		Tree = 0x2,
	};
}

enum class EPhysBodyOp
{
	PBO_None = 0x0,
	PBO_Term = 0x1,
	PBO_Disable = 0x2,
	PBO_MAX = 0x3,
};

enum class ULocDataLocaleType
{
	ULOC_ACTUAL_LOCALE = 0x0,
	ULOC_VALID_LOCALE = 0x1,
	ULOC_REQUESTED_LOCALE = 0x2,
	ULOC_DATA_LOCALE_TYPE_LIMIT = 0x3,
};

enum class EUniformBufferBaseType
{
	UBMT_INVALID = 0x0,
	UBMT_BOOL = 0x1,
	UBMT_INT32 = 0x2,
	UBMT_UINT32 = 0x3,
	UBMT_FLOAT32 = 0x4,
	UBMT_STRUCT = 0x5,
	UBMT_SRV = 0x6,
	UBMT_UAV = 0x7,
	UBMT_SAMPLER = 0x8,
	UBMT_TEXTURE = 0x9,
};

namespace SDockingNode
{
	enum Type
	{
		DockTabStack = 0x0,
		DockSplitter = 0x1,
		DockArea = 0x2,
		PlaceholderNode = 0x3,
	};
}

enum class ESamplerFilter
{
	SF_Point = 0x0,
	SF_Bilinear = 0x1,
	SF_Trilinear = 0x2,
	SF_AnisotropicPoint = 0x3,
	SF_AnisotropicLinear = 0x4,
};

enum class WICDecodeOptions
{
	WICDecodeMetadataCacheOnDemand = 0x0,
	WICDecodeMetadataCacheOnLoad = 0x1,
	WICMETADATACACHEOPTION_FORCE_DWORD = 0x7fffffff,
};

namespace EDrawDebugTrace
{
	enum Type
	{
		None = 0x0,
		ForOneFrame = 0x1,
		ForDuration = 0x2,
		Persistent = 0x3,
	};
}

namespace FGenericPlatformMemory
{
	enum ESharedMemoryAccess
	{
		Read = 0x2,
		Write = 0x4,
	};
}

namespace FInputChord
{
	enum RelationshipType
	{
		None = 0x0,
		Same = 0x1,
		Masked = 0x2,
		Masks = 0x3,
	};
}

namespace EMeshFeatureImportance
{
	enum Type
	{
		Off = 0x0,
		Lowest = 0x1,
		Low = 0x2,
		Normal = 0x3,
		High = 0x4,
		Highest = 0x5,
	};
}

enum class MoveRequestState
{
	DT_CROWDAGENT_TARGET_NONE = 0x0,
	DT_CROWDAGENT_TARGET_FAILED = 0x1,
	DT_CROWDAGENT_TARGET_VALID = 0x2,
	DT_CROWDAGENT_TARGET_REQUESTING = 0x3,
	DT_CROWDAGENT_TARGET_WAITING_FOR_QUEUE = 0x4,
	DT_CROWDAGENT_TARGET_WAITING_FOR_PATH = 0x5,
	DT_CROWDAGENT_TARGET_VELOCITY = 0x6,
};

enum class ESaveFlags
{
	SAVE_None = 0x0,
	SAVE_NoError = 0x1,
	SAVE_FromAutosave = 0x2,
	SAVE_KeepDirty = 0x4,
	SAVE_KeepGUID = 0x8,
	SAVE_Async = 0x10,
	SAVE_Unversioned = 0x20,
	SAVE_CutdownPackage = 0x40,
};

namespace ECameraStyle
{
	enum Type
	{
		Default = 0x0,
		FirstPerson = 0x1,
		ThirdPerson = 0x2,
		FreeCam = 0x3,
		Orbit = 0x4,
		Spectator = 0x5,
	};
}

namespace EBPMapCheckSeverity
{
	enum Type
	{
		Info = 0x0,
		Warning = 0x1,
		PerformanceWarning = 0x2,
		Error = 0x3,
	};
}

enum class ERichCurveTangentMode
{
	RCTM_Auto = 0x0,
	RCTM_User = 0x1,
	RCTM_Break = 0x2,
};

enum class ERasterizerCullMode
{
	CM_None = 0x0,
	CM_CW = 0x1,
	CM_CCW = 0x2,
};

namespace FClothingActor
{
	enum TeleportMode
	{
		Continuous = 0x0,
		Teleport = 0x1,
		TeleportAndReset = 0x2,
	};
}

enum class EVertexElementType
{
	VET_None = 0x0,
	VET_Float1 = 0x1,
	VET_Float2 = 0x2,
	VET_Float3 = 0x3,
	VET_Float4 = 0x4,
	VET_PackedNormal = 0x5,
	VET_UByte4 = 0x6,
	VET_UByte4N = 0x7,
	VET_Color = 0x8,
	VET_Short2 = 0x9,
	VET_Short4 = 0xa,
	VET_Short2N = 0xb,
	VET_Half2 = 0xc,
	VET_Half4 = 0xd,
	VET_Short4N = 0xe,
	VET_UShort2 = 0xf,
	VET_UShort4 = 0x10,
	VET_UShort2N = 0x11,
	VET_UShort4N = 0x12,
	VET_URGB10A2N = 0x13,
	VET_MAX = 0x14,
};

namespace EClearSceneOptions
{
	enum Type
	{
		NoClear = 0x0,
		HardwareClear = 0x1,
		QuadAtMaxZ = 0x2,
	};
}

enum class EAudioSpeakers
{
	SPEAKER_FrontLeft = 0x0,
	SPEAKER_FrontRight = 0x1,
	SPEAKER_FrontCenter = 0x2,
	SPEAKER_LowFrequency = 0x3,
	SPEAKER_LeftSurround = 0x4,
	SPEAKER_RightSurround = 0x5,
	SPEAKER_LeftBack = 0x6,
	SPEAKER_RightBack = 0x7,
	SPEAKER_Count = 0x8,
};

namespace FSubobjectPtr
{
	enum EInvalidPtr
	{
		InvalidPtrValue = 0x3,
	};
}

namespace FXAudio2SoundSource
{
	enum EDataReadMode
	{
		Synchronous = 0x0,
		Asynchronous = 0x1,
		AsynchronousSkipFirstFrame = 0x2,
	};
}

enum class EHitProxyPriority
{
	HPP_World = 0x0,
	HPP_Wireframe = 0x1,
	HPP_Foreground = 0x2,
	HPP_UI = 0x3,
};

enum class EVoiceChatChannelType
{
	NonPositional = 0x0,
	Positional = 0x1,
	Echo = 0x2,
};

enum class FStreamoutLogic
{
	StreamOut_UnwantedMips = 0x0,
	StreamOut_AllMips = 0x1,
};

namespace EMessageTracerDispatchTypes
{
	enum Type
	{
		Direct = 0x0,
		Pending = 0x1,
		TaskGraph = 0x2,
	};
}

enum class EOptimizationType
{
	OT_NumOfTriangles = 0x0,
	OT_MaxDeviation = 0x1,
	OT_MAX = 0x2,
};

enum class EImpactDamageOverride
{
	IDO_None = 0x0,
	IDO_On = 0x1,
	IDO_Off = 0x2,
	IDO_MAX = 0x3,
};

enum class ENetRole
{
	ROLE_None = 0x0,
	ROLE_SimulatedProxy = 0x1,
	ROLE_AutonomousProxy = 0x2,
	ROLE_Authority = 0x3,
	ROLE_MAX = 0x4,
};

enum class EPolyFlags
{
	PF_Invisible = 0x1,
	PF_NotSolid = 0x8,
	PF_Semisolid = 0x20,
	PF_GeomMarked = 0x40,
	PF_TwoSided = 0x100,
	PF_Portal = 0x4000000,
	PF_Memorized = 0x1000000,
	PF_Selected = 0x2000000,
	PF_HiddenEd = 0x8000000,
	PF_Hovered = 0x10000000,
	PF_EdProcessed = 0x40000000,
	PF_EdCut = 0x80000000,
	PF_NoEdit = 0xd3000000,
	PF_NoImport = 0xd3000000,
	PF_AddLast = 0x28,
	PF_NoAddToBSP = 0xd3000000,
	PF_ModelComponentMask = 0x0,
	PF_DefaultFlags = 0x0,
};

enum class DistributionParamMode
{
	DPM_Normal = 0x0,
	DPM_Abs = 0x1,
	DPM_Direct = 0x2,
	DPM_MAX = 0x3,
};

namespace ESeedCropPhase
{
	enum Type
	{
		Seedling = 0x0,
		Midling = 0x1,
		Growthling = 0x2,
		Fruiting = 0x3,
		MAX = 0x4,
	};
}

enum class EStaticConstructor
{
	EC_StaticConstructor = 0x0,
};

enum class ERichCurveInterpMode
{
	RCIM_Linear = 0x0,
	RCIM_Constant = 0x1,
	RCIM_Cubic = 0x2,
};

enum class ETimelineLengthMode
{
	TL_TimelineLength = 0x0,
	TL_LastKeyFrame = 0x1,
};

namespace ULinkerLoad
{
	enum EVerifyResult
	{
		VERIFY_Failed = 0x0,
		VERIFY_Success = 0x1,
		VERIFY_Redirected = 0x2,
	};
}

enum class EBiomeZone
{
	None = 0x0,
	Beach = 0x1,
	Canyon = 0x2,
	River = 0x3,
	Grassland = 0x4,
	Swamp = 0x5,
	Jungle = 0x6,
	RedwoodForest = 0x7,
	Mountain = 0x8,
	Snow = 0x9,
	Ocean = 0xa,
	Lava = 0xb,
	Surface = 0xc,
	FertileChamber = 0xd,
	BioluminescentChamber = 0xe,
	ElementChamber = 0xf,
	Wasteland = 0x10,
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
	SurfaceType10 = 0xa,
	SurfaceType11 = 0xb,
	SurfaceType12 = 0xc,
	SurfaceType13 = 0xd,
	SurfaceType14 = 0xe,
	SurfaceType15 = 0xf,
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
	SurfaceType26 = 0x1a,
	SurfaceType27 = 0x1b,
	SurfaceType28 = 0x1c,
	SurfaceType29 = 0x1d,
	SurfaceType30 = 0x1e,
	SurfaceType31 = 0x1f,
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
	SurfaceType42 = 0x2a,
	SurfaceType43 = 0x2b,
	SurfaceType44 = 0x2c,
	SurfaceType45 = 0x2d,
	SurfaceType46 = 0x2e,
	SurfaceType47 = 0x2f,
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
	SurfaceType58 = 0x3a,
	SurfaceType59 = 0x3b,
	SurfaceType60 = 0x3c,
	SurfaceType61 = 0x3d,
	SurfaceType62 = 0x3e,
	SurfaceType_Max = 0x3f,
};

namespace ESlateBrushImageType
{
	enum Type
	{
		NoImage = 0x0,
		FullColor = 0x1,
		Linear = 0x2,
	};
}

namespace EBlueprintExceptionType
{
	enum Type
	{
		Breakpoint = 0x0,
		Tracepoint = 0x1,
		WireTracepoint = 0x2,
		AccessViolation = 0x3,
		InfiniteLoop = 0x4,
		NonFatalError = 0x5,
		FatalError = 0x6,
	};
}

enum class EPhysicsType
{
	PhysType_Default = 0x0,
	PhysType_Kinematic = 0x1,
	PhysType_Simulated = 0x2,
};

namespace EThreePlayerSplitScreenType
{
	enum Type
	{
		FavorTop = 0x0,
		FavorBottom = 0x1,
	};
}

namespace ECompositingSampleCount
{
	enum Type
	{
		One = 0x1,
		Two = 0x2,
		Four = 0x4,
		Eight = 0x8,
	};
}

namespace EBoneTranslationRetargetingMode
{
	enum Type
	{
		Animation = 0x0,
		Skeleton = 0x1,
		AnimationScaled = 0x2,
	};
}

namespace FScopeLogTime
{
	enum EScopeLogTimeUnits
	{
		ScopeLog_Milliseconds = 0x0,
		ScopeLog_Seconds = 0x1,
	};
}

namespace ESaveType
{
	enum Type
	{
		Map = 0x0,
		Profile = 0x1,
		Tribe = 0x2,
		CharacterSetting = 0x3,
	};
}

namespace FGenericPlatformMisc
{
	enum EScreenSaverAction
	{
		Disable = 0x0,
		Enable = 0x1,
	};
}

namespace FWindowsPlatformNamedPipe
{
	enum EState
	{
		State_Uninitialized = 0x0,
		State_Created = 0x1,
		State_Connecting = 0x2,
		State_ReadyForRW = 0x3,
		State_WaitingForRW = 0x4,
		State_ErrorPipeClosedUnexpectedly = 0x5,
	};
}

enum class EShaderParameterFlags
{
	SPF_Optional = 0x0,
	SPF_Mandatory = 0x1,
};

enum class ETextureReallocationStatus
{
	TexRealloc_Succeeded = 0x0,
	TexRealloc_Failed = 0x1,
	TexRealloc_InProgress = 0x2,
};

enum class EDepthOfFieldMethod
{
	DOFM_BokehDOF = 0x0,
	DOFM_Gaussian = 0x1,
	DOFM_MAX = 0x2,
};

enum class EWorkshopFileAction
{
	k_EWorkshopFileActionPlayed = 0x0,
	k_EWorkshopFileActionCompleted = 0x1,
};

namespace ESubsequentsMode
{
	enum Type
	{
		TrackSubsequents = 0x0,
		FireAndForget = 0x1,
	};
}

namespace FStripDataFlags
{
	enum EStrippedData
	{
		None = 0x0,
		Editor = 0x1,
		Server = 0x2,
		All = 0xff,
	};
}

namespace EListSessionStatus
{
	enum Type
	{
		SearchingOfficial = 0x0,
		SearchingUnofficial = 0x1,
		SearchingHistory = 0x2,
		SearchingFavorites = 0x3,
		SearchingFriends = 0x4,
		SearchingLAN = 0x5,
		SearchingListenServers = 0x6,
		SearchingUnOfficialPCServer = 0x7,
		SearchingOfficialLegacy = 0x8,
		MAX = 0x9,
	};
}

enum class EAOUpsampleType
{
	AOUpsample_OutputBentNormal = 0x0,
	AOUpsample_OutputAO = 0x1,
	AOUpsample_OutputBentNormalAndIrradiance = 0x2,
	AOUpsample_OutputIrradiance = 0x3,
};

enum class ELightComponentType
{
	LightType_Directional = 0x0,
	LightType_Point = 0x1,
	LightType_Spot = 0x2,
	LightType_MAX = 0x3,
	LightType_NumBits = 0x2,
};

namespace EAxisOption
{
	enum Type
	{
		X = 0x0,
		Y = 0x1,
		Z = 0x2,
		X_Neg = 0x3,
		Y_Neg = 0x4,
		Z_Neg = 0x5,
	};
}

enum class EOverlapFilterOption
{
	OverlapFilter_All = 0x0,
	OverlapFilter_DynamicOnly = 0x1,
	OverlapFilter_StaticOnly = 0x2,
};

namespace EBTMemoryInit
{
	enum Type
	{
		Initialize = 0x0,
		RestoreSubtree = 0x1,
	};
}

enum class EAntiDupeTransactionLog
{
	Item_Upload = 0x0,
	Dino_Upload = 0x1,
	Player_Upload = 0x2,
	MAX_ENTRY = 0x3,
};

namespace ERootMotionRootLock
{
	enum Type
	{
		RefPose = 0x0,
		AnimFirstFrame = 0x1,
		Zero = 0x2,
	};
}

enum class ShowHarvestingElementOption
{
	NoMulticastShowInstance = 0x0,
	MulticastShowInstance = 0x1,
};

namespace ENetworkFailure
{
	enum Type
	{
		NetDriverAlreadyExists = 0x0,
		NetDriverCreateFailure = 0x1,
		NetDriverListenFailure = 0x2,
		ConnectionLost = 0x3,
		ConnectionTimeout = 0x4,
		FailureReceived = 0x5,
		BuildIdMismatch = 0x6,
		OutdatedClient = 0x7,
		OutdatedServer = 0x8,
		PendingConnectionFailure = 0x9,
		TotalConversionIDMismatch = 0xa,
		ModMisMatch = 0xb,
		ModDLCNotInstalled = 0xc,
		PGTerrainMismatch = 0xd,
	};
}

enum class ETrailsRenderAxisOption
{
	Trails_CameraUp = 0x0,
	Trails_SourceUp = 0x1,
	Trails_WorldUp = 0x2,
	Trails_MAX = 0x3,
};

enum class UColReorderCode
{
	UCOL_REORDER_CODE_DEFAULT = 0xff,
	UCOL_REORDER_CODE_NONE = 0x67,
	UCOL_REORDER_CODE_OTHERS = 0x67,
	UCOL_REORDER_CODE_SPACE = 0x1000,
	UCOL_REORDER_CODE_FIRST = 0x1000,
	UCOL_REORDER_CODE_PUNCTUATION = 0x1001,
	UCOL_REORDER_CODE_SYMBOL = 0x1002,
	UCOL_REORDER_CODE_CURRENCY = 0x1003,
	UCOL_REORDER_CODE_DIGIT = 0x1004,
	UCOL_REORDER_CODE_LIMIT = 0x1005,
};

enum class ECompareFunction
{
	CF_Less = 0x0,
	CF_LessEqual = 0x1,
	CF_Greater = 0x2,
	CF_GreaterEqual = 0x3,
	CF_Equal = 0x4,
	CF_NotEqual = 0x5,
	CF_Never = 0x6,
	CF_Always = 0x7,
	CF_DepthNearOrEqual = 0x3,
	CF_DepthNear = 0x2,
	CF_DepthFartherOrEqual = 0x1,
};

namespace EButtonTouchMethod
{
	enum Type
	{
		DownAndUp = 0x0,
		PreciseTap = 0x1,
	};
}

namespace EVersionComparison
{
	enum Type
	{
		Neither = 0x0,
		First = 0x1,
		Second = 0x2,
	};
}

namespace EImmediateFlushType
{
	enum Type
	{
		WaitForOutstandingTasksOnly = 0x0,
		DispatchToRHIThread = 0x1,
		WaitForDispatchToRHIThread = 0x2,
		FlushRHIThread = 0x3,
		FlushRHIThreadFlushResources = 0x4,
	};
}

enum class ESceneDepthPriorityGroup
{
	SDPG_World = 0x0,
	SDPG_Foreground = 0x1,
	SDPG_MAX = 0x2,
};

namespace ESlateBrushMirrorType
{
	enum Type
	{
		NoMirror = 0x0,
		Horizontal = 0x1,
		Vertical = 0x2,
		Both = 0x3,
	};
}

enum class ELifetimeCondition
{
	COND_None = 0x0,
	COND_InitialOnly = 0x1,
	COND_OwnerOnly = 0x2,
	COND_SkipOwner = 0x3,
	COND_SimulatedOnly = 0x4,
	COND_AutonomousOnly = 0x5,
	COND_SimulatedOrPhysics = 0x6,
	COND_InitialOrOwner = 0x7,
	COND_Custom = 0x8,
	COND_Max = 0x9,
};

enum class EMusicTrackState
{
	EMTS_Initalizing = 0x0,
	EMTS_Loading = 0x1,
	EMTS_WaitingToPlay = 0x2,
	EMTS_CrossFadeIn = 0x3,
	EMTS_Playing = 0x4,
	EMTS_CrossFadeOut = 0x5,
	EMTS_Finished = 0x6,
	EMTS_Failed = 0x7,
};

enum class EBlueprintPinStyleType
{
	BPST_Original = 0x0,
	BPST_VariantA = 0x1,
};

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
		Weapon = 0x9,
		Snapshot = 0xa,
		MAX = 0xb,
	};
}

namespace EEarlyZPass
{
	enum Type
	{
		None = 0x0,
		OpaqueOnly = 0x1,
		OpaqueAndMasked = 0x2,
		Auto = 0x3,
	};
}

enum class EConnectionState
{
	USOCK_Invalid = 0x0,
	USOCK_Closed = 0x1,
	USOCK_Pending = 0x2,
	USOCK_Open = 0x3,
};

enum class UCalendarWallTimeOption
{
	UCAL_WALLTIME_LAST = 0x0,
	UCAL_WALLTIME_FIRST = 0x1,
	UCAL_WALLTIME_NEXT_VALID = 0x2,
};

namespace ECustomDepth
{
	enum Type
	{
		Disabled = 0x0,
		Enabled = 0x1,
		EnabledOnDemand = 0x2,
	};
}

namespace ESocketWaitConditions
{
	enum Type
	{
		WaitForRead = 0x0,
		WaitForWrite = 0x1,
		WaitForReadOrWrite = 0x2,
	};
}

namespace EAudioOutputTarget
{
	enum Type
	{
		Speaker = 0x0,
		Controller = 0x1,
		ControllerFallbackToSpeaker = 0x2,
	};
}

namespace EBiomeFilter
{
	enum Type
	{
		ARCTIC = 0x1,
		BOG = 0x4,
		LUNAR = 0x8,
		OCEAN = 0x10,
		VOLCANIC = 0x20,
		ALL_MISSIONS = 0x3d,
	};
}

namespace ETravelFailure
{
	enum Type
	{
		NoLevel = 0x0,
		LoadMapFailure = 0x1,
		InvalidURL = 0x2,
		PackageMissing = 0x3,
		PackageVersion = 0x4,
		NoDownload = 0x5,
		TravelFailure = 0x6,
		CheatCommands = 0x7,
		PendingNetGameCreateFailure = 0x8,
		CloudSaveFailure = 0x9,
		ServerTravelFailure = 0xa,
		ClientTravelFailure = 0xb,
	};
}

namespace EPrimalStatsValueTypes
{
	enum Type
	{
		TotalShots = 0x0,
		Misses = 0x1,
		HitsStructure = 0x2,
		HitsDinoBody = 0x3,
		HitsDinoCritical = 0x4,
		HitsPlayerBody = 0x5,
		HitsPlayerCritical = 0x6,
		MAX = 0x7,
	};
}

enum class dtStraightPathOptions
{
	DT_STRAIGHTPATH_AREA_CROSSINGS = 0x1,
	DT_STRAIGHTPATH_ALL_CROSSINGS = 0x2,
};

enum class EFoldedMathOperation
{
	FMO_Add = 0x0,
	FMO_Sub = 0x1,
	FMO_Mul = 0x2,
	FMO_Div = 0x3,
	FMO_Dot = 0x4,
};

enum class EByteOrderMark
{
	UTF8 = 0x0,
	Unspecified = 0x1,
};

namespace EGraphDataStyle
{
	enum Type
	{
		Lines = 0x0,
		Filled = 0x1,
	};
}

enum class EResourceTransitionPipeline
{
	EGfxToCompute = 0x0,
	EComputeToGfx = 0x1,
	EGfxToGfx = 0x2,
	EComputeToCompute = 0x3,
};

namespace EVersionComponent
{
	enum Type
	{
		Major = 0x0,
		Minor = 0x1,
		Patch = 0x2,
		Changelist = 0x3,
		Branch = 0x4,
	};
}

enum class ETextureSourceArtType
{
	TSAT_Uncompressed = 0x0,
	TSAT_PNGCompressed = 0x1,
	TSAT_DDSFile = 0x2,
	TSAT_MAX = 0x3,
};

enum class EGameUserSettingsVersion
{
	UE_GAMEUSERSETTINGS_VERSION = 0x5,
};

enum class TextureCompressionSettings
{
	TC_Default = 0x0,
	TC_Normalmap = 0x1,
	TC_Masks = 0x2,
	TC_Grayscale = 0x3,
	TC_Displacementmap = 0x4,
	TC_VectorDisplacementmap = 0x5,
	TC_HDR = 0x6,
	TC_EditorIcon = 0x7,
	TC_Alpha = 0x8,
	TC_DistanceFieldFont = 0x9,
	TC_MAX = 0xa,
};

namespace EngineUtils
{
	enum EAssetToLoad
	{
		ATL_Regular = 0x0,
		ATL_Class = 0x1,
	};
}

namespace EKismetCompileType
{
	enum Type
	{
		SkeletonOnly = 0x0,
		Full = 0x1,
		StubAfterFailure = 0x2,
		BytecodeOnly = 0x3,
	};
}

enum class EDistributionVectorLockFlags
{
	EDVLF_None = 0x0,
	EDVLF_XY = 0x1,
	EDVLF_XZ = 0x2,
	EDVLF_YZ = 0x3,
	EDVLF_XYZ = 0x4,
	EDVLF_MAX = 0x5,
};

enum class EMoveComponentFlags
{
	MOVECOMP_NoFlags = 0x0,
	MOVECOMP_IgnoreBases = 0x1,
	MOVECOMP_SkipPhysicsMove = 0x2,
	MOVECOMP_NeverIgnoreBlockingOverlaps = 0x4,
	MOVECOMP_DoCenterOfMassCheck = 0x8,
};

enum class rcAllocHint
{
	RC_ALLOC_PERM = 0x0,
	RC_ALLOC_TEMP = 0x1,
};

enum class EDenyReason
{
	k_EDenyInvalid = 0x0,
	k_EDenyInvalidVersion = 0x1,
	k_EDenyGeneric = 0x2,
	k_EDenyNotLoggedOn = 0x3,
	k_EDenyNoLicense = 0x4,
	k_EDenyCheater = 0x5,
	k_EDenyLoggedInElseWhere = 0x6,
	k_EDenyUnknownText = 0x7,
	k_EDenyIncompatibleAnticheat = 0x8,
	k_EDenyMemoryCorruption = 0x9,
	k_EDenyIncompatibleSoftware = 0xa,
	k_EDenySteamConnectionLost = 0xb,
	k_EDenySteamConnectionError = 0xc,
	k_EDenySteamResponseTimedOut = 0xd,
	k_EDenySteamValidationStalled = 0xe,
	k_EDenySteamOwnerLeftGuestUser = 0xf,
};

enum class EShaderPlatform
{
	SP_PCD3D_SM5 = 0x0,
	SP_OPENGL_SM4 = 0x1,
	SP_PS4 = 0x2,
	SP_OPENGL_PCES2 = 0x3,
	SP_XBOXONE = 0x4,
	SP_PCD3D_SM4 = 0x5,
	SP_OPENGL_SM5 = 0x6,
	SP_PCD3D_ES2 = 0x7,
	SP_OPENGL_ES2_ANDROID = 0x8,
	SP_OPENGL_ES2_WEBGL = 0x9,
	SP_OPENGL_ES2_IOS = 0xa,
	SP_METAL = 0xb,
	SP_OPENGL_SM4_MAC = 0xc,
	SP_METAL_MRT = 0xd,
	SP_OPENGL_ES31_EXT = 0xe,
	SP_PCD3D_ES3_1 = 0xf,
	SP_OPENGL_PCES3_1 = 0x10,
	SP_METAL_SM5 = 0x11,
	SP_VULKAN_PCES3_1 = 0x12,
	SP_METAL_SM4 = 0x13,
	SP_VULKAN_SM4 = 0x14,
	SP_VULKAN_SM5 = 0x15,
	SP_VULKAN_ES3_1_ANDROID = 0x16,
	SP_METAL_MACES3_1 = 0x17,
	SP_METAL_MACES2 = 0x18,
	SP_OPENGL_ES3_1_ANDROID = 0x19,
	SP_SWITCH = 0x1a,
	SP_SWITCH_FORWARD = 0x1b,
	SP_NumPlatforms = 0x1c,
	SP_NumBits = 0x5,
};

enum class EMaterialUsage
{
	MATUSAGE_SkeletalMesh = 0x0,
	MATUSAGE_ParticleSprites = 0x1,
	MATUSAGE_BeamTrails = 0x2,
	MATUSAGE_MeshParticles = 0x3,
	MATUSAGE_StaticLighting = 0x4,
	MATUSAGE_MorphTargets = 0x5,
	MATUSAGE_SplineMesh = 0x6,
	MATUSAGE_Landscape = 0x7,
	MATUSAGE_InstancedStaticMeshes = 0x8,
	MATUSAGE_Clothing = 0x9,
	MATUSAGE_UI = 0xa,
	MATUSAGE_GroundClutter = 0xb,
	MATUSAGE_MAX = 0xc,
};

namespace EKinematicBonesUpdateToPhysics
{
	enum Type
	{
		SkipSimulatingBones = 0x0,
		SkipAllBones = 0x1,
	};
}

namespace EAnimationMode
{
	enum Type
	{
		AnimationBlueprint = 0x0,
		AnimationSingleNode = 0x1,
	};
}

namespace EEventLog
{
	enum Type
	{
		MouseMove = 0x0,
		MouseEnter = 0x1,
		MouseLeave = 0x2,
		MouseButtonDown = 0x3,
		MouseButtonUp = 0x4,
		MouseButtonDoubleClick = 0x5,
		MouseWheel = 0x6,
		DragDetected = 0x7,
		DragEnter = 0x8,
		DragLeave = 0x9,
		DragOver = 0xa,
		DragDrop = 0xb,
		DropMessage = 0xc,
		KeyDown = 0xd,
		KeyUp = 0xe,
		KeyChar = 0xf,
		UICommand = 0x10,
		BeginTransaction = 0x11,
		EndTransaction = 0x12,
		TouchGesture = 0x13,
		Other = 0x14,
	};
}

enum class ERenderQueryType
{
	RQT_Undefined = 0x0,
	RQT_Occlusion = 0x1,
	RQT_AbsoluteTime = 0x2,
	RQT_Fence = 0x3,
};

enum class EFullyLoadPackageType
{
	FULLYLOAD_Map = 0x0,
	FULLYLOAD_Game_PreLoadClass = 0x1,
	FULLYLOAD_Game_PostLoadClass = 0x2,
	FULLYLOAD_Always = 0x3,
	FULLYLOAD_Mutator = 0x4,
	FULLYLOAD_MAX = 0x5,
};

namespace EClimbingMode
{
	enum Type
	{
		None = 0x0,
		Attached = 0x1,
		Finalizing = 0x2,
		MAX = 0x3,
	};
}

namespace ENavigationOptionFlag
{
	enum Type
	{
		Default = 0x0,
		Enable = 0x1,
		Disable = 0x2,
		MAX = 0x3,
	};
}

enum class EDuplicateForPie
{
	SDO_No_DuplicateForPie = 0x0,
	SDO_DuplicateForPie = 0x1,
};

enum class EConsoleType
{
	CONSOLE_Any = 0x0,
	CONSOLE_Mobile = 0x1,
	CONSOLE_XBOXONE = 0x2,
	CONSOLE_MAX = 0x3,
};

namespace ISteamHTMLSurface
{
	enum EHTMLKeyModifiers
	{
		k_eHTMLKeyModifier_None = 0x0,
		k_eHTMLKeyModifier_AltDown = 0x1,
		k_eHTMLKeyModifier_CtrlDown = 0x2,
		k_eHTMLKeyModifier_ShiftDown = 0x4,
	};
}

enum class ESamplerAddressMode
{
	AM_Wrap = 0x0,
	AM_Clamp = 0x1,
	AM_Mirror = 0x2,
	AM_Border = 0x3,
};

enum class EBlueprintType
{
	BPTYPE_Normal = 0x0,
	BPTYPE_Const = 0x1,
	BPTYPE_MacroLibrary = 0x2,
	BPTYPE_Interface = 0x3,
	BPTYPE_LevelScript = 0x4,
	BPTYPE_FunctionLibrary = 0x5,
	BPTYPE_MAX = 0x6,
};

enum class ESamplerCompareFunction
{
	SCF_Never = 0x0,
	SCF_Less = 0x1,
};

enum class ERasterizerFillMode
{
	FM_Point = 0x0,
	FM_Wireframe = 0x1,
	FM_Solid = 0x2,
};

enum class EObjectMark
{
	OBJECTMARK_NOMARKS = 0x0,
	OBJECTMARK_Saved = 0x4,
	OBJECTMARK_TagImp = 0x8,
	OBJECTMARK_TagExp = 0x10,
	OBJECTMARK_NotForClient = 0x20,
	OBJECTMARK_NotForServer = 0x40,
	OBJECTMARK_NotForEditorGame = 0x80,
	OBJECTMARK_ALLMARKS = 0xff,
};

enum class ECompiledMaterialProperty
{
	CompiledMP_EmissiveColorCS = 0x1f,
	CompiledMP_MAX = 0x20,
};

namespace FSizeParam
{
	enum ESizeRule
	{
		SizeRule_Auto = 0x0,
		SizeRule_Stretch = 0x1,
	};
}

enum class ECollisionTraceFlag
{
	CTF_UseDefault = 0x0,
	CTF_UseSimpleAsComplex = 0x1,
	CTF_UseComplexAsSimple = 0x2,
	CTF_MAX = 0x3,
};

enum class ENetDormancy
{
	DORM_Never = 0x0,
	DORM_Awake = 0x1,
	DORM_DormantAll = 0x2,
	DORM_DormantPartial = 0x3,
	DORM_Initial = 0x4,
	DORN_MAX = 0x5,
};

enum class EColorWriteMask
{
	CW_RED = 0x1,
	CW_GREEN = 0x2,
	CW_BLUE = 0x4,
	CW_ALPHA = 0x8,
	CW_NONE = 0x0,
	CW_RGB = 0x7,
	CW_RGBA = 0xf,
	CW_RG = 0x3,
	CW_BA = 0xc,
};

namespace EBodyCollisionResponse
{
	enum Type
	{
		BodyCollision_Enabled = 0x0,
		BodyCollision_Disabled = 0x1,
	};
}

namespace ERenderThreadIdleTypes
{
	enum Type
	{
		WaitingForAllOtherSleep = 0x0,
		WaitingForGPUQuery = 0x1,
		WaitingForGPUPresent = 0x2,
		Num = 0x3,
	};
}

namespace EEndPlayReason
{
	enum Type
	{
		ActorDestroyed = 0x0,
		LevelTransition = 0x1,
		EndPlayInEditor = 0x2,
		RemovedFromWorld = 0x3,
		Quit = 0x4,
	};
}

namespace ENavPathEvent
{
	enum Type
	{
		Cleared = 0x0,
		NewPath = 0x1,
		UpdatedDueToGoalMoved = 0x2,
		UpdatedDueToNavigationChanged = 0x3,
		Invalidated = 0x4,
		RePathFailed = 0x5,
		Custom = 0x6,
	};
}

namespace ENavPathUpdateType
{
	enum Type
	{
		GoalMoved = 0x0,
		NavigationChanged = 0x1,
		Custom = 0x2,
	};
}

enum class TextureGroup
{
	TEXTUREGROUP_World = 0x0,
	TEXTUREGROUP_WorldNormalMap = 0x1,
	TEXTUREGROUP_WorldSpecular = 0x2,
	TEXTUREGROUP_Character = 0x3,
	TEXTUREGROUP_CharacterNormalMap = 0x4,
	TEXTUREGROUP_CharacterSpecular = 0x5,
	TEXTUREGROUP_Weapon = 0x6,
	TEXTUREGROUP_WeaponNormalMap = 0x7,
	TEXTUREGROUP_WeaponSpecular = 0x8,
	TEXTUREGROUP_Vehicle = 0x9,
	TEXTUREGROUP_VehicleNormalMap = 0xa,
	TEXTUREGROUP_VehicleSpecular = 0xb,
	TEXTUREGROUP_Cinematic = 0xc,
	TEXTUREGROUP_Effects = 0xd,
	TEXTUREGROUP_EffectsNotFiltered = 0xe,
	TEXTUREGROUP_Skybox = 0xf,
	TEXTUREGROUP_UI = 0x10,
	TEXTUREGROUP_Lightmap = 0x11,
	TEXTUREGROUP_RenderTarget = 0x12,
	TEXTUREGROUP_MobileFlattened = 0x13,
	TEXTUREGROUP_ProcBuilding_Face = 0x14,
	TEXTUREGROUP_ProcBuilding_LightMap = 0x15,
	TEXTUREGROUP_Shadowmap = 0x16,
	TEXTUREGROUP_ColorLookupTable = 0x17,
	TEXTUREGROUP_Terrain_Heightmap = 0x18,
	TEXTUREGROUP_Terrain_Weightmap = 0x19,
	TEXTUREGROUP_Bokeh = 0x1a,
	TEXTUREGROUP_IESLightProfile = 0x1b,
	TEXTUREGROUP_SourceRez = 0x1c,
	TEXTUREGROUP_MAX = 0x1d,
};

namespace EPathObservationResult
{
	enum Type
	{
		NoLongerObserving = 0x0,
		NoChange = 0x1,
		RequestRepath = 0x2,
	};
}

namespace ENavCostDisplay
{
	enum Type
	{
		TotalCost = 0x0,
		HeuristicOnly = 0x1,
		RealCostOnly = 0x2,
	};
}

namespace ENavAreaEvent
{
	enum Type
	{
		Registered = 0x0,
		Unregistered = 0x1,
	};
}

enum class EBlendOperation
{
	BO_Add = 0x0,
	BO_Subtract = 0x1,
	BO_Min = 0x2,
	BO_Max = 0x3,
	BO_ReverseSubtract = 0x4,
};

namespace EAsyncPackageState
{
	enum Type
	{
		TimeOut = 0x0,
		PendingImports = 0x1,
		Complete = 0x2,
	};
}

enum class EViewTargetBlendFunction
{
	VTBlend_Linear = 0x0,
	VTBlend_Cubic = 0x1,
	VTBlend_EaseIn = 0x2,
	VTBlend_EaseOut = 0x3,
	VTBlend_EaseInOut = 0x4,
	VTBlend_MAX = 0x5,
};

enum class GroundClutterState
{
	DoNotUpdate = 0x0,
	Update = 0x1,
};

enum class EBlendFactor
{
	BF_Zero = 0x0,
	BF_One = 0x1,
	BF_SourceColor = 0x2,
	BF_InverseSourceColor = 0x3,
	BF_SourceAlpha = 0x4,
	BF_InverseSourceAlpha = 0x5,
	BF_DestAlpha = 0x6,
	BF_InverseDestAlpha = 0x7,
	BF_DestColor = 0x8,
	BF_InverseDestColor = 0x9,
	BF_ConstantBlendFactor = 0xa,
	BF_InverseConstantBlendFactor = 0xb,
};

enum class ESplitType
{
	SP_Coplanar = 0x0,
	SP_Front = 0x1,
	SP_Back = 0x2,
	SP_Split = 0x3,
};

enum class TextureMipGenSettings
{
	TMGS_FromTextureGroup = 0x0,
	TMGS_SimpleAverage = 0x1,
	TMGS_Sharpen0 = 0x2,
	TMGS_Sharpen1 = 0x3,
	TMGS_Sharpen2 = 0x4,
	TMGS_Sharpen3 = 0x5,
	TMGS_Sharpen4 = 0x6,
	TMGS_Sharpen5 = 0x7,
	TMGS_Sharpen6 = 0x8,
	TMGS_Sharpen7 = 0x9,
	TMGS_Sharpen8 = 0xa,
	TMGS_Sharpen9 = 0xb,
	TMGS_Sharpen10 = 0xc,
	TMGS_NoMipmaps = 0xd,
	TMGS_LeaveExistingMips = 0xe,
	TMGS_Blur1 = 0xf,
	TMGS_Blur2 = 0x10,
	TMGS_Blur3 = 0x11,
	TMGS_Blur4 = 0x12,
	TMGS_Blur5 = 0x13,
	TMGS_MAX = 0x14,
};

enum class EHorizTextAligment
{
	EHTA_Left = 0x0,
	EHTA_Center = 0x1,
	EHTA_Right = 0x2,
};

enum class EVerticalTextAligment
{
	EVRTA_TextTop = 0x0,
	EVRTA_TextCenter = 0x1,
	EVRTA_TextBottom = 0x2,
	EVRTA_QuadTop = 0x3,
};

namespace EOnlineSharingPublishingCategory
{
	enum Type
	{
		None = 0x0,
		Posts = 0x1,
		Friends = 0x2,
		AccountAdmin = 0x4,
		Events = 0x8,
	};
}

namespace EHasCustomNavigableGeometry
{
	enum Type
	{
		No = 0x0,
		Yes = 0x1,
		EvenIfNotCollidable = 0x2,
	};
}

enum class EGraphType
{
	GT_Function = 0x0,
	GT_Ubergraph = 0x1,
	GT_Macro = 0x2,
	GT_Animation = 0x3,
	GT_StateMachine = 0x4,
	GT_MAX = 0x5,
};

enum class ECubeFace
{
	CubeFace_PosX = 0x0,
	CubeFace_NegX = 0x1,
	CubeFace_PosY = 0x2,
	CubeFace_NegY = 0x3,
	CubeFace_PosZ = 0x4,
	CubeFace_NegZ = 0x5,
	CubeFace_MAX = 0x6,
};

enum class EUniformBufferUsage
{
	UniformBuffer_SingleDraw = 0x0,
	UniformBuffer_SingleFrame = 0x1,
	UniformBuffer_MultiFrame = 0x2,
};

enum class EMipFadeSettings
{
	MipFade_Normal = 0x0,
	MipFade_Slow = 0x1,
	MipFade_NumSettings = 0x2,
};

namespace EEnvTestDistance
{
	enum Type
	{
		Distance3D = 0x0,
		Distance2D = 0x1,
		DistanceZ = 0x2,
	};
}

namespace FunctionCallspace
{
	enum Type
	{
		Absorbed = 0x0,
		Remote = 0x1,
		Local = 0x2,
	};
}

namespace EAntiAliasingMethodUI
{
	enum Type
	{
		AAM_None = 0x0,
		AAM_FXAA = 0x1,
		AAM_TemporalAA = 0x2,
		AAM_MAX = 0x3,
	};
}

enum class EEmitterDynamicParameterValue
{
	EDPV_UserSet = 0x0,
	EDPV_VelocityX = 0x1,
	EDPV_VelocityY = 0x2,
	EDPV_VelocityZ = 0x3,
	EDPV_VelocityMag = 0x4,
	EDPV_MAX = 0x5,
};

enum class EFunctionFlags
{
	FUNC_Final = 0x1,
	FUNC_RequiredAPI = 0x2,
	FUNC_BlueprintAuthorityOnly = 0x4,
	FUNC_BlueprintCosmetic = 0x8,
	FUNC_Net = 0x40,
	FUNC_NetReliable = 0x80,
	FUNC_NetRequest = 0x100,
	FUNC_Exec = 0x200,
	FUNC_Native = 0x400,
	FUNC_Event = 0x800,
	FUNC_NetResponse = 0x1000,
	FUNC_Static = 0x2000,
	FUNC_NetMulticast = 0x4000,
	FUNC_MulticastDelegate = 0x10000,
	FUNC_Public = 0x20000,
	FUNC_Private = 0x40000,
	FUNC_Protected = 0x80000,
	FUNC_Delegate = 0x100000,
	FUNC_NetServer = 0x200000,
	FUNC_HasOutParms = 0x400000,
	FUNC_HasDefaults = 0x800000,
	FUNC_NetClient = 0x1000000,
	FUNC_DLLImport = 0x2000000,
	FUNC_BlueprintCallable = 0x4000000,
	FUNC_BlueprintEvent = 0x8000000,
	FUNC_BlueprintPure = 0x10000000,
	FUNC_Const = 0x40000000,
	FUNC_NetValidate = 0x80000000,
	FUNC_FuncInherit = 0xc000a0c,
	FUNC_FuncOverrideMatch = 0xe2201,
	FUNC_NetFuncFlags = 0x12040c0,
	FUNC_AccessSpecifiers = 0xe0000,
	FUNC_AllFlags = 0xff,
};

namespace EAttenuationShape
{
	enum Type
	{
		Sphere = 0x0,
		Capsule = 0x1,
		Box = 0x2,
		Cone = 0x3,
	};
}

namespace EUIScalingRule
{
	enum Type
	{
		ShortestSide = 0x0,
		LongestSide = 0x1,
		Horizontal = 0x2,
		Vertical = 0x3,
		SmallestCurve = 0x4,
	};
}

namespace EGrammaticalNumber
{
	enum Type
	{
		Singular = 0x0,
		Plural = 0x1,
	};
}

namespace EReflectionCaptureShape
{
	enum Type
	{
		Sphere = 0x0,
		Box = 0x1,
		Plane = 0x2,
		Num = 0x3,
	};
}

enum class ETextureStreamingState
{
	TexState_InProgress_Initialization = 0xff,
	TexState_ReadyFor_Requests = 0x0,
	TexState_InProgress_Finalization = 0x1,
	TexState_ReadyFor_Finalization = 0x2,
	TexState_InProgress_Upload = 0x3,
	TexState_ReadyFor_Upload = 0x4,
	TexState_InProgress_Loading = 0x5,
	TexState_ReadyFor_Loading = 0x64,
	TexState_InProgress_Allocation = 0x65,
	TexState_InProgress_AsyncAllocation = 0x66,
};

namespace ENavigationQueryResult
{
	enum Type
	{
		Invalid = 0x0,
		Error = 0x1,
		Fail = 0x2,
		Success = 0x3,
	};
}

enum class EExprToken
{
	EX_LocalVariable = 0x0,
	EX_InstanceVariable = 0x1,
	EX_Return = 0x4,
	EX_Jump = 0x6,
	EX_JumpIfNot = 0x7,
	EX_Assert = 0x9,
	EX_Nothing = 0xb,
	EX_Let = 0xf,
	EX_MetaCast = 0x13,
	EX_LetBool = 0x14,
	EX_EndParmValue = 0x15,
	EX_EndFunctionParms = 0x16,
	EX_Self = 0x17,
	EX_Skip = 0x18,
	EX_Context = 0x19,
	EX_Context_FailSilent = 0x1a,
	EX_VirtualFunction = 0x1b,
	EX_FinalFunction = 0x1c,
	EX_IntConst = 0x1d,
	EX_FloatConst = 0x1e,
	EX_StringConst = 0x1f,
	EX_ObjectConst = 0x20,
	EX_NameConst = 0x21,
	EX_RotationConst = 0x22,
	EX_VectorConst = 0x23,
	EX_ByteConst = 0x24,
	EX_IntZero = 0x25,
	EX_IntOne = 0x26,
	EX_True = 0x27,
	EX_False = 0x28,
	EX_TextConst = 0x29,
	EX_NoObject = 0x2a,
	EX_TransformConst = 0x2b,
	EX_IntConstByte = 0x2c,
	EX_DynamicCast = 0x2e,
	EX_StructConst = 0x2f,
	EX_EndStructConst = 0x30,
	EX_SetArray = 0x31,
	EX_EndArray = 0x32,
	EX_UnicodeStringConst = 0x34,
	EX_PrimitiveCast = 0x38,
	EX_StructMemberContext = 0x42,
	EX_LetMulticastDelegate = 0x43,
	EX_LetDelegate = 0x44,
	EX_LocalOutVariable = 0x48,
	EX_DeprecatedOp4A = 0x4a,
	EX_InstanceDelegate = 0x4b,
	EX_PushExecutionFlow = 0x4c,
	EX_PopExecutionFlow = 0x4d,
	EX_ComputedJump = 0x4e,
	EX_PopExecutionFlowIfNot = 0x4f,
	EX_Breakpoint = 0x50,
	EX_InterfaceContext = 0x51,
	EX_ObjToInterfaceCast = 0x52,
	EX_EndOfScript = 0x53,
	EX_CrossInterfaceCast = 0x54,
	EX_WireTracepoint = 0x5a,
	EX_SkipOffsetConst = 0x5b,
	EX_AddMulticastDelegate = 0x5c,
	EX_ClearMulticastDelegate = 0x5d,
	EX_Tracepoint = 0x5e,
	EX_LetObj = 0x5f,
	EX_LetWeakObjPtr = 0x60,
	EX_BindDelegate = 0x61,
	EX_RemoveMulticastDelegate = 0x62,
	EX_CallMulticastDelegate = 0x63,
	EX_DoubleConst = 0x64,
	EX_StringLocConst = 0x65,
	EX_Max = 0x100,
};

enum class EBoneVisibilityStatus
{
	BVS_HiddenByParent = 0x0,
	BVS_Visible = 0x1,
	BVS_ExplicitlyHidden = 0x2,
	BVS_MAX = 0x3,
};

namespace EScopedUpdate
{
	enum Type
	{
		ImmediateUpdates = 0x0,
		DeferredUpdates = 0x1,
	};
}

namespace ELoginStatus
{
	enum Type
	{
		NotLoggedIn = 0x0,
		UsingLocalProfile = 0x1,
		LoggedIn = 0x2,
	};
}

enum class ERawDistributionOperation
{
	RDO_Uninitialized = 0x0,
	RDO_None = 0x1,
	RDO_Random = 0x2,
	RDO_Extreme = 0x3,
};

namespace EKeyboardFocusCause
{
	enum Type
	{
		Mouse = 0x0,
		Keyboard = 0x1,
		SetDirectly = 0x2,
		Cleared = 0x3,
		OtherWidgetLostFocus = 0x4,
		WindowActivate = 0x5,
	};
}

enum class ERHIResourceType
{
	RRT_None = 0x0,
	RRT_SamplerState = 0x1,
	RRT_RasterizerState = 0x2,
	RRT_DepthStencilState = 0x3,
	RRT_BlendState = 0x4,
	RRT_VertexDeclaration = 0x5,
	RRT_VertexShader = 0x6,
	RRT_HullShader = 0x7,
	RRT_DomainShader = 0x8,
	RRT_PixelShader = 0x9,
	RRT_GeometryShader = 0xa,
	RRT_ComputeShader = 0xb,
	RRT_BoundShaderState = 0xc,
	RRT_UniformBuffer = 0xd,
	RRT_IndexBuffer = 0xe,
	RRT_VertexBuffer = 0xf,
	RRT_StructuredBuffer = 0x10,
	RRT_Texture = 0x11,
	RRT_Texture2D = 0x12,
	RRT_Texture2DArray = 0x13,
	RRT_Texture3D = 0x14,
	RRT_TextureCube = 0x15,
	RRT_TextureReference = 0x16,
	RRT_RenderQuery = 0x17,
	RRT_Viewport = 0x18,
	RRT_UnorderedAccessView = 0x19,
	RRT_ShaderResourceView = 0x1a,
	RRT_Num = 0x1b,
};

namespace EOnlineServerConnectionStatus
{
	enum Type
	{
		Normal = 0x0,
		NotConnected = 0x1,
		Connected = 0x2,
		ConnectionDropped = 0x3,
		NoNetworkConnection = 0x4,
		ServiceUnavailable = 0x5,
		UpdateRequired = 0x6,
		ServersTooBusy = 0x7,
		DuplicateLoginDetected = 0x8,
		InvalidUser = 0x9,
		NotAuthorized = 0xa,
		InvalidSession = 0xb,
	};
}

enum class EDetailMode
{
	DM_Low = 0x0,
	DM_Medium = 0x1,
	DM_High = 0x2,
	DM_MAX = 0x3,
};

enum class ERelativeTransformSpace
{
	RTS_World = 0x0,
	RTS_Actor = 0x1,
	RTS_Component = 0x2,
};

enum class EPackageFlags
{
	PKG_ClientOptional = 0x2,
	PKG_ServerSideOnly = 0x4,
	PKG_CompiledIn = 0x10,
	PKG_ForDiffing = 0x20,
	PKG_Need = 0x8000,
	PKG_Compiling = 0x10000,
	PKG_ContainsMap = 0x20000,
	PKG_RequiresLocalizationGather = 0x40000,
	PKG_DisallowLazyLoading = 0x80000,
	PKG_PlayInEditor = 0x100000,
	PKG_ContainsScript = 0x200000,
	PKG_BulkAtEndUseSeparateFile = 0x800000,
	PKG_StoreCompressed = 0x2000000,
	PKG_StoreFullyCompressed = 0x4000000,
	PKG_ReloadingForCooker = 0x40000000,
	PKG_FilterEditorOnly = 0x80000000,
};

namespace EInviteStatus
{
	enum Type
	{
		Unknown = 0x0,
		Accepted = 0x1,
		PendingInbound = 0x2,
		PendingOutbound = 0x3,
	};
}

enum class ETravelType
{
	TRAVEL_Absolute = 0x0,
	TRAVEL_Partial = 0x1,
	TRAVEL_Relative = 0x2,
	TRAVEL_MAX = 0x3,
};

enum class ETextureCreateFlags
{
	TexCreate_None = 0x0,
	TexCreate_RenderTargetable = 0x1,
	TexCreate_ResolveTargetable = 0x2,
	TexCreate_DepthStencilTargetable = 0x4,
	TexCreate_ShaderResource = 0x8,
	TexCreate_SRGB = 0x10,
	TexCreate_NoMipTail = 0x20,
	TexCreate_NoTiling = 0x40,
	TexCreate_Dynamic = 0x100,
	TexCreate_AllowFailure = 0x200,
	TexCreate_DisableAutoDefrag = 0x400,
	TexCreate_BiasNormalMap = 0x800,
	TexCreate_GenerateMipCapable = 0x1000,
	TexCreate_UAV = 0x10000,
	TexCreate_Presentable = 0x20000,
	TexCreate_CPUReadback = 0x40000,
	TexCreate_OfflineProcessed = 0x80000,
	TexCreate_FastVRAM = 0x100000,
	TexCreate_HideInVisualizeTexture = 0x200000,
	TexCreate_Virtual = 0x400000,
	TexCreate_TargetArraySlicesIndependently = 0x800000,
	TexCreate_Shared = 0x1000000,
	TexCreate_NoFastClear = 0x2000000,
	TexCreate_DepthStencilResolveTarget = 0x4000000,
	TexCreate_NoFastClearFinalize = 0x10000000,
	TexCreate_AFRManual = 0x20000000,
	TexCreate_FromPC = 0x40000000,
};

enum class EDrawRectangleFlags
{
	EDRF_Default = 0x0,
	EDRF_UseTriangleOptimization = 0x1,
};

namespace ETangentOptions
{
	enum Type
	{
		None = 0x0,
		BlendOverlappingNormals = 0x1,
		IgnoreDegenerateTriangles = 0x2,
		UseMikkTSpace = 0x4,
	};
}

enum class EInitialOscillatorOffset
{
	EOO_OffsetRandom = 0x0,
	EOO_OffsetZero = 0x1,
	EOO_MAX = 0x2,
};

enum class ELocalizedLanguage
{
	ca = 0x0,
	cs = 0x1,
	da = 0x2,
	de = 0x3,
	en = 0x4,
	es = 0x5,
	eu = 0x6,
	fi = 0x7,
	fr = 0x8,
	hu = 0x9,
	it = 0xa,
	ja = 0xb,
	ka = 0xc,
	ko = 0xd,
	nl = 0xe,
	pl = 0xf,
	pt_BR = 0x10,
	ru = 0x11,
	sv = 0x12,
	th = 0x13,
	tr = 0x14,
	uk = 0x15,
	zh = 0x16,
	zh__Hans__CN = 0x17,
	zh__TW = 0x18,
	MAX = 0x19,
};

namespace ETouchType
{
	enum Type
	{
		Began = 0x0,
		Moved = 0x1,
		Stationary = 0x2,
		Ended = 0x3,
		NumTypes = 0x4,
	};
}

enum class EAsyncComputePriority
{
	AsyncComputePriority_Default = 0x0,
	AsyncComputePriority_High = 0x1,
};

enum class EShadowMapInteractionType
{
	SMIT_None = 0x0,
	SMIT_Texture = 0x2,
	SMIT_NumBits = 0x3,
};

namespace EMaterialQualityLevel
{
	enum Type
	{
		Low = 0x0,
		High = 0x1,
		Num = 0x2,
	};
}

namespace EFieldIteratorFlags
{
	enum SuperClassFlags
	{
		ExcludeSuper = 0x0,
		IncludeSuper = 0x1,
	};
}

enum class EMaterialProperty
{
	MP_EmissiveColor = 0x0,
	MP_Opacity = 0x1,
	MP_OpacityMask = 0x2,
	MP_DiffuseColor = 0x3,
	MP_SpecularColor = 0x4,
	MP_BaseColor = 0x5,
	MP_Metallic = 0x6,
	MP_Specular = 0x7,
	MP_Roughness = 0x8,
	MP_Normal = 0x9,
	MP_WorldPositionOffset = 0xa,
	MP_WorldDisplacement = 0xb,
	MP_TessellationMultiplier = 0xc,
	MP_SubsurfaceColor = 0xd,
	MP_ClearCoat = 0xe,
	MP_ClearCoatRoughness = 0xf,
	MP_AmbientOcclusion = 0x10,
	MP_Refraction = 0x11,
	MP_SSAOIntensity = 0x12,
	MP_SSAOInfluence = 0x13,
	MP_SSAOLightInfluence = 0x14,
	MP_PixelDepthOffset = 0x15,
	MP_CustomizedUVs0 = 0x16,
	MP_CustomizedUVs1 = 0x17,
	MP_CustomizedUVs2 = 0x18,
	MP_CustomizedUVs3 = 0x19,
	MP_CustomizedUVs4 = 0x1a,
	MP_CustomizedUVs5 = 0x1b,
	MP_CustomizedUVs6 = 0x1c,
	MP_CustomizedUVs7 = 0x1d,
	MP_MaterialAttributes = 0x1e,
	MP_MAX = 0x1f,
};

namespace EFieldIteratorFlags
{
	enum DeprecatedPropertyFlags
	{
		ExcludeDeprecated = 0x0,
		IncludeDeprecated = 0x1,
	};
}

namespace EOnlineAsyncTaskState
{
	enum Type
	{
		NotStarted = 0x0,
		InProgress = 0x1,
		Done = 0x2,
		Failed = 0x3,
	};
}

enum class EViewModeIndex
{
	VMI_BrushWireframe = 0x0,
	VMI_Wireframe = 0x1,
	VMI_Unlit = 0x2,
	VMI_Lit = 0x3,
	VMI_Lit_DetailLighting = 0x4,
	VMI_LightingOnly = 0x5,
	VMI_LightComplexity = 0x6,
	VMI_ShaderComplexity = 0x8,
	VMI_LightmapDensity = 0x9,
	VMI_LitLightmapDensity = 0xa,
	VMI_ReflectionOverride = 0xb,
	VMI_VisualizeBuffer = 0xc,
	VMI_StationaryLightOverlap = 0xe,
	VMI_CollisionPawn = 0xf,
	VMI_CollisionVisibility = 0x10,
	VMI_Max = 0x11,
	VMI_Unknown = 0xff,
};

namespace ELeaderboardSort
{
	enum Type
	{
		None = 0x0,
		Ascending = 0x1,
		Descending = 0x2,
	};
}

namespace EBlendModeFilter
{
	enum Type
	{
		None = 0x0,
		OpaqueAndMasked = 0x1,
		Translucent = 0x2,
		All = 0x3,
	};
}

enum class ELinearConstraintMotion
{
	LCM_Free = 0x0,
	LCM_Limited = 0x1,
	LCM_Locked = 0x2,
	LCM_MAX = 0x3,
};

namespace ECastCheckedType
{
	enum Type
	{
		NullAllowed = 0x0,
		NullChecked = 0x1,
	};
}

enum class EBspNodeFlags
{
	NF_NotCsg = 0x1,
	NF_NotVisBlocking = 0x4,
	NF_BrightCorners = 0x10,
	NF_IsNew = 0x20,
	NF_IsFront = 0x40,
	NF_IsBack = 0x80,
};

namespace EOnlineCachedResult
{
	enum Type
	{
		Success = 0x0,
		NotFound = 0x1,
	};
}

namespace EConstraintFrame
{
	enum Type
	{
		Frame1 = 0x0,
		Frame2 = 0x1,
	};
}

namespace EAngularDriveMode
{
	enum Type
	{
		SLERP = 0x0,
		TwistAndSwing = 0x1,
	};
}

namespace ELeaderboardFormat
{
	enum Type
	{
		Number = 0x0,
		Seconds = 0x1,
		Milliseconds = 0x2,
	};
}

namespace EOnlineStatusUpdatePrivacy
{
	enum Type
	{
		OnlyMe = 0x0,
		OnlyFriends = 0x1,
		Everyone = 0x2,
	};
}

enum class ESoundFormat
{
	SoundFormat_Invalid = 0x0,
	SoundFormat_PCM = 0x1,
	SoundFormat_PCMPreview = 0x2,
	SoundFormat_PCMRT = 0x3,
	SoundFormat_XMA2 = 0x4,
	SoundFormat_XWMA = 0x5,
	SoundFormat_Streaming = 0x6,
};

enum class EAsyncComputeBudget
{
	ELeast_0 = 0x0,
	EGfxHeavy_1 = 0x1,
	EBalanced_2 = 0x2,
	EComputeHeavy_3 = 0x3,
	EAll_4 = 0x4,
};

enum class EStructFlags
{
	STRUCT_NoFlags = 0x0,
	STRUCT_Native = 0x1,
	STRUCT_IdenticalNative = 0x2,
	STRUCT_HasInstancedReference = 0x4,
	STRUCT_Atomic = 0x10,
	STRUCT_Immutable = 0x20,
	STRUCT_AddStructReferencedObjects = 0x40,
	STRUCT_RequiredAPI = 0x200,
	STRUCT_NetSerializeNative = 0x400,
	STRUCT_SerializeNative = 0x800,
	STRUCT_CopyNative = 0x1000,
	STRUCT_IsPlainOldData = 0x2000,
	STRUCT_NoDestructor = 0x4000,
	STRUCT_ZeroConstructor = 0x8000,
	STRUCT_ExportTextItemNative = 0x10000,
	STRUCT_ImportTextItemNative = 0x20000,
	STRUCT_PostSerializeNative = 0x40000,
	STRUCT_SerializeFromMismatchedTag = 0x80000,
	STRUCT_NetDeltaSerializeNative = 0x100000,
	STRUCT_Inherit = 0x14,
	STRUCT_ComputedFlags = 0x1ffc42,
};

enum class EDecalBlendMode
{
	DBM_Translucent = 0x0,
	DBM_Stain = 0x1,
	DBM_Normal = 0x2,
	DBM_Emissive = 0x3,
	DBM_DBuffer_ColorNormalRoughness = 0x4,
	DBM_DBuffer_Color = 0x5,
	DBM_DBuffer_ColorNormal = 0x6,
	DBM_DBuffer_ColorRoughness = 0x7,
	DBM_DBuffer_Normal = 0x8,
	DBM_DBuffer_NormalRoughness = 0x9,
	DBM_DBuffer_Roughness = 0xa,
	DBM_MAX = 0xb,
};

namespace ELanBeaconState
{
	enum Type
	{
		NotUsingLanBeacon = 0x0,
		Hosting = 0x1,
		Searching = 0x2,
	};
}

enum class EMaterialDomain
{
	MD_Surface = 0x0,
	MD_DeferredDecal = 0x1,
	MD_LightFunction = 0x2,
	MD_PostProcess = 0x3,
	MD_MAX = 0x4,
};

namespace EOnlineSessionState
{
	enum Type
	{
		NoSession = 0x0,
		Creating = 0x1,
		Pending = 0x2,
		Starting = 0x3,
		InProgress = 0x4,
		Ending = 0x5,
		Ended = 0x6,
		Destroying = 0x7,
	};
}

enum class EMaterialDecalResponse
{
	MDR_None = 0x0,
	MDR_ColorNormalRoughness = 0x1,
	MDR_Color = 0x2,
	MDR_ColorNormal = 0x3,
	MDR_ColorRoughness = 0x4,
	MDR_Normal = 0x5,
	MDR_NormalRoughness = 0x6,
	MDR_Roughness = 0x7,
	MDR_MAX = 0x8,
};

namespace ETimelineDirection
{
	enum Type
	{
		Forward = 0x0,
		Backward = 0x1,
	};
}

namespace EDynamicForceFeedbackAction
{
	enum Type
	{
		Start = 0x0,
		Update = 0x1,
		Stop = 0x2,
	};
}

enum class EActorMetricsType
{
	METRICS_VERTS = 0x0,
	METRICS_TRIS = 0x1,
	METRICS_SECTIONS = 0x2,
	METRICS_MAX = 0x3,
};

namespace EReflectionDFAOOption
{
	enum Type
	{
		Default = 0x0,
		UsedWithDFAO = 0x1,
		NotUsedWithDFAO = 0x2,
	};
}

namespace EShaderPrecisionModifier
{
	enum Type
	{
		Float = 0x0,
		Half = 0x1,
		Fixed = 0x2,
	};
}

enum class EIndirectLightingCacheQuality
{
	ILCQ_Off = 0x0,
	ILCQ_Point = 0x1,
	ILCQ_Volume = 0x2,
};

namespace EOnlineDataAdvertisementType
{
	enum Type
	{
		DontAdvertise = 0x0,
		ViaPingOnly = 0x1,
		ViaOnlineService = 0x2,
		ViaOnlineServiceAndPing = 0x3,
	};
}

enum class ESamplerSourceMode
{
	SSM_FromTextureAsset = 0x0,
	SSM_Wrap_WorldGroupSettings = 0x1,
	SSM_Clamp_WorldGroupSettings = 0x2,
};

namespace EOnlineComparisonOp
{
	enum Type
	{
		Equals = 0x0,
		NotEquals = 0x1,
		GreaterThan = 0x2,
		GreaterThanEquals = 0x3,
		LessThan = 0x4,
		LessThanEquals = 0x5,
		Near = 0x6,
	};
}

enum class EInputEvent
{
	IE_Pressed = 0x0,
	IE_Released = 0x1,
	IE_Repeat = 0x2,
	IE_DoubleClick = 0x3,
	IE_Axis = 0x4,
	IE_MAX = 0x5,
};

enum class EMaterialTessellationMode
{
	MTM_NoTessellation = 0x0,
	MTM_FlatTessellation = 0x1,
	MTM_PNTriangles = 0x2,
	MTM_MAX = 0x3,
};

namespace EAutoCenter
{
	enum Type
	{
		None = 0x0,
		PrimaryWorkArea = 0x1,
		PreferredWorkArea = 0x2,
	};
}

enum class ELevelTick
{
	LEVELTICK_TimeOnly = 0x0,
	LEVELTICK_ViewportsOnly = 0x1,
	LEVELTICK_All = 0x2,
	LEVELTICK_PauseTick = 0x3,
};

enum class EConstructTextureFlags
{
	CTF_Compress = 0x1,
	CTF_DeferCompression = 0x2,
	CTF_SRGB = 0x4,
	CTF_AllowMips = 0x8,
	CTF_ForceOneBitAlpha = 0x10,
	CTF_RemapAlphaAsMasked = 0x20,
	CTF_ForceOpaque = 0x40,
	CTF_Default = 0x5,
};

namespace ESizingRule
{
	enum Type
	{
		FixedSize = 0x0,
		Autosized = 0x1,
		UserSized = 0x2,
	};
}

enum class ETickingGroup
{
	TG_PrePhysics = 0x0,
	TG_StartPhysics = 0x1,
	TG_DuringPhysics = 0x2,
	TG_EndPhysics = 0x3,
	TG_PreCloth = 0x4,
	TG_StartCloth = 0x5,
	TG_EndCloth = 0x6,
	TG_PostPhysics = 0x7,
	TG_PostUpdateWork = 0x8,
	TG_NewlySpawned = 0x9,
	TG_MAX = 0xa,
};

enum class ECppProperty
{
	EC_CppProperty = 0x0,
};

enum class ELightInteractionType
{
	LIT_CachedIrrelevant = 0x0,
	LIT_CachedLightMap = 0x1,
	LIT_Dynamic = 0x2,
	LIT_CachedSignedDistanceFieldShadowMap2D = 0x3,
};

enum class ECanCreateConnectionResponse
{
	CONNECT_RESPONSE_MAKE = 0x0,
	CONNECT_RESPONSE_DISALLOW = 0x1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 0x2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 0x3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 0x4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 0x5,
	CONNECT_RESPONSE_MAX = 0x6,
};

enum class ELightingBuildQuality
{
	Quality_Preview = 0x0,
	Quality_Medium = 0x1,
	Quality_High = 0x2,
	Quality_Production = 0x3,
	Quality_MAX = 0x4,
};

enum class ETriangleSortOption
{
	TRISORT_None = 0x0,
	TRISORT_CenterRadialDistance = 0x1,
	TRISORT_Random = 0x2,
	TRISORT_MergeContiguous = 0x3,
	TRISORT_Custom = 0x4,
	TRISORT_CustomLeftRight = 0x5,
	TRISORT_MAX = 0x6,
};

namespace EAcceptConnection
{
	enum Type
	{
		Reject = 0x0,
		Accept = 0x1,
		Ignore = 0x2,
	};
}

namespace ENamedThreads
{
	enum Type
	{
		UnusedAnchor = 0xff,
		RHIThread = 0x0,
		AudioThread = 0x1,
		GameThread = 0x2,
		ActualRenderingThread = 0x3,
	};
}

enum class EStreamingVolumeUsage
{
	SVB_Loading = 0x0,
	SVB_LoadingAndVisibility = 0x1,
	SVB_VisibilityBlockingOnLoad = 0x2,
	SVB_BlockingOnLoad = 0x3,
	SVB_LoadingNotVisible = 0x4,
	SVB_MAX = 0x5,
};

enum class ELightMapFlags
{
	LMF_None = 0x0,
	LMF_Streamed = 0x1,
	LMF_LQLightmap = 0x2,
};

namespace EFrictionCombineMode
{
	enum Type
	{
		Average = 0x0,
		Min = 0x1,
		Multiply = 0x2,
		Max = 0x3,
	};
}

namespace ESettingsLockedAxis
{
	enum Type
	{
		None = 0x0,
		X = 0x1,
		Y = 0x2,
		Z = 0x3,
	};
}

namespace ESlateColorStylingMode
{
	enum Type
	{
		UseColor_Specified = 0x0,
		UseColor_Specified_Link = 0x1,
		UseColor_Foreground = 0x2,
		UseColor_Foreground_Subdued = 0x3,
	};
}

enum class EMicroTransactionResult
{
	MTR_Succeeded = 0x0,
	MTR_Failed = 0x1,
	MTR_Canceled = 0x2,
	MTR_RestoredFromServer = 0x3,
	MTR_MAX = 0x4,
};

namespace ESplitScreenType
{
	enum Type
	{
		None = 0x0,
		TwoPlayer_Horizontal = 0x1,
		TwoPlayer_Vertical = 0x2,
		ThreePlayer_FavorTop = 0x3,
		ThreePlayer_FavorBottom = 0x4,
		FourPlayer = 0x5,
		SplitTypeCount = 0x6,
	};
}

enum class ESafeZoneType
{
	eSZ_TOP = 0x0,
	eSZ_BOTTOM = 0x1,
	eSZ_LEFT = 0x2,
	eSZ_RIGHT = 0x3,
	eSZ_MAX = 0x4,
};

enum class ERunAttributes
{
	None = 0x0,
	SupportsText = 0x1,
};

enum class SkeletalMeshOptimizationImportance
{
	SMOI_Off = 0x0,
	SMOI_Lowest = 0x1,
	SMOI_Low = 0x2,
	SMOI_Normal = 0x3,
	SMOI_High = 0x4,
	SMOI_Highest = 0x5,
	SMOI_MAX = 0x6,
};

enum class EDistanceFieldShadowingType
{
	DFS_DirectionalLightScatterTileCulling = 0x0,
	DFS_DirectionalLightTiledCulling = 0x1,
	DFS_PointLightTiledCulling = 0x2,
};

enum class EAnimCurveFlags
{
	ACF_DrivesMorphTarget = 0x1,
	ACF_TriggerEvent = 0x2,
	ACF_Editable = 0x4,
	ACF_DrivesMaterial = 0x8,
	ACF_Metadata = 0x10,
	ACF_DefaultCurve = 0x6,
};

enum class SkeletalMeshOptimizationType
{
	SMOT_NumOfTriangles = 0x0,
	SMOT_MaxDeviation = 0x1,
	SMOT_MAX = 0x2,
};

enum class ECloudStorageDelegate
{
	CSD_KeyValueReadComplete = 0x0,
	CSD_KeyValueWriteComplete = 0x1,
	CSD_ValueChanged = 0x2,
	CSD_DocumentQueryComplete = 0x3,
	CSD_DocumentReadComplete = 0x4,
	CSD_DocumentWriteComplete = 0x5,
	CSD_DocumentConflictDetected = 0x6,
	CSD_MAX = 0x7,
};

enum class EMaterialValueType
{
	MCT_Float1 = 0x1,
	MCT_Float2 = 0x2,
	MCT_Float3 = 0x4,
	MCT_Float4 = 0x8,
	MCT_Float = 0xf,
	MCT_Texture2D = 0x10,
	MCT_TextureCube = 0x20,
	MCT_Texture = 0x30,
	MCT_StaticBool = 0x40,
	MCT_Unknown = 0x80,
	MCT_MaterialAttributes = 0x100,
};

enum class EChannelType
{
	CHTYPE_None = 0x0,
	CHTYPE_Control = 0x1,
	CHTYPE_Actor = 0x2,
	CHTYPE_File = 0x3,
	CHTYPE_Voice = 0x4,
	CHTYPE_ClassInfo = 0x5,
	CHTYPE_BattlEye = 0x6,
	CHTYPE_MAX = 0x8,
};

enum class ESleepFamily
{
	SF_Normal = 0x0,
	SF_Sensitive = 0x1,
	SF_MAX = 0x2,
};

enum class ECsgOper
{
	CSG_Active = 0x0,
	CSG_Add = 0x1,
	CSG_Subtract = 0x2,
	CSG_Intersect = 0x3,
	CSG_Deintersect = 0x4,
	CSG_None = 0x5,
	CSG_MAX = 0x6,
};

enum class EBrushType
{
	Brush_Default = 0x0,
	Brush_Add = 0x1,
	Brush_Subtract = 0x2,
	Brush_MAX = 0x3,
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
	TraceTypeQuery11 = 0xa,
	TraceTypeQuery12 = 0xb,
	TraceTypeQuery13 = 0xc,
	TraceTypeQuery14 = 0xd,
	TraceTypeQuery15 = 0xe,
	TraceTypeQuery16 = 0xf,
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
	TraceTypeQuery27 = 0x1a,
	TraceTypeQuery28 = 0x1b,
	TraceTypeQuery29 = 0x1c,
	TraceTypeQuery30 = 0x1d,
	TraceTypeQuery31 = 0x1e,
	TraceTypeQuery32 = 0x1f,
	TraceTypeQuery_MAX = 0x20,
};

enum class EPropertyPortFlags
{
	PPF_None = 0x0,
	PPF_Localized = 0x1,
	PPF_Delimited = 0x2,
	PPF_CheckReferences = 0x4,
	PPF_ExportsNotFullyQualified = 0x8,
	PPF_AttemptNonQualifiedSearch = 0x10,
	PPF_RestrictImportTypes = 0x20,
	PPF_LocalizedOnly = 0x80,
	PPF_SubobjectsOnly = 0x100,
	PPF_DeepComparison = 0x200,
	PPF_DeepCompareInstances = 0x400,
	PPF_Copy = 0x800,
	PPF_Duplicate = 0x1000,
	PPF_SimpleObjectText = 0x2000,
	PPF_ParsingDefaultProperties = 0x8000,
	PPF_IncludeTransient = 0x20000,
	PPF_DeltaComparison = 0x40000,
	PPF_PropertyWindow = 0x80000,
	PPF_NoInternalArcheType = 0x100000,
	PPF_DebugDump = 0x200000,
	PPF_DuplicateForPIE = 0x400000,
	PPF_SeparateDeclare = 0x800000,
	PPF_SeparateDefine = 0x1000000,
	PPF_BlueprintDebugView = 0x2000000,
	PPF_ConsoleVariable = 0x4000000,
};

enum class EPlatformInterfaceDataType
{
	PIDT_None = 0x0,
	PIDT_Int = 0x1,
	PIDT_Float = 0x2,
	PIDT_String = 0x3,
	PIDT_Object = 0x4,
	PIDT_Custom = 0x5,
	PIDT_MAX = 0x6,
};

namespace ESuggestProjVelocityTraceOption
{
	enum Type
	{
		DoNotTrace = 0x0,
		TraceFullPath = 0x1,
		OnlyTraceWhileAsceding = 0x2,
	};
}

namespace EComponentMobility
{
	enum Type
	{
		Static = 0x0,
		Stationary = 0x1,
		Movable = 0x2,
	};
}

enum class EPhysicsSceneType
{
	PST_Sync = 0x0,
	PST_Cloth = 0x1,
	PST_Async = 0x2,
	PST_MAX = 0x3,
};

enum class ECollisionResponse
{
	ECR_Ignore = 0x0,
	ECR_Overlap = 0x1,
	ECR_Block = 0x2,
	ECR_MAX = 0x3,
};

namespace ESteamSession
{
	enum Type
	{
		None = 0x0,
		LobbySession = 0x1,
		AdvertisedSessionHost = 0x2,
		AdvertisedSessionClient = 0x3,
		LANSession = 0x4,
	};
}

enum class EFilterInterpolationType
{
	BSIT_Average = 0x0,
	BSIT_Linear = 0x1,
	BSIT_Cubic = 0x2,
	BSIT_MAX = 0x3,
};

namespace EAnimGroupRole
{
	enum Type
	{
		CanBeLeader = 0x0,
		AlwaysFollower = 0x1,
		AlwaysLeader = 0x2,
	};
}

enum class EInputConsumeOptions
{
	ICO_ConsumeAll = 0x0,
	ICO_ConsumeBoundKeys = 0x1,
	ICO_ConsumeNone = 0x2,
	ICO_MAX = 0x3,
};

enum class EImportanceLevel
{
	IL_Off = 0x0,
	IL_Lowest = 0x1,
	IL_Low = 0x2,
	IL_Normal = 0x3,
	IL_High = 0x4,
	IL_Highest = 0x5,
	TEMP_BROKEN2 = 0x6,
	EImportanceLevel_MAX = 0x7,
};

enum class EPropertyType
{
	CPT_None = 0x0,
	CPT_Byte = 0x1,
	CPT_UInt16 = 0x2,
	CPT_UInt32 = 0x3,
	CPT_UInt64 = 0x4,
	CPT_Int8 = 0x5,
	CPT_Int16 = 0x6,
	CPT_Int = 0x7,
	CPT_Int64 = 0x8,
	CPT_Bool = 0x9,
	CPT_Bool8 = 0xa,
	CPT_Bool16 = 0xb,
	CPT_Bool32 = 0xc,
	CPT_Bool64 = 0xd,
	CPT_Float = 0xe,
	CPT_ObjectReference = 0xf,
	CPT_Name = 0x10,
	CPT_Delegate = 0x11,
	CPT_Interface = 0x12,
	CPT_Range = 0x13,
	CPT_Struct = 0x14,
	CPT_Vector = 0x15,
	CPT_Rotation = 0x16,
	CPT_String = 0x17,
	CPT_Text = 0x18,
	CPT_MulticastDelegate = 0x19,
	CPT_WeakObjectReference = 0x1a,
	CPT_LazyObjectReference = 0x1b,
	CPT_AssetObjectReference = 0x1c,
	CPT_Double = 0x1d,
	CPT_MAX = 0x1e,
};

namespace EWorldType
{
	enum Type
	{
		None = 0x0,
		Game = 0x1,
		Editor = 0x2,
		PIE = 0x3,
		Preview = 0x4,
		Inactive = 0x5,
	};
}

enum class FForceFeedbackChannelType
{
	FF_CHANNEL_LEFT_LARGE = 0x0,
	FF_CHANNEL_LEFT_SMALL = 0x1,
	FF_CHANNEL_RIGHT_LARGE = 0x2,
	FF_CHANNEL_RIGHT_SMALL = 0x3,
};

namespace EControllerAnalogStick
{
	enum Type
	{
		CAS_LeftStick = 0x0,
		CAS_RightStick = 0x1,
		CAS_MAX = 0x2,
	};
}

namespace ESlateBrushDrawType
{
	enum Type
	{
		NoDrawType = 0x0,
		Box = 0x1,
		Border = 0x2,
		Image = 0x3,
	};
}

namespace EVertexColorViewMode
{
	enum Type
	{
		Invalid = 0x0,
		Color = 0x1,
		Alpha = 0x2,
		Red = 0x3,
		Green = 0x4,
		Blue = 0x5,
	};
}

enum class EFilterShape
{
	EFS_Horiz = 0x0,
	EFS_Vert = 0x1,
};

enum class ELoadFlags
{
	LOAD_None = 0x0,
	LOAD_SeekFree = 0x1,
	LOAD_NoWarn = 0x2,
	LOAD_Verify = 0x10,
	LOAD_AllowDll = 0x20,
	LOAD_NoVerify = 0x80,
	LOAD_Quiet = 0x2000,
	LOAD_FindIfFail = 0x4000,
	LOAD_MemoryReader = 0x8000,
	LOAD_NoRedirects = 0x10000,
	LOAD_ForDiff = 0x20000,
	LOAD_NoSeekFreeLinkerDetatch = 0x40000,
	LOAD_PackageForPIE = 0x80000,
};

enum class ETranslucencyVolumeCascade
{
	TVC_Inner = 0x0,
	TVC_Outer = 0x1,
	TVC_MAX = 0x2,
};

enum class ESoundDistanceModel
{
	ATTENUATION_Linear = 0x0,
	ATTENUATION_Logarithmic = 0x1,
	ATTENUATION_Inverse = 0x2,
	ATTENUATION_LogReverse = 0x3,
	ATTENUATION_NaturalSound = 0x4,
	ATTENUATION_MAX = 0x5,
};

namespace ETouchIndex
{
	enum Type
	{
		Touch1 = 0x0,
		Touch2 = 0x1,
		Touch3 = 0x2,
		Touch4 = 0x3,
		Touch5 = 0x4,
		Touch6 = 0x5,
		Touch7 = 0x6,
		Touch8 = 0x7,
		Touch9 = 0x8,
		Touch10 = 0x9,
	};
}

namespace EComponentSocketType
{
	enum Type
	{
		Invalid = 0x0,
		Bone = 0x1,
		Socket = 0x2,
	};
}

namespace EResourceSizeMode
{
	enum Type
	{
		Exclusive = 0x0,
		Inclusive = 0x1,
	};
}

enum class EAdManagerDelegate
{
	AMD_ClickedBanner = 0x0,
	AMD_UserClosedAd = 0x1,
	AMD_MAX = 0x2,
};

enum class ERichCurveTangentWeightMode
{
	RCTWM_WeightedNone = 0x0,
	RCTWM_WeightedArrive = 0x1,
	RCTWM_WeightedLeave = 0x2,
	RCTWM_WeightedBoth = 0x3,
};

namespace EConsoleForGamepadLabels
{
	enum Type
	{
		None = 0x0,
		XBoxOne = 0x1,
		PS4 = 0x2,
	};
}

namespace EPhysxUserDataType
{
	enum Type
	{
		Invalid = 0x0,
		BodyInstance = 0x1,
		PhysicalMaterial = 0x2,
		PhysScene = 0x3,
		ConstraintInstance = 0x4,
		PrimitiveComponent = 0x5,
		DestructibleChunk = 0x6,
	};
}

namespace EButtonClickMethod
{
	enum Type
	{
		DownAndUp = 0x0,
		MouseDown = 0x1,
		MouseUp = 0x2,
	};
}

enum class ECompilerFlags
{
	CFLAG_PreferFlowControl = 0x0,
	CFLAG_Debug = 0x1,
	CFLAG_AvoidFlowControl = 0x2,
	CFLAG_SkipValidation = 0x3,
	CFLAG_StandardOptimization = 0x4,
	CFLAG_OnChip = 0x5,
};

enum class EInternal
{
	EC_Internal = 0x0,
};

namespace EFocusMoveDirection
{
	enum Type
	{
		Next = 0x0,
		Previous = 0x1,
	};
}

namespace ENavigationLockReason
{
	enum Type
	{
		Unknown = 0x1,
		AllowUnregister = 0x2,
		MaterialUpdate = 0x4,
		LightingUpdate = 0x8,
		ContinuousEditorMove = 0x10,
	};
}

enum class EHorizontalAlignment
{
	HAlign_Fill = 0x0,
	HAlign_Left = 0x1,
	HAlign_Center = 0x2,
	HAlign_Right = 0x3,
};

enum class EMenuPlacement
{
	MenuPlacement_BelowAnchor = 0x0,
	MenuPlacement_ComboBox = 0x1,
	MenuPlacement_ComboBoxRight = 0x2,
	MenuPlacement_MenuRight = 0x3,
	MenuPlacement_AboveAnchor = 0x4,
};

enum class EOrientation
{
	Orient_Horizontal = 0x0,
	Orient_Vertical = 0x1,
};

enum class EScrollDirection
{
	Scroll_Down = 0x0,
	Scroll_Up = 0x1,
};

enum class EAngularConstraintMotion
{
	ACM_Free = 0x0,
	ACM_Limited = 0x1,
	ACM_Locked = 0x2,
	ACM_MAX = 0x3,
};

namespace ETextCommit
{
	enum Type
	{
		Default = 0x0,
		OnEnter = 0x1,
		OnUserMovedFocus = 0x2,
		OnCleared = 0x3,
	};
}

enum class EFontImportCharacterSet
{
	FontICS_Default = 0x0,
	FontICS_Ansi = 0x1,
	FontICS_Symbol = 0x2,
	FontICS_MAX = 0x3,
};

enum class EShowFlagGroup
{
	SFG_Normal = 0x0,
	SFG_Advanced = 0x1,
	SFG_PostProcess = 0x2,
	SFG_CollisionModes = 0x3,
	SFG_Developer = 0x4,
	SFG_Visualize = 0x5,
	SFG_LightingComponents = 0x6,
	SFG_LightingFeatures = 0x7,
	SFG_Hidden = 0x8,
	SFG_Max = 0x9,
};

namespace ENodeAdvancedPins
{
	enum Type
	{
		NoPins = 0x0,
		Shown = 0x1,
		Hidden = 0x2,
	};
}

namespace ENavigationShapeType
{
	enum Type
	{
		Unknown = 0x0,
		Cylinder = 0x1,
		Box = 0x2,
		Convex = 0x3,
	};
}

enum class TextureFilter
{
	TF_Nearest = 0x0,
	TF_Bilinear = 0x1,
	TF_Trilinear = 0x2,
	TF_Default = 0x3,
	TF_MAX = 0x4,
};

enum class EShowFlagInitMode
{
	ESFIM_Game = 0x0,
	ESFIM_Editor = 0x1,
	ESFIM_All0 = 0x2,
};

namespace UE4
{
	enum ELoadConfigPropagationFlags
	{
		LCPF_None = 0x0,
		LCPF_ReadParentSections = 0x1,
		LCPF_PropagateToChildDefaultObjects = 0x2,
		LCPF_PropagateToInstances = 0x4,
		LCPF_ReloadingConfigData = 0x8,
		LCPF_PersistentFlags = 0x8,
	};
}

enum class TextureAddress
{
	TA_Wrap = 0x0,
	TA_Clamp = 0x1,
	TA_Mirror = 0x2,
	TA_MAX = 0x3,
};

namespace EIndexBufferStride
{
	enum Type
	{
		Force16Bit = 0x1,
		Force32Bit = 0x2,
		AutoDetect = 0x3,
	};
}

enum class ERadialImpulseFalloff
{
	RIF_Constant = 0x0,
	RIF_Linear = 0x1,
	RIF_MAX = 0x2,
};

enum class ETextureSourceFormat
{
	TSF_Invalid = 0x0,
	TSF_G8 = 0x1,
	TSF_BGRA8 = 0x2,
	TSF_BGRE8 = 0x3,
	TSF_RGBA16 = 0x4,
	TSF_RGBA16F = 0x5,
	TSF_RGBA8 = 0x6,
	TSF_RGBE8 = 0x7,
	TSF_MAX = 0x8,
};

enum class ESkyLightSourceType
{
	SLS_CapturedScene = 0x0,
	SLS_SpecifiedCubemap = 0x1,
	SLS_MAX = 0x2,
};

enum class EVisibilityAggressiveness
{
	VIS_LeastAggressive = 0x0,
	VIS_ModeratelyAggressive = 0x1,
	VIS_MostAggressive = 0x2,
	VIS_Max = 0x3,
};

enum class ETimelineSigType
{
	ETS_EventSignature = 0x0,
	ETS_FloatSignature = 0x1,
	ETS_VectorSignature = 0x2,
	ETS_LinearColorSignature = 0x3,
	ETS_InvalidSignature = 0x4,
	ETS_MAX = 0x5,
};

namespace ECollisionEnabled
{
	enum Type
	{
		NoCollision = 0x0,
		QueryOnly = 0x1,
		QueryAndPhysics = 0x2,
	};
}

namespace EConnectionType
{
	enum Type
	{
		OldNet = 0x0,
		WrappedNet = 0x1,
	};
}

enum class EBulkDataFlags
{
	BULKDATA_None = 0x0,
	BULKDATA_PayloadAtEndOfFile = 0x1,
	BULKDATA_SerializeCompressedZLIB = 0x2,
	BULKDATA_ForceSingleElementSerialization = 0x4,
	BULKDATA_SingleUse = 0x8,
	BULKDATA_Unused = 0x20,
	BULKDATA_ForceInlinePayload = 0x40,
	BULKDATA_StoreInSeparateFile = 0x80,
	BULKDATA_SerializeCompressed = 0x2,
};

namespace EClientLoginState
{
	enum Type
	{
		Invalid = 0x0,
		LoggingIn = 0x1,
		Welcomed = 0x2,
	};
}

namespace EMouseCaptureMode
{
	enum Type
	{
		NoCapture = 0x0,
		CapturePermanently = 0x1,
		CaptureDuringMouseDown = 0x2,
	};
}

enum class EBulkDataLockStatus
{
	LOCKSTATUS_Unlocked = 0x0,
	LOCKSTATUS_ReadOnlyLock = 0x1,
	LOCKSTATUS_ReadWriteLock = 0x2,
};

namespace ERigidBodyFlags
{
	enum Type
	{
		None = 0x0,
		Sleeping = 0x1,
		NeedsUpdate = 0x2,
	};
}

enum class EDynamicPrimitiveType
{
	DPT_Level = 0x0,
	DPT_Spawned = 0x1,
	DPT_MAX = 0x2,
};

enum class ERemoveStreamingViews
{
	RemoveStreamingViews_Normal = 0x0,
	RemoveStreamingViews_All = 0x1,
};

namespace ECameraAnimPlaySpace
{
	enum Type
	{
		CameraLocal = 0x0,
		World = 0x1,
		UserDefined = 0x2,
	};
}

enum class EBlendableLocation
{
	BL_AfterTonemapping = 0x0,
	BL_BeforeTonemapping = 0x1,
	BL_BeforeTranslucency = 0x2,
	BL_MAX = 0x3,
};

enum class EDistributionVectorMirrorFlags
{
	EDVMF_Same = 0x0,
	EDVMF_Different = 0x1,
	EDVMF_Mirror = 0x2,
	EDVMF_MAX = 0x3,
};

namespace EMessageScope
{
	enum Type
	{
		Thread = 0x0,
		Process = 0x1,
		Network = 0x2,
		All = 0x3,
	};
}

enum class ENormalMode
{
	NM_PreserveSmoothingGroups = 0x0,
	NM_RecalculateNormals = 0x1,
	NM_RecalculateNormalsSmooth = 0x2,
	NM_RecalculateNormalsHard = 0x3,
	TEMP_BROKEN = 0x4,
	ENormalMode_MAX = 0x5,
};

namespace ESlateBrushTileType
{
	enum Type
	{
		NoTile = 0x0,
		Horizontal = 0x1,
		Vertical = 0x2,
		Both = 0x3,
	};
}

namespace ELockedAxis
{
	enum Type
	{
		Default = 0x0,
		X = 0x1,
		Y = 0x2,
		Z = 0x3,
		Custom = 0x4,
		None = 0x5,
	};
}

enum class EActorLists
{
	AL_PLAYERS = 0x0,
	AL_PLAYERSTATES = 0x1,
	AL_FLOATINGHUD = 0x2,
	AL_UNSTASISEDACTORS = 0x3,
	AL_NPC = 0x4,
	AL_NPC_ACTIVE = 0x5,
	AL_FORCEDHUD = 0x6,
	AL_NPCZONEMANAGERS = 0x7,
	AL_PLAYERCONTROLLERS = 0x8,
	AL_BEDS = 0x9,
	AL_BIOMEZONEVOLUMES = 0xa,
	AL_NPC_DEAD = 0xb,
	AL_DAYCYCLEAMBIENTSOUNDS = 0xc,
	AL_STRUCTURESCLIENT = 0xd,
	AL_STRUCTUREPREVENTIONVOLUMES = 0xe,
	AL_TRANSPONDERS = 0xf,
	AL_CUSTOMACTORLISTS = 0x10,
	AL_BLOCKINGVOLUMES = 0x11,
	AL_AMBIENTSOUNDS = 0x12,
	AL_CONNECTEDSHOOTERCHARACTERS = 0x13,
	AL_EXPLORERNOTECHESTS = 0x14,
	AL_SUPPLYCRATEVOLUMES = 0x15,
	AL_TAMED_DINOS = 0x16,
	AL_NPCZONEMANAGERS_LEVELSTREAM = 0x17,
	AL_TILEVOLUMES = 0x18,
	AL_DIRECTIONAL_LIGHTS = 0x19,
	AL_MISSIONS = 0x1a,
	AL_MISSION_DISPATCHERS = 0x1b,
	AL_THROTTLEDTICKS = 0x1c,
	AL_PLAYER_STARTS = 0x1d,
	AL_MISSION_DISPATCHER_POINTS = 0x1e,
	AL_UNDERMESH_VOLUMES = 0x1f,
	AL_PERFORMANCETHROTTLEDTICKS = 0x20,
	MAX_ACTORLISTS = 0x21,
};

enum class EAntiAliasingMethod
{
	AAM_None = 0x0,
	AAM_FXAA = 0x1,
	AAM_TemporalAA = 0x2,
	AAM_MAX = 0x3,
};

enum class EPixelFormat
{
	PF_Unknown = 0x0,
	PF_A32B32G32R32F = 0x1,
	PF_B8G8R8A8 = 0x2,
	PF_G8 = 0x3,
	PF_G16 = 0x4,
	PF_DXT1 = 0x5,
	PF_DXT3 = 0x6,
	PF_DXT5 = 0x7,
	PF_UYVY = 0x8,
	PF_FloatRGB = 0x9,
	PF_FloatRGBA = 0xa,
	PF_DepthStencil = 0xb,
	PF_ShadowDepth = 0xc,
	PF_R32_FLOAT = 0xd,
	PF_G16R16 = 0xe,
	PF_G16R16F = 0xf,
	PF_G16R16F_FILTER = 0x10,
	PF_G32R32F = 0x11,
	PF_A2B10G10R10 = 0x12,
	PF_A16B16G16R16 = 0x13,
	PF_D24 = 0x14,
	PF_R16F = 0x15,
	PF_R16F_FILTER = 0x16,
	PF_BC5 = 0x17,
	PF_V8U8 = 0x18,
	PF_A1 = 0x19,
	PF_FloatR11G11B10 = 0x1a,
	PF_A8 = 0x1b,
	PF_R32_UINT = 0x1c,
	PF_R32_SINT = 0x1d,
	PF_PVRTC2 = 0x1e,
	PF_PVRTC4 = 0x1f,
	PF_R16_UINT = 0x20,
	PF_R16_SINT = 0x21,
	PF_R16G16B16A16_UINT = 0x22,
	PF_R16G16B16A16_SINT = 0x23,
	PF_R5G6B5_UNORM = 0x24,
	PF_R8G8B8A8 = 0x25,
	PF_A8R8G8B8 = 0x26,
	PF_BC4 = 0x27,
	PF_R8G8 = 0x28,
	PF_ATC_RGB = 0x29,
	PF_ATC_RGBA_E = 0x2a,
	PF_ATC_RGBA_I = 0x2b,
	PF_X24_G8 = 0x2c,
	PF_ETC1 = 0x2d,
	PF_ETC2_RGB = 0x2e,
	PF_ETC2_RGBA = 0x2f,
	PF_R32G32B32A32_UINT = 0x30,
	PF_R16G16_UINT = 0x31,
	PF_ASTC_4x4 = 0x32,
	PF_ASTC_6x6 = 0x33,
	PF_ASTC_8x8 = 0x34,
	PF_ASTC_10x10 = 0x35,
	PF_ASTC_12x12 = 0x36,
	MAX = 0x37,
};

namespace FNavigationSystem
{
	enum ECreateIfEmpty
	{
		Invalid = 0xff,
		DontCreate = 0x0,
		Create = 0x1,
	};
}

namespace ECameraAlphaBlendMode
{
	enum Type
	{
		CABM_Linear = 0x0,
		CABM_Cubic = 0x1,
	};
}

namespace ENavigationDirtyFlag
{
	enum Type
	{
		Geometry = 0x1,
		DynamicModifier = 0x2,
		UseAgentHeight = 0x4,
		All = 0x3,
	};
}

namespace EActorListsBP
{
	enum Type
	{
		AL_PLAYERS = 0x0,
		AL_PLAYERSTATES = 0x1,
		AL_FLOATINGHUD = 0x2,
		AL_UNSTASISEDACTORS = 0x3,
		AL_NPC = 0x4,
		AL_NPC_ACTIVE = 0x5,
		AL_FORCEDHUD = 0x6,
		AL_NPCZONEMANAGERS = 0x7,
		AL_PLAYERCONTROLLERS = 0x8,
		AL_BEDS = 0x9,
		AL_BIOMEZONEVOLUMES = 0xa,
		AL_NPC_DEAD = 0xb,
		AL_DAYCYCLEAMBIENTSOUNDS = 0xc,
		AL_STRUCTURESCLIENT = 0xd,
		AL_STRUCTUREPREVENTIONVOLUMES = 0xe,
		AL_TRANSPONDERS = 0xf,
		AL_CUSTOMACTORLISTS = 0x10,
		AL_BLOCKINGVOLUMES = 0x11,
		AL_AMBIENTSOUNDS = 0x12,
		AL_CONNECTEDSHOOTERCHARACTERS = 0x13,
		AL_EXPLORERNOTECHESTS = 0x14,
		AL_SUPPLYCRATEVOLUMES = 0x15,
		AL_TAMED_DINOS = 0x16,
		MAX = 0x17,
	};
}

namespace EModType
{
	enum Type
	{
		Unknown = 0x0,
		Game = 0x1,
		Map = 0x2,
		TotalConversion = 0x3,
		IslandExtension = 0x4,
	};
}

enum class ETextureRenderTargetFormat
{
	RTF_R8 = 0x0,
	RTF_RG8 = 0x1,
	RTF_RGBA8 = 0x2,
	RTF_R16f = 0x3,
	RTF_RG16f = 0x4,
	RTF_RGBA16f = 0x5,
	RTF_R32f = 0x6,
	RTF_RG32f = 0x7,
	RTF_RGBA32f = 0x8,
};

namespace ECurveEaseFunction
{
	enum Type
	{
		Linear = 0x0,
		QuadIn = 0x1,
		QuadOut = 0x2,
		QuadInOut = 0x3,
		CubicIn = 0x4,
		CubicOut = 0x5,
		CubicInOut = 0x6,
	};
}

enum class EEdGraphPinDirection
{
	EGPD_Input = 0x0,
	EGPD_Output = 0x1,
	EGPD_MAX = 0x2,
};

namespace ENodeTitleType
{
	enum Type
	{
		FullTitle = 0x0,
		ListView = 0x1,
		EditableTitle = 0x2,
		MenuTitle = 0x3,
		MAX_TitleTypes = 0x4,
	};
}

namespace ECollisionShape
{
	enum Type
	{
		Line = 0x0,
		Box = 0x1,
		Sphere = 0x2,
		Capsule = 0x3,
	};
}

enum class EShaderFrequency
{
	SF_Vertex = 0x0,
	SF_Hull = 0x1,
	SF_Domain = 0x2,
	SF_Pixel = 0x3,
	SF_Geometry = 0x4,
	SF_Compute = 0x5,
	SF_NumFrequencies = 0x6,
	SF_NumBits = 0x3,
};

enum class ESceneCaptureSource
{
	SCS_SceneColorHDR = 0x0,
	SCS_FinalColorLDR = 0x1,
};

enum class EFontCacheType
{
	Offline = 0x0,
	Runtime = 0x1,
};

enum class ERenderTargetStoreAction
{
	ENoAction = 0x0,
	EStore = 0x1,
	EMultisampleResolve = 0x2,
};

namespace EDataDisplay
{
	enum Type
	{
		MISSION_INFO = 0x0,
		LEADERBOARDS = 0x1,
	};
}

namespace EBoolExecResult
{
	enum Type
	{
		Success = 0x0,
		Failed = 0x1,
	};
}

namespace Concurrency
{
	enum SchedulerType
	{
		ThreadScheduler = 0x0,
	};
}

namespace FWindowActivateEvent
{
	enum EActivationType
	{
		EA_Activate = 0x0,
		EA_ActivateByMouse = 0x1,
		EA_Deactivate = 0x2,
	};
}

enum class EPrimitiveTopologyType
{
	Triangle = 0x0,
	Patch = 0x1,
	Line = 0x2,
	Point = 0x3,
	Quad = 0x4,
	Num = 0x5,
	NumBits = 0x3,
};

namespace EStencilAlliance
{
	enum Type
	{
		None = 0x0,
		Friendly = 0x1,
		NPC = 0x2,
		NPCFleeing = 0x3,
		Hostile = 0x4,
		Ally = 0x5,
		Element = 0x6,
	};
}

namespace EChunkPriority
{
	enum Type
	{
		Immediate = 0x0,
		High = 0x1,
		Low = 0x2,
	};
}

namespace ETabActivationCause
{
	enum Type
	{
		UserClickedOnTab = 0x0,
		SetDirectly = 0x1,
	};
}

namespace FKeyDetails
{
	enum EKeyFlags
	{
		GamepadKey = 0x1,
		MouseButton = 0x2,
		ModifierKey = 0x4,
		NotBlueprintBindableKey = 0x8,
		FloatAxis = 0x10,
		VectorAxis = 0x20,
		NoFlags = 0x0,
	};
}

namespace FSlateDrawElement
{
	enum EElementType
	{
		ET_Box = 0x0,
		ET_DebugQuad = 0x1,
		ET_Text = 0x2,
		ET_Spline = 0x3,
		ET_Line = 0x4,
		ET_Gradient = 0x5,
		ET_Viewport = 0x6,
		ET_Border = 0x7,
		ET_Custom = 0x8,
	};
}

namespace EAIOptionFlag
{
	enum Type
	{
		Default = 0x0,
		Enable = 0x1,
		Disable = 0x2,
		MAX = 0x3,
	};
}

namespace EPrimalItemMessage
{
	enum Type
	{
		Broken = 0x0,
		Repaired = 0x1,
		MAX = 0x2,
	};
}

namespace FEngineShowFlags
{
	enum EShowFlag
	{
		SF_PostProcessing = 0x0,
		SF_Bloom = 0x1,
		SF_Tonemapper = 0x2,
		SF_AntiAliasing = 0x3,
		SF_TemporalAA = 0x4,
		SF_AmbientCubemap = 0x5,
		SF_EyeAdaptation = 0x6,
		SF_VisualizeHDR = 0x7,
		SF_LensFlares = 0x8,
		SF_GlobalIllumination = 0x9,
		SF_Vignette = 0xa,
		SF_Grain = 0xb,
		SF_AmbientOcclusion = 0xc,
		SF_Decals = 0xd,
		SF_CameraImperfections = 0xe,
		SF_OnScreenDebug = 0xf,
		SF_OverrideDiffuseAndSpecular = 0x10,
		SF_ReflectionOverride = 0x11,
		SF_VisualizeBuffer = 0x12,
		SF_DirectLighting = 0x13,
		SF_DirectionalLights = 0x14,
		SF_PointLights = 0x15,
		SF_SpotLights = 0x16,
		SF_ColorGrading = 0x17,
		SF_VectorFields = 0x18,
		SF_DepthOfField = 0x19,
		SF_ShadowsFromEditorHiddenActors = 0x1a,
		SF_GBufferHints = 0x1b,
		SF_MotionBlur = 0x1c,
		SF_CompositeEditorPrimitives = 0x1d,
		SF_TestImage = 0x1e,
		SF_VisualizeDOF = 0x1f,
		SF_VisualizeAdaptiveDOF = 0x20,
		SF_VertexColors = 0x21,
		SF_Refraction = 0x22,
		SF_CameraInterpolation = 0x23,
		SF_SceneColorFringe = 0x24,
		SF_SeparateTranslucency = 0x25,
		SF_ScreenPercentage = 0x26,
		SF_VisualizeMotionBlur = 0x27,
		SF_ReflectionEnvironment = 0x28,
		SF_VisualizeOutOfBoundsPixels = 0x29,
		SF_Diffuse = 0x2a,
		SF_Specular = 0x2b,
		SF_SelectionOutline = 0x2c,
		SF_ScreenSpaceReflections = 0x2d,
		SF_SubsurfaceScattering = 0x2e,
		SF_VisualizeSSS = 0x2f,
		SF_IndirectLightingCache = 0x30,
		SF_DebugAI = 0x31,
		SF_VisLog = 0x32,
		SF_Navigation = 0x33,
		SF_GameplayDebug = 0x34,
		SF_TexturedLightProfiles = 0x35,
		SF_LightFunctions = 0x36,
		SF_Tessellation = 0x37,
		SF_InstancedStaticMeshes = 0x38,
		SF_DynamicShadows = 0x39,
		SF_Particles = 0x3a,
		SF_SkeletalMeshes = 0x3b,
		SF_BuilderBrush = 0x3c,
		SF_Translucency = 0x3d,
		SF_BillboardSprites = 0x3e,
		SF_LOD = 0x3f,
		SF_LightComplexity = 0x40,
		SF_ShaderComplexity = 0x41,
		SF_StationaryLightOverlap = 0x42,
		SF_LightMapDensity = 0x43,
		SF_StreamingBounds = 0x44,
		SF_Constraints = 0x45,
		SF_CameraFrustums = 0x46,
		SF_AudioRadius = 0x47,
		SF_BSPSplit = 0x48,
		SF_Brushes = 0x49,
		SF_Lighting = 0x4a,
		SF_DeferredLighting = 0x4b,
		SF_Editor = 0x4c,
		SF_BSPTriangles = 0x4d,
		SF_LargeVertices = 0x4e,
		SF_Grid = 0x4f,
		SF_Snap = 0x50,
		SF_MeshEdges = 0x51,
		SF_Cover = 0x52,
		SF_Splines = 0x53,
		SF_Selection = 0x54,
		SF_ModeWidgets = 0x55,
		SF_Bounds = 0x56,
		SF_HitProxies = 0x57,
		SF_PropertyColoration = 0x58,
		SF_LightInfluences = 0x59,
		SF_Pivot = 0x5a,
		SF_ShadowFrustums = 0x5b,
		SF_Wireframe = 0x5c,
		SF_Materials = 0x5d,
		SF_StaticMeshes = 0x5e,
		SF_Landscape = 0x5f,
		SF_LightRadius = 0x60,
		SF_Fog = 0x61,
		SF_Volumes = 0x62,
		SF_Game = 0x63,
		SF_LevelColoration = 0x64,
		SF_BSP = 0x65,
		SF_Collision = 0x66,
		SF_CollisionVisibility = 0x67,
		SF_CollisionPawn = 0x68,
		SF_LightShafts = 0x69,
		SF_PostProcessMaterial = 0x6a,
		SF_Atmosphere = 0x6b,
		SF_CameraAspectRatioBars = 0x6c,
		SF_CameraSafeFrames = 0x6d,
		SF_TextRender = 0x6e,
		SF_Rendering = 0x6f,
		SF_HighResScreenshotMask = 0x70,
		SF_HMDDistortion = 0x71,
		SF_StereoRendering = 0x72,
		SF_DistanceCulledPrimitives = 0x73,
		SF_VisualizeLightCulling = 0x74,
		SF_PrecomputedVisibility = 0x75,
		SF_SkyLighting = 0x76,
		SF_VisualizeLPV = 0x77,
		SF_PreviewShadowsIndicator = 0x78,
		SF_PrecomputedVisibilityCells = 0x79,
		SF_VolumeLightingSamples = 0x7a,
		SF_LpvLightingOnly = 0x7b,
		SF_Paper2DSprites = 0x7c,
		SF_VisualizeDistanceFieldAO = 0x7d,
		SF_VisualizeDistanceFieldGI = 0x7e,
		SF_VisualizeMeshDistanceFields = 0x7f,
		SF_VisualizeGlobalDistanceField = 0x80,
		SF_DistanceFieldAO = 0x81,
		SF_DistanceFieldGI = 0x82,
		SF_VisualizeSSR = 0x83,
		SF_ForceGBuffer = 0x84,
		SF_VisualizeSenses = 0x85,
		SF_TrueSky = 0x86,
		SF_GroundClutter = 0x87,
		SF_AllowMaskedZEqual = 0x88,
	};
}

namespace ISlateStyle
{
	enum EStyleMessageSeverity
	{
		CriticalError = 0x0,
		Error = 0x1,
		PerformanceWarning = 0x2,
		Warning = 0x3,
		Info = 0x4,
	};
}

enum class EResourceTransitionAccess
{
	EReadable = 0x0,
	EWritable = 0x1,
	ERWBarrier = 0x2,
	ERWNoBarrier = 0x3,
	ERWSubResBarrier = 0x4,
	EMetaData = 0x5,
	EMaxAccess = 0x6,
};

enum class EOutputFormat
{
	LDR_GAMMA_32 = 0x0,
	HDR_LINEAR_32 = 0x1,
	HDR_LINEAR_64 = 0x2,
};

namespace EHttpResponseCodes
{
	enum Type
	{
		Unknown = 0x0,
		Continue = 0x64,
		SwitchProtocol = 0x65,
		Ok = 0xc8,
		Created = 0xc9,
		Accepted = 0xca,
		Partial = 0xcb,
		NoContent = 0xcc,
		ResetContent = 0xcd,
		PartialContent = 0xce,
		Ambiguous = 0x12c,
		Moved = 0x12d,
		Redirect = 0x12e,
		RedirectMethod = 0x12f,
		NotModified = 0x130,
		UseProxy = 0x131,
		RedirectKeepVerb = 0x133,
		BadRequest = 0x190,
		Denied = 0x191,
		PaymentReq = 0x192,
		Forbidden = 0x193,
		NotFound = 0x194,
		BadMethod = 0x195,
		NoneAcceptable = 0x196,
		ProxyAuthReq = 0x197,
		RequestTimeout = 0x198,
		Conflict = 0x199,
		Gone = 0x19a,
		LengthRequired = 0x19b,
		PrecondFailed = 0x19c,
		RequestTooLarge = 0x19d,
		UriTooLong = 0x19e,
		UnsupportedMedia = 0x19f,
		RetryWith = 0x1c1,
		ServerError = 0x1f4,
		NotSupported = 0x1f5,
		BadGateway = 0x1f6,
		ServiceUnavail = 0x1f7,
		GatewayTimeout = 0x1f8,
		VersionNotSup = 0x1f9,
	};
}

enum class EModuleLoadResult
{
	Success = 0x0,
	FileNotFound = 0x1,
	FileIncompatible = 0x2,
	CouldNotBeLoadedByOS = 0x3,
	FailedToInitialize = 0x4,
};

enum class EOrbitChainMode
{
	EOChainMode_Add = 0x0,
	EOChainMode_Scale = 0x1,
	EOChainMode_Link = 0x2,
	EOChainMode_MAX = 0x3,
};

enum class UCollationResult
{
	UCOL_EQUAL = 0x0,
	UCOL_GREATER = 0x1,
	UCOL_LESS = 0xff,
};

namespace EBTExecutionSnap
{
	enum Type
	{
		Regular = 0x0,
		OutOfNodes = 0x1,
	};
}

enum class EResult
{
	k_EResultOK = 0x1,
	k_EResultFail = 0x2,
	k_EResultNoConnection = 0x3,
	k_EResultInvalidPassword = 0x5,
	k_EResultLoggedInElsewhere = 0x6,
	k_EResultInvalidProtocolVer = 0x7,
	k_EResultInvalidParam = 0x8,
	k_EResultFileNotFound = 0x9,
	k_EResultBusy = 0xa,
	k_EResultInvalidState = 0xb,
	k_EResultInvalidName = 0xc,
	k_EResultInvalidEmail = 0xd,
	k_EResultDuplicateName = 0xe,
	k_EResultAccessDenied = 0xf,
	k_EResultTimeout = 0x10,
	k_EResultBanned = 0x11,
	k_EResultAccountNotFound = 0x12,
	k_EResultInvalidSteamID = 0x13,
	k_EResultServiceUnavailable = 0x14,
	k_EResultNotLoggedOn = 0x15,
	k_EResultPending = 0x16,
	k_EResultEncryptionFailure = 0x17,
	k_EResultInsufficientPrivilege = 0x18,
	k_EResultLimitExceeded = 0x19,
	k_EResultRevoked = 0x1a,
	k_EResultExpired = 0x1b,
	k_EResultAlreadyRedeemed = 0x1c,
	k_EResultDuplicateRequest = 0x1d,
	k_EResultAlreadyOwned = 0x1e,
	k_EResultIPNotFound = 0x1f,
	k_EResultPersistFailed = 0x20,
	k_EResultLockingFailed = 0x21,
	k_EResultLogonSessionReplaced = 0x22,
	k_EResultConnectFailed = 0x23,
	k_EResultHandshakeFailed = 0x24,
	k_EResultIOFailure = 0x25,
	k_EResultRemoteDisconnect = 0x26,
	k_EResultShoppingCartNotFound = 0x27,
	k_EResultBlocked = 0x28,
	k_EResultIgnored = 0x29,
	k_EResultNoMatch = 0x2a,
	k_EResultAccountDisabled = 0x2b,
	k_EResultServiceReadOnly = 0x2c,
	k_EResultAccountNotFeatured = 0x2d,
	k_EResultAdministratorOK = 0x2e,
	k_EResultContentVersion = 0x2f,
	k_EResultTryAnotherCM = 0x30,
	k_EResultPasswordRequiredToKickSession = 0x31,
	k_EResultAlreadyLoggedInElsewhere = 0x32,
	k_EResultSuspended = 0x33,
	k_EResultCancelled = 0x34,
	k_EResultDataCorruption = 0x35,
	k_EResultDiskFull = 0x36,
	k_EResultRemoteCallFailed = 0x37,
	k_EResultPasswordUnset = 0x38,
	k_EResultExternalAccountUnlinked = 0x39,
	k_EResultPSNTicketInvalid = 0x3a,
	k_EResultExternalAccountAlreadyLinked = 0x3b,
	k_EResultRemoteFileConflict = 0x3c,
	k_EResultIllegalPassword = 0x3d,
	k_EResultSameAsPreviousValue = 0x3e,
	k_EResultAccountLogonDenied = 0x3f,
	k_EResultCannotUseOldPassword = 0x40,
	k_EResultInvalidLoginAuthCode = 0x41,
	k_EResultAccountLogonDeniedNoMail = 0x42,
	k_EResultHardwareNotCapableOfIPT = 0x43,
	k_EResultIPTInitError = 0x44,
	k_EResultParentalControlRestricted = 0x45,
	k_EResultFacebookQueryError = 0x46,
	k_EResultExpiredLoginAuthCode = 0x47,
	k_EResultIPLoginRestrictionFailed = 0x48,
	k_EResultAccountLockedDown = 0x49,
	k_EResultAccountLogonDeniedVerifiedEmailRequired = 0x4a,
	k_EResultNoMatchingURL = 0x4b,
	k_EResultBadResponse = 0x4c,
	k_EResultRequirePasswordReEntry = 0x4d,
	k_EResultValueOutOfRange = 0x4e,
	k_EResultUnexpectedError = 0x4f,
	k_EResultDisabled = 0x50,
	k_EResultInvalidCEGSubmission = 0x51,
	k_EResultRestrictedDevice = 0x52,
	k_EResultRegionLocked = 0x53,
	k_EResultRateLimitExceeded = 0x54,
	k_EResultAccountLoginDeniedNeedTwoFactor = 0x55,
	k_EResultItemDeleted = 0x56,
	k_EResultAccountLoginDeniedThrottle = 0x57,
	k_EResultTwoFactorCodeMismatch = 0x58,
	k_EResultTwoFactorActivationCodeMismatch = 0x59,
	k_EResultAccountAssociatedToMultiplePartners = 0x5a,
	k_EResultNotModified = 0x5b,
};

namespace ESlateSizeRule
{
	enum Type
	{
		Automatic = 0x0,
		Fill = 0x1,
	};
}

enum class EAdditiveBasePoseType
{
	ABPT_None = 0x0,
	ABPT_RefPose = 0x1,
	ABPT_AnimScaled = 0x2,
	ABPT_AnimFrame = 0x3,
	ABPT_MAX = 0x4,
};

namespace ELegendPosition
{
	enum Type
	{
		Outside = 0x0,
		Inside = 0x1,
	};
}

namespace EColorChannelTarget
{
	enum Type
	{
		Red = 0x0,
		Green = 0x1,
		Blue = 0x2,
		Alpha = 0x3,
		All = 0x4,
	};
}

namespace EParticleKey
{
	enum Type
	{
		Toggle = 0x0,
		Trigger = 0x1,
	};
}

enum class EClearDepthStencil
{
	Depth = 0x0,
	Stencil = 0x1,
	DepthStencil = 0x2,
};

enum class EDDSPixelFormat
{
	DDSPF_FourCC = 0x4,
	DDSPF_RGB = 0x40,
	DDSPF_DXT1 = 0x31545844,
	DDSPF_DXT3 = 0x33545844,
	DDSPF_DXT5 = 0x35545844,
};

namespace EMissionAlertType
{
	enum Type
	{
		Positive = 0x0,
		Neutral = 0x1,
		Negative = 0x2,
	};
}

enum class UDisplayContextType
{
	UDISPCTX_TYPE_DIALECT_HANDLING = 0x0,
	UDISPCTX_TYPE_CAPITALIZATION = 0x1,
};

enum class EFriendFlags
{
	k_EFriendFlagNone = 0x0,
	k_EFriendFlagBlocked = 0x1,
	k_EFriendFlagFriendshipRequested = 0x2,
	k_EFriendFlagImmediate = 0x4,
	k_EFriendFlagClanMember = 0x8,
	k_EFriendFlagOnGameServer = 0x10,
	k_EFriendFlagRequestingFriendship = 0x80,
	k_EFriendFlagRequestingInfo = 0x100,
	k_EFriendFlagIgnored = 0x200,
	k_EFriendFlagIgnoredFriend = 0x400,
	k_EFriendFlagSuggested = 0x800,
	k_EFriendFlagAll = 0xffff,
};

namespace EHubSubMenu
{
	enum Type
	{
		Inventory = 0x0,
		Engrams = 0x1,
		TribeManager = 0x2,
		TameGroups = 0x3,
		TamingList = 0x4,
		SurvivalProfile = 0x5,
		MissionList = 0x6,
		MAX = 0x7,
	};
}

namespace EPartyReservationResult
{
	enum Type
	{
		RequestPending = 0x0,
		GeneralError = 0x1,
		PartyLimitReached = 0x2,
		IncorrectPlayerCount = 0x3,
		RequestTimedOut = 0x4,
		ReservationDuplicate = 0x5,
		ReservationNotFound = 0x6,
		ReservationAccepted = 0x7,
		ReservationDenied = 0x8,
		ReservationDenied_Banned = 0x9,
		ReservationRequestCanceled = 0xa,
	};
}

namespace FOpenGLBase
{
	enum EFenceResult
	{
		FR_AlreadySignaled = 0x0,
		FR_TimeoutExpired = 0x1,
		FR_ConditionSatisfied = 0x2,
		FR_WaitFailed = 0x3,
	};
}

namespace UCanvas
{
	enum ELastCharacterIndexFormat
	{
		LastWholeCharacterBeforeOffset = 0x0,
		CharacterAtOffset = 0x1,
		Unused = 0x2,
	};
}

namespace EAlignVerticalUI
{
	enum Type
	{
		Top = 0x0,
		Center = 0x1,
		Bottom = 0x2,
	};
}

namespace EBTMemoryClear
{
	enum Type
	{
		Destroy = 0x0,
		StoreSubtree = 0x1,
	};
}

enum class EInjectFlags
{
	INJECT_SHADOWED = 0x1,
};

namespace Concurrency
{
	enum SchedulingProtocolType
	{
		EnhanceScheduleGroupLocality = 0x0,
		EnhanceForwardProgress = 0x1,
	};
}

namespace FSlateFontMeasure
{
	enum ELastCharacterIndexFormat
	{
		LastWholeCharacterBeforeOffset = 0x0,
		CharacterAtOffset = 0x1,
		Unused = 0x2,
	};
}

namespace EPrimalItemType
{
	enum Type
	{
		MiscConsumable = 0x0,
		Equipment = 0x1,
		Weapon = 0x2,
		Ammo = 0x3,
		Structure = 0x4,
		Resource = 0x5,
		Skin = 0x6,
		WeaponAttachment = 0x7,
		Artifact = 0x8,
		MAX = 0x9,
	};
}

enum class EBTActionMemoryHelper
{
	ActionAbortingDone = 0x0,
	WaitingForActionToFinishAborting = 0x1,
};

namespace ENativeMissionMetaTag
{
	enum Type
	{
		INVALID = 0x0,
		GENESIS_VR_BOSS_UNLOCK = 0x1,
		ARCTIC_MISSION = 0x2,
		BOG_MISSION = 0x3,
		LUNAR_MISSION = 0x4,
		OCEAN_MISSION = 0x5,
		VOLCANIC_MISSION = 0x6,
		NORMAL_DIFFICULTY = 0x7,
		ALPHA_DIFFICULTY = 0x8,
		BETA_DIFFICULTY = 0x9,
		GAMMA_DIFFICULTY = 0xa,
		MAX = 0xb,
	};
}

namespace UAtmosphericFogComponent
{
	enum EPrecomputeState
	{
		EInvalid = 0x0,
		EFinishedComputation = 0x1,
		EValid = 0x2,
	};
}

namespace ETraceType
{
	enum Type
	{
		TT_LineTrace = 0x0,
		TT_ArcTrace = 0x1,
		TT_Max = 0x2,
	};
}

namespace FSceneRenderTargets
{
	enum EShadingPath
	{
		Forward = 0x0,
		Deferred = 0x1,
		Num = 0x2,
	};
}

enum class EVisibilityTrackCondition
{
	EVTC_Always = 0x0,
	EVTC_GoreEnabled = 0x1,
	EVTC_GoreDisabled = 0x2,
	EVTC_MAX = 0x3,
};

enum class ERenderTargetLoadAction
{
	ENoAction = 0x0,
	ELoad = 0x1,
	EClear = 0x2,
};

namespace EChunkLocation
{
	enum Type
	{
		DoesNotExist = 0x0,
		NotAvailable = 0x1,
		LocalSlow = 0x2,
		LocalFast = 0x3,
		BestLocation = 0x3,
	};
}

enum class EStandbyType
{
	STDBY_Rx = 0x0,
	STDBY_Tx = 0x1,
	STDBY_BadPing = 0x2,
	STDBY_MAX = 0x3,
};

enum class UColBoundMode
{
	UCOL_BOUND_LOWER = 0x0,
	UCOL_BOUND_UPPER = 0x1,
	UCOL_BOUND_UPPER_LONG = 0x2,
	UCOL_BOUND_VALUE_COUNT = 0x3,
};

enum class ETerrainCoordMappingType
{
	TCMT_Auto = 0x0,
	TCMT_XY = 0x1,
	TCMT_XZ = 0x2,
	TCMT_YZ = 0x3,
	TCMT_MAX = 0x4,
};

enum class EBeam2Method
{
	PEB2M_Distance = 0x0,
	PEB2M_Target = 0x1,
	PEB2M_Branch = 0x2,
	PEB2M_MAX = 0x3,
};

namespace FHMDViewMesh
{
	enum EHMDMeshType
	{
		MT_HiddenArea = 0x0,
		MT_VisibleArea = 0x1,
	};
}

enum class ELightmapQuality
{
	LQ_LIGHTMAP = 0x0,
	HQ_LIGHTMAP = 0x1,
};

namespace FPlayerAllClustersInventory
{
	enum LockStatus
	{
		LS_Unlocked = 0x0,
		LS_Locked = 0x1,
		LS_Locking = 0x2,
	};
}

enum class dtCompressedTileFlags
{
	DT_COMPRESSEDTILE_FREE_DATA = 0x1,
};

namespace FKeyDetails
{
	enum EInputAxisType
	{
		None = 0x0,
		Float = 0x1,
		Vector = 0x2,
	};
}

namespace EClimbingAnimationType
{
	enum Type
	{
		Up = 0x0,
		Down = 0x1,
		Right = 0x2,
		Left = 0x3,
		MeleeUp = 0x4,
		MeleeRight = 0x5,
		MeleeLeft = 0x6,
		FinishUp = 0x7,
		FinishDown = 0x8,
		HangingFwd = 0x9,
		HangingMelee = 0xa,
		HangingFinishUp = 0xb,
		HangingFinishDown = 0xc,
		JumpUp = 0xd,
		JumpUpRight = 0xe,
		JumpUpLeft = 0xf,
		SlideDown = 0x10,
		AttachUp = 0x11,
		AttachDown = 0x12,
		AttachHangingUp = 0x13,
		AttachHangingDown = 0x14,
		FlipLeft = 0x15,
		FlipRight = 0x16,
		FlipUp = 0x17,
		FlipDown = 0x18,
		TurnUp = 0x19,
		TurnDown = 0x1a,
		TurnRight = 0x1b,
		TurnLeft = 0x1c,
		OpenInventory = 0x1d,
		OpenInventoryHanging = 0x1e,
		QuakeFall = 0x1f,
		MAX = 0x20,
	};
}

namespace ITextInputMethodContext
{
	enum ECaretPosition
	{
		Beginning = 0x0,
		Ending = 0x1,
	};
}

namespace EHostSessionPanel
{
	enum Map
	{
		ISLAND = 0x0,
		CENTER = 0x1,
		SCORCHED_EARTH = 0x2,
		RAGNAROK = 0x3,
		VALGUERO = 0x4,
		ABERRATION = 0x5,
		EXTINCTION = 0x6,
		GENESIS = 0x7,
		GEN2 = 0x8,
		PGARK = 0x9,
		UNKNOWN = 0xa,
		CRYSTALISLES = 0xb,
	};
}

enum class EEmitterRenderMode
{
	ERM_Normal = 0x0,
	ERM_Point = 0x1,
	ERM_Cross = 0x2,
	ERM_LightsOnly = 0x3,
	ERM_None = 0x4,
	ERM_MAX = 0x5,
};

enum class EHeaderComboVisibility
{
	Always = 0x0,
	Ghosted = 0x1,
	OnHover = 0x2,
};

enum class EParticleCameraOffsetUpdateMethod
{
	EPCOUM_DirectSet = 0x0,
	EPCOUM_Additive = 0x1,
	EPCOUM_Scalar = 0x2,
	EPCOUM_MAX = 0x3,
};

enum class EMaterialPositionTransformSource
{
	TRANSFORMPOSSOURCE_Local = 0x0,
	TRANSFORMPOSSOURCE_World = 0x1,
	TRANSFORMPOSSOURCE_MAX = 0x2,
};

namespace FSpeedTreeWind
{
	enum EOscillationComponents
	{
		OSC_GLOBAL = 0x0,
		OSC_BRANCH_1 = 0x1,
		OSC_BRANCH_2 = 0x2,
		OSC_LEAF_1_RIPPLE = 0x3,
		OSC_LEAF_1_TUMBLE = 0x4,
		OSC_LEAF_1_TWITCH = 0x5,
		OSC_LEAF_2_RIPPLE = 0x6,
		OSC_LEAF_2_TUMBLE = 0x7,
		OSC_LEAF_2_TWITCH = 0x8,
		OSC_FROND_RIPPLE = 0x9,
		NUM_OSC_COMPONENTS = 0xa,
	};
}

namespace FGCReferenceTokenStream
{
	enum EGCArrayInfoPlaceholder
	{
		E_GCSkipIndexPlaceholder = 0xdeadbabe,
	};
}

namespace EBabyCuddleType
{
	enum Type
	{
		PET = 0x0,
		FOOD = 0x1,
		WALK = 0x2,
		MAX = 0x3,
	};
}

namespace EMultiBlockType
{
	enum Type
	{
		None = 0x0,
		ButtonRow = 0x1,
		EditableText = 0x2,
		Heading = 0x3,
		MenuEntry = 0x4,
		MenuSeparator = 0x5,
		ToolBarButton = 0x6,
		ToolBarComboButton = 0x7,
		ToolBarSeparator = 0x8,
		Widget = 0x9,
	};
}

enum class EFontHinting
{
	Default = 0x0,
	Auto = 0x1,
	AutoLight = 0x2,
	Monochrome = 0x3,
	None = 0x4,
};

enum class EDecompressionType
{
	DTYPE_Setup = 0x0,
	DTYPE_Invalid = 0x1,
	DTYPE_Preview = 0x2,
	DTYPE_Native = 0x3,
	DTYPE_RealTime = 0x4,
	DTYPE_Procedural = 0x5,
	DTYPE_Xenon = 0x6,
	DTYPE_Streaming = 0x7,
	DTYPE_MAX = 0x8,
};

namespace EGlassTransparencyType
{
	enum Type
	{
		TwoWay = 0x0,
		OneWayA = 0x1,
		OneWayB = 0x2,
		Opaque = 0x3,
	};
}

namespace ULinkerLoad
{
	enum ELinkerStatus
	{
		LINKER_Failed = 0x0,
		LINKER_Loaded = 0x1,
		LINKER_TimedOut = 0x2,
	};
}

namespace EChatSendMode
{
	enum Type
	{
		GlobalChat = 0x0,
		GlobalTribeChat = 0x1,
		LocalChat = 0x2,
		AllianceChat = 0x3,
		MAX = 0x4,
	};
}

namespace EPathFollowingStatus
{
	enum Type
	{
		Idle = 0x0,
		Waiting = 0x1,
		Paused = 0x2,
		Moving = 0x3,
	};
}

namespace EPrimalCharacterStatusValue
{
	enum Type
	{
		Health = 0x0,
		Stamina = 0x1,
		Torpidity = 0x2,
		Oxygen = 0x3,
		Food = 0x4,
		Water = 0x5,
		Temperature = 0x6,
		Weight = 0x7,
		MeleeDamageMultiplier = 0x8,
		SpeedMultiplier = 0x9,
		TemperatureFortitude = 0xa,
		CraftingSpeedMultiplier = 0xb,
		MAX = 0xc,
	};
}

namespace EHUDElementAnchorMode
{
	enum Type
	{
		Specified = 0x0,
		QuickbarLeft = 0x1,
		QuickbarRight = 0x2,
		QuickbarTop = 0x3,
	};
}

namespace SDockingNode
{
	enum RelativeDirection
	{
		LeftOf = 0x0,
		Above = 0x1,
		RightOf = 0x2,
		Below = 0x3,
		Center = 0x4,
	};
}

namespace SSearchBox
{
	enum SearchDirection
	{
		Previous = 0x0,
		Next = 0x1,
	};
}

enum class CopyStatus
{
	CS_OK = 0x0,
	CS_Fail = 0x1,
	CS_InProgress = 0x2,
};

enum class ESteamNetConnectionEnd
{
	k_ESteamNetConnectionEnd_Invalid = 0x0,
	k_ESteamNetConnectionEnd_App_Min = 0x3e8,
	k_ESteamNetConnectionEnd_App_Generic = 0x3e8,
	k_ESteamNetConnectionEnd_App_Max = 0x7cf,
	k_ESteamNetConnectionEnd_AppException_Min = 0x7d0,
	k_ESteamNetConnectionEnd_AppException_Generic = 0x7d0,
	k_ESteamNetConnectionEnd_AppException_Max = 0xbb7,
	k_ESteamNetConnectionEnd_Local_Min = 0xbb8,
	k_ESteamNetConnectionEnd_Local_OfflineMode = 0xbb9,
	k_ESteamNetConnectionEnd_Local_ManyRelayConnectivity = 0xbba,
	k_ESteamNetConnectionEnd_Local_HostedServerPrimaryRelay = 0xbbb,
	k_ESteamNetConnectionEnd_Local_NetworkConfig = 0xbbc,
	k_ESteamNetConnectionEnd_Local_Rights = 0xbbd,
	k_ESteamNetConnectionEnd_Local_Max = 0xf9f,
	k_ESteamNetConnectionEnd_Remote_Min = 0xfa0,
	k_ESteamNetConnectionEnd_Remote_Timeout = 0xfa1,
	k_ESteamNetConnectionEnd_Remote_BadCrypt = 0xfa2,
	k_ESteamNetConnectionEnd_Remote_BadCert = 0xfa3,
	k_ESteamNetConnectionEnd_Remote_NotLoggedIn = 0xfa4,
	k_ESteamNetConnectionEnd_Remote_NotRunningApp = 0xfa5,
	k_ESteamNetConnectionEnd_Remote_Max = 0x1387,
	k_ESteamNetConnectionEnd_Misc_Min = 0x1388,
	k_ESteamNetConnectionEnd_Misc_Generic = 0x1389,
	k_ESteamNetConnectionEnd_Misc_InternalError = 0x138a,
	k_ESteamNetConnectionEnd_Misc_Timeout = 0x138b,
	k_ESteamNetConnectionEnd_Misc_RelayConnectivity = 0x138c,
	k_ESteamNetConnectionEnd_Misc_SteamConnectivity = 0x138d,
	k_ESteamNetConnectionEnd_Misc_NoRelaySessionsToClient = 0x138e,
	k_ESteamNetConnectionEnd_Misc_Max = 0x176f,
};

namespace EListDisplay
{
	enum Type
	{
		MISSIONS = 0x0,
		EFFECTS = 0x1,
	};
}

namespace EPrimalItemStat
{
	enum Type
	{
		GenericQuality = 0x0,
		Armor = 0x1,
		MaxDurability = 0x2,
		WeaponDamagePercent = 0x3,
		WeaponClipAmmo = 0x4,
		HypothermalInsulation = 0x5,
		Weight = 0x6,
		HyperthermalInsulation = 0x7,
		MAX = 0x8,
	};
}

namespace FGraphicsPipelineStateInitializer
{
	enum OptionalState
	{
		OS_SetStencilRef = 0x1,
		OS_SetBlendFactor = 0x2,
	};
}

enum class EAdditiveAnimationType
{
	AAT_None = 0x0,
	AAT_LocalSpaceBase = 0x1,
	AAT_RotationOffsetMeshSpace = 0x2,
	AAT_MAX = 0x3,
};

namespace Imf
{
	enum Compression
	{
		NO_COMPRESSION = 0x0,
		RLE_COMPRESSION = 0x1,
		ZIPS_COMPRESSION = 0x2,
		ZIP_COMPRESSION = 0x3,
		PIZ_COMPRESSION = 0x4,
		PXR24_COMPRESSION = 0x5,
		B44_COMPRESSION = 0x6,
		B44A_COMPRESSION = 0x7,
		NUM_COMPRESSION_METHODS = 0x8,
	};
}

namespace Concurrency
{
	enum DynamicProgressFeedbackType
	{
		ProgressFeedbackDisabled = 0x0,
		ProgressFeedbackEnabled = 0x1,
	};
}

enum class ESteamNetworkingSocketsDebugOutputType
{
	k_ESteamNetworkingSocketsDebugOutputType_None = 0x0,
	k_ESteamNetworkingSocketsDebugOutputType_Bug = 0x1,
	k_ESteamNetworkingSocketsDebugOutputType_Error = 0x2,
	k_ESteamNetworkingSocketsDebugOutputType_Important = 0x3,
	k_ESteamNetworkingSocketsDebugOutputType_Warning = 0x4,
	k_ESteamNetworkingSocketsDebugOutputType_Msg = 0x5,
	k_ESteamNetworkingSocketsDebugOutputType_Verbose = 0x6,
	k_ESteamNetworkingSocketsDebugOutputType_Debug = 0x7,
	k_ESteamNetworkingSocketsDebugOutputType_Everything = 0x8,
};

namespace EPlayerActionIndex
{
	enum Action
	{
		None = 0x0,
		WhistleFollow = 0x1,
		WhistleFollowOne = 0x2,
		WhistleStop = 0x3,
		WhistleStopOne = 0x4,
		WhistleAggressive = 0x5,
		WhistleNeutral = 0x6,
		WhistlePassive = 0x7,
		WhistlePassiveFlee = 0x8,
		WhistleAttackTarget = 0x9,
		WhistleLandFlyerOne = 0xa,
		ShowInventory = 0xb,
		ShowCraftables = 0xc,
		ShowTribeManager = 0xd,
		Poop = 0xe,
		UnHideCompanion = 0xf,
		ShowEmoteSelection = 0x10,
		Emote_HatSwitch = 0x11,
		Emote_Salute = 0x12,
		Emote_Sorry = 0x13,
		Emote_Thank = 0x14,
		Emote_Wave = 0x15,
		Emote_Laugh = 0x16,
		Emote_Yes = 0x17,
		Emote_No = 0x18,
		Emote_Taunt = 0x19,
		Emote_Cheer = 0x1a,
		Emote_FriendlyLowerHands = 0x1b,
		Emote_MAX = 0x1c,
	};
}

namespace EColumnSortMode
{
	enum Type
	{
		None = 0x0,
		Ascending = 0x1,
		Descending = 0x2,
	};
}

namespace ECompanionState
{
	enum Type
	{
		IDLE = 0x0,
		FOCUSED = 0x1,
		EVENT = 0x2,
		MONOLOGUE = 0x3,
		ASLEEP = 0x4,
		CUSTOM = 0x5,
	};
}

namespace ESplitterResizeMode
{
	enum Type
	{
		Fixed = 0x0,
		Fill = 0x1,
	};
}

namespace EUserPrivileges
{
	enum Type
	{
		CanPlay = 0x0,
		CanPlayOnline = 0x1,
		CanCommunicateOnline = 0x2,
		CanUseUserGeneratedContent = 0x3,
	};
}

enum class EEmitterNormalsMode
{
	ENM_CameraFacing = 0x0,
	ENM_Spherical = 0x1,
	ENM_Cylindrical = 0x2,
	ENM_MAX = 0x3,
};

namespace ansel
{
	enum StartSessionStatus
	{
		kDisallowed = 0x0,
		kAllowed = 0x1,
	};
}

namespace EInventorySortType
{
	enum Type
	{
		Default = 0x0,
		Alphabetical_Asc = 0x1,
		Alphabetical_Dsc = 0x2,
		Weight_Asc = 0x3,
		Weight_Dsc = 0x4,
		Type_Asc = 0x5,
		Type_Dsc = 0x6,
		SpoilTimer_Asc = 0x7,
		SpoilTimer_Dsc = 0x8,
	};
}

enum class EMaterialVectorCoordTransformSource
{
	TRANSFORMSOURCE_World = 0x0,
	TRANSFORMSOURCE_Local = 0x1,
	TRANSFORMSOURCE_Tangent = 0x2,
	TRANSFORMSOURCE_View = 0x3,
	TRANSFORMSOURCE_RefPose = 0x4,
	TRANSFORMSOURCE_MAX = 0x5,
};

namespace EVoronoiBlendType
{
	enum Type
	{
		Flat = 0x0,
		Closest = 0x1,
		SecondClosest = 0x2,
		Cellular = 0x3,
		Organic = 0x4,
	};
}

namespace EEnvQueryParam
{
	enum Type
	{
		Float = 0x0,
		Int = 0x1,
		Bool = 0x2,
	};
}

namespace EVisibility
{
	enum Private
	{
		VISPRIVATE_Visible = 0x1,
		VISPRIVATE_Collapsed = 0x2,
		VISPRIVATE_Hidden = 0x4,
		VISPRIVATE_SelfHitTestVisible = 0x8,
		VISPRIVATE_ChildrenHitTestVisible = 0x10,
		VIS_Visible = 0x19,
		VIS_Collapsed = 0x2,
		VIS_Hidden = 0x4,
	};
}

enum class EPassInputId
{
	ePId_Input0 = 0x0,
	ePId_Input1 = 0x1,
	ePId_Input2 = 0x2,
	ePId_Input3 = 0x3,
	ePId_Input4 = 0x4,
	ePId_Input5 = 0x5,
	ePId_Input6 = 0x6,
	ePId_Input_MAX = 0x7,
};

namespace dtTileCache
{
	enum ObstacleRequestAction
	{
		REQUEST_ADD = 0x0,
		REQUEST_REMOVE = 0x1,
	};
}

enum class ETextHistoryType
{
	Base = 0x0,
	NamedFormat = 0x1,
	OrderedFormat = 0x2,
	ArgumentFormat = 0x3,
	AsNumber = 0x4,
	AsPercent = 0x5,
	AsCurrency = 0x6,
	AsDate = 0x7,
	AsTime = 0x8,
	AsDateTime = 0x9,
};

enum class ECustomMaterialOutputType
{
	CMOT_Float1 = 0x0,
	CMOT_Float2 = 0x1,
	CMOT_Float3 = 0x2,
	CMOT_Float4 = 0x3,
	CMOT_MAX = 0x4,
};

enum class ELobbyDistanceFilter
{
	k_ELobbyDistanceFilterClose = 0x0,
	k_ELobbyDistanceFilterDefault = 0x1,
	k_ELobbyDistanceFilterFar = 0x2,
	k_ELobbyDistanceFilterWorldwide = 0x3,
};

enum class ControlDirection
{
	None = 0x0,
	Up = 0x1,
	Down = 0x2,
	Left = 0x3,
	Right = 0x4,
};

enum class EUserUGCListSortOrder
{
	k_EUserUGCListSortOrder_CreationOrderDesc = 0x0,
	k_EUserUGCListSortOrder_CreationOrderAsc = 0x1,
	k_EUserUGCListSortOrder_TitleAsc = 0x2,
	k_EUserUGCListSortOrder_LastUpdatedDesc = 0x3,
	k_EUserUGCListSortOrder_SubscriptionDateDesc = 0x4,
	k_EUserUGCListSortOrder_VoteScoreDesc = 0x5,
	k_EUserUGCListSortOrder_ForModeration = 0x6,
};

namespace EJsonNotation
{
	enum Type
	{
		ObjectStart = 0x0,
		ObjectEnd = 0x1,
		ArrayStart = 0x2,
		ArrayEnd = 0x3,
		Boolean = 0x4,
		String = 0x5,
		Number = 0x6,
		Null = 0x7,
		Error = 0x8,
	};
}

namespace ETargetPlatformFeatures
{
	enum Type
	{
		AudioStreaming = 0x0,
		DistanceFieldShadows = 0x1,
		GrayscaleSRGB = 0x2,
		HighQualityLightmaps = 0x3,
		LowQualityLightmaps = 0x4,
		MultipleGameInstances = 0x5,
		Packaging = 0x6,
		SdkConnectDisconnect = 0x7,
		Tessellation = 0x8,
		TextureStreaming = 0x9,
		UserCredentials = 0xa,
		VertexShaderTextureSampling = 0xb,
	};
}

namespace SDockingSplitter
{
	enum ETabStackToFind
	{
		UpperLeft = 0x0,
		UpperRight = 0x1,
	};
}

namespace EBoneModifierType
{
	enum Type
	{
		HEAD = 0x0,
		NECK = 0x1,
		NECKLENGTH = 0x2,
		CHEST = 0x3,
		SHOULDERS = 0x4,
		ARMLENGTH = 0x5,
		UPPERARM = 0x6,
		LOWERARM = 0x7,
		HAND = 0x8,
		LEGLENGTH = 0x9,
		UPPERLEG = 0xa,
		LOWERLEG = 0xb,
		FOOT = 0xc,
		HIP = 0xd,
		TORSO = 0xe,
		UPPERFACESIZE = 0xf,
		LOWERFACESIZE = 0x10,
		TORSODEPTH = 0x11,
		HEADHEIGHT = 0x12,
		HEADWIDTH = 0x13,
		HEADDEPTH = 0x14,
		TORSOHEIGHT = 0x15,
		MAX = 0x16,
	};
}

namespace FRecastDebugGeometry
{
	enum EOffMeshLinkEnd
	{
		OMLE_None = 0x0,
		OMLE_Left = 0x1,
		OMLE_Right = 0x2,
		OMLE_Both = 0x3,
	};
}

enum class ModulationParamMode
{
	MPM_Normal = 0x0,
	MPM_Abs = 0x1,
	MPM_Direct = 0x2,
	MPM_MAX = 0x3,
};

enum class ESimpleRenderTargetMode
{
	EExistingColorAndDepth = 0x0,
	EUninitializedColorAndDepth = 0x1,
	EUninitializedColorExistingDepth = 0x2,
	EUninitializedColorClearDepth = 0x3,
	EClearColorExistingDepth = 0x4,
	EClearColorAndDepth = 0x5,
	EExistingContents_NoDepthStore = 0x6,
	EExistingColorAndClearDepth = 0x7,
	EExistingColorAndDepthAndClearStencil = 0x8,
};

namespace EBindingKind
{
	enum Type
	{
		Function = 0x0,
		Property = 0x1,
	};
}

namespace FAtmosphereTextureResource
{
	enum ETextureType
	{
		E_Transmittance = 0x0,
		E_Irradiance = 0x1,
		E_Inscatter = 0x2,
	};
}

namespace EXPType
{
	enum Type
	{
		XP_GENERIC = 0x0,
		XP_KILL = 0x1,
		XP_HARVEST = 0x2,
		XP_CRAFT = 0x3,
		XP_SPECIAL = 0x4,
		XP_ALPHAKILL = 0x5,
		MAX = 0x6,
	};
}

namespace ENetworkModeResult
{
	enum Type
	{
		Yes = 0x0,
		No = 0x1,
	};
}

namespace FPipeWorkerInfo
{
	enum EState
	{
		State_Idle = 0x0,
		State_Connecting = 0x1,
		State_SendingJobData = 0x2,
		State_ReceivingResultSize = 0x3,
		State_ReceivingResults = 0x4,
	};
}

namespace FGenericTeamId
{
	enum EPredefinedId
	{
		NoTeamId = 0xff,
	};
}

namespace FSpeedTreeWind
{
	enum EOptions
	{
		GLOBAL_WIND = 0x0,
		GLOBAL_PRESERVE_SHAPE = 0x1,
		BRANCH_SIMPLE_1 = 0x2,
		BRANCH_DIRECTIONAL_1 = 0x3,
		BRANCH_DIRECTIONAL_FROND_1 = 0x4,
		BRANCH_TURBULENCE_1 = 0x5,
		BRANCH_WHIP_1 = 0x6,
		BRANCH_OSC_COMPLEX_1 = 0x7,
		BRANCH_SIMPLE_2 = 0x8,
		BRANCH_DIRECTIONAL_2 = 0x9,
		BRANCH_DIRECTIONAL_FROND_2 = 0xa,
		BRANCH_TURBULENCE_2 = 0xb,
		BRANCH_WHIP_2 = 0xc,
		BRANCH_OSC_COMPLEX_2 = 0xd,
		LEAF_RIPPLE_VERTEX_NORMAL_1 = 0xe,
		LEAF_RIPPLE_COMPUTED_1 = 0xf,
		LEAF_TUMBLE_1 = 0x10,
		LEAF_TWITCH_1 = 0x11,
		LEAF_OCCLUSION_1 = 0x12,
		LEAF_RIPPLE_VERTEX_NORMAL_2 = 0x13,
		LEAF_RIPPLE_COMPUTED_2 = 0x14,
		LEAF_TUMBLE_2 = 0x15,
		LEAF_TWITCH_2 = 0x16,
		LEAF_OCCLUSION_2 = 0x17,
		FROND_RIPPLE_ONE_SIDED = 0x18,
		FROND_RIPPLE_TWO_SIDED = 0x19,
		FROND_RIPPLE_ADJUST_LIGHTING = 0x1a,
		ROLLING = 0x1b,
		NUM_WIND_OPTIONS = 0x1c,
	};
}

namespace EStretchDirection
{
	enum Type
	{
		Both = 0x0,
		DownOnly = 0x1,
		UpOnly = 0x2,
	};
}

namespace EPinHidingMode
{
	enum Type
	{
		NeverAsPin = 0x0,
		PinHiddenByDefault = 0x1,
		PinShownByDefault = 0x2,
		AlwaysAsPin = 0x3,
	};
}

namespace EGrappleState
{
	enum Type
	{
		GRAPPLE_Idle = 0x0,
		GRAPPLE_Pulling = 0x1,
		GRAPPLE_Releasing = 0x2,
		GRAPPLE_Custom = 0x3,
		GRAPPLE_Max = 0x4,
	};
}

namespace FSlateDrawElement
{
	enum ERotationSpace
	{
		RelativeToElement = 0x0,
		RelativeToWorld = 0x1,
	};
}

namespace FOpenGLBase
{
	enum EResourceLockMode
	{
		RLM_ReadWrite = 0x0,
		RLM_ReadOnly = 0x1,
		RLM_WriteOnly = 0x2,
		RLM_WriteOnlyUnsynchronized = 0x3,
		RLM_WriteOnlyPersistent = 0x4,
	};
}

enum class ERemoteStoragePlatform
{
	k_ERemoteStoragePlatformNone = 0x0,
	k_ERemoteStoragePlatformWindows = 0x1,
	k_ERemoteStoragePlatformOSX = 0x2,
	k_ERemoteStoragePlatformPS3 = 0x4,
	k_ERemoteStoragePlatformLinux = 0x8,
	k_ERemoteStoragePlatformReserved2 = 0x10,
	k_ERemoteStoragePlatformAll = 0xff,
};

enum class UCharProperty
{
	UCHAR_ALPHABETIC = 0x0,
};

namespace EOnlinePresenceState
{
	enum Type
	{
		Online = 0x0,
		Offline = 0x1,
		Away = 0x2,
		ExtendedAway = 0x3,
		DoNotDisturb = 0x4,
		Chat = 0x5,
	};
}

namespace ESortedActiveWaveGetType
{
	enum Type
	{
		FullUpdate = 0x0,
		PausedUpdate = 0x1,
		QueryOnly = 0x2,
	};
}

enum class AnimationKeyFormat
{
	AKF_ConstantKeyLerp = 0x0,
	AKF_VariableKeyLerp = 0x1,
	AKF_PerTrackCompression = 0x2,
	AKF_MAX = 0x3,
};

enum class EP2PSessionError
{
	k_EP2PSessionErrorNone = 0x0,
	k_EP2PSessionErrorNotRunningApp = 0x1,
	k_EP2PSessionErrorNoRightsToApp = 0x2,
	k_EP2PSessionErrorDestinationNotLoggedIn = 0x3,
	k_EP2PSessionErrorTimeout = 0x4,
	k_EP2PSessionErrorMax = 0x5,
};

namespace EVoiceCaptureState
{
	enum Type
	{
		UnInitialized = 0x0,
		NotCapturing = 0x1,
		Ok = 0x2,
		NoData = 0x3,
		Stopping = 0x4,
		BufferTooSmall = 0x5,
		Error = 0x6,
	};
}

enum class SourceDestinations
{
	DEST_DRY = 0x0,
	DEST_REVERB = 0x1,
	DEST_RADIO = 0x2,
	DEST_COUNT = 0x3,
};

namespace UNavigationSystem
{
	enum EOctreeUpdateMode
	{
		OctreeUpdate_Default = 0x0,
		OctreeUpdate_Geometry = 0x1,
		OctreeUpdate_Modifiers = 0x2,
		OctreeUpdate_Refresh = 0x4,
		OctreeUpdate_ParentChain = 0x8,
	};
}

namespace UNavigationSystem
{
	enum ECleanupMode
	{
		CleanupWithWorld = 0x0,
		CleanupUnsafe = 0x1,
	};
}

enum class ERealtimeAudioTaskType
{
	Decompress = 0x0,
	Procedural = 0x1,
};

enum class Beam2SourceTargetMethod
{
	PEB2STM_Default = 0x0,
	PEB2STM_UserSet = 0x1,
	PEB2STM_Emitter = 0x2,
	PEB2STM_Particle = 0x3,
	PEB2STM_Actor = 0x4,
	PEB2STM_MAX = 0x5,
};

namespace ECompilationResult
{
	enum Type
	{
		UpToDate = 0xfe,
		Canceled = 0xff,
		Succeeded = 0x0,
		FailedDueToHeaderChange = 0x1,
		OtherCompilationError = 0x2,
		Unsupported = 0x3,
		Unknown = 0x4,
	};
}

namespace EMultiplayerAutomationRoles
{
	enum Type
	{
		Host = 0x0,
		Client0 = 0x1,
		MaxNumParticipants = 0x2,
	};
}

namespace EEnvTestCost
{
	enum Type
	{
		Low = 0x0,
		Medium = 0x1,
		High = 0x2,
	};
}

enum class EBeamTaperMethod
{
	PEBTM_None = 0x0,
	PEBTM_Full = 0x1,
	PEBTM_Partial = 0x2,
	PEBTM_MAX = 0x3,
};

namespace FNavigationOctree
{
	enum ENavGeometryStoringMode
	{
		SkipNavGeometry = 0x0,
		StoreNavGeometry = 0x1,
	};
}

namespace UEnum
{
	enum ECppForm
	{
		Regular = 0x0,
		Namespaced = 0x1,
		EnumClass = 0x2,
	};
}

namespace EPhaseRequirementWidgetVisualState
{
	enum Type
	{
		Neutral = 0x0,
		Positive = 0x1,
		Negative = 0x2,
		Custom = 0x3,
	};
}

namespace EColumnSizeMode
{
	enum Type
	{
		Fill = 0x0,
		Fixed = 0x1,
	};
}

namespace EAIForceParam
{
	enum Type
	{
		Force = 0x0,
		DoNotForce = 0x1,
		MAX = 0x2,
	};
}

enum class UCharIteratorOrigin
{
	UITER_START = 0x0,
	UITER_CURRENT = 0x1,
	UITER_LIMIT = 0x2,
	UITER_ZERO = 0x3,
	UITER_LENGTH = 0x4,
};

enum class ERenderModuleType
{
	Sprites = 0x0,
	Ribbon = 0x1,
};

enum class EModuleType
{
	EPMT_General = 0x0,
	EPMT_TypeData = 0x1,
	EPMT_Beam = 0x2,
	EPMT_Trail = 0x3,
	EPMT_Spawn = 0x4,
	EPMT_Required = 0x5,
	EPMT_Event = 0x6,
	EPMT_Light = 0x7,
	EPMT_MAX = 0x8,
};

enum class ELinkAllocationType
{
	CREATE_LINK_PREALLOCATED = 0x0,
	CREATE_LINK_DYNAMIC_OFFMESH = 0x1,
	CREATE_LINK_DYNAMIC_CLUSTER = 0x2,
};

namespace UParticleSystemComponent
{
	enum EForceAsyncWorkCompletion
	{
		STALL = 0x0,
		ENSURE_AND_STALL = 0x1,
		SILENT = 0x2,
	};
}

namespace ESkyResources
{
	enum Type
	{
		Sky = 0x0,
		FogScatter = 0x1,
		FogLoss = 0x2,
		MAX = 0x3,
	};
}

namespace FExclusiveDepthStencil
{
	enum Type
	{
		DepthNop = 0x0,
		DepthRead = 0x1,
		DepthWrite = 0x2,
		DepthMask = 0xf,
	};
}

enum class ESpeedTreeLODType
{
	STLOD_Pop = 0x0,
	STLOD_Smooth = 0x1,
};

enum class EOverlayToStoreFlag
{
	k_EOverlayToStoreFlag_None = 0x0,
	k_EOverlayToStoreFlag_AddToCart = 0x1,
	k_EOverlayToStoreFlag_AddToCartAndShow = 0x2,
};

namespace FRHIUniformBufferLayout
{
	enum EInit
	{
		Zero = 0x0,
	};
}

namespace UContextMenuItemSwitchMode
{
	enum Type
	{
		None = 0x0,
		Radio = 0x1,
		Checkbox = 0x2,
	};
}

enum class EInterpTrackParticleReplayDragType
{
	PRDT_LeftEdge = 0xa,
	PRDT_RightEdge = 0xb,
};

namespace FExternalDragOperation
{
	enum ExternalDragType
	{
		DragText = 0x0,
		DragFiles = 0x1,
	};
}

enum class ETrackInterpMode
{
	FTI_Set = 0x0,
	FTI_Add = 0x1,
	FTI_Multiply = 0x2,
	FTI_MAX = 0x3,
};

enum class ServerSortingTypeType
{
	Official_Asc = 0x0,
	Official_Dsc = 0x1,
	Ping_Asc = 0x2,
	Ping_Dsc = 0x3,
	Players_Asc = 0x4,
	Players_Dsc = 0x5,
};

namespace EPostProcessVolumeType
{
	enum Type
	{
		Generic = 0x0,
		Cave = 0x1,
		Water = 0x2,
	};
}

namespace EPawnActionMoveMode
{
	enum Type
	{
		UsePathfinding = 0x0,
		StraightLine = 0x1,
	};
}

namespace EShooterHudPosition
{
	enum Type
	{
		Left = 0x0,
		FrontLeft = 0x1,
		Front = 0x2,
		FrontRight = 0x3,
		Right = 0x4,
		BackRight = 0x5,
		Back = 0x6,
		BackLeft = 0x7,
	};
}

namespace PGFixed
{
	enum FixedRaw
	{
		RAW = 0x0,
	};
}

enum class EUserUGCList
{
	k_EUserUGCList_Published = 0x0,
	k_EUserUGCList_VotedOn = 0x1,
	k_EUserUGCList_VotedUp = 0x2,
	k_EUserUGCList_VotedDown = 0x3,
	k_EUserUGCList_WillVoteLater = 0x4,
	k_EUserUGCList_Favorited = 0x5,
	k_EUserUGCList_Subscribed = 0x6,
	k_EUserUGCList_UsedOrPlayed = 0x7,
	k_EUserUGCList_Followed = 0x8,
};

enum class EInterpTrackAnimControlDragType
{
	ACDT_AnimBlockLeftEdge = 0x0,
	ACDT_AnimBlockRightEdge = 0x1,
};

enum class EDynamicParameterUpdateFlags
{
	EDPU_UPDATE_NONE = 0x0,
	EDPU_UPDATE_0 = 0x1,
	EDPU_UPDATE_1 = 0x2,
	EDPU_UPDATE_2 = 0x4,
	EDPU_UPDATE_3 = 0x8,
	EDPU_UPDATE_01 = 0x3,
	EDPU_UPDATE_012 = 0x7,
	EDPU_UPDATE_ALL = 0xf,
};

enum class EChatSteamIDInstanceFlags
{
	k_EChatAccountInstanceMask = 0xfff,
	k_EChatInstanceFlagClan = 0x80000,
	k_EChatInstanceFlagLobby = 0x40000,
	k_EChatInstanceFlagMMSLobby = 0x20000,
};

namespace EChatType
{
	enum Type
	{
		GlobalChat = 0x0,
		ProximityChat = 0x1,
		RadioChat = 0x2,
		GlobalTribeChat = 0x3,
		AllianceChat = 0x4,
		MAX = 0x5,
	};
}

namespace EBTActiveNode
{
	enum Type
	{
		Composite = 0x0,
		ActiveTask = 0x1,
		AbortingTask = 0x2,
		InactiveTask = 0x3,
	};
}

namespace ETargetingTeamBehavior
{
	enum Type
	{
		ExactMatch = 0x0,
		FriendlyWith = 0x1,
		PrioritizeButIncludeAny = 0x2,
	};
}

namespace ESoundMixState
{
	enum Type
	{
		Inactive = 0x0,
		FadingIn = 0x1,
		Active = 0x2,
		FadingOut = 0x3,
		AwaitingRemoval = 0x4,
	};
}

enum class ProcessingStages
{
	STAGE_SOURCE = 0x1,
	STAGE_RADIO = 0x2,
	STAGE_REVERB = 0x3,
	STAGE_EQPREMASTER = 0x4,
	STAGE_OUTPUT = 0x5,
};

enum class ELocationSkelVertSurfaceSource
{
	VERTSURFACESOURCE_Vert = 0x0,
	VERTSURFACESOURCE_Surface = 0x1,
	VERTSURFACESOURCE_MAX = 0x2,
};

enum class ELandscapeCustomizedCoordType
{
	LCCT_None = 0x0,
	LCCT_CustomUV0 = 0x1,
	LCCT_CustomUV1 = 0x2,
	LCCT_CustomUV2 = 0x3,
	LCCT_WeightMapUV = 0x4,
	LCCT_MAX = 0x5,
};

namespace EEvaluatorDataSource
{
	enum Type
	{
		EDS_SourcePose = 0x0,
		EDS_DestinationPose = 0x1,
	};
}

namespace EMissionTimerMode
{
	enum Type
	{
		HideTimer = 0x0,
		ShowTimeRemaining = 0x1,
		ShowTimeElapsed = 0x2,
		UseBPGetMissionTimerText = 0x3,
	};
}

namespace ESpawnPattern
{
	enum Type
	{
		Circle = 0x0,
		Grid = 0x1,
		Random = 0x2,
	};
}

namespace EMissionRelatedPropertyUsage
{
	enum Type
	{
		Prefix = 0x0,
		Suffix = 0x1,
		Description = 0x2,
	};
}

namespace EMissionRelatedPropertyType
{
	enum Type
	{
		Name_PropertyType = 0x0,
		String_PropertyType = 0x1,
		Boolean_PropertyType = 0x2,
		Integer_PropertyType = 0x3,
		Float_PropertyType = 0x4,
		Double_PropertyType = 0x5,
	};
}

namespace EProgressBarFillType
{
	enum Type
	{
		LeftToRight = 0x0,
		RightToLeft = 0x1,
		FillFromCenter = 0x2,
		TopToBottom = 0x3,
		BottomToTop = 0x4,
	};
}

enum class EParticleSysParamType
{
	PSPT_None = 0x0,
	PSPT_Scalar = 0x1,
	PSPT_ScalarRand = 0x2,
	PSPT_Vector = 0x3,
	PSPT_VectorRand = 0x4,
	PSPT_Color = 0x5,
	PSPT_Actor = 0x6,
	PSPT_Material = 0x7,
	PSPT_MAX = 0x8,
};

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
		PLAYERS_CONNECTED = 0x6,
		SPATIALNETWORKEDACTORS = 0x7,
		SPATIALNETWORKEDACTORS_DORMANT = 0x8,
		ALL_SPATIAL = 0x9,
		THERMALSTRUCTURES = 0xa,
		STRUCTURES_CORE = 0xb,
		DINOPAWNS_TAMED = 0xc,
		PLAYERS_AND_TAMED_DINOS = 0xd,
		PLAYERS_CONNECTED_AND_TAMED_DINOS = 0xe,
		DINOFOODCONTAINER = 0xf,
		GRENADES = 0x10,
		TREESAPTAPS = 0x11,
		LARGEUNSTASISRANGE = 0x12,
		TRAPS = 0x13,
		MAX = 0x14,
	};
}

enum class ETrackToggleAction
{
	ETTA_Off = 0x0,
	ETTA_On = 0x1,
	ETTA_Toggle = 0x2,
	ETTA_Trigger = 0x3,
	ETTA_MAX = 0x4,
};

namespace EMultiBlockLocation
{
	enum Type
	{
		None = 0xff,
		Start = 0x0,
		Middle = 0x1,
		End = 0x2,
	};
}

enum class ParticleReplayState
{
	PRS_Disabled = 0x0,
	PRS_Capturing = 0x1,
	PRS_Replaying = 0x2,
	PRS_MAX = 0x3,
};

enum class EColorPickerChannels
{
	Red = 0x0,
	Green = 0x1,
	Blue = 0x2,
	Alpha = 0x3,
	Hue = 0x4,
	Saturation = 0x5,
	Value = 0x6,
};

enum class EParticleEventType
{
	EPET_Any = 0x0,
	EPET_Spawn = 0x1,
	EPET_Death = 0x2,
	EPET_Collision = 0x3,
	EPET_Burst = 0x4,
	EPET_Blueprint = 0x5,
	EPET_MAX = 0x6,
};

namespace EEngramGroup
{
	enum Type
	{
		ARK_PRIME = 0x2,
		ARK_SCORCHEDEARTH = 0x4,
		ARK_TEK = 0x8,
		ARK_UNLEARNED = 0x10,
		ARK_ABERRATION = 0x20,
		ARK_EXTINCTION = 0x40,
		ARK_GENESIS = 0x80,
		ARK_GEN2 = 0x81,
		MAX = 0x82,
	};
}

namespace EEditorMessageLogLevel
{
	enum Type
	{
		Error = 0x0,
		Warning = 0x1,
		Info = 0x2,
		Success = 0x3,
	};
}

namespace ETabRole
{
	enum Type
	{
		MajorTab = 0x0,
		PanelTab = 0x1,
		NomadTab = 0x2,
		DocumentTab = 0x3,
		NumRoles = 0x4,
	};
}

namespace FolderWidgetType
{
	enum Type
	{
		FWT_Back = 0x0,
		FWT_Folder = 0x1,
		FWT_CustomFolder = 0x2,
	};
}

namespace EJson
{
	enum Type
	{
		None = 0x0,
		Null = 0x1,
		String = 0x2,
		Number = 0x3,
		Boolean = 0x4,
		Array = 0x5,
		Object = 0x6,
	};
}

namespace EJsonToken
{
	enum Type
	{
		None = 0x0,
		Comma = 0x1,
		CurlyOpen = 0x2,
		CurlyClose = 0x3,
		SquareOpen = 0x4,
		SquareClose = 0x5,
		Colon = 0x6,
		String = 0x7,
		Number = 0x8,
		True = 0x9,
		False = 0xa,
		Null = 0xb,
		Identifier = 0xc,
	};
}

enum class EParticleVertexFactoryType
{
	PVFT_Sprite = 0x0,
	PVFT_BeamTrail = 0x1,
	PVFT_Mesh = 0x2,
	PVFT_MAX = 0x3,
};

namespace EMaxConcurrentResolutionRule
{
	enum Type
	{
		PreventNew = 0x0,
		StopOldest = 0x1,
		StopFarthestThenPreventNew = 0x2,
		StopFarthestThenOldest = 0x3,
	};
}

namespace EHUDElementType
{
	enum Type
	{
		Text = 0x0,
		ProgressBar = 0x1,
		Image = 0x2,
	};
}

namespace EHUDElementHorizontalAlignment
{
	enum Type
	{
		Center = 0x0,
		Left = 0x1,
		Right = 0x2,
	};
}

namespace EHUDElementVerticalAlignment
{
	enum Type
	{
		Center = 0x0,
		Top = 0x1,
		Bottom = 0x2,
	};
}

namespace Concurrency
{
	enum PolicyElementKey
	{
		SchedulerKind = 0x0,
		MaxConcurrency = 0x1,
		MinConcurrency = 0x2,
		TargetOversubscriptionFactor = 0x3,
		LocalContextCacheSize = 0x4,
		ContextStackSize = 0x5,
		ContextPriority = 0x6,
		SchedulingProtocol = 0x7,
		DynamicProgressFeedback = 0x8,
		WinRTInitialization = 0x9,
		MaxPolicyElementKey = 0xa,
	};
}

namespace Concurrency
{
	enum WinRTInitializationType
	{
		InitializeWinRTAsMTA = 0x0,
		DoNotInitializeWinRT = 0x1,
	};
}

enum class ESoundGroup
{
	SOUNDGROUP_Default = 0x0,
	SOUNDGROUP_Effects = 0x1,
	SOUNDGROUP_UI = 0x2,
	SOUNDGROUP_Music = 0x3,
	SOUNDGROUP_Voice = 0x4,
	SOUNDGROUP_GameSoundGroup1 = 0x5,
	SOUNDGROUP_GameSoundGroup2 = 0x6,
	SOUNDGROUP_GameSoundGroup3 = 0x7,
	SOUNDGROUP_GameSoundGroup4 = 0x8,
	SOUNDGROUP_GameSoundGroup5 = 0x9,
	SOUNDGROUP_GameSoundGroup6 = 0xa,
	SOUNDGROUP_GameSoundGroup7 = 0xb,
	SOUNDGROUP_GameSoundGroup8 = 0xc,
	SOUNDGROUP_GameSoundGroup9 = 0xd,
	SOUNDGROUP_GameSoundGroup10 = 0xe,
	SOUNDGROUP_GameSoundGroup11 = 0xf,
	SOUNDGROUP_GameSoundGroup12 = 0x10,
	SOUNDGROUP_GameSoundGroup13 = 0x11,
	SOUNDGROUP_GameSoundGroup14 = 0x12,
	SOUNDGROUP_GameSoundGroup15 = 0x13,
	SOUNDGROUP_GameSoundGroup16 = 0x14,
	SOUNDGROUP_GameSoundGroup17 = 0x15,
	SOUNDGROUP_GameSoundGroup18 = 0x16,
	SOUNDGROUP_GameSoundGroup19 = 0x17,
	SOUNDGROUP_GameSoundGroup20 = 0x18,
};

enum class ETypeAdvanceAnim
{
	ETAA_Default = 0x0,
	ETAA_Finished = 0x1,
	ETAA_Looped = 0x2,
};

namespace EListSessionPVE
{
	enum Type
	{
		SearchingPVEandPVP = 0x0,
		SearchingPVP = 0x1,
		SearchingPVE = 0x2,
	};
}

namespace EListSessionDLCType
{
	enum Type
	{
		SearchingAll = 0x0,
		SearchingArkPrime = 0x1,
		SearchingCenter = 0x2,
		SearchingRagnarok = 0x3,
		SearchingCrystalIsles = 0x4,
		SearchingValguero = 0x5,
		SearchingScorchedEarth = 0x6,
		SearchingAberration = 0x7,
		SearchingExtinction = 0x8,
		SearchingGenesis = 0x9,
		SearchingGen2 = 0xa,
		SearchingPGARK = 0xb,
	};
}

enum class AnimationCompressionFormat
{
	ACF_None = 0x0,
	ACF_Float96NoW = 0x1,
	ACF_Fixed48NoW = 0x2,
	ACF_IntervalFixed32NoW = 0x3,
	ACF_Fixed32NoW = 0x4,
	ACF_Float32NoW = 0x5,
	ACF_Identity = 0x6,
	ACF_MAX = 0x7,
};

namespace EListSessionSort
{
	enum Type
	{
		Name = 0x0,
		Players = 0x1,
		Ping = 0x2,
		Day = 0x3,
	};
}

enum class EParticleSystemUpdateMode
{
	EPSUM_RealTime = 0x0,
	EPSUM_FixedTime = 0x1,
	EPSUM_MAX = 0x2,
};

enum class ParticleSystemLODMethod
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0x0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 0x1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 0x2,
	PARTICLESYSTEMLODMETHOD_MAX = 0x3,
};

enum class EParticleStates
{
	STATE_Particle_Freeze = 0x4000000,
	STATE_Particle_IgnoreCollisions = 0x8000000,
	STATE_Particle_FreezeTranslation = 0x10000000,
	STATE_Particle_FreezeRotation = 0x20000000,
	STATE_Particle_CollisionIgnoreCheck = 0x3c000000,
	STATE_Particle_DelayCollisions = 0x40000000,
	STATE_Particle_CollisionHasOccurred = 0x80000000,
	STATE_Mask = 0xfc000000,
	STATE_CounterMask = 0x3ffffff,
};

enum class EConvertQueryResult
{
	Valid = 0x0,
	Invalid = 0x1,
};

namespace EMultiBoxType
{
	enum Type
	{
		MenuBar = 0x0,
		ToolBar = 0x1,
		VerticalToolBar = 0x2,
		Menu = 0x3,
		ButtonRow = 0x4,
	};
}

enum class EParticleSystemOcclusionBoundsMethod
{
	EPSOBM_None = 0x0,
	EPSOBM_ParticleBounds = 0x1,
	EPSOBM_CustomBounds = 0x2,
	EPSOBM_MAX = 0x3,
};

namespace EOptionsSubMenu
{
	enum Type
	{
		Options = 0x0,
		AdvancedSettings = 0x1,
		KeyBindings = 0x2,
		Gamepad = 0x3,
		RTSKeyBinds = 0x4,
		MAX = 0x5,
	};
}

namespace ESelectionMode
{
	enum Type
	{
		None = 0x0,
		Single = 0x1,
		SingleToggle = 0x2,
		Multi = 0x3,
	};
}

namespace ETextRole
{
	enum Type
	{
		Custom = 0x0,
		ButtonText = 0x1,
		ComboText = 0x2,
	};
}

enum class EntryType
{
	TYPE_HELENA = 0x0,
	TYPE_ROCKWELL = 0x1,
	TYPE_MEIYIN = 0x2,
	TYPE_NERVA = 0x3,
	TYPE_BOSSES = 0x4,
	TYPE_DOSSIER = 0x5,
	TYPE_RAIA = 0x6,
	TYPE_DAHKEYA = 0x7,
	TYPE_GRADUATE = 0x8,
	TYPE_DIANA = 0x9,
	TYPE_SHEWHOWAITS = 0xa,
	TYPE_SANTIAGO = 0xb,
	TYPE_HLNABOT = 0xc,
	TYPE_NIDA = 0xd,
	TYPE_GABRIEL = 0xe,
	MAX_COUNT = 0xf,
	TYPE_NONE = 0xff,
};

enum class EDynamicEmitterType
{
	DET_Unknown = 0x0,
	DET_Sprite = 0x1,
	DET_Mesh = 0x2,
	DET_Beam2 = 0x3,
	DET_Ribbon = 0x4,
	DET_AnimTrail = 0x5,
	DET_Custom = 0x6,
};

namespace EAnimEventTriggerOffsets
{
	enum Type
	{
		OffsetBefore = 0x0,
		OffsetAfter = 0x1,
		NoOffset = 0x2,
	};
}

namespace EAILogicResuming
{
	enum Type
	{
		Continue = 0x0,
		RestartedInstead = 0x1,
	};
}

namespace EPawnActionAbortState
{
	enum Type
	{
		NotBeingAborted = 0x0,
		MarkPendingAbort = 0x1,
		LatentAbortInProgress = 0x2,
		AbortDone = 0x3,
		MAX = 0x4,
	};
}

namespace ELeaderboardGroupByMode
{
	enum Type
	{
		None = 0x0,
		First = 0x1,
		Min = 0x2,
		Max = 0x3,
		Sum = 0x4,
		Count = 0x5,
		Average = 0x6,
	};
}

namespace ELeaderboardOrdering
{
	enum Type
	{
		Ascending = 0x0,
		Descending = 0x1,
	};
}

namespace EPawnActionEventType
{
	enum Type
	{
		Invalid = 0x0,
		FailedToStart = 0x1,
		FinishedAborting = 0x2,
		FinishedExecution = 0x3,
		Push = 0x4,
	};
}

namespace EAlignHorizontalUI
{
	enum Type
	{
		Left = 0x0,
		Center = 0x1,
		Right = 0x2,
	};
}

namespace EAIRequestPriority
{
	enum Type
	{
		SoftScript = 0x0,
		Logic = 0x1,
		HardScript = 0x2,
		Reaction = 0x3,
		Ultimate = 0x4,
		MAX = 0x5,
	};
}

namespace EHostSessionPanel
{
	enum RightPanel
	{
		MODS = 0x0,
		MAPS = 0x1,
		PATCH_NOTES = 0x2,
	};
}

namespace EMissionDispatchMode
{
	enum Type
	{
		StartAnywhere = 0x0,
		RequireNearbyMissionDispatcher = 0x1,
		RequireInsideMissionDispatcher = 0x2,
		UseBPStaticCanStartMission = 0x3,
		RequireInsideDispatcherNoCheck = 0x4,
	};
}

enum class EBlendSpaceAxis
{
	BSA_None = 0x0,
	BSA_X = 0x1,
	BSA_Y = 0x2,
	BSA_Max = 0x3,
};

enum class EBoneControlSpace
{
	BCS_WorldSpace = 0x0,
	BCS_ComponentSpace = 0x1,
	BCS_ParentBoneSpace = 0x2,
	BCS_BoneSpace = 0x3,
	BCS_MAX = 0x4,
};

enum class EBoneRotationSource
{
	BRS_KeepComponentSpaceRotation = 0x0,
	BRS_KeepLocalSpaceRotation = 0x1,
	BRS_CopyFromTarget = 0x2,
};

namespace ESTOFNotificationType
{
	enum Type
	{
		Death = 0x0,
		TribeEliminated = 0x1,
		MatchVictory = 0x2,
		MatchDraw = 0x3,
		MAX = 0x4,
	};
}

namespace EOnlineKeyValuePairDataType
{
	enum Type
	{
		Empty = 0x0,
		Int32 = 0x1,
		Int64 = 0x2,
		Double = 0x3,
		String = 0x4,
		Float = 0x5,
		Blob = 0x6,
		Bool = 0x7,
		MAX = 0x8,
	};
}

namespace ESplinePointType
{
	enum Type
	{
		Linear = 0x0,
		Curve = 0x1,
		Constant = 0x2,
		CurveClamped = 0x3,
		CurveCustomTangent = 0x4,
	};
}

namespace ESplineCoordinateSpace
{
	enum Type
	{
		Local = 0x0,
		World = 0x1,
	};
}

namespace EPrimalARKTributeDataType
{
	enum Type
	{
		Items = 0x0,
		TamedDinos = 0x1,
		CharacterData = 0x2,
		MAX = 0x3,
	};
}

namespace ELandscapeLayerPaintingRestriction
{
	enum Type
	{
		None = 0x0,
		UseMaxLayers = 0x1,
		ExistingOnly = 0x2,
	};
}

namespace EPathFollowingResult
{
	enum Type
	{
		Success = 0x0,
		Blocked = 0x1,
		OffPath = 0x2,
		Aborted = 0x3,
		Skipped = 0x4,
		Invalid = 0x5,
	};
}

namespace ELandscapeLODFalloff
{
	enum Type
	{
		Linear = 0x0,
		SquareRoot = 0x1,
	};
}

namespace EDinoTamedOrder
{
	enum Type
	{
		SetAggressionPassive = 0x0,
		SetAggressionNeutral = 0x1,
		SetAggressionAggressive = 0x2,
		SetAggressionAttackTarget = 0x3,
		ToggleFollowMe = 0x4,
		FollowMe = 0x5,
		StopFollowing = 0x6,
		CycleFollowDistance = 0x7,
		SetAggressionPassiveFlee = 0x8,
		LandingToMe = 0x9,
		MAX = 0xa,
	};
}

namespace EPathFollowingRequestResult
{
	enum Type
	{
		Failed = 0x0,
		AlreadyAtGoal = 0x1,
		RequestSuccessful = 0x2,
	};
}

namespace EColumnSortPriority
{
	enum Type
	{
		Primary = 0x0,
		Secondary = 0x1,
		Max = 0x2,
	};
}

namespace EPathFollowingDebugTokens
{
	enum Type
	{
		Description = 0x0,
		ParamName = 0x1,
		FailedValue = 0x2,
		PassedValue = 0x3,
	};
}

namespace EPrimalCharacterInputType
{
	enum Type
	{
		PrimaryFire = 0x0,
		Targeting = 0x1,
		AltFire = 0x2,
		SwitchWeapon = 0x3,
		Reload = 0x4,
		Crouch = 0x5,
		Prone = 0x6,
		CrouchProneToggle = 0x7,
		SwitchMap = 0x8,
		DinoAttack = 0x9,
	};
}

namespace EVehicleDifferential4W
{
	enum Type
	{
		LimitedSlip_4W = 0x0,
		LimitedSlip_FrontDrive = 0x1,
		LimitedSlip_RearDrive = 0x2,
		Open_4W = 0x3,
		Open_FrontDrive = 0x4,
		Open_RearDrive = 0x5,
	};
}

enum class HighlightStartingPoint
{
	TopLeft = 0x0,
	Center = 0x1,
};

namespace EHelpPage
{
	enum Type
	{
		HELP = 0x0,
		UI = 0x1,
		CRAFTING = 0x2,
		CREATURES = 0x3,
		EXPLORATION = 0x4,
		MAX = 0x5,
	};
}

namespace EHelpPage
{
	enum PageNumber
	{
		PAGE_ONE = 0x0,
		PAGE_TWO = 0x1,
		PAGE_THREE = 0x2,
		PAGE_FOUR = 0x3,
		PAGE_FIVE = 0x4,
		PAGE_SIX = 0x5,
		PAGE_SEVEN = 0x6,
		PAGE_MAX = 0x7,
	};
}

namespace ELootItemType
{
	enum Type
	{
		None = 0x0,
		Element = 0x1,
		Hexagons = 0x2,
		ResourceCommon = 0x3,
		ResourceUncommon = 0x4,
		ResourceRare = 0x5,
		ArmorTier1 = 0x6,
		ArmorTier2 = 0x7,
		ArmorTier3 = 0x8,
		ArmorTek = 0x9,
		WeaponTier1 = 0xa,
		WeaponTier2 = 0xb,
		WeaponTier3 = 0xc,
		WeaponTek = 0xd,
		AmmoTier1 = 0xe,
		AmmoTier2 = 0xf,
		AmmoTier3 = 0x10,
		Saddle = 0x11,
	};
}

namespace ESimpleCurve
{
	enum Type
	{
		Linear = 0x0,
		Pow0_5 = 0x1,
		Pow1_0 = 0x2,
		Pow1_5 = 0x3,
		Pow2_0 = 0x4,
		Pow2_5 = 0x5,
		Pow3_0 = 0x6,
		Pow3_5 = 0x7,
		PowCos0_5 = 0x8,
		PowCos1_0 = 0x9,
		PowCos1_5 = 0xa,
		PowCos2_0 = 0xb,
		PowCos2_5 = 0xc,
		PowCos3_0 = 0xd,
		PowCos3_5 = 0xe,
		PowSin0_5 = 0xf,
		PowSin1_0 = 0x10,
		PowSin1_5 = 0x11,
		PowSin2_0 = 0x12,
		PowSin2_5 = 0x13,
		PowSin3_0 = 0x14,
		PowSin3_5 = 0x15,
		PowMinCos0_5 = 0x16,
		PowMinCos1_0 = 0x17,
		PowMinCos1_5 = 0x18,
		PowMinCos2_0 = 0x19,
		PowMinCos2_5 = 0x1a,
		PowMinCos3_0 = 0x1b,
		PowMinCos3_5 = 0x1c,
		PowMax0_5 = 0x1d,
		PowMax1_0 = 0x1e,
		PowMax1_5 = 0x1f,
		PowMax2_0 = 0x20,
		PowMax2_5 = 0x21,
		PowMax3_0 = 0x22,
		PowMax3_5 = 0x23,
	};
}

namespace ELevelExperienceRampType
{
	enum Type
	{
		Player = 0x0,
		DinoEasy = 0x1,
		DinoMedium = 0x2,
		DinoHard = 0x3,
		MAX = 0x4,
	};
}

namespace EPendingJobState
{
	enum State
	{
		Pending = 0x0,
		Started = 0x1,
		Streaming = 0x2,
		Cancelled = 0x3,
	};
}

namespace EPrimalConsumableType
{
	enum Type
	{
		Food = 0x0,
		Water = 0x1,
		Medicine = 0x2,
		Other = 0x3,
		MAX = 0x4,
	};
}

namespace EPrimalCharacterStatusState
{
	enum Type
	{
		Dead = 0x0,
		Winded = 0x1,
		Starvation = 0x2,
		Dehydration = 0x3,
		Suffocation = 0x4,
		Encumbered = 0x5,
		Hypothermia = 0x6,
		Hyperthermia = 0x7,
		Injured = 0x8,
		KnockedOut = 0x9,
		Sleeping = 0xa,
		Cold = 0xb,
		Hot = 0xc,
		Crafting = 0xd,
		MAX = 0xe,
	};
}

namespace EInventoryDataListType
{
	enum Type
	{
		LocalEquipment = 0x1,
		LocalQuickSlots = 0x4,
		LocalItems = 0x8,
		LocalCraftables = 0x10,
		RemoteItems = 0x100,
		RemoteCraftables = 0x200,
		RemoteEquipment = 0x400,
		ArkInventory = 0x10000,
		Droppable = 0x20000,
		DroppableMinusEquipped = 0x40000,
		Colors = 0x80000,
		Brushes = 0x100000,
		Dyes = 0x200000,
		Ingredients = 0x400000,
		Mask_Local = 0xff,
		Mask_Remote = 0xff00,
		Mask_LocalInventory = 0x18,
		Mask_RemoteInventory = 0x300,
		Mask_LocalDataList = 0x19,
		Mask_RemoteDataList = 0x700,
		Mask_Inventories = 0x10318,
		Mask_Items = 0x108,
		Mask_Craftables = 0x210,
		Mask_Equipment = 0x401,
	};
}

namespace EUserInterfaceActionType
{
	enum Type
	{
		Button = 0x0,
		ToggleButton = 0x1,
		RadioButton = 0x2,
		Check = 0x3,
	};
}

namespace EFriendsLists
{
	enum Type
	{
		Default = 0x0,
		RecentPlayers = 0x1,
		OnlinePlayers = 0x2,
		InGamePlayers = 0x3,
	};
}

namespace EBoidType
{
	enum Type
	{
		Follower = 0x0,
		Leader = 0x1,
		FreeAgent = 0x2,
	};
}

namespace EStretch
{
	enum Type
	{
		None = 0x0,
		Fill = 0x1,
		ScaleToFit = 0x2,
		ScaleToFill = 0x3,
	};
}

enum class TextEntryInstigator
{
	RENAME_TRIBE = 0x0,
	RENAME_GROUP_RANK = 0x1,
	RENAME_ALLIANCE = 0x2,
	NEW_ALLIANCE = 0x3,
	NEW_GROUP_RANK = 0x4,
	NONE = 0x5,
};

enum class ESortState
{
	Empty_Arrow = 0x0,
	Up_Arrow = 0x1,
	Down_Arrow = 0x2,
};

namespace EShooterCrosshairDirection
{
	enum Type
	{
		Left = 0x0,
		Right = 0x1,
		Top = 0x2,
		Bottom = 0x3,
		Center = 0x4,
	};
}

namespace EShooterPhysMaterialType
{
	enum Type
	{
		Unknown = 0x0,
		Concrete = 0x1,
		Dirt = 0x2,
		Water = 0x3,
		Metal = 0x4,
		Wood = 0x5,
		Grass = 0x6,
		Glass = 0x7,
		Flesh = 0x8,
		Leaves = 0x9,
		Rock = 0xa,
		Sand = 0xb,
		Snow = 0xc,
		Corruption = 0xd,
		Lava = 0xe,
		Acid = 0xf,
		MAX = 0x10,
	};
}

namespace EExtensionHook
{
	enum Position
	{
		Before = 0x0,
		After = 0x1,
		First = 0x2,
	};
}

namespace EMissionDispatcherTriggerMode
{
	enum Type
	{
		AutoStartMission = 0x0,
		Ignore = 0x1,
		ActivateViaMultiUse = 0x2,
	};
}

namespace EWeaponState
{
	enum Type
	{
		Idle = 0x0,
		Firing = 0x1,
		Reloading = 0x2,
		Equipping = 0x3,
		UnEquipping = 0x4,
	};
}

namespace ETabSpawnerMenuType
{
	enum Type
	{
		Display = 0x0,
		Hide = 0x1,
	};
}

namespace EShooterDialogType
{
	enum Type
	{
		None = 0x0,
		Generic = 0x1,
		ControllerDisconnected = 0x2,
	};
}

namespace EBTNodeResult
{
	enum Type
	{
		Succeeded = 0x0,
		Failed = 0x1,
		Aborted = 0x2,
		InProgress = 0x3,
	};
}

enum class ModItemStatus
{
	IS_None = 0x0,
	IS_Ready = 0x1,
	IS_RetrieveingInfo = 0x2,
	IS_Subscribing = 0x3,
	IS_Waiting = 0x4,
	IS_Installing = 0x5,
	IS_Copying = 0x6,
	IS_Failed = 0x7,
};

namespace ESPMessageType
{
	enum Type
	{
		Default = 0x0,
		Error = 0x1,
		Warning = 0x2,
		Helpful = 0x3,
	};
}

namespace EBTExecutionMode
{
	enum Type
	{
		SingleRun = 0x0,
		Looped = 0x1,
	};
}

namespace EBTFlowAbortMode
{
	enum Type
	{
		None = 0x0,
		LowerPriority = 0x1,
		Self = 0x2,
		Both = 0x3,
	};
}

namespace EBTTaskStatus
{
	enum Type
	{
		Active = 0x0,
		Aborting = 0x1,
		Inactive = 0x2,
	};
}

namespace EBTNodeUpdateMode
{
	enum Type
	{
		Add = 0x0,
		AddForLowerPri = 0x1,
		Remove = 0x2,
	};
}

namespace EOnJoinSessionCompleteResult
{
	enum Type
	{
		Success = 0x0,
		RoomIsFull = 0x1,
		RoomDoesNotExist = 0x2,
		CouldNotRetrieveAddress = 0x3,
		AlreadyInSession = 0x4,
		UnknownError = 0x5,
	};
}

enum class EKeyboardType
{
	Keyboard_Default = 0x0,
	Keyboard_Number = 0x1,
	Keyboard_Web = 0x2,
	Keyboard_Email = 0x3,
	Keyboard_Password = 0x4,
};

namespace EMassTeleportState
{
	enum Type
	{
		INITIATED = 0x0,
		TRIGGERED_SUCCESS = 0x1,
		TRIGGERED_FAILED = 0x2,
		COMPLETED = 0x3,
		CANCELLED = 0x4,
	};
}

enum class ELobbyType
{
	k_ELobbyTypePrivate = 0x0,
	k_ELobbyTypeFriendsOnly = 0x1,
	k_ELobbyTypePublic = 0x2,
	k_ELobbyTypeInvisible = 0x3,
};

namespace EClimbingType
{
	enum Type
	{
		None = 0x0,
		ClimbLook = 0x1,
		ClimbInput = 0x2,
		Slide = 0x3,
		MAX = 0x4,
	};
}

namespace ESlateVisibility
{
	enum Type
	{
		Visible = 0x0,
		Collapsed = 0x1,
		Hidden = 0x2,
		HitTestInvisible = 0x3,
		SelfHitTestInvisible = 0x4,
	};
}

namespace ETransitionBlendMode
{
	enum Type
	{
		TBM_Linear = 0x0,
		TBM_Cubic = 0x1,
	};
}

namespace ETransitionLogicType
{
	enum Type
	{
		TLT_StandardBlend = 0x0,
		TLT_Custom = 0x1,
	};
}

namespace ETabState
{
	enum Type
	{
		OpenedTab = 0x1,
		ClosedTab = 0x2,
	};
}

namespace ESlateCheckBoxState
{
	enum Type
	{
		Unchecked = 0x0,
		Checked = 0x1,
		Undetermined = 0x2,
	};
}

namespace EBTDescriptionVerbosity
{
	enum Type
	{
		Basic = 0x0,
		Detailed = 0x1,
	};
}

namespace EWorldBuffPropertyLocation
{
	enum Type
	{
		GameMode = 0x0,
		GameState = 0x1,
	};
}

namespace EMissionState
{
	enum Type
	{
		ServerSetup = 0x0,
		Activated = 0x1,
		Suspended = 0x2,
		Deactivated = 0x3,
	};
}

namespace SVirtualJoystick
{
	enum EVirtualJoystickState
	{
		State_Active = 0x0,
		State_CountingDownToInactive = 0x1,
		State_CountingDownToReset = 0x2,
		State_Inactive = 0x3,
		State_WaitForStart = 0x4,
		State_CountingDownToStart = 0x5,
	};
}

enum class EFriendRelationship
{
	k_EFriendRelationshipNone = 0x0,
	k_EFriendRelationshipBlocked = 0x1,
	k_EFriendRelationshipRequestRecipient = 0x2,
	k_EFriendRelationshipFriend = 0x3,
	k_EFriendRelationshipRequestInitiator = 0x4,
	k_EFriendRelationshipIgnored = 0x5,
	k_EFriendRelationshipIgnoredFriend = 0x6,
	k_EFriendRelationshipSuggested = 0x7,
	k_EFriendRelationshipMax = 0x8,
};

enum class EMediaPlayerStreamModes
{
	MASM_FromMemory = 0x0,
	MASM_FromUrl = 0x1,
	MASM_MAX = 0x2,
};

enum class AtlasVoiceChannelType
{
	Echo = 0x0,
	NonPositional = 0x1,
	Positional = 0x2,
};

namespace IOnlineIdentity
{
	enum EPrivilegeResults
	{
		NoFailures = 0x0,
		RequiredPatchAvailable = 0x1,
		RequiredSystemUpdate = 0x2,
		AgeRestrictionFailure = 0x4,
		AccountTypeFailure = 0x8,
		UserNotFound = 0x10,
		ChatRestriction = 0x20,
		UGCRestriction = 0x40,
		GenericFailure = 0x80,
	};
}

enum class EVoiceChatTransmitMode
{
	None = 0x0,
	All = 0x1,
	Channel = 0x2,
};

namespace SSplitter
{
	enum ESizeRule
	{
		SizeToContent = 0x0,
		FractionOfParent = 0x1,
	};
}

namespace EBasePassSort
{
	enum Type
	{
		Auto = 0x0,
		None = 0x1,
		SortStateBuckets = 0x2,
		SortPerMesh = 0x3,
		FirstForcedMode = 0x1,
		LastForcedMode = 0x3,
	};
}

enum class EPersonaState
{
	k_EPersonaStateOffline = 0x0,
	k_EPersonaStateOnline = 0x1,
	k_EPersonaStateBusy = 0x2,
	k_EPersonaStateAway = 0x3,
	k_EPersonaStateSnooze = 0x4,
	k_EPersonaStateLookingToTrade = 0x5,
	k_EPersonaStateLookingToPlay = 0x6,
	k_EPersonaStateMax = 0x7,
};

enum class ETextHitPoint
{
	WithinText = 0x0,
	LeftGutter = 0x1,
	RightGutter = 0x2,
};

enum class EVoiceMode
{
	Silent = 0x0,
	Talking = 0x1,
	Yelling = 0x2,
	Whispering = 0x3,
};

namespace SVolumeControl
{
	enum ESpeakerIcon
	{
		ES_Full = 0x0,
		ES_Mid = 0x1,
		ES_Low = 0x2,
		ES_Off = 0x3,
		ES_Muted = 0x4,
		ES_MAX = 0x5,
	};
}

enum class WICBitmapEncoderCacheOption
{
	WICBitmapEncoderCacheInMemory = 0x0,
	WICBitmapEncoderCacheTempFile = 0x1,
	WICBitmapEncoderNoCache = 0x2,
	WICBITMAPENCODERCACHEOPTION_FORCE_DWORD = 0x7fffffff,
};

enum class dtStraightPathFlags
{
	DT_STRAIGHTPATH_START = 0x1,
	DT_STRAIGHTPATH_END = 0x2,
	DT_STRAIGHTPATH_OFFMESH_CONNECTION = 0x4,
};

namespace SMenuAnchor
{
	enum EMethod
	{
		CreateNewWindow = 0x0,
		UseCurrentWindow = 0x1,
	};
}

enum class UNormalization2Mode
{
	UNORM2_COMPOSE = 0x0,
	UNORM2_DECOMPOSE = 0x1,
	UNORM2_FCD = 0x2,
	UNORM2_COMPOSE_CONTIGUOUS = 0x3,
};

namespace FAtmosphereShaderPrecomputeTextureParameters
{
	enum TexType
	{
		Transmittance = 0x0,
		Irradiance = 0x1,
		DeltaE = 0x2,
		Inscatter = 0x3,
		DeltaSR = 0x4,
		DeltaSM = 0x5,
		DeltaJ = 0x6,
		Type_MAX = 0x7,
	};
}

namespace SNotificationItem
{
	enum ECompletionState
	{
		CS_None = 0x0,
		CS_Pending = 0x1,
		CS_Success = 0x2,
		CS_Fail = 0x3,
	};
}

enum class EEntryCategory
{
	LearnedNotes = 0x0,
	TheIsland = 0x1,
	ScorchedEarth = 0x2,
	Aberration = 0x3,
	Extinction = 0x4,
	Genesis1 = 0x5,
	Genesis2 = 0x6,
	MAX_COUNT = 0x7,
};

enum class EMeshCameraFacingOptions
{
	XAxisFacing_NoUp = 0x0,
	XAxisFacing_ZUp = 0x1,
	XAxisFacing_NegativeZUp = 0x2,
	XAxisFacing_YUp = 0x3,
	XAxisFacing_NegativeYUp = 0x4,
	LockedAxis_ZAxisFacing = 0x5,
	LockedAxis_NegativeZAxisFacing = 0x6,
	LockedAxis_YAxisFacing = 0x7,
	LockedAxis_NegativeYAxisFacing = 0x8,
	VelocityAligned_ZAxisFacing = 0x9,
	VelocityAligned_NegativeZAxisFacing = 0xa,
	VelocityAligned_YAxisFacing = 0xb,
	VelocityAligned_NegativeYAxisFacing = 0xc,
	EMeshCameraFacingOptions_MAX = 0xd,
};

enum class EWorkshopFileType
{
	k_EWorkshopFileTypeFirst = 0x0,
};

namespace ITextInputMethodChangeNotifier
{
	enum ELayoutChangeType
	{
		Created = 0x0,
		Changed = 0x1,
		Destroyed = 0x2,
	};
}

enum class ECursorAction
{
	MoveCursor = 0x0,
	SelectText = 0x1,
};

enum class EDDSCaps
{
	DDSC_CubeMap = 0x200,
	DDSC_CubeMap_AllFaces = 0xfc00,
	DDSC_Volume = 0x200000,
};

enum class ECullObjectsForShadowCSFlags
{
	ECullObjectsForShadowCS_None = 0x0,
	ECullObjectsForShadowCS_UseHighCount = 0x1,
	ECullObjectsForShadowCS_AggressiveCulling = 0x2,
	ECullObjectsForShadowCS_UseLayerCulling = 0x4,
};

enum class ECursorMoveGranularity
{
	Character = 0x0,
	Word = 0x1,
};

namespace FPopupTransitionEffect
{
	enum ESlideDirection
	{
		None = 0x0,
		ComboButton = 0x1,
		TopMenu = 0x2,
		SubMenu = 0x3,
		TypeInPopup = 0x4,
		ContextMenu = 0x5,
	};
}

enum class ETextLocation
{
	BeginningOfDocument = 0x0,
	EndOfDocument = 0x1,
	BeginningOfLine = 0x2,
	EndOfLine = 0x3,
};

enum class UCalendarDateFields
{
	UCAL_ERA = 0x0,
	UCAL_YEAR = 0x1,
	UCAL_MONTH = 0x2,
	UCAL_WEEK_OF_YEAR = 0x3,
	UCAL_WEEK_OF_MONTH = 0x4,
	UCAL_DATE = 0x5,
	UCAL_DAY_OF_YEAR = 0x6,
	UCAL_DAY_OF_WEEK = 0x7,
	UCAL_DAY_OF_WEEK_IN_MONTH = 0x8,
	UCAL_AM_PM = 0x9,
	UCAL_HOUR = 0xa,
	UCAL_HOUR_OF_DAY = 0xb,
	UCAL_MINUTE = 0xc,
	UCAL_SECOND = 0xd,
	UCAL_MILLISECOND = 0xe,
	UCAL_ZONE_OFFSET = 0xf,
	UCAL_DST_OFFSET = 0x10,
	UCAL_YEAR_WOY = 0x11,
	UCAL_DOW_LOCAL = 0x12,
	UCAL_EXTENDED_YEAR = 0x13,
	UCAL_JULIAN_DAY = 0x14,
	UCAL_MILLISECONDS_IN_DAY = 0x15,
	UCAL_IS_LEAP_MONTH = 0x16,
	UCAL_FIELD_COUNT = 0x17,
	UCAL_DAY_OF_MONTH = 0x5,
};

enum class EGamepadTextInputLineMode
{
	k_EGamepadTextInputLineModeSingleLine = 0x0,
	k_EGamepadTextInputLineModeMultipleLines = 0x1,
};

namespace EDocumentationActorType
{
	enum Type
	{
		None = 0x0,
		UDNLink = 0x1,
		URLLink = 0x2,
		InvalidLink = 0x3,
	};
}

enum class EFilterCombineMethod
{
	EFCM_Weighted = 0x0,
	EFCM_MaxMagnitude = 0x1,
};

namespace SMultiLineEditableText
{
	enum ECursorAlignment
	{
		Left = 0x0,
		Right = 0x1,
	};
}

namespace FAIMessage
{
	enum EStatus
	{
		Failure = 0x0,
		Success = 0x1,
	};
}

enum class EWorldPositionIncludedOffsets
{
	WPT_Default = 0x0,
	WPT_ExcludeAllShaderOffsets = 0x1,
	WPT_CameraRelative = 0x2,
	WPT_CameraRelativeNoOffsets = 0x3,
	WPT_MAX = 0x4,
};

enum class CURLoption
{
	CURLOPT_FILE = 0x2711,
	CURLOPT_URL = 0x2712,
	CURLOPT_PORT = 0x3,
	CURLOPT_PROXY = 0x2714,
	CURLOPT_USERPWD = 0x2715,
	CURLOPT_PROXYUSERPWD = 0x2716,
	CURLOPT_RANGE = 0x2717,
	CURLOPT_INFILE = 0x2719,
	CURLOPT_ERRORBUFFER = 0x271a,
	CURLOPT_WRITEFUNCTION = 0x4e2b,
	CURLOPT_READFUNCTION = 0x4e2c,
	CURLOPT_TIMEOUT = 0xd,
	CURLOPT_INFILESIZE = 0xe,
	CURLOPT_POSTFIELDS = 0x271f,
	CURLOPT_REFERER = 0x2720,
	CURLOPT_FTPPORT = 0x2721,
	CURLOPT_USERAGENT = 0x2722,
	CURLOPT_LOW_SPEED_LIMIT = 0x13,
	CURLOPT_LOW_SPEED_TIME = 0x14,
	CURLOPT_RESUME_FROM = 0x15,
	CURLOPT_COOKIE = 0x2726,
	CURLOPT_HTTPHEADER = 0x2727,
	CURLOPT_HTTPPOST = 0x2728,
	CURLOPT_SSLCERT = 0x2729,
	CURLOPT_KEYPASSWD = 0x272a,
	CURLOPT_CRLF = 0x1b,
	CURLOPT_QUOTE = 0x272c,
	CURLOPT_WRITEHEADER = 0x272d,
	CURLOPT_COOKIEFILE = 0x272f,
	CURLOPT_SSLVERSION = 0x20,
	CURLOPT_TIMECONDITION = 0x21,
	CURLOPT_TIMEVALUE = 0x22,
	CURLOPT_CUSTOMREQUEST = 0x2734,
	CURLOPT_STDERR = 0x2735,
	CURLOPT_POSTQUOTE = 0x2737,
	CURLOPT_WRITEINFO = 0x2738,
	CURLOPT_VERBOSE = 0x29,
	CURLOPT_HEADER = 0x2a,
	CURLOPT_NOPROGRESS = 0x2b,
	CURLOPT_NOBODY = 0x2c,
	CURLOPT_FAILONERROR = 0x2d,
	CURLOPT_UPLOAD = 0x2e,
	CURLOPT_POST = 0x2f,
	CURLOPT_DIRLISTONLY = 0x30,
	CURLOPT_APPEND = 0x32,
	CURLOPT_NETRC = 0x33,
	CURLOPT_FOLLOWLOCATION = 0x34,
	CURLOPT_TRANSFERTEXT = 0x35,
	CURLOPT_PUT = 0x36,
	CURLOPT_PROGRESSFUNCTION = 0x4e58,
	CURLOPT_PROGRESSDATA = 0x2749,
	CURLOPT_AUTOREFERER = 0x3a,
	CURLOPT_PROXYPORT = 0x3b,
	CURLOPT_POSTFIELDSIZE = 0x3c,
	CURLOPT_HTTPPROXYTUNNEL = 0x3d,
	CURLOPT_INTERFACE = 0x274e,
	CURLOPT_KRBLEVEL = 0x274f,
	CURLOPT_SSL_VERIFYPEER = 0x40,
	CURLOPT_CAINFO = 0x2751,
	CURLOPT_MAXREDIRS = 0x44,
	CURLOPT_FILETIME = 0x45,
	CURLOPT_TELNETOPTIONS = 0x2756,
	CURLOPT_MAXCONNECTS = 0x47,
	CURLOPT_CLOSEPOLICY = 0x48,
	CURLOPT_FRESH_CONNECT = 0x4a,
	CURLOPT_FORBID_REUSE = 0x4b,
	CURLOPT_RANDOM_FILE = 0x275c,
	CURLOPT_EGDSOCKET = 0x275d,
	CURLOPT_CONNECTTIMEOUT = 0x4e,
	CURLOPT_HEADERFUNCTION = 0x4e6f,
	CURLOPT_HTTPGET = 0x50,
	CURLOPT_SSL_VERIFYHOST = 0x51,
	CURLOPT_COOKIEJAR = 0x2762,
	CURLOPT_SSL_CIPHER_LIST = 0x2763,
	CURLOPT_HTTP_VERSION = 0x54,
	CURLOPT_FTP_USE_EPSV = 0x55,
	CURLOPT_SSLCERTTYPE = 0x2766,
	CURLOPT_SSLKEY = 0x2767,
	CURLOPT_SSLKEYTYPE = 0x2768,
	CURLOPT_SSLENGINE = 0x2769,
	CURLOPT_SSLENGINE_DEFAULT = 0x5a,
	CURLOPT_DNS_USE_GLOBAL_CACHE = 0x5b,
	CURLOPT_DNS_CACHE_TIMEOUT = 0x5c,
	CURLOPT_PREQUOTE = 0x276d,
	CURLOPT_DEBUGFUNCTION = 0x4e7e,
	CURLOPT_DEBUGDATA = 0x276f,
	CURLOPT_COOKIESESSION = 0x60,
	CURLOPT_CAPATH = 0x2771,
	CURLOPT_BUFFERSIZE = 0x62,
	CURLOPT_NOSIGNAL = 0x63,
	CURLOPT_SHARE = 0x2774,
	CURLOPT_PROXYTYPE = 0x65,
	CURLOPT_ACCEPT_ENCODING = 0x2776,
	CURLOPT_PRIVATE = 0x2777,
	CURLOPT_HTTP200ALIASES = 0x2778,
	CURLOPT_UNRESTRICTED_AUTH = 0x69,
	CURLOPT_FTP_USE_EPRT = 0x6a,
	CURLOPT_HTTPAUTH = 0x6b,
	CURLOPT_SSL_CTX_FUNCTION = 0x4e8c,
	CURLOPT_SSL_CTX_DATA = 0x277d,
	CURLOPT_FTP_CREATE_MISSING_DIRS = 0x6e,
	CURLOPT_PROXYAUTH = 0x6f,
	CURLOPT_FTP_RESPONSE_TIMEOUT = 0x70,
	CURLOPT_IPRESOLVE = 0x71,
	CURLOPT_MAXFILESIZE = 0x72,
	CURLOPT_INFILESIZE_LARGE = 0x75a3,
	CURLOPT_RESUME_FROM_LARGE = 0x75a4,
	CURLOPT_MAXFILESIZE_LARGE = 0x75a5,
	CURLOPT_NETRC_FILE = 0x2786,
	CURLOPT_USE_SSL = 0x77,
	CURLOPT_POSTFIELDSIZE_LARGE = 0x75a8,
	CURLOPT_TCP_NODELAY = 0x79,
	CURLOPT_FTPSSLAUTH = 0x81,
	CURLOPT_IOCTLFUNCTION = 0x4ea2,
	CURLOPT_IOCTLDATA = 0x2793,
	CURLOPT_FTP_ACCOUNT = 0x2796,
	CURLOPT_COOKIELIST = 0x2797,
	CURLOPT_IGNORE_CONTENT_LENGTH = 0x88,
	CURLOPT_FTP_SKIP_PASV_IP = 0x89,
	CURLOPT_FTP_FILEMETHOD = 0x8a,
	CURLOPT_LOCALPORT = 0x8b,
	CURLOPT_LOCALPORTRANGE = 0x8c,
	CURLOPT_CONNECT_ONLY = 0x8d,
	CURLOPT_CONV_FROM_NETWORK_FUNCTION = 0x4eae,
	CURLOPT_CONV_TO_NETWORK_FUNCTION = 0x4eaf,
	CURLOPT_CONV_FROM_UTF8_FUNCTION = 0x4eb0,
	CURLOPT_MAX_SEND_SPEED_LARGE = 0x75c1,
	CURLOPT_MAX_RECV_SPEED_LARGE = 0x75c2,
	CURLOPT_FTP_ALTERNATIVE_TO_USER = 0x27a3,
	CURLOPT_SOCKOPTFUNCTION = 0x4eb4,
	CURLOPT_SOCKOPTDATA = 0x27a5,
	CURLOPT_SSL_SESSIONID_CACHE = 0x96,
	CURLOPT_SSH_AUTH_TYPES = 0x97,
	CURLOPT_SSH_PUBLIC_KEYFILE = 0x27a8,
	CURLOPT_SSH_PRIVATE_KEYFILE = 0x27a9,
	CURLOPT_FTP_SSL_CCC = 0x9a,
	CURLOPT_TIMEOUT_MS = 0x9b,
	CURLOPT_CONNECTTIMEOUT_MS = 0x9c,
	CURLOPT_HTTP_TRANSFER_DECODING = 0x9d,
	CURLOPT_HTTP_CONTENT_DECODING = 0x9e,
	CURLOPT_NEW_FILE_PERMS = 0x9f,
	CURLOPT_NEW_DIRECTORY_PERMS = 0xa0,
	CURLOPT_POSTREDIR = 0xa1,
	CURLOPT_SSH_HOST_PUBLIC_KEY_MD5 = 0x27b2,
	CURLOPT_OPENSOCKETFUNCTION = 0x4ec3,
	CURLOPT_OPENSOCKETDATA = 0x27b4,
	CURLOPT_COPYPOSTFIELDS = 0x27b5,
	CURLOPT_PROXY_TRANSFER_MODE = 0xa6,
	CURLOPT_SEEKFUNCTION = 0x4ec7,
	CURLOPT_SEEKDATA = 0x27b8,
	CURLOPT_CRLFILE = 0x27b9,
	CURLOPT_ISSUERCERT = 0x27ba,
	CURLOPT_ADDRESS_SCOPE = 0xab,
	CURLOPT_CERTINFO = 0xac,
	CURLOPT_USERNAME = 0x27bd,
	CURLOPT_PASSWORD = 0x27be,
	CURLOPT_PROXYUSERNAME = 0x27bf,
	CURLOPT_PROXYPASSWORD = 0x27c0,
	CURLOPT_NOPROXY = 0x27c1,
	CURLOPT_TFTP_BLKSIZE = 0xb2,
	CURLOPT_SOCKS5_GSSAPI_SERVICE = 0x27c3,
	CURLOPT_SOCKS5_GSSAPI_NEC = 0xb4,
	CURLOPT_PROTOCOLS = 0xb5,
	CURLOPT_REDIR_PROTOCOLS = 0xb6,
	CURLOPT_SSH_KNOWNHOSTS = 0x27c7,
	CURLOPT_SSH_KEYFUNCTION = 0x4ed8,
	CURLOPT_SSH_KEYDATA = 0x27c9,
	CURLOPT_MAIL_FROM = 0x27ca,
	CURLOPT_MAIL_RCPT = 0x27cb,
	CURLOPT_FTP_USE_PRET = 0xbc,
	CURLOPT_RTSP_REQUEST = 0xbd,
	CURLOPT_RTSP_SESSION_ID = 0x27ce,
	CURLOPT_RTSP_STREAM_URI = 0x27cf,
	CURLOPT_RTSP_TRANSPORT = 0x27d0,
	CURLOPT_RTSP_CLIENT_CSEQ = 0xc1,
	CURLOPT_RTSP_SERVER_CSEQ = 0xc2,
	CURLOPT_INTERLEAVEDATA = 0x27d3,
	CURLOPT_INTERLEAVEFUNCTION = 0x4ee4,
	CURLOPT_WILDCARDMATCH = 0xc5,
	CURLOPT_CHUNK_BGN_FUNCTION = 0x4ee6,
	CURLOPT_CHUNK_END_FUNCTION = 0x4ee7,
	CURLOPT_FNMATCH_FUNCTION = 0x4ee8,
	CURLOPT_CHUNK_DATA = 0x27d9,
	CURLOPT_FNMATCH_DATA = 0x27da,
	CURLOPT_RESOLVE = 0x27db,
	CURLOPT_TLSAUTH_USERNAME = 0x27dc,
	CURLOPT_TLSAUTH_PASSWORD = 0x27dd,
	CURLOPT_TLSAUTH_TYPE = 0x27de,
	CURLOPT_TRANSFER_ENCODING = 0xcf,
	CURLOPT_CLOSESOCKETFUNCTION = 0x4ef0,
	CURLOPT_CLOSESOCKETDATA = 0x27e1,
	CURLOPT_GSSAPI_DELEGATION = 0xd2,
	CURLOPT_DNS_SERVERS = 0x27e3,
	CURLOPT_ACCEPTTIMEOUT_MS = 0xd4,
	CURLOPT_TCP_KEEPALIVE = 0xd5,
	CURLOPT_TCP_KEEPIDLE = 0xd6,
	CURLOPT_TCP_KEEPINTVL = 0xd7,
	CURLOPT_SSL_OPTIONS = 0xd8,
	CURLOPT_MAIL_AUTH = 0x27e9,
	CURLOPT_SASL_IR = 0xda,
	CURLOPT_XFERINFOFUNCTION = 0x4efb,
	CURLOPT_XOAUTH2_BEARER = 0x27ec,
	CURLOPT_DNS_INTERFACE = 0x27ed,
	CURLOPT_DNS_LOCAL_IP4 = 0x27ee,
	CURLOPT_DNS_LOCAL_IP6 = 0x27ef,
	CURLOPT_LOGIN_OPTIONS = 0x27f0,
	CURLOPT_LASTENTRY = 0x27f1,
};

namespace EParticleCollisionResponse
{
	enum Type
	{
		Bounce = 0x0,
		Stop = 0x1,
		Kill = 0x2,
	};
}

enum class EVoiceResult
{
	k_EVoiceResultOK = 0x0,
	k_EVoiceResultNotInitialized = 0x1,
	k_EVoiceResultNotRecording = 0x2,
	k_EVoiceResultNoData = 0x3,
	k_EVoiceResultBufferTooSmall = 0x4,
	k_EVoiceResultDataCorrupted = 0x5,
	k_EVoiceResultRestricted = 0x6,
	k_EVoiceResultUnsupportedCodec = 0x7,
	k_EVoiceResultReceiverOutOfDate = 0x8,
	k_EVoiceResultReceiverDidNotAnswer = 0x9,
};

enum class EPassOutputId
{
	ePId_Output0 = 0x0,
	ePId_Output1 = 0x1,
	ePId_Output2 = 0x2,
	ePId_Output3 = 0x3,
	ePId_Output4 = 0x4,
	ePId_Output5 = 0x5,
	ePId_Output6 = 0x6,
	ePId_Output7 = 0x7,
};

enum class EMatchMakingServerResponse
{
	eServerResponded = 0x0,
	eServerFailedToRespond = 0x1,
	eNoServersListedOnMasterServer = 0x2,
};

enum class BattleyePlayerStatus
{
	BE_NewPlayerPendingAdd = 0x0,
	BE_Connected = 0x1,
	BE_PendingRemoval = 0x2,
};

enum class EUGCMatchingUGCType
{
	k_EUGCMatchingUGCType_Items = 0x0,
	k_EUGCMatchingUGCType_Items_Mtx = 0x1,
	k_EUGCMatchingUGCType_Items_ReadyToUse = 0x2,
	k_EUGCMatchingUGCType_Collections = 0x3,
	k_EUGCMatchingUGCType_Artwork = 0x4,
	k_EUGCMatchingUGCType_Videos = 0x5,
	k_EUGCMatchingUGCType_Screenshots = 0x6,
	k_EUGCMatchingUGCType_AllGuides = 0x7,
	k_EUGCMatchingUGCType_WebGuides = 0x8,
	k_EUGCMatchingUGCType_IntegratedGuides = 0x9,
	k_EUGCMatchingUGCType_UsableInGame = 0xa,
	k_EUGCMatchingUGCType_ControllerBindings = 0xb,
};

enum class ELocationEmitterSelectionMethod
{
	ELESM_Random = 0x0,
	ELESM_Sequential = 0x1,
	ELESM_MAX = 0x2,
};

enum class ChannelOutputs
{
	CHANNELOUT_FRONTLEFT = 0x0,
	CHANNELOUT_FRONTRIGHT = 0x1,
	CHANNELOUT_FRONTCENTER = 0x2,
	CHANNELOUT_LOWFREQUENCY = 0x3,
	CHANNELOUT_LEFTSURROUND = 0x4,
	CHANNELOUT_RIGHTSURROUND = 0x5,
	CHANNELOUT_REVERB = 0x6,
	CHANNELOUT_RADIO = 0x7,
	CHANNELOUT_COUNT = 0x8,
};

enum class ERemoteStoragePublishedFileVisibility
{
	k_ERemoteStoragePublishedFileVisibilityPublic = 0x0,
	k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 0x1,
	k_ERemoteStoragePublishedFileVisibilityPrivate = 0x2,
};

namespace SDockingNode
{
	enum ELayoutModification
	{
		TabRemoval_DraggedOut = 0x0,
		TabRemoval_Closed = 0x1,
		TabRemoval_None = 0x2,
	};
}

enum class EVoiceChatResult
{
	Success = 0x0,
	InvalidState = 0x1,
	NotInitialized = 0x2,
	NotConnected = 0x3,
	NotLoggedIn = 0x4,
	NotPermitted = 0x5,
	Throttled = 0x6,
	InvalidArgument = 0x7,
	CredentialsInvalid = 0x8,
	CredentialsExpired = 0x9,
	ClientTimeout = 0xa,
	ServerTimeout = 0xb,
	DnsFailure = 0xc,
	ConnectionFailure = 0xd,
	ImplementationError = 0xe,
};

enum class UColAttributeValue
{
	UCOL_DEFAULT = 0xff,
	UCOL_PRIMARY = 0x0,
	UCOL_SECONDARY = 0x1,
	UCOL_TERTIARY = 0x2,
	UCOL_DEFAULT_STRENGTH = 0x2,
	UCOL_CE_STRENGTH_LIMIT = 0x3,
	UCOL_QUATERNARY = 0x3,
	UCOL_IDENTICAL = 0xf,
	UCOL_STRENGTH_LIMIT = 0x10,
	UCOL_OFF = 0x10,
	UCOL_ON = 0x11,
	UCOL_SHIFTED = 0x14,
	UCOL_NON_IGNORABLE = 0x15,
	UCOL_LOWER_FIRST = 0x18,
	UCOL_UPPER_FIRST = 0x19,
	UCOL_ATTRIBUTE_VALUE_COUNT = 0x1a,
};

enum class EVolumeUpdateType
{
	VUT_MeshDistanceFields = 0x1,
	VUT_Heightfields = 0x2,
	VUT_All = 0x3,
};

namespace EMaterialSceneAttributeInputMode
{
	enum Type
	{
		Coordinates = 0x0,
		OffsetFraction = 0x1,
	};
}

enum class WICBitmapLockFlags
{
	WICBitmapLockRead = 0x1,
	WICBitmapLockWrite = 0x2,
	WICBITMAPLOCKFLAGS_FORCE_DWORD = 0x7fffffff,
};

namespace CGameID
{
	enum EGameIDType
	{
		k_EGameIDTypeApp = 0x0,
		k_EGameIDTypeGameMod = 0x1,
		k_EGameIDTypeShortcut = 0x2,
		k_EGameIDTypeP2P = 0x3,
	};
}

namespace FSpeedTreeWind
{
	enum Constants
	{
		NUM_WIND_POINTS_IN_CURVE = 0xa,
		NUM_BRANCH_LEVELS = 0x2,
		NUM_LEAF_GROUPS = 0x2,
	};
}

namespace ULandscapeHeightfieldCollisionComponent
{
	enum ECollisionQuadFlags
	{
		QF_PhysicalMaterialMask = 0x3f,
		QF_EdgeTurned = 0x40,
		QF_NoCollision = 0x80,
	};
}

enum class ESocketType
{
	SOCKTYPE_Unknown = 0x0,
	SOCKTYPE_Datagram = 0x1,
	SOCKTYPE_Streaming = 0x2,
};

enum class ESocketErrors
{
	SE_NO_ERROR = 0x0,
	SE_EINTR = 0x1,
	SE_EBADF = 0x2,
	SE_EACCES = 0x3,
	SE_EFAULT = 0x4,
	SE_EINVAL = 0x5,
	SE_EMFILE = 0x6,
	SE_EWOULDBLOCK = 0x7,
	SE_EINPROGRESS = 0x8,
	SE_EALREADY = 0x9,
	SE_ENOTSOCK = 0xa,
	SE_EDESTADDRREQ = 0xb,
	SE_EMSGSIZE = 0xc,
	SE_EPROTOTYPE = 0xd,
	SE_ENOPROTOOPT = 0xe,
	SE_EPROTONOSUPPORT = 0xf,
	SE_ESOCKTNOSUPPORT = 0x10,
	SE_EOPNOTSUPP = 0x11,
	SE_EPFNOSUPPORT = 0x12,
	SE_EAFNOSUPPORT = 0x13,
	SE_EADDRINUSE = 0x14,
	SE_EADDRNOTAVAIL = 0x15,
	SE_ENETDOWN = 0x16,
	SE_ENETUNREACH = 0x17,
	SE_ENETRESET = 0x18,
	SE_ECONNABORTED = 0x19,
	SE_ECONNRESET = 0x1a,
	SE_ENOBUFS = 0x1b,
	SE_EISCONN = 0x1c,
	SE_ENOTCONN = 0x1d,
	SE_ESHUTDOWN = 0x1e,
	SE_ETOOMANYREFS = 0x1f,
	SE_ETIMEDOUT = 0x20,
	SE_ECONNREFUSED = 0x21,
	SE_ELOOP = 0x22,
	SE_ENAMETOOLONG = 0x23,
	SE_EHOSTDOWN = 0x24,
	SE_EHOSTUNREACH = 0x25,
	SE_ENOTEMPTY = 0x26,
	SE_EPROCLIM = 0x27,
	SE_EUSERS = 0x28,
	SE_EDQUOT = 0x29,
	SE_ESTALE = 0x2a,
	SE_EREMOTE = 0x2b,
	SE_EDISCON = 0x2c,
	SE_SYSNOTREADY = 0x2d,
	SE_VERNOTSUPPORTED = 0x2e,
	SE_NOTINITIALISED = 0x2f,
	SE_HOST_NOT_FOUND = 0x30,
	SE_TRY_AGAIN = 0x31,
	SE_NO_RECOVERY = 0x32,
	SE_NO_DATA = 0x33,
	SE_UDP_ERR_PORT_UNREACH = 0x34,
	SE_GET_LAST_ERROR_CODE = 0x35,
};

namespace ESocketReceiveFlags
{
	enum Type
	{
		None = 0x0,
		Peek = 0x2,
		WaitAll = 0x100,
	};
}

enum class ESocketConnectionState
{
	SCS_NotConnected = 0x0,
	SCS_Connected = 0x1,
	SCS_ConnectionError = 0x2,
};

enum class ELobbyComparison
{
	k_ELobbyComparisonEqualToOrLessThan = 0xfe,
	k_ELobbyComparisonLessThan = 0xff,
	k_ELobbyComparisonEqual = 0x0,
	k_ELobbyComparisonGreaterThan = 0x1,
	k_ELobbyComparisonEqualToOrGreaterThan = 0x2,
	k_ELobbyComparisonNotEqual = 0x3,
};

namespace EMoveComponentAction
{
	enum Type
	{
		Move = 0x0,
		Stop = 0x1,
		Return = 0x2,
	};
}

namespace ENetModeBP
{
	enum Type
	{
		Standalone = 0x0,
		DedicatedServer = 0x1,
		ListenServer = 0x2,
		Client = 0x3,
	};
}

namespace EPawnActionFailHandling
{
	enum Type
	{
		RequireSuccess = 0x0,
		IgnoreFailure = 0x1,
	};
}

namespace EBeaconState
{
	enum Type
	{
		AllowRequests = 0x0,
		DenyRequests = 0x1,
	};
}

namespace EInAppPurchaseState
{
	enum Type
	{
		Success = 0x0,
		Failed = 0x1,
		Cancelled = 0x2,
		Invalid = 0x3,
		NotAllowed = 0x4,
		Unknown = 0x5,
	};
}

namespace EGraphAxisStyle
{
	enum Type
	{
		Lines = 0x0,
		Notches = 0x1,
		Grid = 0x2,
	};
}

enum class EMediaStates
{
	Closed = 0x0,
	Error = 0x1,
	Paused = 0x2,
	Playing = 0x3,
	Stopped = 0x4,
};

namespace ETestExternalUIInterfaceState
{
	enum Type
	{
		Begin = 0x0,
		ShowLoginUI = 0x1,
		ShowFriendsUI = 0x2,
		ShowInviteUI = 0x3,
		ShowAchievementsUI = 0x4,
		ShowWebURL = 0x5,
		ShowProfileUI = 0x6,
		End = 0x7,
	};
}

enum class EClampMode
{
	CMODE_Clamp = 0x0,
	CMODE_ClampMin = 0x1,
	CMODE_ClampMax = 0x2,
};

enum class ETrail2SourceMethod
{
	PET2SRCM_Default = 0x0,
	PET2SRCM_Particle = 0x1,
	PET2SRCM_Actor = 0x2,
	PET2SRCM_MAX = 0x3,
};

namespace ERawImageFormat
{
	enum Type
	{
		G8 = 0x0,
		BGRA8 = 0x1,
		BGRE8 = 0x2,
		RGBA16 = 0x3,
		RGBA16F = 0x4,
		RGBA32F = 0x5,
	};
}

namespace EChunkProgressReportingType
{
	enum Type
	{
		ETA = 0x0,
		PercentageComplete = 0x1,
	};
}

enum class CURLcode
{
	CURLE_OK = 0x0,
	CURLE_UNSUPPORTED_PROTOCOL = 0x1,
	CURLE_FAILED_INIT = 0x2,
	CURLE_URL_MALFORMAT = 0x3,
	CURLE_NOT_BUILT_IN = 0x4,
	CURLE_COULDNT_RESOLVE_PROXY = 0x5,
	CURLE_COULDNT_RESOLVE_HOST = 0x6,
	CURLE_COULDNT_CONNECT = 0x7,
	CURLE_FTP_WEIRD_SERVER_REPLY = 0x8,
	CURLE_REMOTE_ACCESS_DENIED = 0x9,
	CURLE_FTP_ACCEPT_FAILED = 0xa,
	CURLE_FTP_WEIRD_PASS_REPLY = 0xb,
	CURLE_FTP_ACCEPT_TIMEOUT = 0xc,
	CURLE_FTP_WEIRD_PASV_REPLY = 0xd,
	CURLE_FTP_WEIRD_227_FORMAT = 0xe,
	CURLE_FTP_CANT_GET_HOST = 0xf,
	CURLE_OBSOLETE16 = 0x10,
	CURLE_FTP_COULDNT_SET_TYPE = 0x11,
	CURLE_PARTIAL_FILE = 0x12,
	CURLE_FTP_COULDNT_RETR_FILE = 0x13,
	CURLE_OBSOLETE20 = 0x14,
	CURLE_QUOTE_ERROR = 0x15,
	CURLE_HTTP_RETURNED_ERROR = 0x16,
	CURLE_WRITE_ERROR = 0x17,
	CURLE_OBSOLETE24 = 0x18,
	CURLE_UPLOAD_FAILED = 0x19,
	CURLE_READ_ERROR = 0x1a,
	CURLE_OUT_OF_MEMORY = 0x1b,
	CURLE_OPERATION_TIMEDOUT = 0x1c,
	CURLE_OBSOLETE29 = 0x1d,
	CURLE_FTP_PORT_FAILED = 0x1e,
	CURLE_FTP_COULDNT_USE_REST = 0x1f,
	CURLE_OBSOLETE32 = 0x20,
	CURLE_RANGE_ERROR = 0x21,
	CURLE_HTTP_POST_ERROR = 0x22,
	CURLE_SSL_CONNECT_ERROR = 0x23,
	CURLE_BAD_DOWNLOAD_RESUME = 0x24,
	CURLE_FILE_COULDNT_READ_FILE = 0x25,
	CURLE_LDAP_CANNOT_BIND = 0x26,
	CURLE_LDAP_SEARCH_FAILED = 0x27,
	CURLE_OBSOLETE40 = 0x28,
	CURLE_FUNCTION_NOT_FOUND = 0x29,
	CURLE_ABORTED_BY_CALLBACK = 0x2a,
	CURLE_BAD_FUNCTION_ARGUMENT = 0x2b,
	CURLE_OBSOLETE44 = 0x2c,
	CURLE_INTERFACE_FAILED = 0x2d,
	CURLE_OBSOLETE46 = 0x2e,
	CURLE_TOO_MANY_REDIRECTS = 0x2f,
	CURLE_UNKNOWN_OPTION = 0x30,
	CURLE_TELNET_OPTION_SYNTAX = 0x31,
	CURLE_OBSOLETE50 = 0x32,
	CURLE_PEER_FAILED_VERIFICATION = 0x33,
	CURLE_GOT_NOTHING = 0x34,
	CURLE_SSL_ENGINE_NOTFOUND = 0x35,
	CURLE_SSL_ENGINE_SETFAILED = 0x36,
	CURLE_SEND_ERROR = 0x37,
	CURLE_RECV_ERROR = 0x38,
	CURLE_OBSOLETE57 = 0x39,
	CURLE_SSL_CERTPROBLEM = 0x3a,
	CURLE_SSL_CIPHER = 0x3b,
	CURLE_SSL_CACERT = 0x3c,
	CURLE_BAD_CONTENT_ENCODING = 0x3d,
	CURLE_LDAP_INVALID_URL = 0x3e,
	CURLE_FILESIZE_EXCEEDED = 0x3f,
	CURLE_USE_SSL_FAILED = 0x40,
	CURLE_SEND_FAIL_REWIND = 0x41,
	CURLE_SSL_ENGINE_INITFAILED = 0x42,
	CURLE_LOGIN_DENIED = 0x43,
	CURLE_TFTP_NOTFOUND = 0x44,
	CURLE_TFTP_PERM = 0x45,
	CURLE_REMOTE_DISK_FULL = 0x46,
	CURLE_TFTP_ILLEGAL = 0x47,
	CURLE_TFTP_UNKNOWNID = 0x48,
	CURLE_REMOTE_FILE_EXISTS = 0x49,
	CURLE_TFTP_NOSUCHUSER = 0x4a,
	CURLE_CONV_FAILED = 0x4b,
	CURLE_CONV_REQD = 0x4c,
	CURLE_SSL_CACERT_BADFILE = 0x4d,
	CURLE_REMOTE_FILE_NOT_FOUND = 0x4e,
	CURLE_SSH = 0x4f,
	CURLE_SSL_SHUTDOWN_FAILED = 0x50,
	CURLE_AGAIN = 0x51,
	CURLE_SSL_CRL_BADFILE = 0x52,
	CURLE_SSL_ISSUER_ERROR = 0x53,
	CURLE_FTP_PRET_FAILED = 0x54,
	CURLE_RTSP_CSEQ_ERROR = 0x55,
	CURLE_RTSP_SESSION_ERROR = 0x56,
	CURLE_FTP_BAD_FILE_LIST = 0x57,
	CURLE_CHUNK_FAILED = 0x58,
	CURLE_NO_CONNECTION_AVAILABLE = 0x59,
	CURL_LAST = 0x5a,
};

enum class EUserHasLicenseForAppResult
{
	k_EUserHasLicenseResultHasLicense = 0x0,
	k_EUserHasLicenseResultDoesNotHaveLicense = 0x1,
	k_EUserHasLicenseResultNoAuth = 0x2,
};

namespace EQuitPreference
{
	enum Type
	{
		Quit = 0x0,
		Background = 0x1,
	};
}

enum class EUniverse
{
	k_EUniverseInvalid = 0x0,
	k_EUniversePublic = 0x1,
	k_EUniverseBeta = 0x2,
	k_EUniverseInternal = 0x3,
	k_EUniverseDev = 0x4,
	k_EUniverseMax = 0x5,
};

enum class EAccountType
{
	k_EAccountTypeInvalid = 0x0,
	k_EAccountTypeIndividual = 0x1,
	k_EAccountTypeMultiseat = 0x2,
	k_EAccountTypeGameServer = 0x3,
	k_EAccountTypeAnonGameServer = 0x4,
	k_EAccountTypePending = 0x5,
	k_EAccountTypeContentServer = 0x6,
	k_EAccountTypeClan = 0x7,
	k_EAccountTypeChat = 0x8,
	k_EAccountTypeConsoleUser = 0x9,
	k_EAccountTypeAnonUser = 0xa,
	k_EAccountTypeMax = 0xb,
};

enum class EMarketingMessageFlags
{
	k_EMarketingMessageFlagsNone = 0x0,
	k_EMarketingMessageFlagsHighPriority = 0x1,
	k_EMarketingMessageFlagsPlatformWindows = 0x2,
	k_EMarketingMessageFlagsPlatformMac = 0x4,
	k_EMarketingMessageFlagsPlatformLinux = 0x8,
	k_EMarketingMessageFlagsPlatformRestrictions = 0xe,
};

namespace ISteamHTMLSurface
{
	enum EHTMLMouseButton
	{
		eHTMLMouseButton_Left = 0x0,
		eHTMLMouseButton_Right = 0x1,
		eHTMLMouseButton_Middle = 0x2,
	};
}

namespace ISteamHTMLSurface
{
	enum EMouseCursor
	{
		dc_user = 0x0,
		dc_none = 0x1,
		dc_arrow = 0x2,
		dc_ibeam = 0x3,
		dc_hourglass = 0x4,
		dc_waitarrow = 0x5,
		dc_crosshair = 0x6,
		dc_up = 0x7,
		dc_sizenw = 0x8,
		dc_sizese = 0x9,
		dc_sizene = 0xa,
		dc_sizesw = 0xb,
		dc_sizew = 0xc,
		dc_sizee = 0xd,
		dc_sizen = 0xe,
		dc_sizes = 0xf,
		dc_sizewe = 0x10,
		dc_sizens = 0x11,
		dc_sizeall = 0x12,
		dc_no = 0x13,
		dc_hand = 0x14,
		dc_blank = 0x15,
		dc_middle_pan = 0x16,
		dc_north_pan = 0x17,
		dc_north_east_pan = 0x18,
		dc_east_pan = 0x19,
		dc_south_east_pan = 0x1a,
		dc_south_pan = 0x1b,
		dc_south_west_pan = 0x1c,
		dc_west_pan = 0x1d,
		dc_north_west_pan = 0x1e,
		dc_alias = 0x1f,
		dc_cell = 0x20,
		dc_colresize = 0x21,
		dc_copycur = 0x22,
		dc_verticaltext = 0x23,
		dc_rowresize = 0x24,
		dc_zoomin = 0x25,
		dc_zoomout = 0x26,
		dc_help = 0x27,
		dc_custom = 0x28,
		dc_last = 0x29,
	};
}

enum class EGamepadTextInputMode
{
	k_EGamepadTextInputModeNormal = 0x0,
	k_EGamepadTextInputModePassword = 0x1,
};

enum class EFunctionInputType
{
	FunctionInput_Scalar = 0x0,
	FunctionInput_Vector2 = 0x1,
	FunctionInput_Vector3 = 0x2,
	FunctionInput_Vector4 = 0x3,
	FunctionInput_Texture2D = 0x4,
	FunctionInput_TextureCube = 0x5,
	FunctionInput_StaticBool = 0x6,
	FunctionInput_MaterialAttributes = 0x7,
	FunctionInput_MAX = 0x8,
};

namespace Imf
{
	enum LineOrder
	{
		INCREASING_Y = 0x0,
		DECREASING_Y = 0x1,
		RANDOM_Y = 0x2,
		NUM_LINEORDERS = 0x3,
	};
}

enum class WICBitmapAlphaChannelOption
{
	WICBitmapUseAlpha = 0x0,
	WICBitmapUsePremultipliedAlpha = 0x1,
	WICBitmapIgnoreAlpha = 0x2,
	WICBITMAPALPHACHANNELOPTIONS_FORCE_DWORD = 0x7fffffff,
};

enum class ERepParentFlags
{
	PARENT_IsLifetime = 0x1,
	PARENT_IsConditional = 0x2,
	PARENT_IsConfig = 0x4,
	PARENT_IsCustomDelta = 0x8,
};

enum class ELeaderboardSortMethod
{
	k_ELeaderboardSortMethodNone = 0x0,
	k_ELeaderboardSortMethodAscending = 0x1,
	k_ELeaderboardSortMethodDescending = 0x2,
};

namespace MilBitmapInterpolationMode
{
	enum Enum
	{
		NearestNeighbor = 0x0,
		Linear = 0x1,
		Cubic = 0x2,
		Fant = 0x3,
		TriLinear = 0x4,
		Anisotropic = 0x5,
		SuperSample = 0x6,
		Inherit = 0xff,
	};
}

enum class ELeaderboardDisplayType
{
	k_ELeaderboardDisplayTypeNone = 0x0,
	k_ELeaderboardDisplayTypeNumeric = 0x1,
	k_ELeaderboardDisplayTypeTimeSeconds = 0x2,
	k_ELeaderboardDisplayTypeTimeMilliSeconds = 0x3,
};

enum class ELeaderboardUploadScoreMethod
{
	k_ELeaderboardUploadScoreMethodNone = 0x0,
	k_ELeaderboardUploadScoreMethodKeepBest = 0x1,
	k_ELeaderboardUploadScoreMethodForceUpdate = 0x2,
};

enum class EBokehIndexStyle
{
	BIS_Fast = 0x0,
	BIS_Slow = 0x1,
};

enum class EChatMemberStateChange
{
	k_EChatMemberStateChangeEntered = 0x1,
	k_EChatMemberStateChangeLeft = 0x2,
	k_EChatMemberStateChangeDisconnected = 0x4,
	k_EChatMemberStateChangeKicked = 0x8,
	k_EChatMemberStateChangeBanned = 0x10,
};

namespace ESceneRenderTargetsMode
{
	enum Type
	{
		SetTextures = 0x0,
		DontSet = 0x1,
		DontSetIgnoreBoundByEditorCompositing = 0x2,
		NonSceneAlignedPass = 0x3,
	};
}

enum class EChatRoomEnterResponse
{
	k_EChatRoomEnterResponseSuccess = 0x1,
	k_EChatRoomEnterResponseDoesntExist = 0x2,
	k_EChatRoomEnterResponseNotAllowed = 0x3,
	k_EChatRoomEnterResponseFull = 0x4,
	k_EChatRoomEnterResponseError = 0x5,
	k_EChatRoomEnterResponseBanned = 0x6,
	k_EChatRoomEnterResponseLimited = 0x7,
	k_EChatRoomEnterResponseClanDisabled = 0x8,
	k_EChatRoomEnterResponseCommunityBan = 0x9,
	k_EChatRoomEnterResponseMemberBlockedYou = 0xa,
	k_EChatRoomEnterResponseYouBlockedMember = 0xb,
};

enum class UResType
{
	URES_NONE = 0xff,
	URES_STRING = 0x0,
	URES_BINARY = 0x1,
	URES_TABLE = 0x2,
	URES_ALIAS = 0x3,
	URES_INT = 0x7,
	URES_ARRAY = 0x8,
	URES_INT_VECTOR = 0xe,
};

enum class EP2PSend
{
	k_EP2PSendUnreliable = 0x0,
	k_EP2PSendUnreliableNoDelay = 0x1,
	k_EP2PSendReliable = 0x2,
	k_EP2PSendReliableWithBuffering = 0x3,
};

enum class EUGCReadAction
{
	k_EUGCRead_ContinueReadingUntilFinished = 0x0,
	k_EUGCRead_ContinueReading = 0x1,
	k_EUGCRead_Close = 0x2,
};

enum class USystemTimeZoneType
{
	UCAL_ZONE_TYPE_ANY = 0x0,
	UCAL_ZONE_TYPE_CANONICAL = 0x1,
	UCAL_ZONE_TYPE_CANONICAL_LOCATION = 0x2,
};

enum class EInterpTrackMoveRotMode
{
	IMR_Keyframed = 0x0,
	IMR_LookAtGroup = 0x1,
	IMR_Ignore = 0x2,
	IMR_MAX = 0x3,
};

enum class EChatEntryType
{
	k_EChatEntryTypeInvalid = 0x0,
	k_EChatEntryTypeChatMsg = 0x1,
	k_EChatEntryTypeTyping = 0x2,
	k_EChatEntryTypeInviteGame = 0x3,
	k_EChatEntryTypeEmote = 0x4,
	k_EChatEntryTypeLeftConversation = 0x6,
	k_EChatEntryTypeEntered = 0x7,
	k_EChatEntryTypeWasKicked = 0x8,
	k_EChatEntryTypeWasBanned = 0x9,
	k_EChatEntryTypeDisconnected = 0xa,
	k_EChatEntryTypeHistoricalChat = 0xb,
	k_EChatEntryTypeReserved1 = 0xc,
	k_EChatEntryTypeReserved2 = 0xd,
};

enum class EBeginAuthSessionResult
{
	k_EBeginAuthSessionResultOK = 0x0,
	k_EBeginAuthSessionResultInvalidTicket = 0x1,
	k_EBeginAuthSessionResultDuplicateRequest = 0x2,
	k_EBeginAuthSessionResultInvalidVersion = 0x3,
	k_EBeginAuthSessionResultGameMismatch = 0x4,
	k_EBeginAuthSessionResultExpiredTicket = 0x5,
};

enum class ELeaderboardDataRequest
{
	k_ELeaderboardDataRequestGlobal = 0x0,
	k_ELeaderboardDataRequestGlobalAroundUser = 0x1,
	k_ELeaderboardDataRequestFriends = 0x2,
	k_ELeaderboardDataRequestUsers = 0x3,
};

enum class ESNetSocketConnectionType
{
	k_ESNetSocketConnectionTypeNotConnected = 0x0,
	k_ESNetSocketConnectionTypeUDP = 0x1,
	k_ESNetSocketConnectionTypeUDPRelay = 0x2,
};

enum class ENotificationPosition
{
	k_EPositionTopLeft = 0x0,
	k_EPositionTopRight = 0x1,
	k_EPositionBottomLeft = 0x2,
	k_EPositionBottomRight = 0x3,
};

enum class EWorkshopVideoProvider
{
	k_EWorkshopVideoProviderNone = 0x0,
	k_EWorkshopVideoProviderYoutube = 0x1,
};

enum class EWorkshopEnumerationType
{
	k_EWorkshopEnumerationTypeRankedByVote = 0x0,
	k_EWorkshopEnumerationTypeRecent = 0x1,
	k_EWorkshopEnumerationTypeTrending = 0x2,
	k_EWorkshopEnumerationTypeFavoritesOfFriends = 0x3,
	k_EWorkshopEnumerationTypeVotedByFriends = 0x4,
	k_EWorkshopEnumerationTypeContentByFriends = 0x5,
	k_EWorkshopEnumerationTypeRecentFromFollowedUsers = 0x6,
};

enum class EUGCQuery
{
	k_EUGCQuery_RankedByVote = 0x0,
	k_EUGCQuery_RankedByPublicationDate = 0x1,
	k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = 0x2,
	k_EUGCQuery_RankedByTrend = 0x3,
	k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = 0x4,
	k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = 0x5,
	k_EUGCQuery_RankedByNumTimesReported = 0x6,
	k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 0x7,
	k_EUGCQuery_NotYetRated = 0x8,
	k_EUGCQuery_RankedByTotalVotesAsc = 0x9,
	k_EUGCQuery_RankedByVotesUp = 0xa,
	k_EUGCQuery_RankedByTextSearch = 0xb,
	k_EUGCQuery_RankedByTotalUniqueSubscriptions = 0xc,
};

enum class EItemUpdateStatus
{
	k_EItemUpdateStatusInvalid = 0x0,
	k_EItemUpdateStatusPreparingConfig = 0x1,
	k_EItemUpdateStatusPreparingContent = 0x2,
	k_EItemUpdateStatusUploadingContent = 0x3,
	k_EItemUpdateStatusUploadingPreviewFile = 0x4,
	k_EItemUpdateStatusCommittingChanges = 0x5,
};

enum class OfflineFolderStatus
{
	OFS_INACTIVE = 0xff,
	OFS_ONLINE = 0x0,
	OFS_OFFLINE = 0x1,
	OFS_SERVERBACK = 0x2,
	OFS_DIRTYCACHE = 0x3,
};

namespace EConstraintTransform
{
	enum Type
	{
		Absoluate = 0x0,
		Relative = 0x1,
	};
}

namespace ETargetDeviceTypes
{
	enum Type
	{
		Indeterminate = 0x0,
		Browser = 0x1,
		Console = 0x2,
		Desktop = 0x3,
		Phone = 0x4,
		Tablet = 0x5,
	};
}

enum class UJoiningGroup
{
	U_JG_NO_JOINING_GROUP = 0x0,
	U_JG_AIN = 0x1,
	U_JG_ALAPH = 0x2,
	U_JG_ALEF = 0x3,
	U_JG_BEH = 0x4,
	U_JG_BETH = 0x5,
	U_JG_DAL = 0x6,
	U_JG_DALATH_RISH = 0x7,
	U_JG_E = 0x8,
	U_JG_FEH = 0x9,
	U_JG_FINAL_SEMKATH = 0xa,
	U_JG_GAF = 0xb,
	U_JG_GAMAL = 0xc,
	U_JG_HAH = 0xd,
	U_JG_TEH_MARBUTA_GOAL = 0xe,
	U_JG_HAMZA_ON_HEH_GOAL = 0xe,
	U_JG_HE = 0xf,
	U_JG_HEH = 0x10,
	U_JG_HEH_GOAL = 0x11,
	U_JG_HETH = 0x12,
	U_JG_KAF = 0x13,
	U_JG_KAPH = 0x14,
	U_JG_KNOTTED_HEH = 0x15,
	U_JG_LAM = 0x16,
	U_JG_LAMADH = 0x17,
	U_JG_MEEM = 0x18,
	U_JG_MIM = 0x19,
	U_JG_NOON = 0x1a,
	U_JG_NUN = 0x1b,
	U_JG_PE = 0x1c,
	U_JG_QAF = 0x1d,
	U_JG_QAPH = 0x1e,
	U_JG_REH = 0x1f,
	U_JG_REVERSED_PE = 0x20,
	U_JG_SAD = 0x21,
	U_JG_SADHE = 0x22,
	U_JG_SEEN = 0x23,
	U_JG_SEMKATH = 0x24,
	U_JG_SHIN = 0x25,
	U_JG_SWASH_KAF = 0x26,
	U_JG_SYRIAC_WAW = 0x27,
	U_JG_TAH = 0x28,
	U_JG_TAW = 0x29,
	U_JG_TEH_MARBUTA = 0x2a,
	U_JG_TETH = 0x2b,
	U_JG_WAW = 0x2c,
	U_JG_YEH = 0x2d,
	U_JG_YEH_BARREE = 0x2e,
	U_JG_YEH_WITH_TAIL = 0x2f,
	U_JG_YUDH = 0x30,
	U_JG_YUDH_HE = 0x31,
	U_JG_ZAIN = 0x32,
	U_JG_FE = 0x33,
	U_JG_KHAPH = 0x34,
	U_JG_ZHAIN = 0x35,
	U_JG_BURUSHASKI_YEH_BARREE = 0x36,
	U_JG_FARSI_YEH = 0x37,
	U_JG_NYA = 0x38,
	U_JG_ROHINGYA_YEH = 0x39,
	U_JG_COUNT = 0x3a,
};

namespace FSpeedTreeWind
{
	enum EShaderValues
	{
		SH_WIND_DIR_X = 0x0,
		SH_WIND_DIR_Y = 0x1,
		SH_WIND_DIR_Z = 0x2,
		SH_GENERAL_STRENGTH = 0x3,
		SH_GLOBAL_TIME = 0x4,
		SH_GLOBAL_DISTANCE = 0x5,
		SH_GLOBAL_HEIGHT = 0x6,
		SH_GLOBAL_HEIGHT_EXPONENT = 0x7,
		SH_BRANCH_1_TIME = 0x8,
		SH_BRANCH_1_DISTANCE = 0x9,
		SH_BRANCH_2_TIME = 0xa,
		SH_BRANCH_2_DISTANCE = 0xb,
		SH_BRANCH_1_TWITCH = 0xc,
		SH_BRANCH_1_TWITCH_FREQ_SCALE = 0xd,
		SH_BRANCH_2_TWITCH = 0xe,
		SH_BRANCH_2_TWITCH_FREQ_SCALE = 0xf,
		SH_BRANCH_1_WHIP = 0x10,
		SH_BRANCH_2_WHIP = 0x11,
		SH_WIND_PACK0 = 0x12,
		SH_WIND_PACK1 = 0x13,
		SH_WIND_ANCHOR_X = 0x14,
		SH_WIND_ANCHOR_Y = 0x15,
		SH_WIND_ANCHOR_Z = 0x16,
		SH_WIND_PACK2 = 0x17,
		SH_GLOBAL_DIRECTION_ADHERENCE = 0x18,
		SH_BRANCH_1_DIRECTION_ADHERENCE = 0x19,
		SH_BRANCH_2_DIRECTION_ADHERENCE = 0x1a,
		SH_WIND_PACK5 = 0x1b,
		SH_BRANCH_1_TURBULENCE = 0x1c,
		SH_BRANCH_2_TURBULENCE = 0x1d,
		SH_WIND_PACK6 = 0x1e,
		SH_WIND_PACK7 = 0x1f,
		SH_LEAF_1_RIPPLE_TIME = 0x20,
		SH_LEAF_1_RIPPLE_DISTANCE = 0x21,
		SH_LEAF_1_LEEWARD_SCALAR = 0x22,
		SH_WIND_PACK8 = 0x23,
		SH_LEAF_1_TUMBLE_TIME = 0x24,
		SH_LEAF_1_TUMBLE_FLIP = 0x25,
		SH_LEAF_1_TUMBLE_TWIST = 0x26,
		SH_LEAF_1_TUMBLE_DIRECTION_ADHERENCE = 0x27,
		SH_LEAF_1_TWITCH_THROW = 0x28,
		SH_LEAF_1_TWITCH_SHARPNESS = 0x29,
		SH_LEAF_1_TWITCH_TIME = 0x2a,
		SH_WIND_PACK9 = 0x2b,
		SH_LEAF_2_RIPPLE_TIME = 0x2c,
		SH_LEAF_2_RIPPLE_DISTANCE = 0x2d,
		SH_LEAF_2_LEEWARD_SCALAR = 0x2e,
		SH_WIND_PACK10 = 0x2f,
		SH_LEAF_2_TUMBLE_TIME = 0x30,
		SH_LEAF_2_TUMBLE_FLIP = 0x31,
		SH_LEAF_2_TUMBLE_TWIST = 0x32,
		SH_LEAF_2_TUMBLE_DIRECTION_ADHERENCE = 0x33,
		SH_LEAF_2_TWITCH_THROW = 0x34,
		SH_LEAF_2_TWITCH_SHARPNESS = 0x35,
		SH_LEAF_2_TWITCH_TIME = 0x36,
		SH_WIND_PACK11 = 0x37,
		SH_FROND_RIPPLE_TIME = 0x38,
		SH_FROND_RIPPLE_DISTANCE = 0x39,
		SH_FROND_RIPPLE_TILE = 0x3a,
		SH_FROND_RIPPLE_LIGHTING_SCALAR = 0x3b,
		SH_ROLLING_BRANCH_FIELD_MIN = 0x3c,
		SH_ROLLING_BRANCH_LIGHTING_ADJUST = 0x3d,
		SH_ROLLING_BRANCH_VERTICAL_OFFSET = 0x3e,
		SH_WIND_PACK12 = 0x3f,
		SH_ROLLING_LEAF_RIPPLE_MIN = 0x40,
		SH_ROLLING_LEAF_TUMBLE_MIN = 0x41,
		SH_ROLLING_X = 0x42,
		SH_ROLLING_Y = 0x43,
		SH_ROLLING_NOISE_PERIOD = 0x44,
		SH_ROLLING_NOISE_SIZE = 0x45,
		SH_ROLLING_NOISE_TURBULENCE = 0x46,
		SH_ROLLING_NOISE_TWIST = 0x47,
		NUM_SHADER_VALUES = 0x48,
	};
}

enum class rcTimerLabel
{
	RC_TIMER_TOTAL = 0x0,
	RC_TIMER_TEMP = 0x1,
	RC_TIMER_RASTERIZE_TRIANGLES = 0x2,
	RC_TIMER_BUILD_COMPACTHEIGHTFIELD = 0x3,
	RC_TIMER_BUILD_CONTOURS = 0x4,
	RC_TIMER_BUILD_CONTOURS_TRACE = 0x5,
	RC_TIMER_BUILD_CONTOURS_SIMPLIFY = 0x6,
	RC_TIMER_BUILD_CLUSTERS = 0x7,
	RC_TIMER_FILTER_BORDER = 0x8,
	RC_TIMER_FILTER_WALKABLE = 0x9,
	RC_TIMER_MEDIAN_AREA = 0xa,
	RC_TIMER_FILTER_LOW_OBSTACLES = 0xb,
	RC_TIMER_BUILD_POLYMESH = 0xc,
	RC_TIMER_MERGE_POLYMESH = 0xd,
	RC_TIMER_ERODE_AREA = 0xe,
	RC_TIMER_MARK_BOX_AREA = 0xf,
	RC_TIMER_MARK_CYLINDER_AREA = 0x10,
	RC_TIMER_MARK_CONVEXPOLY_AREA = 0x11,
	RC_TIMER_BUILD_DISTANCEFIELD = 0x12,
	RC_TIMER_BUILD_DISTANCEFIELD_DIST = 0x13,
	RC_TIMER_BUILD_DISTANCEFIELD_BLUR = 0x14,
	RC_TIMER_BUILD_REGIONS = 0x15,
	RC_TIMER_BUILD_REGIONS_WATERSHED = 0x16,
	RC_TIMER_BUILD_REGIONS_EXPAND = 0x17,
	RC_TIMER_BUILD_REGIONS_FLOOD = 0x18,
	RC_TIMER_BUILD_REGIONS_FILTER = 0x19,
	RC_TIMER_BUILD_LAYERS = 0x1a,
	RC_TIMER_BUILD_POLYMESHDETAIL = 0x1b,
	RC_TIMER_MERGE_POLYMESHDETAIL = 0x1c,
	RC_MAX_TIMERS = 0x1d,
};

namespace EHMDDeviceType
{
	enum Type
	{
		DT_OculusRift = 0x0,
		DT_Morpheus = 0x1,
		DT_ES2GenericStereoMesh = 0x2,
		DT_SteamVR = 0x3,
		DT_GearVR = 0x4,
	};
}

namespace EEasingFunc
{
	enum Type
	{
		Linear = 0x0,
		Step = 0x1,
		SinusoidalIn = 0x2,
		SinusoidalOut = 0x3,
		SinusoidalInOut = 0x4,
		EaseIn = 0x5,
		EaseOut = 0x6,
		EaseInOut = 0x7,
		ExpoIn = 0x8,
		ExpoOut = 0x9,
		ExpoInOut = 0xa,
		CircularIn = 0xb,
		CircularOut = 0xc,
		CircularInOut = 0xd,
	};
}

enum class WICBitmapDitherType
{
	WICBitmapDitherTypeNone = 0x0,
};

namespace EAtmosphereRenderFlag
{
	enum Type
	{
		E_EnableAll = 0x0,
		E_DisableSunDisk = 0x1,
		E_DisableGroundScattering = 0x2,
		E_DisableLightShaft = 0x4,
		E_ScatterAndLoss = 0x8,
		E_DisableSunAndGround = 0x3,
		E_DisableSunAndLightShaft = 0x5,
		E_DisableGroundAndLightShaft = 0x6,
		E_DisableAll = 0x7,
		E_RenderFlagMax = 0x8,
		E_LightShaftMask = 0xfb,
	};
}

enum class WICBitmapTransformOptions
{
	WICBitmapTransformRotate0 = 0x0,
	WICBitmapTransformRotate90 = 0x1,
	WICBitmapTransformRotate180 = 0x2,
	WICBitmapTransformRotate270 = 0x3,
	WICBitmapTransformFlipHorizontal = 0x8,
	WICBitmapTransformFlipVertical = 0x10,
	WICBITMAPTRANSFORMOPTIONS_FORCE_DWORD = 0x7fffffff,
};

enum class EShadowDepthPixelShaderMode
{
	PixelShadowDepth_NonPerspectiveCorrect = 0x0,
	PixelShadowDepth_PerspectiveCorrect = 0x1,
	PixelShadowDepth_OnePassPointLight = 0x2,
};

namespace FScene
{
	enum EBasePassDrawListType
	{
		EBasePass_Default = 0x0,
		EBasePass_Masked = 0x1,
		EBasePass_MAX = 0x2,
	};
}

enum class ESceneTextureId
{
	PPI_SceneColor = 0x0,
	PPI_SceneDepth = 0x1,
	PPI_DiffuseColor = 0x2,
	PPI_SpecularColor = 0x3,
	PPI_SubsurfaceColor = 0x4,
	PPI_BaseColor = 0x5,
	PPI_Specular = 0x6,
	PPI_Metallic = 0x7,
	PPI_WorldNormal = 0x8,
	PPI_SeparateTranslucency = 0x9,
	PPI_Opacity = 0xa,
	PPI_Roughness = 0xb,
	PPI_MaterialAO = 0xc,
	PPI_CustomDepth = 0xd,
	PPI_PostProcessInput0 = 0xe,
	PPI_PostProcessInput1 = 0xf,
	PPI_PostProcessInput2 = 0x10,
	PPI_PostProcessInput3 = 0x11,
	PPI_PostProcessInput4 = 0x12,
	PPI_PostProcessInput5 = 0x13,
	PPI_PostProcessInput6 = 0x14,
	PPI_DecalMask = 0x15,
	PPI_ShadingModel = 0x16,
	PPI_AmbientOcclusion = 0x17,
};

enum class FGlobalDFCacheType
{
	GDF_MostlyStatic = 0x0,
	GDF_Full = 0x1,
	GDF_Num = 0x2,
};

enum class TonemapperOption
{
	TonemapperGammaOnly = 0x1,
	TonemapperColorMatrix = 0x2,
	TonemapperShadowTint = 0x4,
	TonemapperContrast = 0x8,
	TonemapperGrainJitter = 0x10,
	TonemapperGrainIntensity = 0x20,
	TonemapperGrainQuantization = 0x40,
	TonemapperBloom = 0x80,
	TonemapperDOF = 0x100,
	TonemapperVignette = 0x200,
	TonemapperVignetteColor = 0x400,
	TonemapperLightShafts = 0x800,
	TonemapperMosaic = 0x1000,
	TonemapperColorFringe = 0x2000,
	TonemapperColorGrading = 0x4000,
	TonemapperMsaa = 0x8000,
};

enum class ERenderTargetPoolEventType
{
	ERTPE_Alloc = 0x0,
	ERTPE_Dealloc = 0x1,
	ERTPE_Phase = 0x2,
};

enum class EDepthDrawingMode
{
	DDM_None = 0x0,
	DDM_NonMaskedOnly = 0x1,
	DDM_AllOccluders = 0x2,
	DDM_AllOpaque = 0x3,
};

namespace EEnvTestPathfinding
{
	enum Type
	{
		PathExist = 0x0,
		PathCost = 0x1,
		PathLength = 0x2,
	};
}

namespace OVR
{
	enum HandedSystem
	{
		Handed_R = 0x1,
		Handed_L = 0xff,
	};
}

enum class LandscapeSplineMeshOrientation
{
	LSMO_XUp = 0x0,
	LSMO_YUp = 0x1,
	LSMO_MAX = 0x2,
};

enum class ERenderTargetMode
{
	RTM_Unknown = 0xff,
	RTM_SceneColorAndGBuffer = 0x0,
	RTM_DBuffer = 0x1,
	RTM_GBufferNormal = 0x2,
	RTM_SceneColor = 0x3,
};

enum class EParticleBurstMethod
{
	EPBM_Instant = 0x0,
	EPBM_Interpolated = 0x1,
	EPBM_MAX = 0x2,
};

enum class EInterpMoveAxis
{
	AXIS_TranslationX = 0x0,
	AXIS_TranslationY = 0x1,
	AXIS_TranslationZ = 0x2,
	AXIS_RotationX = 0x3,
	AXIS_RotationY = 0x4,
	AXIS_RotationZ = 0x5,
};

enum class EShadowDepthVertexShaderMode
{
	VertexShadowDepth_PerspectiveCorrect = 0x0,
	VertexShadowDepth_OutputDepth = 0x1,
	VertexShadowDepth_OnePassPointLight = 0x2,
};

enum class ETranslucencyShadowDepthShaderMode
{
	TranslucencyShadowDepth_PerspectiveCorrect = 0x0,
	TranslucencyShadowDepth_Standard = 0x1,
};

enum class EMaturityChildType
{
	ChildType_None = 0x0,
	ChildType_Mature = 0x1,
	ChildType_NonMature = 0x2,
};

enum class EMaterialVectorCoordTransform
{
	TRANSFORM_World = 0x0,
	TRANSFORM_View = 0x1,
	TRANSFORM_Local = 0x2,
	TRANSFORM_Tangent = 0x3,
	TRANSFORM_MAX = 0x4,
};

namespace EOcclusionFlags
{
	enum Type
	{
		None = 0x0,
		CanBeOccluded = 0x1,
		AllowApproximateOcclusion = 0x4,
		HasPrecomputedVisibility = 0x8,
		HasSubprimitiveQueries = 0x10,
	};
}

namespace FCustomBlockTransaction
{
	enum ETransactionType
	{
		Remove = 0x0,
		Add = 0x1,
	};
}

namespace EPluginDescriptorVersion
{
	enum Type
	{
		Invalid = 0x0,
		Initial = 0x1,
		NameHash = 0x2,
		ProjectPluginUnification = 0x3,
		LatestPlusOne = 0x4,
		Latest = 0x3,
	};
}

enum class UNumberFormatStyle
{
	UNUM_PATTERN_DECIMAL = 0x0,
	UNUM_DECIMAL = 0x1,
	UNUM_CURRENCY = 0x2,
	UNUM_PERCENT = 0x3,
	UNUM_SCIENTIFIC = 0x4,
	UNUM_SPELLOUT = 0x5,
	UNUM_ORDINAL = 0x6,
	UNUM_DURATION = 0x7,
	UNUM_NUMBERING_SYSTEM = 0x8,
	UNUM_PATTERN_RULEBASED = 0x9,
	UNUM_CURRENCY_ISO = 0xa,
	UNUM_CURRENCY_PLURAL = 0xb,
	UNUM_CURRENCY_ACCOUNTING = 0xc,
	UNUM_FORMAT_STYLE_COUNT = 0xd,
	UNUM_DEFAULT = 0x1,
};

enum class EVPLMode
{
	VPLMode_PlaceFromLight = 0x0,
	VPLMode_PlaceFromSurfels = 0x1,
};

enum class EFlattenedDimension
{
	Flatten_XAxis = 0x0,
	Flatten_YAxis = 0x1,
	Flatten_ZAxis = 0x2,
	Flatten_None = 0x3,
};

enum class CrowdAgentState
{
	DT_CROWDAGENT_STATE_INVALID = 0x0,
	DT_CROWDAGENT_STATE_WALKING = 0x1,
	DT_CROWDAGENT_STATE_OFFMESH = 0x2,
	DT_CROWDAGENT_STATE_WAITING = 0x3,
};

enum class PropagateShaderFlags
{
	PROPAGATE_SECONDARY_OCCLUSION = 0x1,
	PROPAGATE_MULTIPLE_BOUNCES = 0x2,
	PROPAGATE_SECONDARY_OCCLUSION_AND_MULTIPLE_BOUNCES = 0x3,
};

namespace FShadowMapData2D
{
	enum ShadowMapDataType
	{
		UNKNOWN = 0x0,
		SHADOW_FACTOR_DATA = 0x1,
		SHADOW_FACTOR_DATA_QUANTIZED = 0x2,
		SHADOW_SIGNED_DISTANCE_FIELD_DATA = 0x3,
		SHADOW_SIGNED_DISTANCE_FIELD_DATA_QUANTIZED = 0x4,
	};
}

enum class DrawNavMeshFlags
{
	DU_DRAWNAVMESH_OFFMESHCONS = 0x1,
	DU_DRAWNAVMESH_CLOSEDLIST = 0x2,
	DU_DRAWNAVMESH_COLOR_TILES = 0x4,
};

enum class ENoiseFunction
{
	NOISEFUNCTION_Simplex = 0x0,
	NOISEFUNCTION_Perlin = 0x1,
	NOISEFUNCTION_Gradient = 0x2,
	NOISEFUNCTION_FastGradient = 0x3,
	NOISEFUNCTION_MAX = 0x4,
};

enum class ESteamNetworkingConnectionState
{
	k_ESteamNetworkingConnectionState_None = 0x0,
	k_ESteamNetworkingConnectionState_Connecting = 0x1,
	k_ESteamNetworkingConnectionState_FindingRoute = 0x2,
	k_ESteamNetworkingConnectionState_Connected = 0x3,
	k_ESteamNetworkingConnectionState_ClosedByPeer = 0x4,
	k_ESteamNetworkingConnectionState_ProblemDetectedLocally = 0x5,
	k_ESteamNetworkingConnectionState_FinWait = 0xff,
	k_ESteamNetworkingConnectionState_Linger = 0xfe,
	k_ESteamNetworkingConnectionState_Dead = 0xfd,
};

namespace EChunkInstallSpeed
{
	enum Type
	{
		Paused = 0x0,
		Slow = 0x1,
		Fast = 0x2,
	};
}

enum class EMediaSeekDirection
{
	Backward = 0x0,
	Beginning = 0x1,
	End = 0x2,
	Forward = 0x3,
};

enum class EMediaTrackTypes
{
	Audio = 0x0,
	Caption = 0x1,
	Video = 0x2,
};

enum class EMediaPlaybackDirections
{
	Forward = 0x0,
	Reverse = 0x1,
};

enum class ERefPoseType
{
	EIT_LocalSpace = 0x0,
	EIT_Additive = 0x1,
};

enum class ELocationBoneSocketSource
{
	BONESOCKETSOURCE_Bones = 0x0,
	BONESOCKETSOURCE_Sockets = 0x1,
	BONESOCKETSOURCE_MAX = 0x2,
};

namespace UBlackboardData
{
	enum EKeyLookupMode
	{
		CheckParentKeys = 0x0,
		DontCheckParentKeys = 0x1,
	};
}

enum class EBTChildIndex
{
	FirstNode = 0x0,
	TaskNode = 0x1,
};

namespace EReporterLineStyle
{
	enum Type
	{
		Line = 0x0,
		Dash = 0x1,
	};
}

namespace EControlConstraint
{
	enum Type
	{
		Orientation = 0x0,
		Translation = 0x1,
		Max = 0x2,
	};
}

namespace USoundNodeBranch
{
	enum BranchPurpose
	{
		ParameterTrue = 0x0,
		ParameterFalse = 0x1,
		ParameterUnset = 0x2,
		MAX = 0x3,
	};
}

enum class UDateFormatField
{
	UDAT_ERA_FIELD = 0x0,
	UDAT_YEAR_FIELD = 0x1,
	UDAT_MONTH_FIELD = 0x2,
	UDAT_DATE_FIELD = 0x3,
	UDAT_HOUR_OF_DAY1_FIELD = 0x4,
	UDAT_HOUR_OF_DAY0_FIELD = 0x5,
	UDAT_MINUTE_FIELD = 0x6,
	UDAT_SECOND_FIELD = 0x7,
	UDAT_FRACTIONAL_SECOND_FIELD = 0x8,
	UDAT_DAY_OF_WEEK_FIELD = 0x9,
	UDAT_DAY_OF_YEAR_FIELD = 0xa,
	UDAT_DAY_OF_WEEK_IN_MONTH_FIELD = 0xb,
	UDAT_WEEK_OF_YEAR_FIELD = 0xc,
	UDAT_WEEK_OF_MONTH_FIELD = 0xd,
	UDAT_AM_PM_FIELD = 0xe,
	UDAT_HOUR1_FIELD = 0xf,
	UDAT_HOUR0_FIELD = 0x10,
	UDAT_TIMEZONE_FIELD = 0x11,
	UDAT_YEAR_WOY_FIELD = 0x12,
	UDAT_DOW_LOCAL_FIELD = 0x13,
	UDAT_EXTENDED_YEAR_FIELD = 0x14,
	UDAT_JULIAN_DAY_FIELD = 0x15,
	UDAT_MILLISECONDS_IN_DAY_FIELD = 0x16,
	UDAT_TIMEZONE_RFC_FIELD = 0x17,
	UDAT_TIMEZONE_GENERIC_FIELD = 0x18,
	UDAT_STANDALONE_DAY_FIELD = 0x19,
	UDAT_STANDALONE_MONTH_FIELD = 0x1a,
	UDAT_QUARTER_FIELD = 0x1b,
	UDAT_STANDALONE_QUARTER_FIELD = 0x1c,
	UDAT_TIMEZONE_SPECIAL_FIELD = 0x1d,
	UDAT_YEAR_NAME_FIELD = 0x1e,
	UDAT_TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD = 0x1f,
	UDAT_TIMEZONE_ISO_FIELD = 0x20,
	UDAT_TIMEZONE_ISO_LOCAL_FIELD = 0x21,
	UDAT_RELATED_YEAR_FIELD = 0x22,
	UDAT_FIELD_COUNT = 0x23,
};

namespace ESplineMeshAxis
{
	enum Type
	{
		X = 0x0,
		Y = 0x1,
		Z = 0x2,
	};
}

enum class EEdGraphActionType
{
	GRAPHACTION_Default = 0x0,
	GRAPHACTION_UserInitiated = 0x1,
	GRAPHACTION_AddNode = 0x2,
	GRAPHACTION_AddNodeUI = 0x3,
	GRAPHACTION_SelectNode = 0x4,
};

enum class EBoneModificationMode
{
	BMM_Ignore = 0x0,
	BMM_Replace = 0x1,
	BMM_Additive = 0x2,
};

enum class ESlabOverlapFlag
{
	SLABOVERLAP_Cross = 0x1,
	SLABOVERLAP_Min = 0x2,
	SLABOVERLAP_Max = 0x4,
};

namespace ECommentBoxMode
{
	enum Type
	{
		GroupMovement = 0x0,
		NoGroupMovement = 0x1,
	};
}

enum class FoliageVertexColorMask
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0x0,
	FOLIAGEVERTEXCOLORMASK_Red = 0x1,
	FOLIAGEVERTEXCOLORMASK_Green = 0x2,
	FOLIAGEVERTEXCOLORMASK_Blue = 0x3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 0x4,
};

enum class EVisibilityTrackAction
{
	EVTA_Hide = 0x0,
	EVTA_Show = 0x1,
	EVTA_Toggle = 0x2,
	EVTA_MAX = 0x3,
};

enum class EDepthOfFieldFunctionValue
{
	TDOF_NearAndFarMask = 0x0,
	TDOF_NearMask = 0x1,
	TDOF_FarMask = 0x2,
	TDOF_MAX = 0x3,
};

enum class ELandscapeLayerBlendType
{
	LB_WeightBlend = 0x0,
	LB_AlphaBlend = 0x1,
	LB_HeightBlend = 0x2,
	LB_MAX = 0x3,
};

enum class ESpeedTreeGeometryType
{
	STG_Branch = 0x0,
	STG_Frond = 0x1,
	STG_Leaf = 0x2,
	STG_FacingLeaf = 0x3,
	STG_Billboard = 0x4,
};

enum class ESpeedTreeWindType
{
	STW_None = 0x0,
	STW_Fastest = 0x1,
	STW_Fast = 0x2,
	STW_Better = 0x3,
	STW_Best = 0x4,
	STW_Palm = 0x5,
};

enum class ETextureMipValueMode
{
	TMVM_None = 0x0,
	TMVM_MipLevel = 0x1,
	TMVM_MipBias = 0x2,
	TMVM_Derivative = 0x3,
	TMVM_MAX = 0x4,
};

enum class ETextureColorChannel
{
	TCC_Red = 0x0,
	TCC_Green = 0x1,
	TCC_Blue = 0x2,
	TCC_Alpha = 0x3,
	TCC_MAX = 0x4,
};

enum class EParticleAxisLock
{
	EPAL_NONE = 0x0,
	EPAL_X = 0x1,
	EPAL_Y = 0x2,
	EPAL_Z = 0x3,
	EPAL_NEGATIVE_X = 0x4,
	EPAL_NEGATIVE_Y = 0x5,
	EPAL_NEGATIVE_Z = 0x6,
	EPAL_ROTATE_X = 0x7,
	EPAL_ROTATE_Y = 0x8,
	EPAL_ROTATE_Z = 0x9,
	EPAL_MAX = 0xa,
};

enum class WICBitmapCreateCacheOption
{
	WICBitmapNoCache = 0x0,
	WICBitmapCacheOnDemand = 0x1,
	WICBitmapCacheOnLoad = 0x2,
	WICBITMAPCREATECACHEOPTION_FORCE_DWORD = 0x7fffffff,
};

enum class EAttractorParticleSelectionMethod
{
	EAPSM_Random = 0x0,
	EAPSM_Sequential = 0x1,
	EAPSM_MAX = 0x2,
};

enum class BeamModifierType
{
	PEB2MT_Source = 0x0,
	PEB2MT_Target = 0x1,
	PEB2MT_MAX = 0x2,
};

enum class Beam2SourceTargetTangentMethod
{
	PEB2STTM_Direct = 0x0,
	PEB2STTM_UserSet = 0x1,
	PEB2STTM_Distribution = 0x2,
	PEB2STTM_Emitter = 0x3,
	PEB2STTM_MAX = 0x4,
};

enum class EParticleCollisionComplete
{
	EPCC_Kill = 0x0,
	EPCC_Freeze = 0x1,
	EPCC_HaltCollisions = 0x2,
	EPCC_FreezeTranslation = 0x3,
	EPCC_FreezeRotation = 0x4,
	EPCC_FreezeMovement = 0x5,
	EPCC_MAX = 0x6,
};

enum class ELocationBoneSocketSelectionMethod
{
	BONESOCKETSEL_Sequential = 0x0,
	BONESOCKETSEL_Random = 0x1,
	BONESOCKETSEL_MAX = 0x2,
};

enum class CylinderHeightAxis
{
	PMLPC_HEIGHTAXIS_X = 0x0,
	PMLPC_HEIGHTAXIS_Y = 0x1,
	PMLPC_HEIGHTAXIS_Z = 0x2,
	PMLPC_HEIGHTAXIS_MAX = 0x3,
};

enum class EParticleScreenAlignment
{
	PSA_FacingCameraPosition = 0x0,
	PSA_Square = 0x1,
	PSA_Rectangle = 0x2,
	PSA_Velocity = 0x3,
	PSA_AwayFromCenter = 0x4,
	PSA_TypeSpecific = 0x5,
	PSA_MAX = 0x6,
};

enum class EParticleSortMode
{
	PSORTMODE_None = 0x0,
	PSORTMODE_ViewProjDepth = 0x1,
	PSORTMODE_DistanceToView = 0x2,
	PSORTMODE_Age_OldestFirst = 0x3,
	PSORTMODE_Age_NewestFirst = 0x4,
	PSORTMODE_MAX = 0x5,
};

enum class EParticleSubUVInterpMethod
{
	PSUVIM_None = 0x0,
	PSUVIM_Linear = 0x1,
	PSUVIM_Linear_Blend = 0x2,
	PSUVIM_Random = 0x3,
	PSUVIM_Random_Blend = 0x4,
	PSUVIM_MAX = 0x5,
};

enum class EParticleSourceSelectionMethod
{
	EPSSM_Random = 0x0,
	EPSSM_Sequential = 0x1,
	EPSSM_MAX = 0x2,
};

enum class EMeshCameraFacingUpAxis
{
	CameraFacing_NoneUP = 0x0,
	CameraFacing_ZUp = 0x1,
	CameraFacing_NegativeZUp = 0x2,
	CameraFacing_YUp = 0x3,
	CameraFacing_NegativeYUp = 0x4,
	CameraFacing_MAX = 0x5,
};

enum class EVectorFieldConstructionOp
{
	VFCO_Extrude = 0x0,
	VFCO_Revolve = 0x1,
	VFCO_MAX = 0x2,
};

enum class EBoneAxis
{
	BA_X = 0x0,
	BA_Y = 0x1,
	BA_Z = 0x2,
};

namespace EEvaluatorMode
{
	enum Mode
	{
		EM_Standard = 0x0,
		EM_Freeze = 0x1,
		EM_DelayedFreeze = 0x2,
	};
}

namespace EEnvQueryStatus
{
	enum Type
	{
		Processing = 0x0,
		Success = 0x1,
		Failed = 0x2,
		Aborted = 0x3,
		OwnerLost = 0x4,
		MissingParam = 0x5,
	};
}

namespace EEvaluateCurveTableResult
{
	enum Type
	{
		RowFound = 0x0,
		RowNotFound = 0x1,
	};
}

namespace SDockingTabStack
{
	enum ETabsToClose
	{
		CloseDocumentTabs = 0x0,
		CloseDocumentAndMajorTabs = 0x1,
		CloseAllTabs = 0x2,
	};
}

namespace EEnvTestScoreEquation
{
	enum Type
	{
		Linear = 0x0,
		Square = 0x1,
		InverseLinear = 0x2,
		Constant = 0x3,
	};
}

enum class EPhysXFilterDataFlags
{
	EPDF_SimpleCollision = 0x1,
	EPDF_ComplexCollision = 0x2,
	EPDF_CCD = 0x4,
	EPDF_ContactNotify = 0x8,
	EPDF_StaticShape = 0x10,
	EPDF_QueryOnly = 0x20,
};

namespace EMessageSeverity
{
	enum Type
	{
		CriticalError = 0x0,
		Error = 0x1,
		PerformanceWarning = 0x2,
		Warning = 0x3,
		Info = 0x4,
	};
}

namespace EMessageToken
{
	enum Type
	{
		Action = 0x0,
		AssetName = 0x1,
		Documentation = 0x2,
		Image = 0x3,
		Object = 0x4,
		Severity = 0x5,
		Text = 0x6,
		Tutorial = 0x7,
		URL = 0x8,
	};
}

enum class UpdateFlags
{
	DT_CROWD_ANTICIPATE_TURNS = 0x1,
	DT_CROWD_OBSTACLE_AVOIDANCE = 0x2,
	DT_CROWD_SEPARATION = 0x4,
	DT_CROWD_OPTIMIZE_VIS = 0x8,
	DT_CROWD_OPTIMIZE_TOPO = 0x10,
	DT_CROWD_OPTIMIZE_VIS_MULTI = 0x20,
	DT_CROWD_OFFSET_PATH = 0x40,
	DT_CROWD_SLOWDOWN_AT_GOAL = 0x80,
};

enum class ESteamNetworkingConnectionConfigurationValue
{
	k_ESteamNetworkingConnectionConfigurationValue_SNP_MaxRate = 0x0,
	k_ESteamNetworkingConnectionConfigurationValue_SNP_MinRate = 0x1,
	k_ESteamNetworkingConnectionConfigurationValue_Count = 0x2,
};

enum class UMessagePatternGraveMode
{
	UMSGPAT_GRAVE_DOUBLE_OPTIONAL = 0x0,
	UMSGPAT_GRAVE_DOUBLE_REQUIRED = 0x1,
};

namespace PhysCommand
{
	enum Type
	{
		Release = 0x0,
		ReleasePScene = 0x1,
		DeleteCPUDispatcher = 0x2,
		DeleteSimEventCallback = 0x3,
		Max = 0x4,
	};
}

enum class EKCollisionPrimitiveType
{
	KPT_Sphere = 0x0,
	KPT_Box = 0x1,
	KPT_Sphyl = 0x2,
	KPT_Convex = 0x3,
	KPT_Unknown = 0x4,
};

namespace EScaleMode
{
	enum Type
	{
		Free = 0x0,
		LockedXY = 0x1,
		LockedXYZ = 0x2,
	};
}

namespace EParticleSimulatePhase
{
	enum Type
	{
		Main = 0x0,
		Collision = 0x1,
	};
}

namespace EStreamPassType
{
	enum Type
	{
		OnlyPendingVisibility = 0x0,
		Loading = 0x1,
		Unloading = 0x2,
	};
}

enum class rcLogCategory
{
	RC_LOG_PROGRESS = 0x1,
	RC_LOG_WARNING = 0x2,
	RC_LOG_ERROR = 0x3,
};

namespace EEnvQueryTrace
{
	enum Type
	{
		None = 0x0,
		Navigation = 0x1,
		Geometry = 0x2,
	};
}

enum class EGPUSortTest
{
	GPU_SORT_TEST_SMALL = 0x1,
	GPU_SORT_TEST_LARGE = 0x2,
	GPU_SORT_TEST_EXHAUSTIVE = 0x3,
	GPU_SORT_TEST_RANDOM = 0x4,
};

namespace EEnvTestPurpose
{
	enum Type
	{
		Filter = 0x0,
		Score = 0x1,
		FilterAndScore = 0x2,
	};
}

namespace ERGBFormat
{
	enum Type
	{
		Invalid = 0xff,
		RGBA = 0x0,
		BGRA = 0x1,
		Gray = 0x2,
	};
}

namespace FFoliageCustomVersion
{
	enum Type
	{
		BeforeCustomVersionWasAdded = 0x0,
		FoliageUsingHierarchicalISMC = 0x1,
		HierarchicalISMCNonTransactional = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2,
	};
}

namespace ECollisionQuery
{
	enum Type
	{
		ObjectQuery = 0x0,
		TraceQuery = 0x1,
	};
}

namespace EBTParallelMode
{
	enum Type
	{
		AbortBackground = 0x0,
		WaitForBackground = 0x1,
	};
}

enum class ESteamNetworkingConfigurationString
{
	k_ESteamNetworkingConfigurationString_ClientForceRelayCluster = 0x0,
	k_ESteamNetworkingConfigurationString_ClientDebugTicketAddress = 0x1,
	k_ESteamNetworkingConfigurationString_ClientForceProxyAddr = 0x2,
	k_ESteamNetworkingConfigurationString_Count = 0x3,
};

enum class WICBitmapPaletteType
{
	WICBitmapPaletteTypeCustom = 0x0,
	WICBitmapPaletteTypeMedianCut = 0x1,
	WICBitmapPaletteTypeFixedBW = 0x2,
	WICBitmapPaletteTypeFixedHalftone8 = 0x3,
	WICBitmapPaletteTypeFixedHalftone27 = 0x4,
	WICBitmapPaletteTypeFixedHalftone64 = 0x5,
	WICBitmapPaletteTypeFixedHalftone125 = 0x6,
	WICBitmapPaletteTypeFixedHalftone216 = 0x7,
	WICBitmapPaletteTypeFixedWebPalette = 0x7,
	WICBitmapPaletteTypeFixedHalftone252 = 0x8,
	WICBitmapPaletteTypeFixedHalftone256 = 0x9,
	WICBitmapPaletteTypeFixedGray4 = 0xa,
	WICBitmapPaletteTypeFixedGray16 = 0xb,
	WICBitmapPaletteTypeFixedGray256 = 0xc,
	WICBITMAPPALETTETYPE_FORCE_DWORD = 0x7fffffff,
};

namespace Imf
{
	enum LevelMode
	{
		ONE_LEVEL = 0x0,
		MIPMAP_LEVELS = 0x1,
		RIPMAP_LEVELS = 0x2,
		NUM_LEVELMODES = 0x3,
	};
}

namespace FRecastNavMeshGenerator
{
	enum EDataOwnership
	{
		DO_ForeignData = 0x0,
		DO_OwnsData = 0x1,
	};
}

enum class rcBuildContoursFlags
{
	RC_CONTOUR_TESS_WALL_EDGES = 0x1,
	RC_CONTOUR_TESS_AREA_EDGES = 0x2,
};

enum class UMessagePatternPartType
{
	UMSGPAT_PART_TYPE_MSG_START = 0x0,
	UMSGPAT_PART_TYPE_MSG_LIMIT = 0x1,
	UMSGPAT_PART_TYPE_SKIP_SYNTAX = 0x2,
	UMSGPAT_PART_TYPE_INSERT_CHAR = 0x3,
	UMSGPAT_PART_TYPE_REPLACE_NUMBER = 0x4,
	UMSGPAT_PART_TYPE_ARG_START = 0x5,
	UMSGPAT_PART_TYPE_ARG_LIMIT = 0x6,
	UMSGPAT_PART_TYPE_ARG_NUMBER = 0x7,
	UMSGPAT_PART_TYPE_ARG_NAME = 0x8,
	UMSGPAT_PART_TYPE_ARG_TYPE = 0x9,
	UMSGPAT_PART_TYPE_ARG_STYLE = 0xa,
	UMSGPAT_PART_TYPE_ARG_SELECTOR = 0xb,
	UMSGPAT_PART_TYPE_ARG_INT = 0xc,
	UMSGPAT_PART_TYPE_ARG_DOUBLE = 0xd,
};

enum class dtAllocHint
{
	DT_ALLOC_PERM = 0x0,
	DT_ALLOC_TEMP = 0x1,
};

enum class duDebugDrawPrimitives
{
	DU_DRAW_POINTS = 0x0,
	DU_DRAW_LINES = 0x1,
	DU_DRAW_TRIS = 0x2,
	DU_DRAW_QUADS = 0x3,
};

enum class dtTileFlags
{
	DT_TILE_FREE_DATA = 0x1,
};

enum class dtPolyTypes
{
	DT_POLYTYPE_GROUND = 0x0,
	DT_POLYTYPE_OFFMESH_POINT = 0x1,
	DT_POLYTYPE_OFFMESH_SEGMENT = 0x2,
};

enum class rcRegionPartitioning
{
	RC_REGION_MONOTONE = 0x0,
	RC_REGION_WATERSHED = 0x1,
	RC_REGION_CHUNKY = 0x2,
};

namespace Imf
{
	enum RgbaChannels
	{
		WRITE_R = 0x1,
		WRITE_G = 0x2,
		WRITE_B = 0x4,
		WRITE_A = 0x8,
		WRITE_Y = 0x10,
		WRITE_C = 0x20,
		WRITE_RGB = 0x7,
		WRITE_RGBA = 0xf,
		WRITE_YC = 0x30,
		WRITE_YA = 0x18,
		WRITE_YCA = 0x38,
	};
}

enum class EDataBaseUnrealTypes
{
	DBT_UNKOWN = 0x0,
	DBT_FLOAT = 0x1,
	DBT_INT = 0x2,
	DBT_STRING = 0x3,
};

namespace EWorldSerializeLoadFlag
{
	enum WSLF
	{
		NoInlineLoadNeeded = 0x1,
		Loading = 0x2,
		Loaded = 0x4,
	};
}

namespace FEnvTraceData
{
	enum EDescriptionMode
	{
		Brief = 0x0,
		Detailed = 0x1,
	};
}

namespace EEnvTestFilterType
{
	enum Type
	{
		Minimum = 0x0,
		Maximum = 0x1,
		Range = 0x2,
		Match = 0x3,
	};
}

namespace EImageFormat
{
	enum Type
	{
		Invalid = 0xff,
		PNG = 0x0,
		JPEG = 0x1,
		GrayscaleJPEG = 0x2,
		BMP = 0x3,
		ICO = 0x4,
		EXR = 0x5,
	};
}

namespace EIPv4SubnetClasses
{
	enum Type
	{
		Invalid = 0x0,
		ClassA = 0x1,
		ClassB = 0x2,
		ClassC = 0x3,
	};
}

enum class EGametypeContentReferencerTypes
{
	GametypeCommon_ReferencerIndex = 0x0,
	GametypeCommon_LocalizedReferencerIndex = 0x1,
	GametypeContent_ReferencerIndex = 0x2,
	GametypeContent_LocalizedReferencerIndex = 0x3,
	MAX_ReferencerIndex = 0x4,
};

namespace SDockingNode
{
	enum ECleanupRetVal
	{
		VisibleTabsUnderNode = 0x0,
		HistoryTabsUnderNode = 0x1,
		NoTabsUnderNode = 0x2,
	};
}

namespace EWriteUserCaptureVideoError
{
	enum Type
	{
		None = 0x0,
		VideoCaptureInvalid = 0x1,
		CaptureNotRunning = 0x2,
		FailedToCreateDirectory = 0x3,
	};
}

namespace EEnvTraceShape
{
	enum Type
	{
		Line = 0x0,
		Box = 0x1,
		Sphere = 0x2,
		Capsule = 0x3,
	};
}

namespace EEnvQueryRunMode
{
	enum Type
	{
		SingleResult = 0x0,
		AllMatching = 0x1,
	};
}

namespace Imf
{
	enum LevelRoundingMode
	{
		ROUND_DOWN = 0x0,
		ROUND_UP = 0x1,
		NUM_ROUNDINGMODES = 0x2,
	};
}

namespace FGPUSkinCache
{
	enum SkinCacheInitSettings
	{
		MaxBufferSize = 0x2000000,
		MaxUniformBufferBones = 0x100,
		MaxCachedElements = 0x400,
		MaxCachedVertexBufferSRVs = 0x80,
	};
}

enum class WICComponentType
{
	WICDecoder = 0x1,
	WICEncoder = 0x2,
	WICPixelFormatConverter = 0x4,
	WICMetadataReader = 0x8,
	WICMetadataWriter = 0x10,
	WICPixelFormat = 0x20,
	WICAllComponents = 0x3f,
	WICCOMPONENTTYPE_FORCE_DWORD = 0x7fffffff,
};

enum class WICMetadataCreationOptions
{
	WICMetadataCreationDefault = 0x0,
};

enum class ERepLayoutCmdType
{
	REPCMD_DynamicArray = 0x0,
	REPCMD_Return = 0x1,
	REPCMD_Property = 0x2,
	REPCMD_PropertyBool = 0x3,
	REPCMD_PropertyFloat = 0x4,
	REPCMD_PropertyInt = 0x5,
	REPCMD_PropertyByte = 0x6,
	REPCMD_PropertyName = 0x7,
	REPCMD_PropertyObject = 0x8,
	REPCMD_PropertyUInt32 = 0x9,
	REPCMD_PropertyVector = 0xa,
	REPCMD_PropertyRotator = 0xb,
	REPCMD_PropertyPlane = 0xc,
	REPCMD_PropertyVector100 = 0xd,
	REPCMD_PropertyNetId = 0xe,
	REPCMD_RepMovement = 0xf,
	REPCMD_PropertyVectorNormal = 0x10,
	REPCMD_PropertyVector10 = 0x11,
	REPCMD_PropertyVectorQ = 0x12,
	REPCMD_PropertyString = 0x13,
	REPCMD_PropertyUInt64 = 0x14,
	REPCMD_PropertyVectorLow = 0x15,
	REPCMD_PropertyRotatorNetQuantize = 0x16,
	REPCMD_PropertyRotatorNetQuantizeNoRoll = 0x17,
	REPCMD_PropertyRotatorNetQuantizeYawOnly = 0x18,
	REPCMD_PropertyRotatorNetQuantizeSmartPitch = 0x19,
};

namespace ENiagaraVectorAttr
{
	enum Type
	{
		Position = 0x0,
		Velocity = 0x1,
		Color = 0x2,
		Rotation = 0x3,
		RelativeTime = 0x4,
		MaxVectorAttribs = 0x5,
	};
}

namespace FDockingDragOperation
{
	enum EViaTabwell
	{
		DockingViaTabWell = 0x0,
		DockingViaTarget = 0x1,
	};
}

namespace TileCacheData
{
	enum EdgeValues
	{
		UNDEF = 0xff,
		HULL = 0xfe,
	};
}

namespace ansel
{
	enum FovType
	{
		kHorizontalFov = 0x0,
		kVerticalFov = 0x1,
	};
}

enum class WICBitmapInterpolationMode
{
	WICBitmapInterpolationModeNearestNeighbor = 0x0,
	WICBitmapInterpolationModeLinear = 0x1,
	WICBitmapInterpolationModeCubic = 0x2,
	WICBitmapInterpolationModeFant = 0x3,
	WICBITMAPINTERPOLATIONMODE_FORCE_DWORD = 0x7fffffff,
};

enum class UNormalizationCheckResult
{
	UNORM_NO = 0x0,
	UNORM_YES = 0x1,
	UNORM_MAYBE = 0x2,
};

enum class EDDSFlags
{
	DDSF_Caps = 0x1,
	DDSF_Height = 0x2,
	DDSF_Width = 0x4,
	DDSF_PixelFormat = 0x1000,
};

namespace FOpenGLSamplerStateData
{
	enum EGLSamplerData
	{
		EGLSamplerData_WrapS = 0x0,
		EGLSamplerData_WrapT = 0x1,
		EGLSamplerData_WrapR = 0x2,
		EGLSamplerData_LODBias = 0x3,
		EGLSamplerData_MagFilter = 0x4,
		EGLSamplerData_MinFilter = 0x5,
		EGLSamplerData_MaxAniso = 0x6,
		EGLSamplerData_CompareMode = 0x7,
		EGLSamplerData_CompareFunc = 0x8,
		EGLSamplerData_Num = 0x9,
	};
}

namespace FAnalytics
{
	enum BuildType
	{
		Development = 0x0,
		Test = 0x1,
		Debug = 0x2,
		Release = 0x3,
	};
}

namespace FCsvParser
{
	enum EParseResult
	{
		EndOfCell = 0x0,
		EndOfRow = 0x1,
		EndOfString = 0x2,
	};
}

enum class ETextureStreamingType
{
	StreamType_Static = 0x0,
	StreamType_Dynamic = 0x1,
	StreamType_Forced = 0x2,
	StreamType_LastRenderTime = 0x3,
	StreamType_Orphaned = 0x4,
	StreamType_Other = 0x5,
};

namespace ETaskbarProgressState
{
	enum Type
	{
		NoProgress = 0x0,
		Indeterminate = 0x1,
		Normal = 0x2,
		Error = 0x4,
		Paused = 0x8,
	};
}

enum class FPSChartStats
{
	STAT_FPSChartFirstStat = 0x0,
};

enum class EAudioStreamingState
{
	AudioState_ReadyFor_Requests = 0x0,
	AudioState_ReadyFor_Finalization = 0x1,
	AudioState_InProgress_Loading = 0x2,
};

namespace EEnvTestCondition
{
	enum Type
	{
		NoCondition = 0x0,
		AtLeast = 0x1,
		UpTo = 0x2,
		Match = 0x3,
	};
}

enum class InternetCookieState
{
	COOKIE_STATE_UNKNOWN = 0x0,
	COOKIE_STATE_ACCEPT = 0x1,
	COOKIE_STATE_PROMPT = 0x2,
	COOKIE_STATE_LEASH = 0x3,
	COOKIE_STATE_DOWNGRADE = 0x4,
	COOKIE_STATE_REJECT = 0x5,
	COOKIE_STATE_MAX = 0x5,
};

enum class CURLversion
{
	CURLVERSION_FIRST = 0x0,
	CURLVERSION_SECOND = 0x1,
	CURLVERSION_THIRD = 0x2,
	CURLVERSION_FOURTH = 0x3,
	CURLVERSION_LAST = 0x4,
};

enum class CURLMcode
{
	CURLM_CALL_MULTI_PERFORM = 0xff,
	CURLM_OK = 0x0,
	CURLM_BAD_HANDLE = 0x1,
	CURLM_BAD_EASY_HANDLE = 0x2,
	CURLM_OUT_OF_MEMORY = 0x3,
	CURLM_INTERNAL_ERROR = 0x4,
	CURLM_BAD_SOCKET = 0x5,
	CURLM_UNKNOWN_OPTION = 0x6,
	CURLM_ADDED_ALREADY = 0x7,
	CURLM_LAST = 0x8,
};

namespace EMovieScenePlayerStatus
{
	enum Type
	{
		Stopped = 0x0,
		Playing = 0x1,
		Recording = 0x2,
		BeginningScrubbing = 0x3,
		Scrubbing = 0x4,
		MAX = 0x5,
	};
}

namespace ETeamAttitude
{
	enum Type
	{
		Friendly = 0x0,
		Neutral = 0x1,
		Hostile = 0x2,
	};
}

namespace ECorePerceptionTypes
{
	enum Type
	{
		Sight = 0x0,
		Hearing = 0x1,
		Damage = 0x2,
		Touch = 0x3,
		Team = 0x4,
		Prediction = 0x5,
		MAX = 0x6,
	};
}

namespace EBTDecoratorLogic
{
	enum Type
	{
		Invalid = 0x0,
		Test = 0x1,
		And = 0x2,
		Or = 0x3,
		Not = 0x4,
	};
}

namespace UAIPerceptionSystem
{
	enum EDelayedStimulusSorting
	{
		RequiresSorting = 0x0,
		NoNeedToSort = 0x1,
	};
}

namespace EBlackboardCompare
{
	enum Type
	{
		Less = 0xff,
		Equal = 0x0,
		Greater = 0x1,
		NotEqual = 0x1,
	};
}

namespace EBlackboardDescription
{
	enum Type
	{
		OnlyValue = 0x0,
		KeyWithValue = 0x1,
		DetailedKeyWithValue = 0x2,
		Full = 0x3,
	};
}

namespace EEnvQueryTestClamping
{
	enum Type
	{
		None = 0x0,
		SpecifiedValue = 0x1,
		FilterThreshold = 0x2,
	};
}

namespace EBlackboardKeyOperation
{
	enum Type
	{
		Basic = 0x0,
		Arithmetic = 0x1,
		Text = 0x2,
	};
}

namespace EBasicKeyOperation
{
	enum Type
	{
		Set = 0x0,
		NotSet = 0x1,
	};
}

namespace EArithmeticKeyOperation
{
	enum Type
	{
		Equal = 0x0,
		NotEqual = 0x1,
		Less = 0x2,
		LessOrEqual = 0x3,
		Greater = 0x4,
		GreaterOrEqual = 0x5,
	};
}

namespace ETextKeyOperation
{
	enum Type
	{
		Equal = 0x0,
		NotEqual = 0x1,
		Contain = 0x2,
		NotContain = 0x3,
	};
}

namespace ESightPerceptionEventName
{
	enum Type
	{
		Undefined = 0x0,
		GainedSight = 0x1,
		LostSight = 0x2,
	};
}

namespace EBTBlackboardRestart
{
	enum Type
	{
		ValueChange = 0x0,
		ResultChange = 0x1,
	};
}

namespace EBlackBoardEntryComparison
{
	enum Type
	{
		Equal = 0x0,
		NotEqual = 0x1,
	};
}

namespace EPathExistanceQueryType
{
	enum Type
	{
		NavmeshRaycast2D = 0x0,
		HierarchicalQuery = 0x1,
		RegularPathFinding = 0x2,
	};
}

namespace EEnvDirection
{
	enum Type
	{
		TwoPoints = 0x0,
		Rotation = 0x1,
	};
}

enum class EBitmapCompression
{
	BCBI_RGB = 0x0,
	BCBI_RLE8 = 0x1,
	BCBI_RLE4 = 0x2,
	BCBI_BITFIELDS = 0x3,
};

namespace EBTParallelChild
{
	enum Type
	{
		MainTask = 0x0,
		BackgroundTree = 0x1,
		SearchIndicator = 0x2,
	};
}

namespace EHostType
{
	enum Type
	{
		Runtime = 0x0,
		RuntimeNoCommandlet = 0x1,
		Developer = 0x2,
		Editor = 0x3,
		EditorNoCommandlet = 0x4,
		Program = 0x5,
		Max = 0x6,
	};
}

enum class EComparisonOp
{
	ECO_Unknown = 0x0,
	ECO_Equal = 0x1,
	ECO_NotEqual = 0x2,
	ECO_Larger = 0x3,
	ECO_LargerThan = 0x4,
	ECO_Smaller = 0x5,
	ECO_SmallerThan = 0x6,
};

enum class EGPUProfileSortMode
{
	EChronological = 0x0,
	ETimeElapsed = 0x1,
	ENumPrims = 0x2,
	ENumVerts = 0x3,
	EMax = 0x4,
};

namespace FOpenGLBase
{
	enum EQueryMode
	{
		QM_Result = 0x0,
		QM_ResultAvailable = 0x1,
	};
}

enum class EOpenGLCurrentContext
{
	CONTEXT_Other = 0xfe,
	CONTEXT_Invalid = 0xff,
	CONTEXT_Shared = 0x0,
	CONTEXT_Rendering = 0x1,
};

enum class EClearType
{
	CT_None = 0x0,
	CT_Depth = 0x1,
	CT_Stencil = 0x2,
	CT_Color = 0x4,
	CT_DepthStencil = 0x3,
};

enum class ESteamNetworkingSendType
{
	k_ESteamNetworkingSendType_Unreliable = 0x0,
	k_ESteamNetworkingSendType_UnreliableNoNagle = 0x1,
	k_ESteamNetworkingSendType_UnreliableNoDelay = 0x3,
	k_ESteamNetworkingSendType_Reliable = 0x8,
	k_ESteamNetworkingSendType_ReliableNoNagle = 0x9,
};

namespace Imf
{
	enum PixelType
	{
		UINT = 0x0,
		HALF = 0x1,
		FLOAT = 0x2,
		NUM_PIXELTYPES = 0x3,
	};
}

namespace FGlobalTexturePool
{
	enum EInternalFormat
	{
		IF_DXT1 = 0x0,
		IF_DXT5 = 0x1,
		IF_BC5 = 0x2,
		IF_Max = 0x3,
	};
}

enum class ObstacleState
{
	DT_OBSTACLE_EMPTY = 0x0,
	DT_OBSTACLE_PROCESSING = 0x1,
	DT_OBSTACLE_PROCESSED = 0x2,
	DT_OBSTACLE_REMOVING = 0x3,
};

enum class EdgeValues
{
	UNDEF = 0xff,
	HULL = 0xfe,
};

enum class dtRegionPartitioning
{
	DT_REGION_MONOTONE = 0x0,
	DT_REGION_WATERSHED = 0x1,
	DT_REGION_CHUNKY = 0x2,
};

enum class dtNodeFlags
{
	DT_NODE_OPEN = 0x1,
	DT_NODE_CLOSED = 0x2,
};

enum class ELaunchOptionType
{
	k_ELaunchOptionType_None = 0x0,
	k_ELaunchOptionType_Default = 0x1,
	k_ELaunchOptionType_SafeMode = 0x2,
	k_ELaunchOptionType_Multiplayer = 0x3,
	k_ELaunchOptionType_Config = 0x4,
	k_ELaunchOptionType_OpenVR = 0x5,
	k_ELaunchOptionType_Server = 0x6,
	k_ELaunchOptionType_Editor = 0x7,
	k_ELaunchOptionType_Manual = 0x8,
	k_ELaunchOptionType_Benchmark = 0x9,
	k_ELaunchOptionType_Option1 = 0xa,
	k_ELaunchOptionType_Option2 = 0xb,
	k_ELaunchOptionType_Option3 = 0xc,
	k_ELaunchOptionType_OculusVR = 0xd,
	k_ELaunchOptionType_OpenVROverlay = 0xe,
	k_ELaunchOptionType_OSVR = 0xf,
	k_ELaunchOptionType_Dialog = 0x3e8,
};

enum class EVRHMDType
{
	k_eEVRHMDType_None = 0xff,
	k_eEVRHMDType_Unknown = 0x0,
	k_eEVRHMDType_HTC_Dev = 0x1,
	k_eEVRHMDType_HTC_VivePre = 0x2,
	k_eEVRHMDType_HTC_Vive = 0x3,
	k_eEVRHMDType_HTC_Unknown = 0x14,
	k_eEVRHMDType_Oculus_DK1 = 0x15,
	k_eEVRHMDType_Oculus_DK2 = 0x16,
	k_eEVRHMDType_Oculus_Rift = 0x17,
	k_eEVRHMDType_Oculus_Unknown = 0x28,
};

namespace ESocketInternalState
{
	enum Param
	{
		CanRead = 0x0,
		CanWrite = 0x1,
		HasError = 0x2,
	};
}

namespace ESocketInternalState
{
	enum Return
	{
		Yes = 0x0,
		No = 0x1,
		EncounteredError = 0x2,
	};
}

enum class ESteamNetworkingConfigurationValue
{
	k_ESteamNetworkingConfigurationValue_FakeMessageLoss_Send = 0x0,
	k_ESteamNetworkingConfigurationValue_FakeMessageLoss_Recv = 0x1,
	k_ESteamNetworkingConfigurationValue_FakePacketLoss_Send = 0x2,
	k_ESteamNetworkingConfigurationValue_FakePacketLoss_Recv = 0x3,
	k_ESteamNetworkingConfigurationValue_FakePacketLag_Send = 0x4,
	k_ESteamNetworkingConfigurationValue_FakePacketLag_Recv = 0x5,
	k_ESteamNetworkingConfigurationValue_FakePacketReorder_Send = 0x6,
	k_ESteamNetworkingConfigurationValue_FakePacketReorder_Recv = 0x7,
	k_ESteamNetworkingConfigurationValue_FakePacketReorder_Time = 0x8,
	k_ESteamNetworkingConfigurationValue_SendBufferSize = 0x9,
	k_ESteamNetworkingConfigurationValue_MaxRate = 0xa,
	k_ESteamNetworkingConfigurationValue_MinRate = 0xb,
	k_ESteamNetworkingConfigurationValue_Nagle_Time = 0xc,
	k_ESteamNetworkingConfigurationValue_LogLevel_AckRTT = 0xd,
	k_ESteamNetworkingConfigurationValue_LogLevel_Packet = 0xe,
	k_ESteamNetworkingConfigurationValue_LogLevel_Message = 0xf,
	k_ESteamNetworkingConfigurationValue_LogLevel_PacketGaps = 0x10,
	k_ESteamNetworkingConfigurationValue_LogLevel_P2PRendezvous = 0x11,
	k_ESteamNetworkingConfigurationValue_LogLevel_RelayPings = 0x12,
	k_ESteamNetworkingConfigurationValue_ClientConsecutitivePingTimeoutsFailInitial = 0x13,
	k_ESteamNetworkingConfigurationValue_ClientConsecutitivePingTimeoutsFail = 0x14,
	k_ESteamNetworkingConfigurationValue_ClientMinPingsBeforePingAccurate = 0x15,
	k_ESteamNetworkingConfigurationValue_ClientSingleSocket = 0x16,
	k_ESteamNetworkingConfigurationValue_IP_Allow_Without_Auth = 0x17,
	k_ESteamNetworkingConfigurationValue_Timeout_Seconds_Initial = 0x18,
	k_ESteamNetworkingConfigurationValue_Timeout_Seconds_Connected = 0x19,
	k_ESteamNetworkingConfigurationValue_Count = 0x1a,
};

namespace SWidgetGallery
{
	enum ERadioChoice
	{
		Radio0 = 0x0,
		Radio1 = 0x1,
		Radio2 = 0x2,
	};
}

enum class EColorPickerModes
{
	Spectrum = 0x0,
	Wheel = 0x1,
};

namespace FSyntaxTokenizer
{
	enum ETokenType
	{
		Syntax = 0x0,
		Literal = 0x1,
	};
}

namespace SDockingTabStack
{
	enum EChromeElement
	{
		Icon = 0x0,
		Controls = 0x1,
	};
}

namespace MilPixelFormat
{
	enum Enum
	{
		DontCare = 0x0,
	};
}

namespace EExtensionType
{
	enum Type
	{
		MenuBar = 0x0,
		Menu = 0x1,
		ToolBar = 0x2,
	};
}

namespace FWindowsTextInputMethodSystem
{
	enum EAPI
	{
		Unknown = 0x0,
		IMM = 0x1,
		TSF = 0x2,
	};
}

namespace FInternationalizationArchive
{
	enum EFormatVersion
	{
		Initial = 0x0,
		EscapeFixes = 0x1,
		LatestPlusOne = 0x2,
		Latest = 0x1,
	};
}

enum class FAmazonS3GetObjectStatus
{
	GetObject_NotStarted = 0x0,
	GetObject_Downloading = 0x1,
	GetObject_Done = 0x2,
	GetObject_Errored = 0x3,
};

namespace EProjectDescriptorVersion
{
	enum Type
	{
		Invalid = 0x0,
		Initial = 0x1,
		NameHash = 0x2,
		ProjectPluginUnification = 0x3,
		LatestPlusOne = 0x4,
		Latest = 0x3,
	};
}

namespace ELoadingPhase
{
	enum Type
	{
		Default = 0x0,
		PostDefault = 0x1,
		PreDefault = 0x2,
		PostConfigInit = 0x3,
		PreLoadingScreen = 0x4,
		PostEngineInit = 0x5,
		Max = 0x6,
	};
}

enum class UDisplayContext
{
	UDISPCTX_STANDARD_NAMES = 0x0,
	UDISPCTX_DIALECT_NAMES = 0x1,
	UDISPCTX_CAPITALIZATION_NONE = 0x100,
	UDISPCTX_CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE = 0x101,
	UDISPCTX_CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE = 0x102,
	UDISPCTX_CAPITALIZATION_FOR_UI_LIST_OR_MENU = 0x103,
	UDISPCTX_CAPITALIZATION_FOR_STANDALONE = 0x104,
};

namespace EPluginLoadedFrom
{
	enum Type
	{
		Engine = 0x0,
		GameProject = 0x1,
	};
}

namespace EWindowsDragDropOperationType
{
	enum Type
	{
		DragEnter = 0x0,
		DragOver = 0x1,
		DragLeave = 0x2,
		Drop = 0x3,
	};
}

enum class WICNamedWhitePoint
{
	WICWhitePointDefault = 0x1,
	WICWhitePointDaylight = 0x2,
	WICWhitePointCloudy = 0x4,
	WICWhitePointShade = 0x8,
	WICWhitePointTungsten = 0x10,
	WICWhitePointFluorescent = 0x20,
	WICWhitePointFlash = 0x40,
	WICWhitePointUnderwater = 0x80,
	WICWhitePointCustom = 0x100,
	WICWhitePointAutoWhiteBalance = 0x200,
};

enum class WICColorContextType
{
	WICColorContextUninitialized = 0x0,
	WICColorContextProfile = 0x1,
	WICColorContextExifColorSpace = 0x2,
};

namespace ELocMetadataType
{
	enum Type
	{
		None = 0x0,
		Boolean = 0x1,
		String = 0x2,
		Array = 0x3,
		Object = 0x4,
	};
}

enum class UErrorCode
{
	U_USING_FALLBACK_WARNING = 0x80,
};

namespace FInternationalizationManifest
{
	enum EFormatVersion
	{
		Initial = 0x0,
		EscapeFixes = 0x1,
		LatestPlusOne = 0x2,
		Latest = 0x1,
	};
}

enum class UCalendarType
{
	UCAL_TRADITIONAL = 0x0,
};

enum class UNormalizationMode
{
	UNORM_NONE = 0x1,
	UNORM_NFD = 0x2,
	UNORM_NFKD = 0x3,
	UNORM_NFC = 0x4,
	UNORM_DEFAULT = 0x4,
	UNORM_NFKC = 0x5,
	UNORM_FCD = 0x6,
	UNORM_MODE_COUNT = 0x7,
};

enum class UScriptCode
{
	USCRIPT_INVALID_CODE = 0xff,
	USCRIPT_COMMON = 0x0,
	USCRIPT_INHERITED = 0x1,
	USCRIPT_ARABIC = 0x2,
	USCRIPT_ARMENIAN = 0x3,
	USCRIPT_BENGALI = 0x4,
	USCRIPT_BOPOMOFO = 0x5,
	USCRIPT_CHEROKEE = 0x6,
	USCRIPT_COPTIC = 0x7,
	USCRIPT_CYRILLIC = 0x8,
	USCRIPT_DESERET = 0x9,
	USCRIPT_DEVANAGARI = 0xa,
	USCRIPT_ETHIOPIC = 0xb,
	USCRIPT_GEORGIAN = 0xc,
	USCRIPT_GOTHIC = 0xd,
	USCRIPT_GREEK = 0xe,
	USCRIPT_GUJARATI = 0xf,
	USCRIPT_GURMUKHI = 0x10,
	USCRIPT_HAN = 0x11,
	USCRIPT_HANGUL = 0x12,
	USCRIPT_HEBREW = 0x13,
	USCRIPT_HIRAGANA = 0x14,
	USCRIPT_KANNADA = 0x15,
	USCRIPT_KATAKANA = 0x16,
	USCRIPT_KHMER = 0x17,
	USCRIPT_LAO = 0x18,
	USCRIPT_LATIN = 0x19,
	USCRIPT_MALAYALAM = 0x1a,
	USCRIPT_MONGOLIAN = 0x1b,
	USCRIPT_MYANMAR = 0x1c,
	USCRIPT_OGHAM = 0x1d,
	USCRIPT_OLD_ITALIC = 0x1e,
	USCRIPT_ORIYA = 0x1f,
	USCRIPT_RUNIC = 0x20,
	USCRIPT_SINHALA = 0x21,
	USCRIPT_SYRIAC = 0x22,
	USCRIPT_TAMIL = 0x23,
	USCRIPT_TELUGU = 0x24,
	USCRIPT_THAANA = 0x25,
	USCRIPT_THAI = 0x26,
	USCRIPT_TIBETAN = 0x27,
	USCRIPT_CANADIAN_ABORIGINAL = 0x28,
	USCRIPT_UCAS = 0x28,
	USCRIPT_YI = 0x29,
	USCRIPT_TAGALOG = 0x2a,
	USCRIPT_HANUNOO = 0x2b,
	USCRIPT_BUHID = 0x2c,
	USCRIPT_TAGBANWA = 0x2d,
	USCRIPT_BRAILLE = 0x2e,
	USCRIPT_CYPRIOT = 0x2f,
	USCRIPT_LIMBU = 0x30,
	USCRIPT_LINEAR_B = 0x31,
	USCRIPT_OSMANYA = 0x32,
	USCRIPT_SHAVIAN = 0x33,
	USCRIPT_TAI_LE = 0x34,
	USCRIPT_UGARITIC = 0x35,
	USCRIPT_KATAKANA_OR_HIRAGANA = 0x36,
	USCRIPT_BUGINESE = 0x37,
	USCRIPT_GLAGOLITIC = 0x38,
	USCRIPT_KHAROSHTHI = 0x39,
	USCRIPT_SYLOTI_NAGRI = 0x3a,
	USCRIPT_NEW_TAI_LUE = 0x3b,
	USCRIPT_TIFINAGH = 0x3c,
	USCRIPT_OLD_PERSIAN = 0x3d,
	USCRIPT_BALINESE = 0x3e,
	USCRIPT_BATAK = 0x3f,
	USCRIPT_BLISSYMBOLS = 0x40,
	USCRIPT_BRAHMI = 0x41,
	USCRIPT_CHAM = 0x42,
	USCRIPT_CIRTH = 0x43,
	USCRIPT_OLD_CHURCH_SLAVONIC_CYRILLIC = 0x44,
	USCRIPT_DEMOTIC_EGYPTIAN = 0x45,
	USCRIPT_HIERATIC_EGYPTIAN = 0x46,
	USCRIPT_EGYPTIAN_HIEROGLYPHS = 0x47,
	USCRIPT_KHUTSURI = 0x48,
	USCRIPT_SIMPLIFIED_HAN = 0x49,
	USCRIPT_TRADITIONAL_HAN = 0x4a,
	USCRIPT_PAHAWH_HMONG = 0x4b,
	USCRIPT_OLD_HUNGARIAN = 0x4c,
	USCRIPT_HARAPPAN_INDUS = 0x4d,
	USCRIPT_JAVANESE = 0x4e,
	USCRIPT_KAYAH_LI = 0x4f,
	USCRIPT_LATIN_FRAKTUR = 0x50,
	USCRIPT_LATIN_GAELIC = 0x51,
	USCRIPT_LEPCHA = 0x52,
	USCRIPT_LINEAR_A = 0x53,
	USCRIPT_MANDAIC = 0x54,
	USCRIPT_MANDAEAN = 0x54,
	USCRIPT_MAYAN_HIEROGLYPHS = 0x55,
	USCRIPT_MEROITIC_HIEROGLYPHS = 0x56,
	USCRIPT_MEROITIC = 0x56,
	USCRIPT_NKO = 0x57,
	USCRIPT_ORKHON = 0x58,
	USCRIPT_OLD_PERMIC = 0x59,
	USCRIPT_PHAGS_PA = 0x5a,
	USCRIPT_PHOENICIAN = 0x5b,
	USCRIPT_MIAO = 0x5c,
	USCRIPT_PHONETIC_POLLARD = 0x5c,
	USCRIPT_RONGORONGO = 0x5d,
	USCRIPT_SARATI = 0x5e,
	USCRIPT_ESTRANGELO_SYRIAC = 0x5f,
	USCRIPT_WESTERN_SYRIAC = 0x60,
	USCRIPT_EASTERN_SYRIAC = 0x61,
	USCRIPT_TENGWAR = 0x62,
	USCRIPT_VAI = 0x63,
	USCRIPT_VISIBLE_SPEECH = 0x64,
	USCRIPT_CUNEIFORM = 0x65,
	USCRIPT_UNWRITTEN_LANGUAGES = 0x66,
	USCRIPT_UNKNOWN = 0x67,
	USCRIPT_CARIAN = 0x68,
	USCRIPT_JAPANESE = 0x69,
	USCRIPT_LANNA = 0x6a,
	USCRIPT_LYCIAN = 0x6b,
	USCRIPT_LYDIAN = 0x6c,
	USCRIPT_OL_CHIKI = 0x6d,
	USCRIPT_REJANG = 0x6e,
	USCRIPT_SAURASHTRA = 0x6f,
	USCRIPT_SIGN_WRITING = 0x70,
	USCRIPT_SUNDANESE = 0x71,
	USCRIPT_MOON = 0x72,
	USCRIPT_MEITEI_MAYEK = 0x73,
	USCRIPT_IMPERIAL_ARAMAIC = 0x74,
	USCRIPT_AVESTAN = 0x75,
	USCRIPT_CHAKMA = 0x76,
	USCRIPT_KOREAN = 0x77,
	USCRIPT_KAITHI = 0x78,
	USCRIPT_MANICHAEAN = 0x79,
	USCRIPT_INSCRIPTIONAL_PAHLAVI = 0x7a,
	USCRIPT_PSALTER_PAHLAVI = 0x7b,
	USCRIPT_BOOK_PAHLAVI = 0x7c,
	USCRIPT_INSCRIPTIONAL_PARTHIAN = 0x7d,
	USCRIPT_SAMARITAN = 0x7e,
	USCRIPT_TAI_VIET = 0x7f,
	USCRIPT_MATHEMATICAL_NOTATION = 0x80,
	USCRIPT_SYMBOLS = 0x81,
	USCRIPT_BAMUM = 0x82,
	USCRIPT_LISU = 0x83,
	USCRIPT_NAKHI_GEBA = 0x84,
	USCRIPT_OLD_SOUTH_ARABIAN = 0x85,
	USCRIPT_BASSA_VAH = 0x86,
	USCRIPT_DUPLOYAN_SHORTAND = 0x87,
	USCRIPT_ELBASAN = 0x88,
	USCRIPT_GRANTHA = 0x89,
	USCRIPT_KPELLE = 0x8a,
	USCRIPT_LOMA = 0x8b,
	USCRIPT_MENDE = 0x8c,
	USCRIPT_MEROITIC_CURSIVE = 0x8d,
	USCRIPT_OLD_NORTH_ARABIAN = 0x8e,
	USCRIPT_NABATAEAN = 0x8f,
	USCRIPT_PALMYRENE = 0x90,
	USCRIPT_SINDHI = 0x91,
	USCRIPT_WARANG_CITI = 0x92,
	USCRIPT_AFAKA = 0x93,
	USCRIPT_JURCHEN = 0x94,
	USCRIPT_MRO = 0x95,
	USCRIPT_NUSHU = 0x96,
	USCRIPT_SHARADA = 0x97,
	USCRIPT_SORA_SOMPENG = 0x98,
	USCRIPT_TAKRI = 0x99,
	USCRIPT_TANGUT = 0x9a,
	USCRIPT_WOLEAI = 0x9b,
	USCRIPT_ANATOLIAN_HIEROGLYPHS = 0x9c,
	USCRIPT_KHOJKI = 0x9d,
	USCRIPT_TIRHUTA = 0x9e,
	USCRIPT_CAUCASIAN_ALBANIAN = 0x9f,
	USCRIPT_MAHAJANI = 0xa0,
	USCRIPT_CODE_LIMIT = 0xa1,
};

enum class UCharNameChoice
{
	U_UNICODE_CHAR_NAME = 0x0,
	U_UNICODE_10_CHAR_NAME = 0x1,
	U_EXTENDED_CHAR_NAME = 0x2,
	U_CHAR_NAME_ALIAS = 0x3,
	U_CHAR_NAME_CHOICE_COUNT = 0x4,
};

enum class UDateFormatStyle
{
	UDAT_FULL = 0x0,
	UDAT_LONG = 0x1,
	UDAT_MEDIUM = 0x2,
	UDAT_SHORT = 0x3,
	UDAT_DEFAULT = 0x2,
	UDAT_RELATIVE = 0x80,
	UDAT_FULL_RELATIVE = 0x80,
	UDAT_LONG_RELATIVE = 0x81,
	UDAT_MEDIUM_RELATIVE = 0x82,
	UDAT_SHORT_RELATIVE = 0x83,
	UDAT_NONE = 0xff,
	UDAT_PATTERN = 0xfe,
	UDAT_IGNORE = 0xfe,
};

enum class UDateFormatBooleanAttribute
{
	UDAT_PARSE_ALLOW_WHITESPACE = 0x0,
	UDAT_PARSE_ALLOW_NUMERIC = 0x1,
	UDAT_PARSE_PARTIAL_MATCH = 0x2,
	UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH = 0x3,
	UDAT_BOOLEAN_ATTRIBUTE_COUNT = 0x4,
};

enum class UColAttribute
{
	UCOL_FRENCH_COLLATION = 0x0,
	UCOL_ALTERNATE_HANDLING = 0x1,
	UCOL_CASE_FIRST = 0x2,
	UCOL_CASE_LEVEL = 0x3,
	UCOL_NORMALIZATION_MODE = 0x4,
	UCOL_DECOMPOSITION_MODE = 0x4,
	UCOL_STRENGTH = 0x5,
	UCOL_HIRAGANA_QUATERNARY_MODE = 0x6,
	UCOL_NUMERIC_COLLATION = 0x7,
	UCOL_ATTRIBUTE_COUNT = 0x8,
};

enum class ULineBreak
{
	U_LB_UNKNOWN = 0x0,
	U_LB_AMBIGUOUS = 0x1,
	U_LB_ALPHABETIC = 0x2,
	U_LB_BREAK_BOTH = 0x3,
	U_LB_BREAK_AFTER = 0x4,
	U_LB_BREAK_BEFORE = 0x5,
	U_LB_MANDATORY_BREAK = 0x6,
	U_LB_CONTINGENT_BREAK = 0x7,
	U_LB_CLOSE_PUNCTUATION = 0x8,
	U_LB_COMBINING_MARK = 0x9,
	U_LB_CARRIAGE_RETURN = 0xa,
	U_LB_EXCLAMATION = 0xb,
	U_LB_GLUE = 0xc,
	U_LB_HYPHEN = 0xd,
	U_LB_IDEOGRAPHIC = 0xe,
	U_LB_INSEPARABLE = 0xf,
	U_LB_INSEPERABLE = 0xf,
	U_LB_INFIX_NUMERIC = 0x10,
	U_LB_LINE_FEED = 0x11,
	U_LB_NONSTARTER = 0x12,
	U_LB_NUMERIC = 0x13,
	U_LB_OPEN_PUNCTUATION = 0x14,
	U_LB_POSTFIX_NUMERIC = 0x15,
	U_LB_PREFIX_NUMERIC = 0x16,
	U_LB_QUOTATION = 0x17,
	U_LB_COMPLEX_CONTEXT = 0x18,
	U_LB_SURROGATE = 0x19,
	U_LB_SPACE = 0x1a,
	U_LB_BREAK_SYMBOLS = 0x1b,
	U_LB_ZWSPACE = 0x1c,
	U_LB_NEXT_LINE = 0x1d,
	U_LB_WORD_JOINER = 0x1e,
	U_LB_H2 = 0x1f,
	U_LB_H3 = 0x20,
	U_LB_JL = 0x21,
	U_LB_JT = 0x22,
	U_LB_JV = 0x23,
	U_LB_CLOSE_PARENTHESIS = 0x24,
	U_LB_CONDITIONAL_JAPANESE_STARTER = 0x25,
	U_LB_HEBREW_LETTER = 0x26,
	U_LB_REGIONAL_INDICATOR = 0x27,
	U_LB_COUNT = 0x28,
};

enum class UNumberFormatRoundingMode
{
	UNUM_ROUND_CEILING = 0x0,
	UNUM_ROUND_FLOOR = 0x1,
	UNUM_ROUND_DOWN = 0x2,
	UNUM_ROUND_UP = 0x3,
	UNUM_ROUND_HALFEVEN = 0x4,
	UNUM_FOUND_HALFEVEN = 0x4,
	UNUM_ROUND_HALFDOWN = 0x5,
	UNUM_ROUND_HALFUP = 0x6,
	UNUM_ROUND_UNNECESSARY = 0x7,
};

enum class UCurrencySpacing
{
	UNUM_CURRENCY_MATCH = 0x0,
	UNUM_CURRENCY_SURROUNDING_MATCH = 0x1,
	UNUM_CURRENCY_INSERT = 0x2,
	UNUM_CURRENCY_SPACING_COUNT = 0x3,
};

enum class UNumberFormatAttribute
{
	UNUM_PARSE_INT_ONLY = 0x0,
	UNUM_GROUPING_USED = 0x1,
	UNUM_DECIMAL_ALWAYS_SHOWN = 0x2,
	UNUM_MAX_INTEGER_DIGITS = 0x3,
	UNUM_MIN_INTEGER_DIGITS = 0x4,
	UNUM_INTEGER_DIGITS = 0x5,
	UNUM_MAX_FRACTION_DIGITS = 0x6,
	UNUM_MIN_FRACTION_DIGITS = 0x7,
	UNUM_FRACTION_DIGITS = 0x8,
	UNUM_MULTIPLIER = 0x9,
	UNUM_GROUPING_SIZE = 0xa,
	UNUM_ROUNDING_MODE = 0xb,
	UNUM_ROUNDING_INCREMENT = 0xc,
	UNUM_FORMAT_WIDTH = 0xd,
	UNUM_PADDING_POSITION = 0xe,
	UNUM_SECONDARY_GROUPING_SIZE = 0xf,
	UNUM_SIGNIFICANT_DIGITS_USED = 0x10,
	UNUM_MIN_SIGNIFICANT_DIGITS = 0x11,
	UNUM_MAX_SIGNIFICANT_DIGITS = 0x12,
	UNUM_LENIENT_PARSE = 0x13,
	UNUM_PARSE_ALL_INPUT = 0x14,
	UNUM_SCALE = 0x15,
	UNUM_NUMERIC_ATTRIBUTE_COUNT = 0x16,
	UNUM_MAX_NONBOOLEAN_ATTRIBUTE = 0xfff,
	UNUM_FORMAT_FAIL_IF_MORE_THAN_MAX_DIGITS = 0x1000,
	UNUM_PARSE_NO_EXPONENT = 0x1001,
	UNUM_LIMIT_BOOLEAN_ATTRIBUTE = 0x1002,
};

namespace FCamelCaseBreakIterator
{
	enum ETokenType
	{
		Uppercase = 0x0,
		Lowercase = 0x1,
		Digit = 0x2,
		Null = 0x3,
		Other = 0x4,
	};
}

enum class UNumberFormatAttributeValue
{
	UNUM_NO = 0x0,
	UNUM_YES = 0x1,
	UNUM_MAYBE = 0x2,
};

enum class UCalendarDaysOfWeek
{
	UCAL_SUNDAY = 0x1,
	UCAL_MONDAY = 0x2,
	UCAL_TUESDAY = 0x3,
	UCAL_WEDNESDAY = 0x4,
	UCAL_THURSDAY = 0x5,
	UCAL_FRIDAY = 0x6,
	UCAL_SATURDAY = 0x7,
};

enum class UCalendarWeekdayType
{
	UCAL_WEEKDAY = 0x0,
	UCAL_WEEKEND = 0x1,
	UCAL_WEEKEND_ONSET = 0x2,
	UCAL_WEEKEND_CEASE = 0x3,
};

enum class EEventPoolTypes
{
	AutoReset = 0x0,
	ManualReset = 0x1,
};

enum class UConverterType
{
	UCNV_UNSUPPORTED_CONVERTER = 0xff,
	UCNV_SBCS = 0x0,
	UCNV_DBCS = 0x1,
	UCNV_MBCS = 0x2,
	UCNV_LATIN_1 = 0x3,
	UCNV_UTF8 = 0x4,
	UCNV_UTF16_BigEndian = 0x5,
	UCNV_UTF16_LittleEndian = 0x6,
	UCNV_UTF32_BigEndian = 0x7,
	UCNV_UTF32_LittleEndian = 0x8,
	UCNV_EBCDIC_STATEFUL = 0x9,
	UCNV_ISO_2022 = 0xa,
	UCNV_LMBCS_1 = 0xb,
	UCNV_LMBCS_2 = 0xc,
	UCNV_LMBCS_3 = 0xd,
	UCNV_LMBCS_4 = 0xe,
	UCNV_LMBCS_5 = 0xf,
	UCNV_LMBCS_6 = 0x10,
	UCNV_LMBCS_8 = 0x11,
	UCNV_LMBCS_11 = 0x12,
	UCNV_LMBCS_16 = 0x13,
	UCNV_LMBCS_17 = 0x14,
	UCNV_LMBCS_18 = 0x15,
	UCNV_LMBCS_19 = 0x16,
	UCNV_LMBCS_LAST = 0x16,
	UCNV_HZ = 0x17,
	UCNV_SCSU = 0x18,
	UCNV_ISCII = 0x19,
	UCNV_US_ASCII = 0x1a,
	UCNV_UTF7 = 0x1b,
	UCNV_BOCU1 = 0x1c,
	UCNV_UTF16 = 0x1d,
	UCNV_UTF32 = 0x1e,
	UCNV_CESU8 = 0x1f,
	UCNV_IMAP_MAILBOX = 0x20,
	UCNV_COMPOUND_TEXT = 0x21,
	UCNV_NUMBER_OF_SUPPORTED_CONVERTER_TYPES = 0x22,
};

enum class UMessagePatternArgType
{
	UMSGPAT_ARG_TYPE_NONE = 0x0,
	UMSGPAT_ARG_TYPE_SIMPLE = 0x1,
	UMSGPAT_ARG_TYPE_CHOICE = 0x2,
	UMSGPAT_ARG_TYPE_PLURAL = 0x3,
	UMSGPAT_ARG_TYPE_SELECT = 0x4,
	UMSGPAT_ARG_TYPE_SELECTORDINAL = 0x5,
};

enum class ETmMessageFlags
{
	TMP_MF_SEVERITY_LOG = 0x1,
	TMP_MF_SEVERITY_WARNING = 0x2,
	TMP_MF_SEVERITY_ERROR = 0x4,
	TMP_MF_SEVERITY_RESERVED = 0x8,
	TMP_MF_SEVERITY_MASK = 0xf,
	TMP_MF_ZONE_LABEL = 0x10,
	TMP_MF_ZONE_SUBLABEL = 0x20,
	TMP_MF_ZONE_SHOW_IN_PARENTS = 0x40,
	TMP_MF_ZONE_RESERVED01 = 0x80,
	TMP_MF_ZONE_MASK = 0xf0,
};

enum class UDataFileAccess
{
	UDATA_FILES_FIRST = 0x0,
};

enum class UBreakIteratorType
{
	UBRK_CHARACTER = 0x0,
	UBRK_WORD = 0x1,
	UBRK_LINE = 0x2,
	UBRK_SENTENCE = 0x3,
	UBRK_TITLE = 0x4,
	UBRK_COUNT = 0x5,
};

enum class UPluralType
{
	UPLURAL_TYPE_CARDINAL = 0x0,
	UPLURAL_TYPE_ORDINAL = 0x1,
	UPLURAL_TYPE_COUNT = 0x2,
};

namespace OVR
{
	enum AxisDirection
	{
		Axis_Up = 0x2,
		Axis_Down = 0xfe,
		Axis_Right = 0x1,
		Axis_Left = 0xff,
		Axis_In = 0x3,
		Axis_Out = 0xfd,
	};
}

enum class EAmazonS3MultipartUploadStatus
{
	NotStarted = 0x0,
	Uploading = 0x1,
	Done = 0x2,
	Errored = 0x3,
};

namespace OVR
{
	enum Axis
	{
		Axis_X = 0x0,
		Axis_Y = 0x1,
		Axis_Z = 0x2,
	};
}

enum class DLAttr
{
	dlattrRva = 0x1,
};

namespace XAPOBaseWaveHlpNameSpace
{
	enum WaveFmtSize
	{
		FmtReadSize = 0x0,
		FmtWriteSize = 0x1,
	};
}

namespace OAPIPELINE
{
	enum EAudioFormat
	{
		PCM_INT8 = 0x0,
		PCM_INT16 = 0x1,
		PCM_INT20IN24 = 0x2,
		PCM_INT20IN32 = 0x3,
		PCM_INT24IN24 = 0x4,
		PCM_INT24IN32 = 0x5,
		PCM_INT32 = 0x6,
		PCM_FLOAT32 = 0x7,
	};
}

namespace FVivoxVoiceChat
{
	enum EConnectionState
	{
		Disconnected = 0x0,
		Disconnecting = 0x1,
		Connecting = 0x2,
		Connected = 0x3,
	};
}

namespace EUdpMessageSegments
{
	enum Type
	{
		None = 0x0,
		Abort = 0x1,
		Acknowledge = 0x2,
		Bye = 0x3,
		Data = 0x4,
		Hello = 0x5,
		Retransmit = 0x6,
		Timeout = 0x7,
	};
}

namespace FHMDSettings
{
	enum EInitStatus
	{
		eNotInitialized = 0x0,
		eStartupExecuted = 0x1,
		eInitialized = 0x2,
	};
}

namespace OVR
{
	enum StereoEye
	{
		StereoEye_Left = 0x0,
		StereoEye_Right = 0x1,
		StereoEye_Center = 0x2,
	};
}

namespace OVR
{
	enum RotateDirection
	{
		Rotate_CCW = 0x1,
		Rotate_CW = 0xff,
	};
}

enum class ETmZoneFlags
{
	TMP_ZF_NONE = 0x0,
	TMP_ZF_STALL = 0x2,
	TMP_ZF_IDLE = 0x4,
	TMP_ZF_CONTEXT_SWITCH = 0x8,
	TMP_ZF_PLOT_TIME = 0x10,
};

enum class PluginStyle
{
	DEFAULT_STYLE = 0x0,
	UNREAL_STYLE = 0x1,
	UNITY_STYLE = 0x2,
	UNITY_STYLE_DEFERRED = 0x3,
};

enum class wrapEncodedKERNEL32Functions
{
	eFlsAlloc = 0x0,
	eFlsFree = 0x1,
	eFlsGetValue = 0x2,
	eFlsSetValue = 0x3,
	eInitializeCriticalSectionEx = 0x4,
	eCreateEventExW = 0x5,
	eCreateSemaphoreExW = 0x6,
	eSetThreadStackGuarantee = 0x7,
	eCreateThreadpoolTimer = 0x8,
	eSetThreadpoolTimer = 0x9,
	eWaitForThreadpoolTimerCallbacks = 0xa,
	eCloseThreadpoolTimer = 0xb,
	eCreateThreadpoolWait = 0xc,
	eSetThreadpoolWait = 0xd,
	eCloseThreadpoolWait = 0xe,
	eFlushProcessWriteBuffers = 0xf,
	eFreeLibraryWhenCallbackReturns = 0x10,
	eGetCurrentProcessorNumber = 0x11,
	eGetLogicalProcessorInformation = 0x12,
	eCreateSymbolicLinkW = 0x13,
	eSetDefaultDllDirectories = 0x14,
	eCompareStringEx = 0x15,
	eEnumSystemLocalesEx = 0x16,
	eGetDateFormatEx = 0x17,
	eGetLocaleInfoEx = 0x18,
	eGetTimeFormatEx = 0x19,
	eGetUserDefaultLocaleName = 0x1a,
	eIsValidLocaleName = 0x1b,
	eLCMapStringEx = 0x1c,
	eGetCurrentPackageId = 0x1d,
	eGetTickCount64 = 0x1e,
	eGetFileInformationByHandleExW = 0x1f,
	eSetFileInformationByHandleW = 0x20,
	eMaxKernel32Function = 0x21,
};

namespace MilBitmapLock
{
	enum FlagsEnum
	{
		Read = 0x1,
		Write = 0x2,
		FORCE_DWORD = 0xff,
	};
}

enum class ContentTypes
{
	ContentTypes_Unknown = 0x0,
	ContentTypes_Video = 0x1,
	ContentTypes_Audio = 0x2,
	ContentTypes_Image = 0x4,
	ContentTypes_All = 0x7,
};

#pragma warning(pop)