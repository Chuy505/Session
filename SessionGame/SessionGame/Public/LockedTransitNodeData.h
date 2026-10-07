#pragma once
#include "CoreMinimal.h"
#include "LockedTransitNodeData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLockedTransitNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LockedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LockedImageDescription;
    
    SESSIONGAME_API FLockedTransitNodeData();
};

