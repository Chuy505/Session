#include "FilmerCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

AFilmerCharacter::AFilmerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterMoveSpeed = 0.00f;
    this->CamerMoveSpeed = 0.00f;
    this->CamerMaxTargetArmLength = 0.00f;
    this->FilmerSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("FilmerSpringArmComponent"));
    this->FilmerCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FilmerCameraComponent"));
    this->FilmerSceneCaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("FilmerSceneCaptureComponent2D"));
    this->FilmerCameraComponent->SetupAttachment(FilmerSpringArmComponent);
    this->FilmerSceneCaptureComponent2D->SetupAttachment(FilmerCameraComponent);
    this->FilmerSpringArmComponent->SetupAttachment(RootComponent);
}

void AFilmerCharacter::MoveRight(float Value) {
}

void AFilmerCharacter::MoveForward(float Value) {
}

void AFilmerCharacter::DetachSpringArmComponent() {
}

void AFilmerCharacter::DetachCameraComponent() {
}

void AFilmerCharacter::AttachSpringArmComponent(USceneComponent* SceneComponent) {
}

void AFilmerCharacter::AttachCameraComponent() {
}


