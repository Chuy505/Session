#pragma once
#include "CoreMinimal.h"
#include "EGrindValidationResult.generated.h"

UENUM(BlueprintType)
enum class EGrindValidationResult : uint8 {
    GVR_Bail,
    GVR_Invalid,
    GVR_Pending,
    GVR_Success,
    GVR_RequestingManual,
};

