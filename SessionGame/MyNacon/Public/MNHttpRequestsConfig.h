#pragma once
#include "CoreMinimal.h"
#include "MNHttpRequestsConfig.generated.h"

USTRUCT(BlueprintType)
struct MYNACON_API FMNHttpRequestsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestsUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    FMNHttpRequestsConfig();
};

