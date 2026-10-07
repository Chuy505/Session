#include "TRXLoadingScreenProgressBarConfiguration.h"

FTRXLoadingScreenProgressBarConfiguration::FTRXLoadingScreenProgressBarConfiguration() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->FillType = EProgressBarFillType::LeftToRight;
    this->MaxProgressionDuringLoading = 0.00f;
    this->EstimatedAverageNumberOfPackagesPerLevel = 0;
    this->TimeToWaitWhenLoadComplete = 0.00f;
}

