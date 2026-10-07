#include "ReplayKeyframeAttributeUI.h"

UReplayKeyframeAttributeUI::UReplayKeyframeAttributeUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_attributeNameText = NULL;
    this->_attributeValueText = NULL;
    this->_selectorLeftText = NULL;
    this->_selectorRightText = NULL;
    this->_textUnit = NULL;
    this->_textDozen = NULL;
    this->_textHundred = NULL;
    this->_textXUnit = NULL;
    this->_textXDozen = NULL;
    this->_textXHundred = NULL;
}


