#include "TelemetryCustomizationEvent.h"

FTelemetryCustomizationEvent::FTelemetryCustomizationEvent() {
    this->_action = ETelemetryCustomizationAction::ETCA_Undifined;
    this->_currencyAmount = 0.00f;
    this->_isVariant = false;
    this->_isCustomColor = false;
}

