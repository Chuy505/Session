#pragma once
#include "CoreMinimal.h"
#include "CreditEntryContent.h"
#include "CreditEntryInfo.generated.h"

USTRUCT(BlueprintType)
struct FCreditEntryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditEntryContent> ContentList;
    
    SESSIONGAME_API FCreditEntryInfo();
};

