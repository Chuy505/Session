#pragma once
#include "CoreMinimal.h"
#include "EMenuPageItemType.generated.h"

UENUM(BlueprintType)
enum class EMenuPageItemType : uint8 {
    PMIT_Undefined,
    PMIT_Selection,
    PMIT_MultiOption,
    PMIT_ProgressBar,
    PMIT_Slider,
};

