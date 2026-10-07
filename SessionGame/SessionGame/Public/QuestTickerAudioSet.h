#pragma once
#include "CoreMinimal.h"
#include "UIAudioSet.h"
#include "UISound.h"
#include "QuestTickerAudioSet.generated.h"

class UUIAudioSetBasic;

UCLASS(Blueprintable)
class UQuestTickerAudioSet : public UUIAudioSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _parentQuestTickerAudioSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onQuestCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISound _onQuestStepCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAudioSetBasic* _questTickerChild;
    
public:
    UQuestTickerAudioSet();

};

