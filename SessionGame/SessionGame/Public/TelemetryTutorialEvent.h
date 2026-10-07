#pragma once
#include "CoreMinimal.h"
#include "ETelemetryActionState.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryTutorialEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryTutorialEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryActionState _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _tutorialName;
    
public:
    SESSIONGAME_API FTelemetryTutorialEvent();
};

