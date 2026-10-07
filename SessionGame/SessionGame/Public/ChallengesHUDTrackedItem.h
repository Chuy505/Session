#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ChallengesHUDTrackedItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UChallengesHUDTrackedItem : public UUserWidget {
    GENERATED_BODY()
public:
    UChallengesHUDTrackedItem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeCompletedBP();
    
};

