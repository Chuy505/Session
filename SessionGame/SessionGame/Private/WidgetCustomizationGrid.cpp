#include "WidgetCustomizationGrid.h"

UWidgetCustomizationGrid::UWidgetCustomizationGrid() : UUserWidget(FObjectInitializer::Get()) {
    this->customizationGridItem_Blueprint = NULL;
    this->_numberOfColumns = 0;
    this->_numberOfRows = 0;
    this->UniformGridPanel = NULL;
    this->ItemDetailPanel = NULL;
    this->ObjectPlacementInfoPanel = NULL;
    this->_brandFilterWidget = NULL;
    this->CategoryNameText = NULL;
    this->ItemNameText = NULL;
    this->CompanyNameText = NULL;
    this->CompanyLegalText = NULL;
    this->CompanyURLText = NULL;
    this->ObjectPlacementShortDescriptionText = NULL;
    this->ItemMaxInventoryCountText = NULL;
    this->Slider_ScrollBar = NULL;
    this->Border_ScrollBar = NULL;
    this->_rotateLeftRightGamepadButton = NULL;
    this->_lookAroundGamepadButton = NULL;
    this->_moveInwardGamepadButton = NULL;
    this->_previousFilterButton = NULL;
    this->_nextFilterButton = NULL;
    this->_confirmButton = NULL;
    this->_variantButton = NULL;
    this->_sellButton = NULL;
}


