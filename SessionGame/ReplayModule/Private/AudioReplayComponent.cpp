#include "AudioReplayComponent.h"

UAudioReplayComponent::UAudioReplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_recordAudioData = true;
    this->_recordMode = EAudioReplayComponentMode::ARCM_RecordEvents;
    this->_soundSubMixToRecord = NULL;
}


