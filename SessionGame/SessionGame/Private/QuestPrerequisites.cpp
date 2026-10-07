#include "QuestPrerequisites.h"

FQuestPrerequisites::FQuestPrerequisites() {
    this->_isExposureRequired = false;
    this->_minExposure = 0;
    this->_isTimeOfDayRequired = false;
    this->_minTimeOfDay = 0.00f;
    this->_maxTimeOfDay = 0.00f;
}

