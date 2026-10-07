#include "TRXUtilities.h"

UTRXUtilities::UTRXUtilities() {
}

bool UTRXUtilities::SetPause(const UObject* WorldContextObject, bool paused) {
    return false;
}

void UTRXUtilities::ReturnToEngagementScreen(const UObject* WorldContextObject) {
}

ETRXStore UTRXUtilities::RetrieveCurrentStore() {
    return ETRXStore::Steam;
}

ETRXPlatform UTRXUtilities::RetrieveCurrentPlatform() {
    return ETRXPlatform::PC;
}

ETRXControllerType UTRXUtilities::RetrieveCurrentControllerType(const UObject* WorldContextObject) {
    return ETRXControllerType::KeyboardAndMouse;
}

TArray<FString> UTRXUtilities::RetrieveAllowedCultures() {
    return TArray<FString>();
}

FString UTRXUtilities::RemoveProfanities(const FString& textToClean) {
    return TEXT("");
}

FString UTRXUtilities::RemoveNonDisplayableCharacters(const FString& textToClean, const FSlateFontInfo& Font) {
    return TEXT("");
}

FName UTRXUtilities::GetUIStringTableId() {
    return NAME_None;
}

FName UTRXUtilities::GetTRCStringTableId() {
    return NAME_None;
}

UTRXUtilitiesSubsystemInternalOnActiveControllerTypeChanged* UTRXUtilities::GetOnActiveControllerTypeChanged(const UObject* WorldContextObject) {
    return NULL;
}

FText UTRXUtilities::GenerateRichTextControllerKeyDecoratorTagFromAction(const FName& actionOrAxisName, int32 widthOverride, int32 heightOverride, float scaleOverride, TEnumAsByte<EStretch::Type> stretch) {
    return FText::GetEmpty();
}

FText UTRXUtilities::GenerateRichTextControllerKeyDecoratorTag(const FKey& Key, int32 widthOverride, int32 heightOverride, float scaleOverride, TEnumAsByte<EStretch::Type> stretch) {
    return FText::GetEmpty();
}

FText UTRXUtilities::FindLocalizedTextForPlatformFromText(const FText& Text, ETRXPlatform Platform) {
    return FText::GetEmpty();
}

FText UTRXUtilities::FindLocalizedTextForPlatform(const FName stringTableId, const FString& Key, ETRXPlatform Platform) {
    return FText::GetEmpty();
}

FKey UTRXUtilities::FindKeyToUseInGivenArrayForGivenControllerType(const TArray<FKey>& keys, ETRXControllerType controllerType) {
    return FKey{};
}

FKey UTRXUtilities::FindKeyToUseForGivenActionAndGivenControllerType(const FName& actionOrAxisName, ETRXControllerType controllerType) {
    return FKey{};
}

UTexture2D* UTRXUtilities::FindControllerKeyIconForControllerType(const FKey& controllerKey, ETRXControllerType controllerType) {
    return NULL;
}

FKey UTRXUtilities::ConvertGamepadVirtualKey(const FKey& keyToConvert) {
    return FKey{};
}


