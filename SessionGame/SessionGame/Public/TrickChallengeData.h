#pragma once
#include "CoreMinimal.h"
#include "ChallengeDataBase.h"
#include "EEventLineTrickRotationType.h"
#include "TrickChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FTrickChallengeData : public FChallengeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TrickNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventLineTrickRotationType TrickRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapTargetHeight;
    
    SESSIONGAME_API FTrickChallengeData();
};

