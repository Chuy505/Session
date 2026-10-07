#pragma once
#include "CoreMinimal.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryNewsEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryNewsEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _externalUrl;
    
public:
    SESSIONGAME_API FTelemetryNewsEvent();
};

