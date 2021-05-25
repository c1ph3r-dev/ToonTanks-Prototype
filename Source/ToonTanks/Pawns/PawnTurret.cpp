// Copyright Jonathan Justin Rampersad 2021


#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"

APawnTurret::APawnTurret()
{
}

void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);
}

void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APawnTurret::CheckFireCondition()
{
	// If Player == null || is Dead THEN BAIL!!

	// If Player IS in range THEN FIRE!!

	UE_LOG(LogTemp, Warning, TEXT("Fire condition checked!"));
}