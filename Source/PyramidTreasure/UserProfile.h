// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UserProfile.generated.h"
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PYRAMIDTREASURE_API UUserProfile : public UObject
{
	GENERATED_BODY()
	public: 
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Stats)
	float Armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	FString Name;
};
