#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdAgentInterface -FallbackName=CrowdAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EAutoRevertMode.h"
#include "EBoardBodyRotationMode.h"
#include "EBoardControlMode.h"
#include "EBoardFlipSpeedMode.h"
#include "EBoardRotationSpeedMode.h"
#include "EBodyRotationMode.h"
#include "ECatchMode.h"
#include "ECatchOrientState.h"
#include "EFootPositionTransitionType.h"
#include "EFootPositionType.h"
#include "EGrabState.h"
#include "EGrindDetectionMode.h"
#include "EPushState.h"
#include "ESkaterBreakingMethod.h"
#include "EStanceType.h"
#include "OnFootAnimParams.h"
#include "SkateboardingAnimParams.h"
#include "Templates/SubclassOf.h"
#include "SkaterCharacterBase.generated.h"

class AActor;
class ASkateboard;
class ASkateboardEx;
class UFlipTrickDefinition;
class UPrimitiveComponent;
class USkateboardAnimInstance;
class USkaterAnimInstance;
class USkaterAudioData;
class USkaterMovementComponent;
class USkaterTrickEventComponent;
class USkaterVisualsDefinition;
class USkeletalMeshComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class SESSIONGAME_API ASkaterCharacterBase : public ACharacter, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkateboard> SkateboardBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkateboardEx> SkateboardExBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SkaterBodyPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* _trajectorySpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkaterTrickEventComponent* _skaterTrickComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterAudioData* _audioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRagDoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetRagDollDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicalAnimationBlendWeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterVisualsDefinition* _skaterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 _isCranking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSkateboardingAnimParams _skateboardingAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FOnFootAnimParams _onFootAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float _replicatedBankingRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float _replicatedTargetRotationRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EBoardControlMode _boardControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECatchMode _catchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECatchOrientState _catchOrientState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float _catchOrientPitchRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float _catchOrientYawRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float _grindPitchRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float _grindYawRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool _requestEndPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool _replicatedIsOnBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool _replicatedIsOnGrind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName _replicatedGrindName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* _replicatedGrindActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float _trickPopHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool _replicatedIsTrickPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator _replicatedMeshRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator _replicatedSkateboardMeshRotator;
    
public:
    ASkaterCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPendingApplyToggleOnBoard();
    
    UFUNCTION(BlueprintCallable)
    void SetGrindDetectionMode(EGrindDetectionMode newGrindDetectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCatchMode(ECatchMode newCatchMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyRotationMode(EBodyRotationMode newBodyRotationMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBoardRotationSpeedMode(EBoardRotationSpeedMode newRotationSpeedMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBoardRotationMode(EBoardBodyRotationMode newBodyRotationMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBoardFlipSpeedMode(EBoardFlipSpeedMode newFlipSpeedMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoRevertMode(EAutoRevertMode newAutoRevertMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCStopBraking(ESkaterBreakingMethod newBrakingMethod);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCStartBraking(ESkaterBreakingMethod newBrakingMethod);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetTrick(const UFlipTrickDefinition* Trick, float trickPopHeight, float trickPopRatio);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerRPCSetTargetBankingRatio(float bankingRatio);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetPushState(EPushState newPushState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetOnBoard(bool newIsOnBoard);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetManuals(bool newIsManual, bool newIsNoseManual, float newManualRatio);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetGrab(EGrabState newGrabState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetCranking(bool newIsCranking);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCPop();
    
    UFUNCTION(BlueprintCallable)
    void Push();
    
    UFUNCTION(BlueprintCallable)
    void Pop();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool fromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCStopBraking(ESkaterBreakingMethod newBrakingMethod);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCStartBraking(ESkaterBreakingMethod newBrakingMethod);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCSetTrick(const UFlipTrickDefinition* Trick, float trickPopHeight, float trickPopRatio);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCSetTargetBankingRatio(float bankingRatio);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCSetPushState(EPushState newPushState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCSetOnBoard(bool newIsOnBoard);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCSetManuals(bool newIsManual, bool newIsNoseManual, float newManualRatio);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCSetGrab(EGrabState newGrabState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCSetCranking(bool newIsCranking);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCPop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkatingSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReverting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPushing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPickingUp() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhysicalAnimationEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnBoard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInNoseManual() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInManual() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoingThrowdown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCranking() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkaterMovementComponent* GetSkaterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkaterAnimInstance* GetSkaterAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkateboardMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkateboardingAnimParams GetSkateboardingAnimParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkateboardAnimInstance* GetSkateboardAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGrindsSlidesCameraEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGrindDetectionMode GetGrindDetectionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGrabState GetGrabState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStanceType GetCurrentStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPushState GetCurrentPushState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentGrindName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFootPositionTransitionType GetCurrentFootPositionTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFootPositionType GetCurrentFootPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentFlipTrickName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECatchOrientState GetCatchOrientState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECatchMode GetCatchMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBodyRotationMode GetBodyRotationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBoardRotationSpeedMode GetBoardRotationSpeedMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetBoardRotationContinuousMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBoardFlipSpeedMode GetBoardFlipSpeedMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetBoardFlipContinuousMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBoardBodyRotationMode GetBoardBodyRotationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBankingRatio() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventEnablePhysicalAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventDisablePhysicalAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPush();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBankStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBankEnd();
    

    // Fix for true pure virtual functions not being implemented
};

