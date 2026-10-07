#pragma once
#include "CoreMinimal.h"
#include "ECatchSocketTransformType.generated.h"

UENUM(BlueprintType)
enum class ECatchSocketTransformType : uint8 {
    ECST_Undefined,
    ECST_LeftFoot,
    ECST_RightFoot,
    ECST_Nose,
    ECST_Tail,
    ECST_DarkSlideLeftFoot,
    ECST_DarkSlideRightFoot,
    ECST_DarkSlideNose,
    ECST_DarkSlideTail,
    ECST_PrimoLeft_LeftFoot,
    ECST_PrimoLeft_RightFoot,
    ECST_PrimoRight_LeftFoot,
    ECST_PrimoRight_RightFoot,
    ECST_Casper,
    ECST_AntiCasper,
};

