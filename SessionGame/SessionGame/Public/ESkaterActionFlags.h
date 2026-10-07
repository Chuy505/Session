#pragma once
#include "CoreMinimal.h"
#include "ESkaterActionFlags.generated.h"

UENUM(BlueprintType)
enum class ESkaterActionFlags : uint8 {
    SAF_None,
    SAF_OnBoard_Push,
    SAF_OnBoard_PushFast,
    SAF_OnBoard_Banking,
    SAF_OnBoard_Brake,
    SAF_OnBoard_Crank,
    SAF_OnBoard_Manuals,
    SAF_OnBoard_FlipTricks,
    SAF_OnBoard_Rotations,
    SAF_OnBoard_CatchOrient,
    SAF_OnBoard_Grinds,
    SAF_OnBoard_Reverts,
    SAF_OnBoard_Powerslides,
    SAF_OnBoard_Grabs,
    SAF_OnBoard_Primos,
    SAF_OnBoard_CasperSlides,
    SAF_OnFoot_Walk,
    SAF_OnFoot_Sprint,
    SAF_OnFoot_Jump,
    SAF_OnFoot_ControlCamera,
    SAF_SetMarker,
    SAF_GotoMarker,
    SAF_ToggleOnBoard,
    SAF_ToggleOnFoot,
    SAF_ReplayEditor,
    SAF_ObjectPlacement,
    SAF_Transit,
    SAF_LoadLevel,
    SAF_QuestGiver,
    SAF_SkateShop,
    SAF_PartyGames,
    SAF_OnBoard_Pump,
};

