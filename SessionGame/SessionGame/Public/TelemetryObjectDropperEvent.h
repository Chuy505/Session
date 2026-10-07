#pragma once
#include "CoreMinimal.h"
#include "ETelemetryObjectDropperAction.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryObjectDropperEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryObjectDropperEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryObjectDropperAction _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _objectName;
    
public:
    SESSIONGAME_API FTelemetryObjectDropperEvent();
};

