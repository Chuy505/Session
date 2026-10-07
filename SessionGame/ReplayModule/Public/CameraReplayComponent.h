#pragma once
#include "CoreMinimal.h"
#include "ReplayComponentBase.h"
#include "CameraReplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REPLAYMODULE_API UCameraReplayComponent : public UReplayComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordRotation;
    
public:
    UCameraReplayComponent(const FObjectInitializer& ObjectInitializer);

};

