// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPawn.h"
#include "Kismet/GameplayStatics.h"
#include "Test_taskGameModeBase.h"

// Sets default values
ATestPawn::ATestPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPawn::BeginPlay()
{
	Super::BeginPlay();

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
	if (GameMode)
	{
		ATest_taskGameModeBase* TestTaskGameMode = Cast<ATest_taskGameModeBase>(GameMode);
		if (TestTaskGameMode)
		{
			TestWidget = Cast<UTestTaskHUD>(TestTaskGameMode->MainHUD);
			StartWidget = TestTaskGameMode->StartWidget;
		}
	}
}

// Called every frame
void ATestPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("SwitchTabNext", IE_Pressed, this, &ATestPawn::OnPageUpPressed);
	PlayerInputComponent->BindAction("SwitchTabPrevious", IE_Pressed, this, &ATestPawn::OnPageDownPressed);
	PlayerInputComponent->BindAction("Apply", IE_Pressed, this, &ATestPawn::OnApplyPressed);
	PlayerInputComponent->BindAction("Back", IE_Pressed, this, &ATestPawn::OnBackPressed);
}

void ATestPawn::OnPageUpPressed()
{
	TestWidget->SelectNextTab();
}

void ATestPawn::OnPageDownPressed()
{
	TestWidget->SelectPreviousTab();
}

void ATestPawn::OnApplyPressed()
{
	if (TestWidget->IsVisible())
	{
		TestWidget->OnApplyButtonPressed();
	}
}

void ATestPawn::OnBackPressed()
{
	if (TestWidget->IsVisible())
	{
		TestWidget->OnBackButtonPressed();
		StartWidget->SetVisibility(ESlateVisibility::Visible);
	}
}
