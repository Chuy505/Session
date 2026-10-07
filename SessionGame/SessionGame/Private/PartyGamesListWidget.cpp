#include "PartyGamesListWidget.h"

UPartyGamesListWidget::UPartyGamesListWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_labelText = FText::FromString(TEXT("--Label--"));
    this->_label = NULL;
    this->_values = NULL;
}


