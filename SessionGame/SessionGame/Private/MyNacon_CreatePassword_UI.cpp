#include "MyNacon_CreatePassword_UI.h"

UMyNacon_CreatePassword_UI::UMyNacon_CreatePassword_UI() {
    this->bIsFocusable = true;
    this->_continueButton = NULL;
    this->_returnButton = NULL;
    this->_showPasswordButton = NULL;
    this->_textBox = NULL;
}

void UMyNacon_CreatePassword_UI::HandleOnTextBoxTextCommited(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMyNacon_CreatePassword_UI::HandleOnTextBoxTextChanged(const FText& newText) {
}


