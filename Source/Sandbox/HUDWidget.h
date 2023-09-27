// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "HUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void UpdateHealthBar(float percent);
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UProgressBar> HPFill;
	
};
