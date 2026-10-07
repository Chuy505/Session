#pragma once
#include "CoreMinimal.h"
#include "RevertAnimData.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FRevertAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* OnFlatBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* OnLandBlendSpace;
    
    SESSIONGAME_API FRevertAnimData();
};

