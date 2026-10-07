#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EMNMode.h"
#include "MNHttpRequestsConfig.h"
#include "MNSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class MYNACON_API UMNSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMNMode, FMNHttpRequestsConfig> HttpRequestConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMNMode ConnectionMode;
    
public:
    UMNSettings();

};

