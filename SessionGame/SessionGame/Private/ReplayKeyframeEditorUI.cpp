#include "ReplayKeyframeEditorUI.h"

UReplayKeyframeEditorUI::UReplayKeyframeEditorUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_keyframeAttributeBlueprint = NULL;
    this->_titleText = NULL;
    this->_attributesPanel = NULL;
}


