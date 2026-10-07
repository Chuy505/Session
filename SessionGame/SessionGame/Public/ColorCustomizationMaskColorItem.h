#pragma once
#include "CoreMinimal.h"
#include "ColorCustomizationMaskColorItem.generated.h"

USTRUCT(BlueprintType)
struct FColorCustomizationMaskColorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    SESSIONGAME_API FColorCustomizationMaskColorItem();
};

