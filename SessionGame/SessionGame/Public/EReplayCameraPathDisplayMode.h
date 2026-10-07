#pragma once
#include "CoreMinimal.h"
#include "EReplayCameraPathDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EReplayCameraPathDisplayMode : uint8 {
    RCPDM_Off,
    RCPDM_FullPath,
    RCPDM_CustomTimePath,
};

