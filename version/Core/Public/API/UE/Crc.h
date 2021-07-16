#pragma once

#include "..\Base.h"
#include "BasicTypes.h"
#include "HAL/UnrealMemory.h"
#include "Templates/AreTypesEqual.h"
#include "Templates/UnrealTypeTraits.h"
#include "Templates/UnrealTemplate.h"

struct FCrc
{
    static uint32 MemCrc32(const void* Data, int32 Lenght) { return NativeCall<uint32, const void*, int32>(nullptr, "FCrc.MemCrc32", Data, Lenght); }
};
