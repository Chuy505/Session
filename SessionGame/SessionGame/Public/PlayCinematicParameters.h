#pragma once
#include "CoreMinimal.h"
#include "PlayCinematicParameters.generated.h"

class UCustomizationItemDefinition;
class USkaterVisualsDefinition;

USTRUCT(BlueprintType)
struct FPlayCinematicParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CinematicName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkaterVisualsDefinition> VisualDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizationItemDefinition*> CustomCharacterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizationItemDefinition*> CustomSkateboardParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    SESSIONGAME_API FPlayCinematicParameters();
};

