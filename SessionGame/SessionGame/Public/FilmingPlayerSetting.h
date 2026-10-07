#pragma once
#include "CoreMinimal.h"
#include "FilmingPlayerSetting.generated.h"

USTRUCT(BlueprintType)
struct FFilmingPlayerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionIndex;
    
    SESSIONGAME_API FFilmingPlayerSetting();
};

