#include "PlayerControllerCPP.h"

bool APlayerControllerCPP::SetNewSoundClassVolume(USoundClass* TargetClass, float NewVolume)
{
	if (!TargetClass) { return false; }

	TargetClass->Properties.Volume = NewVolume;

	return true;
}

float APlayerControllerCPP::GetSoundClassVolume(USoundClass* TargetClass)
{
	if (!TargetClass) { return 0.f; }

	return TargetClass->Properties.Volume;
}