#pragma once
#include "CoreMinimal.h"
#include "EDLCNotification.generated.h"

UENUM(BlueprintType)
enum class EDLCNotification : uint8 {
    None,
    SkaterCharacterChanged,
    CustomizationItemMissing,
    MissingMap,
    MissingDIY,
    MissingVisualDefinition,
    MissingQuestAfterLoading,
    MissingNewQuest,
};

