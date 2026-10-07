#pragma once
#include "CoreMinimal.h"
#include "EQuestFailBehavior.h"
#include "EQuestObjectiveType.h"
#include "EQuestStepGoToType.h"
#include "EQuestStepReplayEditorAction.h"
#include "EQuestStepSkaterAction.h"
#include "ESkaterActionFlags.h"
#include "QuestDialogInfo.h"
#include "QuestObjectDropperAction.h"
#include "QuestPrerequisites.h"
#include "QuestStepInputGuide.h"
#include "QuestStepLevelLoad.h"
#include "QuestStepReplays.h"
#include "QuestStepDefinition.generated.h"

class AActor;
class AQuestGiver;
class UChallengeDefinitionBase;
class UJamDefinition;

USTRUCT(BlueprintType)
struct FQuestStepDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _displayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _stepMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _stepPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestPrerequisites _stepPrerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _stepMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStepReplays _stepReplays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStepLevelLoad> _stepIntroLevelLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStepLevelLoad> _stepOutroLevelLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> _stepPathsToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestObjectiveType _stepObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestDialogInfo _stepDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChallengeDefinitionBase* _stepChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _showInputGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStepInputGuide _stepInputGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJamDefinition* _stepJamDefinition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestStepGoToType _stepGoToType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _stepGotoLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestGiver> _stepTalkToQuestGiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _stepTalkToQuestGiverUniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestObjectDropperAction _objectDropperAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _destinationNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestStepReplayEditorAction _replayEditorAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkaterActionFlags _skaterActions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestStepSkaterAction _questSkaterActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _skaterActionsCompletionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _skaterActionsLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestFailBehavior _stepFailBehavior;
    
public:
    SESSIONGAME_API FQuestStepDefinition();
};

