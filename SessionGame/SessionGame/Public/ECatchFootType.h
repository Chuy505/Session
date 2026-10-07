#pragma once
#include "CoreMinimal.h"
#include "ECatchFootType.generated.h"

UENUM(BlueprintType)
enum class ECatchFootType : uint8 {
    CF_None,
    CF_LeftFoot,
    CF_RightFoot,
    CF_BothFeet,
    CF_Nose,
    CF_Tail,
    CF_DarkSlideLeftFoot,
    CF_DarkSlideRightFoot,
    CF_DarkSlideBothFeet,
    CF_PrimoLeftBothFeet,
    CF_PrimoRightBothFeet,
    CF_Casper,
    CF_AntiCasper,
    CF_Throwdown = 254,
    CF_ToSkateboard,
};

