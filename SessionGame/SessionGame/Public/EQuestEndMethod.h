#pragma once
#include "CoreMinimal.h"
#include "EQuestEndMethod.generated.h"

UENUM(BlueprintType)
enum class EQuestEndMethod : uint8 {
    QEM_None,
    QEM_Automatically,
    QEM_QuestGiver,
};

