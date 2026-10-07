#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "TRXLoadingScreenBackgroundImageConfiguration.h"
#include "TRXLoadingScreenProgressBarConfiguration.h"
#include "TRXLoadingScreenWheelConfiguration.h"
#include "TRXLoadingScreenConfiguration.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TRXLOADINGSCREEN_API UTRXLoadingScreenConfiguration : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXLoadingScreenBackgroundImageConfiguration> BackgroundImageConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLoadingWheel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTRXLoadingScreenWheelConfiguration LoadingWheelConfiguration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableProgressBar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTRXLoadingScreenProgressBarConfiguration ProgressBarConfiguration;
    
public:
    UTRXLoadingScreenConfiguration();

};

