#pragma once
#include "CoreMinimal.h"
#include "NonTransitLevelData.generated.h"

USTRUCT(BlueprintType)
struct FNonTransitLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClosestPortalIDToEntrance;
    
    SESSIONGAME_API FNonTransitLevelData();
};

