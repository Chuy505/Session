#include "TransitMapWidget.h"

UTransitMapWidget::UTransitMapWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->_cityNameText = NULL;
    this->_transitBgImage = NULL;
    this->_interactButtonsPanel = NULL;
    this->_transitButtonsPanel = NULL;
    this->_selectButton = NULL;
    this->_transitPanel = NULL;
    this->_transitMapPanel = NULL;
    this->_transitNodesTextContainer = NULL;
    this->_nodeScreenshot = NULL;
    this->_transitMapTextWidgetBlueprint = NULL;
    this->_audioSet = NULL;
    this->TeleportTriggerTimePeriod = 0.00f;
    this->ActivationTriggerTimePeriod = 0.00f;
}

float UTransitMapWidget::GetWorldRotation() {
    return 0.0f;
}


