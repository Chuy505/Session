#pragma once
#include "CoreMinimal.h"
#include "EMainHUBSplineTimeDirection.generated.h"

UENUM(BlueprintType)
enum class EMainHUBSplineTimeDirection : uint8 {
    None,
    Forward,
    Reverse,
};

