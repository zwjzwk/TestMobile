// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestMobileGameMode.h"
#include "TestMobileCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestMobileGameMode::ATestMobileGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
