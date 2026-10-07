#pragma once
#include "CoreMinimal.h"
#include "ESaveTypes.generated.h"

UENUM(BlueprintType)
enum class ESaveTypes : uint8 {
    EST_Undefined,
    EST_Challenges,
    EST_Customization,
    EST_Experimental,
    EST_Inventories,
    EST_MapLayouts,
    EST_News,
    EST_Options,
    EST_ObjectPlacement,
    EST_ObjectDropper,
    EST_Quests,
    EST_ReplayEditor,
    EST_Stats,
    EST_Tutorial,
    EST_FilmerMode,
    EST_PartyGames,
};

