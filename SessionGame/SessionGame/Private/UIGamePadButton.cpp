#include "UIGamePadButton.h"

UUIGamePadButton::UUIGamePadButton() : UUserWidget(FObjectInitializer::Get()) {
    this->_buttonTextBlock = NULL;
    this->_buttonImage = NULL;
    this->_controllerKey = NULL;
    this->_progressCircleImage = NULL;
}


