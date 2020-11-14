// Fill out your copyright notice in the Description page of Project Settings.


#include "TestTaskHUD.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UTestTaskHUD::NativeConstruct()
{
	Super::NativeConstruct();

	CurrentTabIndex = 0;

	CollectWidgets();
}

void UTestTaskHUD::CollectWidgets()
{
	TabTexts.Add(HomeTab);
	TabLines.Add(HomeLine);

	TabTexts.Add(MissionsTab);
	TabLines.Add(MissionsLine);

	TabTexts.Add(LibraryTab);
	TabLines.Add(LibraryLine);

	TabTexts.Add(SettingsTab);
	TabLines.Add(SettingsLine);
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
	UE_LOG(LogTemp, Warning, TEXT("Highlight tab"));

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
	//TabTexts[0]->SetKeyboardFocus();
}