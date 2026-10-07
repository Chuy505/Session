#pragma once
#include "CoreMinimal.h"
#include "EQuestDialogType.generated.h"

UENUM(BlueprintType)
enum class EQuestDialogType : uint8 {
    QDT_Undefined,
    QDT_Intro,
    QDT_Ongoing,
    QDT_Outro,
    QDT_QuestExposureMet,
    QDT_QuestStepIntro,
    QDT_QuestStepOngoing,
    QDT_QuestStepOutro,
    QDT_QuestStepExposureMet,
};

