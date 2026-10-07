#include "ColorSelectorWidget.h"

UColorSelectorWidget::UColorSelectorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ColorSpectrum = NULL;
    this->ColorCursor = NULL;
    this->CurrentColor = NULL;
    this->ValueSlider = NULL;
    this->_cursorSpeed = 2.00f;
    this->_cursorStickSpeed = 10.00f;
    this->_valueSliderSpeed = 0.10f;
}


