#include "CatchOrientsDatabase.h"

UCatchOrientsDatabase::UCatchOrientsDatabase() {
    this->CatchOrientInputDeadZone = 0.20f;
    this->CatchOrientInputDelay = 0.15f;
    this->CatchOrientSmoothing = 15.00f;
    this->CatchOrientBoardOffsetSmoothing = 10.00f;
    this->CatchOrientLowerBodySmoothing = 10.00f;
    this->CatchOrientLowerBodySmoothingOut = 7.50f;
    this->CatchOrientPitchSmoothing = 10.00f;
    this->CatchOrientBothFeetAngle = 27.50f;
    this->LegacyCatchOrientBothFeetAngle = 45.00f;
    this->CatchOrientRotationCurve = NULL;
    this->SpecialCatchesMaxCatchAngle = 35.00f;
    this->SpecialCatchesOffsetAngle = 25.00f;
    this->PrimoForwardMaxCatchAngle = 75.00f;
}


