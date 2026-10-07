#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXInputsManager.generated.h"

UCLASS(Blueprintable)
class TRX_API UTRXInputsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTRXInputsManager();

};

