#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "TrackedArea.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API ATrackedArea : public AActor {
    GENERATED_BODY()
public:
    ATrackedArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetColor(FSlateColor Color);
    
};

