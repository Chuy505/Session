#pragma once
#include "CoreMinimal.h"
#include "EReplayScubberBarMode.generated.h"

UENUM(BlueprintType)
enum class EReplayScubberBarMode : uint8 {
    RSBM_None,
    RSBM_Keyframes,
    RSBM_Tags,
};

