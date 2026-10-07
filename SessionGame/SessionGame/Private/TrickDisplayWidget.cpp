#include "TrickDisplayWidget.h"

UTrickDisplayWidget::UTrickDisplayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_trickDisplayTextBlueprint = NULL;
    this->_trickDisplayPanel = NULL;
    this->_trickDatabase = NULL;
    this->_grindsDatabase = NULL;
    this->_revertsDatabase = NULL;
    this->NumberOfTiers = 3;
    this->MaxTextDuration = 3.00f;
    this->MinTextScale = 0.20f;
    this->MaxTextScale = 1.00f;
    this->MinTextAlpha = 0.25f;
    this->MaxTextAlpha = 1.00f;
    this->TrickDisplayTextWidgetPadding = 12.00f;
    this->TrickDisplayTimeDelay = 0.10f;
}


