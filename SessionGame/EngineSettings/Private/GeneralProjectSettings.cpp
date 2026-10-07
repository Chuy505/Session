#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("creature Studios, Inc.");
    this->CompanyDistinguishedName = TEXT("CN=creature Studios, O=creature Studios, L=Montreal, S=Quebec, C=CA");
    this->Description = TEXT("Session Early Access");
    this->Homepage = TEXT("www.crea-turestudios.com");
    this->ProjectName = TEXT("Session");
    this->ProjectVersion = TEXT("1.0.6.42 (48691)");
    this->SupportContact = TEXT("support@crea-turestudios.com");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Session"));
    this->ProjectDebugTitleInfo = FText::FromString(TEXT("{GameName}_{PlatformArchitecture}"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}


