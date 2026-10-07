#include "ReplayCameraPathDisplay.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AReplayCameraPathDisplay::AReplayCameraPathDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->_root = (USceneComponent*)RootComponent;
    this->_cameraPathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("CameraPathSpline"));
    this->_cameraMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
    this->_pathMesh = NULL;
    this->_framePointMesh = NULL;
    this->_timePointMesh = NULL;
    this->_timePointInterval = 0.30f;
    this->_cameraMeshComp->SetupAttachment(RootComponent);
    this->_cameraPathSpline->SetupAttachment(RootComponent);
}


