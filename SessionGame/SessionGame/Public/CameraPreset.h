#pragma once
#include "CoreMinimal.h"
#include "CameraSpeedData.h"
#include "CameraTargetInfo.h"
#include "CameraPreset.generated.h"

USTRUCT(BlueprintType)
struct FCameraPreset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTargetInfo _targetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSpeedData _cameraSpeedData;
    
public:
    SESSIONGAME_API FCameraPreset();
};

