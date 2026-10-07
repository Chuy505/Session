#include "SpotMarkerWidget.h"

USpotMarkerWidget::USpotMarkerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_text = NULL;
    this->_markSpotAnimation = NULL;
    this->_gotoSpotAnimation = NULL;
    this->_confirmActionAnimation = NULL;
    this->_cancelActionAnimation = NULL;
}


