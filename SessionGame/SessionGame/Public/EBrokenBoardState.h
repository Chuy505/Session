#pragma once
#include "CoreMinimal.h"
#include "EBrokenBoardState.generated.h"

UENUM(BlueprintType)
enum class EBrokenBoardState : uint8 {
    EBBS_Undefined,
    EBBS_MiddleBroken,
    EBBS_Last,
};

