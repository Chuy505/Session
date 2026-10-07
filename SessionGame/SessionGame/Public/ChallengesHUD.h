#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "ChallengesHUD.generated.h"

class UChallengesHUDTrackedItem;
class UUIAudioSet;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UChallengesHUD : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChallengesHUDTrackedItem> TrackedChallengeBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _displayCompletedNotificationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSet* _audioSet;
    
public:
    UChallengesHUD();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowNotificationBP(bool isSpecial);
    
};

