#include "TRXUtilitiesSteam.h"

UTRXUtilitiesSteam::UTRXUtilitiesSteam() {
}

bool UTRXUtilitiesSteam::ShowGamepadTextInput(ETRXSteamGamepadTextInputMode InputMode, ETRXSteamGamepadTextInputLineMode lineInputMode, const FString& Description, const FString& defaultText, const UTRXUtilitiesSteam::FOnGamepadTextInputClosedDelegate& onClosed) {
    return false;
}

bool UTRXUtilitiesSteam::ShowFloatingGamepadTextInput(ETRXSteamFloatingGamepadTextInputMode keyboardType, const FVector2D& textFieldPosition, const FVector2D& textFieldDimension) {
    return false;
}

bool UTRXUtilitiesSteam::IsRunningOnSteamDeck() {
    return false;
}


