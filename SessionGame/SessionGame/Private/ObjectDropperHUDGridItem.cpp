#include "ObjectDropperHUDGridItem.h"

UObjectDropperHUDGridItem::UObjectDropperHUDGridItem() : UUserWidget(FObjectInitializer::Get()) {
    this->_objectImage = NULL;
    this->_selectedImage = NULL;
    this->_questItemImage = NULL;
    this->_quantityText = NULL;
    this->_trackingVisualParameters = NULL;
}


