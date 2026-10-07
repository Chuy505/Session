#include "CustomizationCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "CustomizationSpringArmComponent.h"

ACustomizationCharacter::ACustomizationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->_characterMeshRotationSpeed = 0.00f;
    this->_cameraAnchor = CreateDefaultSubobject<UChildActorComponent>(TEXT("CameraAnchor"));
    const FProperty* p__springArmComponent_Parent = GetClass()->FindPropertyByName("_springArmComponent");
    this->_springArmComponent = CreateDefaultSubobject<UCustomizationSpringArmComponent>(TEXT("CameraBoom"));
    this->_skaterSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkaterMesh"));
    this->_cameraAnchor->SetupAttachment(p__springArmComponent_Parent->ContainerPtrToValuePtr<UCustomizationSpringArmComponent>(this));
    this->_skaterSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->_springArmComponent->SetupAttachment(RootComponent);
}


