#pragma once
#include "CoreMinimal.h"
#include "EWallRideState.generated.h"

UENUM(BlueprintType)
enum class EWallRideState : uint8 {
    None,
    BackSide,
    FrontSide,
};

