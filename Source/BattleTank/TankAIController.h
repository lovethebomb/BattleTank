// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	
private: 
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;


protected:
	// How close can the AI tank get to the player
	UPROPERTY(EditDefaultsOnly, Category = "Setup") // Consider EditDefaultsOnly
	float AcceptanceRadius = 80000;

public:
};
