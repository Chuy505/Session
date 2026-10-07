#pragma once
#include "CoreMinimal.h"
#include "EPartyGameGameModes.generated.h"

UENUM(BlueprintType)
enum class EPartyGameGameModes : uint8 {
    GM_Classic,
    GM_Custom,
    GM_LedgesGrinds,
    GM_Manuals,
};

