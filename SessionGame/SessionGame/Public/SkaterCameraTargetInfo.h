#pragma once
#include "CoreMinimal.h"
#include "CameraTargetInfo.h"
#include "SkaterCameraTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkaterCameraTargetInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTargetInfo _grindTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTargetInfo _targetInfo;
    
public:
    SESSIONGAME_API FSkaterCameraTargetInfo();
};

