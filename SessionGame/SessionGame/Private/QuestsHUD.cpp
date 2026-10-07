#include "QuestsHUD.h"

UQuestsHUD::UQuestsHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->_rewardItemQuestComplete_CurrencyBlueprint = NULL;
    this->_rewardItemQuestComplete_DIYObjectBlueprint = NULL;
    this->_rewardItemQuestComplete_ExposureBlueprint = NULL;
    this->_rewardItemQuestComplete_GearBlueprint = NULL;
    this->_rewardItemQuestComplete_SponsorshipBlueprint = NULL;
    this->_rewardItem_CurrencyBlueprint = NULL;
    this->_rewardItem_DIYObjectBlueprint = NULL;
    this->_rewardItem_ExposureBlueprint = NULL;
    this->_rewardItem_GearBlueprint = NULL;
    this->_rewardItem_SponsorshipBlueprint = NULL;
    this->_questCompleteUI = NULL;
    this->_questDialogUI = NULL;
    this->_questInteractionPromptUI = NULL;
    this->_questProposalUI = NULL;
    this->_questTickerUI = NULL;
    this->_questTimerUI = NULL;
    this->_questFailedUI = NULL;
    this->_questUntrackedPopupUI = NULL;
}

void UQuestsHUD::ShowPendingQuestDialog() {
}


