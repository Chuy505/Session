#pragma once
#include "CoreMinimal.h"
#include "ChallengeDataBase.h"
#include "EventLineTrickData.h"
#include "LineChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FLineChallengeData : public FChallengeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventLineTrickData> TrickLineData;
    
    SESSIONGAME_API FLineChallengeData();
};

