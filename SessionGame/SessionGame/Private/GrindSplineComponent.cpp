#include "GrindSplineComponent.h"

UGrindSplineComponent::UGrindSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_generateCollisionBox = true;
    this->_canGrind = true;
    this->_grindType = EGrindType::GRIND_Ledge;
}


