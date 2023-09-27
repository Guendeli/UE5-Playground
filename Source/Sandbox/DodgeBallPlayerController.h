// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<URestartWidget> BP_RestartWidget;

private:

	UPROPERTY()
	TObjectPtr<URestartWidget> RestartWidget;
};
