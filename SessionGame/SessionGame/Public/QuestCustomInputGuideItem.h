#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputType.h"
#include "QuestCustomInputGuideItem.generated.h"

USTRUCT(BlueprintType)
struct FQuestCustomInputGuideItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey _customInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputType> _customArrows;
    
public:
    SESSIONGAME_API FQuestCustomInputGuideItem();
};

