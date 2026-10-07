#include "NPCQuestGiver.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "CharacterVisualsComponent.h"

ANPCQuestGiver::ANPCQuestGiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCMesh"));
    this->_visualsComp = CreateDefaultSubobject<UCharacterVisualsComponent>(TEXT("NPCVisualsComponent"));
    this->_mesh->SetupAttachment(RootComponent);
}


