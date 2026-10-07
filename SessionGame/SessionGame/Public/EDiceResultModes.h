#pragma once
#include "CoreMinimal.h"
#include "EDiceResultModes.generated.h"

UENUM(BlueprintType)
enum class EDiceResultModes : uint8 {
    DRM_Common,
    DRM_Individual,
};

