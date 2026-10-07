#pragma once
#include "CoreMinimal.h"
#include "EQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class EQuestRewardType : uint8 {
    QRT_Undefined,
    QRT_Exposure,
    QRT_Currency,
    QRT_Gear,
    QRT_DIYObject,
    QRT_Sponsorship,
};

