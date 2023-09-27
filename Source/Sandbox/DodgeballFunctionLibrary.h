// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DodgeballFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API UDodgeballFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	static bool CanSeeActor(const UWorld* world, FVector location,const AActor* target, TArray<const AActor*> ignoredTargets = TArray<const AActor*>() );
};
