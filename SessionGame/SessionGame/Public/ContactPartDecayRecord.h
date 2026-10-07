#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "ContactPartWearAndDirtRates.h"
#include "ContactPartDecayRecord.generated.h"

USTRUCT(BlueprintType)
struct FContactPartDecayRecord {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContactPartWearAndDirtRates _defaultDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FContactPartWearAndDirtRates> _surfaceDecay;
    
public:
    SESSIONGAME_API FContactPartDecayRecord();
};

