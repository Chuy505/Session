#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretch -FallbackName=EStretch
#include "TRXLoadingScreenBackgroundImageConfiguration.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTRXLoadingScreenBackgroundImageConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> stretch;
    
    TRXLOADINGSCREEN_API FTRXLoadingScreenBackgroundImageConfiguration();
};

