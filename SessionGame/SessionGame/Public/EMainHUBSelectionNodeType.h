#pragma once
#include "CoreMinimal.h"
#include "EMainHUBSelectionNodeType.generated.h"

UENUM(BlueprintType)
enum class EMainHUBSelectionNodeType : uint8 {
    Archive_Node,
    Center_Node,
    Customization_Node,
    CustomizeBoard_Node,
    GoSkate_Node,
    Miscellaneous_Node,
    Title_Node,
    VideoMontage_Node,
    VideoReplay_Node,
    WebBrowser_Node,
    FingerBoardTable_Node,
};

