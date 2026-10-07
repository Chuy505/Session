#include "PaginationPipWidget.h"

UPaginationPipWidget::UPaginationPipWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_currentMode = EPaginationPipMode::Inactive;
}

void UPaginationPipWidget::SetPipMode(EPaginationPipMode Mode) {
}

void UPaginationPipWidget::OnPipModeChanged_Implementation(EPaginationPipMode Mode) {
}


