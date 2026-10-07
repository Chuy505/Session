#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ETRXPopupWidgetButtonsVisibility.h"
#include "TRXPopupWidget.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXPopupWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTRXPopupWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTitleStyleSet(const UDataTable* styleSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSecondaryButtonText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPrimaryButtonText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPopupTextStyleSet(const UDataTable* styleSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPopupText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonsVisibility(ETRXPopupWidgetButtonsVisibility newVisibility);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastSecondaryButtonPressed(int32 userIndex);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastPrimaryButtonPressed(int32 userIndex);
    
};

