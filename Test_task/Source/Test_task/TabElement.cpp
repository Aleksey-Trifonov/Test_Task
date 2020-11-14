// Fill out your copyright notice in the Description page of Project Settings.


#include "TabElement.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UTabElement::SetSelected(bool bSelected)
{
	if (bSelected)
	{
		TabText->SetOpacity(0.5f);
		TabImage->SetOpacity(0.5f);
	}
	else
	{
		TabText->SetOpacity(1.f);
		TabImage->SetOpacity(1.f);
	}
}
