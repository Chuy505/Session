#include "TransitMapTextWidget.h"

UTransitMapTextWidget::UTransitMapTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_trackingVisualParameters = NULL;
    this->_selectedImage = NULL;
    this->_progressBar = NULL;
    this->_displayText = NULL;
    this->_questIndicatorImage = NULL;
}


