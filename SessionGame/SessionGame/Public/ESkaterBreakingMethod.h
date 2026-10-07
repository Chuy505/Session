#pragma once
#include "CoreMinimal.h"
#include "ESkaterBreakingMethod.generated.h"

UENUM(BlueprintType)
enum class ESkaterBreakingMethod : uint8 {
    BREAK_None,
    BREAK_Foot,
    BREAK_Tail,
};

