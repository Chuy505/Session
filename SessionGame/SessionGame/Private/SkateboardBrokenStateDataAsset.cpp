#include "SkateboardBrokenStateDataAsset.h"

USkateboardBrokenStateDataAsset::USkateboardBrokenStateDataAsset() {
    this->_minimumGroundDropHeight = 160.00f;
    this->_minimumGrindDropHeight = 100.00f;
    this->_minimumWearBreakChance = 0.00f;
    this->_maximumWearBreakChance = 2.50f;
    this->_bigDropBreakChanceMaxFloorAngle = 25.00f;
    this->_bigDropBaseBreakChance = 0.00f;
    this->_bigDropAdditionalBreakDistance = 100.00f;
    this->_bigDropAdditionalBreakChance = 2.50f;
    this->_maximumBoardBreakingMultiplier = 10.00f;
    this->_enableDebug = false;
}


