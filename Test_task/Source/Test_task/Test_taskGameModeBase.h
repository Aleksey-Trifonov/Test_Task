// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Test_taskGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TEST_TASK_API ATest_taskGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> MainHUDClass;

	UPROPERTY(BlueprintReadOnly)
	UUserWidget* MainHUD;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> StartWidgetClass;

	UPROPERTY(BlueprintReadOnly)
	UUserWidget* StartWidget;
};
