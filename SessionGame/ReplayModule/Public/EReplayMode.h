#pragma once
#include "CoreMinimal.h"
#include "EReplayMode.generated.h"

UENUM(BlueprintType)
enum class EReplayMode : uint8 {
    None,
    Recording,
    Replaying,
};

