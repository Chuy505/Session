#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FadeInUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UFadeInUI : public UUserWidget {
    GENERATED_BODY()
public:
    UFadeInUI();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventFadeIn();
    
};

