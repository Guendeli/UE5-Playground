// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "RestartWidget.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API URestartWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeOnInitialized() override;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RestartButton;

protected:

	UFUNCTION()
	void OnRestartClicked();
};
