#include "MyNacon_LoginPassword_UI.h"

UMyNacon_LoginPassword_UI::UMyNacon_LoginPassword_UI() {
    this->bIsFocusable = true;
    this->_continueButton = NULL;
    this->_returnButton = NULL;
    this->_forgotPasswordButton = NULL;
    this->_resendEmailButton = NULL;
    this->_textBox = NULL;
    this->_welcomeMessage = NULL;
    this->_invalidCredentialsMessage = NULL;
    this->_loadingImage = NULL;
    this->_desiredResendEmailButtonHoldTime = 1.00f;
}

void UMyNacon_LoginPassword_UI::HandleOnTextBoxTextCommited(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMyNacon_LoginPassword_UI::HandleOnTextBoxTextChanged(const FText& newText) {
}


