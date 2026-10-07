#include "CustomizationMenuPageContainer.h"

UCustomizationMenuPageContainer::UCustomizationMenuPageContainer() {
    this->_gridWidget_Blueprint = NULL;
    this->_wheelsOrientation_Blueprint = NULL;
    this->CanvasPanel = NULL;
    this->ComingSoonText = NULL;
    this->_rotateLeftRightGamepadButton = NULL;
    this->PanelSkaterInfo = NULL;
    this->PanelExposure = NULL;
    this->SkaterNameText = NULL;
    this->StatCurrentMoney = NULL;
    this->StatCurrentExposure = NULL;
    this->_proWarningText = NULL;
    this->_editButton = NULL;
    this->_deleteButton = NULL;
    this->_onboardingRootPageDefinition = NULL;
    this->_skateboardRootPageDefinition = NULL;
    this->_skaterEditMenuPageDefinition = NULL;
    this->_gearEditMenuPageDefinition = NULL;
    this->_skateboardPageButtonText = FText::FromString(TEXT("Rotate Skateboard"));
    this->_characterPageButtonText = FText::FromString(TEXT("Rotate Character"));
    this->_skateboardGearAudioSet = NULL;
    this->_apparelAudioSet = NULL;
    this->_sellPopupDefinition = NULL;
}


