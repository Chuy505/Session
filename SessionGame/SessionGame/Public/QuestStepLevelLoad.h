#pragma once
#include "CoreMinimal.h"
#include "QuestStepLevelLoad.generated.h"

USTRUCT(BlueprintType)
struct FQuestStepLevelLoad {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _load;
    
public:
    SESSIONGAME_API FQuestStepLevelLoad();
};

