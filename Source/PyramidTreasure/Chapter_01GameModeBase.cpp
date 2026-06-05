// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter_01GameModeBase.h"

void AChapter_01GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Some aaa") );
	
	// UE_LOG message with arguments
	int Intvar = 5;
	float floatVar = 3.7f;
	FString fstirngVar = "an fstrinbg variable";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), Intvar, floatVar, *fstirngVar );
	
	FString name = "Tim";
	int32 mana = 450;
	FString string = FString::Printf(TEXT("Name = %s Mana = %d" ), *name, mana );
	UE_LOG(LogTemp, Warning, TEXT("%s"), *string );
	
	FString Name = "Tim";
	int32 mana2 = 450;
	TArray<FStringFormatArg> args;
	auto a = FStringFormatArg(Name);
	args.Add(a);
	args.Add(FStringFormatArg(mana2));
	FString string2 =FString::Format(TEXT("Name = {0} Mana = {1}"), args);
	UE_LOG(LogTemp, Warning, TEXT("your strings :%s"), *string2 );
}