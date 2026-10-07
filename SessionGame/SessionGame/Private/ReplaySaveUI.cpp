#include "ReplaySaveUI.h"

UReplaySaveUI::UReplaySaveUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_titleText = NULL;
    this->_nameEditableText = NULL;
    this->_confirmButton = NULL;
    this->_audioSet = NULL;
}

void UReplaySaveUI::HandleOnSteamVirtualKeyboardClosed(bool wasKeyboardValidated, const FString& enteredText) {
}

void UReplaySaveUI::HandleNameTextCommitted(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UReplaySaveUI::HandleNameTextChanged(const FText& newText) {
}


