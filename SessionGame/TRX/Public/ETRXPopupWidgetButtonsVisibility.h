#pragma once
#include "CoreMinimal.h"
#include "ETRXPopupWidgetButtonsVisibility.generated.h"

UENUM(BlueprintType)
enum class ETRXPopupWidgetButtonsVisibility : uint8 {
    ShowOnlyPrimary,
    ShowOnlySecondary,
    ShowBoth,
};

