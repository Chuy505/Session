#include "TelemetryGameplaySettingsEvent.h"

FTelemetryGameplaySettingsEvent::FTelemetryGameplaySettingsEvent() {
    this->_difficultyPreset = EDifficultyMode::DM_Undefined;
    this->_stance = EStanceType::Regular;
    this->_inputMode = EInputModeType::None;
    this->_boardControlMode = EBoardControlMode::BCMODE_Undefined;
    this->_bodyRotationMode = EBodyRotationMode::BRMODE_Undefined;
    this->_catchMode = ECatchMode::CMODE_Undefined;
    this->_grindInputMode = ECatchOrientInputMode::CIM_Undefined;
    this->_isBoardBreakingEnabled = false;
    this->_isDarkslidesEnabled = false;
    this->_caspersMode = ECaspersMode::CM_Disabled;
    this->_isPrimosEnabled = false;
    this->_isLiptricksEnabled = false;
    this->_isPhysicalAnimationEnabled = false;
}

