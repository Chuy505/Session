#include "MyNacon_ToS_UI.h"

UMyNacon_ToS_UI::UMyNacon_ToS_UI() {
    this->bIsFocusable = true;
    this->_termsOfUseButton = NULL;
    this->_privacyPolicyButton = NULL;
    this->_acceptToSCheckbox = NULL;
    this->_acceptNewsletterCheckbox = NULL;
    this->_continueButton = NULL;
    this->_selectButton = NULL;
    this->_returnButton = NULL;
    this->_unacceptedToSText = NULL;
}

void UMyNacon_ToS_UI::HandleOnTermsOfUseButtonClicked() {
}

void UMyNacon_ToS_UI::HandleOnPrivacyPolicyButtonClicked() {
}

void UMyNacon_ToS_UI::HandleOnContinueButtonClicked() {
}

void UMyNacon_ToS_UI::HandleOnAcceptToSCheckboxChanged(bool accepted) {
}


