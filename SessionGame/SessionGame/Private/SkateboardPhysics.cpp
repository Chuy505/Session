#include "SkateboardPhysics.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "SkateboardPhysicsComponent.h"

ASkateboardPhysics::ASkateboardPhysics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->_tricksDb = NULL;
    this->_skaterConfig = NULL;
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->SkateboardMovement = CreateDefaultSubobject<USkateboardPhysicsComponent>(TEXT("SkateboardMoveComp"));
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->CameraBoom->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(CameraBoom);
    this->Mesh->SetupAttachment(RootComponent);
}


