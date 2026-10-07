#include "SkaterAudioData.h"

USkaterAudioData::USkaterAudioData() {
    this->_markerSetSoundCue = NULL;
    this->_goToMarkerSoundCue = NULL;
    this->_headImpactSoundCue = NULL;
    this->_bodyImpactSoundCue = NULL;
    this->_minimumVelocityForImpacts = 75.00f;
    this->_impactCooldown = 0.05f;
}


