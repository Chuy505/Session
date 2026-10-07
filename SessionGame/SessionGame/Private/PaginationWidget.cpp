#include "PaginationWidget.h"

UPaginationWidget::UPaginationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_previousInputWidget = NULL;
    this->_nextInputWidget = NULL;
    this->_pipContainerWidget = NULL;
    this->_pipWidgetClass = NULL;
}


