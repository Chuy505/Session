#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "QuestsHUD.generated.h"

class UInteractionPromptUI;
class UQuestCompleteRewardItemUI;
class UQuestCompleteUI;
class UQuestDialogUI;
class UQuestFailedUI;
class UQuestProposalUI;
class UQuestRewardItemUI;
class UQuestTickerUI;
class UQuestTimerUI;
class UQuestUntrackedPopupUI;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UQuestsHUD : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestCompleteRewardItemUI> _rewardItemQuestComplete_CurrencyBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestCompleteRewardItemUI> _rewardItemQuestComplete_DIYObjectBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestCompleteRewardItemUI> _rewardItemQuestComplete_ExposureBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestCompleteRewardItemUI> _rewardItemQuestComplete_GearBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestCompleteRewardItemUI> _rewardItemQuestComplete_SponsorshipBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestRewardItemUI> _rewardItem_CurrencyBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestRewardItemUI> _rewardItem_DIYObjectBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestRewardItemUI> _rewardItem_ExposureBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestRewardItemUI> _rewardItem_GearBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestRewardItemUI> _rewardItem_SponsorshipBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestCompleteUI* _questCompleteUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestDialogUI* _questDialogUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionPromptUI* _questInteractionPromptUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestProposalUI* _questProposalUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestTickerUI* _questTickerUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestTimerUI* _questTimerUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestFailedUI* _questFailedUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestUntrackedPopupUI* _questUntrackedPopupUI;
    
public:
    UQuestsHUD();

private:
    UFUNCTION(BlueprintCallable)
    void ShowPendingQuestDialog();
    
};

