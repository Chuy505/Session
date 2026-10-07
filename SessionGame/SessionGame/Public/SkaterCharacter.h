#pragma once
#include "CoreMinimal.h"
#include "SkaterCharacterBase.h"
#include "SkaterCharacter.generated.h"

class ASkaterCameraActor;
class UCameraComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USkaterProgression;
class USpotLightComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class SESSIONGAME_API ASkaterCharacter : public ASkaterCharacterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkaterCameraActor* SkaterCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraSocketSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* CameraLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterProgression* _progression;
    
public:
    ASkaterCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkaterProgression* GetProgression() const;
    
};

