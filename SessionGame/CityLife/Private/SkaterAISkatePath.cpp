#include "SkaterAISkatePath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ASkaterAISkatePath::ASkaterAISkatePath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->PathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PathSpline"));
    this->PathSpline->SetupAttachment(RootComponent);
}


