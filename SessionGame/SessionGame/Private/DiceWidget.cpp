#include "DiceWidget.h"

UDiceWidget::UDiceWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_diceRollAnimation = NULL;
    this->_faceBorder = NULL;
    this->_faceImage = NULL;
    this->_displayTextBlock = NULL;
    this->_labelTextBlock = NULL;
    this->_diceType = EDiceTypes::DT_Undefined;
    this->_randomFaceTimeDelay = 0.10f;
    this->_faceTexture = NULL;
}


