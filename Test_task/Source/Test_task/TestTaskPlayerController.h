// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TestTaskPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TEST_TASK_API ATestTaskPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;
};
