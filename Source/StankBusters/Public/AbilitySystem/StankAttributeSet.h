// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystem/StankAbilitySystemComponent.h"

#include "StankAttributeSet.generated.h"

//#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
// 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
// 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
// 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
// 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class STANKBUSTERS_API UStankAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UStankAttributeSet();

	//UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	//FGameplayAttributeData CurrentMucus;
	//ATTRIBUTE_ACCESSORS(UStankAttributeSet, CurrentMucus);
	//UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	//FGameplayAttributeData MaxMucus;
	//ATTRIBUTE_ACCESSORS(UStankAttributeSet, MaxMucus);

};
