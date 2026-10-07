#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CityLifeBakedObjectPath.generated.h"

USTRUCT(BlueprintType)
struct FCityLifeBakedObjectPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Path;
    
    CITYLIFE_API FCityLifeBakedObjectPath();
};

