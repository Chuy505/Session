#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CategoryMeshTransformSetting.generated.h"

USTRUCT(BlueprintType)
struct FCategoryMeshTransformSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    SESSIONGAME_API FCategoryMeshTransformSetting();
};

