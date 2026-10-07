#include "SkaterCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

ASkaterCharacter::ASkaterCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkaterCamera = NULL;
    this->FollowCamera = NULL;
    this->CameraSocketSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSocketSpringArm"));
    this->CameraSocket = CreateDefaultSubobject<USceneComponent>(TEXT("CameraSocket"));
    this->CameraLight = NULL;
    this->SceneCaptureComponent2D = NULL;
    this->_progression = NULL;
    this->CameraSocket->SetupAttachment(CameraSocketSpringArm);
    this->CameraSocketSpringArm->SetupAttachment(RootComponent);
}

USkaterProgression* ASkaterCharacter::GetProgression() const {
    return NULL;
}


