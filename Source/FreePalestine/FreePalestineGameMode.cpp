// Copyright Hakan Games, Inc. All Rights Reserved.

#include "FreePalestineGameMode.h"
#include "FreePalestineCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFreePalestineGameMode::AFreePalestineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
