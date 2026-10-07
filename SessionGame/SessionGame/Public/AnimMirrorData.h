#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAnimMirrorDir.h"
#include "AnimMirrorData.generated.h"

UCLASS(Blueprintable)
class UAnimMirrorData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir MirrorAxis_Rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir RightAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir PelvisMirrorAxis_Rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimMirrorDir PelvisRightAxis;
    
    UAnimMirrorData();

    UFUNCTION(BlueprintCallable)
    void SetMirrorMappedBone(const FName InBoneName, const FName InMirrorBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMirroMappedBone(const FName InBoneName) const;
    
};

