#pragma once
#include "CoreMinimal.h"
#include "HourMinMax.h"
#include "HourDensity.generated.h"

USTRUCT(BlueprintType)
struct FHourDensity {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHourMinMax _perHourNPCDensity[24];
    
public:
    CITYLIFE_API FHourDensity();
};

