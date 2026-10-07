#pragma once
#include "CoreMinimal.h"
#include "ETRXNotificationLogLevel.generated.h"

UENUM(BlueprintType)
enum class ETRXNotificationLogLevel : uint8 {
    Info,
    Warning,
    Error,
};

