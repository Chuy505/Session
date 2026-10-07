#pragma once
#include "CoreMinimal.h"
#include "EObjectDropperCameraModes.generated.h"

UENUM(BlueprintType)
enum class EObjectDropperCameraModes : uint8 {
    ODCM_Inactive,
    ODCM_GoTo,
    ODCM_Free,
    ODCM_Orbit,
};

