#pragma once
#include "CoreMinimal.h"
#include "ETRXStore.generated.h"

UENUM(BlueprintType)
enum class ETRXStore : uint8 {
    Steam,
    EGS,
    GOG,
    SonyPS4,
    SonyPS5,
    MicrosoftStoreXboxOne,
    MicrosoftStoreXboxSeries,
    NintendoStore,
    NoStore,
};

