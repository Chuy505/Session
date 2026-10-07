#include "SessionReplayFilmerCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

ASessionReplayFilmerCamera::ASessionReplayFilmerCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("CollisionCapsule"))) {
    this->CollisionCapsule = (UCapsuleComponent*)RootComponent;
    this->_maxMoveSpeed = 550.00f;
    this->_acceleration = 550.00f;
    this->_decelerationFactor = 2.00f;
    this->_minDistToFloor = 12.00f;
    this->_maxDistToFloor = 210.00f;
    this->_distToFloorInputSpeed = 70.00f;
    this->_heightAdjustmentSpeed = 10.00f;
    this->_zoomSpeed = 5.00f;
    this->_zoomMaxFocalLength = 35.00f;
    this->_lookAtOffsetSpeed = 100.00f;
}


