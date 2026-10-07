#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TRXInputsDisplayLayoutWidget.generated.h"

class UTRXInputsDisplayWidget;

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXInputsDisplayLayoutWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTRXInputsDisplayWidget*> InputsWidgets;
    
public:
    UTRXInputsDisplayLayoutWidget();

};

