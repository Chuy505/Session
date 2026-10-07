#pragma once
#include "CoreMinimal.h"
#include "TutorialsPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FTutorialsPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastStartedTutorialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTutorialFlowCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastMapPlayedName;
    
    SESSIONGAME_API FTutorialsPersistentData();
};

