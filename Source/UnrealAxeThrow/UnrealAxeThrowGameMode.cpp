// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealAxeThrowGameMode.h"
#include "UnrealAxeThrowCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealAxeThrowGameMode::AUnrealAxeThrowGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
