#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(34);
    this->DefaultChannelResponses.AddDefaulted(11);
    this->EditProfiles.AddDefaulted(7);
    this->ProfileRedirects.AddDefaulted(6);
    this->CollisionChannelRedirects.AddDefaulted(7);
}


