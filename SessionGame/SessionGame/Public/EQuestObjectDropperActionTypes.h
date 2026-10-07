#pragma once
#include "CoreMinimal.h"
#include "EQuestObjectDropperActionTypes.generated.h"

UENUM()
enum class EQuestObjectDropperActionTypes : int32 {
    ODA_Undefined,
    ODA_Collect,
    ODA_Move,
    ODA_PlaceFromInventory,
    ODA_UseValidation,
};

