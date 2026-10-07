#include "SkateboardEx.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "GrindDetectorComponent.h"
#include "SkateboardExMovementComponent.h"

ASkateboardEx::ASkateboardEx(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
    this->_root = (UStaticMeshComponent*)RootComponent;
    this->_skateboardMovement = CreateDefaultSubobject<USkateboardExMovementComponent>(TEXT("SkateboardMoveComp"));
    this->_grindDetector = CreateDefaultSubobject<UGrindDetectorComponent>(TEXT("GrindDetectorComp"));
    this->_physMaterialFlipper = NULL;
    this->_physMaterialFlipperGripTape = NULL;
    this->_physMaterialFlipperGrinds = NULL;
    this->_physMaterialFlipperGripTapeGrinds = NULL;
    this->_physMaterialFlipperPowerSlides = NULL;
    this->_physMaterialFlipperWithoutFriction = NULL;
    this->_physMaterialFlipperCaspers = NULL;
    this->_physMaterialFlipperPrimo = NULL;
    this->_physMaterialTruck = NULL;
    this->_physMaterialTruckGrinds = NULL;
    this->_physMaterialTruckWithoutFriction = NULL;
    this->_physMaterialWheel = NULL;
    this->_physMaterialWheelGrinds = NULL;
    this->_physMaterialWheelPowerSlides = NULL;
    this->_physMaterialWheelWithoutFriction = NULL;
    this->_physMaterialWheelPrimo = NULL;
    this->_brokenBoardStateDataAsset = NULL;
    this->_pmatFlipperAdjusted = NULL;
    this->_pmatTruckAdjusted = NULL;
    this->_pmatWheelAdjusted = NULL;
}

void ASkateboardEx::HandleOnWheelComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASkateboardEx::HandleOnFlipperComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


