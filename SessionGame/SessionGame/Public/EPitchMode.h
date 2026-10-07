#pragma once
#include "CoreMinimal.h"
#include "EPitchMode.generated.h"

UENUM(BlueprintType)
enum class EPitchMode : uint8 {
    PM_None,
    PM_TrickStartPitch,
    PM_TrickEndPitch,
    PM_TrickGrindStartPitch,
    PM_TrickGrindEndPitch,
};

