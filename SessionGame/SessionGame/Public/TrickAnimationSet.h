#pragma once
#include "CoreMinimal.h"
#include "TrickAnimationSet.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FTrickAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* TrickBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* TrickLoopBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* CatchBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* LandBlendSpace;
    
    SESSIONGAME_API FTrickAnimationSet();
};

