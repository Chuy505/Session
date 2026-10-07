#include "ObjectDropperCamera.h"

AObjectDropperCamera::AObjectDropperCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_activationPitch = -30.00f;
    this->_activationTime = 0.50f;
    this->_collisionRadius = 30.00f;
    this->_freeLinearSpeed = 1500.00f;
    this->_freeAngularSpeed = 150.00f;
    this->_orbitAngularSpeed = 150.00f;
}


