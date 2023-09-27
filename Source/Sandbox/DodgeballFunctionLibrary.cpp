// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballFunctionLibrary.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"

bool UDodgeballFunctionLibrary::CanSeeActor(const UWorld* world, FVector location, const AActor* target, TArray<const AActor*> ignoredTargets)
{
	if(target == nullptr) return false;
	FHitResult hit;

	FVector start = location;
	FVector end = target->GetActorLocation();

	ECollisionChannel channel = ECC_GameTraceChannel1;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActors(ignoredTargets);

	world->LineTraceSingleByChannel(hit, start, end, channel, QueryParams);

	// Show the Line Trace inside the game
	DrawDebugLine(world, start, end, FColor::Red);

	return hit.bBlockingHit == false;
}


