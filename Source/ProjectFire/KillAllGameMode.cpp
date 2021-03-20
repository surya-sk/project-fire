// Fill out your copyright notice in the Description page of Project Settings.


#include "KillAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "ShooterAIController.h"

void AKillAllGameMode::PawnKilled(APawn* KilledPawn)
{
	Super::PawnKilled(KilledPawn);

	APlayerController* PlayerPawn = Cast<APlayerController>(KilledPawn->GetController());
	if (PlayerPawn != nullptr)
	{
		EndGame(false);
	}

	for (AShooterAIController* AIController : TActorRange<AShooterAIController>(GetWorld()))
	{
		if (!AIController->IsDead())
		{
			return;
		}
	}
	EndGame(true);
}

void AKillAllGameMode::EndGame(bool bIsPlayerWinner)
{
	for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
		bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
		Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
	}
}
