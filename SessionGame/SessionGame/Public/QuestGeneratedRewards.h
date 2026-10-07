#pragma once
#include "CoreMinimal.h"
#include "QuestRewardLootData.h"
#include "QuestGeneratedRewards.generated.h"

USTRUCT(BlueprintType)
struct FQuestGeneratedRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Exposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestRewardLootData> GearList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestRewardLootData> DIYObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint8> SponsorshipList;
    
    SESSIONGAME_API FQuestGeneratedRewards();
};

