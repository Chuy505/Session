#include "MainHUBSplineComponent.h"

UMainHUBSplineComponent::UMainHUBSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->_nodeAlpha = NULL;
    this->_nodeBeta = NULL;
}


