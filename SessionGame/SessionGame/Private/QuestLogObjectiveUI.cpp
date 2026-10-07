#include "QuestLogObjectiveUI.h"

UQuestLogObjectiveUI::UQuestLogObjectiveUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_checkBoxAnim = NULL;
    this->_disabledOpacity = 0.30f;
    this->_completedImage = NULL;
    this->_objectivePanel = NULL;
    this->_objectiveText = NULL;
}


