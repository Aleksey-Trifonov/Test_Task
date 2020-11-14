// Fill out your copyright notice in the Description page of Project Settings.


#include "TestTaskPlayerController.h"

void ATestTaskPlayerController::BeginPlay()
{
	Super::BeginPlay();

	SetInputMode(FInputModeGameAndUI());
}
