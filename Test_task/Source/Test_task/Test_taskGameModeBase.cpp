// Copyright Epic Games, Inc. All Rights Reserved.


#include "Test_taskGameModeBase.h"

void ATest_taskGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	MainHUD = CreateWidget<UUserWidget>(GetWorld(), MainHUDClass);
	if (MainHUD)
	{
		MainHUD->AddToViewport();
	}
}