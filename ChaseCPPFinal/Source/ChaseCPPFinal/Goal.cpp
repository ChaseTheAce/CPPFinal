// Fill out your copyright notice in the Description page of Project Settings.

#include "Goal.h"
#include "Target.h"
#include "Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Engine/World.h"

// Sets default values
AGoal::AGoal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GoalBox = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalBox"));
	GoalBox->SetSimulatePhysics(false);
	GoalBox->SetNotifyRigidBodyCollision(true);
	GoalBox->SetWorldScale3D(FVector(4.25f, 0.5f, 2.5f));

	GoalBox->BodyInstance.SetCollisionProfileName("BlockAllDynamic");

	RootComponent = GoalBox;

	GoalModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GoalModel"));
	GoalModel->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>GoalMesh(TEXT("/Engine/BasicShapes/Cube"));

	if (GoalMesh.Succeeded())
	{
		GoalModel->SetStaticMesh(GoalMesh.Object);
		GoalModel->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		GoalModel->SetWorldScale3D(FVector(0.625f));

	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface>MyGoalMat(TEXT("/Game/Materials/GoalMaterial"));
	if (MyGoalMat.Succeeded())
	{
		goalMat = MyGoalMat.Object;		
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint>TargetBlueprint(TEXT("/Game/FirstPersonBP/Blueprints/Target_Blueprint.Target_Blueprint"));
	if (TargetBlueprint.Succeeded())
	{
		MyTargetBlueprint = (UClass*)TargetBlueprint.Object->GeneratedClass;
	}
	
	origin = GetActorLocation();
	moveSpeed = 1;
	isTiming = false;
}


// Called when the game starts or when spawned
void AGoal::BeginPlay()
{
	Super::BeginPlay();
	FVector Location(400.0f, 120.0f, 260.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<ATarget>(MyTargetBlueprint, Location, Rotation, SpawnInfo);

	GoalModel->SetMaterial(0, goalMat);

}

// Called every frame
void AGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}


void AGoal::Move()
{
	FVector newLoc = GetActorLocation();
	bool isMovingAwayFromOrigin = true;
	newLoc.X += moveSpeed;
	if (!isTiming)
	{
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AGoal::FlipMove, 5.0f, false);
		isTiming = true;
	}
			
	this->SetActorLocation(newLoc);
}

void AGoal::FlipMove()
{	
	moveSpeed *= -1;
	GetWorldTimerManager().ClearTimer(TimerHandle);
	isTiming = false;
}
