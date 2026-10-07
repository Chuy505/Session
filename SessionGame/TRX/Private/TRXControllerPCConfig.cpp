#include "TRXControllerPCConfig.h"

FTRXControllerPCConfig::FTRXControllerPCConfig() {
    this->bSupportKeyboardAndMouse = false;
    this->bSupportGamepad = false;
    this->DefaultGamepadType = ETRXControllerType::KeyboardAndMouse;
}

