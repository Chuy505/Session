#pragma once
#include "CoreMinimal.h"
#include "EQuestObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EQuestObjectiveType : uint8 {
    QOT_Undefined,
    QOT_Challenge,
    QOT_Jam,
    QOT_Goto,
    QOT_TalkTo,
    QOT_ObjectDropper,
    QOT_Transit,
    QOT_ReplayEditor,
    QOT_SkaterAction,
};

