// Copyright Epic Games, Inc. All Rights Reserved.


#include "LyraGameMode.h"

#include "LyraGameState.h"
#include "Player/LyraPlayerController.h"
//#include "Player/XcgsPlayerPawn.h"
//#include "UI/XcgsHUD.h"


ALyraGameMode::ALyraGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameStateClass = ALyraGameState::StaticClass();
	PlayerControllerClass = ALyraPlayerController::StaticClass();
	//DefaultPawnClass = AXcgsPlayerPawn::StaticClass();
	//HUDClass = AXcgsHUD::StaticClass();
}


void ALyraGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}


void ALyraGameMode::InitGameState()
{
	Super::InitGameState();
}

