#include "MainHUBSelectionNode.h"

AMainHUBSelectionNode::AMainHUBSelectionNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_selectionNodeType = EMainHUBSelectionNodeType::Archive_Node;
    this->_defaultGoToSelectionNodeType = EMainHUBSelectionNodeType::Center_Node;
}


