#pragma once
#include "CoreMinimal.h"
#include "EProQuestGiver.h"
#include "EQuestArc.h"
#include "ESessionPlayerStatus.h"
#include "QuestStepLevelLoadPersistantData.h"
#include "QuestsPersistentDataInstance.generated.h"

USTRUCT(BlueprintType)
struct FQuestsPersistentDataInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PendingsQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CompletedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> QuestMissingAlreadyNotified;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQuestArc, uint32> CompletedQuestCountPerArc;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EProQuestGiver, uint32> CompletedQuestCountPerPro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionPlayerStatus PlayerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasAlwaysInManualCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QuestsChallengesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStepLevelLoadPersistantData> QuestStepLevelLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExposureAmount;
    
    SESSIONGAME_API FQuestsPersistentDataInstance();
};

