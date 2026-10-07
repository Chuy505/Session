#pragma once
#include "CoreMinimal.h"
#include "EFilmerTypes.generated.h"

UENUM(BlueprintType)
enum class EFilmerTypes : uint8 {
    FT_Drone_Follow,
    FT_Drone_Free,
    FT_Skater,
};

