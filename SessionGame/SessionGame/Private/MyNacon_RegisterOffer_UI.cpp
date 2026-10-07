#include "MyNacon_RegisterOffer_UI.h"

UMyNacon_RegisterOffer_UI::UMyNacon_RegisterOffer_UI() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->_text = NULL;
    this->_disclaimer3gooText = NULL;
    this->_registerButton = NULL;
    this->_desiredRegisterButtonHoldTime = 1.00f;
}

void UMyNacon_RegisterOffer_UI::HandleOnVisibilityChanged(ESlateVisibility newVisibility) {
}


