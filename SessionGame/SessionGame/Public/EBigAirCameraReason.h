#pragma once
#include "CoreMinimal.h"
#include "EBigAirCameraReason.generated.h"

UENUM(BlueprintType)
enum class EBigAirCameraReason : uint8 {
    BACR_Undefined,
    BACR_BigDrop,
    BACR_BigPop,
    BACR_OverObject,
};

