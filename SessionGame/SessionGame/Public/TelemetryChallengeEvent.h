#pragma once
#include "CoreMinimal.h"
#include "EChallengeScope.h"
#include "ETelemetryActionState.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryChallengeEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryChallengeEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryActionState _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _challengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeScope _challengeScope;
    
public:
    SESSIONGAME_API FTelemetryChallengeEvent();
};

