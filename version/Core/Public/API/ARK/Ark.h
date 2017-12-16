#pragma once

#include "../Base.h"

#include "../UE/Vectors.h"
#include "../Enums.h"
#include "../UE/UE.h"
#include "GameMode.h"
#include "GameState.h"
#include "Inventory.h"
#include "Other.h"
#include "Actor.h"
#include "Tribe.h"
#include "PrimalStructure.h"

#define DECLARE_HOOK(name, returnType, ...) typedef returnType(__cdecl * name ## _Func)(__VA_ARGS__); \
name ## _Func name ## _original; \
returnType __cdecl Hook_ ## name(__VA_ARGS__)

namespace Ark
{

}
