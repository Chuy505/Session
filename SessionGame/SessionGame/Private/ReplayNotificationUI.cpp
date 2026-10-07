#include "ReplayNotificationUI.h"

UReplayNotificationUI::UReplayNotificationUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_notificationText = NULL;
}



void UReplayNotificationUI::NativeRemoveFromParent() {
}


