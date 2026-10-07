#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplayModule -ObjectName=ReplayInputBase -FallbackName=ReplayInputBase
#include "SessionReplayCinematicModeInputHandler.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API USessionReplayCinematicModeInputHandler : public UReplayInputBase {
    GENERATED_BODY()
public:
    USessionReplayCinematicModeInputHandler();

};

