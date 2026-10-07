#include "QuestFailedUI.h"

UQuestFailedUI::UQuestFailedUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_questNameText = NULL;
    this->_retryButton = NULL;
    this->_dismissButton = NULL;
    this->_audioSet = NULL;
}


