#pragma once
#include "CoreMinimal.h"
#include "BrokenBoardTrucksData.generated.h"

USTRUCT(BlueprintType)
struct FBrokenBoardTrucksData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _backTruckAttachMeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _frontTruckAttachMeshIndex;
    
public:
    SESSIONGAME_API FBrokenBoardTrucksData();
};

