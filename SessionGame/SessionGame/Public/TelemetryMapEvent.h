#pragma once
#include "CoreMinimal.h"
#include "ETelemetryMapAction.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryMapEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryMapEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryMapAction _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _mapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _characterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _time;
    
public:
    SESSIONGAME_API FTelemetryMapEvent();
};

