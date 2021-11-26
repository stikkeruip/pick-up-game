// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_PracticeGameMode.h"
#include "CPP_PracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_PracticeGameMode::ACPP_PracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
