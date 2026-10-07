#include "TRXProfilingSubsystem.h"

UTRXProfilingSubsystem::UTRXProfilingSubsystem() {
    this->ProfilingScenarioList = NULL;
    this->ActiveScenario = NULL;
}

void UTRXProfilingSubsystem::StopAutomaticProfilingSession() {
}

void UTRXProfilingSubsystem::StartAutomaticProfilingSessionFromId(const FName& profilingScenarioId) {
}

void UTRXProfilingSubsystem::StartAutomaticProfilingSession(UTRXProfilingScenarioBase* scenario) {
}

void UTRXProfilingSubsystem::SetActiveProfilingCamera(int32 cameraConfigurationIndex) {
}

void UTRXProfilingSubsystem::PreviewProfilingCameraDisplacement(int32 cameraConfigurationIndex) {
}

void UTRXProfilingSubsystem::CyclePreviousProfilingCamera() {
}

void UTRXProfilingSubsystem::CycleNextProfilingCamera() {
}


