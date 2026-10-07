#include "MainHUBPlayerController.h"

AMainHUBPlayerController::AMainHUBPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->_rotationInput_Sensitivity = 0.01f;
    this->_maxFaceButtonTimeDelay = 2.00f;
    this->_mainHUBHUD_Blueprint = NULL;
    this->_mainHUBHUDPageContainer_Blueprint = NULL;
    this->_customizationMenuPageContainer_Blueprint = NULL;
    this->_videoMontageMenuPageContainer_Blueprint = NULL;
    this->_skateboardBrokenStateDataAsset = NULL;
    this->_skateboardMoveTimePeriod = 1.00f;
    this->_pawnArriveRotationTolerance = 0.00f;
    this->_pawnLeaveRotationTolerance = 0.00f;
    this->_pawnArriveLocationTolerance = 0.00f;
    this->_pawnLeaveLocationTolerance = 0.00f;
    this->_pawnRotationSpeed = 1.00f;
    this->_pawnTranslationSpeed = 1.00f;
    this->_couchAudioSet = NULL;
}


