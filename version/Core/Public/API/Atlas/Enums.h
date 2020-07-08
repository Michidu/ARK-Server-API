#pragma once

enum EFullyLoadPackageType;
enum ExpensiveFunctionRegister;

namespace EInventoryDataListType
{
	enum Type
	{
		LocalEquipment = 1,
		LocalQuickSlots = 1 << 2,
		LocalItems = 1 << 3,
		LocalCraftables = 1 << 4,
		RemoteItems = 1 << 8,
		RemoteCraftables = 1 << 9,
		RemoteEquipment = 1 << 10,
		ArkInventory = 1 << 16,
		Droppable = 1 << 17,
		DroppableMinusEquipped = 1 << 18,
		Colors = 1 << 19,
		Brushes = 1 << 20,
		Dyes = 1 << 21,
		Ingredients = 1 << 22,
		Mask_Local = 0xFF,
		Mask_Remote = 0xFF00,
		Mask_LocalInventory = LocalItems | LocalCraftables,
		Mask_RemoteInventory = RemoteItems | RemoteCraftables,
		Mask_LocalDataList = LocalEquipment | Mask_LocalInventory,
		Mask_RemoteDataList = RemoteEquipment | Mask_RemoteInventory,
		Mask_Inventories = Mask_LocalInventory | Mask_RemoteInventory | ArkInventory,
		Mask_Items = LocalItems | RemoteItems,
		Mask_Craftables = LocalCraftables | RemoteCraftables,
		Mask_Equipment = LocalEquipment | RemoteEquipment,
	};
}
namespace EInventorySortType
{
	enum Type
	{
		Default,
		Alphabetical_Asc,
		Alphabetical_Dsc,
		Weight_Asc,
		Weight_Dsc,
		Type_Asc,
		Type_Dsc,
		SpoilTimer_Asc,
		SpoilTimer_Dsc,
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
		XP_SHIPKILL = 0x5,
		XP_DISCOVERY = 0x6,
		MAX = 0x7
	};
}

namespace EBabyCuddleType
{
	enum Type
	{
		PET = 0x0,
		FOOD = 0x1,
		WALK = 0x2,
		MAX = 0x3
	};
}

namespace EAttachLocation
{
	enum Type
	{
		KeepRelativeOffset = 0x0,
		KeepWorldPosition = 0x1,
		SnapToTarget = 0x2
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
		MAX = 0x3
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
		MAX = 0x4
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
		MAX = 0x9
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
		Feat = 0xA,
		MAX = 0xB
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
		Switching = 0x4,
		UnEquipping = 0x5
	};
}

namespace EPathFollowingRequestResult
{
	enum Type
	{
		Failed = 0x0,
		AlreadyAtGoal = 0x1,
		RequestSuccessful = 0x2
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
		Invalid = 0x5
	};
}

namespace EComponentMobility
{
	enum Type
	{
		Static = 0x0,
		Stationary = 0x1,
		Movable = 0x2
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

namespace EOnDesrializationType
{
	enum Type
	{
		SaveGame = 0x0,
		OnePersonTravel = 0x1,
		TopVolumeTravel = 0x2,
		RightVolumeTravel = 0x3,
		BottomVolumeTravel = 0x4,
		LeftVolumeTravel = 0x5,
		MAX = 0x6
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
		MAX = 0x8
	};
}

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

namespace EPrimalItemMessage
{
	enum Type
	{
		Broken = 0x0,
		Repaired = 0x1,
		MAX = 0x2
	};
}

namespace EMatineeCaptureType
{
	enum Type
	{
		AVI = 0x0,
		BMP = 0x1,
		PNG = 0x2,
		JPEG = 0x3
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
		ServerTravelFailure = 0xA,
		ClientTravelFailure = 0xB
	};
}

namespace ETameUnitType
{
	enum Type
	{
		DINOS = 0x0,
		ANCHOREDSHIPS = 0x1,
		UNANCHOREDSHIPS = 0x2,
		MAX = 0x3
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
		All = 0x4
	};
}

namespace ESeamlessVolumeSide
{
	enum Side
	{
		Top = 0x0,
		Bottom = 0x1,
		Left = 0x2,
		Right = 0x3,
		TopLeft = 0x4,
		TopRight = 0x5,
		BottomRight = 0x6,
		BottomLeft = 0x7,
		Side_MAX = 0x8
	};
}

namespace ESaveWorldType
{
	enum Type
	{
		Normal = 0x0,
		Checkpoint = 0x1
	};
}

namespace EEngramDiscipline
{
	enum Type
	{
		SURVIVALISM = 0x0,
		CONSTRUCTION_MERCANTILISM = 0x1,
		BEASTMASTERY = 0x2,
		HAND_TO_HAND_COMBAT = 0x3,
		SWORDSMANSHIP = 0x4,
		ARCHERY_THROWING_WEAPONS = 0x5,
		PISTOLS_RIFLES = 0x6,
		ARMORY = 0x7,
		MEDICINE = 0x8,
		ARTILLERY = 0x9,
		SEAMANSHIP = 0xA,
		CAPTAINEERING = 0xB,
		COOKING_FARMING = 0xC,
		MUSIC_DANCE = 0xD,
		PIRACY = 0xE,
		TAROT = 0xF,
		MAX = 0x10
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
		MAX = 0x4
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
		MAX = 0x9
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
		MAX = 0x4
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
		VitaminA = 0xC,
		VitaminB = 0xD,
		VitaminC = 0xE,
		VitaminD = 0xF,
		MAX = 0x10
	};
}

namespace EShipSize
{
	enum Type
	{
		SHIP_Personal = 0x0,
		SHIP_Mini = 0x1,
		SHIP_Small = 0x2,
		SHIP_Medium = 0x3,
		SHIP_Large = 0x4,
		SHIP_Massive = 0x5,
		SHIP_MAX = 0x6
	};
}

namespace ECaptainOtherActions
{
	enum Type
	{
		ToggleActivationGroup1 = 0x0,
		SwitchAmmoTypeGroup1 = 0x1,
		SwitchAmmoTypeGroup2 = 0x2,
		None = 0x3
	};
}

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
		PET_UNCLAIM = 0xB
	};
}

namespace EWeaponAttackInput
{
	enum Type
	{
		PrimaryInput = 0x0,
		SecondaryInput = 0x1,
		TertiaryInput = 0x2,
		QuaternaryInput = 0x3,
		QuinaryInput = 0x4,
		AltInput = 0x5,
		None = 0x6
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
		VitaminALowest = 0xE,
		VitaminALow = 0xF,
		VitaminAHigh = 0x10,
		VitaminAHighest = 0x11,
		VitaminBLowest = 0x12,
		VitaminBLow = 0x13,
		VitaminBHigh = 0x14,
		VitaminBHighest = 0x15,
		VitaminCLowest = 0x16,
		VitaminCLow = 0x17,
		VitaminCHigh = 0x18,
		VitaminCHighest = 0x19,
		VitaminDLowest = 0x1A,
		VitaminDLow = 0x1B,
		VitaminDHigh = 0x1C,
		VitaminDHighest = 0x1D,
		Overeat = 0x1E,
		Exhausted = 0x1F,
		LowStamina = 0x20,
		CombatState = 0x21,
		Crouching = 0x22,
		Proning = 0x23,
		Overdrink = 0x24,
		Yelling = 0x25,
		MAX = 0x26
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
		MAX = 0x7
	};
}

namespace ECaptainOrder
{
	enum Type
	{
		StandDown = 0x0,
		FreeFire = 0x1,
		AttackMyTarget = 0x2,
		ManualFire = 0x3,
		None = 0x4,
		RedAlert = 0x5,
		UnRedAlert = 0x6
	};
}


namespace EWeaponType
{
	enum Type
	{
		Fist = 0x0,
		OneHanded = 0x1,
		TwoHanded = 0x2,
		Pistol = 0x3,
		MAX = 0x4
	};
}

namespace EWeaponAttackType
{
	enum Type
	{
		FirstAttack = 0x0,
		SecondAttack = 0x1,
		ThirdAttack = 0x2,
		BlockingAttack = 0x3,
		BreakingAttack = 0x4,
		ChargeRun = 0x5,
		PreChargeRun = 0x6,
		FastAttack = 0x7,
		Targeting = 0x8,
		DownBlockingAttack = 0x9,
		ExtraAttack = 0xA,
		None = 0xB
	};
}

namespace ECombatChangeReason
{
	enum Type
	{
		FromInput = 0x0,
		MovementMode = 0x1,
		ForcedChange = 0x2,
		MAX = 0x3
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

namespace EMoveComponentAction
{
	enum Type
	{
		Move = 0x0,
		Stop = 0x1,
		Return = 0x2
	};
}

namespace EQuitPreference
{
	enum Type
	{
	};
}

namespace EActorListsBP
{
	enum Type
	{
	};
}

namespace ESuggestProjVelocityTraceOption
{
	enum Type
	{
	};
}

namespace EOnlineAsyncTaskState
{
	enum Type
	{
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
		MAX = 0x9
	};
}

namespace ESocketWaitConditions
{
	enum Type
	{
		WaitForRead = 0x0,
		WaitForWrite = 0x1,
		WaitForReadOrWrite = 0x2
	};
}

enum ESoilType
{
	SoilType_None = 0x0,
	SoilType_1 = 0x1,
	SoilType_2 = 0x2,
	SoilType_3 = 0x3,
	SoilType_4 = 0x4,
	SoilType_5 = 0x5,
	SoilType_6 = 0x6,
	SoilType_7 = 0x7,
	SoilType_8 = 0x8,
	SoilType_9 = 0x9,
	SoilType_10 = 0xA,
	SoilType_11 = 0xB,
	SoilType_12 = 0xC,
	SoilType_13 = 0xD,
	SoilType_14 = 0xE,
	SoilType_15 = 0xF,
	SoilType_16 = 0x10,
	SoilType_17 = 0x11,
	SoilType_18 = 0x12,
	SoilType_19 = 0x13,
	SoilType_20 = 0x14,
	SoilType_21 = 0x15,
	SoilType_22 = 0x16,
	SoilType_23 = 0x17,
	SoilType_24 = 0x18,
	SoilType_25 = 0x19,
	SoilType_26 = 0x1A,
	SoilType_27 = 0x1B,
	SoilType_28 = 0x1C,
	SoilType_29 = 0x1D,
	SoilType_30 = 0x1E,
	SoilType_31 = 0x1F,
	SoilType_32 = 0x20,
	SoilType_33 = 0x21,
	SoilType_34 = 0x22,
	SoilType_35 = 0x23,
	SoilType_36 = 0x24,
	SoilType_37 = 0x25,
	SoilType_38 = 0x26,
	SoilType_39 = 0x27,
	SoilType_40 = 0x28,
	SoilType_41 = 0x29,
	SoilType_42 = 0x2A,
	SoilType_43 = 0x2B,
	SoilType_44 = 0x2C,
	SoilType_45 = 0x2D,
	SoilType_46 = 0x2E,
	SoilType_47 = 0x2F,
	SoilType_48 = 0x30,
	SoilType_49 = 0x31,
	SoilType_50 = 0x32,
	SoilType_51 = 0x33,
	SoilType_52 = 0x34,
	SoilType_53 = 0x35,
	SoilType_54 = 0x36,
	SoilType_55 = 0x37,
	SoilType_56 = 0x38,
	SoilType_57 = 0x39,
	SoilType_58 = 0x3A,
	SoilType_59 = 0x3B,
	SoilType_60 = 0x3C,
	SoilType_61 = 0x3D,
	SoilType_62 = 0x3E,
	SoilType_63 = 0x3F,
	SoilType_64 = 0x40,
	SoilType_Max = 0x41
};

namespace EChatSendMode
{
	enum Type
	{
		GlobalChat = 0x0,
		ProximityChat = 0x1,
		RadioChat = 0x2,
		GlobalTribeChat = 0x3,
		AllianceChat = 0x4,
		MAX = 0x5
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

namespace EShipType
{
	enum Type
	{
		Default = 0x0,
		Brigantine = 0x1,
		Raft = 0x2,
		Dinghy = 0x3,
		Sloop = 0x4,
		Schooner = 0x5,
		Galleon = 0x6,
		MAX = 0x7
	};
}

namespace ETribeEntityType
{
	enum Type
	{

	};
}