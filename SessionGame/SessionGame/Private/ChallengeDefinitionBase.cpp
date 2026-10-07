#include "ChallengeDefinitionBase.h"

UChallengeDefinitionBase::UChallengeDefinitionBase() {
    this->_canBail = true;
    this->_minCount = 1;
    this->_maxCount = 1;
    this->_challengeScope = 0;
    this->_selectionWeight = 1000;
    this->_isUniqueType = false;
    this->_isUniqueInstance = true;
    this->_mute = false;
    this->_anyLocation = true;
    this->_anyLocationFromList = false;
    this->_randomLocationFromList = false;
    this->_minCurrencyReward = 1;
    this->_maxCurrencyReward = 5;
}


