#include "SkaterTrajectoryCurve.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ASkaterTrajectoryCurve::ASkaterTrajectoryCurve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->_root = (USceneComponent*)RootComponent;
    this->_trajectorySplineFromStart = CreateDefaultSubobject<USplineComponent>(TEXT("TrajectorySplineFromStart"));
    this->_trajectorySplineFromHighestPoint = CreateDefaultSubobject<USplineComponent>(TEXT("TrajectorySplineFromHighestPoint"));
    this->_trajectorySplineFromHighestPoint->SetupAttachment(RootComponent);
    this->_trajectorySplineFromStart->SetupAttachment(RootComponent);
}


