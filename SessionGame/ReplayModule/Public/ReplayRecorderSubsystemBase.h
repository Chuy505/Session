#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ReplayRecorderInterface.h"
#include "ReplayRecorderSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class REPLAYMODULE_API UReplayRecorderSubsystemBase : public UGameInstanceSubsystem, public IReplayRecorderInterface {
    GENERATED_BODY()
public:
    UReplayRecorderSubsystemBase();


    // Fix for true pure virtual functions not being implemented
};

