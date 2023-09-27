// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeBallPlayerController.h"

void ADodgeBallPlayerController::ShowRestartWidget()
{
	if(BP_RestartWidget != nullptr)
	{
		SetPause(true);
		SetInputMode(FInputModeUIOnly());
		bShowMouseCursor = true;

		RestartWidget = CreateWidget<URestartWidget>(this, BP_RestartWidget);
		RestartWidget->AddToViewport();
	}
}

void ADodgeBallPlayerController::HideWidget()
{
	RestartWidget->RemoveFromParent();
	RestartWidget->Destruct();
	SetPause(false);
	SetInputMode(FInputModeGameOnly());
	bShowMouseCursor = false;
}

