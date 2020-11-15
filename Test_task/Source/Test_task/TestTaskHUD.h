// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectableButton.h"
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
	void HighlightSelectedTab();

	UFUNCTION(BlueprintCallable)
	void SetButtonFocus();

	UFUNCTION(BlueprintCallable)
	void OnApplyButtonPressed();

	UFUNCTION(BlueprintCallable)
	void UpdateSelectedButtonInfo(int32 ButtonIndex, FText CategoryText);

	UFUNCTION()
	void OnBackButtonPressed();

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
	UPROPERTY(meta = (BindWidget))
	UImage* SelectedCategoryImage;

	UPROPERTY(meta = (BindWidget))
	USelectableButton* QuickGameButton;
	UPROPERTY(meta = (BindWidget))
	USelectableButton* RandomMatchButton;
	UPROPERTY(meta = (BindWidget))
	USelectableButton* AchievementsButton;
	UPROPERTY(meta = (BindWidget))
	USelectableButton* QuestButton;
	UPROPERTY(meta = (BindWidget))
	USelectableButton* LocationsButton;

	UPROPERTY()
	TArray<UTextBlock*> TabTexts;
	UPROPERTY()
	TArray<UImage*> TabLines;
	UPROPERTY()
	TArray<USelectableButton*> SelectableButtons;

	UPROPERTY(EditDefaultsOnly)
	TArray<UTexture2D*> SelectedButtonsImages;

	void NativeConstruct() override;

private:

	UFUNCTION()
	void CollectWidgets();

	int32 CurrentTabIndex;

	int32 CurrentButtonIndex;

	FText CurrentButtonText;
};
