#include "ChallengeDataBase.h"

FChallengeDataBase::FChallengeDataBase() {
    this->ChallengeType = EChallengeType::ECT_Undefined;
    this->CurrencyReward = 0;
    this->CurrentCount = 0;
    this->TargetCount = 0;
    this->IsCompleted = false;
    this->IsTracked = false;
}

