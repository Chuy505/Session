#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "ChallengeManager.generated.h"

class UChallengeDefinitionBase;
class UChallengesHUD;

UCLASS(Blueprintable)
class SESSIONGAME_API AChallengeManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _challengeDefinitionsRootPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxDailyChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxWeeklyChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _delayedChallengeValidationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 _autoGenerateChallenges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UChallengeDefinitionBase*> _availableChallenges;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 _historicalChallengesCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint32> _historicalChallengesCountPerCity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChallengesHUD> _challengeHUDBlueprint;
    
public:
    AChallengeManager(const FObjectInitializer& ObjectInitializer);

};

