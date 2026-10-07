#include "AlertWidget.h"

UAlertWidget::UAlertWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_alertTitle = NULL;
    this->_alertMessage = NULL;
    this->_confirmUIGamePadButton = NULL;
    this->_cancelUIGamePadButton = NULL;
    this->_audioSet = NULL;
}


