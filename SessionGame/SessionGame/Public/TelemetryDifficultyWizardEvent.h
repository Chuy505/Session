#pragma once
#include "CoreMinimal.h"
#include "EDifficultyMode.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryDifficultyWizardEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryDifficultyWizardEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficultyMode _difficultyPreset;
    
public:
    SESSIONGAME_API FTelemetryDifficultyWizardEvent();
};

