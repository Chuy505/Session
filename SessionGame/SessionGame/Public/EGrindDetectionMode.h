#pragma once
#include "CoreMinimal.h"
#include "EGrindDetectionMode.generated.h"

UENUM(BlueprintType)
enum class EGrindDetectionMode : uint8 {
    GDMODE_Undefined,
    GDMODE_InputBased,
    GDMODE_BoardBased,
};

