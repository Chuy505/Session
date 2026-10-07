#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TrackedTargetInterface.h"
#include "QuestLocation.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API AQuestLocation : public AActor, public ITrackedTargetInterface {
    GENERATED_BODY()
public:
    AQuestLocation(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

