#include "MyNacon_EmailEntry_UI.h"

UMyNacon_EmailEntry_UI::UMyNacon_EmailEntry_UI() {
    this->bIsFocusable = true;
    this->_continueButton = NULL;
    this->_returnButton = NULL;
    this->_textBox = NULL;
    this->_welcomeMessage = NULL;
    this->_footerWarningMessage = NULL;
    this->_invalidEmailMessage = NULL;
    this->_loadingImage = NULL;
    this->_platformData = NULL;
}

void UMyNacon_EmailEntry_UI::HandleOnTextBoxTextCommited(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMyNacon_EmailEntry_UI::HandleOnTextBoxTextChanged(const FText& newText) {
}


