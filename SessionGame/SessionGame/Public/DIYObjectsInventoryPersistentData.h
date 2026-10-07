#pragma once
#include "CoreMinimal.h"
#include "DIYObjectInventoryItem.h"
#include "DIYObjectsInventoryPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FDIYObjectsInventoryPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDIYObjectInventoryItem> DIYObjects;
    
    SESSIONGAME_API FDIYObjectsInventoryPersistentData();
};

