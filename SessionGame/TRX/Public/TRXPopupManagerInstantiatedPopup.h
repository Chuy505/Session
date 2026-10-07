#pragma once
#include "CoreMinimal.h"
#include "TRXPopupManagerInstantiatedPopup.generated.h"

class UTRXPopupWidget;

USTRUCT(BlueprintType)
struct FTRXPopupManagerInstantiatedPopup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTRXPopupWidget* popupWidget;
    
    TRX_API FTRXPopupManagerInstantiatedPopup();
};

