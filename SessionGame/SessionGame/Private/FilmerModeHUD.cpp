#include "FilmerModeHUD.h"

AFilmerModeHUD::AFilmerModeHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bIsCapturing = false;
    this->SceneCaptureComponentIndex = 0;
    this->ScreenCaptureSource = SCS_SceneColorHDR;
    this->ScreenSizeType = SizeTypes::ST_Small;
    this->ScreenVerticalPosition = VerticalPositionTypes::VPT_Top;
    this->ScreenHorizontalPositon = HorizontalPositionTypes::HPT_Left;
    this->RenderTarget = NULL;
    this->DistanceToEdgeOfViewport = 0.00f;
    this->BorderWidth = 0.00f;
    this->_cachedScreenCaptureSource = SCS_SceneColorHDR;
}

void AFilmerModeHUD::StopCapturing() {
}

void AFilmerModeHUD::StartCapturing() {
}

void AFilmerModeHUD::GetSize(const SizeTypes& SizeType, FVector2D& outSize) {
}

void AFilmerModeHUD::GetBorder(FVector2D& outPosition, FVector2D& outSize) {
}


