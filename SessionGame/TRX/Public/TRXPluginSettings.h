#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ETRXControllerType.h"
#include "TRXAchievementConfiguration.h"
#include "TRXAutomaticProfilingConfiguration.h"
#include "TRXControllerKeyIconsConfig.h"
#include "TRXControllerPCConfig.h"
#include "TRXDLCInfos.h"
#include "TRXDLCNotification.h"
#include "TRXPlatformLocalizationsRestriction.h"
#include "TRXProfilingCameraList.h"
#include "TRXSaveGameInfos.h"
#include "Templates/SubclassOf.h"
#include "TRXPluginSettings.generated.h"

class UTRXEngagementScreenWidget;
class UTRXInputsDisplayLayoutWidget;
class UTRXNotificationWidget;
class UTRXPopupWidget;
class UTRXProfilingScenarioList;
class UTRXSaveProgressNotifyScreenWidget;
class UTRXSaveProgressWidget;
class UTexture2D;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TRX_API UTRXPluginSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTRXControllerPCConfig PCControllerConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableControllerDisconnectionHandling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EngagementScreenMapName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableConsoleInShipping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVisualNotifications;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyShowInputsDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyRecordInputs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputsRecordWriteToFileInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTRXInputsDisplayLayoutWidget> InputsDisplayLayoutWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTRXNotificationWidget> NotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UWorld>, FTRXProfilingCameraList> ProfilingCamerasConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTRXProfilingScenarioList> ProfilingScenariosList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTRXAutomaticProfilingConfiguration AutomaticProfilingConfiguration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXPlatformLocalizationsRestriction> PlatformLocalizationsRestriction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTRXEngagementScreenWidget> EngagementScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEngagementScreenExpectSpecificValidationKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> EngagementScreenValidationKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTRXPopupWidget> PopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXControllerKeyIconsConfig> ControllerKeyIconsConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRXControllerType DefaultControllerTypeForPreviewInDesigner;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSaveProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTRXSaveProgressWidget> SaveProgressWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTRXSaveProgressNotifyScreenWidget> SaveProgressNotifyScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSaveLoadingScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SaveLoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyHandleSaveFailWithOutOfSpacePopup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTRXSaveGameInfos DefaultSaveGameInfos;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTRXSaveGameInfos> OverridedSaveGameInfos;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FTRXDLCInfos> DLCInfos;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCNotificationsTitle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCNotificationsReinstallSentence;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FTRXDLCNotification> DLCNotifications;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXAchievementConfiguration> AchievementsConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseXbox2013AchievementSystemXboxOne;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseXbox2013AchievementSystemXSX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnonymizeSteamAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> LoadedControllerIcons;
    
public:
    UTRXPluginSettings();

};

