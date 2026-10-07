#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EJamTrickDifficultyLevel.h"
#include "JamDifficultyScore.h"
#include "JamTrickDifficulty.h"
#include "JamTricksDifficultyDatabase.generated.h"

class UFlipTrickDefinition;
class UGrindOrSlideDefinition;

UCLASS(Blueprintable)
class SESSIONGAME_API UJamTricksDifficultyDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJamTrickDifficultyLevel, FJamDifficultyScore> DifficultyScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UFlipTrickDefinition>, FJamTrickDifficulty> TricksDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UGrindOrSlideDefinition>, EJamTrickDifficultyLevel> GrindsDifficulty;
    
public:
    UJamTricksDifficultyDatabase();

};

