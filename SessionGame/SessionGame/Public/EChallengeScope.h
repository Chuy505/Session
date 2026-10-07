#pragma once
#include "CoreMinimal.h"
#include "EChallengeScope.generated.h"

UENUM(BlueprintType)
enum class EChallengeScope : uint8 {
    ECS_Undefined,
    ECS_Daily,
    ECS_Weekly,
    ECS_Historical,
    ECS_Tutorial,
    ECS_Quest,
};

