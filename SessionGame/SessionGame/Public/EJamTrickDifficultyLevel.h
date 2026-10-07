#pragma once
#include "CoreMinimal.h"
#include "EJamTrickDifficultyLevel.generated.h"

UENUM(BlueprintType)
enum class EJamTrickDifficultyLevel : uint8 {
    Easy,
    Medium,
    Hard,
    Expert,
};

