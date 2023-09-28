// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HUDWidget.h"
#include "RestartWidget.h"
#include "GameFramework/PlayerController.h"
#include "DodgeBallPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API ADodgeBallPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	void ShowRestartWidget();
	void HideWidget();
	void UpdateHealthPercent(float percent);
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<URestartWidget> BP_RestartWidget;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UHUDWidget> BP_HUDWidget;

protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY()
	TObjectPtr<URestartWidget> RestartWidget;

	UPROPERTY()
	TObjectPtr<UHUDWidget> HUDWidget;
};
