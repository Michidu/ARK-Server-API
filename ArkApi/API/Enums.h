#pragma once

#include "Base.h"

enum EPrimalEquipmentType
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
