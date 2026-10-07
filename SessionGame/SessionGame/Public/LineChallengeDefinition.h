#pragma once
#include "CoreMinimal.h"
#include "ChallengeDefinitionBase.h"
#include "EventLineTrickEntry.h"
#include "LineChallengeDefinition.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ULineChallengeDefinition : public UChallengeDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventLineTrickEntry> _trickLineEntries;
    
public:
    ULineChallengeDefinition();

};

