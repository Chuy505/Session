#include "TrackingVisualParams.h"

FTrackingVisualParams::FTrackingVisualParams() {
    this->_showTargetIcon = false;
    this->_targetIconTrackingChannel = ETrackingChannelType::TCT_Default;
    this->_targetIconTrackedOffscreen = false;
    this->_showTargetArea = false;
}

