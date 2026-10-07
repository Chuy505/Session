#pragma once
#include "CoreMinimal.h"
#include "ChallengeDataBase.h"
#include "GrindChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FGrindChallengeData : public FChallengeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GrindNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSingleGrindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSingleGrindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTotalGrindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTotalGrindDistance;
    
    SESSIONGAME_API FGrindChallengeData();
};

