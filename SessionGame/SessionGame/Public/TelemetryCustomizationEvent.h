#pragma once
#include "CoreMinimal.h"
#include "ETelemetryCustomizationAction.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryCustomizationEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryCustomizationEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETelemetryCustomizationAction _action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _currencyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _itemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isCustomColor;
    
public:
    SESSIONGAME_API FTelemetryCustomizationEvent();
};

