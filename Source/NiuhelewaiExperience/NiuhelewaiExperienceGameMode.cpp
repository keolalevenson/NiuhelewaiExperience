// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NiuhelewaiExperienceGameMode.h"
#include "NiuhelewaiExperienceHUD.h"
#include "NiuhelewaiExperienceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANiuhelewaiExperienceGameMode::ANiuhelewaiExperienceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANiuhelewaiExperienceHUD::StaticClass();
}
