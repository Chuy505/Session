#pragma once
#include "CoreMinimal.h"
#include "ETrackedTargetVisualFlags.generated.h"

UENUM(BlueprintType)
enum class ETrackedTargetVisualFlags : uint8 {
    None,
    Icon,
    Area,
};

