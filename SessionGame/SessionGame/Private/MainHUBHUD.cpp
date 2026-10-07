#include "MainHUBHUD.h"

UMainHUBHUD::UMainHUBHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->FooterPanel = NULL;
    this->TitlePanel = NULL;
    this->ShortDescriptionText = NULL;
    this->_confirmButton = NULL;
    this->_backButton = NULL;
    this->_xboxUserProfileUI = NULL;
    this->_myNaconHUD = NULL;
}


