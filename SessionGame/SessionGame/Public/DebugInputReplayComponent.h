#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplayModule -ObjectName=ReplayComponentBase -FallbackName=ReplayComponentBase
#include "Templates/SubclassOf.h"
#include "DebugInputReplayComponent.generated.h"

class UDebugReplayInputStickUI;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API UDebugInputReplayComponent : public UReplayComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDebugReplayInputStickUI> _debugInputStickUIBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordDebugData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _recordActiveInputs;
    
public:
    UDebugInputReplayComponent(const FObjectInitializer& ObjectInitializer);

};

