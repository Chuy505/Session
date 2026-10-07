#include "NewsContentWidget.h"

UNewsContentWidget::UNewsContentWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_titleTextBlock = NULL;
    this->_dateTextBlock = NULL;
    this->_newsArticleNewImage = NULL;
    this->_pageImage = NULL;
    this->_descScrollBlock = NULL;
    this->_descTextBlock = NULL;
    this->_loadingContainer = NULL;
    this->_paginationWidget = NULL;
    this->_moreInfoContainer = NULL;
    this->_moreInfoInput = NULL;
    this->_fallbackNewsImage = NULL;
    this->_descScrollDelta = 20.00f;
    this->_descScrollSpeed = 5.00f;
    this->_audioSet = NULL;
}


