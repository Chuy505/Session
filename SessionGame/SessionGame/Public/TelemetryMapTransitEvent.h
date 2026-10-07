#pragma once
#include "CoreMinimal.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryMapTransitEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryMapTransitEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _currentMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _nextMapName;
    
public:
    SESSIONGAME_API FTelemetryMapTransitEvent();
};

