#pragma once
#include "CoreMinimal.h"
#include "EAudioReplayComponentMode.h"
#include "ReplayComponentBase.h"
#include "AudioReplayComponent.generated.h"

class USoundSubmix;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REPLAYMODULE_API UAudioReplayComponent : public UReplayComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioReplayComponentMode _recordMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* _soundSubMixToRecord;
    
public:
    UAudioReplayComponent(const FObjectInitializer& ObjectInitializer);

};

