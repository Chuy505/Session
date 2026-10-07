#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ETRXControllerType.h"
#include "TRXEngagementScreenWidget.generated.h"

class UTRXProfileSwitchWidget;

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXEngagementScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTRXProfileSwitchWidget* ProfileSwitchWidget;
    
public:
    UTRXEngagementScreenWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveOnControllerTypeChanged(ETRXControllerType newControllerType, const FKey& mostSuitableKeyToValidate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTRXProfileSwitchWidget* GetProfileSwitchWidget() const;
    
};

