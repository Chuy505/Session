#include "ReplayManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AudioReplayComponent.h"
#include "ReplayAudioSynthComponent.h"

AReplayManager::AReplayManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ReplayManagerRoot"));
    this->Tags.AddDefaulted(1);
    this->_replayFPS = 30.00f;
    this->_replayBufferLength = 180.00f;
    this->_replayAudioSynthComponent = CreateDefaultSubobject<UReplayAudioSynthComponent>(TEXT("ReplayAudioSynthComponent"));
    this->_audioReplayComponent = CreateDefaultSubobject<UAudioReplayComponent>(TEXT("AudioReplayComponent"));
    this->_replayEditorCameraBlueprint = NULL;
    this->_replayEditorUIBlueprint = NULL;
    this->_replayEditorUIZOrder = 0;
    this->InstancesData.AddDefaulted(1);
}


