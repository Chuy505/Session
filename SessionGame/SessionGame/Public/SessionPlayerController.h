#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoReceiveInput -FallbackName=EAutoReceiveInput
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "EInputModeType.h"
#include "Templates/SubclassOf.h"
#include "SessionPlayerController.generated.h"

class AChallengeManager;
class AFilmerModeManager;
class APartyGamesManager;
class AQuestManager;
class ASkaterCameraActor;
class ASkaterCharacter;
class ASpotMarkerVisuals;
class AStatTracker;
class ATrackingManager;
class UBrokenBoardPopupWidget;
class UIntroUI;
class UMenuPageContainer;
class UPauseMenuPageContainer;
class USpotMarkerWidget;
class UTrickDisplayWidget;
class UUserWidget;
class UVideoMontagePauseMenuPageContainer;

UCLASS(Blueprintable)
class SESSIONGAME_API ASessionPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DebugHUDRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkaterCameraActor> SkaterCameraBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AChallengeManager> ChallengeManagerBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AQuestManager> QuestManagerBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStatTracker> StatTrackerBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrackingManager> TrackingManagerBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APartyGamesManager> PartyGamesManagerBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxRepairBoardInputDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpotMarkerWidget> _spotMarkerWidget_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpotMarkerVisuals> _spotMarkerVisuals_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _setSpotTimeDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minGotoMarkerTimeDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxGotoMarkerTimeDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minSpotDistanceTimeDelayAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxSpotDistanceTimeDelayAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrickDisplayWidget> _trickDisplayWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIntroUI> _introUIBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPauseMenuPageContainer> PauseMenuPageContainerBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVideoMontagePauseMenuPageContainer> VideoMontagePauseMenuPageContainerBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrokenBoardPopupWidget> _brokenBoardPopupWidgetBlueprint;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFilmerModeManager> DefaultFilmerModeManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIntroUI* _introUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuPageContainer* _activePauseMenuPageContainer;
    
public:
    ASessionPlayerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnBindInputs();
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_Throwdown(bool toSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_Sprint();
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_RightStick_Y_Axis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_RightStick_X_Axis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_PushRight(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_PushLeft(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_Push(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_LeftStick_Y_Axis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_LeftStick_X_Axis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_Jump(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_Brake(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_BankRight(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SimulateInput_BankLeft(float AxisValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInputModeType(EInputModeType newInputModeType);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoReceiveInput(TEnumAsByte<EAutoReceiveInput::Type> processingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SaveMarkerLocation(bool forceSave, bool broadcastEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayModeChanged(bool isInReplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithEditor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GotoMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASkaterCharacter* GetSkater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputModeType GetInputModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetDebugHUD() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindInGameInputs();
    
};

