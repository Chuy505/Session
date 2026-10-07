#pragma once
#include "CoreMinimal.h"
#include "CustomizationProfileItem.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationProfileItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UsedInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedVariantId;
    
    SESSIONGAME_API FCustomizationProfileItem();
};

