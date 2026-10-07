#pragma once
#include "CoreMinimal.h"
#include "EChallengeType.generated.h"

UENUM(BlueprintType)
enum class EChallengeType : uint8 {
    ECT_Undefined,
    ECT_Trick,
    ECT_Grind,
    ECT_Manual,
    ECT_Line,
};

