#include "MainHUBManager.h"

AMainHUBManager::AMainHUBManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_characterCustomization_Blueprint = NULL;
    this->_editSkateNameWidget_Blueprint = NULL;
    this->_characterSpawnPoint = NULL;
    this->_nodeSelector = NULL;
    this->_originWaypoint = NULL;
    this->_skateboardCamerSpawnPoint = NULL;
    this->_skateboardSpawnPoint = NULL;
    this->_splineAnchor = NULL;
    this->_splineAnchorPivot = NULL;
    this->_targetWaypoint = NULL;
    this->_startLookAtSelectionNodeType = EMainHUBSelectionNodeType::VideoReplay_Node;
    this->_startLookAtOnboardingSelectionNodeType = EMainHUBSelectionNodeType::Customization_Node;
    this->_rotationSpeed = 1.75f;
    this->_anchorPivotRotationSpeed = 3.50f;
    this->_maxLookAroundYaw = 45.00f;
    this->_maxLookAroundPitch = 45.00f;
    this->_skateboardCameraAttachNode = NULL;
}


