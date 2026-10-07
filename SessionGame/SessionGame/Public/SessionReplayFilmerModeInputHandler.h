#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplayModule -ObjectName=ReplayInputBase -FallbackName=ReplayInputBase
#include "SessionReplayFilmerModeInputHandler.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API USessionReplayFilmerModeInputHandler : public UReplayInputBase {
    GENERATED_BODY()
public:
    USessionReplayFilmerModeInputHandler();

};

