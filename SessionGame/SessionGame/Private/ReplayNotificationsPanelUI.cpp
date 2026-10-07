#include "ReplayNotificationsPanelUI.h"

UReplayNotificationsPanelUI::UReplayNotificationsPanelUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_notificationUIBlueprint = NULL;
    this->_notificationDuration = 3.00f;
    this->_maxNotifications = 5;
    this->_notificationsPanel = NULL;
}


