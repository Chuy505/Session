#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "SessionCheatManager.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API USessionCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    USessionCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievement(int32 AchievementID, int32 Progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSkaterDebugHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopFilmerMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopCinematic();
    
    UFUNCTION(Exec)
    void StatChangeTrickStat(const FName& TrickName, uint32 deltaCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StatChangeTotalManualDistance(float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StatChangeTotalGrindDistance(float Distance);
    
    UFUNCTION(Exec)
    void StatChangeGrindStat(const FName& grindName, uint32 deltaCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartQuestByName(const FString& questName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMixerInteractivity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartFilmerMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartChallengeByName(const FString& challengeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopUnlockDIYObject(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopUnlockCustomizationItem(const FString& citName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopUnlockAllDIYObjects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopUnlockAllCustomizationItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopShowDIYObject(const FString& ItemId, bool unlockItem);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopShowCustomizationItem(const FString& citName, bool unlockItem);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopShowAllDIYObjects(bool unlockItems);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkateShopShowAllCustomizationItems(bool unlockItems);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkaterChangeStance(int32 Stance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SKATEPartyGame(int32 numberOfSkaters);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowStatusUpgrade(const FString& statusUpgradeAssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowChallenge(const FString& challengeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDiceRollData(int32 Stance, int32 Orientation, int32 Rotation, int32 Trick, bool persist);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveReplay(const FString& replayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void QuitPartyGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProposeQuestByName(const FString& questName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionSetTrickPopHeight(const FString& TrickName, float NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionSetPushImpulse(float NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionSetMaxPushSpeed(float NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionSetBasePopHeight(float NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionResetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionModifyTrickPopHeight(const FString& TrickName, float Delta);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionModifyPushImpulse(float Delta);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionModifyMaxPushSpeed(float Delta);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionModifyBasePopHeight(float Delta);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProgressionMaxAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerSetExposure(int32 amountToSet);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerRemoveSponsorship(const FName& CompanyName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerInventorySetMoney(float amountToSet);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerInventoryGiveMoney(float amountToGive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerGiveExposure(int32 amountToGive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerAddSponsorship(const FName& CompanyName, uint8 discountValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayCinematic(const FString& replayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadReplay(const FString& replayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadMontage(const FString& montageName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListChallenges(const FString& ChallengeType, const FString& Search);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveDIYObject(const FString& objName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveCustomizationItem(const FString& citName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllDIYObjects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllCustomizationItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FailTrackedQuest(int32 Behavior);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExportTricks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExportGrinds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteTrackedQuestStep();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteTrackedQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteQuestFlowUntil(const FString& questName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteMainQuestFlowUntil(const FString& questName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllHistoricalChallengesForMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllChallenges();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearDiceRollData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChallengeCompleteByName(const FString& challengeName);
    
};

