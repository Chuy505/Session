#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AnimMappedBoneData.h"
#include "AnimMappedIgnoredBoneData.h"
#include "AnimMappedMirroredBoneData.h"
#include "EAnimMirrorDir.h"
#include "AnimMirrorDataAsset.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UAnimMirrorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir DefaultMirrorAxis_Rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir DefaultRightAxis;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimMappedBoneData> MappedBonesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimMappedMirroredBoneData> MappedMirroredBonesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkateboardBoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimMappedMirroredBoneData> GoofyBonesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimMappedIgnoredBoneData> MappedIgnoredBonesData;
    
public:
    UAnimMirrorDataAsset();

};

