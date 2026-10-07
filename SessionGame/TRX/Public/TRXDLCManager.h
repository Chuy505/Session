#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXDLCManager.generated.h"

UCLASS(Blueprintable)
class TRX_API UTRXDLCManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTRXDLCManager();

};

