#pragma once
#include "CoreMinimal.h"
#include "AnimMappedBoneDataBase.h"
#include "EAnimMirrorDir.h"
#include "AnimMappedBoneData.generated.h"

USTRUCT(BlueprintType)
struct FAnimMappedBoneData : public FAnimMappedBoneDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir MirrorAxis_Rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir RightAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    SESSIONGAME_API FAnimMappedBoneData();
};

