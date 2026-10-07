#include "GrindDetectorTester.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AGrindDetectorTester::AGrindDetectorTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->_root = (USceneComponent*)RootComponent;
    this->_boardControllerComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BoardController"));
    this->_flipperComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flipper"));
    this->IsGrinding = false;
    this->_boardControllerComponent->SetupAttachment(RootComponent);
    this->_flipperComponent->SetupAttachment(_boardControllerComponent);
}


