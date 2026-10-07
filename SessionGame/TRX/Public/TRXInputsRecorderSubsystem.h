#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXInputsRecorderSubsystem.generated.h"

UCLASS(Blueprintable)
class TRX_API UTRXInputsRecorderSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTRXInputsRecorderSubsystem();

};

