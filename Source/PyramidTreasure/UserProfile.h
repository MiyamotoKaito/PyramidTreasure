// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FColordTexture.h"
#include "EnumName.h"
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = unit)
	TSubclassOf<UObject> UClassOfPlayer;
	UPROPERTY(EditAnywhere,meta = (MetaClass = "/Script/Engine.GameMode"), Category = unit)
	FSoftClassPath UClassGameMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD);
	FColordTexture Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	TEnumAsByte<Status> States;
};
