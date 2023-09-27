// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"

#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "LookAtActor.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LookAtActorComponent = CreateDefaultSubobject<ULookAtActor>(TEXT("Look At Actor"));
	LookAtActorComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(this,0);
	if(playerCharacter == nullptr)
	{
		UE_LOG(LogTemp ,Error, TEXT("Player Character not found"));
		return;
	}
	if(LookAtActorComponent != nullptr)
	{
		LookAtActorComponent->SetTarget(playerCharacter);
	}
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(LookAtActorComponent != nullptr)
		bPlayerSeen = LookAtActorComponent->CanSeeTarget();

	if(bPlayerSeen != bPreviousPlayerSeen)
	{
		if(bPlayerSeen)
		{
			GetWorldTimerManager().SetTimer(throwTimerHandle, this, &AEnemyCharacter::ThrowDodgeball, throwInterval, true, throwDelay);
		} else
		{
			GetWorldTimerManager().ClearTimer(throwTimerHandle);
		}	 
	}
	
	bPreviousPlayerSeen = bPlayerSeen;
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AEnemyCharacter::ThrowDodgeball()
{
	if(DodgeProjectile == nullptr)
	{
		return;
	}

	FVector forward = GetActorForwardVector();
	float spawnDistance = 40.f;
	FVector spawnLocation = GetActorLocation() + (forward * spawnDistance);
	FTransform SpawnTransform(GetActorRotation(), spawnLocation);
	
	// instantiate
	ADodgeballProjectile* projectile = GetWorld()->SpawnActorDeferred<ADodgeballProjectile>(DodgeProjectile, SpawnTransform);
	projectile->GetProjectileMovementComponent()->InitialSpeed = 2000.0f;
	projectile->FinishSpawning(SpawnTransform);
}
