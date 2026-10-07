#pragma once
#include "CoreMinimal.h"
#include "EBoardControlMode.h"
#include "EBodyRotationMode.h"
#include "ECaspersMode.h"
#include "ECatchMode.h"
#include "ECatchOrientInputMode.h"
#include "EDifficultyMode.h"
#include "EInputModeType.h"
#include "EStanceType.h"
#include "SessionTelemetryEvent.h"
#include "TelemetryGameplaySettingsEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryGameplaySettingsEvent : public FSessionTelemetryEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficultyMode _difficultyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStanceType _stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputModeType _inputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoardControlMode _boardControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyRotationMode _bodyRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECatchMode _catchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECatchOrientInputMode _grindInputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isBoardBreakingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDarkslidesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECaspersMode _caspersMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isPrimosEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isLiptricksEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isPhysicalAnimationEnabled;
    
public:
    SESSIONGAME_API FTelemetryGameplaySettingsEvent();
};

