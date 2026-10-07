#include "EditSkaterNameWidget.h"

UEditSkaterNameWidget::UEditSkaterNameWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_nameEditableText = NULL;
    this->_confirmButton = NULL;
    this->_audioSet = NULL;
}

void UEditSkaterNameWidget::HandleOnSteamVirtualKeyboardClosed(bool wasKeyboardValidated, const FString& enteredText) {
}

void UEditSkaterNameWidget::HandleNameTextCommitted(const FText& newText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UEditSkaterNameWidget::HandleNameTextChanged(const FText& newText) {
}


