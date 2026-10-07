#pragma once
#include "CoreMinimal.h"
#include "ETrackingVisualParamsType.generated.h"

UENUM(BlueprintType)
enum class ETrackingVisualParamsType : uint8 {
    TVPT_SkateShop,
    TVPT_TutorialQuest,
    TVPT_MainQuest,
    TVPT_QuestStart,
    TVPT_Default,
};

