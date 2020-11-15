// Fill out your copyright notice in the Description page of Project Settings.


#include "TestTaskHUD.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void UTestTaskHUD::NativeConstruct()
{
	Super::NativeConstruct();

	CurrentTabIndex = 0;
	CurrentButtonIndex = 0;

	CollectWidgets();

	HighlightSelectedTab();
	SetButtonFocus();
}

void UTestTaskHUD::CollectWidgets()
{
	TabTexts.Add(HomeTab);
	TabTexts.Add(MissionsTab);
	TabTexts.Add(LibraryTab);
	TabTexts.Add(SettingsTab);

	TabLines.Add(HomeLine);
	TabLines.Add(MissionsLine);
	TabLines.Add(LibraryLine);
	TabLines.Add(SettingsLine);

	SelectableButtons.Add(QuickGameButton);
	SelectableButtons.Add(RandomMatchButton);
	SelectableButtons.Add(AchievementsButton);
	SelectableButtons.Add(QuestButton);
	SelectableButtons.Add(LocationsButton);
}

void UTestTaskHUD::SelectNextTab()
{
	CurrentTabIndex++;
	if (CurrentTabIndex == TabTexts.Num())
	{
		CurrentTabIndex = 0;
	}

	HighlightSelectedTab();
}

void UTestTaskHUD::SelectPreviousTab()
{
	CurrentTabIndex--;
	if (CurrentTabIndex == -1)
	{
		CurrentTabIndex = TabTexts.Num() - 1;
	}

	HighlightSelectedTab();
}

void UTestTaskHUD::HighlightSelectedTab()
{
	for (int i = 0; i < TabTexts.Num(); i++)
	{
		if (i == CurrentTabIndex)
		{
			TabTexts[i]->SetOpacity(1.f);
			TabLines[i]->SetOpacity(1.f);
		}
		else
		{
			TabTexts[i]->SetOpacity(0.5f);
			TabLines[i]->SetOpacity(0.5f);
		}
	}
}

void UTestTaskHUD::SetButtonFocus()
{
	SelectableButtons[CurrentButtonIndex]->SetFocus();
}

void UTestTaskHUD::OnApplyButtonPressed()
{
	DescriptionHeader->SetText(CurrentButtonText);
	SelectedCategoryImage->SetBrushFromTexture(SelectedButtonsImages[CurrentButtonIndex]);
}

void UTestTaskHUD::UpdateSelectedButtonInfo(int32 ButtonIndex, FText CategoryText)
{
	CurrentButtonIndex = ButtonIndex;
	CurrentButtonText = CategoryText;
}

void UTestTaskHUD::OnBackButtonPressed()
{
	SetVisibility(ESlateVisibility::Hidden);
}
