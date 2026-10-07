#pragma once
#include "CoreMinimal.h"
#include "EPrimoType.generated.h"

UENUM(BlueprintType)
enum class EPrimoType : uint8 {
    PT_None,
    PT_BoardLeft,
    PT_BoardRight,
};

