// Fill out your copyright notice in the Description page of Project Settings.


#include "KillAllGameMode.h"

void AKillAllGameMode::PawnKilled(APawn* KilledPawn)
{
	Super::PawnKilled(KilledPawn);

	APlayerController* PlayerPawn = Cast<APlayerController>(KilledPawn->GetController());
	if (PlayerPawn != nullptr)
	{
		PlayerPawn->GameHasEnded(nullptr, false);
	}
}