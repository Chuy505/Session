#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXMonitorInterface.h"
#include "TRXSaveMonitor.generated.h"

UCLASS(Blueprintable)
class TRX_API UTRXSaveMonitor : public UGameInstanceSubsystem, public ITRXMonitorInterface {
    GENERATED_BODY()
public:
    UTRXSaveMonitor();


    // Fix for true pure virtual functions not being implemented
};

