#pragma once
#include "CoreMinimal.h"
#include "EDiceTypes.generated.h"

UENUM(BlueprintType)
enum class EDiceTypes : uint8 {
    DT_Undefined,
    DT_Stance,
    DT_Orientation,
    DT_Rotation,
    DT_Trick,
};

