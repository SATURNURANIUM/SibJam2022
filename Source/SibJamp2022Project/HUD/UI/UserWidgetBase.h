// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class SIBJAMP2022PROJECT_API UUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
    virtual void OnStart() {}
};
