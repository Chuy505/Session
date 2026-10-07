#include "SessionReplayManager.h"

ASessionReplayManager::ASessionReplayManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->_cameraPathDisplayBlueprint = NULL;
    this->_filmerCameraBlueprint = NULL;
    this->_replayEditorPageDefinition = NULL;
    this->_cachedVisualDefinition = NULL;
}


