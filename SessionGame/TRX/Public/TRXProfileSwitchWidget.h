#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TRXProfileSwitchWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXProfileSwitchWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyToPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayInCompactMode;
    
public:
    UTRXProfileSwitchWidget();

    UFUNCTION(BlueprintCallable)
    void SetIsListeningInputs(bool bListenInputs);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInCompactMode(bool bInDisplayInCompactMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDisplayModeChanged(bool bIsCompactDisplayMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyToPress() const;
    
};

