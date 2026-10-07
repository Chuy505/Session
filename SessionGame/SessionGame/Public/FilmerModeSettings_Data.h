#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FilmerModeSettings_Data.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API UFilmerModeSettings_Data : public UDataAsset {
    GENERATED_BODY()
public:
    UFilmerModeSettings_Data();

};

