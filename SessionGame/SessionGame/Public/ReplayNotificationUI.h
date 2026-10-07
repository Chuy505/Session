#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ReplayNotificationUI.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UReplayNotificationUI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* _notificationText;
    
public:
    UReplayNotificationUI();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideBP();
    
    UFUNCTION(BlueprintCallable)
    void NativeRemoveFromParent();
    
};

