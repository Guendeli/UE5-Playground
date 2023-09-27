// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidget.h"
#include "Components/ProgressBar.h"

void UHUDWidget::UpdateHealthBar(float percent)
{
	HPFill->SetPercent(percent);
}


