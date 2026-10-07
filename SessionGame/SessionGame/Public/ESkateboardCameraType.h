#pragma once
#include "CoreMinimal.h"
#include "ESkateboardCameraType.generated.h"

UENUM(BlueprintType)
enum class ESkateboardCameraType : uint8 {
    SCT_Undefined,
    SCT_Near,
    SCT_Mid,
    SCT_Far,
    SCT_Custom,
};

