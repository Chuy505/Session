#pragma once
#include "CoreMinimal.h"
#include "ETRXPlatform.generated.h"

UENUM(BlueprintType)
enum class ETRXPlatform : uint8 {
    PC,
    XboxOne,
    XSX,
    PS4,
    PS5,
    Switch,
};

