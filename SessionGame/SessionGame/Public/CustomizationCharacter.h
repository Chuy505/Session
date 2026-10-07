#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkaterInstance.h"
#include "CustomizationCharacter.generated.h"

class UChildActorComponent;
class UCustomizationSpringArmComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SESSIONGAME_API ACustomizationCharacter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkaterInstance _currentSkaterInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _characterMeshRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* _cameraAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomizationSpringArmComponent* _springArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _skaterSkeletalMeshComponent;
    
public:
    ACustomizationCharacter(const FObjectInitializer& ObjectInitializer);

};

