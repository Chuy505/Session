#include "MyNacon_HUD.h"

UMyNacon_HUD::UMyNacon_HUD() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->_registerOffer_UI = NULL;
    this->_emailEntry_UI = NULL;
    this->_dateOfBirth_UI = NULL;
    this->_createUsername_UI = NULL;
    this->_createPassword_UI = NULL;
    this->_ToS_UI = NULL;
    this->_emailVerification_UI = NULL;
    this->_emailUnverified_UI = NULL;
    this->_loginPassword_UI = NULL;
    this->_forgotPassword_UI = NULL;
    this->_accountLinked_UI = NULL;
    this->_error_UI = NULL;
    this->_mnResponseConfig = NULL;
    this->_diyRewardDatabase = NULL;
}


