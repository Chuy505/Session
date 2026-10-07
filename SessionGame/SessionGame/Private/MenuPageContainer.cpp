#include "MenuPageContainer.h"

UMenuPageContainer::UMenuPageContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->_rootPageDefinition = NULL;
    this->_pauseGame = true;
    this->_preventFocusChange = false;
    this->_navigationEnabled = false;
    this->_inputModePush = ESessionInputModeType::UIOnly;
    this->_confirmButtonWidgetName = TEXT("_confirmButton");
    this->_defaultAudioSet = NULL;
}



