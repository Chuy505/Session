#include "SkaterAIController.h"
#include "SkaterAIObjectProbeComponent.h"
#include "SkaterAIPathFollowingComponent.h"
#include "SkaterAITricksHandlerComponent.h"

ASkaterAIController::ASkaterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkaterAIPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->TricksHandler = CreateDefaultSubobject<USkaterAITricksHandlerComponent>(TEXT("TricksHandler"));
    this->ObjectProbe = CreateDefaultSubobject<USkaterAIObjectProbeComponent>(TEXT("ObjectProbe"));
    this->Behavior = NULL;
    this->MinimumZPosition = -20000.00f;
}


