#pragma once
#include "CoreMinimal.h"
#include "QuestsPersistentDataInstance.h"
#include "QuestsPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FQuestsPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FQuestsPersistentDataInstance> QuestsDatas;
    
    SESSIONGAME_API FQuestsPersistentData();
};

