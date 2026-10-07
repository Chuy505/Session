#pragma once
#include "CoreMinimal.h"
#include "EObjectDropperObjectRevertType.generated.h"

UENUM(BlueprintType)
enum class EObjectDropperObjectRevertType : uint8 {
    ODORT_Last,
    ODORT_Original,
    ODORT_Stored,
    ODORT_Zero,
};

