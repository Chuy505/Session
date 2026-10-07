#pragma once
#include "CoreMinimal.h"
#include "MNHttpResponseMessageData.h"
#include "MNHttpResponseConfigData.generated.h"

USTRUCT(BlueprintType)
struct FMNHttpResponseConfigData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMNHttpResponseMessageData> _responseDatas;
    
public:
    MYNACON_API FMNHttpResponseConfigData();
};

