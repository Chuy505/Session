#include "SessionDebugCameraController.h"
#include "SessionCheatManager.h"

ASessionDebugCameraController::ASessionDebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = USessionCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


