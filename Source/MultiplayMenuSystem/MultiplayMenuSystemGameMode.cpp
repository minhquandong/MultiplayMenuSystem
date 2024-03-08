// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayMenuSystemGameMode.h"
#include "MultiplayMenuSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayMenuSystemGameMode::AMultiplayMenuSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
