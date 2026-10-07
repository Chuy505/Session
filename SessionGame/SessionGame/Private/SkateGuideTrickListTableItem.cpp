#include "SkateGuideTrickListTableItem.h"

USkateGuideTrickListTableItem::USkateGuideTrickListTableItem() : UUserWidget(FObjectInitializer::Get()) {
    this->Text = NULL;
    this->TextPanel = NULL;
    this->ScaleBoxPanel = NULL;
    this->TopSeperator = NULL;
    this->BottomSeperator = NULL;
    this->_trickListPaddingBetweenInputs = 0;
    this->_trickListTitleImageSize = 0;
}


