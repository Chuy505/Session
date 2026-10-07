#include "ObjectDropperHUD.h"

UObjectDropperHUD::UObjectDropperHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->_controlsWidgetSwitcher = NULL;
    this->_resetOrientationButton = NULL;
    this->_callBackObjectButton = NULL;
    this->_selectObjectButton = NULL;
    this->_cancelRotationButton = NULL;
    this->_addToSelectionButton = NULL;
    this->_toggleSnappingButton = NULL;
    this->_reticleImage = NULL;
    this->_inventoryGrid = NULL;
    this->_inventory_selectObjectButton = NULL;
    this->_inventory_callBackObjectButton = NULL;
    this->_onValidObjectHighlightedAnim = NULL;
    this->_audioSet = NULL;
}


