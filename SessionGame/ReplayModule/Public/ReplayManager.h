#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ReplayCameraShakeConfig.h"
#include "ReplayManagerInstanceData.h"
#include "Templates/SubclassOf.h"
#include "ReplayManager.generated.h"

class AReplayCamera;
class UAudioReplayComponent;
class UReplayAudioSynthComponent;
class UReplayEditorUIBase;

UCLASS(Blueprintable)
class REPLAYMODULE_API AReplayManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _replayFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _replayBufferLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayCameraShakeConfig _cameraShakeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayAudioSynthComponent* _replayAudioSynthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioReplayComponent* _audioReplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReplayCamera> _replayEditorCameraBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayEditorUIBase> _replayEditorUIBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _replayEditorUIZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayManagerInstanceData> InstancesData;
    
public:
    AReplayManager(const FObjectInitializer& ObjectInitializer);

};

