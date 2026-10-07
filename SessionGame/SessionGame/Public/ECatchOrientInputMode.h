#pragma once
#include "CoreMinimal.h"
#include "ECatchOrientInputMode.generated.h"

UENUM(BlueprintType)
enum class ECatchOrientInputMode : uint8 {
    CIM_Undefined,
    CIM_FullRelease,
    CIM_PartialRelease,
    CIM_NoRelease,
};

