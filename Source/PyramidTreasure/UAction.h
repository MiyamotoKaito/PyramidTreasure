// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UAction.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, BlueprintType, meta=(ShortCutTooltip ="base class for Action type" ))
class PYRAMIDTREASURE_API UUAction : public UObject
{
	GENERATED_BODY()
	
	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	FKey ShortcutKey;
};
