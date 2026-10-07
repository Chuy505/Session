#pragma once
#include "CoreMinimal.h"
#include "TRXTitleIdLocalizationsRestriction.generated.h"

USTRUCT(BlueprintType)
struct FTRXTitleIdLocalizationsRestriction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllowedCultures;
    
    TRX_API FTRXTitleIdLocalizationsRestriction();
};

