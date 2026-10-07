#pragma once
#include "CoreMinimal.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryIntroEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryIntroEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> _ownedDlcs;
    
public:
    SESSIONGAME_API FTelemetryIntroEvent();
};

