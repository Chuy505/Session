#include "TelemetryQuestEvent.h"

FTelemetryQuestEvent::FTelemetryQuestEvent() {
    this->_action = ETelemetryActionState::ETA_Undifined;
    this->_isMainQuest = false;
    this->_questLineType = EQuestLineType::QLT_Undefined;
}

