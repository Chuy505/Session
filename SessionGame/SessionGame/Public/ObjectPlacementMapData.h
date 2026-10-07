#pragma once
#include "CoreMinimal.h"
#include "PlacedObjectPersistentData.h"
#include "ObjectPlacementMapData.generated.h"

USTRUCT(BlueprintType)
struct FObjectPlacementMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlacedObjectPersistentData> MapObjects;
    
    SESSIONGAME_API FObjectPlacementMapData();
};

