#pragma once
#include "CoreMinimal.h"
#include "MapLayoutData.h"
#include "MapLayoutPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FMapLayoutPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMapLayoutData> PersistentMapsLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockedTransitNodes;
    
    SESSIONGAME_API FMapLayoutPersistentData();
};

