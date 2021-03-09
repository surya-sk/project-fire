// Fill out your copyright notice in the Description page of Project Settings.


#include "KillAllGameMode.h"

void AKillAllGameMode::PawnKilled(APawn* KilledPawn)
{
	Super::PawnKilled(KilledPawn);

	UE_LOG(LogTemp, Warning, TEXT("A pawn has been killed"));
}