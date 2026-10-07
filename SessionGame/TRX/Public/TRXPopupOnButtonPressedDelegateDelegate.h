#pragma once
#include "CoreMinimal.h"
#include "ETRXPopupButtonPressedResponse.h"
#include "TRXPopupOnButtonPressedDelegateDelegate.generated.h"

class UTRXPopupManager;
class UTRXPopupWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_ThreeParams(ETRXPopupButtonPressedResponse, FTRXPopupOnButtonPressedDelegate, UTRXPopupManager*, popupManager, UTRXPopupWidget*, popupWidget, int32, userIndex);

