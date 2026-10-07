#pragma once
#include "CoreMinimal.h"
#include "EGOSIdleStates.generated.h"

UENUM(BlueprintType)
enum class EGOSIdleStates : uint8 {
    DoingTricks,
    EndOfTurn,
    ErrorChecking,
};

