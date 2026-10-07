#include "PIDControllerBase.h"

FPIDControllerBase::FPIDControllerBase() {
    this->_p = 0.00f;
    this->_i = 0.00f;
    this->_d = 0.00f;
    this->_maxOutAbs = 0.00f;
}

