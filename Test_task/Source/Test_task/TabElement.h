// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TabElement.generated.h"

/**
 * 
 */
UCLASS()
class TEST_TASK_API UTabElement : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void SetSelected(bool bSelected);

private:

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TabText;

	UPROPERTY(meta = (BindWidget))
	class UImage* TabImage;
};
