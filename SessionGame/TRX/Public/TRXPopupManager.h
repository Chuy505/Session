#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "TRXPopupCreationParameters.h"
#include "TRXPopupManagerInstantiatedPopup.h"
#include "TRXPopupManager.generated.h"

class UTRXPopupWidget;

UCLASS(Blueprintable)
class TRX_API UTRXPopupManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTRXPopupManagerInstantiatedPopup> InstantiatedPopups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTRXPopupWidget*> PendingPopupsToClose;
    
public:
    UTRXPopupManager();

    UFUNCTION(BlueprintCallable)
    void CreatePopup(const FTRXPopupCreationParameters& creationParameters);
    
    UFUNCTION(BlueprintCallable)
    void ClosePopupFromTag(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    void ClosePopup(UTRXPopupWidget* popupWidget);
    
    UFUNCTION(BlueprintCallable)
    void CloseAllPopups();
    
};

