#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "StatusUpgradeUI.generated.h"

class UQuestRewardChooserUI;
class USelectionMenuAudioSet;
class UStatusUpgradeAutomaticallyGivenRewardsUI;
class UStatusUpgradeDefinition;
class UUIGamePadButton;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UStatusUpgradeUI : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusUpgradeAutomaticallyGivenRewardsUI* WidgetAutomaticallyGivenRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestRewardChooserUI* WidgetRewardChooser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamePadButton* ContinueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextShopSponsored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextCashReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextExposureReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextItemReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelectionMenuAudioSet* _audioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatusUpgradeDefinition* StatusUpgradeDefinition;
    
public:
    UStatusUpgradeUI();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartShowContentAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartHideContentAnimation();
    
    UFUNCTION(BlueprintCallable)
    void HandleShowContentAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleHideContentAnimationFinished();
    
};

