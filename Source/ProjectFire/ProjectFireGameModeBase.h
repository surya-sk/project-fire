// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectFireGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFIRE_API AProjectFireGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* KilledPawn);
};
