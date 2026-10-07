#include "QuestDefinition.h"

UQuestDefinition::UQuestDefinition() {
    this->_questLine = EQuestLineType::QLT_Default;
    this->_canBeDeclined = true;
    this->_questStepsCompletion = EQuestStepCompletionType::QSCT_Sequential;
    this->_alwaysShowTickerSteps = false;
    this->_questMaxTime = 0.00f;
    this->DLCAffiliation = EDLCNames::DLC_NONE;
    this->_showQuestProposalScreen = true;
    this->_showQuestCompleteScreen = true;
    this->_nextQuest = NULL;
    this->_questStartMethod = EQuestStartMethod::QSM_QuestGiver;
    this->_questEndMethod = EQuestEndMethod::QEM_Automatically;
    this->_isInAnArc = false;
    this->_questArc = EQuestArc::Nobody;
    this->_isGivenByAPro = false;
    this->_proQuestGiver = EProQuestGiver::RibsMan;
    this->_randomizeRewards = false;
    this->_enableStatusUpgrade = false;
    this->_statusUpgradeDefinition = NULL;
}


