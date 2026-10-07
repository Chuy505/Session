#pragma once
#include "CoreMinimal.h"
#include "EEventLineTrickRotationType.h"
#include "EEventManualType.h"
#include "EQuestInputGuideType.h"
#include "QuestCustomInputGuideItem.h"
#include "QuestStepInputGuide.generated.h"

class UFlipTrickDefinition;
class UGrindOrSlideDefinition;

USTRUCT(BlueprintType)
struct FQuestStepInputGuide {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestInputGuideType _inputGuideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlipTrickDefinition* _fliptrickToGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventLineTrickRotationType _guideAddedRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGrindOrSlideDefinition* _grindToGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _showGrindInputGuideAsSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventManualType _manualToGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _customGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestCustomInputGuideItem> _customGuideItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestCustomInputGuideItem> _customGuideGoofyItems;
    
public:
    SESSIONGAME_API FQuestStepInputGuide();
};

