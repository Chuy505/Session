#include "ObjectDropperHUDInventoryGrid.h"

UObjectDropperHUDInventoryGrid::UObjectDropperHUDInventoryGrid() : UUserWidget(FObjectInitializer::Get()) {
    this->_tabsPanel = NULL;
    this->_itemsPanel = NULL;
    this->_scrollbox = NULL;
    this->_selectedObjectNameText = NULL;
    this->_itemsPerRow = 0;
    this->_itemReference = NULL;
    this->_tabReference = NULL;
}


