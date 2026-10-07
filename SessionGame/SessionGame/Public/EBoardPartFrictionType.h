#pragma once
#include "CoreMinimal.h"
#include "EBoardPartFrictionType.generated.h"

UENUM(BlueprintType)
enum class EBoardPartFrictionType : uint8 {
    EFT_Default,
    EFT_Grinds,
    EFT_PowerSlides,
    EFT_Frictionless,
    EFT_Casper,
    EFT_Primo,
    EFT_Last,
};

