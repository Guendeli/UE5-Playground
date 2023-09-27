// Fill out your copyright notice in the Description page of Project Settings.


#include "RestartWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "DodgeBallPlayerController.h"

void URestartWidget::OnRestartClicked()
{
	ADodgeBallPlayerController* playerController = Cast<ADodgeBallPlayerController>(GetOwningPlayer());
	if(playerController != nullptr)
	{
		playerController->HideWidget();
	}
	UGameplayStatics::OpenLevel(this, FName(*UGameplayStatics::GetCurrentLevelName(this)));
}

void URestartWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if(RestartButton != nullptr)
	{
		RestartButton->OnClicked.AddDynamic(this, &URestartWidget::OnRestartClicked);
	}
}
