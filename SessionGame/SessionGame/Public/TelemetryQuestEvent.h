#pragma once
#include "CoreMinimal.h"
#include "EQuestLineType.h"
#include "ETelemetryActionState.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryQuestEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryQuestEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryActionState _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _questName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isMainQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestLineType _questLineType;
    
public:
    SESSIONGAME_API FTelemetryQuestEvent();
};

