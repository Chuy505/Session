#include "ReplayScrubberBarUI.h"

UReplayScrubberBarUI::UReplayScrubberBarUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_markerBlueprint = NULL;
    this->_clipEndPanel = NULL;
    this->_clipStartPanel = NULL;
    this->_markerPanel = NULL;
    this->_scrubBarSlider = NULL;
}


