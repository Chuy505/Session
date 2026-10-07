#pragma once
#include "CoreMinimal.h"
#include "EBodyRotationMode.generated.h"

UENUM(BlueprintType)
enum class EBodyRotationMode : uint8 {
    BRMODE_Undefined,
    BRMODE_Pressure,
    BRMODE_Speed,
    BRMODE_Timed,
    BRMODE_Manual,
};

