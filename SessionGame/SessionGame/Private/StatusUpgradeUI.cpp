#include "StatusUpgradeUI.h"

UStatusUpgradeUI::UStatusUpgradeUI() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetAutomaticallyGivenRewards = NULL;
    this->WidgetRewardChooser = NULL;
    this->ContinueButton = NULL;
    this->_audioSet = NULL;
    this->StatusUpgradeDefinition = NULL;
}



void UStatusUpgradeUI::HandleShowContentAnimationFinished() {
}

void UStatusUpgradeUI::HandleHideContentAnimationFinished() {
}


