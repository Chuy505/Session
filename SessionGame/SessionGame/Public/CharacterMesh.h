#pragma once
#include "CoreMinimal.h"
#include "CharacterMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCharacterMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    SESSIONGAME_API FCharacterMesh();
};

