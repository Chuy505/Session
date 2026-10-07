#pragma once
#include "CoreMinimal.h"
#include "SkaterAIScriptedTrick.h"
#include "SpawnerBaseNPC.h"
#include "SpawnerSkaterStation.generated.h"

class ASkaterAISkatePath;
class ASkaterCharacterNPC;

UCLASS(Blueprintable)
class CITYLIFE_API ASpawnerSkaterStation : public ASpawnerBaseNPC {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASkaterCharacterNPC> BPSkaterCharacter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASkaterAISkatePath>> ObjectsToSkate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkaterAIScriptedTrick> TricksList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkaterAIScriptedTrick> ExitTricksList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GrindsList;
    
public:
    ASpawnerSkaterStation(const FObjectInitializer& ObjectInitializer);

};

