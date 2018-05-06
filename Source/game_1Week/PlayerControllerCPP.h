

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "PlayerControllerCPP.generated.h"

/**
*
*/
UCLASS()
class GAME_1WEEK_API APlayerControllerCPP : public APlayerController
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Sound")
		bool SetNewSoundClassVolume(USoundClass* TargetClass, float NewVolume);

	UFUNCTION(BlueprintCallable, Category = "Sound")
		float GetSoundClassVolume(USoundClass* TargetClass);
};
