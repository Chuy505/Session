#pragma once
#include "CoreMinimal.h"
#include "TelemetryEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    TELEMETRYLIB_API FTelemetryEvent();
};

