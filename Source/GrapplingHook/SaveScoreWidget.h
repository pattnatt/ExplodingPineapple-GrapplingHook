// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetTree.h"
#include "TextWidgetTypes.h"
#include "TextBlock.h"
#include "SaveScoreWidget.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class GRAPPLINGHOOK_API USaveScoreWidget : public UUserWidget
{
	GENERATED_BODY()
	
private:
	bool canDisplayScore;

public:
	virtual void NativeConstruct() override;

public:
	
	UFUNCTION(BlueprintPure, Category = "Text")
	FText GetscoreText() const;
	
	UPROPERTY()
	class AGrapplingHookCharacter* characterInWorld;
};
