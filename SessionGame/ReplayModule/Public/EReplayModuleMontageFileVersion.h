#pragma once
#include "CoreMinimal.h"
#include "EReplayModuleMontageFileVersion.generated.h"

UENUM(BlueprintType)
enum class EReplayModuleMontageFileVersion : uint8 {
    Version_Old,
    Version_2_0,
    Version_2_1,
    Version_2_2,
    Version_2_3,
    Version_Current = Version_2_3,
};

