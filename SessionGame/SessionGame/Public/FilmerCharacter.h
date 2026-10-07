#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "FilmerCharacter.generated.h"

class UCameraComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class SESSIONGAME_API AFilmerCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamerMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamerMaxTargetArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* FilmerSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FilmerCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* FilmerSceneCaptureComponent2D;
    
    AFilmerCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void DetachSpringArmComponent();
    
    UFUNCTION(BlueprintCallable)
    void DetachCameraComponent();
    
    UFUNCTION(BlueprintCallable)
    void AttachSpringArmComponent(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void AttachCameraComponent();
    
};

