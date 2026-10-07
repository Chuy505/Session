#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReplayCameraShakeConfig.generated.h"

class UCurveFloat;
class UMatineeCameraShake;

USTRUCT(BlueprintType)
struct FReplayCameraShakeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> CameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AmplitudeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FrequencyCurve;
    
    REPLAYMODULE_API FReplayCameraShakeConfig();
};

