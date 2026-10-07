#include "SessionCheatManager.h"
#include "SessionDebugCameraController.h"

USessionCheatManager::USessionCheatManager() {
    this->DebugCameraControllerClass = ASessionDebugCameraController::StaticClass();
}

void USessionCheatManager::UnlockAchievement(int32 AchievementID, int32 Progress) {
}

void USessionCheatManager::ToggleSkaterDebugHUD() {
}

void USessionCheatManager::StopFilmerMode() {
}

void USessionCheatManager::StopCinematic() {
}

void USessionCheatManager::StatChangeTrickStat(const FName& TrickName, uint32 deltaCount) {
}

void USessionCheatManager::StatChangeTotalManualDistance(float Distance) {
}

void USessionCheatManager::StatChangeTotalGrindDistance(float Distance) {
}

void USessionCheatManager::StatChangeGrindStat(const FName& grindName, uint32 deltaCount) {
}

void USessionCheatManager::StartQuestByName(const FString& questName) {
}

void USessionCheatManager::StartMixerInteractivity() {
}

void USessionCheatManager::StartFilmerMode() {
}

void USessionCheatManager::StartChallengeByName(const FString& challengeName) {
}

void USessionCheatManager::SkateShopUnlockDIYObject(const FString& ItemId) {
}

void USessionCheatManager::SkateShopUnlockCustomizationItem(const FString& citName) {
}

void USessionCheatManager::SkateShopUnlockAllDIYObjects() {
}

void USessionCheatManager::SkateShopUnlockAllCustomizationItems() {
}

void USessionCheatManager::SkateShopShowDIYObject(const FString& ItemId, bool unlockItem) {
}

void USessionCheatManager::SkateShopShowCustomizationItem(const FString& citName, bool unlockItem) {
}

void USessionCheatManager::SkateShopShowAllDIYObjects(bool unlockItems) {
}

void USessionCheatManager::SkateShopShowAllCustomizationItems(bool unlockItems) {
}

void USessionCheatManager::SkaterChangeStance(int32 Stance) {
}

void USessionCheatManager::SKATEPartyGame(int32 numberOfSkaters) {
}

void USessionCheatManager::ShowStatusUpgrade(const FString& statusUpgradeAssetName) {
}

void USessionCheatManager::ShowChallenge(const FString& challengeName) {
}

void USessionCheatManager::SetDiceRollData(int32 Stance, int32 Orientation, int32 Rotation, int32 Trick, bool persist) {
}

void USessionCheatManager::SaveReplay(const FString& replayName) {
}

void USessionCheatManager::QuitPartyGame() {
}

void USessionCheatManager::ProposeQuestByName(const FString& questName) {
}

void USessionCheatManager::ProgressionSetTrickPopHeight(const FString& TrickName, float NewValue) {
}

void USessionCheatManager::ProgressionSetPushImpulse(float NewValue) {
}

void USessionCheatManager::ProgressionSetMaxPushSpeed(float NewValue) {
}

void USessionCheatManager::ProgressionSetBasePopHeight(float NewValue) {
}

void USessionCheatManager::ProgressionResetAll() {
}

void USessionCheatManager::ProgressionModifyTrickPopHeight(const FString& TrickName, float Delta) {
}

void USessionCheatManager::ProgressionModifyPushImpulse(float Delta) {
}

void USessionCheatManager::ProgressionModifyMaxPushSpeed(float Delta) {
}

void USessionCheatManager::ProgressionModifyBasePopHeight(float Delta) {
}

void USessionCheatManager::ProgressionMaxAll() {
}

void USessionCheatManager::PlayerSetExposure(int32 amountToSet) {
}

void USessionCheatManager::PlayerRemoveSponsorship(const FName& CompanyName) {
}

void USessionCheatManager::PlayerInventorySetMoney(float amountToSet) {
}

void USessionCheatManager::PlayerInventoryGiveMoney(float amountToGive) {
}

void USessionCheatManager::PlayerGiveExposure(int32 amountToGive) {
}

void USessionCheatManager::PlayerAddSponsorship(const FName& CompanyName, uint8 discountValue) {
}

void USessionCheatManager::PlayCinematic(const FString& replayName) {
}

void USessionCheatManager::LoadReplay(const FString& replayName) {
}

void USessionCheatManager::LoadMontage(const FString& montageName) {
}

void USessionCheatManager::ListChallenges(const FString& ChallengeType, const FString& Search) {
}

void USessionCheatManager::GiveDIYObject(const FString& objName) {
}

void USessionCheatManager::GiveCustomizationItem(const FString& citName) {
}

void USessionCheatManager::GiveAllDIYObjects() {
}

void USessionCheatManager::GiveAllCustomizationItems() {
}

void USessionCheatManager::FailTrackedQuest(int32 Behavior) {
}

void USessionCheatManager::ExportTricks() {
}

void USessionCheatManager::ExportGrinds() {
}

void USessionCheatManager::CompleteTrackedQuestStep() {
}

void USessionCheatManager::CompleteTrackedQuest() {
}

void USessionCheatManager::CompleteQuestFlowUntil(const FString& questName) {
}

void USessionCheatManager::CompleteMainQuestFlowUntil(const FString& questName) {
}

void USessionCheatManager::CompleteAllQuest() {
}

void USessionCheatManager::CompleteAllHistoricalChallengesForMap(const FString& MapName) {
}

void USessionCheatManager::CompleteAllChallenges() {
}

void USessionCheatManager::ClearDiceRollData() {
}

void USessionCheatManager::ChallengeCompleteByName(const FString& challengeName) {
}


