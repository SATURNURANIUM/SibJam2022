// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserWidgetBase.h"
#include "GameUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class SIBJAMP2022PROJECT_API UGameUserWidget : public UUserWidgetBase
{
	GENERATED_BODY()
    
protected:

    virtual void OnStart() override;
};
