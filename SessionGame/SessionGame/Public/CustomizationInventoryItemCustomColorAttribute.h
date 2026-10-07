#pragma once
#include "CoreMinimal.h"
#include "CustomizationInventoryItemCustomColorItem.h"
#include "CustomizationInventoryItemCustomColorAttribute.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationInventoryItemCustomColorAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCustomizationInventoryItemCustomColorItem> CustomColorOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> CustomColorPatterns;
    
    SESSIONGAME_API FCustomizationInventoryItemCustomColorAttribute();
};

