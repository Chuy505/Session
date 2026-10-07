#pragma once
#include "CoreMinimal.h"
#include "EDLCNames.h"
#include "VisualDefinitionCachedInformation.generated.h"

USTRUCT(BlueprintType)
struct FVisualDefinitionCachedInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isCustomSkater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCNames _dlcAffiliation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _defaultItemNames;
    
    SESSIONGAME_API FVisualDefinitionCachedInformation();
};

