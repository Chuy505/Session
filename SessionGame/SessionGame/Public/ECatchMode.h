#pragma once
#include "CoreMinimal.h"
#include "ECatchMode.generated.h"

UENUM(BlueprintType)
enum class ECatchMode : uint8 {
    CMODE_Undefined,
    CMODE_Auto,
    CMODE_Manual,
};

