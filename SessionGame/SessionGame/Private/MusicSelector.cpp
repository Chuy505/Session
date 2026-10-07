#include "MusicSelector.h"

AMusicSelector::AMusicSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AMusicSelector::UpdateSelectedStation(int32 Delta) {
}

void AMusicSelector::UpdateSelectedSong(int32 Delta) {
}

void AMusicSelector::SetCurrentStationIndex(int32 newIndex) {
}

void AMusicSelector::SetCurrentSongIndex(int32 newIndex) {
}



bool AMusicSelector::IsReplayEditorActive() const {
    return false;
}

bool AMusicSelector::IsMusicOn() const {
    return false;
}

void AMusicSelector::Init() {
}

int32 AMusicSelector::GetCurrentStationIndex() const {
    return 0;
}

int32 AMusicSelector::GetCurrentSongStationIndex() const {
    return 0;
}

void AMusicSelector::FillWorkingSongList() {
}

bool AMusicSelector::CanPlayMusic() const {
    return false;
}


