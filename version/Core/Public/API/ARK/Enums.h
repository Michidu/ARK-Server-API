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
		MAX = 0x9,
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

namespace EXPType
{
	enum Type
	{
		XP_GENERIC = 0x0,
		XP_KILL = 0x1,
		XP_HARVEST = 0x2,
		XP_CRAFT = 0x3,
		XP_SPECIAL = 0x4,
		MAX = 0x5,
	};
}

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
		MAX = 0x9,
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
		MAX = 0x21,
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