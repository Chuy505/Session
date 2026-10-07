#pragma once
#include "CoreMinimal.h"
#include "EQuestLineType.generated.h"

UENUM(BlueprintType)
enum class EQuestLineType : uint8 {
    QLT_Undefined,
    QLT_Default,
    QLT_MainQuest,
    QLT_TutorialQuest,
};

