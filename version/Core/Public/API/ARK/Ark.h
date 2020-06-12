#pragma once

#define _CRT_SECURE_NO_WARNINGS

#ifndef _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#endif

#ifndef ARK_GAME
#define ARK_GAME
#endif

#include "../Base.h"

#include "../UE/Math/Vector.h"
#include "../UE/Math/Rotator.h"
#include "../UE/NetSerialization.h"
#include "../UE/Math/ColorList.h"
#include "../UE/UE.h"
#include "Enums.h"
#include "Inventory.h"
#include "GameMode.h"
#include "GameState.h"
#include "Other.h"
#include "Tribe.h"
#include "Actor.h"
#include "PrimalStructure.h"

#include "../../IApiUtils.h"
#include "../../ICommands.h"
#include "IHooks.h"
#include "Tools.h"
