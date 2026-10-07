#include "SessionGameInstance.h"

USessionGameInstance::USessionGameInstance() {
    this->_newsEULAWidget_Blueprint = NULL;
    this->_alertWidget_Blueprint = NULL;
    this->_popupPage_Blueprint = NULL;
    this->_defaultVisualsDefinition = NULL;
    this->_cachedSkaterDefinition = NULL;
    this->_databaseCategories = NULL;
    this->_databaseCustomizationDefaultItems = NULL;
    this->_defaultApartmentMapName = TEXT("HUB_Persistent");
    this->_mapSelectDataAsset = NULL;
    this->_transitDataAsset = NULL;
    this->_fingerBoardVisualsDefinition = NULL;
    this->_fingerBoardMapName = TEXT("TrickMap");
    this->_playerProfile = NULL;
    this->_newsSystem = NULL;
}

bool USessionGameInstance::IsInIntro() const {
    return false;
}

USessionGameViewportClient* USessionGameInstance::GetSessionGameViewportClient() const {
    return NULL;
}

UPlayerProfile* USessionGameInstance::GetPlayerProfile() const {
    return NULL;
}

FString USessionGameInstance::GetGameVersion() const {
    return TEXT("");
}

void USessionGameInstance::DebugStartSecondPlayerCamera() {
}

void USessionGameInstance::CITShowFName(bool show) {
}


