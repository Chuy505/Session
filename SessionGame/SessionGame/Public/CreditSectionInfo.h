#pragma once
#include "CoreMinimal.h"
#include "CreditEntryInfo.h"
#include "CreditSectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FCreditSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMajor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditEntryInfo> Entries;
    
    SESSIONGAME_API FCreditSectionInfo();
};

