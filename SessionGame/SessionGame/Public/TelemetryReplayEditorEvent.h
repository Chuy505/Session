#pragma once
#include "CoreMinimal.h"
#include "ETelemetryReplayEditorAction.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryReplayEditorEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryReplayEditorEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryReplayEditorAction _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _keyframeType;
    
public:
    SESSIONGAME_API FTelemetryReplayEditorEvent();
};

