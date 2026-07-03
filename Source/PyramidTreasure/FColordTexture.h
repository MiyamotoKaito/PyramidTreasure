#pragma once
#include "CoreMinimal.h"
#include "FColordTexture.generated.h"

USTRUCT(Blueprintable)
struct PYRAMIDTREASURE_API FColordTexture
{
	GENERATED_BODY()
	
	public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	TObjectPtr<UTexture> Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	FLinearColor Color;
};
