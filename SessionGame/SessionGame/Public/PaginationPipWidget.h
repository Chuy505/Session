#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EPaginationPipMode.h"
#include "PaginationPipWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UPaginationPipWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPaginationPipMode _currentMode;
    
public:
    UPaginationPipWidget();

    UFUNCTION(BlueprintCallable)
    void SetPipMode(EPaginationPipMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPipModeChanged(EPaginationPipMode Mode);
    
};

