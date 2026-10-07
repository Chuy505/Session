#pragma once
#include "CoreMinimal.h"
#include "QuestStepLevelLoadPersistantData.generated.h"

USTRUCT(BlueprintType)
struct FQuestStepLevelLoadPersistantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InMapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Load;
    
    SESSIONGAME_API FQuestStepLevelLoadPersistantData();
};

