// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_JarnouxAntoineGameMode.h"
#include "FPS_JarnouxAntoineCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_JarnouxAntoineGameMode::AFPS_JarnouxAntoineGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
