#pragma once
#include "CoreMinimal.h"
#include "EPartyGameActions.generated.h"

UENUM(BlueprintType)
enum class EPartyGameActions : uint8 {
    PGA_Undefined,
    PGA_GameOver,
    PGA_Idle,
    PGA_TrackingPlayer,
    PGA_StartTurn,
    PGA_WaitForInput,
};

