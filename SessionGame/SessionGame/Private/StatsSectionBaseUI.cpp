#include "StatsSectionBaseUI.h"

UStatsSectionBaseUI::UStatsSectionBaseUI() : UUserWidget(FObjectInitializer::Get()) {
    this->_stats_SectionTitleBlueprint = NULL;
    this->_stats_StatInfoBlueprint = NULL;
    this->_sectionScrollBox = NULL;
}


