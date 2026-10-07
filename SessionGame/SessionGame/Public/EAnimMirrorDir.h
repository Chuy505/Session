#pragma once
#include "CoreMinimal.h"
#include "EAnimMirrorDir.generated.h"

UENUM(BlueprintType)
enum class EAnimMirrorDir : uint8 {
    AMirrorDir_None,
    AMirrorDir_XAxis,
    AMirrorDir_YAxis,
    AMirrorDir_ZAxis,
};

