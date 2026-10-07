#include "QuestTickerUI.h"

UQuestTickerUI::UQuestTickerUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_showTooltipAnimation = NULL;
    this->_showQuestInfoAnimation = NULL;
    this->_cycleQuestAnimation = NULL;
    this->_hideRewardsPanelAnimation = NULL;
    this->_tooltipPanel = NULL;
    this->_questInfoPanel = NULL;
    this->_questNameText = NULL;
    this->_questCounterText = NULL;
    this->_previousMissionButton = NULL;
    this->_previousMissionText = NULL;
    this->_nextMissionButton = NULL;
    this->_nextMissionText = NULL;
    this->_questObjectivesPanel = NULL;
    this->_questInputGuideCanvas = NULL;
    this->_questInputGuideNameText = NULL;
    this->_questInputGuidePanel = NULL;
    this->_questRewardsCanvas = NULL;
    this->_questRewardsGrid = NULL;
    this->_forceShownTime = 0.00f;
    this->_forceShownUpdateDelay = 1.00f;
    this->_quest_ObjectiveBlueprint = NULL;
    this->_inputGuideItemUIBlueprint = NULL;
    this->_rewardsPerRow = 4;
    this->_rewardsPanelShownTime = 0.00f;
    this->_audioSet = NULL;
}

void UQuestTickerUI::HandleOnShowQuestInfoAnimationFinished() {
}

void UQuestTickerUI::HandleOnQuestCycling() {
}

void UQuestTickerUI::HandleOnQuestCycleEnd() {
}


