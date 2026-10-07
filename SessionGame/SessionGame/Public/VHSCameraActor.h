#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "VHSCameraActor.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class SESSIONGAME_API AVHSCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    AVHSCameraActor(const FObjectInitializer& ObjectInitializer);

};

