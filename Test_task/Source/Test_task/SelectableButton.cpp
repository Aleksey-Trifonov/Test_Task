// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectableButton.h"

FReply USelectableButton::NativeOnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent)
{
    OnSelectableButtonFocusObtained.Broadcast();

    return Super::NativeOnFocusReceived(MyGeometry, InFocusEvent);
}

void USelectableButton::NativeOnFocusLost(const FFocusEvent& InFocusEvent)
{
    Super::NativeOnFocusLost(InFocusEvent);

    OnSelectableButtonFocusLost.Broadcast();
}
