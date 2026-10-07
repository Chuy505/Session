#pragma once
#include "CoreMinimal.h"
#include "CityLifeBakedObjectPath.h"
#include "CityLifeBakedObjectPaths.generated.h"

USTRUCT(BlueprintType)
struct FCityLifeBakedObjectPaths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCityLifeBakedObjectPath> Paths;
    
    CITYLIFE_API FCityLifeBakedObjectPaths();
};

