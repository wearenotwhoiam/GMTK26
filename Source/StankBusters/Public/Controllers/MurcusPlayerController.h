// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MurcusPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STANKBUSTERS_API AMurcusPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AMurcusPlayerController();
protected:
	virtual void BeginPlay() override;
};
