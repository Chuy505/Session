#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnMovementComponent -FallbackName=PawnMovementComponent
#include "ESkateboardMovementMode.h"
#include "SkateboardMovementComponentInterface.h"
#include "SkateboardExMovementComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USkateboardConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API USkateboardExMovementComponent : public UPawnMovementComponent, public ISkateboardMovementComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkateboardConfig* _skateboardConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _debugDisableFlipScoopNormalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _debugDisplayTruckBankingInfo;
    
public:
    USkateboardExMovementComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentHitWheelFrontRight(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentHitWheelFrontLeft(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentHitWheelBackRight(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentHitWheelBackLeft(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentHitFlipper(UPrimitiveComponent* hitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMovementModeChanged(ESkateboardMovementMode NewMovementMode, ESkateboardMovementMode previousMovementMode);
    

    // Fix for true pure virtual functions not being implemented
};

