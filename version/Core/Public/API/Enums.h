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

namespace ESearchCase
{
	enum Type
	{
		/** Case sensitive. Upper/lower casing must match for strings to be considered equal. */
		CaseSensitive,

		/** Ignore case. Upper/lower casing does not matter when making a comparison. */
		IgnoreCase,
	};
};

namespace ESearchDir
{
	enum Type
	{
		/** Search from the start, moving forward through the string. */
		FromStart,

		/** Search from the end, moving backward through the string. */
		FromEnd,
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

enum EFindName
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

enum ECollisionResponse
{
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX
};

enum ENetMode
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

enum EPhysicalSurface
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

enum ERelativeTransformSpace
{
	RTS_World,
	RTS_Actor,
	RTS_Component
};

enum EMoveComponentFlags
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

enum ETraceTypeQuery
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

enum EInputEvent
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
