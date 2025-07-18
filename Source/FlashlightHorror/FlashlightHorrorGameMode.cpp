// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlashlightHorrorGameMode.h"
#include "FlashlightHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFlashlightHorrorGameMode::AFlashlightHorrorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
