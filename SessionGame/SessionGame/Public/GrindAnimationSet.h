#pragma once
#include "CoreMinimal.h"
#include "GrindAnimationSet.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FGrindAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRatio;
    
    SESSIONGAME_API FGrindAnimationSet();
};

