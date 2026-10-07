#include "QuestCompleteUI.h"

UQuestCompleteUI::UQuestCompleteUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_questNameText = NULL;
    this->_rewardsWidgetSwitcher = NULL;
    this->_rewardsPanel = NULL;
    this->_rewardChooser = NULL;
    this->_buttonsPanel = NULL;
    this->_sideQuestsAddedPanel = NULL;
    this->_audioSet = NULL;
}


