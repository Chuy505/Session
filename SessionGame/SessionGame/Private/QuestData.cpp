#include "QuestData.h"

FQuestData::FQuestData() {
    this->CompletedSteps = 0;
    this->IsTracked = false;
    this->QuestStepIndex = 0;
    this->_questLineType = 0;
    this->isMainQuest = false;
}

