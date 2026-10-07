#include "SkaterCharacterBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"
#include "SkaterMovementComponent.h"
#include "SkaterSkeletalMeshComponent.h"
#include "SkaterTrickEventComponent.h"

ASkaterCharacterBase::ASkaterCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkaterSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USkaterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->SkateboardBlueprint = NULL;
    this->SkateboardExBlueprint = NULL;
    this->SkaterBodyPrimitive = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkaterBodyPrimitive"));
    this->_trajectorySpline = NULL;
    this->_skaterTrickComponent = CreateDefaultSubobject<USkaterTrickEventComponent>(TEXT("SkaterTrickComponent"));
    this->EnableRagDoll = false;
    this->ResetRagDollDelay = 3.00f;
    this->PhysicalAnimationBlendWeightMultiplier = 1.00f;
    this->_skaterDefinition = NULL;
    this->_isCranking = false;
    this->_replicatedBankingRatio = 0.00f;
    this->_replicatedTargetRotationRatio = 0.00f;
    this->_boardControlMode = EBoardControlMode::BCMODE_Auto;
    this->_catchMode = ECatchMode::CMODE_Undefined;
    this->_catchOrientState = ECatchOrientState::None;
    this->_catchOrientPitchRatio = 0.00f;
    this->_catchOrientYawRatio = 0.00f;
    this->_grindPitchRatio = 0.00f;
    this->_grindYawRatio = 0.00f;
    this->_requestEndPush = false;
    this->_replicatedIsOnBoard = false;
    this->_replicatedIsOnGrind = false;
    this->_replicatedGrindActor = NULL;
    this->_trickPopHeight = 0.00f;
    this->_replicatedIsTrickPending = false;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->SkaterBodyPrimitive->SetupAttachment(RootComponent);
}

void ASkaterCharacterBase::SetPendingApplyToggleOnBoard() {
}

void ASkaterCharacterBase::SetGrindDetectionMode(EGrindDetectionMode newGrindDetectionMode) {
}

void ASkaterCharacterBase::SetCatchMode(ECatchMode newCatchMode) {
}

void ASkaterCharacterBase::SetBodyRotationMode(EBodyRotationMode newBodyRotationMode) {
}

void ASkaterCharacterBase::SetBoardRotationSpeedMode(EBoardRotationSpeedMode newRotationSpeedMode) {
}

void ASkaterCharacterBase::SetBoardRotationMode(EBoardBodyRotationMode newBodyRotationMode) {
}

void ASkaterCharacterBase::SetBoardFlipSpeedMode(EBoardFlipSpeedMode newFlipSpeedMode) {
}

void ASkaterCharacterBase::SetAutoRevertMode(EAutoRevertMode newAutoRevertMode) {
}

void ASkaterCharacterBase::ServerRPCStopBraking_Implementation(ESkaterBreakingMethod newBrakingMethod) {
}
bool ASkaterCharacterBase::ServerRPCStopBraking_Validate(ESkaterBreakingMethod newBrakingMethod) {
    return true;
}

void ASkaterCharacterBase::ServerRPCStartBraking_Implementation(ESkaterBreakingMethod newBrakingMethod) {
}
bool ASkaterCharacterBase::ServerRPCStartBraking_Validate(ESkaterBreakingMethod newBrakingMethod) {
    return true;
}

void ASkaterCharacterBase::ServerRPCSetTrick_Implementation(const UFlipTrickDefinition* Trick, float trickPopHeight, float trickPopRatio) {
}
bool ASkaterCharacterBase::ServerRPCSetTrick_Validate(const UFlipTrickDefinition* Trick, float trickPopHeight, float trickPopRatio) {
    return true;
}

void ASkaterCharacterBase::ServerRPCSetTargetBankingRatio_Implementation(float bankingRatio) {
}
bool ASkaterCharacterBase::ServerRPCSetTargetBankingRatio_Validate(float bankingRatio) {
    return true;
}

void ASkaterCharacterBase::ServerRPCSetPushState_Implementation(EPushState newPushState) {
}
bool ASkaterCharacterBase::ServerRPCSetPushState_Validate(EPushState newPushState) {
    return true;
}

void ASkaterCharacterBase::ServerRPCSetOnBoard_Implementation(bool newIsOnBoard) {
}
bool ASkaterCharacterBase::ServerRPCSetOnBoard_Validate(bool newIsOnBoard) {
    return true;
}

void ASkaterCharacterBase::ServerRPCSetManuals_Implementation(bool newIsManual, bool newIsNoseManual, float newManualRatio) {
}
bool ASkaterCharacterBase::ServerRPCSetManuals_Validate(bool newIsManual, bool newIsNoseManual, float newManualRatio) {
    return true;
}

void ASkaterCharacterBase::ServerRPCSetGrab_Implementation(EGrabState newGrabState) {
}
bool ASkaterCharacterBase::ServerRPCSetGrab_Validate(EGrabState newGrabState) {
    return true;
}

void ASkaterCharacterBase::ServerRPCSetCranking_Implementation(bool newIsCranking) {
}
bool ASkaterCharacterBase::ServerRPCSetCranking_Validate(bool newIsCranking) {
    return true;
}

void ASkaterCharacterBase::ServerRPCPop_Implementation() {
}
bool ASkaterCharacterBase::ServerRPCPop_Validate() {
    return true;
}

void ASkaterCharacterBase::Push() {
}

void ASkaterCharacterBase::Pop() {
}

void ASkaterCharacterBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASkaterCharacterBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool fromSweep, const FHitResult& SweepResult) {
}

void ASkaterCharacterBase::MulticastRPCStopBraking_Implementation(ESkaterBreakingMethod newBrakingMethod) {
}

void ASkaterCharacterBase::MulticastRPCStartBraking_Implementation(ESkaterBreakingMethod newBrakingMethod) {
}

void ASkaterCharacterBase::MulticastRPCSetTrick_Implementation(const UFlipTrickDefinition* Trick, float trickPopHeight, float trickPopRatio) {
}

void ASkaterCharacterBase::MulticastRPCSetTargetBankingRatio_Implementation(float bankingRatio) {
}

void ASkaterCharacterBase::MulticastRPCSetPushState_Implementation(EPushState newPushState) {
}

void ASkaterCharacterBase::MulticastRPCSetOnBoard_Implementation(bool newIsOnBoard) {
}

void ASkaterCharacterBase::MulticastRPCSetManuals_Implementation(bool newIsManual, bool newIsNoseManual, float newManualRatio) {
}

void ASkaterCharacterBase::MulticastRPCSetGrab_Implementation(EGrabState newGrabState) {
}

void ASkaterCharacterBase::MulticastRPCSetCranking_Implementation(bool newIsCranking) {
}

void ASkaterCharacterBase::MulticastRPCPop_Implementation() {
}

bool ASkaterCharacterBase::IsSkatingSwitch() const {
    return false;
}

bool ASkaterCharacterBase::IsReverting() const {
    return false;
}

bool ASkaterCharacterBase::IsPushing() const {
    return false;
}

bool ASkaterCharacterBase::IsPowerSliding() const {
    return false;
}

bool ASkaterCharacterBase::IsPickingUp() const {
    return false;
}

bool ASkaterCharacterBase::IsPhysicalAnimationEnabled() const {
    return false;
}

bool ASkaterCharacterBase::IsOnBoard() const {
    return false;
}

bool ASkaterCharacterBase::IsInNoseManual() const {
    return false;
}

bool ASkaterCharacterBase::IsInManual() const {
    return false;
}

bool ASkaterCharacterBase::IsInitialized() const {
    return false;
}

bool ASkaterCharacterBase::IsDoingThrowdown() const {
    return false;
}

bool ASkaterCharacterBase::IsCranking() const {
    return false;
}

void ASkaterCharacterBase::HandleOnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

USkaterMovementComponent* ASkaterCharacterBase::GetSkaterMovement() const {
    return NULL;
}

USkaterAnimInstance* ASkaterCharacterBase::GetSkaterAnimInstance() const {
    return NULL;
}

USkeletalMeshComponent* ASkaterCharacterBase::GetSkateboardMesh() const {
    return NULL;
}

FSkateboardingAnimParams ASkaterCharacterBase::GetSkateboardingAnimParams() const {
    return FSkateboardingAnimParams{};
}

USkateboardAnimInstance* ASkaterCharacterBase::GetSkateboardAnimInstance() const {
    return NULL;
}

bool ASkaterCharacterBase::GetIsGrindsSlidesCameraEnabled() const {
    return false;
}

EGrindDetectionMode ASkaterCharacterBase::GetGrindDetectionMode() const {
    return EGrindDetectionMode::GDMODE_Undefined;
}

EGrabState ASkaterCharacterBase::GetGrabState() const {
    return EGrabState::None;
}

EStanceType ASkaterCharacterBase::GetCurrentStance() const {
    return EStanceType::Regular;
}

EPushState ASkaterCharacterBase::GetCurrentPushState() const {
    return EPushState::None;
}

FName ASkaterCharacterBase::GetCurrentGrindName() const {
    return NAME_None;
}

EFootPositionTransitionType ASkaterCharacterBase::GetCurrentFootPositionTransition() const {
    return EFootPositionTransitionType::TRANS_None;
}

EFootPositionType ASkaterCharacterBase::GetCurrentFootPosition() const {
    return EFootPositionType::None;
}

FName ASkaterCharacterBase::GetCurrentFlipTrickName() const {
    return NAME_None;
}

ECatchOrientState ASkaterCharacterBase::GetCatchOrientState() const {
    return ECatchOrientState::None;
}

ECatchMode ASkaterCharacterBase::GetCatchMode() const {
    return ECatchMode::CMODE_Undefined;
}

EBodyRotationMode ASkaterCharacterBase::GetBodyRotationMode() const {
    return EBodyRotationMode::BRMODE_Undefined;
}

EBoardRotationSpeedMode ASkaterCharacterBase::GetBoardRotationSpeedMode() const {
    return EBoardRotationSpeedMode::BRSMODE_Undefined;
}

uint8 ASkaterCharacterBase::GetBoardRotationContinuousMode() const {
    return 0;
}

EBoardFlipSpeedMode ASkaterCharacterBase::GetBoardFlipSpeedMode() const {
    return EBoardFlipSpeedMode::BFSMODE_Undefined;
}

uint8 ASkaterCharacterBase::GetBoardFlipContinuousMode() const {
    return 0;
}

EBoardBodyRotationMode ASkaterCharacterBase::GetBoardBodyRotationMode() const {
    return EBoardBodyRotationMode::BBRMODE_BodyCentric;
}

float ASkaterCharacterBase::GetBankingRatio() const {
    return 0.0f;
}







void ASkaterCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkaterCharacterBase, _isCranking);
    DOREPLIFETIME(ASkaterCharacterBase, _skateboardingAnimParams);
    DOREPLIFETIME(ASkaterCharacterBase, _onFootAnimParams);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedBankingRatio);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedTargetRotationRatio);
    DOREPLIFETIME(ASkaterCharacterBase, _boardControlMode);
    DOREPLIFETIME(ASkaterCharacterBase, _catchMode);
    DOREPLIFETIME(ASkaterCharacterBase, _catchOrientState);
    DOREPLIFETIME(ASkaterCharacterBase, _catchOrientPitchRatio);
    DOREPLIFETIME(ASkaterCharacterBase, _catchOrientYawRatio);
    DOREPLIFETIME(ASkaterCharacterBase, _grindPitchRatio);
    DOREPLIFETIME(ASkaterCharacterBase, _grindYawRatio);
    DOREPLIFETIME(ASkaterCharacterBase, _requestEndPush);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedIsOnBoard);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedIsOnGrind);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedGrindName);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedGrindActor);
    DOREPLIFETIME(ASkaterCharacterBase, _trickPopHeight);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedIsTrickPending);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedMeshRotator);
    DOREPLIFETIME(ASkaterCharacterBase, _replicatedSkateboardMeshRotator);
}


