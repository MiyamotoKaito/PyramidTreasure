// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Chapter_01GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PYRAMIDTREASURE_API AChapter_01GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	// Basi UE_LOG message
protected:
	virtual void BeginPlay() override;
};
