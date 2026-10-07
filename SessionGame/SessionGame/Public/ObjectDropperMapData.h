#pragma once
#include "CoreMinimal.h"
#include "ObjectDropperObjectPersistentData.h"
#include "ObjectDropperMapData.generated.h"

USTRUCT(BlueprintType)
struct FObjectDropperMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectDropperObjectPersistentData> MapObjects;
    
    SESSIONGAME_API FObjectDropperMapData();
};

