#include "TRXEngagementScreenWidget.h"

UTRXEngagementScreenWidget::UTRXEngagementScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ProfileSwitchWidget = NULL;
}

void UTRXEngagementScreenWidget::ReceiveOnControllerTypeChanged_Implementation(ETRXControllerType newControllerType, const FKey& mostSuitableKeyToValidate) {
}

UTRXProfileSwitchWidget* UTRXEngagementScreenWidget::GetProfileSwitchWidget() const {
    return NULL;
}


