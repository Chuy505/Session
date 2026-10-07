#pragma once
#include "CoreMinimal.h"
#include "ColorCustomizationMaskPattern.h"
#include "ColorCustomizationMaskItem.generated.h"

USTRUCT(BlueprintType)
struct FColorCustomizationMaskItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorCustomizationMaskPattern BasePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorCustomizationMaskPattern> PatternVariants;
    
    SESSIONGAME_API FColorCustomizationMaskItem();
};

