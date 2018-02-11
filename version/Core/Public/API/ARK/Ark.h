#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "../Base.h"

#include "../UE/Math/Vector.h"
#include "../UE/Math/Rotator.h"
#include "../UE/NetSerialization.h"
#include "../Enums.h"
#include "../UE/UE.h"
#include "Inventory.h"
#include "GameMode.h"
#include "GameState.h"
#include "Other.h"
#include "Tribe.h"
#include "Actor.h"
#include "PrimalStructure.h"

#include "IApiUtils.h"
#include "ICommands.h"
#include "IHooks.h"
#include "Tools.h"

#define DECLARE_HOOK(name, returnType, ...) typedef returnType(__fastcall * name ## _Func)(__VA_ARGS__); \
inline name ## _Func name ## _original; \
returnType __fastcall Hook_ ## name(__VA_ARGS__)
