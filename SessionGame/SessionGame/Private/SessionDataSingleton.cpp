#include "SessionDataSingleton.h"

USessionDataSingleton::USessionDataSingleton() {
    this->_catchOrientsDb = NULL;
    this->_grindsDb = NULL;
    this->_inputsDb = NULL;
    this->_manualsDb = NULL;
    this->_powerSlidesDb = NULL;
    this->_revertsDb = NULL;
    this->_tricksDb = NULL;
    this->_customizationDb = NULL;
    this->_customizationCategoriesDb = NULL;
    this->_customizationCompaniesDb = NULL;
    this->_contactPartsDecayDatabase = NULL;
    this->_clothesContactPartsDecayDatabase = NULL;
    this->_cameraFilterSettings = NULL;
    this->_cameraModelSettings = NULL;
    this->_cameraLensSettings = NULL;
}


