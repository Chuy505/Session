#pragma once
#include "CoreMinimal.h"
#include "EClothesContactParts.generated.h"

UENUM(BlueprintType)
enum class EClothesContactParts : uint8 {
    ECCP_Head,
    ECCP_Upperbody,
    ECCP_Lowerbody,
    ECCP_Feet,
};

