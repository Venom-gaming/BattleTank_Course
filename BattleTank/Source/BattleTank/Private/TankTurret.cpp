// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"



void UTankTurret::Turn(float RelativeSpeed)
{
	auto YawChange = FMath::Clamp<float>(RelativeSpeed, -1, 1) * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewYaw = RelativeRotation.Yaw + YawChange;
	
	SetRelativeRotation(FRotator(0, RawNewYaw, 0));
}
