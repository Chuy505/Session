#pragma once
#include "CoreMinimal.h"
#include "EFilmerModeCameraLensType.generated.h"

UENUM(BlueprintType)
enum class EFilmerModeCameraLensType : uint8 {
    CLT_None,
    CLT_FisheyeWide,
    CLT_FisheyeConstrained,
    CLT_4_3,
    CLT_VX1000,
    CLT_FisheyeWideVX1000,
    CLT_FisheyeConstrainedVX1000,
    CLT_4_3VX1000,
};

