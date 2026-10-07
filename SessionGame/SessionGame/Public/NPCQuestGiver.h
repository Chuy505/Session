#pragma once
#include "CoreMinimal.h"
#include "QuestGiver.h"
#include "NPCQuestGiver.generated.h"

class UCharacterVisualsComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SESSIONGAME_API ANPCQuestGiver : public AQuestGiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterVisualsComponent* _visualsComp;
    
public:
    ANPCQuestGiver(const FObjectInitializer& ObjectInitializer);

};

