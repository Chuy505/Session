#pragma once
#include "CoreMinimal.h"
#include "EMNUserLinkingStatus.generated.h"

UENUM(BlueprintType)
enum class EMNUserLinkingStatus : uint8 {
    Success,
    ErrorInternal,
    ErrorNotLoggedIn,
    ErrorUnknown,
};

