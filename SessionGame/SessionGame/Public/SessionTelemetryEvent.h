#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=TelemetryLib -ObjectName=TelemetryEvent -FallbackName=TelemetryEvent
#include "SessionTelemetryEvent.generated.h"

USTRUCT(BlueprintType)
struct FSessionTelemetryEvent : public FTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _myNaconID;
    
public:
    SESSIONGAME_API FSessionTelemetryEvent();
};

