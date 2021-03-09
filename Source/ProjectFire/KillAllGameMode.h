// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectFireGameModeBase.h"
#include "KillAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFIRE_API AKillAllGameMode : public AProjectFireGameModeBase
{
	GENERATED_BODY()
public:
	virtual void PawnKilled(APawn* KilledPawn) override;
	
};
