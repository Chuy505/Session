#include "InteractionPromptUI.h"

UInteractionPromptUI::UInteractionPromptUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_defaultInteractionDelay = 0.75f;
    this->_audioSet = NULL;
    this->_promptButton = NULL;
}


