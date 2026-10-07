#pragma once
#include "CoreMinimal.h"
#include "EQuestInputGuideType.generated.h"

UENUM(BlueprintType)
enum class EQuestInputGuideType : uint8 {
    QIGT_Undefined,
    QIGT_Trick,
    QIGT_Grind,
    QIGT_Manual,
    QIGT_Custom,
};

