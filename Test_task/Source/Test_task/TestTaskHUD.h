// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TestTaskHUD.generated.h"

UCLASS()
class TEST_TASK_API UTestTaskHUD : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void SelectNextTab();

	UFUNCTION(BlueprintCallable)
	void SelectPreviousTab();

	UFUNCTION(BlueprintCallable)
	void SetButtonFocus();

protected:

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HomeTab;
	UPROPERTY(meta = (BindWidget))
	class UImage* HomeLine;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MissionsTab;
	UPROPERTY(meta = (BindWidget))
	UImage* MissionsLine;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LibraryTab;
	UPROPERTY(meta = (BindWidget))
	UImage* LibraryLine;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* SettingsTab;
	UPROPERTY(meta = (BindWidget))
	UImage* SettingsLine;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* DescriptionHeader;

	UPROPERTY(EditDefaultsOnly, Category = "Overlays")
	UTexture2D* SelectedButtonOverlay;

	UPROPERTY(EditDefaultsOnly, Category = "Overlays")
	UTexture2D* UnselectedButtonOverlay;

	UPROPERTY()
	TArray<UTextBlock*> TabTexts;
	UPROPERTY()
	TArray<UImage*> TabLines;

	void NativeConstruct() override;

private:

	UFUNCTION()
	void CollectWidgets();

	UFUNCTION()
	void HighlightSelectedTab();

	int32 CurrentTabIndex;

	int32 CurrentButtonIndex;
};
