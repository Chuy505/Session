#include "NewsEULAWidget.h"

UNewsEULAWidget::UNewsEULAWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_scrollbox = NULL;
    this->_acceptButton = NULL;
    this->_continueButton = NULL;
    this->_audioSet = NULL;
    this->_scrollSpeed = 0.00f;
    this->_acceptButtonHoldTime = 0.00f;
}


