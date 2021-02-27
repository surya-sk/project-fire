// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AShooterCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AShooterCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &AShooterCharacter::LookRight);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &AShooterCharacter::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &AShooterCharacter::LookRightRate);
}

void AShooterCharacter::MoveForward(float Axis)
{
	AddMovementInput(GetActorForwardVector(), Axis);
}

void AShooterCharacter::MoveRight(float Axis)
{
	AddMovementInput(GetActorRightVector(), Axis);
}

void AShooterCharacter::LookUp(float Axis)
{
	AddControllerPitchInput(Axis);
}

void AShooterCharacter::LookRight(float Axis)
{
	AddControllerYawInput(Axis);
}

void AShooterCharacter::LookUpRate(float Rate)
{
	AddControllerPitchInput(Rate * RotationSpeed * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::LookRightRate(float Rate)
{
	AddControllerYawInput(Rate * RotationSpeed * GetWorld()->GetDeltaSeconds());
}

