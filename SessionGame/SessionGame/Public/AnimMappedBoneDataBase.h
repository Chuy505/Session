#pragma once
#include "CoreMinimal.h"
#include "AnimMappedBoneDataBase.generated.h"

USTRUCT(BlueprintType)
struct FAnimMappedBoneDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Muted;
    
    SESSIONGAME_API FAnimMappedBoneDataBase();
};

