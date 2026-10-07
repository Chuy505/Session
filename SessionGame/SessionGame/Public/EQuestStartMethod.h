#pragma once
#include "CoreMinimal.h"
#include "EQuestStartMethod.generated.h"

UENUM(BlueprintType)
enum class EQuestStartMethod : uint8 {
    QSM_None,
    QSM_Automatically,
    QSM_QuestGiver,
};

