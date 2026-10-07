#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "SpawnerBaseNPC.h"
#include "SpawnerPedestrian.generated.h"

class AActor;
class APedestrianCharacter;

UCLASS(Blueprintable)
class ASpawnerPedestrian : public ASpawnerBaseNPC {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APedestrianCharacter> _pedestrianCharacter;
    
public:
    ASpawnerPedestrian(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSpawnedPedestrianEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

