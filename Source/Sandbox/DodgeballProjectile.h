// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "DodgeballProjectile.generated.h"

UCLASS()
class SANDBOX_API ADodgeballProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADodgeballProjectile();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category=Damage)
	float Damage = 34.0f;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<USoundBase> BounceSound;

	UPROPERTY(EditAnywhere, Category=Sound)
	TObjectPtr<USoundAttenuation> Attenuation;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UProjectileMovementComponent* GetProjectileMovementComponent() const
	{
		return ProjectileMovement;
	}

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Dodgeball, meta = (AllowPrivateAccess = "true"))
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = dodgeball, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;

};
