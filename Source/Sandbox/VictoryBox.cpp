// Fill out your copyright notice in the Description page of Project Settings.


#include "VictoryBox.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SandboxCharacter.h"

// Sets default values
AVictoryBox::AVictoryBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(60.0f,60.0f,60.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f,0.0f,120.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AVictoryBox::OnBeginOverlap);
}

// Called when the game starts or when spawned
void AVictoryBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVictoryBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVictoryBox::OnBeginOverlap(UPrimitiveComponent* sourceComponent, AActor* targetActor, UPrimitiveComponent* targetComponent, int32 targetBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	if(Cast<ASandboxCharacter>(targetActor) != nullptr)
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
	}
}

