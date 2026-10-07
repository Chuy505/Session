#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "SpawnerBaseNPC.h"
#include "SpawnerSkater.generated.h"

class AActor;
class ASkaterCharacterNPC;

UCLASS(Blueprintable)
class ASpawnerSkater : public ASpawnerBaseNPC {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASkaterCharacterNPC> _skaterCharacter;
    
public:
    ASpawnerSkater(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSpawnedSkaterEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

