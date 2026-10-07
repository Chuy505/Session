#pragma once
#include "CoreMinimal.h"
#include "SkaterCenterOfGravityBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkaterCenterOfGravityBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneWeight;
    
    SESSIONGAME_API FSkaterCenterOfGravityBoneInfo();
};

