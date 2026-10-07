#pragma once
#include "CoreMinimal.h"
#include "SkaterInstanceInventoryPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FSkaterInstanceInventoryPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint8> Sponsorship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSkateboardBroken;
    
    SESSIONGAME_API FSkaterInstanceInventoryPersistentData();
};

