#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMainHUBSelectionNodeType.h"
#include "MainHUBSelectionNode.generated.h"

UCLASS(Blueprintable)
class SESSIONGAME_API AMainHUBSelectionNode : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainHUBSelectionNodeType _selectionNodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainHUBSelectionNodeType _defaultGoToSelectionNodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _UIDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _UIShortDescription;
    
public:
    AMainHUBSelectionNode(const FObjectInitializer& ObjectInitializer);

};

