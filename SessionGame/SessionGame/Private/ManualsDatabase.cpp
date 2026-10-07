#include "ManualsDatabase.h"

UManualsDatabase::UManualsDatabase() {
    this->MinManualInputThreshold = 0.10f;
    this->MaxManualInputThreshold = 0.90f;
    this->MinManualInputTime = 0.15f;
    this->ManualPopHeight = 15.00f;
    this->NoseManualPopHeight = 15.00f;
    this->ExitManualDelay = 0.25f;
    this->ManualBankingRotationRate = 150.00f;
    this->CasperPopPelvisCurve = NULL;
    this->CasperPopHeight = 70.00f;
    this->CasperBankingRotationRate = 150.00f;
    this->AnimMinTrickPopRatio = 0.00f;
    this->AnimPopPelvisDelay = 0.10f;
    this->AnimPopPelvisCurve = NULL;
    this->PrimoPopHeight = 75.00f;
}


