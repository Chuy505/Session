#pragma once
#include "CoreMinimal.h"
#include "EBoardBodyRotationMode.generated.h"

UENUM(BlueprintType)
enum class EBoardBodyRotationMode : uint8 {
    BBRMODE_BodyCentric,
    BBRMODE_BoardCentric,
};

