// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "DodgeballProjectile.h"
#include "LookAtActor.h"

#include "EnemyCharacter.generated.h" // Always Last

UCLASS()
class SANDBOX_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LookAt, meta = (AllowPrivateAccess = "true"))
	ULookAtActor* LookAtActorComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Dodgeball)
	TSubclassOf<class ADodgeballProjectile> DodgeProjectile;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	bool bPlayerSeen = false;
	bool bPreviousPlayerSeen = false;
	FTimerHandle throwTimerHandle;
	float throwInterval = 2.0f;
	float throwDelay = 0.5f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ThrowDodgeball();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
