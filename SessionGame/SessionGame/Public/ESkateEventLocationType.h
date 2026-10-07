#pragma once
#include "CoreMinimal.h"
#include "ESkateEventLocationType.generated.h"

UENUM(BlueprintType)
enum class ESkateEventLocationType : uint8 {
    SELT_Undefined,
    SELT_Tutorial,
    SELT_TutorialBoundray,
    SELT_Challenge,
};

