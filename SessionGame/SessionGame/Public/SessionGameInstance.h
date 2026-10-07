#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "FSRPresetData.h"
#include "SessionAdvancedSettingsConfig.h"
#include "SessionAudioConfig.h"
#include "SessionDifficultyConfig.h"
#include "SkaterInstance.h"
#include "Templates/SubclassOf.h"
#include "VisualDefinitionCachedInformation.h"
#include "SessionGameInstance.generated.h"

class UAlertWidget;
class UCustomizationItemDefinition;
class UDatabaseCategories;
class UDatabaseCustomization;
class UMapLayout;
class UMapSelectDataAsset;
class UNewsEULAWidget;
class UNewsSystem;
class UPlayerProfile;
class UPopupPageContainer;
class USessionGameViewportClient;
class USkaterVisualsDefinition;
class UTransitDataAsset;

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API USessionGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNewsEULAWidget> _newsEULAWidget_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAlertWidget> _alertWidget_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPopupPageContainer> _popupPage_Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizationItemDefinition*> _customizationItemDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterVisualsDefinition* _defaultVisualsDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkaterVisualsDefinition>> _skaterDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVisualDefinitionCachedInformation> _skaterDefinitionsCachedInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterVisualsDefinition* _cachedSkaterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseCategories* _databaseCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseCustomization* _databaseCustomizationDefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionAudioConfig _audioConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSessionDifficultyConfig> _difficultyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSRPresetData> _fsrPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionAdvancedSettingsConfig _advancedSettingsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _defaultApartmentMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapSelectDataAsset* _mapSelectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransitDataAsset* _transitDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMapLayout*> _mapLayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterVisualsDefinition* _fingerBoardVisualsDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _fingerBoardMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerProfile* _playerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewsSystem* _newsSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkaterInstance _skaterInstance;
    
public:
    USessionGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIntro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USessionGameViewportClient* GetSessionGameViewportClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerProfile* GetPlayerProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameVersion() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugStartSecondPlayerCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CITShowFName(bool show);
    
};

