// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

class UBehaviorTree;
/**
 * 
 */
UCLASS()
class PROJECTFIRE_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

public:
	void Tick(float DeltaSeconds) override;
	bool IsDead() const;
	
protected:
	void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	UBehaviorTree* AIBehavior;
};
