#pragma once
#include "CoreMinimal.h"
#include "NewsEULAContentTexts.generated.h"

USTRUCT(BlueprintType)
struct FNewsEULAContentTexts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> _texts;
    
public:
    SESSIONGAME_API FNewsEULAContentTexts();
};

