#include "TrickList.h"

UTrickList::UTrickList() : UUserWidget(FObjectInitializer::Get()) {
    this->ToggleVisibilityButton = NULL;
    this->Tricks = NULL;
    this->ItemBlueprint = NULL;
    this->TricksDatabase = NULL;
    this->GrindsDatabase = NULL;
    this->ToggleListActionInputEvent = IE_Pressed;
}


