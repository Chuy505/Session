#include "IntroUI.h"

UIntroUI::UIntroUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_introSkipDelay = 3.00f;
    this->_skateButton = NULL;
    this->_switchUserProfileButton = NULL;
    this->_titleLogoImage = NULL;
    this->VersionText = NULL;
    this->_newsUI = NULL;
    this->_xboxUserProfileUI = NULL;
    this->_myNaconHUD = NULL;
    this->_hideTitleAnim = NULL;
    this->_audioSet = NULL;
}

void UIntroUI::HandleOnHideTitleAnimationFinished() {
}


