#include "CharacterCustomization.h"

ACharacterCustomization::ACharacterCustomization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_customizationCharacter_Blueprint = NULL;
    this->_customizationSkateboard_Blueprint = NULL;
    this->_databaseCategories = NULL;
    this->_databaseCompany = NULL;
    this->_defaultSkaterDefinition = NULL;
    this->_itemMaterial_TextureParameterName = TEXT("AlbedoTexture");
    this->_itemMaterial_VectorParameterName = TEXT("Tint Modifier");
    this->_customizationItemNone = NULL;
    this->_sellingPricePercentage = 0;
    this->_customizationCharacter = NULL;
    this->_customizationSkateboard = NULL;
}


