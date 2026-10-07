#include "Skateboard.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SkateboardMovementComponent.h"

ASkateboard::ASkateboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->SkateboardMovement = CreateDefaultSubobject<USkateboardMovementComponent>(TEXT("SkateboardMoveComp"));
    this->IdleRollingSoundCue = NULL;
    this->ManualsRollingSoundCue = NULL;
    this->PushRollingSoundCue = NULL;
    this->IdleRollingMinSpeedVolume = 0.00f;
    this->IdleRollingMaxSpeedVolume = 0.80f;
    this->IdleRollingMinSpeedPitch = 0.90f;
    this->IdleRollingMaxSpeedPitch = 1.10f;
    this->PowerSlideInSoundCue = NULL;
    this->PowerSlideLoopSoundCue = NULL;
    this->PowerSlideSoundMinRatioTrigger = 0.20f;
    this->PowerSlideSoundMinSpeed = 50.00f;
    this->RevertSoundCue = NULL;
    this->EnablePitch = false;
    this->Mesh->SetupAttachment(RootComponent);
}


