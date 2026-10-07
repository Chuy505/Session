#pragma once
#include "CoreMinimal.h"
#include "EEventType.generated.h"

UENUM(BlueprintType)
enum class EEventType : uint8 {
    UNDEFINED,
    BAIL,
    GRIND_STARTED,
    LANDED,
    MANUAL_ENDED,
    MANUAL_STARTED,
    MANUAL_POPPED,
    ON_FOOT,
    REVERT_STARTED,
    ROTATION,
    TRICK_STARTED,
    POWERSLIDE,
    CASPER,
    PRIMO,
};

