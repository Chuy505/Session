#pragma once
#include "CoreMinimal.h"
#include "ObjectPlacementMapData.h"
#include "ObjectPlacementPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FObjectPlacementPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FObjectPlacementMapData> MapData;
    
    SESSIONGAME_API FObjectPlacementPersistentData();
};

