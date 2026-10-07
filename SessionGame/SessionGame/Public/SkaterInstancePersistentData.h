#pragma once
#include "CoreMinimal.h"
#include "CustomizationProfile.h"
#include "SkaterInstancePersistentData.generated.h"

USTRUCT(BlueprintType)
struct FSkaterInstancePersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseVisualDefinitionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationProfile CustomizationProfile;
    
    SESSIONGAME_API FSkaterInstancePersistentData();
};

