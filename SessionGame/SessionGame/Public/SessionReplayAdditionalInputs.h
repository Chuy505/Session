#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplayModule -ObjectName=ReplayInputBase -FallbackName=ReplayInputBase
#include "SessionReplayAdditionalInputs.generated.h"

UCLASS(Blueprintable)
class USessionReplayAdditionalInputs : public UReplayInputBase {
    GENERATED_BODY()
public:
    USessionReplayAdditionalInputs();

};

