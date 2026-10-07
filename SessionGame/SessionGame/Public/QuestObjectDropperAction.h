#pragma once
#include "CoreMinimal.h"
#include "EQuestObjectDropperActionTypes.h"
#include "QuestObjectDropperAction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FQuestObjectDropperAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestObjectDropperActionTypes ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> InventoryObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> _worldObjects;
    
public:
    SESSIONGAME_API FQuestObjectDropperAction();
};

