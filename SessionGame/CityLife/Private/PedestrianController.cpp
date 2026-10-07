#include "PedestrianController.h"

APedestrianController::APedestrianController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AvoidanceMaxAngle = 15.00f;
    this->_EQ_RunAway = NULL;
    this->_trickReactionCooldown = 0.00f;
    this->_runAwayResetDelay = 3.00f;
    this->_runAwayCheckCooldown = 0.50f;
    this->_minAvoidanceDistance = 200.00f;
}


