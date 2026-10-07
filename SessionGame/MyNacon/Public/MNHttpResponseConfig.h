#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EMNHttpRequestType.h"
#include "MNHttpResponseConfigData.h"
#include "MNHttpResponseConfig.generated.h"

UCLASS(Blueprintable)
class MYNACON_API UMNHttpResponseConfig : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMNHttpResponseConfigData _defaultHttpResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMNHttpRequestType, FMNHttpResponseConfigData> _allHttpResponses;
    
public:
    UMNHttpResponseConfig();

};

