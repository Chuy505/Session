#include "TelemetryChallengeEvent.h"

FTelemetryChallengeEvent::FTelemetryChallengeEvent() {
    this->_action = ETelemetryActionState::ETA_Undifined;
    this->_challengeScope = EChallengeScope::ECS_Undefined;
}

