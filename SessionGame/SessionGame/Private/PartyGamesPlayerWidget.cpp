#include "PartyGamesPlayerWidget.h"

UPartyGamesPlayerWidget::UPartyGamesPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_letterWidgetBlueprint = NULL;
    this->_enableAnimation = NULL;
    this->_lettersHorizontalBox = NULL;
    this->_playerNameText = NULL;
    this->_leadPlayerImage = NULL;
    this->_outText = FText::FromString(TEXT("OUT !!!"));
}


