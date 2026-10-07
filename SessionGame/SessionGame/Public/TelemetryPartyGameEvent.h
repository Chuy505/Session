#pragma once
#include "CoreMinimal.h"
#include "ETelemetryActionState.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryPartyGameEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryPartyGameEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryActionState _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _partyGameName;
    
public:
    SESSIONGAME_API FTelemetryPartyGameEvent();
};

