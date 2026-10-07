#pragma once
#include "CoreMinimal.h"
#include "EInGameIntroPhase.generated.h"

UENUM(BlueprintType)
enum class EInGameIntroPhase : uint8 {
    FlowIdle,
    FlowStartup,
    Onboarding,
    Title,
    FlowComplete,
};

