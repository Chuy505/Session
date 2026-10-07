#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "StatusUpgradeAutomaticallyGivenRewardsUI.generated.h"

class UScrollBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UStatusUpgradeAutomaticallyGivenRewardsUI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* RewardsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _scrollMultiplier;
    
public:
    UStatusUpgradeAutomaticallyGivenRewardsUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartShowAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartHideAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnShowAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnHideAnimationFinished();
    
};

