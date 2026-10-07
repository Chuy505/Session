#include "TRXProfileSwitchWidget.h"

UTRXProfileSwitchWidget::UTRXProfileSwitchWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bDisplayInCompactMode = false;
}

void UTRXProfileSwitchWidget::SetIsListeningInputs(bool bListenInputs) {
}

void UTRXProfileSwitchWidget::SetDisplayInCompactMode(bool bInDisplayInCompactMode) {
}


FKey UTRXProfileSwitchWidget::GetKeyToPress() const {
    return FKey{};
}


