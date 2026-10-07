#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "FilmerCameraPlayerController.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API AFilmerCameraPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraHorizontalMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVerticalMoveSpeed;
    
public:
    AFilmerCameraPlayerController(const FObjectInitializer& ObjectInitializer);

};

