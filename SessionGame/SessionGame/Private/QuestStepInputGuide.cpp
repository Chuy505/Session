#include "QuestStepInputGuide.h"

FQuestStepInputGuide::FQuestStepInputGuide() {
    this->_inputGuideType = EQuestInputGuideType::QIGT_Undefined;
    this->_fliptrickToGuide = NULL;
    this->_guideAddedRotation = EEventLineTrickRotationType::ELTRT_None;
    this->_grindToGuide = NULL;
    this->_showGrindInputGuideAsSwitch = false;
    this->_manualToGuide = EEventManualType::EMT_Manual;
}

