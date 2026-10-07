#pragma once
#include "CoreMinimal.h"
#include "SkaterAIBehavior.h"
#include "AIBehaviorFreeRoaming.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class CITYLIFE_API UAIBehaviorFreeRoaming : public USkaterAIBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimalCooldownBetweenObjectSkating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximalCooldownBetweenObjectSkating;
    
public:
    UAIBehaviorFreeRoaming();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSkaterBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

