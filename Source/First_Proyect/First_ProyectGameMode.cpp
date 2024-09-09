// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_ProyectGameMode.h"
#include "First_ProyectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_ProyectGameMode::AFirst_ProyectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
