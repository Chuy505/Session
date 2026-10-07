#pragma once
#include "CoreMinimal.h"
#include "ETRXPopupButtonPressedResponse.generated.h"

UENUM(BlueprintType)
enum class ETRXPopupButtonPressedResponse : uint8 {
    DoNothing,
    ClosePopup,
};

