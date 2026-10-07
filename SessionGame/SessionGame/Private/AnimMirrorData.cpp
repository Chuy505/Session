#include "AnimMirrorData.h"

UAnimMirrorData::UAnimMirrorData() {
    this->MirrorAxis_Rot = EAnimMirrorDir::AMirrorDir_ZAxis;
    this->RightAxis = EAnimMirrorDir::AMirrorDir_ZAxis;
    this->PelvisMirrorAxis_Rot = EAnimMirrorDir::AMirrorDir_ZAxis;
    this->PelvisRightAxis = EAnimMirrorDir::AMirrorDir_XAxis;
}

void UAnimMirrorData::SetMirrorMappedBone(const FName InBoneName, const FName InMirrorBoneName) {
}

FName UAnimMirrorData::GetMirroMappedBone(const FName InBoneName) const {
    return NAME_None;
}


