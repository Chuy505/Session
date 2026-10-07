#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TelemetryManager.generated.h"

UCLASS(Blueprintable)
class TELEMETRYLIB_API UTelemetryManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTelemetryManager();

};

