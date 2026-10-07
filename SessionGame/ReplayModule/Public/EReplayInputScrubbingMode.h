#pragma once
#include "CoreMinimal.h"
#include "EReplayInputScrubbingMode.generated.h"

UENUM(BlueprintType)
enum class EReplayInputScrubbingMode : uint8 {
    RICSM_Analog,
    RICSM_Digital,
};

