#pragma once
#include "CoreMinimal.h"
#include "EInputModeType.generated.h"

UENUM(BlueprintType)
enum class EInputModeType : uint8 {
    None,
    LeftFootRightFoot,
    FrontFootBackFoot,
    Legacy,
};

