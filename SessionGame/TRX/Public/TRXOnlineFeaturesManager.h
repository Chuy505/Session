#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TRXOnlineFeaturesManager.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class TRX_API UTRXOnlineFeaturesManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTRXOnlineFeaturesManager();

    UFUNCTION(BlueprintCallable)
    static bool UpdateAchievementProgressBP(APlayerController* PlayerController, const int32 AchievementID, const int32 progressCurrentValue, const int32 progressTargetValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRichPresenceBP(APlayerController* PlayerController, const FString& presence);
    
};

