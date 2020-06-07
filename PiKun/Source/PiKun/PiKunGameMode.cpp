// Copyright Epic Games, Inc. All Rights Reserved.

#include "PiKunGameMode.h"
#include "PiKunCharacter.h"
#include "UObject/ConstructorHelpers.h"

APiKunGameMode::APiKunGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
