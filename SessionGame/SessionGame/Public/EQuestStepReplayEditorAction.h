#pragma once
#include "CoreMinimal.h"
#include "EQuestStepReplayEditorAction.generated.h"

UENUM(BlueprintType)
enum class EQuestStepReplayEditorAction : uint8 {
    OpenEditor,
    CloseEditor,
    ResumePlay,
    Pause,
    Rewind,
    FastForward,
    HideUI,
    ShowUI,
    RotateCamera,
    SaveReplay,
};

