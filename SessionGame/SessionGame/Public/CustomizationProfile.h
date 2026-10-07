#pragma once
#include "CoreMinimal.h"
#include "CustomizationProfileItem.h"
#include "EStanceType.h"
#include "CustomizationProfile.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStanceType Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizationProfileItem> CharacterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizationProfileItem> SkateboardItems;
    
    SESSIONGAME_API FCustomizationProfile();
};

