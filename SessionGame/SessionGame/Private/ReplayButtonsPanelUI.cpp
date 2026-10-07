#include "ReplayButtonsPanelUI.h"

UReplayButtonsPanelUI::UReplayButtonsPanelUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_buttonDPadLeftRight = NULL;
    this->_buttonDPadUpDown = NULL;
    this->_buttonLeftStick = NULL;
    this->_buttonRightStick = NULL;
    this->_buttonLeftBumper = NULL;
    this->_buttonRightBumper = NULL;
    this->_buttonSpecialLeft = NULL;
    this->_buttonRightStickButton = NULL;
    this->_buttonLeftStickButton = NULL;
    this->_buttonLeftTrigger = NULL;
    this->_buttonRightTrigger = NULL;
    this->_buttonFaceDown = NULL;
    this->_buttonFaceRight = NULL;
    this->_buttonFaceLeft = NULL;
    this->_buttonFaceTop = NULL;
}


