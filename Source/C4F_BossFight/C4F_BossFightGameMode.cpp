// Copyright Epic Games, Inc. All Rights Reserved.

#include "C4F_BossFightGameMode.h"
#include "C4F_BossFightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC4F_BossFightGameMode::AC4F_BossFightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
