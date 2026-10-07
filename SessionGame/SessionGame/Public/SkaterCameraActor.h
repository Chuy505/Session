#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "SkaterCameraActor.generated.h"

class USessionCameraData;

UCLASS(Blueprintable)
class SESSIONGAME_API ASkaterCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USessionCameraData* _cameraData;
    
public:
    ASkaterCameraActor(const FObjectInitializer& ObjectInitializer);

};

