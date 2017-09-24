// Fill out your copyright notice in the Description page of Project Settings.
#include "BattleTank.h"
#include "TankBarrel.h"




void UTankBarrel::Elevate(float RelativeSpeed)
{
	// Move the barrel the right am
	// Given a max elevation speed, and the frame time
	// jauto Time = GetWorld()->GetTimeSeconds();
	// UE_LOG(LogTemp, Warning, TEXT("%f: Barrel->Elevate() at speed %f"), Time, RelativeSpeed);
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDegrees, MaxElevationDegrees);

	SetRelativeRotation(FRotator(Elevation, 0, 0));

}