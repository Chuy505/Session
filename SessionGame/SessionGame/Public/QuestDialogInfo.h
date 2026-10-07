#pragma once
#include "CoreMinimal.h"
#include "QuestDialogTextLineInfo.h"
#include "QuestDialogInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FQuestDialogInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* _speakerTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestDialogTextLineInfo> _onExposureMetDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _introDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestDialogTextLineInfo> _introDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestDialogTextLineInfo> _onGoingDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _outroDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestDialogTextLineInfo> _outroDialog;
    
public:
    SESSIONGAME_API FQuestDialogInfo();
};

