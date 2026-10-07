#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TrackedTargetInterface.h"
#include "ObjectDropperQuestObject.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UObjectDropperQuestObject : public UActorComponent, public ITrackedTargetInterface {
    GENERATED_BODY()
public:
    UObjectDropperQuestObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

