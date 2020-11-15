// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectableButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectableButtonFocusObtained);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectableButtonFocusLost);

/**
 * 
 */
UCLASS()
class TEST_TASK_API USelectableButton : public UUserWidget
{
	GENERATED_BODY()

public:

    virtual FReply NativeOnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent) override;
    virtual void NativeOnFocusLost(const FFocusEvent& InFocusEvent) override;

protected:
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    class UButton* SelectableButton;

    UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = UIEvents)
    FOnSelectableButtonFocusObtained OnSelectableButtonFocusObtained;

    UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = UIEvents)
    FOnSelectableButtonFocusLost OnSelectableButtonFocusLost;
};
