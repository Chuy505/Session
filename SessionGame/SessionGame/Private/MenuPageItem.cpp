#include "MenuPageItem.h"

UMenuPageItem::UMenuPageItem() : UUserWidget(FObjectInitializer::Get()) {
    this->_selectedBorder = NULL;
    this->_duplicatedTextDistance = 20.00f;
    this->_scrollTimeDelay = 0.50f;
    this->_scrollSpeed = 30.00f;
}

void UMenuPageItem::SetPageItemDefinition(const FMenuPageItemDefinition& newPageItemDefinition) {
}

FMenuPageItemDefinition UMenuPageItem::GetItemDefinition() const {
    return FMenuPageItemDefinition{};
}


