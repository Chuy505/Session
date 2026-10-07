#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EProQuestGiver.h"
#include "EQuestArc.h"
#include "Templates/SubclassOf.h"
#include "QuestManager.generated.h"

class UQuestDefinition;
class UQuestsHUD;
class UStatusUpgradeUI;
class UUIAudioSetBasic;

UCLASS(Blueprintable)
class SESSIONGAME_API AQuestManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _questDefinitionsRootPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestDefinition*> _availableQuests;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQuestArc, uint32> _arcQuestCounts;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EProQuestGiver, uint32> _proQuestCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestDefinition* _firstQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestsHUD> _questsHUDBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusUpgradeUI> _statusUpgradeUIBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _questStepCompletedAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _questStepFailedAudioSet;
    
public:
    AQuestManager(const FObjectInitializer& ObjectInitializer);

};

