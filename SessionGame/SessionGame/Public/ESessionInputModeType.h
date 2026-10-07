#pragma once
#include "CoreMinimal.h"
#include "ESessionInputModeType.generated.h"

UENUM(BlueprintType)
enum class ESessionInputModeType : uint8 {
    GameOnly,
    UIOnly,
    GameAndUI,
};

