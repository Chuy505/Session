#pragma once
#include "CoreMinimal.h"
#include "EEventValidationType.generated.h"

UENUM(BlueprintType)
enum class EEventValidationType : uint8 {
    NONE,
    TREND,
    TRICK,
};

