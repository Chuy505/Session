#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MyNacon_HUD.generated.h"

class AActor;
class UMNHttpResponseConfig;
class UMyNacon_AccountLinked_UI;
class UMyNacon_CreatePassword_UI;
class UMyNacon_CreateUsername_UI;
class UMyNacon_DateOfBirth_UI;
class UMyNacon_EmailEntry_UI;
class UMyNacon_EmailUnverified_UI;
class UMyNacon_EmailVerification_UI;
class UMyNacon_Error_UI;
class UMyNacon_ForgotPassword_UI;
class UMyNacon_LoginPassword_UI;
class UMyNacon_RegisterOffer_UI;
class UMyNacon_ToS_UI;
class UObjectDropperObjectsDatabase;

UCLASS(Blueprintable, EditInlineNew)
class SESSIONGAME_API UMyNacon_HUD : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_RegisterOffer_UI* _registerOffer_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_EmailEntry_UI* _emailEntry_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_DateOfBirth_UI* _dateOfBirth_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_CreateUsername_UI* _createUsername_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_CreatePassword_UI* _createPassword_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_ToS_UI* _ToS_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_EmailVerification_UI* _emailVerification_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_EmailUnverified_UI* _emailUnverified_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_LoginPassword_UI* _loginPassword_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_ForgotPassword_UI* _forgotPassword_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_AccountLinked_UI* _accountLinked_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMyNacon_Error_UI* _error_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMNHttpResponseConfig* _mnResponseConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectDropperObjectsDatabase* _diyRewardDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> _diyRewards;
    
public:
    UMyNacon_HUD();

};

