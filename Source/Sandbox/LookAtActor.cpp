// Fill out your copyright notice in the Description page of Project Settings.


#include "LookAtActor.h"
#include "DodgeballFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
ULookAtActor::ULookAtActor(): TargetActor(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void ULookAtActor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULookAtActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	bCanSeeTarget = LookAtActor();
}

bool ULookAtActor::LookAtActor()
{
	if(TargetActor  == nullptr)
		return false;

	const TArray<const AActor*> ignoredActors = {GetOwner(), TargetActor };

	if(UDodgeballFunctionLibrary::CanSeeActor(GetWorld(), GetComponentLocation(), TargetActor , ignoredActors))
	{
		FVector start = GetOwner()->GetActorLocation();
		FVector end = TargetActor ->GetActorLocation();
		// Calc the rotation arc
		FRotator lookAt = UKismetMathLibrary::FindLookAtRotation(start,end);

		GetOwner()->SetActorRotation(lookAt);
		return true;
	}

	return false;
}




