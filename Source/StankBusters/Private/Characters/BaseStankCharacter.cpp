// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BaseStankCharacter.h"
#include "AbilitySystem/StankAttributeSet.h"
#include "AbilitySystem/StankAbilitySystemComponent.h"

// Sets default values
ABaseStankCharacter::ABaseStankCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

UAbilitySystemComponent* ABaseStankCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void ABaseStankCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}