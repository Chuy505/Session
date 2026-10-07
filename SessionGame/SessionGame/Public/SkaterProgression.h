#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SkaterProgression.generated.h"

class UProgressionStat;

UCLASS(Blueprintable)
class SESSIONGAME_API USkaterProgression : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UProgressionStat*> _baseStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UProgressionStat*> _flipTrickPopHeightStats;
    
public:
    USkaterProgression();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlipTrickPopHeightStatValue(FName StatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseStatValue(FName StatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProgressionStat* GetBaseStat(FName StatName) const;
    
};

