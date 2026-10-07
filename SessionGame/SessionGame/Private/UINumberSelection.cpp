#include "UINumberSelection.h"

UUINumberSelection::UUINumberSelection() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->_text = NULL;
    this->_selectedPanel = NULL;
    this->_minValue = 0.00f;
    this->_maxValue = 1.00f;
    this->_selectionDelta = 1.00f;
    this->_maxFractionDigits = 0;
    this->_wrap = true;
}


