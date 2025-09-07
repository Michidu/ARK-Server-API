#pragma once
#include "API\UE\UE.h"

__declspec(dllexport) UProperty* UObject::FindProperty(FName name)
{
    for (UProperty* Property = this->ClassField()->PropertyLinkField(); Property = Property->PropertyLinkNextField();)
        if (Property->NameField().Compare(&name) == 0)
            return Property;
    return nullptr;
}
