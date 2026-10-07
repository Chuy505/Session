#pragma once
#include "CoreMinimal.h"
#include "EBoardToFootTransitionType.generated.h"

UENUM(BlueprintType)
enum class EBoardToFootTransitionType : uint8 {
    EFBTT_None,
    EFBTT_FromFacingRight,
    EFBTT_FromFacingLeft,
};

