#include "TRXPluginSettings.h"

UTRXPluginSettings::UTRXPluginSettings() {
    this->bEnableControllerDisconnectionHandling = true;
    this->EngagementScreenMapName = TEXT("MAP_EntryPoint");
    this->bEnableConsoleInShipping = false;
    this->bEnableVisualNotifications = false;
    this->bAutomaticallyShowInputsDisplayWidget = false;
    this->bAutomaticallyRecordInputs = false;
    this->InputsRecordWriteToFileInterval = 1.00f;
    this->PlatformLocalizationsRestriction.AddDefaulted(3);
    this->bEngagementScreenExpectSpecificValidationKey = true;
    this->EngagementScreenValidationKeys.AddDefaulted(2);
    this->ControllerKeyIconsConfigurations.AddDefaulted(7);
    this->DefaultControllerTypeForPreviewInDesigner = ETRXControllerType::XboxOneController;
    this->bEnableSaveProgressWidget = true;
    this->bEnableSaveLoadingScreenWidget = true;
    this->bAutomaticallyHandleSaveFailWithOutOfSpacePopup = true;
    this->DLCNotificationsTitle = FText::FromString(TEXT("Downloadable Content {0} is missing"));
    this->DLCNotificationsReinstallSentence = FText::FromString(TEXT("In order to use this content again, please reinstall this DLC."));
    this->AchievementsConfigurations.AddDefaulted(48);
    this->UseXbox2013AchievementSystemXboxOne = true;
    this->UseXbox2013AchievementSystemXSX = true;
    this->AnonymizeSteamAchievements = true;
    this->LoadedControllerIcons.AddDefaulted(200);
}


