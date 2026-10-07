#include "TRXControllerKeyWidget.h"

UTRXControllerKeyWidget::UTRXControllerKeyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Image_Button = NULL;
    this->Mode = ETRXControllerKeyWidgetMode::Key;
}

void UTRXControllerKeyWidget::SetKeyToDisplay(const FKey& Key) {
}

void UTRXControllerKeyWidget::SetKeyTintColor(const FSlateColor& newTintColor) {
}

void UTRXControllerKeyWidget::SetKeySize(const FVector2D& newKeySize) {
}

void UTRXControllerKeyWidget::SetActionToDisplay(const FName& actionOrAxisName) {
}

FKey UTRXControllerKeyWidget::GetKeyType() const {
    return FKey{};
}


