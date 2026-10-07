#include "MyNacon_EmailVerification_UI.h"

UMyNacon_EmailVerification_UI::UMyNacon_EmailVerification_UI() {
    this->bIsFocusable = true;
    this->_continueButton = NULL;
    this->_resendEmailButton = NULL;
    this->_instructionText = NULL;
    this->_loadingImage = NULL;
    this->_desiredResendEmailButtonHoldTime = 1.00f;
}


