#pragma once
#include "CoreMinimal.h"
#include "EEventManualType.generated.h"

UENUM(BlueprintType)
enum class EEventManualType : uint8 {
    EMT_Manual,
    EMT_NoseManual,
    EMT_SwitchManual,
    EMT_FakieManual,
};

