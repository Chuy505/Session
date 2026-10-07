#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXMonitorInterface.h"
#include "TRXLoadingTimesMonitor.generated.h"

UCLASS(Blueprintable)
class TRX_API UTRXLoadingTimesMonitor : public UGameInstanceSubsystem, public ITRXMonitorInterface {
    GENERATED_BODY()
public:
    UTRXLoadingTimesMonitor();


    // Fix for true pure virtual functions not being implemented
};

