#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "Templates/SubclassOf.h"
#include "EntryPointGameMode.generated.h"

class UDifficultyWizardUI;
class UEngagementScreenUI;

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API AEntryPointGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _introLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _hubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDifficultyWizardUI> _difficultyWizardUIBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEngagementScreenUI> _engagementScreenUIBlueprint;
    
public:
    AEntryPointGameMode(const FObjectInitializer& ObjectInitializer);

};

