#include "ReplayEditorUIBase.h"

UReplayEditorUIBase::UReplayEditorUIBase() : UUserWidget(FObjectInitializer::Get()) {
    this->_editorPanel = NULL;
    this->_notificationsPanel = NULL;
}


