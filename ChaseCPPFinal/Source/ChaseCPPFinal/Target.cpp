// Fill out your copyright notice in the Description page of Project Settings.

#include "Target.h"
#include "Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Engine/World.h"
#include "Goal.h"


// Sets default values
ATarget::ATarget()
{
	pointValue = 10;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp")); // Creates Box Component
	BoxComp->SetSimulatePhysics(true);
	BoxComp->SetNotifyRigidBodyCollision(true);

	BoxComp->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	BoxComp->OnComponentHit.AddDynamic(this, &ATarget::OnCompHit);

	RootComponent = BoxComp;

	CubeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeComponent"));

	CubeComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MyMesh(TEXT("/Engine/BasicShapes/Cube"));

	if (MyMesh.Succeeded())
	{
		CubeComponent->SetStaticMesh(MyMesh.Object);
		CubeComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		CubeComponent->SetWorldScale3D(FVector(0.625f));

	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface>MyMat(TEXT("/Game/Materials/BlueMaterial"));
	if (MyMat.Succeeded())
	{
		blueMat = MyMat.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint>TargetBlueprint(TEXT("/Game/FirstPersonBP/Blueprints/Target_Blueprint.Target_Blueprint"));
	if (TargetBlueprint.Succeeded())
	{
		MyTargetBlueprint = (UClass*)TargetBlueprint.Object->GeneratedClass;
	}

	hasHitGoal = false;
}


// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATarget::ChangeColor()
{
	CubeComponent->SetMaterial(0, blueMat);
	Wait();
}

void ATarget::Wait()
{
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ATarget::DeleteMiss, 5.0f, false);
		
}

void ATarget::DeleteMiss()
{
	FVector Location(400.0f, 120.0f, 260.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<ATarget>(MyTargetBlueprint, Location, Rotation, SpawnInfo);
	Destroy();
}

void ATarget::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		if (OtherActor->ActorHasTag("Projectile"))
		{
			ChangeColor();
		}
		if (OtherActor->IsA(AGoal::StaticClass()) && hasHitGoal == false)
		{
			hasHitGoal = true;
			FVector Location(400.0f, 120.0f, 260.0f);
			FRotator Rotation(0.0f, 0.0f, 0.0f);
			FActorSpawnParameters SpawnInfo;
			GetWorld()->SpawnActor<ATarget>(MyTargetBlueprint, Location, Rotation, SpawnInfo);
		}
	}
}


