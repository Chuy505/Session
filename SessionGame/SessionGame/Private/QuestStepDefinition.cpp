#include "QuestStepDefinition.h"

FQuestStepDefinition::FQuestStepDefinition() {
    this->_stepMaxTime = 0.00f;
    this->_stepObjective = EQuestObjectiveType::QOT_Undefined;
    this->_stepChallenge = NULL;
    this->_showInputGuide = false;
    this->_stepJamDefinition = NULL;
    this->_stepGoToType = EQuestStepGoToType::QSGTT_Any;
    this->_replayEditorAction = EQuestStepReplayEditorAction::OpenEditor;
    this->_skaterActions = ESkaterActionFlags::SAF_None;
    this->_questSkaterActions = EQuestStepSkaterAction::QSSAF_None;
    this->_skaterActionsCompletionDelay = 0.00f;
    this->_stepFailBehavior = EQuestFailBehavior::QFB_None;
}

