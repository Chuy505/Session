#pragma once
#include "CoreMinimal.h"
#include "EFootToBoardTransitionType.generated.h"

UENUM(BlueprintType)
enum class EFootToBoardTransitionType : uint8 {
    EFBTT_None,
    EFBTT_ToFacingRight,
    EFBTT_ToFacingLeft,
};

