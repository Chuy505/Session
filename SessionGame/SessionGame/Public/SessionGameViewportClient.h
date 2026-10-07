#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "SessionGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class SESSIONGAME_API USessionGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USessionGameViewportClient();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustPressed(int32 ControllerId, FKey Key) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintInputModeStack(bool onScreen, bool Log, bool collapseLog);
    
};

