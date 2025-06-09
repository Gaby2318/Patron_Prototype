// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patron_PrototypeGameMode.h"
#include "Patron_PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APatron_PrototypeGameMode::APatron_PrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
