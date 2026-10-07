#pragma once
#include "CoreMinimal.h"
#include "AnimMappedBoneDataBase.h"
#include "AnimMappedMirroredBoneData.generated.h"

USTRUCT(BlueprintType)
struct FAnimMappedMirroredBoneData : public FAnimMappedBoneDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MirrorBoneName;
    
    SESSIONGAME_API FAnimMappedMirroredBoneData();
};

