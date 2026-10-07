#include "MenuPage.h"

UMenuPage::UMenuPage() : UUserWidget(FObjectInitializer::Get()) {
    this->PageItem_SelectionBlueprint = NULL;
    this->PageItem_MultiOptionBlueprint = NULL;
    this->PageItem_ProgressBarBlueprint = NULL;
    this->PageItem_SliderBarBlueprint = NULL;
    this->_scrollBarPanel = NULL;
    this->_scrollBarSlider = NULL;
    this->_maxVisibleItems = 10;
}


