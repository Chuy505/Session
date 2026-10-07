#pragma once
#include "CoreMinimal.h"
#include "EEventLineTrickEntryType.generated.h"

UENUM(BlueprintType)
enum class EEventLineTrickEntryType : uint8 {
    ELTET_Undefined,
    ELTET_FlipTrick,
    ELTET_GrindOrSlide,
    ELTET_Manual,
    ELTET_Revert,
    ELTET_Powerslide,
    ELTET_Casper,
    ELTET_Primo,
};

