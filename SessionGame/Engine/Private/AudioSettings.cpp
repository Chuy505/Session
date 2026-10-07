#include "AudioSettings.h"

UAudioSettings::UAudioSettings() {
    this->VoiPSampleRate = EVoiceSampleRate::Normal24000Hz;
    this->DefaultReverbSendLevel = 0.00f;
    this->MaximumConcurrentStreams = 2;
    this->GlobalMinPitchScale = 0.01f;
    this->GlobalMaxPitchScale = 2.00f;
    this->QualityLevels.AddDefaulted(1);
    this->bAllowPlayWhenSilent = true;
    this->bDisableMasterEQ = false;
    this->bAllowCenterChannel3DPanning = true;
    this->NumStoppingSources = 8;
    this->PanningMethod = EPanningMethod::EqualPower;
    this->MonoChannelUpmixMethod = EMonoChannelUpmixMethod::EqualPower;
    this->DialogueFilenameFormat = TEXT("{DialogueGuid}_{ContextId}");
    this->DefaultSoundConcurrency = NULL;
}


