#pragma once
#include "CoreMinimal.h"
#include "ObjectDropperMapData.h"
#include "ObjectDropperPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FObjectDropperPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FObjectDropperMapData> MapData;
    
    SESSIONGAME_API FObjectDropperPersistentData();
};

