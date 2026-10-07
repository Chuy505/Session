#pragma once
#include "CoreMinimal.h"
#include "ESkateboardRotationDirection.generated.h"

UENUM(BlueprintType)
enum class ESkateboardRotationDirection : uint8 {
    SRD_None,
    SRD_Clockwise,
    SRD_CounterClockwise,
};

