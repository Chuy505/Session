#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TRXSaveProgressWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXSaveProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTRXSaveProgressWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSaveStarted(const FString& saveName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSaveEnded();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationEnded();
    
};

