#include "TRXSaveProgressNotifyScreenWidget.h"

UTRXSaveProgressNotifyScreenWidget::UTRXSaveProgressNotifyScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->progressWidget = NULL;
}

FKey UTRXSaveProgressNotifyScreenWidget::GetKeyToPress() const {
    return FKey{};
}


