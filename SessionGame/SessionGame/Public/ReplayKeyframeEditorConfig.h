#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyframeAttributeConfig.h"
#include "ReplayKeyframeEditorConfig.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyframeEditorConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyframeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayKeyframeAttributeConfig> Attributes;
    
    SESSIONGAME_API FReplayKeyframeEditorConfig();
};

