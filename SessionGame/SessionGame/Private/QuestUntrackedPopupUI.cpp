#include "QuestUntrackedPopupUI.h"

UQuestUntrackedPopupUI::UQuestUntrackedPopupUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_questNameText = NULL;
    this->_questStepText = NULL;
    this->_trackQuestButton = NULL;
    this->_audioSet = NULL;
    this->_shownDuration = 0.00f;
}




