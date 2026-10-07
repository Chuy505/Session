#include "MyNacon_CreateUsername_UI.h"

UMyNacon_CreateUsername_UI::UMyNacon_CreateUsername_UI() {
    this->bIsFocusable = true;
    this->_continueButton = NULL;
    this->_returnButton = NULL;
    this->_textBox = NULL;
    this->_usernameTakenMessage = NULL;
    this->_loadingImage = NULL;
}

void UMyNacon_CreateUsername_UI::HandleOnTextBoxTextCommited(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMyNacon_CreateUsername_UI::HandleOnTextBoxTextChanged(const FText& newText) {
}


