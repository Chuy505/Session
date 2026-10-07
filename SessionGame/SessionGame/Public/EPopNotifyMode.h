#pragma once
#include "CoreMinimal.h"
#include "EPopNotifyMode.generated.h"

UENUM(BlueprintType)
enum class EPopNotifyMode : uint8 {
    PNM_Any,
    PNM_Trick,
    PNM_Grind,
    PNM_Skater,
};

