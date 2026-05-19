// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MurcusPlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/MurcusPlayerState.h"
#include "AbilitySystem/StankAbilitySystemComponent.h"

AMurcusPlayerCharacter::AMurcusPlayerCharacter()
{

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

}

void AMurcusPlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitAbilityActorInfo();

}

void AMurcusPlayerCharacter::InitAbilityActorInfo()
{
	AMurcusPlayerState* MurcusPlayerState = GetPlayerState<AMurcusPlayerState>();
	check(MurcusPlayerState);
	MurcusPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(MurcusPlayerState, this);
	AbilitySystemComponent = MurcusPlayerState->GetAbilitySystemComponent();
	AttributeSet = MurcusPlayerState->GetAttributeSet();
}
