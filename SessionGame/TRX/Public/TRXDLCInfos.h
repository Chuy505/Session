#pragma once
#include "CoreMinimal.h"
#include "ETRXStore.h"
#include "TRXDLCInfos.generated.h"

USTRUCT(BlueprintType)
struct FTRXDLCInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETRXStore, FString> StoreIds;
    
    TRX_API FTRXDLCInfos();
};

