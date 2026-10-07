#pragma once
#include "CoreMinimal.h"
#include "ECharacterType.generated.h"

UENUM(BlueprintType)
enum class ECharacterType : uint8 {
    CT_Undefined,
    CT_AMXX,
    CT_AFXX,
};

