#include "ChallengeManager.h"

AChallengeManager::AChallengeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_challengeDefinitionsRootPath = TEXT("Challenges/Definitions");
    this->_maxDailyChallenges = 2;
    this->_maxWeeklyChallenges = 1;
    this->_delayedChallengeValidationDuration = 0.25f;
    this->_autoGenerateChallenges = true;
    this->_historicalChallengesCount = 0;
}


