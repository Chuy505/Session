#include "ReplayKeyframeAttributeConfig.h"

FReplayKeyframeAttributeConfig::FReplayKeyframeAttributeConfig() {
    this->AttributeType = EReplayKeyframeEditorAttributeType::RKFEAT_Undefined;
    this->FloatRangeMin = 0.00f;
    this->FloatRangeMax = 0.00f;
    this->FloatRangeStep = 0.00f;
}

