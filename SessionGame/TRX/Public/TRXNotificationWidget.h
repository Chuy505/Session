#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ETRXNotificationLogLevel.h"
#include "TRXNotificationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTRXNotificationWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnSetLogLevel(ETRXNotificationLogLevel logLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnSetContentText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDisplayDurationUpdated(float remainingDuration);
    
};

