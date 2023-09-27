// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "VictoryBox.generated.h"

UCLASS()
class SANDBOX_API AVictoryBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVictoryBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* sourceComponent, AActor* targetActor, UPrimitiveComponent* targetComponent, int32 targetBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Victory, meta = (AllowPrivateAccess = "true"))
	USceneComponent* RootScene;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Victory, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* CollisionBox;
};
