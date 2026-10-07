#include "ObjectDropperManager.h"

AObjectDropperManager::AObjectDropperManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_objectsDatabase = NULL;
    this->_objectDropperCameraBlueprint = NULL;
    this->_objectDropperHUDBlueprint = NULL;
    this->_minimumObjectLinearSpeed = 0.00f;
    this->_maximumObjectLinearSpeed = 1250.00f;
    this->_objectVerticalSpeedCurve = NULL;
    this->_objectAngularSpeed = 150.00f;
    this->_maxObjectStickToGroundDistance = 100000.00f;
    this->_maxObjectPickUpDistance = 2500.00f;
    this->_objectPickUpRadius = 16.00f;
    this->_masterObjectsMaterialCollection = NULL;
    this->_resetOrientationTotalInputTime = 1.00f;
    this->_callBackObjectTotalInputTime = 1.00f;
    this->_duplicateObjectTotalInputTime = 1.00f;
    this->_spawnObjectSelectionChangedTotalTime = 0.20f;
    this->_persistentDataHandler = NULL;
}


