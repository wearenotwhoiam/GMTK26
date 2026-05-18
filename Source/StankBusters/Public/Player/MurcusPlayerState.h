// Fill out your copyright notice in the Description page of Project Settings.

//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/PlayerState.h"
//#include "AbilitySystemInterface.h"
//#include "MurcusPlayerState.generated.h"
//
//class UAbilitySystemComponent;
//class UAttributeSet;
//
//UCLASS()
//class STANKBUSTERS_API AMurcusPlayerState : public APlayerState, public IAbilitySystemInterface
//{
//	GENERATED_BODY()
//
//public:
//	AMurcusPlayerState();
//	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
//	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
//protected:
//
//#pragma region AbilitySystem
//	UPROPERTY(EditAnywhere, Category = "Combat")
//	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
//
//	UPROPERTY()
//	TObjectPtr<UAttributeSet> AttributeSet;
//#pragma endregion
//};
