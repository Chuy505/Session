#pragma once
#include "CoreMinimal.h"
#include "EChallengeUpdateProgressType.generated.h"

UENUM(BlueprintType)
enum class EChallengeUpdateProgressType : uint8 {
    CUPT_Count,
    CUPT_Distance,
    CUPT_Failed,
};

