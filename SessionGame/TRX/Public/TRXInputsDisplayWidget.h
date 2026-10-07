#pragma once
#include "CoreMinimal.h"
#include "TRXControllerKeyWidget.h"
#include "TRXInputsDisplayWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class TRX_API UTRXInputsDisplayWidget : public UTRXControllerKeyWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Axis_Gauge;
    
public:
    UTRXInputsDisplayWidget();

};

