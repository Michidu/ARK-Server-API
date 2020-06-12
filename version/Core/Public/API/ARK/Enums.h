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
		Weapon = 0x9,
		Snapshot = 0xA,
		MAX = 0xB,
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
		TemperatureFortitude = 0xA,
		CraftingSpeedMultiplier = 0xB,
		MAX = 0xC,
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
		Sleeping = 0xA,
		Cold = 0xB,
		Hot = 0xC,
		Crafting = 0xD,
		MAX = 0xE,
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

namespace EPrimalItemMessage
{
	enum Type
	{
		Broken = 0x0,
		Repaired = 0x1,
		MAX = 0x2,
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

namespace EAttachLocation
{
	enum Type
	{
		KeepRelativeOffset = 0x0,
		KeepWorldPosition = 0x1,
		SnapToTarget = 0x2,
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
		Quit = 0x4
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
		MAX = 0xA,
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
		Rock = 0xA,
		Sand = 0xB,
		Snow = 0xC,
		Corruption = 0xD,
		MAX = 0xE,
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

namespace EPathFollowingRequestResult
{
	enum Type
	{
		Failed = 0x0,
		AlreadyAtGoal = 0x1,
		RequestSuccessful = 0x2,
	};
}

namespace EMaxConcurrentResolutionRule
{
	enum Type
	{
		PreventNew = 0x0,
		PreventOldest = 0x1,
		StopFarthestThenPreventNew = 0x2,
		StopFarthestThenOldest = 0x3,
		MAX = 0x4,
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
		BANISHMEMBER = 0xA,
		PET_UNCLAIM = 0xB,
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
		MAX = 0x41,
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

namespace ECameraStyle
{
	enum Type
	{
		
	};
}
