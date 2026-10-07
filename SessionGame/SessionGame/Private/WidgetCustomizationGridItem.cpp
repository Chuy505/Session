#include "WidgetCustomizationGridItem.h"

UWidgetCustomizationGridItem::UWidgetCustomizationGridItem() : UUserWidget(FObjectInitializer::Get()) {
    this->Display_Image = NULL;
    this->Locked_Image = NULL;
    this->New_Image = NULL;
    this->Selected_Image = NULL;
    this->Status_Image = NULL;
    this->Customized_Image = NULL;
    this->Price_Panel = NULL;
    this->Price_Text = NULL;
    this->Quantity_Panel = NULL;
    this->Quantity_Text = NULL;
}


