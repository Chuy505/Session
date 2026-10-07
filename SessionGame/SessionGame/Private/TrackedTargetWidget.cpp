#include "TrackedTargetWidget.h"

UTrackedTargetWidget::UTrackedTargetWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_canvasPanel = NULL;
    this->_mainPanel = NULL;
    this->_arrowPanel = NULL;
    this->_arrowImage = NULL;
    this->_iconImage = NULL;
    this->_meterText = NULL;
}


