#include "BrokenBoardPopupWidget.h"

UBrokenBoardPopupWidget::UBrokenBoardPopupWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_showPopupAnimation = NULL;
    this->_repairBoardButton = NULL;
    this->_canvasPanel = NULL;
    this->_audioSet = NULL;
    this->_shownDuration = 4.00f;
}

void UBrokenBoardPopupWidget::HandleOnPopupHidden() {
}


