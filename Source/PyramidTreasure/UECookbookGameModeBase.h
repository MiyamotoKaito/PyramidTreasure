// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UECookbookGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PYRAMIDTREASURE_API AUECookbookGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<AActor> MyActorClass;
protected:
	virtual void BeginPlay() override;
};
