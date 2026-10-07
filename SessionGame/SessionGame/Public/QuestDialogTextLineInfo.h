#pragma once
#include "CoreMinimal.h"
#include "QuestDialogTextLineInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FQuestDialogTextLineInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* _speakerTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _textLine;
    
public:
    SESSIONGAME_API FQuestDialogTextLineInfo();
};

