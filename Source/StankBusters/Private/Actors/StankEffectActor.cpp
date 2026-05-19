// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/StankEffectActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/StankAttributeSet.h"
#include "Components/SphereComponent.h"
// Sets default values
AStankEffectActor::AStankEffectActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	Sphere->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AStankEffectActor::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AStankEffectActor::OnOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AStankEffectActor::EndOverlap);
}

void AStankEffectActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IAbilitySystemInterface* ASCInterface = Cast<IAbilitySystemInterface>(OtherActor))
	{
		const UStankAttributeSet* StankAttributeSet = Cast<UStankAttributeSet>(ASCInterface->GetAbilitySystemComponent()->GetAttributeSet(UStankAttributeSet::StaticClass()));

		UStankAttributeSet* MutableStankAttributeSet = const_cast<UStankAttributeSet*>(StankAttributeSet);
		MutableStankAttributeSet->SetCurrentMucus(StankAttributeSet->GetCurrentMucus() + 25.f);
		Destroy();
	}
}

void AStankEffectActor::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}
