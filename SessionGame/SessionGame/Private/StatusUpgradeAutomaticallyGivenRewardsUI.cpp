#include "StatusUpgradeAutomaticallyGivenRewardsUI.h"

UStatusUpgradeAutomaticallyGivenRewardsUI::UStatusUpgradeAutomaticallyGivenRewardsUI() : UUserWidget(FObjectInitializer::Get()) {
    this->TextCategoryName = NULL;
    this->RewardsPanel = NULL;
    this->_scrollMultiplier = 0.00f;
}



void UStatusUpgradeAutomaticallyGivenRewardsUI::HandleOnShowAnimationFinished() {
}

void UStatusUpgradeAutomaticallyGivenRewardsUI::HandleOnHideAnimationFinished() {
}


