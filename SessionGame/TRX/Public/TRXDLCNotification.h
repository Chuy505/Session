#pragma once
#include "CoreMinimal.h"
#include "TRXDLCNotification.generated.h"

USTRUCT(BlueprintType)
struct FTRXDLCNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeDisplayedOncePerDLCPerSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowReinstallSuggestion;
    
    TRX_API FTRXDLCNotification();
};

