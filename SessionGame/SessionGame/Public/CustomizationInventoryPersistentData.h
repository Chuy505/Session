#pragma once
#include "CoreMinimal.h"
#include "CustomizationInventoryItem.h"
#include "CustomizationInventoryPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationInventoryPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizationInventoryItem> CustomizationItems;
    
    SESSIONGAME_API FCustomizationInventoryPersistentData();
};

