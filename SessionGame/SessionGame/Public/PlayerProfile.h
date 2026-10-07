#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DayNightSettings.h"
#include "PlayerProfile.generated.h"

class USkaterProgression;

UCLASS(Blueprintable)
class SESSIONGAME_API UPlayerProfile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkaterProgression* _progression;
    
public:
    UPlayerProfile();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDayNightSettings GetDayNightSettings() const;
    
};

