#include "QuestProposalUI.h"

UQuestProposalUI::UQuestProposalUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_quest_ObjectiveBlueprint = NULL;
    this->_audioSet = NULL;
    this->_questNameText = NULL;
    this->_questDescriptionText = NULL;
    this->_questObjectivesPanel = NULL;
    this->_questObjectivesScrollBox = NULL;
    this->_rewardsPanelRoot = NULL;
    this->_rewardsPanel = NULL;
    this->_acceptButton = NULL;
    this->_fillerButtonPanel = NULL;
    this->_declineButtonPanel = NULL;
    this->_declineButton = NULL;
}


