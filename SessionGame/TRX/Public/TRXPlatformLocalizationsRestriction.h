#pragma once
#include "CoreMinimal.h"
#include "ETRXPlatform.h"
#include "TRXTitleIdLocalizationsRestriction.h"
#include "TRXPlatformLocalizationsRestriction.generated.h"

USTRUCT(BlueprintType)
struct FTRXPlatformLocalizationsRestriction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRXPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXTitleIdLocalizationsRestriction> Restrictions;
    
    TRX_API FTRXPlatformLocalizationsRestriction();
};

