#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TRXSaveProgressNotifyScreenWidget.generated.h"

class UTRXSaveProgressWidget;

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXSaveProgressNotifyScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTRXSaveProgressWidget* progressWidget;
    
public:
    UTRXSaveProgressNotifyScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyToPress() const;
    
};

