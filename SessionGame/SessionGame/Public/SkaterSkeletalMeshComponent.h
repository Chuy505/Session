#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SkaterSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SESSIONGAME_API USkaterSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USkaterSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

