#pragma once
#include "CoreMinimal.h"
#include "ECameraModelType.generated.h"

UENUM(BlueprintType)
enum class ECameraModelType : uint8 {
    CMT_None,
    CMT_Default,
    CMT_VX1000,
    CMT_Last,
};

