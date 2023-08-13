// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoopGameStudyGameMode.h"
#include "CoopGameStudyHUD.h"
#include "CoopGameStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoopGameStudyGameMode::ACoopGameStudyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACoopGameStudyHUD::StaticClass();
}
