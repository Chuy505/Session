#pragma once
#include "CoreMinimal.h"
#include "AnimMappedBoneDataBase.h"
#include "AnimMappedIgnoredBoneData.generated.h"

USTRUCT(BlueprintType)
struct FAnimMappedIgnoredBoneData : public FAnimMappedBoneDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    SESSIONGAME_API FAnimMappedIgnoredBoneData();
};

