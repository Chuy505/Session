#include "BrandFilterItemWidget.h"

UBrandFilterItemWidget::UBrandFilterItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Selected = false;
    this->_displayImage = NULL;
    this->_borderImage = NULL;
}


