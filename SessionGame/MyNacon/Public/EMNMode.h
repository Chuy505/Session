#pragma once
#include "CoreMinimal.h"
#include "EMNMode.generated.h"

UENUM(BlueprintType)
enum class EMNMode : uint8 {
    MNM_Live,
    MNM_Tests,
};

