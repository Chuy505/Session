#pragma once
#include "CoreMinimal.h"
#include "EReplayCameraLensFilterType.generated.h"

UENUM(BlueprintType)
enum class EReplayCameraLensFilterType : uint8 {
    Sepia,
    BlackAndWhite,
    ColorFilterBlue,
    ColorFilterGreen,
};

